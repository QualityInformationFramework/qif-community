from __future__ import print_function
import pyxb
import QIFDocument
import xml.dom.minidom
import pyxb.utils.domutils
import time
import io
import tkinter
import uuid
import os

# This script prompts the user for the name of a QIF document.
# This new QIF document is populated with feature, characteristic,
# datum, measurement resource, and measured results information
# in a top-down, hard-coded fashion.
# 
# Where you see hard-coded data like:
# 
#   # plane location
#   planLoc = QIFDocument.PointType([0.0, 0.0, 0.0])
#   planANom.Location = planLoc      ##   ##   ##
#
#   YOUR DATA GOES HERE ##
#
# this sets xmlns="http:#qifstandards.org/xsd/qif3" in the QIF document and
# prevents a default namespace prefix like <ns1: on every element
pyxb.utils.domutils.BindingDOMSupport.SetDefaultNamespace("http://qifstandards.org/xsd/qif3")

# create an empty QIF document
qifdata = QIFDocument.QIFDocument()

# set the bare minimum attributes and elements
qifdata.QPId = str(uuid.uuid4()) # each QIF document needs a unique UUID
qifdata.idMax = 1 # we'll update this later
qifdata.versionQIF = "3.0.0" # the required version number

# add some application identifying information
qifdata.Header = QIFDocument.QIFDocumentHeaderType()
qifdata.Header.Application = QIFDocument.ApplicationType()
qifdata.Header.Application.Name = "demoQIFout.py open source QIF application"
qifdata.Header.Application.Organization = "Digital Metrology Standards Consortium (DMSC)"

#region Datum definitions
datumDefs = QIFDocument.DatumDefinitionsType()
# datumDefs.n = 3 we'll set later with a more general technique

# define ABC datums
# define datums ABC (as simple datum letters, we'll create hooks to datum features later)

datA = QIFDocument.DatumDefinitionType()
datA.id = qifdata.idMax
qifdata.idMax += 1
datA.DatumLabel = "A"
datumDefs.append(datA)

datB = QIFDocument.DatumDefinitionType()
datB.id = qifdata.idMax
qifdata.idMax += 1
datB.DatumLabel = "B"
datumDefs.append(datB)

datC = QIFDocument.DatumDefinitionType()
datC.id = qifdata.idMax
qifdata.idMax += 1
datC.DatumLabel = "C"
datumDefs.append(datC)

datumDefs.n = len(datumDefs.DatumDefinition)
qifdata.DatumDefinitions = datumDefs
#endregion

#region Datum reference frames
drfDefs = QIFDocument.DatumReferenceFramesType()
drfDefs.n = 3

# define A, AB, and ABC datum reference frames

#region A
#make a datum reference frame A
drfA = QIFDocument.DatumReferenceFrameType()
drfA.id = qifdata.idMax # required id
qifdata.idMax += 1
# datums container
# array of 1 datum
drfA_dats = QIFDocument.DatumsType()
drfA_dats.n = 1
# A is simple datum with no material condition modifier
dtA_A = QIFDocument.DatumType()
# reference id of A
datA_Aref = QIFDocument.QIFReferenceFullType(datA.id)
dtA_A.DatumDefinitionId = datA_Aref
# no matieral modifier
dtA_A.MaterialModifier = QIFDocument.MaterialModifierEnumType.NONE
# use the actual datum feature
dtA_A.ReferencedComponent = QIFDocument.ReferencedComponentEnumType.ACTUAL
# add datum A to DRF as primary datum
dwpA_A = QIFDocument.DatumWithPrecedenceType()
dwpA_A.SimpleDatum = dtA_A
prcA_AEnum = QIFDocument.PrecedenceEnumType(QIFDocument.PrecedenceEnumType.PRIMARY)
prcA_A = QIFDocument.PrecedenceType()
prcA_A.PrecedenceEnum = prcA_AEnum
dwpA_A.Precedence = prcA_A
drfA_dats.append(dwpA_A)
drfA.Datums = drfA_dats
# add our DRF to the list
drfDefs.append(drfA)
#endregion
                
#region AB
#make a datum reference frame AB
drfAB = QIFDocument.DatumReferenceFrameType()
drfAB.id = qifdata.idMax # required id
qifdata.idMax += 1
# datums container
# array of 2 datums
drfAB_dats = QIFDocument.DatumsType()
drfAB_dats.n = 2
# A is simple datum with no material condition modifier
dtAB_A = QIFDocument.DatumType()
# reference id of A
datAB_Aref = QIFDocument.QIFReferenceFullType(datA.id)
dtAB_A.DatumDefinitionId = datAB_Aref
# no matieral modifier
dtAB_A.MaterialModifier = QIFDocument.MaterialModifierEnumType.NONE
# use the actual datum feature
dtAB_A.ReferencedComponent = QIFDocument.ReferencedComponentEnumType.ACTUAL
# add datum A to DRF as primary datum
dwpAB_A = QIFDocument.DatumWithPrecedenceType()
dwpAB_A.SimpleDatum = dtAB_A
prcAB_AEnum = QIFDocument.PrecedenceEnumType(QIFDocument.PrecedenceEnumType.PRIMARY)
prcAB_A = QIFDocument.PrecedenceType()
prcAB_A.PrecedenceEnum = prcAB_AEnum
dwpAB_A.Precedence = prcAB_A
drfAB_dats.append(dwpAB_A)
# B is simple datum with maxiumm material condition modifier
dtAB_B = QIFDocument.DatumType()
# reference id of B
datAB_Bref = QIFDocument.QIFReferenceFullType(datB.id)
dtAB_B.DatumDefinitionId = datAB_Bref
# no matieral modifier
dtAB_B.MaterialModifier = QIFDocument.MaterialModifierEnumType.MAXIMUM
# use the actual datum feature
dtAB_B.ReferencedComponent = QIFDocument.ReferencedComponentEnumType.ACTUAL
# add datum B to DRF as primary datum
dwpAB_B = QIFDocument.DatumWithPrecedenceType()
dwpAB_B.SimpleDatum = dtAB_B
prcAB_BEnum = QIFDocument.PrecedenceEnumType(QIFDocument.PrecedenceEnumType.SECONDARY)
prcAB_B = QIFDocument.PrecedenceType()
prcAB_B.PrecedenceEnum = prcAB_BEnum
dwpAB_B.Precedence = prcAB_B
drfAB_dats.append(dwpAB_B)
# add our DRF to the list
drfAB.Datums = drfAB_dats
drfDefs.append(drfAB)
#endregion
                
#region ABC
#make a datum reference frame ABC
drfABC = QIFDocument.DatumReferenceFrameType()
drfABC.id = qifdata.idMax # required id
qifdata.idMax += 1
# datums container
# array of 3 datums
drfABC_dats = QIFDocument.DatumsType()
drfABC_dats.n = 3
# A is simple datum with no material condition modifier
dtABC_A = QIFDocument.DatumType()
# reference id of A
datABC_Aref = QIFDocument.QIFReferenceFullType(datA.id)
dtABC_A.DatumDefinitionId = datABC_Aref
# no matieral modifier
dtABC_A.MaterialModifier = QIFDocument.MaterialModifierEnumType.NONE
# use the actual datum feature
dtABC_A.ReferencedComponent = QIFDocument.ReferencedComponentEnumType.ACTUAL
# add datum A to DRF as primary datum
dwpABC_A = QIFDocument.DatumWithPrecedenceType()
dwpABC_A.SimpleDatum = dtABC_A
prcABC_AEnum = QIFDocument.PrecedenceEnumType(QIFDocument.PrecedenceEnumType.PRIMARY)
prcABC_A = QIFDocument.PrecedenceType()
prcABC_A.PrecedenceEnum = prcABC_AEnum
dwpABC_A.Precedence = prcABC_A
drfABC_dats.append(dwpABC_A)
# B is simple datum with maxiumm material condition modifier
dtABC_B = QIFDocument.DatumType()
# reference id of B
datABC_Bref = QIFDocument.QIFReferenceFullType(datB.id)
dtABC_B.DatumDefinitionId = datABC_Bref
# maxiumum matieral modifier
dtABC_B.MaterialModifier = QIFDocument.MaterialModifierEnumType.MAXIMUM
# use the actual datum feature
dtABC_B.ReferencedComponent = QIFDocument.ReferencedComponentEnumType.ACTUAL
# add datum B to DRF as primary datum
dwpABC_B = QIFDocument.DatumWithPrecedenceType()
dwpABC_B.SimpleDatum = dtABC_B
prcABC_BEnum = QIFDocument.PrecedenceEnumType(QIFDocument.PrecedenceEnumType.SECONDARY)
prcABC_B = QIFDocument.PrecedenceType()
prcABC_B.PrecedenceEnum = prcABC_BEnum
dwpABC_B.Precedence = prcABC_B
drfABC_dats.append(dwpABC_B)
# C is simple datum with maxiumm material condition modifier
dtABC_C = QIFDocument.DatumType()
# reference id of C
datABC_Cref = QIFDocument.QIFReferenceFullType(datC.id)
dtABC_C.DatumDefinitionId = datABC_Cref
# maxiumum matieral modifier
dtABC_C.MaterialModifier = QIFDocument.MaterialModifierEnumType.MAXIMUM
# use the actual datum feature
dtABC_C.ReferencedComponent = QIFDocument.ReferencedComponentEnumType.ACTUAL
# add datum B to DRF as primary datum
dwpABC_C = QIFDocument.DatumWithPrecedenceType()
dwpABC_C.SimpleDatum = dtABC_C
prcABC_CEnum = QIFDocument.PrecedenceEnumType(QIFDocument.PrecedenceEnumType.TERTIARY)
prcABC_C = QIFDocument.PrecedenceType()
prcABC_C.PrecedenceEnum = prcABC_CEnum
dwpABC_C.Precedence = prcABC_C
drfABC_dats.append(dwpABC_C)
drfABC.Datums = drfABC_dats
# add our DRF to the list
drfDefs.append(drfABC)
#endregion
                
qifdata.DatumReferenceFrames = drfDefs
#endregion

#region Measurement devices
measDevices = QIFDocument.MeasurementDevicesType()
measDevices.n = 2
# define 2 CMM measurement devices and assign them ids
cmm1 = QIFDocument.MeasurementDeviceType()
cmm1.Name = "CMM1"
cmm1.id = qifdata.idMax # required id
qifdata.idMax += 1
# add this device to our list
measDevices.append(cmm1)
# this device will be referenced (later) by its id
cmm1Ref = QIFDocument.QIFReferenceType(cmm1.id)
cmm2 = QIFDocument.MeasurementDeviceType()
cmm2.Name = "CMM2"
cmm2.id = qifdata.idMax # required id
qifdata.idMax += 1
# add this device to our list
measDevices.append(cmm2)
# this device will be referenced (later) by its id
cmm2Ref = QIFDocument.QIFReferenceType(cmm2.id)
measResources = QIFDocument.MeasurementResources()
measResources.MeasurementDevices = measDevices
qifdata.MeasurementResources = measResources
#endregion

# set up aspects lists
featDefs = QIFDocument.FeatureDefinitionsType()
featDefs.n = 1 
featNoms = QIFDocument.FeatureNominalsType()
featNoms.n = 1 
featItems = QIFDocument.FeatureItemsType()
featItems.n = 1 
featActs = QIFDocument.FeatureMeasurementsType()
featActs.n = 1 

charDefs = QIFDocument.CharacteristicDefinitionsType()
charDefs.n = 1 
charNoms = QIFDocument.CharacteristicNominalsType()
charNoms.n = 1 
charItems = QIFDocument.CharacteristicItemsType()
charItems.n = 1 
charActs = QIFDocument.CharacteristicMeasurementsType()
charActs.n = 1 

#region Datum A plane
# define A datum plane

# make a plane feature definition
#planADef = QIFDocument.PlaneFeatureDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
planADef = QIFDocument.PlaneFeatureDefinition()
planADef.id = qifdata.idMax # required id
qifdata.idMax += 1

# add to list
featDefs.append(planADef)
featDefs.n += 1 

# make a plane feature nominal
#planANom = QIFDocument.PlaneFeatureNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
planANom = QIFDocument.PlaneFeatureNominal()
planANom.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to definition
planADefRef = QIFDocument.QIFReferenceType(planADef.id)
planANom.FeatureDefinitionId = planADefRef

# plane location
planLoc = QIFDocument.PointType([0.0, 0.0, 0.0])
planANom.Location = planLoc

# plane normal
planNor = QIFDocument.UnitVectorType([0.0, 0.0, 1.0])
planANom.Normal = planNor

# add to list
featNoms.append(planANom)
featNoms.n += 1

# make a plane feature item
#planAItem = QIFDocument.PlaneFeatureItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
planAItem = QIFDocument.PlaneFeatureItem()
planAItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to nominal
planANomRef = QIFDocument.QIFReferenceFullType(planANom.id)
planAItem.FeatureNominalId = planANomRef

# Give plane a name
planAItem.FeatureName = "DAT_A"

# is this plane checked or set?
planACheck = QIFDocument.PlaneCheckedFeatureType()
planAActDet = QIFDocument.PlaneMeasurementDeterminationType()
planAActDet.Checked = planACheck # this feature is checked, rather than set
planAItem.DeterminationMode = planAActDet

# add to list
featItems.append(planAItem)
featItems.n += 1

# reference to item
planAItemRef = QIFDocument.QIFReferenceType(planAItem.id)

# make a plane feature measurement
#planAAct = QIFDocument.PlaneFeatureMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
planAAct = QIFDocument.PlaneFeatureMeasurement()
planAAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to item
planAAct.FeatureItemId = planAItemRef

# Measurement location
planAActLoc = QIFDocument.MeasuredPointType([0.0, 0.0, 0.0])  # perfect because it's datum A
planAAct.Location = planAActLoc

# Measurement plane normal
planAActNor = QIFDocument.MeasuredUnitVectorType([0.0, 0.0, 1.0]) # perfect because it's datum A
planAAct.Normal = planAActNor

# add to list
featActs.append(planAAct)
featActs.n += 1

# point datum definition at plane nominal
# array of one reference id
datAfeats = QIFDocument.ArrayReferenceFullType()
datAfeats.n = 1
datAfeats.Id.append(planANomRef)
# hook to datum
datA.FeatureNominalIds = datAfeats

# make a flatness characteristic definition
#flatDef = QIFDocument.FlatnessCharacteristicDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
flatDef = QIFDocument.FlatnessCharacteristicDefinition()
flatDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# define the tolerance zone
flatZone = QIFDocument.LinearValueType(0.1)

# a flatness can be simple, per-unit-area, or both
flatDef.ToleranceValue = flatZone

# add to list
charDefs.append(flatDef)
charDefs.n += 1

# make a flatness characteristic nominal
#flatNom = QIFDocument.FlatnessCharacteristicNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
flatNom = QIFDocument.FlatnessCharacteristicNominal()
flatNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to definition
flatDefRef = QIFDocument.QIFReferenceType(flatDef.id)
flatNom.CharacteristicDefinitionId = flatDefRef

# add to list
charNoms.append(flatNom)
charNoms.n += 1

# make a flatness characteristic item
#flatItem = QIFDocument.FlatnessCharacteristicItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
flatItem = QIFDocument.FlatnessCharacteristicItem()
flatItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to nominal
flatNomRef = QIFDocument.QIFReferenceFullType(flatNom.id)
flatItem.CharacteristicNominalId = flatNomRef

# give tolerance a name
flatItem.Name = "FLAT1"

# point tolerance at feature
flatFeatIds = QIFDocument.ArrayReferenceType()
flatFeatIds.n = 1
flatFeatIds.Id.append(planAItemRef) 
flatItem.FeatureItemIds = flatFeatIds

# add our measurement devices (this is a list of devices that could measure the characteristic)
flatDevIds = QIFDocument.ArrayReferenceType()
flatDevIds.n = 2
flatDevIds.Id.append(cmm1Ref)
flatDevIds.Id.append(cmm2Ref)
flatItem.MeasurementDeviceIds = flatDevIds

# add to list
charItems.append(flatItem)
charItems.n += 1

# make a flatness characteristic measurement
#flatAct = QIFDocument.FlatnessCharacteristicMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
flatAct = QIFDocument.FlatnessCharacteristicMeasurement()
flatAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to item
flatItemRef = QIFDocument.QIFReferenceType(flatItem.id)
flatAct.CharacteristicItemId = flatItemRef

# required status
flatStatEnum = QIFDocument.CharacteristicStatusEnumType(QIFDocument.CharacteristicStatusEnumType.PASS)
flatStatus = QIFDocument.CharacteristicStatusType()
flatStatus.CharacteristicStatusEnum = flatStatEnum
flatAct.Status = flatStatus

# Measurement value
flatActVal = QIFDocument.MeasuredLinearValueType(0.023)
flatAct.Value = flatActVal

# point Measurement tolerance at Measurement feature
planAActRef = QIFDocument.QIFReferenceType(planAAct.id)
flatActFeatIds = QIFDocument.ArrayReferenceType()
flatActFeatIds.n = 1
flatActFeatIds.Id.append(planAActRef)
flatAct.FeatureMeasurementIds = flatActFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
flatActDevIds = QIFDocument.ArrayReferenceType()
flatActDevIds.n = 1
flatActDevIds.Id.append(cmm2Ref)
flatAct.MeasurementDeviceIds = flatActDevIds

# add to list
charActs.append(flatAct)
charActs.n += 1
#endregion


#region datum B cylinder
# make a cylinder feature definition * SHARED BETWEEN DATUMS B AND C *
#cylBCDef = QIFDocument.CylinderFeatureDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
cylBCDef = QIFDocument.CylinderFeatureDefinition()
cylBCDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# feature size
diaBCSize = QIFDocument.LinearValueType(12.7)
cylBCDef.Diameter = diaBCSize

# material side
cylBCDef.InternalExternal = QIFDocument.InternalExternalEnumType.INTERNAL

# add to list
featDefs.append(cylBCDef)
featDefs.n += 1

# make a cylinder feature nominal
#cylBNom = QIFDocument.CylinderFeatureNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
cylBNom = QIFDocument.CylinderFeatureNominal()
cylBNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to shared definition
cylBCDefRef = QIFDocument.QIFReferenceType(cylBCDef.id)
cylBNom.FeatureDefinitionId = cylBCDefRef

# cylinder location
cylBcen = QIFDocument.PointType([30.0, 0.0, 0.0])

# cylinder axis
cylBvec = QIFDocument.UnitVectorType([0.0, 0.0, -1.0])

# cylinder axis
cylBaxis = QIFDocument.AxisType()
cylBaxis.AxisPoint = cylBcen
cylBaxis.Direction = cylBvec
cylBNom.Axis = cylBaxis

# add to list
featNoms.append(cylBNom)
featNoms.n += 1

# make a cylinder feature item
#cylBItem = QIFDocument.CylinderFeatureItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
cylBItem = QIFDocument.CylinderFeatureItem()
cylBItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to nominal
cylBNomRef = QIFDocument.QIFReferenceFullType(cylBNom.id)
cylBItem.FeatureNominalId = cylBNomRef

# Give cylinder a name
cylBItem.FeatureName = "DAT_B"

# is this cylinder checked or set?
cylBCheck = QIFDocument.CylinderCheckedFeatureType()
cylBActDet = QIFDocument.CylinderMeasurementDeterminationType()
cylBActDet.Checked = cylBCheck # this feature is checked, rather than set
cylBItem.DeterminationMode = cylBActDet

#add to list
featItems.append(cylBItem)
featItems.n += 1

# make a cylinder feature measurement
#cylBAct = QIFDocument.CylinderFeatureMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
cylBAct = QIFDocument.CylinderFeatureMeasurement()
cylBAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to item
cylBItemRef = QIFDocument.QIFReferenceType(cylBItem.id)
cylBAct.FeatureItemId = cylBItemRef

# cylinder location
acylBcen = QIFDocument.MeasuredPointType([30.0, 0.0, 0.0])

# cylinder vector
acylBvec = QIFDocument.MeasuredUnitVectorType([0.050999931, 0, -0.998698657]) # QIF unit vectors need 6ish decimal places

# cylinder axis
acylBaxis = QIFDocument.MeasuredAxisType()
acylBaxis.AxisPoint = acylBcen
acylBaxis.Direction = acylBvec
cylBAct.Axis = acylBaxis

#cylinder diameter
acylBdia = QIFDocument.MeasuredLinearValueType(12.699)
cylBAct.Diameter = acylBdia

# add to list
featActs.append(cylBAct)
featActs.n += 1

# array of one reference id
datBfeats = QIFDocument.ArrayReferenceFullType()
datBfeats.n = 1
datBfeats.Id.append(cylBNomRef)
# hook to datum
datB.FeatureNominalIds = datBfeats

# make a diameter characteristic definition to be shared
#diaBCDef = QIFDocument.DiameterCharacteristicDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaBCDef = QIFDocument.DiameterCharacteristicDefinition()
diaBCDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# tolerance (as opposed to limits and fits, or non-tolerance
plusTolBC = QIFDocument.LinearValueType(0.3)
minusTolBC = QIFDocument.LinearValueType(-0.3)
diaBCTol = QIFDocument.LinearToleranceType()
diaBCTol.DefinedAsLimit = 0 # false
diaBCTol.MaxValue = plusTolBC
diaBCTol.MinValue = minusTolBC
diaBCDef.Tolerance = diaBCTol

# add to list
charDefs.append(diaBCDef)
charDefs.n += 1

# make a diameter characteristic nominal
#diaBCNom = QIFDocument.DiameterCharacteristicNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaBCNom = QIFDocument.DiameterCharacteristicNominal()
diaBCNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to definition
diaBCDefRef = QIFDocument.QIFReferenceType(diaBCDef.id)
diaBCNom.CharacteristicDefinitionId = diaBCDefRef

# nominal value
diaBCNom.TargetValue = diaBCSize # from feature definition above

# give shared tolerance a name
diaBCNom.Name = "DIAM1"

# add to list
charNoms.append(diaBCNom)
charNoms.n += 1

# make a diameter characteristic item (this is not sharable)
#diaBItem = QIFDocument.DiameterCharacteristicItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaBItem = QIFDocument.DiameterCharacteristicItem()
diaBItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to nominal
diaBCNomRef = QIFDocument.QIFReferenceFullType(diaBCNom.id)
diaBItem.CharacteristicNominalId = diaBCNomRef

# give tolerance a name
diaBItem.Name = "DIAM1_B"

# point tolerance at feature
diaBFeatIds = QIFDocument.ArrayReferenceType()
diaBFeatIds.n = 1
diaBFeatIds.Id.append(cylBItemRef) 
diaBItem.FeatureItemIds = diaBFeatIds

# add our measurement devices (this is a list of devices that could measure the characteristic)
diaBDevIds = QIFDocument.ArrayReferenceType()
diaBDevIds.n = 2
diaBDevIds.Id.append(cmm1Ref)
diaBDevIds.Id.append(cmm2Ref)
diaBItem.MeasurementDeviceIds = diaBDevIds

# add to list
charItems.append(diaBItem)
charItems.n += 1

# make a diameter characteristic measurement
#diaBAct = QIFDocument.DiameterCharacteristicMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaBAct = QIFDocument.DiameterCharacteristicMeasurement()
diaBAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to item
diaBItemRef = QIFDocument.QIFReferenceType(diaBItem.id)
diaBAct.CharacteristicItemId = diaBItemRef

# required status
diaBStatEnum = QIFDocument.CharacteristicStatusEnumType(QIFDocument.CharacteristicStatusEnumType.PASS)
diaBStatus = QIFDocument.CharacteristicStatusType()
diaBStatus.CharacteristicStatusEnum = diaBStatEnum
diaBAct.Status = diaBStatus

# Measurement value
diaBActVal = QIFDocument.MeasuredLinearValueType(12.699)
diaBAct.Value = diaBActVal

# point Measurement tolerance at Measurement feature
cylBActRef = QIFDocument.QIFReferenceType(cylBAct.id)
diaBActFeatIds = QIFDocument.ArrayReferenceType()
diaBActFeatIds.n = 1
diaBActFeatIds.Id.append(cylBActRef)
diaBAct.FeatureMeasurementIds = diaBActFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
diaBActDevIds = QIFDocument.ArrayReferenceType()
diaBActDevIds.n = 1
diaBActDevIds.Id.append(cmm2Ref)
diaBAct.MeasurementDeviceIds = diaBActDevIds

# add to list
charActs.append(diaBAct)
charActs.n += 1

# make a perpendicularity characteristic definition
#perpDef = QIFDocument.PerpendicularityCharacteristicDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
perpDef = QIFDocument.PerpendicularityCharacteristicDefinition()
perpDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# define the tolerance zone
perpZone = QIFDocument.LinearValueType(0.2)
perpDef.ToleranceValue = perpZone
# define the zone shape
perpDiaZone = QIFDocument.OrientationDiametricalZoneType()
perpZoneShape = QIFDocument.OrientationZoneShapeType()
perpZoneShape.DiametricalZone = perpDiaZone
perpDef.ZoneShape = perpZoneShape
# define the material condition
perpDef.MaterialCondition = QIFDocument.MaterialModifierEnumType.MAXIMUM
# point to DRF
ADRFRef = QIFDocument.QIFReferenceFullType(drfA.id)
perpDef.DatumReferenceFrameId = ADRFRef

# add to list
charDefs.append(perpDef)
charDefs.n += 1

# make a perpendicularity characteristic nominal
#perpNom = QIFDocument.PerpendicularityCharacteristicNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
perpNom = QIFDocument.PerpendicularityCharacteristicNominal()
perpNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to definition
perpDefRef = QIFDocument.QIFReferenceType(perpDef.id)
perpNom.CharacteristicDefinitionId = perpDefRef

# add to list
charNoms.append(perpNom)
charNoms.n += 1

# make a perpendicularity characteristic item
#perpItem = QIFDocument.PerpendicularityCharacteristicItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
perpItem = QIFDocument.PerpendicularityCharacteristicItem()
perpItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to nominal
perpNomRef = QIFDocument.QIFReferenceFullType(perpNom.id)
perpItem.CharacteristicNominalId = perpNomRef
# give tolerance a name
perpItem.Name = "PERP1"

# point tolerance at feature
perpFeatIds = QIFDocument.ArrayReferenceType()
perpFeatIds.n = 1
perpFeatIds.Id.append(cylBItemRef) 
perpItem.FeatureItemIds = perpFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
perpDevIds = QIFDocument.ArrayReferenceType()
perpDevIds.n = 2
perpDevIds.Id.append(cmm1Ref)
perpDevIds.Id.append(cmm2Ref)
perpItem.MeasurementDeviceIds = perpDevIds

# add to list
charItems.append(perpItem)
charItems.n += 1

# make a perpendicularity characteristic measurement
#perpAct = QIFDocument.PerpendicularityCharacteristicMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
perpAct = QIFDocument.PerpendicularityCharacteristicMeasurement()
perpAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to item
perpItemRef = QIFDocument.QIFReferenceType(perpItem.id)
perpAct.CharacteristicItemId = perpItemRef

#                # required status
perpStatEnum = QIFDocument.CharacteristicStatusEnumType(QIFDocument.CharacteristicStatusEnumType.PASS)
perpStatus = QIFDocument.CharacteristicStatusType()
perpStatus.CharacteristicStatusEnum = perpStatEnum
perpAct.Status = perpStatus

# Measurement value
perpActVal = QIFDocument.MeasuredLinearValueType(0.07)
perpAct.Value = perpActVal

# point Measurement tolerance at Measurement feature
perpActFeatIds = QIFDocument.ArrayReferenceType()
perpActFeatIds.n = 1
perpActFeatIds.Id.append(cylBActRef)
perpAct.FeatureMeasurementIds = perpActFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
perpActDevIds = QIFDocument.ArrayReferenceType()
perpActDevIds.n = 1
perpActDevIds.Id.append(cmm2Ref)
perpAct.MeasurementDeviceIds = perpActDevIds

# add to list
charActs.append(perpAct)
charActs.n += 1
#endregion

#region datum C cylinder
# make a cylinder feature nominal
#cylCNom = QIFDocument.CylinderFeatureNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
cylCNom = QIFDocument.CylinderFeatureNominal()
cylCNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to shared definition
cylCNom.FeatureDefinitionId = cylBCDefRef

# cylinder location
cylCcen = QIFDocument.PointType([150.0, 0.0, 0.0])

# cylinder vector
cylCvec = QIFDocument.UnitVectorType([0.0, 0.0, -1.0])

# cylinder axis
cylCaxis = QIFDocument.AxisType()
cylCaxis.AxisPoint = cylCcen
cylCaxis.Direction = cylCvec
cylCNom.Axis = cylCaxis

# add to list
featNoms.append(cylCNom)
featNoms.n += 1

# make a cylinder feature item
#cylCItem = QIFDocument.CylinderFeatureItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
cylCItem = QIFDocument.CylinderFeatureItem()
cylCItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to nominal
cylCNomRef = QIFDocument.QIFReferenceFullType(cylCNom.id)
cylCItem.FeatureNominalId = cylCNomRef

# Give cylinder a name
cylCItem.FeatureName = "DAT_C"

# is this cylinder checked or set?
cylCCheck = QIFDocument.CylinderCheckedFeatureType()
cylCActDet = QIFDocument.CylinderMeasurementDeterminationType()
cylCActDet.Checked = cylCCheck # this feature is checked, rather than set
cylCItem.DeterminationMode = cylCActDet

#add to list
featItems.append(cylCItem)
featItems.n += 1

# make a cylinder feature measurement
#cylCAct = QIFDocument.CylinderFeatureMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
cylCAct = QIFDocument.CylinderFeatureMeasurement()
cylCAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to item
cylCItemRef = QIFDocument.QIFReferenceType(cylCItem.id)
cylCAct.FeatureItemId = cylCItemRef

# cylinder location
acylCcen = QIFDocument.MeasuredPointType([150.051, 0.0, 0.0])

# cylinder axis
acylCvec = QIFDocument.MeasuredUnitVectorType([-0.009900020, 0.009900020, -0.999901985])

# cylinder axis
acylCaxis = QIFDocument.MeasuredAxisType()
acylCaxis.AxisPoint = acylCcen
acylCaxis.Direction = acylCvec
cylCAct.Axis = acylCaxis

#cylinder diameter
acylCdia = QIFDocument.MeasuredLinearValueType(12.72)
cylCAct.Diameter = acylCdia

# add to list
featActs.append(cylCAct)
featActs.n += 1

# array of one reference id
datCfeats = QIFDocument.ArrayReferenceFullType()
datCfeats.n = 1
datCfeats.Id.append(cylCNomRef)
# hook to datum
datC.FeatureNominalIds = datCfeats

# make a diameter characteristic item (this is not sharable)
#diaCItem = QIFDocument.DiameterCharacteristicItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaCItem = QIFDocument.DiameterCharacteristicItem()
diaCItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to nominal
diaCItem.CharacteristicNominalId = diaBCNomRef

# give tolerance a name
diaCItem.Name = "DIAM1_C"

# point tolerance at feature
diaCFeatIds = QIFDocument.ArrayReferenceType()
diaCFeatIds.n = 1
diaCFeatIds.Id.append(cylCItemRef) 
diaCItem.FeatureItemIds = diaCFeatIds

# add our measurement devices (this is a list of devices that could measure the characteristic)
diaCDevIds = QIFDocument.ArrayReferenceType()
diaCDevIds.n = 2
diaCDevIds.Id.append(cmm1Ref)
diaCDevIds.Id.append(cmm2Ref)
diaCItem.MeasurementDeviceIds = diaCDevIds

# add to list
charItems.append(diaCItem)
charItems.n += 1

# make a diameter characteristic measurement
#diaCAct = QIFDocument.DiameterCharacteristicMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaCAct = QIFDocument.DiameterCharacteristicMeasurement()
diaCAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to item
diaCItemRef = QIFDocument.QIFReferenceType(diaCItem.id)
diaCAct.CharacteristicItemId = diaCItemRef

# required status
diaCStatEnum = QIFDocument.CharacteristicStatusEnumType(QIFDocument.CharacteristicStatusEnumType.PASS)
diaCStatus = QIFDocument.CharacteristicStatusType()
diaCStatus.CharacteristicStatusEnum = diaCStatEnum
diaCAct.Status = diaCStatus

# Measurement value
diaCActVal = QIFDocument.MeasuredLinearValueType(12.72)
diaCAct.Value = diaCActVal

# point Measurement tolerance at Measurement feature
cylCActRef = QIFDocument.QIFReferenceType(cylCAct.id)
diaCActFeatIds = QIFDocument.ArrayReferenceType()
diaCActFeatIds.n = 1
diaCActFeatIds.Id.append(cylCActRef)
diaCAct.FeatureMeasurementIds = diaCActFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
diaCActDevIds = QIFDocument.ArrayReferenceType()
diaCActDevIds.n = 1
diaCActDevIds.Id.append(cmm2Ref)
diaCAct.MeasurementDeviceIds = diaCActDevIds

# add to list
charActs.append(diaCAct)
charActs.n += 1

# make a position characteristic definition
#posCDef = QIFDocument.PositionCharacteristicDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
posCDef = QIFDocument.PositionCharacteristicDefinition()
posCDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# define the tolerance zone shape (diametrical)
zoneCType = QIFDocument.PositionDiametricalZoneType()
zoneCShape = QIFDocument.PositionZoneShapeType()
zoneCShape.DiametricalZone = zoneCType
posCDef.ZoneShape = zoneCShape

# define the tolerance zone
tolCZone = QIFDocument.LinearValueType(0.5)
posCDef.ToleranceValue = tolCZone

# apply MMC material condition
posCDef.MaterialCondition = QIFDocument.MaterialModifierEnumType.MAXIMUM

# reference our DRF
drfABDefRef = QIFDocument.QIFReferenceFullType(drfAB.id)
posCDef.DatumReferenceFrameId = drfABDefRef

# add to list
charDefs.append(posCDef)
charDefs.n += 1

# make a position characteristic nominal
#posCNom = QIFDocument.PositionCharacteristicNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
posCNom = QIFDocument.PositionCharacteristicNominal()
posCNom.id = qifdata.idMax # required id
qifdata.idMax += 1

#  required reference to definition
posCDefRef = QIFDocument.QIFReferenceType(posCDef.id)
posCNom.CharacteristicDefinitionId = posCDefRef

# add to list
charNoms.append(posCNom)
charNoms.n += 1

# make a position characteristic item
#posCItem = QIFDocument.PositionCharacteristicItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
posCItem = QIFDocument.PositionCharacteristicItem()
posCItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to nominal
posCNomRef = QIFDocument.QIFReferenceFullType(posCNom.id)
posCItem.CharacteristicNominalId = posCNomRef

# give tolerance a name
posCItem.Name = "POSN1"

# point tolerance at feature
posCFeatIds = QIFDocument.ArrayReferenceType()
posCFeatIds.n = 1
posCFeatIds.Id.append(cylCItemRef) 
posCItem.FeatureItemIds = posCFeatIds

# add our measurement devices (this is a list of devices that could measure the characteristic)
posCDevIds = QIFDocument.ArrayReferenceType()
posCDevIds.n = 2
posCDevIds.Id.append(cmm1Ref)
posCDevIds.Id.append(cmm2Ref)
posCItem.MeasurementDeviceIds = posCDevIds

# add to list
charItems.append(posCItem)
charItems.n += 1

# make a position characteristic measurement
#posCAct = QIFDocument.PositionCharacteristicMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
posCAct = QIFDocument.PositionCharacteristicMeasurement()
posCAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to item
posCItemRef = QIFDocument.QIFReferenceType(posCItem.id)
posCAct.CharacteristicItemId = posCItemRef

# required status
posCStatEnum = QIFDocument.CharacteristicStatusEnumType(QIFDocument.CharacteristicStatusEnumType.PASS)
posCStatus = QIFDocument.CharacteristicStatusType()
posCStatus.CharacteristicStatusEnum = posCStatEnum
posCAct.Status = posCStatus

# Measurement value
posCActVal = QIFDocument.MeasuredLinearValueType(0.102)
posCAct.Value = posCActVal

# point Measurement tolerance at Measurement feature
posCActFeatIds = QIFDocument.ArrayReferenceType()
posCActFeatIds.n = 1
posCActFeatIds.Id.append(cylCActRef)
posCAct.FeatureMeasurementIds = posCActFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
posCActDevIds = QIFDocument.ArrayReferenceType()
posCActDevIds.n = 1
posCActDevIds.Id.append(cmm2Ref)
posCAct.MeasurementDeviceIds = posCActDevIds

# add to list
charActs.append(posCAct)
charActs.n += 1
#endregion

#region circle back to ABC
# make a circle feature definition
#circDef = QIFDocument.CircleFeatureDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
circDef = QIFDocument.CircleFeatureDefinition()
circDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# feature size
diaSize = QIFDocument.LinearValueType(6.35)
circDef.Diameter = diaSize

# material side
circDef.InternalExternal = QIFDocument.InternalExternalEnumType.INTERNAL

# add to list
featDefs.append(circDef)
featDefs.n += 1

# make a circle feature nominal
#circNom = QIFDocument.CircleFeatureNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
circNom = QIFDocument.CircleFeatureNominal()
circNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to definition
circDefRef = QIFDocument.QIFReferenceType(circDef.id)
circNom.FeatureDefinitionId = circDefRef

# circle location
circCen = QIFDocument.PointType([90.0, 50.0, -1.0])
circNom.Location = circCen

# circle normal
circNor = QIFDocument.UnitVectorType([0.0, 0.0, 1.0])
circNom.Normal = circNor

# add to list
featNoms.append(circNom)
featNoms.n += 1

# make a circle feature item
#circItem = QIFDocument.CircleFeatureItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
circItem = QIFDocument.CircleFeatureItem()
circItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to definition
circNomRef = QIFDocument.QIFReferenceFullType(circNom.id)
circItem.FeatureNominalId = circNomRef

# Give circle a name
circItem.FeatureName = "CIRC1"

# is this circle checked or set?
circCheck = QIFDocument.CircleCheckedFeatureType()
circActDet = QIFDocument.CircleMeasurementDeterminationType()
circActDet.Checked = circCheck # this feature is checked, rather than set
circItem.DeterminationMode = circActDet

# add to list
featItems.append(circItem)
featItems.n += 1

# make a circle feature measurement
#circAct = QIFDocument.CircleFeatureMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
circAct = QIFDocument.CircleFeatureMeasurement()
circAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# reference to item
circItemRef = QIFDocument.QIFReferenceType(circItem.id)
circAct.FeatureItemId = circItemRef

# circle location
acirCen = QIFDocument.MeasuredPointType([90.015, 49.973, -1.0]) 
circAct.Location = acirCen

# circle normal
acirNor = QIFDocument.MeasuredUnitVectorType([0.0, 0.0, 1.0])
circAct.Normal = acirNor

# feature size
adiaSize = QIFDocument.MeasuredLinearValueType(6.2)
circAct.Diameter = adiaSize

# add to list
featActs.append(circAct)
featActs.n += 1

# make a diameter characteristic definition
#diaDef = QIFDocument.DiameterCharacteristicDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaDef = QIFDocument.DiameterCharacteristicDefinition()
diaDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# tolerance (as opposed to limits and fits, or non-tolerance
highSize = QIFDocument.LinearValueType(6.5)
lowSize = QIFDocument.LinearValueType(6.3)
diaTol = QIFDocument.LinearToleranceType()
diaTol.DefinedAsLimit = 1
diaTol.MaxValue = highSize
diaTol.MinValue = lowSize
diaDef.Tolerance = diaTol

# add to list
charDefs.append(diaDef)
charDefs.n += 1

# make a diameter characteristic nominal
#diaNom = QIFDocument.DiameterCharacteristicNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaNom = QIFDocument.DiameterCharacteristicNominal()
diaNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to definition
diaDefRef = QIFDocument.QIFReferenceType(diaDef.id)
diaNom.CharacteristicDefinitionId = diaDefRef

# nominal value
#diaNom.TargetValue = diaSize

# add to list
charNoms.append(diaNom)
charNoms.n += 1

# make a diameter characteristic item
#diaItem = QIFDocument.DiameterCharacteristicItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaItem = QIFDocument.DiameterCharacteristicItem()
diaItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to nominal
diaNomRef = QIFDocument.QIFReferenceFullType(diaNom.id)
diaItem.CharacteristicNominalId = diaNomRef

# give tolerance a name
diaItem.Name = "DIAM2"

# point tolerance at feature
circItemRef = QIFDocument.QIFReferenceType(circItem.id)
diaFeatIds = QIFDocument.ArrayReferenceType()
diaFeatIds.n = 1
diaFeatIds.Id.append(circItemRef) 
diaItem.FeatureItemIds = diaFeatIds

# add our measurement devices (this is a list of devices that could measure the characteristic)
diaDevIds = QIFDocument.ArrayReferenceType()
diaDevIds.n = 2
diaDevIds.Id.append(cmm1Ref)
diaDevIds.Id.append(cmm2Ref)
diaItem.MeasurementDeviceIds = diaDevIds

# add to list
charItems.append(diaItem)
charItems.n += 1

# make a diameter characteristic measurement
#diaAct = QIFDocument.DiameterCharacteristicMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
diaAct = QIFDocument.DiameterCharacteristicMeasurement()
diaAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to item
diaItemRef = QIFDocument.QIFReferenceType(diaItem.id)
diaAct.CharacteristicItemId = diaItemRef

# required status
diaStatEnum = QIFDocument.CharacteristicStatusEnumType(QIFDocument.CharacteristicStatusEnumType.FAIL)
diaStatus = QIFDocument.CharacteristicStatusType()
diaStatus.CharacteristicStatusEnum = diaStatEnum
diaAct.Status = diaStatus

# Measurement value
diaActVal = QIFDocument.MeasuredLinearValueType(6.2)
diaAct.Value = diaActVal

# point tolerance measurement at feature measurement
circActRef = QIFDocument.QIFReferenceType(circAct.id)
diaActFeatIds = QIFDocument.ArrayReferenceType()
diaActFeatIds.n = 1
diaActFeatIds.Id.append(circActRef)
diaAct.FeatureMeasurementIds = diaActFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
diaActDevIds = QIFDocument.ArrayReferenceType()
diaActDevIds.n = 1
diaActDevIds.Id.append(cmm2Ref)
diaAct.MeasurementDeviceIds = diaActDevIds

# add to list
charActs.append(diaAct)
charActs.n += 1

# make a position characteristic definition
#posDef = QIFDocument.PositionCharacteristicDefinitionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
posDef = QIFDocument.PositionCharacteristicDefinition()
posDef.id = qifdata.idMax # required id
qifdata.idMax += 1

# define the tolerance zone shape (diametrical)
zoneType = QIFDocument.PositionDiametricalZoneType()
zoneShape = QIFDocument.PositionZoneShapeType()
zoneShape.DiametricalZone = zoneType
posDef.ZoneShape = zoneShape

# define the tolerance zone
tolZone = QIFDocument.LinearValueType(0.75)
posDef.ToleranceValue = tolZone

# apply MMC material condition
posDef.MaterialCondition = QIFDocument.MaterialModifierEnumType.MAXIMUM

# reference our DRF
drfDefRef = QIFDocument.QIFReferenceFullType(drfABC.id)
posDef.DatumReferenceFrameId = drfDefRef

# add to list
charDefs.append(posDef)
charDefs.n += 1

# make a position characteristic nominal
#posNom = QIFDocument.PositionCharacteristicNominalType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
posNom = QIFDocument.PositionCharacteristicNominal()
posNom.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to definition
posDefRef = QIFDocument.QIFReferenceType(posDef.id)
posNom.CharacteristicDefinitionId = posDefRef

# add to list
charNoms.append(posNom)
charNoms.n += 1

# make a position characteristic item
#posItem = QIFDocument.PositionCharacteristicItemType() this approach leads to xsi:type substitution group behavior which QIF doesn't suppor
posItem = QIFDocument.PositionCharacteristicItem()
posItem.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to nominal
posNomRef = QIFDocument.QIFReferenceFullType(posNom.id)
posItem.CharacteristicNominalId = posNomRef

# give tolerance a name
posItem.Name = "POSN2"

# point tolerance at feature
posFeatIds = QIFDocument.ArrayReferenceType()
posFeatIds.n = 1
posFeatIds.Id.append(circItemRef) 
posItem.FeatureItemIds = posFeatIds

# add our measurement devices (this is a list of devices that could measure the characteristic)
posDevIds = QIFDocument.ArrayReferenceType()
posDevIds.n = 2
posDevIds.Id.append(cmm1Ref)
posDevIds.Id.append(cmm2Ref)
posItem.MeasurementDeviceIds = posDevIds

# add to list
charItems.append(posItem)
charItems.n += 1

# make a position characteristic measurement
#posAct = QIFDocument.PositionCharacteristicMeasurementType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
posAct = QIFDocument.PositionCharacteristicMeasurement()
posAct.id = qifdata.idMax # required id
qifdata.idMax += 1

# required reference to item
posItemRef = QIFDocument.QIFReferenceType(posItem.id)
posAct.CharacteristicItemId = posItemRef

# required status
posStatEnum = QIFDocument.CharacteristicStatusEnumType(QIFDocument.CharacteristicStatusEnumType.PASS)
posStatus = QIFDocument.CharacteristicStatusType()
posStatus.CharacteristicStatusEnum = posStatEnum
posAct.Status = posStatus

# Measurement value
posActVal = QIFDocument.MeasuredLinearValueType(0.0618)
posAct.Value = posActVal

# point Measurement tolerance at Measurement feature
posActFeatIds = QIFDocument.ArrayReferenceType()
posActFeatIds.n = 1
posActFeatIds.Id.append(circActRef)
posAct.FeatureMeasurementIds = posActFeatIds

# add our measurement device (this is the device that actually measured the characteristic)
posActDevIds = QIFDocument.ArrayReferenceType()
posActDevIds.n = 1
posActDevIds.Id.append(cmm2Ref)
posAct.MeasurementDeviceIds = posActDevIds

# add to list
charActs.append(posAct)
charActs.n += 1
#endregion

#region finish up QIF document

# QIF units are SI units unless otherwise specified
fileUnits = QIFDocument.FileUnitsType()
primaryUnits = QIFDocument.PrimaryUnitsType()
linearUnit = QIFDocument.LinearUnitType()
linearUnit.SIUnitName = "meter"
linearUnit.UnitName = "mm"
unitConversion = QIFDocument.UnitConversionType()
unitConversion.Factor = 0.001
linearUnit.UnitConversion = unitConversion
primaryUnits.LinearUnit = linearUnit
fileUnits.PrimaryUnits = primaryUnits
qifdata.FileUnits = fileUnits

# Create and populate the features aspects element
featDefs.n -= 1 
featNoms.n -= 1 
featItems.n -= 1 
feats = QIFDocument.FeatureAspectsListsType()
feats.FeatureDefinitions = featDefs
feats.FeatureNominals = featNoms
feats.FeatureItems = featItems
qifdata.Features = feats

# Create and populate the characteristics aspects element
charDefs.n -= 1 
charNoms.n -= 1 
charItems.n -= 1 
chars = QIFDocument.CharacteristicAspectsListsType()
chars.CharacteristicDefinitions = charDefs
chars.CharacteristicNominals = charNoms
chars.CharacteristicItems = charItems
# required GD&T standard
standard = QIFDocument.StandardType()
# organization as enumeration
standardOrganization = QIFDocument.StandardsOrganizationType()
standardOrganizationEnum = QIFDocument.StandardsOrganizationEnumType(QIFDocument.StandardsOrganizationEnumType.ASME)
standardOrganization.StandardsOrganizationEnum = standardOrganizationEnum
standard.Organization = standardOrganization
# desgnator as token
standard.Designator = "Y14.5"
# year as string
standard.Year = "2009"
# id for referencing
standard.id = qifdata.idMax # required id

# make a list of 1
standards = QIFDocument.StandardsType()
standards.Standard.append(standard) 
standards.n = 1
qifdata.idMax += 1

# standards list
qifdata.StandardsDefinitions = standards

# characteristics reference standard
standardRef = QIFDocument.QIFReferenceType(standard.id)
chars.FormalStandardId = standardRef
qifdata.Characteristics = chars

# create the measurement results
measResults = QIFDocument.MeasurementResultsType()
measResults.id = qifdata.idMax # required id
qifdata.idMax += 1

# overall inspection status
overallStatEnum = QIFDocument.InspectionStatusEnumType(QIFDocument.CharacteristicStatusEnumType.FAIL)
overallStatus = QIFDocument.InspectionStatusType()
overallStatus.InspectionStatusEnum = overallStatEnum
measResults.InspectionStatus = overallStatus

# measured features
featActs.n -= 1 
measResults.MeasuredFeatures = featActs

# measured characteristics
charActs.n -= 1
measChars = QIFDocument.MeasuredCharacteristicsType()
measChars.CharacteristicMeasurements = charActs
measResults.MeasuredCharacteristics = measChars

# add measured results to list of measured results
measResultsList = QIFDocument.ResultsType()
measResultsSet = QIFDocument.MeasurementResultsSetType()
measResultsSet.n = 1
measResultsSet.MeasurementResults.append(measResults)
measResultsList.MeasurementResultsSet = measResultsSet
qifdata.Results = measResultsList

# add a trivial all-in-any-order plan
#measAll = QIFDocument.MeasureEvaluateAllActionType() this approach leads to xsi:type substitution group behavior which QIF doesn't support
measAll = QIFDocument.MeasureEvaluateAll()
steps = QIFDocument.UnnumberedPlanElementsType()
steps.n = 1
steps.PlanElement.append(measAll)
#planRoot = QIFDocument.UnorderedActionGroupType() this approach leads to xsi:type substitution group behavior group which QIF doesn't support
planRoot = QIFDocument.UnorderedPlanRoot()
planRoot.Steps = steps
measPlan = QIFDocument.PlanType()
measPlan.PlanRoot = planRoot
qifdata.MeasurementPlan = measPlan
#endregion

# make the DOM instance and add the schema location manually
dominstance = qifdata.toDOM()
from pyxb.namespace import XMLSchema_instance as xsi
dominstance.documentElement.setAttributeNS(xsi.uri(), 'xmlns:xsd', 'http://www.w3.org/2001/XMLSchema')
dominstance.documentElement.setAttributeNS(xsi.uri(), 'xmlns:xsi', 'http://www.w3.org/2001/XMLSchema-instance')
dominstance.documentElement.setAttributeNS(xsi.uri(), 'xsi:schemaLocation', 'http://qifstandards.org/xsd/qif3 ../QIFApplications/QIFDocument.xsd')
# make a pretty QIF document
xmls = dominstance.toprettyxml(indent = "  ", encoding = "utf-8", newl='\r\n')

root = tkinter.Tk()
root.withdraw()
file_path = tkinter.filedialog.asksaveasfilename(title = "Save QIF file:", filetypes = (("QIF files","*.qif"),("all files","*.*")))

# write it
open(file_path, 'wb').write(xmls) # xmls is a list of bytes

# lets take a look
os.system('Notepad.exe '+ file_path )

print("Done.")

