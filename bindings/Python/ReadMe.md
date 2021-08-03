# # Python Source Code Binding Generator for QIF 3.0

## Step 1: download and install PyXB

### Step 1.1: 

A zip file of PyXB can be downloaded from: https://sourceforge.net/projects/pyxb/

### Step 1.2: 

Unzip the file in a folder.

### Step 1.3: 

In a CMD window change directory (cd) to that folder

### Step 1.4: 

Install PyXB by executing

```
py setup.py install
```

---

## Step 2: 

Copy the QIF schema files into the folders: 

* `QIF3.0_Open_Source_Apps\Python\PyXB\QIFApplications` and 
* `QIF3.0_Open_Source_Apps\Python\PyXB\QIFLibrary`  

**Do not** overwrite `QIFDocument.xsd`.

---

## Step 3: build the source code bindings

In a CMD window...

### Step 3.1: 

Change to the QIFApplications folder

```
cd <qif-community_folder>\QIF3.0_Open_Source_Apps\Python\PyXB\QIFApplications
```

### Step 3.2: call pyxbgen

```
py <python_install_folder>\scripts\pyxbgen --schema-location=QIFDocument.xsd --schema-root=QIF30 --module=QIFDocument
```

You will see these messages:
```
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeBoolType.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeStrType.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeI1Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeD1Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeI2Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeI3Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeD2Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeD3Type.value renamed to value_
Python for http://qifstandards.org/xsd/qif3 requires 1 modules
```

This just means that the symbol `value` is reserved by PyXB for accessing the value of objects derived from XML base types. QIF uses an attribute `value` which conflicts with this symbol, so the QIF attribute `value` is renamed `value_`.

---

### Step 4: 

Copy or move `qifdocument.py` to `<qif-community_folder>\QIF3.0_Open_Source_Apps\Python\PyXB`

You are ready to run the apps.