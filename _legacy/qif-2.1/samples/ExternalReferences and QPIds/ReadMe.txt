In this folder are examples for external file references and the use of QPIds.

QPIds are universally unique identifiers (UUIDs, like those used for Guids). An
example of a GPId is "dc5103a5-75da-4fc9-b5cf-ecf0f7eed9fd".

This folder contains sample files related to the inspection of a tooling ball
modeled in CAD with tolerances applied, measured twice with statistics being
performed.

The example QIF documents show QPIds being used for four different purposes:

*******************************************************************************
#1 Uniquely identifying a QIF document

Files: 
	All-in-one.QIF (and all other sample QIF documents)

This file shows the use of a QPId at the top of the QIF document which unqiuely
identifies the QIF document (and makes it available for external referencing,
see #2 below).

 <QPId>dc5103a5-75da-4fc9-b5cf-ecf0f7eed9fd</QPId>

This file contains the QIF Plan, two sets of QIF Results and QIF Statistics
all in one file. It also illustrates referencing within a single QIF document
using the QIF id attribute.

In "All-in-one.QIF":
...
  <Characteristics>
...
      <SphericalDiameterCharacteristicItem id="5">
...
  <MeasurementsResults>
...
              <CharacteristicItemId>5</CharacteristicItemId>

*******************************************************************************
#2 Externally referencing a QIF document

Files: 
	Exploded_Plan.QIF
	Exploded_Results1.QIF
	Exploded_Results2.QIF
	Exploded_Statistics.QIF
	
These files show the same data found in All-in-one.QIF distributed across
several files by using external file referencing. The external file reference
mechanism begins by defining the file being referenced:

  <ExternalQIFReferences n="1">
    <ExternalQIFDocument id="1">
      <QPId>6558F196-D952-4b80-8054-0A0756D60526</QPId>
      <URI>.\Exploded_Plan.QIF</URI>
    </ExternalQIFDocument>
  </ExternalQIFReferences>

This external reference associates a local QIF id with the QPId of the
external file. This local QIF id is used with the xId attribute set to the QIF
id in the external file to unqiuely identify a remote QIF object.

In "Exploded_Plan.QIF":

<QPId>6558F196-D952-4b80-8054-0A0756D60526</QPId>
...
<SphericalDiameterCharacteristicItem id="5">

In "Exploded_Results1.QIF":
...
  <ExternalQIFReferences n="1">
    <ExternalQIFDocument id="1">
      <QPId>6558F196-D952-4b80-8054-0A0756D60526</QPId>
      <URI>.\Exploded_Plan.QIF</URI>
    </ExternalQIFDocument>
  </ExternalQIFReferences>
...
  <MeasurementsResults>
...
              <CharacteristicItemId xId="5">1</CharacteristicItemId>

*******************************************************************************
#3 Identifying the same information found in different QIF documents

Files: 
	All-in-one.QIF
	Exploded_Results1.QIF
	Exploded_Results1.QIF

The QIF document All-in-one.QIF contains two sets of measurement results. Those
same measurement results are found together in Exploded_Results1.QIF and
Exploded_Results2.QIF.

In All-in-one.QIF the first set of measurement results are identified as

      <MeasurementResults id="7">
        <ThisResultsInstanceQPId>
          C88AAECB-1345-45ca-8946-7AAADB6C0336
        </ThisResultsInstanceQPId>

The measurement results in Exploded_Results1.QIF are identified as

      <MeasurementResults id="2">
        <ThisResultsInstanceQPId>
          C88AAECB-1345-45ca-8946-7AAADB6C0336
        </ThisResultsInstanceQPId>

Because these two instances of measurement results have the same QPId we know
they are the same data even though they appear in two separate QIF documents
and have different QIF ids.

Similarly the second set of results in All-in-one.QIF and the results in
in Exploded_Results2.QIF are identified with the same QPId:

        <ThisResultsInstanceQPId>
          AF259E3E-6A5E-41af-8131-8BC3130881C9
        </ThisResultsInstanceQPId>


*******************************************************************************
#4 Connecting QIF objects to objects outside QIF

Files: 
	QIF_Sphere.SLDPRT
	All-in-one.QIF

The characteristics in the QIF document have QPIds assigned as attribute data:

      <SphericalDiameterCharacteristicItem id="5">
        <Attributes n="1">
          <AttributeQPId name="qpid">
            <Value>3D5D3273-55A6-4c38-9742-8B35E5D08914</Value>
          </AttributeQPId>
        </Attributes>
        <Name>SphericalDiameter1</Name>

which match UUIDs attached as comments to the corresponding characteristics 
found in the dimXpert tree of the SOLIDWORKS document.

*******************************************************************************
Illustration of mixed local and external references

Files: 
	Exploded-form_only_Plan.QIF
	Mixed_Exploded_Results1.QIF
	All-in-one-form_only.QIF (for comparison with QIF id referencing)

The file Exploded-form_only_Plan.QIF contains a measurement plan for only the
form of the tooling ball. During measurement it is decided to also tolerance
the diameter of the tooling ball. As a result Exploded-form_only_Plan.QIF
contains the nominal information for the form characteristic and
Mixed_Exploded_Results1.QIF contains the nominal information for the diameter
characteristic. The actual data in Mixed_Exploded_Results1.QIF references both
characteristics by using a mixture of external and internal referencing.
*******************************************************************************


	
