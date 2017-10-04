Step 1: download and install PyXB

Step 1.1: A zip file of PyXB can be downloaded from: https://sourceforge.net/projects/pyxb/

Step 1.2: Unzip the file in a folder.

Step 1.3: In a CMD window change directory (cd) to that folder

Step 1.4: Install my executing
	py setup.py install

Step 2: copy the QIF schema files into the QIF2.1_Open_Source_Apps\Python\PyXB\QIFApplications and
        QIF2.1_Open_Source_Apps\Python\PyXB\QIFLibrary folders. Do not overwrite QIFDocument.xsd.

Step 3: build the source code bindings

In a CMD window...
Step 3.1: change to the QIFApplications folder

cd <qif-community_folder>\QIF2.1_Open_Source_Apps\Python\PyXB\QIFApplications

Step 3.2: call pyxbgen

py <python_install_folder>\scripts\pyxbgen --schema-location=QIFDocument.xsd --schema-root=QIF21 --module=QIFDocument

You will see these messages:
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeBoolType.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeStrType.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeI1Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeD1Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeI2Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeI3Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeD2Type.value renamed to value_
WARNING:pyxb.binding.generate:Attribute {http://qifstandards.org/xsd/qif2}AttributeD3Type.value renamed to value_
Python for http://qifstandards.org/xsd/qif2 requires 1 modules

The symbol "value" is reserved by PyXB for accessing the value of objects derived from XML base types. QIF uses an attribute "value"
which conflicts with symbol, so the QIF attribute "value" is renamed "value_".

Step 4: copy or move qifdocument.py to <qif-community_folder>\QIF2.1_Open_Source_Apps\Python\PyXB

You are ready to run the apps.