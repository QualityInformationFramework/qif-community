# Characteristic inventory example

These MBD samples contain characteristic definitions and nominals but no
`CharacteristicItems`. Traversing only characteristic items therefore returns
zero rows. This example inventories nominals when item instances are absent,
while distinguishing those rows from inspected characteristic items.

Requires Python 3.10+ and `lxml`. From this directory:

```sh
python qif_inventory.py nist_ctc_01_asme1_ap242.qif ctc01-inventory.json
python check_inventory.py nist_ctc_01_asme1_ap242.qif ctc01-inventory.json
python test_inventory.py
```

The six existing samples contain 14, 22, 16, 47, 37 and 53 characteristic
nominals, respectively (189 total). The test checks every original input with
an independent ElementTree inventory and rejects dropped rows, duplicate rows
and altered retained definitions.

Each output row retains source identifiers, full item/nominal/definition XML,
numeric leaf values with their attributes, source XML paths and unresolved-link
flags. Root file-unit declarations and direct referenced entities are retained.
External characteristic references are flagged and never guessed from matching
local ID numbers. Orphan definitions and nominals remain visible.

This is an XML inventory. It does not interpret GD&T, convert numeric units,
generate a valid QIF document, recover PDF annotations, or establish cross-export
revision identity. A JSON inventory with all rows preserved does not certify
that the original QIF model is correct. Use the published QIF schemas and
validation tools separately.

Local check at qif-community commit
`64268c175a3058d09db29c14869b94b781518709`: all six sources pass the repository's
QIF3 XSD. The additional maintainer XSLT checker, with its documented
`use_msxml=false()` configuration, reports inherited findings on those same
unmodified samples; this example does not repair or reinterpret them.

The examples use public NIST models. NIST is acknowledged as the model source;
their use does not imply NIST endorsement.

These example scripts are offered under this repository's Boost Software
License 1.0.
