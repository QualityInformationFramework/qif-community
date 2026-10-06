"""Loss-aware QIF 2/3 characteristic inventory. No semantic tolerance conversion.

Retains complete item/nominal/definition XML and file unit declarations. Handles
MBD-only files that have nominals but no measurement characteristic items.
"""

import argparse, hashlib, json
from pathlib import Path
from lxml import etree

SUPPORTED = {"http://qifstandards.org/xsd/qif2", "http://qifstandards.org/xsd/qif3"}


def local(element):
    return etree.QName(element).localname


def text(element, name):
    if element is None:
        return None
    found = element.find("{*}" + name)
    return found.text.strip() if found is not None and found.text else None


def persistent_id(element):
    if element is None:
        return None
    uuid = element.find("{*}CharacteristicDesignator/{*}UUID")
    if uuid is not None and uuid.text:
        return uuid.text.strip()
    qp = element.find('{*}Attributes/{*}AttributeQPId[@name="QPId"]/{*}Value')
    return qp.text.strip() if qp is not None and qp.text else None


def external_link(element, name):
    if element is None:
        return False
    link = element.find("{*}" + name)
    return link is not None and bool(link.get("xId") or link.get("xQPId"))


def xml(element):
    return (
        etree.tostring(element, encoding="unicode", with_tail=False)
        if element is not None
        else None
    )


def values(element):
    if element is None:
        return []
    return [
        {
            "path": element.getroottree().getpath(e),
            "tag": local(e),
            "value": e.text.strip(),
            "attributes": dict(e.attrib),
        }
        for e in element.iter()
        if not len(e) and e.text and e.text.strip()
    ]


def inventory(path):
    path = Path(path)
    parser = etree.XMLParser(
        resolve_entities=False,
        no_network=True,
        remove_blank_text=True,
        remove_comments=True,
        remove_pis=True,
    )
    root = etree.fromstring(path.read_bytes(), parser)
    ns = etree.QName(root).namespace
    if local(root) != "QIFDocument" or ns not in SUPPORTED:
        raise ValueError("Expected QIFDocument in QIF 2/3 namespace")
    warnings = []
    if root.getroottree().docinfo.doctype:
        raise ValueError("DTD is not supported")
    ids = {}
    for e in root.iter():
        if e.get("id"):
            if e.get("id") in ids:
                raise ValueError("Duplicate QIF id " + e.get("id"))
            ids[e.get("id")] = e
    sections = root.findall("{*}Characteristics")
    if len(sections) != 1:
        raise ValueError(f"Expected one Characteristics section, found {len(sections)}")
    section = sections[0]
    all_parts = {}
    for name in [
        "CharacteristicDefinitions",
        "CharacteristicNominals",
        "CharacteristicItems",
    ]:
        container = section.find("{*}" + name)
        children = list(container) if container is not None else []
        if (
            container is not None
            and container.get("n") is not None
            and container.get("n") != str(len(children))
        ):
            warnings.append(name + " count attribute mismatch")
        if any(not e.get("id") for e in children):
            raise ValueError(name + " element missing id")
        all_parts[name] = children
    items = all_parts["CharacteristicItems"]
    nominals = all_parts["CharacteristicNominals"]
    definitions = all_parts["CharacteristicDefinitions"]
    nominal_by_id = {e.get("id"): e for e in nominals}
    definition_by_id = {e.get("id"): e for e in definitions}
    rows = []
    used_nominals = set()
    used_definitions = set()

    def emit(base, level, nominal):
        flags = []
        if nominal is None:
            flags.append("unresolved CharacteristicNominalId")
        else:
            used_nominals.add(nominal.get("id"))
        did = text(nominal, "CharacteristicDefinitionId")
        definition = (
            None
            if external_link(nominal, "CharacteristicDefinitionId")
            else definition_by_id.get(did)
        )
        if definition is None:
            flags.append("unresolved CharacteristicDefinitionId")
        else:
            used_definitions.add(did)
        qpid = persistent_id(base)
        if external_link(nominal, "CharacteristicDefinitionId"):
            flags.append("external CharacteristicDefinitionId")
        if external_link(base, "CharacteristicNominalId"):
            flags.append("external CharacteristicNominalId")
        if (
            nominal is not None
            and definition is not None
            and local(nominal).removesuffix("Nominal")
            != local(definition).removesuffix("Definition")
        ):
            flags.append("characteristic nominal/definition type mismatch")
        if (
            level == "item"
            and nominal is not None
            and local(base).removesuffix("Item")
            != local(nominal).removesuffix("Nominal")
        ):
            flags.append("characteristic item/nominal type mismatch")
        row = {
            "id": base.get("id"),
            "level": level,
            "type": local(base),
            "name": text(base, "Name"),
            "qpid": qpid,
            "item_xml": xml(base) if level == "item" else None,
            "nominal_xml": xml(nominal),
            "definition_xml": xml(definition),
            "nominal_id": nominal.get("id") if nominal is not None else None,
            "definition_id": did,
            "source_path": base.getroottree().getpath(base),
            "nominal_values": values(nominal),
            "definition_values": values(definition),
            "flags": flags,
        }
        rows.append(row)

    for item in items:
        emit(
            item,
            "item",
            None
            if external_link(item, "CharacteristicNominalId")
            else nominal_by_id.get(text(item, "CharacteristicNominalId")),
        )
    for nominal in nominals:
        if nominal.get("id") not in used_nominals:
            emit(nominal, "nominal", nominal)
            if items:
                rows[-1]["flags"].append("nominal has no characteristic item")
    for definition in definitions:
        if definition.get("id") not in used_definitions:
            rows.append(
                {
                    "id": definition.get("id"),
                    "level": "definition",
                    "type": local(definition),
                    "name": text(definition, "Name"),
                    "qpid": None,
                    "item_xml": None,
                    "nominal_xml": None,
                    "definition_xml": xml(definition),
                    "nominal_id": None,
                    "definition_id": definition.get("id"),
                    "source_path": definition.getroottree().getpath(definition),
                    "nominal_values": [],
                    "definition_values": values(definition),
                    "flags": ["definition has no characteristic nominal"],
                }
            )
    if not items and nominals:
        warnings.append(
            "MBD-only inventory: rows represent characteristic nominals, not inspected item instances"
        )
    if not rows:
        warnings.append(
            "No characteristic inventory found; this is not proof that the product has no requirements"
        )
    unit_elements = [
        e for e in root if local(e) in ["FileUnits", "Units", "PrimaryUnits"]
    ]
    if not unit_elements:
        warnings.append(
            "No root file-unit declarations; numeric values require source context"
        )
    # Retain direct referenced entities only; not a complete transitive geometry closure.
    references = {}
    for row in rows:
        for key in ["item_xml", "nominal_xml", "definition_xml"]:
            if not row[key]:
                continue
            element = etree.fromstring(row[key].encode())
            for e in element.iter():
                tag = local(e)
                if (
                    tag.endswith("Id")
                    and e.text
                    and tag
                    not in ["CharacteristicNominalId", "CharacteristicDefinitionId"]
                ):
                    ref = e.text.strip()
                    target = ids.get(ref)
                    # xId is an external document reference: never resolve against local IDs.
                    if e.get("xId") or e.get("xQPId"):
                        row["flags"].append(f"external reference {tag}={ref}")
                    elif target is None:
                        row["flags"].append(f"unresolved reference {tag}={ref}")
                    else:
                        references[ref] = xml(target)
                elif tag == "Id" and e.text:
                    ref = e.text.strip()
                    target = ids.get(ref)
                    if e.get("xId") or e.get("xQPId"):
                        row["flags"].append("external array reference " + ref)
                    elif target is None:
                        row["flags"].append("unresolved array reference " + ref)
                    else:
                        references[ref] = xml(target)
    return {
        "source": str(path),
        "sha256": hashlib.sha256(path.read_bytes()).hexdigest(),
        "namespace": ns,
        "version": root.get("versionQIF"),
        "counts": {k: len(v) for k, v in all_parts.items()},
        "unit_xml": [xml(e) for e in unit_elements],
        "rows": rows,
        "reference_xml": references,
        "warnings": warnings,
        "scope": "XML inventory, not interpreted GD&T or verified PDF correspondence",
    }


def main():
    p = argparse.ArgumentParser()
    p.add_argument("qif")
    p.add_argument("output")
    a = p.parse_args()
    result = inventory(a.qif)
    Path(a.output).write_text(json.dumps(result, indent=2) + "\n")
    print(
        json.dumps(
            {
                "rows": len(result["rows"]),
                "counts": result["counts"],
                "warnings": result["warnings"],
            }
        )
    )


if __name__ == "__main__":
    main()
