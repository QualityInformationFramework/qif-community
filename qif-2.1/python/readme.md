# Python source code bindings for QIF 2.1 with test application

## Step 1: download and install PyXB

1. A zip file of PyXB can be downloaded from: <https://sourceforge.net/projects/pyxb/>
2. Unzip the file in a folder.
3. In a CMD window change directory (cd) to that folder
4. Install by executing:  
   `py setup.py install`

## Step 2: Copy QIF Schema Files

Copy the QIF schema files into the `qif-2.1\python\QIFApplications` and `qif-2.1\python\QIFLibrary folders`. Do not overwrite `QIFDocument.xsd`.

## Step 3: build the source code bindings

In a CMD window:

1. change to the QIFApplications folder  
   ```
   cd <qif-community_folder>\qif-2.1\python\QIFApplications
   ```
2. call pyxbgen  
   ```
   py pyxbgen --schema-location=QIFDocument.xsd --schema-root=QIF21 --module=QIFDocument
   ```

   _Note: If your PATH has not been set by the Python installer, then you may need to specify the full path of the pyxbgen script:_ `<python_install_folder>\scripts\pyxbgen`

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
   Python for http://qifstandards.org/xsd/qif2 requires 1 modules
   ```

   The symbol "value" is reserved by PyXB for accessing the value of objects derived from XML base types. QIF uses an attribute "value" which conflicts with symbol, so the QIF attribute "value" is renamed "value_".

## Step 4: Run the apps

Copy or move `qifdocument.py` to `<qif-community_folder>\qif-2.1\python\`

You are ready to run the apps.