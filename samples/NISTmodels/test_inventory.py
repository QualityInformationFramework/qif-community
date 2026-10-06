"""Run beside the six existing NIST sample files. Requires lxml."""
import copy
import tempfile
import unittest
from pathlib import Path
from lxml import etree
from qif_inventory import inventory
from check_inventory import check

HERE = Path(__file__).resolve().parent
SAMPLES = {
    "nist_ctc_01_asme1_ap242.qif": 14,
    "nist_ctc_03_asme1_ap242.qif": 22,
    "nist_ctc_05_asme1_ap242.qif": 16,
    "nist_ftc_06_asme1_ap242.qif": 47,
    "nist_ftc_08_asme1_ap242-1.qif": 37,
    "nist_ftc_09_asme1_ap242.qif": 53,
}

class InventoryChecks(unittest.TestCase):
    def test_original_samples_and_drop_duplicate_controls(self):
        for name, count in SAMPLES.items():
            source = HERE / name
            self.assertTrue(source.exists(), f"Missing original sample: {source}")
            result = inventory(source)
            self.assertEqual(result["counts"]["CharacteristicItems"], 0)
            self.assertEqual(len(result["rows"]), count)
            self.assertEqual(check(source, result)["status"], "PASS")
            for action in ("drop", "duplicate"):
                broken = copy.deepcopy(result)
                if action == "drop":
                    broken["rows"].pop()
                else:
                    broken["rows"].append(copy.deepcopy(broken["rows"][0]))
                with self.assertRaises(AssertionError):
                    check(source, broken)

    def test_altered_retained_definition_is_rejected(self):
        source = HERE / "nist_ctc_01_asme1_ap242.qif"
        result = inventory(source)
        definition = etree.fromstring(result["rows"][0]["definition_xml"].encode())
        next(e for e in definition.iter() if not len(e) and e.text).text = "ALTERED"
        result["rows"][0]["definition_xml"] = etree.tostring(
            definition, encoding="unicode"
        )
        with self.assertRaises(AssertionError):
            check(source, result)

    def test_external_reference_never_resolves_to_same_local_id(self):
        source = HERE / "nist_ctc_01_asme1_ap242.qif"
        document = etree.parse(str(source))
        document.find(".//{*}CharacteristicDefinitionId").set("xId", "1")
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "external.qif"
            document.write(str(path))
            result = inventory(path)
            row = next(
                r for r in result["rows"]
                if "external CharacteristicDefinitionId" in r["flags"]
            )
            self.assertIsNone(row["definition_xml"])
            self.assertEqual(check(path, result)["status"], "PASS")

if __name__ == "__main__":
    unittest.main(verbosity=2)
