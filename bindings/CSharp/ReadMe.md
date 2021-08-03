# # C# Source Code Binding Generator for QIF 3.0

QIFdotNET C# source code bindings for QIF 3.0 with test application

## Overview

To create C# source code bindings with Microsoft's XSD tool:

### Step 1: 

Copy the QIF 3.0 schema files into QIFApplications and QIFLibrary.Do not overwrite QIFDocument.xsd.

### Step 2: open a visual studio command prompt:
Start->All Programs->Microsoft Visual Studio 2010->Visual Studio Tools->Visual Studio Command Prompt

### Step 3: 

Change directory to `QIFApplications` folder

### Step 4: 

Create the source code bindings using:
`xsd /c /e:QIFDocument /n:qif30 QIFDocument.xsd`

where,
`/c` causes classes to be generated (default language is C#)
`/e` identifies the root element (case sensitive)
`/n` defines the namespace (adding the statement "using qif30;" gives access to the QIF 3.0 classes found in QIFDocument.cs which must be added to your application project's source file list)

# More Info

To get an error-free conversion two schema files needed to be edited from their original form:
`xmldsig-core-schema.xsd` was rewritten to be in the `qif3` namespace as `xmldsig-core-schema-qif3-namespace.xsd` with some global elements made local to resolve element name conflicts with QIF 3.0. QIFDocument.xsd was edited to reference this new schema and the new namespace for the `Signature` element. _These edited schemas will still generate QIF documents valid against the original, unedited schema files._

The resulting `QIFDocument.cs` must be edited to resolve three issues:
1. The XSD tool does not support list elements (it does however support list attributes). This requires replacing lists of doubles, ints, etc, with space delimted text strings.
2. Substitution groups are missing all but the base element type. The other polymorphic substitutions must be added manually.
3. Code needs to be added so that the xsi:schemaLocation attribute will appear in the QIFDocument XML header.

These edits have been performed in the `QIFdotNET\QIFDocument.cs` file contained in the download package. Search for `MANEDIT` to see these changes or compare with the file you created.

# The test harness application

`QIFdotNET.sln` is a Visual Studio 2010 solution for a two-button form application that:
1. Reads any QIF document and if the document has measurement results a DMIS format results file is created from the QIF data, otherwise it displays information about diameter characteristics, distance between characteristics, and circle features. The application has a commented-out section that can save the loaded QIF document in its entirety to test the fidelity of the deserializer/serializer.
2. Writes a QIF document containing an ABC datum reference frame defined by a plane and two cylinders, a circle with position back to ABC, with measured results.

The test harness illustrates a method of moving `double[3]` list elements for locations and vectors into and out of their text string containers.