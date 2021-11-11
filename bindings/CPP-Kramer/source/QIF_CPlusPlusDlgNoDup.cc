#include "QIFDocumentClasses.hh"
#include "xmlSchemaInstance.hh"
#include <stdio.h> 
#include <string.h>

int XmlSchemaInstanceBase::format = 0;
int XmlSchemaInstanceBase::places = 6;
int yyStartAnew = 0;

char * idString(unsigned int id)
{
  char idStr[50];
  sprintf(idStr, "%u", id);
  return strdup(idStr);
}

int main()
{
  unsigned int qifid = 1; // the ever incrementing QIF id
                          // counter, the beating heart of QIF
  
// region lists
  // define object lists
  MeasurementDevicesType * measDevices = new MeasurementDevicesType();
  measDevices->setn(new NaturalType("1"));
  measDevices->setMeasurementDevice(new MeasurementDeviceTypeLisd);
  DatumDefinitionsType * datumDefs = new DatumDefinitionsType();
  datumDefs->setn(new NaturalType("1"));
  datumDefs->setDatumDefinition(new DatumDefinitionTypeLisd());
  DatumReferenceFramesType * drfDefs = new DatumReferenceFramesType();
  drfDefs->setn(new NaturalType("1"));
  drfDefs->setDatumReferenceFrame(new DatumReferenceFrameTypeLisd());
  FeatureDefinitionsType * featDefs = new FeatureDefinitionsType();
  featDefs->setn(new NaturalType("1"));
  featDefs->setFeatureDefinition(new FeatureDefinitionBaseTypeLisd());
  FeatureNominalsType * featNoms = new FeatureNominalsType();
  featNoms->setn(new NaturalType("1"));
  featNoms->setFeatureNominal(new FeatureNominalBaseTypeLisd());
  FeatureItemsType * featItems = new FeatureItemsType();
  featItems->setn(new NaturalType("1"));
  featItems->setFeatureItem(new FeatureItemBaseTypeLisd());
  FeatureMeasurementsType * featMeasi = new FeatureMeasurementsType();
  featMeasi->setn(new NaturalType("1"));
  featMeasi->setFeatureMeasurement(new FeatureMeasurementBaseTypeLisd());
  CharacteristicDefinitionsType * charDefs = 
    new CharacteristicDefinitionsType();
  charDefs->setn(new NaturalType("1"));
  charDefs->setCharacteristicDefinition
    (new CharacteristicDefinitionBaseTypeLisd());
  CharacteristicNominalsType * charNoms = new CharacteristicNominalsType();
  charNoms->setn(new NaturalType("1"));
  charNoms->setCharacteristicNominal
    (new CharacteristicNominalBaseTypeLisd());
  CharacteristicItemsType * charItems = new CharacteristicItemsType();
  charItems->setn(new NaturalType("1"));
  charItems->setCharacteristicItem(new CharacteristicItemBaseTypeLisd());
  CharacteristicMeasurementsType * charMeasi =
    new CharacteristicMeasurementsType();
  charMeasi->setn(new NaturalType("1"));
  charMeasi->setCharacteristicMeasurement
    (new CharacteristicMeasurementBaseTypeLisd());
// endregion lists

// region Datum definitions
  // define ABC datums
  // define datums ABC as simple datum letters,
  // we'll create hooks to datum features later
  DatumDefinitionType * datA = new DatumDefinitionType();
  datA->setid(new QIFIdType(idString(qifid++))); // required id 1
  datA->setDatumLabel(new XmlNMTOKEN("A"));
  datumDefs->getDatumDefinition()->push_back(datA); // datumDefs.n is already 1
  DatumDefinitionType * datB = new DatumDefinitionType();
  datB->setid(new QIFIdType(idString(qifid++))); // required id 2
  datB->setDatumLabel(new XmlNMTOKEN("B"));
  datumDefs->getDatumDefinition()->push_back(datB);
  datumDefs->getn()->setval(1 + datumDefs->getn()->getval()); // set n counter 
  DatumDefinitionType * datC = new DatumDefinitionType();
  datC->setid(new QIFIdType(idString(qifid++))); // required id 3
  datC->setDatumLabel(new XmlNMTOKEN("C"));
  datumDefs->getDatumDefinition()->push_back(datC);
  datumDefs->getn()->setval(1 + datumDefs->getn()->getval()); // set n counter 
// endregion Datum definitions

// region Datum reference frames
  // define A, AB, and ABC datum reference frames

// region Datum reference frames
  // make datum reference frame A
  DatumReferenceFrameType * drfA = new DatumReferenceFrameType();
  drfA->setid(new QIFIdType(idString(qifid++))); // required id 4
  // datums list
  DatumsType * drfAdats = new DatumsType();
  drfAdats->setn(new NaturalType("1"));

  // A is simple datum with no material condition modifier
  DatumType * dtA_A = new DatumType();
  // reference id of A
  QIFReferenceFullType * datA_Aref = new QIFReferenceFullType();
  datA_Aref->setval(datA->getid()->getval());
  datA_Aref->setbad(false);
  dtA_A->setDatumDefinitionId(datA_Aref);
  // no matieral modifier
  dtA_A->setMaterialModifier(new MaterialModifierEnumType("NONE"));
  // use the actual datum feature
  dtA_A->setReferencedComponent(new ReferencedComponentEnumType("ACTUAL"));

  // add datum A to DRF as primary datum
  DatumWithPrecedenceType * dwpA_A = new DatumWithPrecedenceType();
  DatumWithPreced_1013_TypeVal * dwpA_Aval = new DatumWithPreced_1013_TypeVal();
  dwpA_Aval->SimpleDatum = dtA_A;
  DatumWithPreced_1013_TypeChoicePair * DwpA_Achoice =
    new DatumWithPreced_1013_TypeChoicePair
    (DatumWithPreced_1013_TypeChoicePair::SimpleDatumE, *dwpA_Aval);

  PrecedenceType * prcA_A = new PrecedenceType();
  PrecedenceTypeVal * prcA_Aval = new PrecedenceTypeVal();
  prcA_Aval->PrecedenceEnum = new PrecedenceEnumType("PRIMARY");
  prcA_A->setPrecedenceTypePair
    (new PrecedenceTypeChoicePair(PrecedenceTypeChoicePair::PrecedenceEnumE,
				  *prcA_Aval));
  dwpA_A->setPrecedence(prcA_A);
  dwpA_A->setDatumWithPreced_1013
    (new DatumWithPreced_1013_Type(DwpA_Achoice));
  // add simple primary datum A to the datums list
  drfAdats->setDatum(new DatumWithPrecedenceTypeLisd());
  drfAdats->getDatum()->push_back(dwpA_A);
  //drfAdats->getn()->setval(1 + drfAdats->getn()->getval());
  // n is already set to 1
  // add our datums list to the DRF
  drfA->setDatums(drfAdats);
  // add our DRF to the DRF list
  drfDefs->getDatumReferenceFrame()->push_back(drfA);
  // drfDefs->getn()->setval(1 + drfDefs->getn()->getval());
  // n is already set to 1
// endregion A

// region A|B
  // make a datum reference frame A|B(m)
  DatumReferenceFrameType * drfAB = new DatumReferenceFrameType();
  drfAB->setid(new QIFIdType(idString(qifid++))); // required id 5
  // datums list
  DatumsType * drfABdats = new DatumsType();
  drfABdats->setn(new NaturalType("1"));

  // A is simple datum with no material condition modifier
  DatumType * dtA_AB = new DatumType();
  // reference id of A
  QIFReferenceFullType * datA_ABref = new QIFReferenceFullType();
  datA_ABref->setval(datA->getid()->getval());
  datA_ABref->setbad(false);
  dtA_AB->setDatumDefinitionId(datA_ABref);
  // no matieral modifier
  dtA_AB->setMaterialModifier(new MaterialModifierEnumType("NONE"));
  // use the actual datum feature
  dtA_AB->setReferencedComponent(new ReferencedComponentEnumType("ACTUAL"));

  // add datum A to DRF as primary datum
  DatumWithPrecedenceType * dwpA_AB = new DatumWithPrecedenceType();
  DatumWithPreced_1013_TypeVal * dwpA_ABval =
    new DatumWithPreced_1013_TypeVal();
  dwpA_ABval->SimpleDatum = dtA_AB;
  DatumWithPreced_1013_TypeChoicePair * DwpA_ABchoice =
    new DatumWithPreced_1013_TypeChoicePair
    (DatumWithPreced_1013_TypeChoicePair::SimpleDatumE, *dwpA_ABval);

  PrecedenceType * prcA_AB = new PrecedenceType();
  PrecedenceTypeVal * prcA_ABval = new PrecedenceTypeVal();
  prcA_ABval->PrecedenceEnum = new PrecedenceEnumType("PRIMARY");
  prcA_AB->setPrecedenceTypePair
    (new PrecedenceTypeChoicePair(PrecedenceTypeChoicePair::PrecedenceEnumE,
				  *prcA_ABval));
  dwpA_AB->setPrecedence(prcA_AB);
  dwpA_AB->setDatumWithPreced_1013
    (new DatumWithPreced_1013_Type(DwpA_ABchoice));
  // add simple primary datum A to the datums list
  drfABdats->setDatum(new DatumWithPrecedenceTypeLisd());
  drfABdats->getDatum()->push_back(dwpA_AB);
  //drfABdats->getn()->setval(1 + drfABdats->getn()->getval());
  // n is already set to 1

  // B is simple datum with MMC material condition modifier
  DatumType * dtB_AB = new DatumType();
  // reference id of B
  QIFReferenceFullType * datB_ABref = new QIFReferenceFullType();
  datB_ABref->setval(datB->getid()->getval());
  datB_ABref->setbad(false);
  dtB_AB->setDatumDefinitionId(datB_ABref);
  // MMC matieral modifier
  dtB_AB->setMaterialModifier(new MaterialModifierEnumType("MAXIMUM"));
  // use the actual datum feature
  dtB_AB->setReferencedComponent(new ReferencedComponentEnumType("ACTUAL"));
  // add datum B to DRF as secondary datum
  DatumWithPrecedenceType * dwpB_AB = new DatumWithPrecedenceType();
  DatumWithPreced_1013_TypeVal * dwpB_ABval =
    new DatumWithPreced_1013_TypeVal();
  dwpB_ABval->SimpleDatum = dtB_AB;
  DatumWithPreced_1013_TypeChoicePair * DwpB_ABchoice =
    new DatumWithPreced_1013_TypeChoicePair
    (DatumWithPreced_1013_TypeChoicePair::SimpleDatumE, *dwpB_ABval);

  PrecedenceType * prcB_AB = new PrecedenceType();
  PrecedenceTypeVal * prcB_ABval = new PrecedenceTypeVal();
  prcB_ABval->PrecedenceEnum = new PrecedenceEnumType("SECONDARY");
  prcB_AB->setPrecedenceTypePair
    (new PrecedenceTypeChoicePair(PrecedenceTypeChoicePair::PrecedenceEnumE,
				  *prcB_ABval));
  dwpB_AB->setPrecedence(prcB_AB);
  dwpB_AB->setDatumWithPreced_1013
    (new DatumWithPreced_1013_Type(DwpB_ABchoice));
  // add simple primary datum B to the datums list
  drfABdats->getDatum()->push_back(dwpB_AB);
  drfABdats->getn()->setval(1 + drfABdats->getn()->getval()); // increment n

  // add our datums list to the DRF
  drfAB->setDatums(drfABdats);
  // add our DRF to the DRF list
  drfDefs->getDatumReferenceFrame()->push_back(drfAB);
  drfDefs->getn()->setval(1 + drfDefs->getn()->getval()); // increment n
// endregion A|B

// region A|B|C
  // make a datum reference frame A|B(m)|C(m)
  DatumReferenceFrameType * drfABC = new DatumReferenceFrameType();
  drfABC->setid(new QIFIdType(idString(qifid++))); // required id 6
  // datums list
  DatumsType * drfABCdats = new DatumsType();
  drfABCdats->setn(new NaturalType("1"));

  // A is simple datum with no material condition modifier
  DatumType * dtA_ABC = new DatumType();
  // reference id of A
  QIFReferenceFullType * datA_ABCref = new QIFReferenceFullType();
  datA_ABCref->setval(datA->getid()->getval());
  datA_ABCref->setbad(false);
  dtA_ABC->setDatumDefinitionId(datA_ABCref);
  // no matieral modifier
  dtA_ABC->setMaterialModifier(new MaterialModifierEnumType("NONE"));
  // use the actual datum feature
  dtA_ABC->setReferencedComponent(new ReferencedComponentEnumType("ACTUAL"));

  // add datum A to DRF as primary datum
  DatumWithPrecedenceType * dwpA_ABC = new DatumWithPrecedenceType();
  DatumWithPreced_1013_TypeVal * dwpA_ABCval =
    new DatumWithPreced_1013_TypeVal();
  dwpA_ABCval->SimpleDatum = dtA_ABC;
  DatumWithPreced_1013_TypeChoicePair * DwpA_ABCchoice =
    new DatumWithPreced_1013_TypeChoicePair
    (DatumWithPreced_1013_TypeChoicePair::SimpleDatumE, *dwpA_ABCval);

  PrecedenceType * prcA_ABC = new PrecedenceType();
  PrecedenceTypeVal * prcA_ABCval = new PrecedenceTypeVal();
  prcA_ABCval->PrecedenceEnum = new PrecedenceEnumType("PRIMARY");
  prcA_ABC->setPrecedenceTypePair
    (new PrecedenceTypeChoicePair(PrecedenceTypeChoicePair::PrecedenceEnumE,
				  *prcA_ABCval));
  dwpA_ABC->setPrecedence(prcA_ABC);
  dwpA_ABC->setDatumWithPreced_1013
    (new DatumWithPreced_1013_Type(DwpA_ABCchoice));
  // add simple primary datum A to the datums list
  drfABCdats->setDatum(new DatumWithPrecedenceTypeLisd());
  drfABCdats->getDatum()->push_back(dwpA_ABC);
  //drfABCdats->getn()->setval(1 + drfABCdats->getn()->getval());
  // n is already set to 1

  // B is simple datum with MMC material condition modifier
  DatumType * dtB_ABC = new DatumType();
  // reference id of B
  QIFReferenceFullType * datB_ABCref = new QIFReferenceFullType();
  datB_ABCref->setval(datB->getid()->getval());
  datB_ABCref->setbad(false);
  dtB_ABC->setDatumDefinitionId(datB_ABCref);
  // MMC matieral modifier
  dtB_ABC->setMaterialModifier(new MaterialModifierEnumType("MAXIMUM"));
  // use the actual datum feature
  dtB_ABC->setReferencedComponent(new ReferencedComponentEnumType("ACTUAL"));
  // add datum B to DRF as secondary datum
  DatumWithPrecedenceType * dwpB_ABC = new DatumWithPrecedenceType();
  DatumWithPreced_1013_TypeVal * dwpB_ABCval =
    new DatumWithPreced_1013_TypeVal();
  dwpB_ABCval->SimpleDatum = dtB_ABC;
  DatumWithPreced_1013_TypeChoicePair * DwpB_ABCchoice =
    new DatumWithPreced_1013_TypeChoicePair
    (DatumWithPreced_1013_TypeChoicePair::SimpleDatumE, *dwpB_ABCval);

  PrecedenceType * prcB_ABC = new PrecedenceType();
  PrecedenceTypeVal * prcB_ABCval = new PrecedenceTypeVal();
  prcB_ABCval->PrecedenceEnum = new PrecedenceEnumType("SECONDARY");
  prcB_ABC->setPrecedenceTypePair
    (new PrecedenceTypeChoicePair(PrecedenceTypeChoicePair::PrecedenceEnumE,
				  *prcB_ABCval));
  dwpB_ABC->setPrecedence(prcB_ABC);
  dwpB_ABC->setDatumWithPreced_1013
    (new DatumWithPreced_1013_Type(DwpB_ABCchoice));
  // add simple primary datum B to the datums list
  drfABCdats->getDatum()->push_back(dwpB_ABC);
  drfABCdats->getn()->setval(1 + drfABCdats->getn()->getval()); // increment n

  // C is simple datum with MMC material condition modifier
  DatumType * dtC_ABC = new DatumType();
  // reference id of C
  QIFReferenceFullType * datC_ABCref = new QIFReferenceFullType();
  datC_ABCref->setval(datC->getid()->getval());
  datC_ABCref->setbad(false);
  dtC_ABC->setDatumDefinitionId(datC_ABCref);
  // MMC matieral modifier
  dtC_ABC->setMaterialModifier(new MaterialModifierEnumType("MAXIMUM"));
  // use the actual datum feature
  dtC_ABC->setReferencedComponent(new ReferencedComponentEnumType("ACTUAL"));
  // add datum C to DRF as tertiary datum
  DatumWithPrecedenceType * dwpC_ABC = new DatumWithPrecedenceType();
  DatumWithPreced_1013_TypeVal * dwpC_ABCval =
    new DatumWithPreced_1013_TypeVal();
  dwpC_ABCval->SimpleDatum = dtC_ABC;
  DatumWithPreced_1013_TypeChoicePair * DwpC_ABCchoice =
    new DatumWithPreced_1013_TypeChoicePair
    (DatumWithPreced_1013_TypeChoicePair::SimpleDatumE, *dwpC_ABCval);

  PrecedenceType * prcC_ABC = new PrecedenceType();
  PrecedenceTypeVal * prcC_ABCval = new PrecedenceTypeVal();
  prcC_ABCval->PrecedenceEnum = new PrecedenceEnumType("TERTIARY");
  prcC_ABC->setPrecedenceTypePair
    (new PrecedenceTypeChoicePair(PrecedenceTypeChoicePair::PrecedenceEnumE,
				  *prcC_ABCval));
  dwpC_ABC->setPrecedence(prcC_ABC);
  dwpC_ABC->setDatumWithPreced_1013
    (new DatumWithPreced_1013_Type(DwpC_ABCchoice));
  // add simple primary datum C to the datums list
  drfABCdats->getDatum()->push_back(dwpC_ABC);
  drfABCdats->getn()->setval(1 + drfABCdats->getn()->getval()); // increment n

  // add our datums list to the DRF
  drfABC->setDatums(drfABCdats);
  // add our DRF to the DRF list
  drfDefs->getDatumReferenceFrame()->push_back(drfABC);
  drfDefs->getn()->setval(1 + drfDefs->getn()->getval()); // increment n
// endregion A|B|C

// endregion Datum reference frames

// region Measurement devices
  // define 2 CMM measurement devices and assign them ids
  MeasurementDeviceType * cmm1 = new MeasurementDeviceType();
  cmm1->setName(new XmlToken("CMM1"));
  cmm1->setprintElement(strdup("MeasurementDevice"));
  cmm1->setid(new QIFIdType(idString(qifid++))); // required id 7
  // add this device to our list
  measDevices->getMeasurementDevice()->push_back(cmm1);
  //measDevices->getn()->setval(1 + measDevices->getn()->getval());
  // n is already set to 1
  // this device will be referenced by its id
  QIFReferenceFullType * cmm1Ref1 = new QIFReferenceFullType();
  cmm1Ref1->setval(cmm1->getid()->getval());
  cmm1Ref1->setbad(false);
  QIFReferenceFullType * cmm1Ref2 = new QIFReferenceFullType();
  *cmm1Ref2 = *cmm1Ref1;
  QIFReferenceFullType * cmm1Ref3 = new QIFReferenceFullType();
  *cmm1Ref3 = *cmm1Ref1;
  QIFReferenceFullType * cmm1Ref4 = new QIFReferenceFullType();
  *cmm1Ref4 = *cmm1Ref1;
  QIFReferenceFullType * cmm1Ref5 = new QIFReferenceFullType();
  *cmm1Ref5 = *cmm1Ref1;
  QIFReferenceFullType * cmm1Ref6 = new QIFReferenceFullType();
  *cmm1Ref6 = *cmm1Ref1;
  QIFReferenceFullType * cmm1Ref7 = new QIFReferenceFullType();
  *cmm1Ref7 = *cmm1Ref1;

  MeasurementDeviceType * cmm2 = new MeasurementDeviceType();
  cmm2->setName(new XmlToken("CMM2"));
  cmm2->setprintElement(strdup("MeasurementDevice"));
  cmm2->setid(new QIFIdType(idString(qifid++))); // required id 8
  // add this device to our list
  measDevices->getMeasurementDevice()->push_back(cmm2);
  measDevices->getn()->setval(1 + measDevices->getn()->getval()); // increment n
  // this device will be referenced by its id in multiple places
  QIFReferenceFullType * cmm2Ref1 = new QIFReferenceFullType();
  cmm2Ref1->setval(cmm2->getid()->getval());
  cmm2Ref1->setbad(false);
  QIFReferenceFullType * cmm2Ref2 = new QIFReferenceFullType();
  *cmm2Ref2 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref3 = new QIFReferenceFullType();
  *cmm2Ref3 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref4 = new QIFReferenceFullType();
  *cmm2Ref4 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref5 = new QIFReferenceFullType();
  *cmm2Ref5 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref6 = new QIFReferenceFullType();
  *cmm2Ref6 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref7 = new QIFReferenceFullType();
  *cmm2Ref7 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref8 = new QIFReferenceFullType();
  *cmm2Ref8 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref9 = new QIFReferenceFullType();
  *cmm2Ref9 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref10 = new QIFReferenceFullType();
  *cmm2Ref10 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref11 = new QIFReferenceFullType();
  *cmm2Ref11 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref12 = new QIFReferenceFullType();
  *cmm2Ref12 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref13 = new QIFReferenceFullType();
  *cmm2Ref13 = *cmm2Ref1;
  QIFReferenceFullType * cmm2Ref14 = new QIFReferenceFullType();
  *cmm2Ref14 = *cmm2Ref1;

// endregion Measurement devices

// region Datum A plane
  /// define A datum plane

  // make a plane feature definition
  PlaneFeatureDefinitionType * planADef = new PlaneFeatureDefinitionType();
  planADef->setprintElement(strdup("PlaneFeatureDefinition"));
  planADef->setid(new QIFIdType(idString(qifid++)));  // required id 9

  // add to list
  featDefs->getFeatureDefinition()->push_back(planADef);
  //featDefs->getn()->setval(1 + featDefs->getn()->getval());
  // n is already set to 1

  // make a plane feature nominal
  PlaneFeatureNominalType * planANom = new PlaneFeatureNominalType();
  planANom->setprintElement(strdup("PlaneFeatureNominal"));
  planANom->setid(new QIFIdType(idString(qifid++)));  // required id 10

  // reference to definition
  QIFReferenceType * planADefRef = new QIFReferenceType();
  planADefRef->setval(planADef->getid()->getval());
  planADefRef->setbad(false);
  planANom->setFeatureDefinitionId(planADefRef);

  // plane location
  PointType * planLoc = new PointType();
  planLoc->push_back(new XmlDouble("0.0")); // x
  planLoc->push_back(new XmlDouble("0.0")); // y
  planLoc->push_back(new XmlDouble("0.0")); // z
  planANom->setLocation(planLoc);
  // plane normal
  UnitVectorType * planNor = new UnitVectorType();
  planNor->push_back(new XmlDouble("0.0")); // i
  planNor->push_back(new XmlDouble("0.0")); // j
  planNor->push_back(new XmlDouble("1.0")); // k
  planANom->setNormal(planNor);

  // add to list
  featNoms->getFeatureNominal()->push_back(planANom);
  //featNoms->getn()->setval(1 + featNoms->getn()->getval());
  // n is already set to 1

  // make a plane feature item
  PlaneFeatureItemType * planAItem = new PlaneFeatureItemType();
  planAItem->setprintElement(strdup("PlaneFeatureItem"));
  planAItem->setid(new QIFIdType(idString(qifid++))); // required id 11

  // reference to nominal
  QIFReferenceFullType * planANomRef1 = new QIFReferenceFullType();
  planANomRef1->setval(planANom->getid()->getval());
  planANomRef1->setbad(false);
  QIFReferenceFullType * planANomRef2 = new QIFReferenceFullType();
  *planANomRef2 = *planANomRef1;

  planAItem->setFeatureNominalId(planANomRef1);

  // Give plane a name
  planAItem->setFeatureName(new XmlToken("DAT_A"));

  // is this plane checked or set?
  PlaneCheckedFeatureType * planACheck = new PlaneCheckedFeatureType();
  PlaneMeasurementDeterminationType * planAMeasDet =
    new PlaneMeasurementDeterminationType();
  // this feature is checked, rather than set
  PlaneMeasurementDeterminationTypeVal * planACheckVal =
    new PlaneMeasurementDeterminationTypeVal();
  planACheckVal->Checked = planACheck;
  PlaneMeasurementDeterminationTypeChoicePair * planACheckChoice =
    new PlaneMeasurementDeterminationTypeChoicePair
    (PlaneMeasurementDeterminationTypeChoicePair::CheckedE, *planACheckVal);
  planAMeasDet->setPlaneMeasurementDeterminationTypePair(planACheckChoice);
  planAItem->setDeterminationMode(planAMeasDet);

  // add to list
  featItems->getFeatureItem()->push_back(planAItem);
  //featItems->getn()->setval(1 + featItems->getn()->getval());
  // n is already set to 1

  // reference to item
  QIFReferenceFullType * planAItemRef1 = new QIFReferenceFullType();
  planAItemRef1->setval(planAItem->getid()->getval());
  planAItemRef1->setbad(false);
  QIFReferenceFullType * planAItemRef2 = new QIFReferenceFullType();
  *planAItemRef2 = *planAItemRef1;

  // make a plane feature measurement
  PlaneFeatureMeasurementType * planAMeas = new PlaneFeatureMeasurementType();
  planAMeas->setprintElement(strdup("PlaneFeatureMeasurement"));
  planAMeas->setid(new QIFIdType(idString(qifid++))); // required id 12

  // reference to item
  planAMeas->setFeatureItemId(planAItemRef1);

  // measured location
  MeasuredPointType * planAMeasLoc = new MeasuredPointType();
  planAMeasLoc->push_back(new XmlDouble("0.0")); // perfect because it's datum A
  planAMeasLoc->push_back(new XmlDouble("0.0"));
  planAMeasLoc->push_back(new XmlDouble("0.0"));
  planAMeas->setLocation(planAMeasLoc);

  // plane normal
  MeasuredUnitVectorType * planAMeasNor = new MeasuredUnitVectorType();
  planAMeasNor->push_back(new XmlDouble("0.0")); // perfect because it's datum A
  planAMeasNor->push_back(new XmlDouble("0.0"));
  planAMeasNor->push_back(new XmlDouble("1.0"));
  planAMeas->setNormal(planAMeasNor);

  // add to list
  featMeasi->getFeatureMeasurement()->push_back(planAMeas);
  //featMeasi->getn()->setval(1 + featMeasi->getn()->getval());
  // n is already set to 1

  // point datum definition at plane nominal
  // array of one reference id
  ArrayReferenceFullType * datAfeats = new ArrayReferenceFullType();
  datAfeats->setId(new QIFReferenceFullTypeLisd());
  datAfeats->getId()->push_back(planANomRef2);
  datAfeats->setn(new NaturalType("1"));
  // hook to datum
  datA->setFeatureNominalIds(datAfeats);

  // make a flatness characteristic definition
  FlatnessCharacteristicDefinitionType * flatDef =
    new FlatnessCharacteristicDefinitionType();
  flatDef->setprintElement(strdup("FlatnessCharacteristicDefinition"));
  flatDef->setid(new QIFIdType(idString(qifid++))); // required id 13
	
  // define the tolerance zone
  LinearValueType * flatZone = new LinearValueType("0.1");
  // a flatness can be simple, per-unit-area, or both.
  // Items is used to store this hierachy of objects
  FlatnessCharact_1086_Type * flatDefLinear = new FlatnessCharact_1086_Type();
  flatDefLinear->setToleranceValue(flatZone);
  FlatnessCharact_1056_TypeVal * flatDefVal =
    new FlatnessCharact_1056_TypeVal();
  flatDefVal->FlatnessCharact_1086 = flatDefLinear; 
  FlatnessCharact_1056_TypeChoicePair * flatDefChoice =
    new FlatnessCharact_1056_TypeChoicePair
    (FlatnessCharact_1056_TypeChoicePair::FlatnessCharact_1086E, *flatDefVal);
  FlatnessCharact_1056_Type * flatDef1056 = new FlatnessCharact_1056_Type();
  flatDef1056->setFlatnessCharact_1056_TypePair(flatDefChoice);
  flatDef->setFlatnessCharact_1056(flatDef1056);

  // add to list
  charDefs->getCharacteristicDefinition()->push_back(flatDef);
  //charDefs->getn()->setval(1 + charDefs->getn()->getval());
  // n is already set to 1
  
  // make a new QIF document
  QIFDocumentType * qifdoc = new QIFDocumentType();
  qifdoc->setQPId(new QPIdType("a04702e1-cce4-4240-bd8b-35451f7d6dfe"));

  // make a flatness characteristic nominal
  FlatnessCharacteristicNominalType * flatNom =
    new FlatnessCharacteristicNominalType();
  flatNom->setprintElement(strdup("FlatnessCharacteristicNominal"));
  flatNom->setid(new QIFIdType(idString(qifid++))); // required id 14

  // required reference to definition
  QIFReferenceType * flatDefRef = new QIFReferenceType();
  flatDefRef->setval(flatDef->getid()->getval());
  flatDefRef->setbad(false);
  flatNom->setCharacteristicDefinitionId(flatDefRef);
  
  // add to list
  charNoms->getCharacteristicNominal()->push_back(flatNom);
  //charNoms->getn()->setval(1 + charNoms->getn()->getval());
  // n is already set to 1

  // make a flatness characteristic item
  FlatnessCharacteristicItemType * flatItem =
    new FlatnessCharacteristicItemType();
  flatItem->setprintElement(strdup("FlatnessCharacteristicItem"));
  flatItem->setid(new QIFIdType(idString(qifid++))); // required id 15

  // required reference to nominal
  QIFReferenceFullType * flatNomRef = new QIFReferenceFullType();
  flatNomRef->setval(flatNom->getid()->getval());
  flatNomRef->setbad(false);
  flatItem->setCharacteristicNominalId(flatNomRef);

  // give tolerance a name
  flatItem->setName(new XmlToken("FLAT1"));

  // point tolerance at feature
  ArrayReferenceType * flatItemFeatIds = new ArrayReferenceType();
  flatItemFeatIds->setId(new QIFReferenceTypeLisd());
  flatItemFeatIds->getId()->push_back(planAItemRef2);
  flatItemFeatIds->setn(new NaturalType("1"));
  flatItem->setFeatureItemIds(flatItemFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType * flatItemDevIds = new ArrayReferenceType;
  flatItemDevIds->setId(new QIFReferenceTypeLisd());
  flatItemDevIds->getId()->push_back(cmm1Ref1);
  flatItemDevIds->getId()->push_back(cmm2Ref1);
  flatItemDevIds->setn(new NaturalType("2"));
  flatItem->setMeasurementDeviceIds(flatItemDevIds);

  // add to list
  charItems->getCharacteristicItem()->push_back(flatItem);
  //charItems->getn()->setval(1 + charItems->getn()->getval());
  // n is already set to 1

  // make a flatness characteristic measurement
  FlatnessCharacteristicMeasurementType * flatMeas =
    new FlatnessCharacteristicMeasurementType;
  flatMeas->setprintElement(strdup("FlatnessCharacteristicMeasurement"));
  flatMeas->setid(new QIFIdType(idString(qifid++))); // required id 16

  // required reference to item
  QIFReferenceFullType * flatItemRef = new QIFReferenceFullType();
  flatItemRef->setval(flatItem->getid()->getval());
  flatItemRef->setbad(false);
  flatMeas->setCharacteristicItemId(flatItemRef);
  
  
  // required status
  CharacteristicStatusType * flatStat = new CharacteristicStatusType();
  CharacteristicStatusTypeVal * flatStatVal =
    new CharacteristicStatusTypeVal();
  flatStatVal->CharacteristicStatusEnum =
    new CharacteristicStatusEnumType("PASS");
  CharacteristicStatusTypeChoicePair * flatStatChoice =
    new CharacteristicStatusTypeChoicePair
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     *flatStatVal);
  flatStat->setCharacteristicStatusTypePair(flatStatChoice);
  flatMeas->setStatus(flatStat);
  
  // measured value
  MeasuredLinearValueType * flatMeasVal =
    new MeasuredLinearValueType("0.023");
  flatMeas->setValue(flatMeasVal);

  // point measured tolerance at measured feature
  QIFReferenceType * planAMeasRef = new QIFReferenceType;
  planAMeasRef->setval(planAMeas->getid()->getval());
  planAMeasRef->setbad(false);
  ArrayReferenceType * flatMeasFeatIds = new ArrayReferenceType;
  flatMeasFeatIds->setId(new QIFReferenceTypeLisd());
  flatMeasFeatIds->getId()->push_back(planAMeasRef);
  flatMeasFeatIds->setn(new NaturalType("1"));
  flatMeas->setFeatureMeasurementIds(flatMeasFeatIds);
  
  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType * flatMeasDevIds = new ArrayReferenceType;
  flatMeasDevIds->setId(new QIFReferenceTypeLisd());
  flatMeasDevIds->getId()->push_back(cmm2Ref2);
  flatMeasDevIds->setn(new NaturalType("1"));
  flatMeas->setMeasurementDeviceIds(flatMeasDevIds);

  // add to list
  charMeasi->getCharacteristicMeasurement()->push_back(flatMeas);
  //charMeasi->getn()->setval(1 + charMeasi->getn()->getval());
  // n is already set to 1
// endregion Datum A plane

// region datum B cylinder	
  // make a cylinder feature definition * SHARED BETWEEN DATUMS B AND C *
  CylinderFeatureDefinitionType * cylBCDef =
    new CylinderFeatureDefinitionType();
  cylBCDef->setprintElement(strdup("CylinderFeatureDefinition"));
  cylBCDef->setid(new QIFIdType(idString(qifid++))); // required id 17

  // feature size
  LinearValueType * diaBCSize1 = new LinearValueType("12.7");
  cylBCDef->setDiameter(diaBCSize1);
  
  // material side
  cylBCDef->setInternalExternal(new InternalExternalEnumType("INTERNAL"));

  // add to list
  featDefs->getFeatureDefinition()->push_back(cylBCDef);
  featDefs->getn()->setval(1 + featDefs->getn()->getval()); // increment n

  // make a cylinder feature nominal (not sharable)
  CylinderFeatureNominalType * cylBNom = new CylinderFeatureNominalType();
  cylBNom->setprintElement(strdup("CylinderFeatureNominal"));
  cylBNom->setid(new QIFIdType(idString(qifid++))); // required id 18

  // reference to shared definition
  QIFReferenceType * cylBCDefRef1 = new QIFReferenceType();
  cylBCDefRef1->setval(cylBCDef->getid()->getval());
  cylBCDefRef1->setbad(false);
  QIFReferenceType * cylBCDefRef2 = new QIFReferenceType();
  *cylBCDefRef2 = *cylBCDefRef1;

  cylBNom->setFeatureDefinitionId(cylBCDefRef1);

  // cylinder location
  PointType * cylBcen = new PointType();
  cylBcen->push_back(new XmlDouble("30.0"));
  cylBcen->push_back(new XmlDouble("0.0"));
  cylBcen->push_back(new XmlDouble("0.0"));
  
  // cylinder axis
  UnitVectorType * cylBvec = new UnitVectorType();
  cylBvec->push_back(new XmlDouble("0.0"));
  cylBvec->push_back(new XmlDouble("0.0"));
  cylBvec->push_back(new XmlDouble("-1.0"));

  // cylinder axis
  AxisType * cylBaxis = new AxisType();
  cylBaxis->setAxisPoint(cylBcen);
  cylBaxis->setDirection(cylBvec);
  cylBNom->setAxis(cylBaxis);

  // add to list
  featNoms->getFeatureNominal()->push_back(cylBNom);
  featNoms->getn()->setval(1 + featNoms->getn()->getval()); // increment n

  // make a cylinder feature item
  CylinderFeatureItemType * cylBItem = new CylinderFeatureItemType();
  cylBItem->setprintElement(strdup("CylinderFeatureItem"));
  cylBItem->setid(new QIFIdType(idString(qifid++))); // required id 19
  
  // reference to nominal
  QIFReferenceFullType * cylBNomRef1 = new QIFReferenceFullType();
  cylBNomRef1->setval(cylBNom->getid()->getval());
  cylBNomRef1->setbad(false);
  QIFReferenceFullType * cylBNomRef2 = new QIFReferenceFullType();
  *cylBNomRef2 = *cylBNomRef1;
  cylBItem->setFeatureNominalId(cylBNomRef1);

  // Give cylinder a name
  cylBItem->setFeatureName(new XmlToken("DAT_B"));

  // is this cylinder checked or set?
  CylinderCheckedFeatureType * cylBCheck = new CylinderCheckedFeatureType();
  CylinderMeasurementDeterminationType * cylBMeasDet =
    new CylinderMeasurementDeterminationType();
  // this feature is checked, rather than set
  CylinderMeasurementDeterminationTypeVal * cylBCheckVal =
    new CylinderMeasurementDeterminationTypeVal();
  cylBCheckVal->Checked = cylBCheck;
  CylinderMeasurementDeterminationTypeChoicePair * cylBCheckChoice =
    new CylinderMeasurementDeterminationTypeChoicePair
    (CylinderMeasurementDeterminationTypeChoicePair::CheckedE, *cylBCheckVal);
  cylBMeasDet->setCylinderMeasurementDeterminationTypePair(cylBCheckChoice);
  cylBItem->setDeterminationMode(cylBMeasDet);

  // add to list
  featItems->getFeatureItem()->push_back(cylBItem);
  featItems->getn()->setval(1 + featItems->getn()->getval());  // increment n

  // make a cylinder feature measurement
  CylinderFeatureMeasurementType * cylBMeas =
    new CylinderFeatureMeasurementType();
  cylBMeas->setprintElement(strdup("CylinderFeatureMeasurement"));
  cylBMeas->setid(new QIFIdType(idString(qifid++))); // required id 20
  
  // reference to item
  QIFReferenceFullType * cylBItemRef1 = new QIFReferenceFullType();
  cylBItemRef1->setval(cylBItem->getid()->getval());
  cylBItemRef1->setbad(false);
  QIFReferenceFullType * cylBItemRef2 = new QIFReferenceFullType();
  *cylBItemRef2 = *cylBItemRef1;
  QIFReferenceFullType * cylBItemRef3 = new QIFReferenceFullType();
  *cylBItemRef3 = *cylBItemRef1;

  cylBMeas->setFeatureItemId(cylBItemRef1);
	
  // cylinder location
  MeasuredPointType * cylBMeasCen = new MeasuredPointType();
  cylBMeasCen->push_back(new XmlDouble("30.0"));
  cylBMeasCen->push_back(new XmlDouble("0.0"));
  cylBMeasCen->push_back(new XmlDouble("0.0"));

    // cylinder axis
  MeasuredUnitVectorType * cylBMeasVec = new MeasuredUnitVectorType();
  cylBMeasVec->push_back(new XmlDouble("0.051"));
  cylBMeasVec->push_back(new XmlDouble("0.0"));
  cylBMeasVec->push_back(new XmlDouble("-0.9987"));

  // cylinder axis
  MeasuredAxisType * cylBMeasAxis = new MeasuredAxisType();
  cylBMeasAxis->setAxisPoint(cylBMeasCen);
  cylBMeasAxis->setDirection(cylBMeasVec);
  cylBMeas->setAxis(cylBMeasAxis);

  // cylinder diameter
  MeasuredLinearValueType * cylBMeasDia =
    new MeasuredLinearValueType("12.699");
  cylBMeas->setDiameter(cylBMeasDia);

  // add to list
  featMeasi->getFeatureMeasurement()->push_back(cylBMeas);
  featMeasi->getn()->setval(1 + featMeasi->getn()->getval()); // increment n
  
  // array of one reference id
  ArrayReferenceFullType * datBfeats = new ArrayReferenceFullType();
  datBfeats->setId(new QIFReferenceFullTypeLisd());
  datBfeats->getId()->push_back(cylBNomRef2);
  datBfeats->setn(new NaturalType("1"));
  // hook to datum
  datB->setFeatureNominalIds(datBfeats);
  
  // make a diameter characteristic definition to be shared
  DiameterCharacteristicDefinitionType * diaBCDef =
    new DiameterCharacteristicDefinitionType();
  diaBCDef->setprintElement(strdup("DiameterCharacteristicDefinition"));
  diaBCDef->setid(new QIFIdType(idString(qifid++))); // required id 21

  // tolerance (as opposed to limits and fits, or non-tolerance
  LinearValueType * plusTolBC = new LinearValueType("0.3");
  LinearValueType * minusTolBC = new LinearValueType("-0.3");
  LinearToleranceType * diaBCTol = new LinearToleranceType();
  diaBCTol->setDefinedAsLimit(new XmlBoolean("false"));
  LinearTolerance_1042_Type * minBCTol = new LinearTolerance_1042_Type();
  minBCTol->setMinValue(minusTolBC);
  LinearTolerance_1035_Type * maxMinBCTol = new LinearTolerance_1035_Type();
  maxMinBCTol->setMaxValue(plusTolBC);
  maxMinBCTol->setLinearTolerance_1042(minBCTol);
  LinearTolerance_1018_TypeVal * diaBCTolVal =
    new LinearTolerance_1018_TypeVal();
  diaBCTolVal->LinearTolerance_1035 = maxMinBCTol; 
  LinearTolerance_1018_TypeChoicePair * diaBCTolChoice =
    new LinearTolerance_1018_TypeChoicePair
    (LinearTolerance_1018_TypeChoicePair::LinearTolerance_1035E,
     *diaBCTolVal);
  LinearTolerance_1018_Type * diaBCTol1018 = new LinearTolerance_1018_Type();
  diaBCTol1018->setLinearTolerance_1018_TypePair(diaBCTolChoice);
  diaBCTol->setLinearTolerance_1018(diaBCTol1018);
  DiameterCharact_1055_TypeVal * diaBCTolSelVal =
    new DiameterCharact_1055_TypeVal();
  diaBCTolSelVal->Tolerance = diaBCTol;
  DiameterCharact_1055_TypeChoicePair * diaBCTolSelChoice =
    new DiameterCharact_1055_TypeChoicePair
    (DiameterCharact_1055_TypeChoicePair::ToleranceE,
     *diaBCTolSelVal);
  DiameterCharact_1055_Type * diaBCTolSel = new DiameterCharact_1055_Type();
  diaBCTolSel->setDiameterCharact_1055_TypePair(diaBCTolSelChoice);
  diaBCDef->setDiameterCharact_1055(diaBCTolSel);

  // add to list
  charDefs->getCharacteristicDefinition()->push_back(diaBCDef);
  charDefs->getn()->setval(1 + charDefs->getn()->getval());  // increment n

  // make a diameter characteristic nominal
  DiameterCharacteristicNominalType * diaBCNom =
    new DiameterCharacteristicNominalType();
  diaBCNom->setprintElement(strdup("DiameterCharacteristicNominal"));
  diaBCNom->setid(new QIFIdType(idString(qifid++))); // required id 22

  // required reference to definition
  QIFReferenceType * diaBCDefRef = new QIFReferenceType();
  diaBCDefRef->setval(diaBCDef->getid()->getval());
  diaBCDefRef->setbad(false);
  diaBCNom->setCharacteristicDefinitionId(diaBCDefRef);

  // nominal value
  LinearValueType * diaBCSize2 = new LinearValueType("12.7");
  diaBCNom->setTargetValue(diaBCSize2); // from feature definition above

  // give shared tolerance a name
  diaBCNom->setName(new XmlToken("DIAM1"));

   // add to list
  charNoms->getCharacteristicNominal()->push_back(diaBCNom);
  charNoms->getn()->setval(1 + charNoms->getn()->getval()); // increment n

  // make a diameter characteristic item (this is not sharable)
  DiameterCharacteristicItemType * diaBItem =
    new DiameterCharacteristicItemType();
  diaBItem->setprintElement(strdup("DiameterCharacteristicItem"));
  diaBItem->setid(new QIFIdType(idString(qifid++))); // required id 23

  // required reference to nominal
  QIFReferenceFullType * diaBCNomRef1 = new QIFReferenceFullType();
  diaBCNomRef1->setval(diaBCNom->getid()->getval());
  diaBCNomRef1->setbad(false);
  QIFReferenceFullType * diaBCNomRef2 = new QIFReferenceFullType();
  *diaBCNomRef2 = *diaBCNomRef1;
  diaBItem->setCharacteristicNominalId(diaBCNomRef1);

  // give tolerance a name
  diaBItem->setName(new XmlToken("DIAM1_B"));
	
  // point tolerance at feature
  ArrayReferenceType * diaBFeatIds = new ArrayReferenceType();
  diaBFeatIds->setId(new QIFReferenceTypeLisd());
  diaBFeatIds->getId()->push_back(cylBItemRef2);
  diaBFeatIds->setn(new NaturalType("1"));
  diaBItem->setFeatureItemIds(diaBFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType * diaBDevIds = new ArrayReferenceType();
  diaBDevIds->setId(new QIFReferenceTypeLisd());
  diaBDevIds->getId()->push_back(cmm1Ref2);
  diaBDevIds->getId()->push_back(cmm2Ref3);
  diaBDevIds->setn(new NaturalType("2"));
  diaBItem->setMeasurementDeviceIds(diaBDevIds);

  // add to list
  charItems->getCharacteristicItem()->push_back(diaBItem);
  charItems->getn()->setval(1 + charItems->getn()->getval()); // increment n

  // make a diameter characteristic measurement
  DiameterCharacteristicMeasurementType * diaBMeas =
    new DiameterCharacteristicMeasurementType();
  diaBMeas->setprintElement(strdup("DiameterCharacteristicMeasurement"));
  diaBMeas->setid(new QIFIdType(idString(qifid++))); // required id 24

  // required reference to item
  QIFReferenceFullType * diaBItemRef = new QIFReferenceFullType();
  diaBItemRef->setval(diaBItem->getid()->getval());
  diaBItemRef->setbad(false);
  diaBMeas->setCharacteristicItemId(diaBItemRef);

  // required status
  CharacteristicStatusType * diaBStat = new CharacteristicStatusType();
  CharacteristicStatusTypeVal * diaBStatVal =
    new CharacteristicStatusTypeVal();
  diaBStatVal->CharacteristicStatusEnum =
    new CharacteristicStatusEnumType("PASS");
  CharacteristicStatusTypeChoicePair * diaBStatChoice =
    new CharacteristicStatusTypeChoicePair
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     *diaBStatVal);
  diaBStat->setCharacteristicStatusTypePair(diaBStatChoice);
  diaBMeas->setStatus(diaBStat);

  // measured value
  MeasuredLinearValueType * diaBMeasVal =
    new MeasuredLinearValueType("12.699");
  diaBMeas->setValue(diaBMeasVal);

  // point measured tolerance at measured feature
  QIFReferenceFullType * cylBMeasRef1 = new QIFReferenceFullType();
  cylBMeasRef1->setval(cylBMeas->getid()->getval());
  cylBMeasRef1->setbad(false);
  QIFReferenceFullType * cylBMeasRef2 = new QIFReferenceFullType();
  *cylBMeasRef2 = *cylBMeasRef1;

  ArrayReferenceType * diaBFeatMeasIds = new ArrayReferenceType();
  diaBFeatMeasIds->setId(new QIFReferenceTypeLisd());
  diaBFeatMeasIds->setn(new NaturalType("1"));
  diaBFeatMeasIds->getId()->push_back(cylBMeasRef1);
  diaBMeas->setFeatureMeasurementIds(diaBFeatMeasIds);
  
  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType * diaBMeasDevIds = new ArrayReferenceType();
  diaBMeasDevIds->setId(new QIFReferenceTypeLisd());
  diaBMeasDevIds->setn(new NaturalType("1"));
  diaBMeasDevIds->getId()->push_back(cmm2Ref4);
  diaBMeas->setMeasurementDeviceIds(diaBMeasDevIds);

  // add to list
  charMeasi->getCharacteristicMeasurement()->push_back(diaBMeas);
  charMeasi->getn()->setval(1 + charMeasi->getn()->getval()); // increment n

  // make a perpendicularity characteristic definition
  PerpendicularityCharacteristicDefinitionType * perpDef =
    new PerpendicularityCharacteristicDefinitionType();
  perpDef->setprintElement(strdup("PerpendicularityCharacteristicDefinition"));
  perpDef->setid(new QIFIdType(idString(qifid++))); // required id 25

  // define the tolerance zone
  LinearValueType * perpZone = new LinearValueType("0.2");
  perpDef->setToleranceValue(perpZone);

  // define the zone shape
  OrientationZoneShapeType * perpZoneShape = new OrientationZoneShapeType();
  OrientationZoneShapeTypeVal * perpZoneShapeVal =
    new OrientationZoneShapeTypeVal();
  perpZoneShapeVal->DiametricalZone = new OrientationDiametricalZoneType();
  OrientationZoneShapeTypeChoicePair * perpZoneShapeChoice =
    new OrientationZoneShapeTypeChoicePair
    (OrientationZoneShapeTypeChoicePair::DiametricalZoneE, *perpZoneShapeVal);
  perpZoneShape->setOrientationZoneShapeTypePair(perpZoneShapeChoice);
  perpDef->setZoneShape(perpZoneShape);
  // define the material condition
  perpDef->setMaterialCondition(new MaterialModifierEnumType("MAXIMUM"));
  // point to DRF
  QIFReferenceFullType * ADRFRef = new QIFReferenceFullType();
  ADRFRef->setval(drfA->getid()->getval());
  ADRFRef->setbad(false);
  perpDef->setDatumReferenceFrameId(ADRFRef);

  // add to list
  charDefs->getCharacteristicDefinition()->push_back(perpDef);
  charDefs->getn()->setval(1 + charDefs->getn()->getval()); // increment n

  // make a perpendicularity characteristic nominal
  PerpendicularityCharacteristicNominalType * perpNom =
    new PerpendicularityCharacteristicNominalType();
  perpNom->setprintElement(strdup("PerpendicularityCharacteristicNominal"));
  perpNom->setid(new QIFIdType(idString(qifid++))); // required id 26

  // required reference to definition
  QIFReferenceType * perpDefRef = new QIFReferenceType();
  perpDefRef->setval(perpDef->getid()->getval());
  perpDefRef->setbad(false);
  perpNom->setCharacteristicDefinitionId(perpDefRef);

  // add to list
  charNoms->getCharacteristicNominal()->push_back(perpNom);
  charNoms->getn()->setval(1 + charNoms->getn()->getval()); // increment n

  // make a perpendicularity characteristic item
  PerpendicularityCharacteristicItemType * perpItem =
    new PerpendicularityCharacteristicItemType();
  perpItem->setprintElement(strdup("PerpendicularityCharacteristicItem"));
  perpItem->setid(new QIFIdType(idString(qifid++))); // required id 27

  // required reference to nominal
  QIFReferenceFullType * perpNomRef = new QIFReferenceFullType();
  perpNomRef->setval(perpNom->getid()->getval());
  perpNomRef->setbad(false);
  perpItem->setCharacteristicNominalId(perpNomRef);
  
  // give tolerance a name
  perpItem->setName(new XmlToken("PERP1"));

  // point tolerance at feature
  ArrayReferenceType * perpItemIds = new ArrayReferenceType();
  perpItemIds->setId(new QIFReferenceTypeLisd());
  perpItemIds->setn(new NaturalType("1"));
  perpItemIds->getId()->push_back(cylBItemRef3); // from hooking to diameter
  perpItem->setFeatureItemIds(perpItemIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType * perpItemDevIds = new ArrayReferenceType();
  perpItemDevIds->setId(new QIFReferenceTypeLisd());
  perpItemDevIds->setn(new NaturalType("2"));
  perpItemDevIds->getId()->push_back(cmm1Ref3);
  perpItemDevIds->getId()->push_back(cmm2Ref5);
  perpItem->setMeasurementDeviceIds(perpItemDevIds);

  // add to list
  charItems->getCharacteristicItem()->push_back(perpItem);
  charItems->getn()->setval(1 + charItems->getn()->getval()); // increment n

  // make a perpendicularity characteristic actual
  PerpendicularityCharacteristicMeasurementType * perpMeas =
    new PerpendicularityCharacteristicMeasurementType();
  perpMeas->setprintElement(strdup
			    ("PerpendicularityCharacteristicMeasurement"));
  perpMeas->setid(new QIFIdType(idString(qifid++))); // required id 28

  // required reference to item
  QIFReferenceFullType * perpItemRef = new QIFReferenceFullType();
  perpItemRef->setval(perpItem->getid()->getval());
  perpItemRef->setbad(false);
  perpMeas->setCharacteristicItemId(perpItemRef);

  // required status
  CharacteristicStatusType * perpStat = new CharacteristicStatusType();
  CharacteristicStatusTypeVal * perpStatVal =
    new CharacteristicStatusTypeVal();
  perpStatVal->CharacteristicStatusEnum =
    new CharacteristicStatusEnumType("PASS");
  CharacteristicStatusTypeChoicePair * perpStatChoice =
    new CharacteristicStatusTypeChoicePair
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     *perpStatVal);
  perpStat->setCharacteristicStatusTypePair(perpStatChoice);
  perpMeas->setStatus(perpStat);

  // measured value
  MeasuredLinearValueType * perpMeasVal =
    new MeasuredLinearValueType("0.07");
  perpMeas->setValue(perpMeasVal);

  // point measured tolerance at measured feature
  ArrayReferenceType * perpMeasFeatIds = new ArrayReferenceType();
  perpMeasFeatIds->setId(new QIFReferenceTypeLisd());
  perpMeasFeatIds->setn(new NaturalType("1"));
  perpMeasFeatIds->getId()->push_back(cylBMeasRef2);
  perpMeas->setFeatureMeasurementIds(perpMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType * perpMeasDevIds = new ArrayReferenceType();
  perpMeasDevIds->setId(new QIFReferenceTypeLisd());
  perpMeasDevIds->setn(new NaturalType("1"));
  perpMeasDevIds->getId()->push_back(cmm2Ref6);
  perpMeas->setMeasurementDeviceIds(perpMeasDevIds);

  // add to list
  charMeasi->getCharacteristicMeasurement()->push_back(perpMeas);
  charMeasi->getn()->setval(1 + charMeasi->getn()->getval()); // increment n
// endregion datum B cylinder
  
// region datum C cylinder

  // make a cylinder feature nominal
  CylinderFeatureNominalType * cylCNom = new CylinderFeatureNominalType;
  cylCNom->setprintElement(strdup("CylinderFeatureNominal"));
  cylCNom->setid(new QIFIdType(idString(qifid++))); // required id 29

  // reference to shared definition
  cylCNom->setFeatureDefinitionId(cylBCDefRef2);

  // cylinder location
  PointType * cylCcen = new PointType();
  cylCcen->push_back(new XmlDouble("150.0"));
  cylCcen->push_back(new XmlDouble("0.0"));
  cylCcen->push_back(new XmlDouble("0.0"));

  // cylinder axis
  UnitVectorType * cylCvec  = new UnitVectorType();
  cylCvec->push_back(new XmlDouble("0.0"));
  cylCvec->push_back(new XmlDouble("0.0"));
  cylCvec->push_back(new XmlDouble("-1.0"));

  // cylinder axis
  AxisType * cylCaxis = new AxisType();
  cylCaxis->setAxisPoint(cylCcen);
  cylCaxis->setDirection(cylCvec);
  cylCNom->setAxis(cylCaxis);

  // add to list
  featNoms->getFeatureNominal()->push_back(cylCNom);
  featNoms->getn()->setval(1 + featNoms->getn()->getval()); // increment n

  // make a cylinder feature item
  CylinderFeatureItemType * cylCItem = new CylinderFeatureItemType();
  cylCItem->setprintElement(strdup("CylinderFeatureItem"));
  cylCItem->setid(new QIFIdType(idString(qifid++))); // required id 30

  // reference to nominal
  QIFReferenceFullType * cylCNomRef1 = new QIFReferenceFullType();
  cylCNomRef1->setval(cylCNom->getid()->getval());
  cylCNomRef1->setbad(false);
  QIFReferenceFullType * cylCNomRef2 = new QIFReferenceFullType();
  *cylCNomRef2 = *cylCNomRef1;

  cylCItem->setFeatureNominalId(cylCNomRef1);
  
  // Give cylinder a name
  cylCItem->setFeatureName(new XmlToken("DAT_C"));

  // is this cylinder checked or set?
  CylinderCheckedFeatureType * cylCCheck = new CylinderCheckedFeatureType();
  CylinderMeasurementDeterminationType * cylCMeasDet =
    new CylinderMeasurementDeterminationType();
  // this feature is checked, rather than set
  CylinderMeasurementDeterminationTypeVal * cylCCheckVal =
    new CylinderMeasurementDeterminationTypeVal();
  cylCCheckVal->Checked = cylCCheck;
  CylinderMeasurementDeterminationTypeChoicePair * cylCCheckChoice =
    new CylinderMeasurementDeterminationTypeChoicePair
    (CylinderMeasurementDeterminationTypeChoicePair::CheckedE, *cylCCheckVal);
  cylCMeasDet->setCylinderMeasurementDeterminationTypePair(cylCCheckChoice);
  cylCItem->setDeterminationMode(cylCMeasDet);

  // add to list
  featItems->getFeatureItem()->push_back(cylCItem);
  featItems->getn()->setval(1 + featItems->getn()->getval());  // increment n

  // make a cylinder feature actual
  CylinderFeatureMeasurementType * cylCMeas =
    new CylinderFeatureMeasurementType();
  cylCMeas->setprintElement(strdup("CylinderFeatureMeasurement"));
  cylCMeas->setid(new QIFIdType(idString(qifid++)));  // required id 31

  // reference to item
  QIFReferenceFullType * cylCItemRef1 = new QIFReferenceFullType();
  cylCItemRef1->setval(cylCItem->getid()->getval());
  cylCItemRef1->setbad(false);
  QIFReferenceFullType * cylCItemRef2 = new QIFReferenceFullType();
  *cylCItemRef2 = *cylCItemRef1;
  QIFReferenceFullType * cylCItemRef3 = new QIFReferenceFullType();
  *cylCItemRef3 = *cylCItemRef1;

  cylCMeas->setFeatureItemId(cylCItemRef1);

  // cylinder location
  MeasuredPointType * cylCMeasCen = new MeasuredPointType();
  cylCMeasCen->push_back(new XmlDouble("150.0"));
  cylCMeasCen->push_back(new XmlDouble("0.0"));
  cylCMeasCen->push_back(new XmlDouble("0.0"));

  // cylinder axis
  MeasuredUnitVectorType * cylCMeasVec = new MeasuredUnitVectorType();
  cylCMeasVec->push_back(new XmlDouble("-0.0099"));
  cylCMeasVec->push_back(new XmlDouble("0.0099"));
  cylCMeasVec->push_back(new XmlDouble("-0.9999"));

  // cylinder axis
  MeasuredAxisType * cylCMeasAxis = new MeasuredAxisType();
  cylCMeasAxis->setAxisPoint(cylCMeasCen);
  cylCMeasAxis->setDirection(cylCMeasVec);
  cylCMeas->setAxis(cylCMeasAxis);

  // cylinder diameter
  MeasuredLinearValueType * cylCMeasDia =
    new MeasuredLinearValueType("12.72");
  cylCMeas->setDiameter(cylCMeasDia);

  // add to list
  featMeasi->getFeatureMeasurement()->push_back(cylCMeas);
  featMeasi->getn()->setval(1 + featMeasi->getn()->getval()); // increment n
  
  // array of one reference id
  ArrayReferenceFullType * datCfeats = new ArrayReferenceFullType();
  datCfeats->setId(new QIFReferenceFullTypeLisd());
  datCfeats->getId()->push_back(cylCNomRef2);
  datCfeats->setn(new NaturalType("1"));
  // hook to datum
  datC->setFeatureNominalIds(datCfeats);
  
  // make a diameter characteristic item (this is not sharable)
  DiameterCharacteristicItemType * diaCItem =
    new DiameterCharacteristicItemType();
  diaCItem->setprintElement(strdup("DiameterCharacteristicItem"));
  diaCItem->setid(new QIFIdType(idString(qifid++))); // required id 32

  // required reference to nominal
  diaCItem->setCharacteristicNominalId(diaBCNomRef2); // shared nominal
  
  // give tolerance a name
  diaCItem->setName(new XmlToken("DIAM1_C"));

  // point tolerance at feature
  ArrayReferenceType * diaCFeatIds = new ArrayReferenceType();
  diaCFeatIds->setId(new QIFReferenceTypeLisd());
  diaCFeatIds->getId()->push_back(cylCItemRef2);
  diaCFeatIds->setn(new NaturalType("1"));
  diaCItem->setFeatureItemIds(diaCFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType * diaCDevIds = new ArrayReferenceType();
  diaCDevIds->setId(new QIFReferenceTypeLisd());
  diaCDevIds->getId()->push_back(cmm1Ref4);
  diaCDevIds->getId()->push_back(cmm2Ref7);
  diaCDevIds->setn(new NaturalType("2"));
  diaCItem->setMeasurementDeviceIds(diaCDevIds);

  // add to list
  charItems->getCharacteristicItem()->push_back(diaCItem);
  charItems->getn()->setval(1 + charItems->getn()->getval()); // increment n

  // make a diameter characteristic measurement
  DiameterCharacteristicMeasurementType * diaCMeas =
    new DiameterCharacteristicMeasurementType();
  diaCMeas->setprintElement(strdup("DiameterCharacteristicMeasurement"));
  diaCMeas->setid(new QIFIdType(idString(qifid++))); // required id 33

  // required reference to item
  QIFReferenceFullType * diaCItemRef = new QIFReferenceFullType();
  diaCItemRef->setval(diaCItem->getid()->getval());
  diaCItemRef->setbad(false);
  diaCMeas->setCharacteristicItemId(diaCItemRef);

  // required status
  CharacteristicStatusType * diaCStat = new CharacteristicStatusType();
  CharacteristicStatusTypeVal * diaCStatVal =
    new CharacteristicStatusTypeVal();
  diaCStatVal->CharacteristicStatusEnum =
    new CharacteristicStatusEnumType("PASS");
  CharacteristicStatusTypeChoicePair * diaCStatChoice =
    new CharacteristicStatusTypeChoicePair
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     *diaCStatVal);
  diaCStat->setCharacteristicStatusTypePair(diaCStatChoice);
  diaCMeas->setStatus(diaCStat);

  // measured value
  MeasuredLinearValueType * diaCMeasVal =
    new MeasuredLinearValueType("12.72");
  diaCMeas->setValue(diaCMeasVal);

  // point measured tolerance at measured feature
  QIFReferenceFullType * cylCMeasRef1 = new QIFReferenceFullType();
  cylCMeasRef1->setval(cylCMeas->getid()->getval());
  cylCMeasRef1->setbad(false);
  QIFReferenceFullType * cylCMeasRef2 = new QIFReferenceFullType();
  *cylCMeasRef2 = *cylCMeasRef1;

  ArrayReferenceType * diaCFeatMeasIds = new ArrayReferenceType();
  diaCFeatMeasIds->setId(new QIFReferenceTypeLisd());
  diaCFeatMeasIds->setn(new NaturalType("1"));
  diaCFeatMeasIds->getId()->push_back(cylCMeasRef1);
  diaCMeas->setFeatureMeasurementIds(diaCFeatMeasIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType * diaCMeasDevIds = new ArrayReferenceType();
  diaCMeasDevIds->setId(new QIFReferenceTypeLisd());
  diaCMeasDevIds->setn(new NaturalType("1"));
  diaCMeasDevIds->getId()->push_back(cmm2Ref8);
  diaCMeas->setMeasurementDeviceIds(diaCMeasDevIds);

  // add to list
  charMeasi->getCharacteristicMeasurement()->push_back(diaCMeas);
  charMeasi->getn()->setval(1 + charMeasi->getn()->getval()); // increment n

  // make a position characteristic definition
  PositionCharacteristicDefinitionType * posCDef =
    new PositionCharacteristicDefinitionType();
  posCDef->setprintElement(strdup("PositionCharacteristicDefinition"));
  posCDef->setid(new QIFIdType(idString(qifid++))); // required id 34

  // define the tolerance zone shape (diametrical)
  PositionZoneShapeType * zoneCShape = new PositionZoneShapeType();
  PositionZoneShapeTypeVal * zoneCShapeVal =
    new PositionZoneShapeTypeVal();
  zoneCShapeVal->DiametricalZone = new PositionDiametricalZoneType();
  PositionZoneShapeTypeChoicePair * zoneCShapeChoice =
    new PositionZoneShapeTypeChoicePair
    (PositionZoneShapeTypeChoicePair::DiametricalZoneE, *zoneCShapeVal);
  zoneCShape->setPositionZoneShapeTypePair(zoneCShapeChoice);
  posCDef->setZoneShape(zoneCShape);

  // define the tolerance zone
  LinearValueType * tolCZone = new LinearValueType("0.5");
  posCDef->setToleranceValue(tolCZone);

  // apply MMC material condition
  posCDef->setMaterialCondition(new MaterialModifierEnumType("MAXIMUM"));

  // reference our DRF
  QIFReferenceFullType * drfABRef = new QIFReferenceFullType();
  drfABRef->setval(drfAB->getid()->getval());
  drfABRef->setbad(false);
  posCDef->setDatumReferenceFrameId(drfABRef);

  // add to list
  charDefs->getCharacteristicDefinition()->push_back(posCDef);
  charDefs->getn()->setval(1 + charDefs->getn()->getval()); // increment n

  // make a position characteristic nominal
  PositionCharacteristicNominalType * posCNom =
    new PositionCharacteristicNominalType();
  posCNom->setprintElement(strdup("PositionCharacteristicNominal"));
  posCNom->setid(new QIFIdType(idString(qifid++))); // required id 35
  
  // required reference to definition
  QIFReferenceType * posCDefRef =  new QIFReferenceType();
  posCDefRef->setval(posCDef->getid()->getval());
  posCDefRef->setbad(false);
  posCNom->setCharacteristicDefinitionId(posCDefRef);

  // add to list
  charNoms->getCharacteristicNominal()->push_back(posCNom);
  charNoms->getn()->setval(1 + charNoms->getn()->getval()); // increment n

  // make a position characteristic item
  PositionCharacteristicItemType * posCItem =
    new PositionCharacteristicItemType();
  posCItem->setprintElement(strdup("PositionCharacteristicItem"));
  posCItem->setid(new QIFIdType(idString(qifid++))); // required id 36

  // required reference to nominal
  QIFReferenceFullType * posCNomRef = new QIFReferenceFullType();
  posCNomRef->setval(posCNom->getid()->getval());
  posCNomRef->setbad(false);
  posCItem->setCharacteristicNominalId(posCNomRef);
  
  // give tolerance a name
  posCItem->setName(new XmlToken("POSN1"));

  // point tolerance at feature
  ArrayReferenceType * posCItemFeatIds = new ArrayReferenceType();
  posCItemFeatIds->setId(new QIFReferenceTypeLisd());
  posCItemFeatIds->setn(new NaturalType("1"));
  posCItemFeatIds->getId()->push_back(cylCItemRef3); // from diameter hook above
  posCItem->setFeatureItemIds(posCItemFeatIds);
  
  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType * posCItemDevIds = new ArrayReferenceType();
  posCItemDevIds->setId(new QIFReferenceTypeLisd());
  posCItemDevIds->setn(new NaturalType("2"));
  posCItemDevIds->getId()->push_back(cmm1Ref5);
  posCItemDevIds->getId()->push_back(cmm2Ref9);
  posCItem->setMeasurementDeviceIds(posCItemDevIds);

  // add to list
  charItems->getCharacteristicItem()->push_back(posCItem);
  charItems->getn()->setval(1 + charItems->getn()->getval()); // increment n

  // make a position characteristic measurement
  PositionCharacteristicMeasurementType *  posCMeas =
    new PositionCharacteristicMeasurementType();
  posCMeas->setprintElement(strdup("PositionCharacteristicMeasurement"));
  posCMeas->setid(new QIFIdType(idString(qifid++))); // required id 37

  // required reference to item
  QIFReferenceFullType * posCItemRef = new QIFReferenceFullType();
  posCItemRef->setval(posCItem->getid()->getval());
  posCItemRef->setbad(false);
  posCMeas->setCharacteristicItemId(posCItemRef);

  // required status
  CharacteristicStatusType * posCStat = new CharacteristicStatusType();
  CharacteristicStatusTypeVal * posCStatVal =
    new CharacteristicStatusTypeVal();
  posCStatVal->CharacteristicStatusEnum =
    new CharacteristicStatusEnumType("PASS");
  CharacteristicStatusTypeChoicePair * posCStatChoice =
    new CharacteristicStatusTypeChoicePair
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     *posCStatVal);
  posCStat->setCharacteristicStatusTypePair(posCStatChoice);
  posCMeas->setStatus(posCStat);

  // measured value
  MeasuredLinearValueType * posCMeasVal = 
    new MeasuredLinearValueType("0.102");
  posCMeas->setValue(posCMeasVal);

  // point measured tolerance at measured feature
  ArrayReferenceType * posCMeasFeatIds = new ArrayReferenceType();
  posCMeasFeatIds->setId(new QIFReferenceTypeLisd());
  posCMeasFeatIds->setn(new NaturalType("1"));
  posCMeasFeatIds->getId()->push_back(cylCMeasRef2);
  posCMeas->setFeatureMeasurementIds(posCMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType * posCMeasDevIds = new ArrayReferenceType();
  posCMeasDevIds->setId(new QIFReferenceTypeLisd());
  posCMeasDevIds->setn(new NaturalType("1"));
  posCMeasDevIds->getId()->push_back(cmm2Ref10);
  posCMeas->setMeasurementDeviceIds(posCMeasDevIds);
  
  // add to list
  charMeasi->getCharacteristicMeasurement()->push_back(posCMeas);
  charMeasi->getn()->setval(1 + charMeasi->getn()->getval()); // increment n
// endregion datum C cylinder

// region circle back to ABC
  // make a circle feature definition
  CircleFeatureDefinitionType * circDef = new CircleFeatureDefinitionType();
  circDef->setprintElement(strdup("CircleFeatureDefinition"));
  circDef->setid(new QIFIdType(idString(qifid++))); // required id 38

  // feature size
  LinearValueType * diaSize = new LinearValueType("6.35");
  circDef->setDiameter(diaSize);

  // material side
  circDef->setInternalExternal(new InternalExternalEnumType("INTERNAL"));

  // add to list
  featDefs->getFeatureDefinition()->push_back(circDef);
  featDefs->getn()->setval(1 + featDefs->getn()->getval()); // increment n

  // make a circle feature nominal
  CircleFeatureNominalType * circNom = new CircleFeatureNominalType();
  circNom->setprintElement(strdup("CircleFeatureNominal"));
  circNom->setid(new QIFIdType(idString(qifid++))); // required id 39

  // reference to definition
  QIFReferenceType * circDefRef = new QIFReferenceType();
  circDefRef->setval(circDef->getid()->getval());
  circDefRef->setbad(false);
  circNom->setFeatureDefinitionId(circDefRef);

  // circle location
  PointType * circLoc = new PointType();
  circLoc->push_back(new XmlDouble("90.0"));
  circLoc->push_back(new XmlDouble("50.0"));
  circLoc->push_back(new XmlDouble("-1.0"));
  circNom->setLocation(circLoc);

  // circle normal
  UnitVectorType * circNor = new UnitVectorType();
  circNor->push_back(new XmlDouble("0.0"));
  circNor->push_back(new XmlDouble("0.0"));
  circNor->push_back(new XmlDouble("1.0"));
  circNom->setNormal(circNor);

  // add to list
  featNoms->getFeatureNominal()->push_back(circNom);
  featNoms->getn()->setval(1 + featNoms->getn()->getval()); // increment n

  // make a circle feature item
  CircleFeatureItemType * circItem = new CircleFeatureItemType();
  circItem->setprintElement(strdup("CircleFeatureItem"));
  circItem->setid(new QIFIdType(idString(qifid++))); // required id 40

  // reference to definition
  QIFReferenceFullType * circNomRef = new QIFReferenceFullType();
  circNomRef->setval(circNom->getid()->getval());
  circNomRef->setbad(false);
  circItem->setFeatureNominalId(circNomRef);

  // Give circle a name
  circItem->setFeatureName(new XmlToken("CIRC1"));

  // is this circle checked or set?
  CircleCheckedFeatureType * circCheck = new CircleCheckedFeatureType();
  CircleMeasurementDeterminationType * circMeasDet =
    new CircleMeasurementDeterminationType();
  // this feature is checked, rather than set
  CircleMeasurementDeterminationTypeVal * circCheckVal =
    new CircleMeasurementDeterminationTypeVal();
  circCheckVal->Checked = circCheck;
  CircleMeasurementDeterminationTypeChoicePair * circCheckChoice =
    new CircleMeasurementDeterminationTypeChoicePair
    (CircleMeasurementDeterminationTypeChoicePair::CheckedE, *circCheckVal);
  circMeasDet->setCircleMeasurementDeterminationTypePair(circCheckChoice);
  circItem->setDeterminationMode(circMeasDet);

  // add to list
  featItems->getFeatureItem()->push_back(circItem);
  featItems->getn()->setval(1 + featItems->getn()->getval());  // increment n

  // make a circle feature actual
  CircleFeatureMeasurementType * circMeas = new CircleFeatureMeasurementType();
  circMeas->setprintElement(strdup("CircleFeatureMeasurement"));
  circMeas->setid(new QIFIdType(idString(qifid++))); // required id 41

  // reference to item
  QIFReferenceFullType * circItemRef1 = new QIFReferenceFullType();
  circItemRef1->setval(circItem->getid()->getval());
  circItemRef1->setbad(false);
  QIFReferenceFullType * circItemRef2 = new QIFReferenceFullType();
  *circItemRef2 = *circItemRef1;
  QIFReferenceFullType * circItemRef3 = new QIFReferenceFullType();
  *circItemRef3 = *circItemRef1;

  circMeas->setFeatureItemId(circItemRef1);

  // circle location
  MeasuredPointType * circMeasLoc = new MeasuredPointType();
  circMeasLoc->push_back(new XmlDouble("90.015"));
  circMeasLoc->push_back(new XmlDouble("49.973"));
  circMeasLoc->push_back(new XmlDouble("-1.0"));
  circMeas->setLocation(circMeasLoc);

  // circle normal
  MeasuredUnitVectorType * circMeasNor = new MeasuredUnitVectorType();
  circMeasNor->push_back(new XmlDouble("0.0"));
  circMeasNor->push_back(new XmlDouble("0.0"));
  circMeasNor->push_back(new XmlDouble("1.0"));
  circMeas->setNormal(circMeasNor);

  // feature size
  MeasuredLinearValueType * adiaSize = 
    new MeasuredLinearValueType("6.2");
  circMeas->setDiameter(adiaSize);

  // add to list
  featMeasi->getFeatureMeasurement()->push_back(circMeas);
  featMeasi->getn()->setval(1 + featMeasi->getn()->getval()); // increment n

  // make a diameter characteristic definition
  DiameterCharacteristicDefinitionType * diaDef =
    new DiameterCharacteristicDefinitionType();
  diaDef->setprintElement(strdup("DiameterCharacteristicDefinition"));
  diaDef->setid(new QIFIdType(idString(qifid++))); // required id 42

  // tolerance (as opposed to limits and fits, or non-tolerance)
  LinearValueType * highSize = new LinearValueType("6.5");
  LinearValueType * lowSize = new LinearValueType("6.3");
  LinearToleranceType * diaDiaTol = new LinearToleranceType();
  diaDiaTol->setDefinedAsLimit(new XmlBoolean("true"));

  LinearTolerance_1042_Type * minDiaTol = new LinearTolerance_1042_Type();
  minDiaTol->setMinValue(lowSize);
  LinearTolerance_1035_Type * maxMinDiaTol = new LinearTolerance_1035_Type();
  maxMinDiaTol->setMaxValue(highSize);
  maxMinDiaTol->setLinearTolerance_1042(minDiaTol);
  LinearTolerance_1018_TypeVal * diaDiaTolVal =
    new LinearTolerance_1018_TypeVal();
  diaDiaTolVal->LinearTolerance_1035 = maxMinDiaTol; 
  LinearTolerance_1018_TypeChoicePair * diaDiaTolChoice =
    new LinearTolerance_1018_TypeChoicePair
    (LinearTolerance_1018_TypeChoicePair::LinearTolerance_1035E,
     *diaDiaTolVal);
  LinearTolerance_1018_Type * diaDiaTol1018 = new LinearTolerance_1018_Type();
  diaDiaTol1018->setLinearTolerance_1018_TypePair(diaDiaTolChoice);
  diaDiaTol->setLinearTolerance_1018(diaDiaTol1018);
  DiameterCharact_1055_TypeVal * diaDiaTolSelVal =
    new DiameterCharact_1055_TypeVal();
  diaDiaTolSelVal->Tolerance = diaDiaTol;
  DiameterCharact_1055_TypeChoicePair * diaDiaTolSelChoice =
    new DiameterCharact_1055_TypeChoicePair
    (DiameterCharact_1055_TypeChoicePair::ToleranceE,
     *diaDiaTolSelVal);
  DiameterCharact_1055_Type * diaDiaTolSel = new DiameterCharact_1055_Type();
  diaDiaTolSel->setDiameterCharact_1055_TypePair(diaDiaTolSelChoice);
  diaDef->setDiameterCharact_1055(diaDiaTolSel);

  // add to list
  charDefs->getCharacteristicDefinition()->push_back(diaDef);
  charDefs->getn()->setval(1 + charDefs->getn()->getval());  // increment n

  // make a diameter characteristic nominal
  DiameterCharacteristicNominalType * diaNom =
    new DiameterCharacteristicNominalType();
  diaNom->setprintElement(strdup("DiameterCharacteristicNominal"));
  diaNom->setid(new QIFIdType(idString(qifid++))); // required id 43

  // required reference to definition
  QIFReferenceType * diaDefRef = new QIFReferenceType();
  diaDefRef->setval(diaDef->getid()->getval());
  diaDefRef->setbad(false);
  diaNom->setCharacteristicDefinitionId(diaDefRef);

  // nominal value
  //diaNom->TargetValue = diaSize;

  // add to list
  charNoms->getCharacteristicNominal()->push_back(diaNom);
  charNoms->getn()->setval(1 + charNoms->getn()->getval()); // increment n

  // make a diameter characteristic item
  DiameterCharacteristicItemType * diaItem =
    new DiameterCharacteristicItemType();
  diaItem->setprintElement(strdup("DiameterCharacteristicItem"));
  diaItem->setid(new QIFIdType(idString(qifid++))); // required id 44

  // required reference to nominal
  QIFReferenceFullType * diaNomRef = new QIFReferenceFullType();
  diaNomRef->setval(diaNom->getid()->getval());
  diaNomRef->setbad(false);
  diaItem->setCharacteristicNominalId(diaNomRef);
  
  // give tolerance a name
  diaItem->setName(new XmlToken("DIAM2"));

  // point tolerance at feature
  ArrayReferenceType * diaItemFeatIds = new ArrayReferenceType();
  diaItemFeatIds->setId(new QIFReferenceTypeLisd());
  diaItemFeatIds->setn(new NaturalType("1"));
  diaItemFeatIds->getId()->push_back(circItemRef2);
  diaItem->setFeatureItemIds(diaItemFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType * diaItemDevIds = new ArrayReferenceType();
  diaItemDevIds->setId(new QIFReferenceTypeLisd());
  diaItemDevIds->setn(new NaturalType("2"));
  diaItemDevIds->getId()->push_back(cmm1Ref6);
  diaItemDevIds->getId()->push_back(cmm2Ref11);
  diaItem->setMeasurementDeviceIds(diaItemDevIds);
  
  // add to list
  charItems->getCharacteristicItem()->push_back(diaItem);
  charItems->getn()->setval(1 + charItems->getn()->getval()); // increment n

  // make a diameter characteristic measurement
  DiameterCharacteristicMeasurementType * diaMeas =
    new DiameterCharacteristicMeasurementType();
  diaMeas->setprintElement(strdup("DiameterCharacteristicMeasurement"));
  diaMeas->setid(new QIFIdType(idString(qifid++))); // required id 45

  // required reference to item
  QIFReferenceFullType * diaItemRef = new QIFReferenceFullType();
  diaItemRef->setval(diaItem->getid()->getval());
  diaItemRef->setbad(false);
  diaMeas->setCharacteristicItemId(diaItemRef);

  // required status
  CharacteristicStatusType * diaStat = new CharacteristicStatusType();
  CharacteristicStatusTypeVal * diaStatVal =
    new CharacteristicStatusTypeVal();
  diaStatVal->CharacteristicStatusEnum =
    new CharacteristicStatusEnumType("FAIL");
  CharacteristicStatusTypeChoicePair * diaStatChoice =
    new CharacteristicStatusTypeChoicePair
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     *diaStatVal);
  diaStat->setCharacteristicStatusTypePair(diaStatChoice);
  diaMeas->setStatus(diaStat);

  // measurement value
  MeasuredLinearValueType * diaMeasVal =
    new MeasuredLinearValueType("6.2");
  diaMeas->setValue(diaMeasVal);

  // point tolerance measurement at feature measurement
  QIFReferenceFullType * circMeasRef1 = new QIFReferenceFullType();
  circMeasRef1->setval(circMeas->getid()->getval());
  circMeasRef1->setbad(false);
  QIFReferenceFullType * circMeasRef2 = new QIFReferenceFullType();
  *circMeasRef2 = *circMeasRef1;

  ArrayReferenceType * diaMeasFeatIds = new ArrayReferenceType();
  diaMeasFeatIds->setId(new QIFReferenceTypeLisd());
  diaMeasFeatIds->setn(new NaturalType("1"));
  diaMeasFeatIds->getId()->push_back(circMeasRef1);
  diaMeas->setFeatureMeasurementIds(diaMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType * diaMeasDevIds = new ArrayReferenceType();
  diaMeasDevIds->setId(new QIFReferenceTypeLisd());
  diaMeasDevIds->setn(new NaturalType("1"));
  diaMeasDevIds->getId()->push_back(cmm2Ref12);
  diaMeas->setMeasurementDeviceIds(diaMeasDevIds);

  // add to list
  charMeasi->getCharacteristicMeasurement()->push_back(diaMeas);
  charMeasi->getn()->setval(1 + charMeasi->getn()->getval()); // increment n

  // make a position characteristic definition
  PositionCharacteristicDefinitionType * posDef =
    new PositionCharacteristicDefinitionType();
  posDef->setprintElement(strdup("PositionCharacteristicDefinition"));
  posDef->setid(new QIFIdType(idString(qifid++))); // required id 46

  // define the tolerance zone shape (diametrical)
  PositionZoneShapeType * zoneShape = new PositionZoneShapeType();
  PositionZoneShapeTypeVal * zoneShapeVal =
    new PositionZoneShapeTypeVal();
  zoneShapeVal->DiametricalZone = new PositionDiametricalZoneType();
  PositionZoneShapeTypeChoicePair * zoneShapeChoice =
    new PositionZoneShapeTypeChoicePair
    (PositionZoneShapeTypeChoicePair::DiametricalZoneE, *zoneShapeVal);
  zoneShape->setPositionZoneShapeTypePair(zoneShapeChoice);
  posDef->setZoneShape(zoneShape);

  // define the tolerance zone
  LinearValueType * tolZone = new LinearValueType("0.75");
  posDef->setToleranceValue(tolZone);
  
  // apply MMC material condition
  posDef->setMaterialCondition(new MaterialModifierEnumType("MAXIMUM"));

  // reference our DRF
  QIFReferenceFullType * drfDefRef = new QIFReferenceFullType();
  drfDefRef->setval(drfABC->getid()->getval());
  drfDefRef->setbad(false);
  posDef->setDatumReferenceFrameId(drfDefRef);

  // add to list
  charDefs->getCharacteristicDefinition()->push_back(posDef);
  charDefs->getn()->setval(1 + charDefs->getn()->getval()); // increment n 

  // make a position characteristic nominal
  PositionCharacteristicNominalType * posNom  =
    new PositionCharacteristicNominalType();
  posNom->setprintElement(strdup("PositionCharacteristicNominal"));
  posNom->setid(new QIFIdType(idString(qifid++))); // required id 47

  // required reference to definition
  QIFReferenceType * posDefRef =  new QIFReferenceType();
  posDefRef->setval(posDef->getid()->getval());
  posDefRef->setbad(false);
  posNom->setCharacteristicDefinitionId(posDefRef);

  // add to list
  charNoms->getCharacteristicNominal()->push_back(posNom);
  charNoms->getn()->setval(1 + charNoms->getn()->getval()); // increment n

  // make a position characteristic item
  PositionCharacteristicItemType * posItem =
    new PositionCharacteristicItemType();
  posItem->setprintElement(strdup("PositionCharacteristicItem"));
  posItem->setid(new QIFIdType(idString(qifid++))); // required id 48

  // required reference to nominal
  QIFReferenceFullType * posNomRef = new QIFReferenceFullType();
  posNomRef->setval(posNom->getid()->getval());
  posNomRef->setbad(false);
  posItem->setCharacteristicNominalId(posNomRef);

  // give tolerance a name
  posItem->setName(new XmlToken("POSN2"));

  // point tolerance at feature
  ArrayReferenceType * posItemFeatIds = new ArrayReferenceType();
  posItemFeatIds->setId(new QIFReferenceTypeLisd());
  posItemFeatIds->setn(new NaturalType("1"));
  posItemFeatIds->getId()->push_back(circItemRef3); // from diameter
  posItem->setFeatureItemIds(posItemFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType * posItemDevIds = new ArrayReferenceType();
  posItemDevIds->setId(new QIFReferenceTypeLisd());
  posItemDevIds->setn(new NaturalType("2"));
  posItemDevIds->getId()->push_back(cmm1Ref7);
  posItemDevIds->getId()->push_back(cmm2Ref13);
  posItem->setMeasurementDeviceIds(posItemDevIds);
  
  // add to list
  charItems->getCharacteristicItem()->push_back(posItem);
  charItems->getn()->setval(1 + charItems->getn()->getval()); // increment n

  // make a position characteristic measurement
  PositionCharacteristicMeasurementType * posMeas =
    new PositionCharacteristicMeasurementType();
  posMeas->setprintElement(strdup("PositionCharacteristicMeasurement"));
  posMeas->setid(new QIFIdType(idString(qifid++))); // required id 49

  // required reference to item
  QIFReferenceFullType * posItemRef = new QIFReferenceFullType();
  posItemRef->setval(posItem->getid()->getval());
  posItemRef->setbad(false);
  posMeas->setCharacteristicItemId(posItemRef);

  // required status
  CharacteristicStatusType * posStat = new CharacteristicStatusType();
  CharacteristicStatusTypeVal * posStatVal =
    new CharacteristicStatusTypeVal();
  posStatVal->CharacteristicStatusEnum =
    new CharacteristicStatusEnumType("PASS");
  CharacteristicStatusTypeChoicePair * posStatChoice =
    new CharacteristicStatusTypeChoicePair
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     *posStatVal);
  posStat->setCharacteristicStatusTypePair(posStatChoice);
  posMeas->setStatus(posStat);

  // measured value
  MeasuredLinearValueType * posMeasVal =
    new MeasuredLinearValueType("0.0618");
  posMeas->setValue(posMeasVal);

  // point measurement tolerance at measurement feature
  ArrayReferenceType * posMeasFeatIds = new ArrayReferenceType();
  posMeasFeatIds->setId(new QIFReferenceTypeLisd());
  posMeasFeatIds->setn(new NaturalType("1"));
  posMeasFeatIds->getId()->push_back(circMeasRef2);
  posMeas->setFeatureMeasurementIds(posMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType * posMeasDevIds  = new ArrayReferenceType();
  posMeasDevIds->setId(new QIFReferenceTypeLisd());
  posMeasDevIds->setn(new NaturalType("1"));
  posMeasDevIds->getId()->push_back(cmm2Ref14);
  posMeas->setMeasurementDeviceIds(posMeasDevIds);

  // add to list
  charMeasi->getCharacteristicMeasurement()->push_back(posMeas);
  charMeasi->getn()->setval(1 + charMeasi->getn()->getval()); // increment n
// endregion circle back to ABC

// region QIF document
  // add some application identifying information
  ApplicationType * app = new ApplicationType();
  app->setName(new XmlString("QIF_CPlusPlus open source QIF application"));
  app->setOrganization
    (new XmlString("Digital Metrology Standards Consortium (DMSC)"));
  QIFDocumentHeaderType * header = new QIFDocumentHeaderType();
  header->setApplication(app);
  qifdoc->setHeader(header);

  // QIF units are SI units unless otherwise specified
  LinearUnitType * linearUnit = new LinearUnitType();
  linearUnit->setSIUnitName(new XmlToken("meter"));
  linearUnit->setUnitName(new XmlToken("mm"));
  UnitConversionType * unitConversion = new UnitConversionType();
  unitConversion->setFactor(new PositiveDecimalType("0.001"));
  linearUnit->setUnitConversion(unitConversion);
  PrimaryUnitsType * primaryUnits = new PrimaryUnitsType();
  primaryUnits->setLinearUnit(linearUnit);
  FileUnitsType * fileUnits = new FileUnitsType();
  fileUnits->setPrimaryUnits(primaryUnits);
  qifdoc->setFileUnits(fileUnits);

  // add our measurement devices
  MeasurementResourcesType * measResources = new MeasurementResourcesType();
  measResources->setMeasurementDevices(measDevices);
  qifdoc->setMeasurementResources(measResources);

  // add the datum definitions list
  qifdoc->setDatumDefinitions(datumDefs);

  // add the datum reference frame list
  qifdoc->setDatumReferenceFrames(drfDefs);
  qifdoc->setversionQIF(new XmlNMTOKEN("3.0.0"));

  // Create the features aspects element
  FeatureAspectsListsType * featAspects = new FeatureAspectsListsType();
  
  // Feature Definitions
  featAspects->setFeatureDefinitions(featDefs);

  // Feature Nominals
  featAspects->setFeatureNominals(featNoms);

  // Feature Items
  featAspects->setFeatureItems(featItems);

  // add feature aspects to document
  qifdoc->setFeatures(featAspects);

  // Create the characteristics aspects element
  CharacteristicAspectsListsType * charAspects =
    new CharacteristicAspectsListsType();

  // required GD&T standard
  // standards organization
  StandardsOrganizationType * organization = new StandardsOrganizationType();
  StandardsOrganizationTypeVal * organizationVal =
    new StandardsOrganizationTypeVal();
  organizationVal->StandardsOrganizationEnum =
    new StandardsOrganizationEnumType("ASME");
  StandardsOrganizationTypeChoicePair * organizationChoice =
    new StandardsOrganizationTypeChoicePair
    (StandardsOrganizationTypeChoicePair::StandardsOrganizationEnumE,
     *organizationVal);
  organization->setStandardsOrganizationTypePair(organizationChoice);

  // standard
  StandardType * formalStandard = new StandardType();
  formalStandard->setOrganization(organization);
  formalStandard->setDesignator(new XmlToken("Y14.5"));
  formalStandard->setYear(new XmlString("2009"));
  formalStandard->setid(new QIFIdType(idString(qifid++))); // required id 50

  // add standards to document
  StandardsType * standards = new StandardsType();
  standards->setn(new NaturalType("1"));
  standards->setStandard(new StandardTypeLisd());
  standards->getStandard()->push_back(formalStandard);
  qifdoc->setStandardsDefinitions(standards);

  // point characteristics at standard
  QIFReferenceType * standardRef = new QIFReferenceType();
  standardRef->setval(formalStandard->getid()->getval());
  standardRef->setbad(false);
  charAspects->setFormalStandardId(standardRef);

  // Characteristic Definitions
  charAspects->setCharacteristicDefinitions(charDefs);

  // Characteristic Nominals
  charAspects->setCharacteristicNominals(charNoms);

  // Characteristic Items
  charAspects->setCharacteristicItems(charItems);

  // add characteristic aspects to document
  qifdoc->setCharacteristics(charAspects);
  
  // create the measurement results
  MeasurementResultsType * measResults = new MeasurementResultsType();
  measResults->setid(new QIFIdType(idString(qifid++)));  // required id 51

  // overall inspection status
  InspectionStatusType * overallStat = new InspectionStatusType();
  InspectionStatusTypeVal * overallStatVal = 
    new InspectionStatusTypeVal();
  overallStatVal->InspectionStatusEnum =
    new InspectionStatusEnumType("FAIL");
  InspectionStatusTypeChoicePair * overallStatChoice =
    new InspectionStatusTypeChoicePair
    (InspectionStatusTypeChoicePair::InspectionStatusEnumE, *overallStatVal);
  overallStat->setInspectionStatusTypePair(overallStatChoice);
  measResults->setInspectionStatus(overallStat);

  // measured features
  measResults->setMeasuredFeatures(featMeasi);

  // measured characteristics
  MeasuredCharacteristicsType * measuredCharacteristics =
    new MeasuredCharacteristicsType();
  measuredCharacteristics->setCharacteristicMeasurements(charMeasi);
  measResults->setMeasuredCharacteristics(measuredCharacteristics);
  
  // add measured results to list of measured results
  MeasurementResultsSetType * measurementResultsSet =
    new MeasurementResultsSetType();
  measurementResultsSet->setMeasurementResults
    (new MeasurementResultsTypeLisd());
  measurementResultsSet->getMeasurementResults()->push_back(measResults);
  measurementResultsSet->setn(new NaturalType("1"));
  ResultsType * measurementsResults = new ResultsType();
  measurementsResults->setMeasurementResultsSet(measurementResultsSet);
  // add measured results to document
  qifdoc->setResults(measurementsResults);


  // add a (trivial) plan
  MeasureEvaluateAllActionType * measAll = new MeasureEvaluateAllActionType();
  measAll->setprintElement(strdup("MeasureEvaluateAll"));
  UnnumberedPlanElementsType * steps = new UnnumberedPlanElementsType();
  steps->setPlanElement(new PlanElementBaseTypeLisd());
  steps->getPlanElement()->push_back(measAll);
  steps->setn(new NaturalType("1"));
  UnorderedActionGroupType * planRoot = new UnorderedActionGroupType();
  planRoot->setSteps(steps);
  planRoot->setprintElement(strdup("UnorderedPlanRoot"));
  PlanType * measurementPlan = new PlanType();
  measurementPlan->setPlanRoot(planRoot);
  qifdoc->setPlan(measurementPlan);

  // set idMax
  qifdoc->setidMax(new XmlUnsignedInt(idString(qifid - 1)));

  // make a new QIFDocumentFile
  QIFDocumentFile * qifdocFile = new QIFDocumentFile();
  XmlVersion * xmlVersion = new XmlVersion("utf-8", "");
  XmlHeaderForQIFDocument * qifdocHeader = new XmlHeaderForQIFDocument();
  qifdocHeader->setXmlnsNoPrefix
    (new XmlString("http://qifstandards.org/xsd/qif3"));
  // the xmlns:xsi line is printed by the schemaLocation printer
  qifdocHeader->setlocation
    (new SchemaLocation("xsi", "http://qifstandards.org/xsd/qif3"
			" ../schema/QIFDocument.xsd", true));
  qifdocFile->setversion(xmlVersion);
  qifdocFile->setheader(qifdocHeader);
  qifdocFile->setQIFDocument(qifdoc);

  FILE * outFile;
  outFile = fopen("testCpp30.qif", "w");
  qifdocFile->printSelf(outFile);
  fclose(outFile);

  delete qifdocFile;
}
