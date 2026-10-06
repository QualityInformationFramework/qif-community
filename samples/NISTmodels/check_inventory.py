"""Independent original-input check: stdlib ElementTree enumeration and leaf content.

Does not import the extractor. Rejects dropped/duplicated rows, dropped definitions,
mutated retained XML, missing source evidence, and incorrectly reported counts.
"""

import argparse, collections, hashlib, json, xml.etree.ElementTree as ET
from pathlib import Path


def canonical(e):
    return (
        e.tag,
        tuple(sorted(e.attrib.items())),
        (e.text or "").strip(),
        tuple(canonical(c) for c in e),
    )


def check(source, result):
    raw = Path(source).read_bytes()
    root = ET.fromstring(raw)
    ns = root.tag.split("}")[0] + "}"
    section = root.find(ns + "Characteristics")
    assert section is not None
    containers = {
        k: section.find(ns + k)
        for k in [
            "CharacteristicDefinitions",
            "CharacteristicNominals",
            "CharacteristicItems",
        ]
    }
    elems = {k: list(v) if v is not None else [] for k, v in containers.items()}
    assert result["sha256"] == hashlib.sha256(raw).hexdigest(), (
        "wrong original-input hash"
    )
    assert result["counts"] == {k: len(v) for k, v in elems.items()}, "count mismatch"
    expected_items = {e.attrib["id"]: e for e in elems["CharacteristicItems"]}
    expected_nominals = {e.attrib["id"]: e for e in elems["CharacteristicNominals"]}
    expected_definitions = {
        e.attrib["id"]: e for e in elems["CharacteristicDefinitions"]
    }
    actual_items = collections.Counter(
        r["id"] for r in result["rows"] if r["level"] == "item"
    )
    assert actual_items == collections.Counter(expected_items.keys()), (
        "dropped or repeated item"
    )
    actual_nominals = {
        r["nominal_id"] for r in result["rows"] if r["nominal_xml"] is not None
    }
    assert actual_nominals == set(expected_nominals), "dropped nominal"
    actual_definitions = {
        r["definition_id"] for r in result["rows"] if r["definition_xml"] is not None
    }
    assert actual_definitions == set(expected_definitions), "dropped definition"
    base_ids = collections.Counter((r["level"], r["id"]) for r in result["rows"])
    assert all(n == 1 for n in base_ids.values()), "duplicate inventory row"
    linked_nominals = {
        e.findtext(ns + "CharacteristicNominalId")
        for e in expected_items.values()
        if not (
            e.find(ns + "CharacteristicNominalId").get("xId")
            or e.find(ns + "CharacteristicNominalId").get("xQPId")
        )
    }
    orphan_nominals = set(expected_nominals) - linked_nominals
    assert {
        r["id"] for r in result["rows"] if r["level"] == "nominal"
    } == orphan_nominals, "incorrect orphan nominal enumeration"
    linked_definitions = {
        e.findtext(ns + "CharacteristicDefinitionId")
        for e in expected_nominals.values()
        if not (
            e.find(ns + "CharacteristicDefinitionId").get("xId")
            or e.find(ns + "CharacteristicDefinitionId").get("xQPId")
        )
    }
    orphan_definitions = set(expected_definitions) - linked_definitions
    assert {
        r["id"] for r in result["rows"] if r["level"] == "definition"
    } == orphan_definitions, "incorrect orphan definition enumeration"
    for r in result["rows"]:
        base = {
            "item": expected_items,
            "nominal": expected_nominals,
            "definition": expected_definitions,
        }[r["level"]][r["id"]]
        uuid = base.findtext(ns + "CharacteristicDesignator/" + ns + "UUID")
        qp = base.findtext(
            ns + "Attributes/" + ns + 'AttributeQPId[@name="QPId"]/' + ns + "Value"
        )
        assert r["qpid"] == (uuid or qp), "persistent identity differs from source"
        for key, ident, expected in [
            ("item_xml", r["id"], expected_items),
            ("nominal_xml", r["nominal_id"], expected_nominals),
            ("definition_xml", r["definition_id"], expected_definitions),
        ]:
            if r[key] is not None:
                assert canonical(ET.fromstring(r[key])) == canonical(expected[ident]), (
                    "mutated " + key
                )
        if r["level"] == "item":
            nominal_ref = expected_items[r["id"]].findtext(
                ns + "CharacteristicNominalId"
            )
            link = expected_items[r["id"]].find(ns + "CharacteristicNominalId")
            if link.get("xId") or link.get("xQPId"):
                assert (
                    r["nominal_xml"] is None
                    and "external CharacteristicNominalId" in r["flags"]
                ), "external nominal misresolved"
            elif nominal_ref in expected_nominals:
                assert r["nominal_id"] == nominal_ref, "wrong nominal link"
        if r["nominal_id"]:
            def_ref = expected_nominals[r["nominal_id"]].findtext(
                ns + "CharacteristicDefinitionId"
            )
            assert r["definition_id"] == def_ref, "wrong definition link"
            link = expected_nominals[r["nominal_id"]].find(
                ns + "CharacteristicDefinitionId"
            )
            if link.get("xId") or link.get("xQPId"):
                assert (
                    r["definition_xml"] is None
                    and "external CharacteristicDefinitionId" in r["flags"]
                ), "external definition misresolved"
    expected_units = [
        e
        for e in root
        if e.tag.split("}")[-1] in ["FileUnits", "Units", "PrimaryUnits"]
    ]
    assert [canonical(ET.fromstring(s)) for s in result["unit_xml"]] == [
        canonical(e) for e in expected_units
    ], "dropped units"
    return {
        "status": "PASS",
        "scope": "independent XML retention/count/link check; not GD&T or PDF correspondence",
        "rows": len(result["rows"]),
        "counts": result["counts"],
    }


def main():
    p = argparse.ArgumentParser()
    p.add_argument("source")
    p.add_argument("inventory")
    a = p.parse_args()
    print(json.dumps(check(a.source, json.loads(Path(a.inventory).read_text()))))


if __name__ == "__main__":
    main()
