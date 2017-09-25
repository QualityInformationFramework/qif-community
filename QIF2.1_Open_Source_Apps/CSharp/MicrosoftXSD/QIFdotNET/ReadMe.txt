QIF.NET C# source code bindings for QIF 2.1 with test application

The file QIFDocument.cs contains C# source code bindings created with
Microsoft's XSD tool using:

xsd /c /e:QIFDocument /n:qif21 QIFDocument.xsd
(executed from a Visual Studio Developer Command Prompt in the folder containing QIFDocument.xsd)

where,
/c causes classes to be generated (default language is C#)
/e identifies the root element (case sensitive)
/n defines the namespace (adding the statement "using qif21;" gives access to the QIF 2.1 classes
   found in QIFDocument.cs which must be added to your application project's source file list)

To get an error-free conversion two schema files needed to be edited from their original form:
xmldsig-core-schema.xsd was rewritten to be in the qif2 namespace as xmldsig-core-schema-qif2-namespace.xsd
with some global elements made local to resolve element name conflicts with QIF 2.1.
QIFDocument.xsd was edited to reference this new schema and the new namespace for the Signature element.
(These edited schemas will still generate QIF documents valid against the original, unedited schema files.)

The resulting QIFDocument.cs was then edited to resolve three issues (search for MANEDIT to find changes):
1: The XSD tool does not support list elements (it does however support list attributes). This
   required replacing lists of doubles, ints, etc, with space delimted text strings.
2: Substitution groups were missing all but the base element type. The other polymorphic substitutions
   were added manually.
3: Code was added so that the xsi:schemaLocation attribute would appear in the QIFDocument XML header.

The test harness application:

QifStructureReader1.sln is a Visual Studio 2015 solution for a two-button form application that:
1. reads any QIF document and if the document has measurement results a DMIS format results file
   is created from the QIF data, otherwise it displays information about diameter characteristics,
   distance between characteristics, and circle features. The application has a commented-out
   section that can save the loaded QIF document in its entirety to test the fidelity of the
   deserializer/serializer.
2. writes a QIF document containing an ABC datum reference frame defined by a plane and two
   cylinders, a circle with position back to ABC, with measured results.

The test harness illustrates a method of moving double[3] list elements for locations and vectors
into and out of their text string containers.