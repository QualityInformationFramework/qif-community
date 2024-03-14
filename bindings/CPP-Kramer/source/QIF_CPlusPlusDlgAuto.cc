#include "QIFDocumentClasses.hh"
#include "xmlSchemaInstance.hh"
#include <stdio.h> 
#include <string.h>
#include <stdlib.h> 

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
  MeasurementDevicesType measDevices;
  NaturalType measDevicesN("1");
  measDevices.setn(&measDevicesN);
  MeasurementDeviceTypeLisd measDevicesList;
  measDevices.setMeasurementDevice(&measDevicesList);
  DatumDefinitionsType datumDefs;
  NaturalType datumDefsN("1");
  datumDefs.setn(&datumDefsN);
  DatumDefinitionTypeLisd datumDefsList;
  datumDefs.setDatumDefinition(&datumDefsList);
  DatumReferenceFramesType drfDefs;
  NaturalType drfDefsN("1");
  drfDefs.setn(&drfDefsN);
  DatumReferenceFrameTypeLisd drfDefsList;
  drfDefs.setDatumReferenceFrame(&drfDefsList);
  FeatureDefinitionsType featDefs;
  NaturalType featDefsN("1");
  featDefs.setn(&featDefsN);
  FeatureDefinitionBaseTypeLisd featDefsList;
  featDefs.setFeatureDefinition(&featDefsList);
  FeatureNominalsType featNoms;
  NaturalType featNomsN("1");
  featNoms.setn(&featNomsN);
  FeatureNominalBaseTypeLisd featNomsList;
  featNoms.setFeatureNominal(&featNomsList);
  FeatureItemsType featItems;
  NaturalType featItemsN("1");
  featItems.setn(&featItemsN);
  FeatureItemBaseTypeLisd featItemsList;
  featItems.setFeatureItem(&featItemsList);
  FeatureMeasurementsType featMeasi;
  NaturalType featMeasiN("1");
  featMeasi.setn(&featMeasiN);
  FeatureMeasurementBaseTypeLisd featMeasiList;
  featMeasi.setFeatureMeasurement(&featMeasiList);
  CharacteristicDefinitionsType charDefs;
  NaturalType charDefsN("1");
  charDefs.setn(&charDefsN);
  CharacteristicDefinitionBaseTypeLisd charDefsList;
  charDefs.setCharacteristicDefinition(&charDefsList);
  CharacteristicNominalsType charNoms;
  NaturalType charNomsN("1");
  charNoms.setn(&charNomsN);
  CharacteristicNominalBaseTypeLisd charNomsList;
  charNoms.setCharacteristicNominal(&charNomsList);
  CharacteristicItemsType charItems;
  NaturalType charItemsN("1");
  charItems.setn(&charItemsN);
  CharacteristicItemBaseTypeLisd charItemsList;
  charItems.setCharacteristicItem(&charItemsList);
  CharacteristicMeasurementsType charMeasi;
  NaturalType charMeasiN("1");
  charMeasi.setn(&charMeasiN);
  CharacteristicMeasurementBaseTypeLisd charMeasiList;
  charMeasi.setCharacteristicMeasurement(&charMeasiList);
// endregion lists

// region Datum definitions
  // define ABC datums
  // define datums ABC as simple datum letters,
  // we'll create hooks to datum features later
  DatumDefinitionType datA;
  QIFIdType datAid(idString(qifid++)); // required id 1
  datA.setid(&datAid);
  XmlNMTOKEN datALabel("A");
  datA.setDatumLabel(&datALabel);
  datumDefsList.push_back(&datA); // datumDefsN is already 1
  DatumDefinitionType datB;
  QIFIdType datBid(idString(qifid++)); // required id 2
  datB.setid(&datBid);
  XmlNMTOKEN datBLabel("B");
  datB.setDatumLabel(&datBLabel);
  datumDefsList.push_back(&datB);
  datumDefsN.setval(1 + datumDefsN.getval()); // set n counter 
  DatumDefinitionType datC;
  QIFIdType datCid(idString(qifid++)); // required id 3
  datC.setid(&datCid);
  XmlNMTOKEN datCLabel("C");
  datC.setDatumLabel(&datCLabel);
  datumDefsList.push_back(&datC);
  datumDefsN.setval(1 + datumDefsN.getval()); // set n counter 
// endregion Datum definitions

// region Datum reference frames
  // define A, AB, and ABC datum reference frames

// region Datum reference frames
  // make datum reference frame A
  DatumReferenceFrameType drfA;
  QIFIdType drfAid(idString(qifid++)); // required id 4
  drfA.setid(&drfAid);
  // datums list
  DatumsType drfAdats;
  NaturalType drfAdatsN("1");
  drfAdats.setn(&drfAdatsN);

  // A is simple datum with no material condition modifier
  DatumType dtA_A;
  // reference id of A
  QIFReferenceFullType datA_Aref;
  datA_Aref.setval(datAid.getval());
  datA_Aref.setbad(false);
  dtA_A.setDatumDefinitionId(&datA_Aref);
  // no matieral modifier
  MaterialModifierEnumType dtA_AMat("NONE");
  dtA_A.setMaterialModifier(&dtA_AMat);
  // use the actual datum feature
  ReferencedComponentEnumType dtA_Acomp("ACTUAL");
  dtA_A.setReferencedComponent(&dtA_Acomp);

  // add datum A to DRF as primary datum
  DatumWithPrecedenceType dwpA_A;
  DatumWithPreced_1010_TypeVal dwpA_Aval;
  dwpA_Aval.SimpleDatum = &dtA_A;
  DatumWithPreced_1010_TypeChoicePair DwpA_Achoice
    (DatumWithPreced_1010_TypeChoicePair::SimpleDatumE, dwpA_Aval);

  PrecedenceType prcA_A;
  PrecedenceTypeVal prcA_Aval;
  PrecedenceEnumType prcA_APrec("PRIMARY");
  prcA_Aval.PrecedenceEnum = &prcA_APrec;
  PrecedenceTypeChoicePair prcA_AChoicePair
    (PrecedenceTypeChoicePair::PrecedenceEnumE, prcA_Aval);
  prcA_A.setPrecedenceTypePair(&prcA_AChoicePair);
  dwpA_A.setPrecedence(&prcA_A);
  DatumWithPreced_1010_Type dwpA_ADatWithPrec(&DwpA_Achoice);
  dwpA_A.setDatumWithPreced_1010(&dwpA_ADatWithPrec);
  // add simple primary datum A to the datums list
  DatumWithPrecedenceTypeLisd drfAdatsList;
  drfAdats.setDatum(&drfAdatsList);
  drfAdatsList.push_back(&dwpA_A);
  // drfAdatsNdrfAdatsN.setval(1 + drfAdatsN.getval());
  //  is already set to 1
  // add our datums list to the DRF
  drfA.setDatums(&drfAdats);
  // add our DRF to the DRF list
  drfDefsList.push_back(&drfA);
  // drfDefsN.setval(1 + drfDefsN.getval());
  // drfDefsN is already set to 1
// endregion A

// region A|B
  // make a datum reference frame A|B(m)
  DatumReferenceFrameType drfAB;
  QIFIdType drfABid (idString(qifid++)); // required id 5
  drfAB.setid(&drfABid);
  // datums list
  DatumsType drfABdats;
  NaturalType drfABdatsN("1");
  drfABdats.setn(&drfABdatsN);

  // A is simple datum with no material condition modifier
  DatumType dtA_AB;
  // reference id of A
  QIFReferenceFullType datA_ABref;
  datA_ABref.setval(datAid.getval());
  datA_ABref.setbad(false);
  dtA_AB.setDatumDefinitionId(&datA_ABref);
  // no matieral modifier
  MaterialModifierEnumType dtA_ABMat("NONE");
  dtA_AB.setMaterialModifier(& dtA_ABMat);
  // use the actual datum feature
  ReferencedComponentEnumType dtA_ABcomp("ACTUAL");
  dtA_AB.setReferencedComponent(&dtA_ABcomp);

  // add datum A to DRF as primary datum
  DatumWithPrecedenceType dwpA_AB;
  DatumWithPreced_1010_TypeVal dwpA_ABval;
  dwpA_ABval.SimpleDatum = &dtA_AB;
  DatumWithPreced_1010_TypeChoicePair DwpA_ABchoice
    (DatumWithPreced_1010_TypeChoicePair::SimpleDatumE, dwpA_ABval);

  PrecedenceType prcA_AB;
  PrecedenceTypeVal prcA_ABval;
  PrecedenceEnumType prcA_ABPrec("PRIMARY");
  prcA_ABval.PrecedenceEnum = &prcA_ABPrec;
  PrecedenceTypeChoicePair prcA_ABChoicePair
    (PrecedenceTypeChoicePair::PrecedenceEnumE, prcA_ABval);
  prcA_AB.setPrecedenceTypePair(&prcA_ABChoicePair);
  dwpA_AB.setPrecedence(&prcA_AB);
  DatumWithPreced_1010_Type dwpA_ABDatWithPrec(&DwpA_ABchoice);
  dwpA_AB.setDatumWithPreced_1010(&dwpA_ABDatWithPrec);
  // add simple primary datum A to the datums list
  DatumWithPrecedenceTypeLisd drfABdatsList;
  drfABdats.setDatum(&drfABdatsList);
  drfABdatsList.push_back(&dwpA_AB);
  // drfABdatsN.setval(1 + drfABdatsN.getval());
  // drfABdatsN is already set to 1

  // B is simple datum with MMC material condition modifier
  DatumType dtB_AB;
  // reference id of B
  QIFReferenceFullType datB_ABref;
  datB_ABref.setval(datBid.getval());
  datB_ABref.setbad(false);
  dtB_AB.setDatumDefinitionId(&datB_ABref);
  // MMC matieral modifier
  MaterialModifierEnumType dtB_ABMat("MAXIMUM");
  dtB_AB.setMaterialModifier(&dtB_ABMat);
  // use the actual datum feature
  ReferencedComponentEnumType dtB_ABcomp("ACTUAL");
  dtB_AB.setReferencedComponent(&dtB_ABcomp);
  // add datum B to DRF as secondary datum
  DatumWithPrecedenceType dwpB_AB;
  DatumWithPreced_1010_TypeVal dwpB_ABval;
  dwpB_ABval.SimpleDatum = &dtB_AB;
  DatumWithPreced_1010_TypeChoicePair DwpB_ABchoice
    (DatumWithPreced_1010_TypeChoicePair::SimpleDatumE, dwpB_ABval);

  PrecedenceType prcB_AB;
  PrecedenceTypeVal prcB_ABval;
  PrecedenceEnumType prcB_ABPrec("SECONDARY");
  prcB_ABval.PrecedenceEnum = &prcB_ABPrec;
  PrecedenceTypeChoicePair prcB_ABChoicePair
    (PrecedenceTypeChoicePair::PrecedenceEnumE, prcB_ABval);
  prcB_AB.setPrecedenceTypePair(&prcB_ABChoicePair);

  dwpB_AB.setPrecedence(&prcB_AB);
  DatumWithPreced_1010_Type dwpB_ABDatWithPrec(&DwpB_ABchoice);
  dwpB_AB.setDatumWithPreced_1010(&dwpB_ABDatWithPrec);
  // add simple primary datum B to the datums list
  drfABdatsList.push_back(&dwpB_AB);
  drfABdatsN.setval(1 + drfABdatsN.getval()); // increment n

  // add our datums list to the DRF
  drfAB.setDatums(&drfABdats);
  // add our DRF to the DRF list
  drfDefsList.push_back(&drfAB);
  drfDefsN.setval(1 + drfDefsN.getval()); // increment n
// endregion A|B

// region A|B|C
  // make a datum reference frame A|B(m)|C(m)
  DatumReferenceFrameType drfABC;
  QIFIdType drfABCid(idString(qifid++));
  drfABC.setid(&drfABCid); // required id 6
  // datums list
  DatumsType drfABCdats;
  NaturalType drfABCdatsN("1");
  drfABCdats.setn(&drfABCdatsN);

  // A is simple datum with no material condition modifier
  DatumType dtA_ABC;
  // reference id of A
  QIFReferenceFullType datA_ABCref;
  datA_ABCref.setval(datAid.getval());
  datA_ABCref.setbad(false);
  dtA_ABC.setDatumDefinitionId(&datA_ABCref);
  // no matieral modifier
  MaterialModifierEnumType dtA_ABCMat("NONE");
  dtA_ABC.setMaterialModifier(&dtA_ABCMat);
  // use the actual datum feature
  ReferencedComponentEnumType dtA_ABCcomp("ACTUAL");
  dtA_ABC.setReferencedComponent(&dtA_ABCcomp);

  // add datum A to DRF as primary datum
  DatumWithPrecedenceType dwpA_ABC;
  DatumWithPreced_1010_TypeVal dwpA_ABCval;
  dwpA_ABCval.SimpleDatum = &dtA_ABC;
  DatumWithPreced_1010_TypeChoicePair DwpA_ABCchoice
    (DatumWithPreced_1010_TypeChoicePair::SimpleDatumE, dwpA_ABCval);

  PrecedenceType prcA_ABC;
  PrecedenceTypeVal prcA_ABCval;
  PrecedenceEnumType prcA_ABCPrec("PRIMARY");
  prcA_ABCval.PrecedenceEnum = &prcA_ABCPrec;
  PrecedenceTypeChoicePair prcA_ABCChoicePair
    (PrecedenceTypeChoicePair::PrecedenceEnumE, prcA_ABCval);
  prcA_ABC.setPrecedenceTypePair(&prcA_ABCChoicePair);
  dwpA_ABC.setPrecedence(&prcA_ABC);
  DatumWithPreced_1010_Type prcA_ABCDatWithPrec(&DwpA_ABCchoice);
  dwpA_ABC.setDatumWithPreced_1010(&prcA_ABCDatWithPrec);
  // add simple primary datum A to the datums list
  DatumWithPrecedenceTypeLisd drfABCdatsList;
  drfABCdats.setDatum(&drfABCdatsList);
  drfABCdatsList.push_back(&dwpA_ABC);
  // drfABCdatsN.setval(1 + drfABCdatsN.getval());
  // drfABCdatsN is already set to 1

  // B is simple datum with MMC material condition modifier
  DatumType dtB_ABC;
  // reference id of B
  QIFReferenceFullType datB_ABCref;
  datB_ABCref.setval(datBid.getval());
  datB_ABCref.setbad(false);
  dtB_ABC.setDatumDefinitionId(&datB_ABCref);
  // MMC matieral modifier
  MaterialModifierEnumType  dtB_ABCMat("MAXIMUM");
  dtB_ABC.setMaterialModifier(&dtB_ABCMat);
  // use the actual datum feature
  ReferencedComponentEnumType dtB_ABCcomp("ACTUAL");
  dtB_ABC.setReferencedComponent(&dtB_ABCcomp);
  // add datum B to DRF as secondary datum
  DatumWithPrecedenceType dwpB_ABC;
  DatumWithPreced_1010_TypeVal dwpB_ABCval;
  dwpB_ABCval.SimpleDatum = &dtB_ABC;
  DatumWithPreced_1010_TypeChoicePair DwpB_ABCchoice
    (DatumWithPreced_1010_TypeChoicePair::SimpleDatumE, dwpB_ABCval);

  PrecedenceType prcB_ABC;
  PrecedenceTypeVal prcB_ABCval;
  PrecedenceEnumType prcB_ABCprec("SECONDARY");
  prcB_ABCval.PrecedenceEnum = &prcB_ABCprec;
  PrecedenceTypeChoicePair prcB_ABCChoicePair
    (PrecedenceTypeChoicePair::PrecedenceEnumE, prcB_ABCval);
  prcB_ABC.setPrecedenceTypePair(&prcB_ABCChoicePair);
  dwpB_ABC.setPrecedence(&prcB_ABC);
  DatumWithPreced_1010_Type prcB_ABCDatumWithPrec(&DwpB_ABCchoice);
  dwpB_ABC.setDatumWithPreced_1010(&prcB_ABCDatumWithPrec);
  // add simple primary datum B to the datums list
  drfABCdatsList.push_back(&dwpB_ABC);
  drfABCdatsN.setval(1 + drfABCdatsN.getval()); // increment n

  // C is simple datum with MMC material condition modifier
  DatumType dtC_ABC;
  // reference id of C
  QIFReferenceFullType datC_ABCref;
  datC_ABCref.setval(datCid.getval());
  datC_ABCref.setbad(false);
  dtC_ABC.setDatumDefinitionId(&datC_ABCref);
  // MMC matieral modifier
  MaterialModifierEnumType dtC_ABCMat("MAXIMUM");
  dtC_ABC.setMaterialModifier(&dtC_ABCMat);
  // use the actual datum feature
  ReferencedComponentEnumType dtC_ABCcomp("ACTUAL");
  dtC_ABC.setReferencedComponent(&dtC_ABCcomp);
  // add datum C to DRF as tertiary datum
  DatumWithPrecedenceType dwpC_ABC;
  DatumWithPreced_1010_TypeVal dwpC_ABCval;
  dwpC_ABCval.SimpleDatum = &dtC_ABC;
  DatumWithPreced_1010_TypeChoicePair DwpC_ABCchoice
    (DatumWithPreced_1010_TypeChoicePair::SimpleDatumE, dwpC_ABCval);

  PrecedenceType prcC_ABC;
  PrecedenceTypeVal prcC_ABCval;
  PrecedenceEnumType prcC_ABCprec("TERTIARY");
  prcC_ABCval.PrecedenceEnum = &prcC_ABCprec;
  PrecedenceTypeChoicePair prcC_ABCChoicePair
    (PrecedenceTypeChoicePair::PrecedenceEnumE, prcC_ABCval);
  prcC_ABC.setPrecedenceTypePair(&prcC_ABCChoicePair);
  dwpC_ABC.setPrecedence(&prcC_ABC);
  DatumWithPreced_1010_Type prcC_ABCDatumWithPrec(&DwpC_ABCchoice);
  dwpC_ABC.setDatumWithPreced_1010(&prcC_ABCDatumWithPrec);
  // add simple primary datum C to the datums list
  drfABCdatsList.push_back(&dwpC_ABC);
  drfABCdatsN.setval(1 + drfABCdatsN.getval()); // increment n

  // add our datums list to the DRF
  drfABC.setDatums(&drfABCdats);
  // add our DRF to the DRF list
  drfDefsList.push_back(&drfABC);
  drfDefsN.setval(1 + drfDefsN.getval()); // increment n
// endregion A|B|C

// endregion Datum reference frames

// region Measurement devices
  // define 2 CMM measurement devices and assign them ids
  MeasurementDeviceType cmm1;
  XmlToken cmm1Name("CMM1");
  cmm1.setName(&cmm1Name);
  cmm1.setprintElement(strdup("MeasurementDevice"));
  QIFIdType cmm1id(idString(qifid++)); // required id 7
  cmm1.setid(&cmm1id);
  // add this device to our list
  measDevicesList.push_back(&cmm1);
  // measDevicesN.setval(1 + measDevicesN.getval());
  // measDevicesN is already set to 1
  // this device will be referenced by its id
  QIFReferenceFullType cmm1Ref;
  cmm1Ref.setval(cmm1id.getval());
  cmm1Ref.setbad(false);
  MeasurementDeviceType cmm2;
  XmlToken cmm2Name("CMM2");
  cmm2.setName(&cmm2Name);
  cmm2.setprintElement(strdup("MeasurementDevice"));
  QIFIdType cmm2id(idString(qifid++)); // required id 8
  cmm2.setid(&cmm2id);
  // add this device to our list
  measDevicesList.push_back(&cmm2);
  measDevicesN.setval(1 + measDevicesN.getval()); // increment n
  // this device will be referenced by its id
  QIFReferenceFullType cmm2Ref;
  cmm2Ref.setval(cmm2id.getval());
  cmm2Ref.setbad(false);
// endregion Measurement devices

// region Datum A plane
  /// define A datum plane

  // make a plane feature definition
  PlaneFeatureDefinitionType planADef;
  planADef.setprintElement(strdup("PlaneFeatureDefinition"));
  QIFIdType planADefid(idString(qifid++));  // required id 9
  planADef.setid(&planADefid);

  // add to list
  featDefsList.push_back(&planADef);
  // featDefsN.setval(1 + featDefsN.getval());
  // featDefsN is already set to 1

  // make a plane feature nominal
  PlaneFeatureNominalType planANom;
  planANom.setprintElement(strdup("PlaneFeatureNominal"));
  QIFIdType planANomid(idString(qifid++));  // required id 10
  planANom.setid(&planANomid);

  // reference to definition
  QIFReferenceType planADefRef;
  planADefRef.setval(planADefid.getval());
  planADefRef.setbad(false);
  planANom.setFeatureDefinitionId(&planADefRef);

  // plane location
  PointType planLoc;
  XmlDouble planLocx("0.0");
  XmlDouble planLocy("0.0");
  XmlDouble planLocz("0.0");
  planLoc.push_back(&planLocx); // x
  planLoc.push_back(&planLocy); // y
  planLoc.push_back(&planLocz); // z
  planANom.setLocation(&planLoc);
  // plane normal
  UnitVectorType planNor;
  XmlDouble planNori("0.0");
  XmlDouble planNorj("0.0");
  XmlDouble planNork("1.0");
  planNor.push_back(&planNori); // i
  planNor.push_back(&planNorj); // j
  planNor.push_back(&planNork); // k
  planANom.setNormal(&planNor);

  // add to list
  featNomsList.push_back(&planANom);
  // featNomsN.setval(1 + featNomsN.getval());
  // featNomsN is already set to 1

  // make a plane feature item
  PlaneFeatureItemType planAItem;
  planAItem.setprintElement(strdup("PlaneFeatureItem"));
  QIFIdType planAItemid(idString(qifid++)); // required id 11
  planAItem.setid(&planAItemid);

  // reference to nominal
  QIFReferenceFullType planANomRef;
  planANomRef.setval(planANomid.getval());
  planANomRef.setbad(false);
  planAItem.setFeatureNominalId(&planANomRef);

  // Give plane a name
  XmlToken planAItemName("DAT_A");
  planAItem.setFeatureName(&planAItemName);

  // is this plane checked or set?
  PlaneCheckedFeatureType planACheck;
  PlaneMeasurementDeterminationType planAMeasDet;
  // this feature is checked, rather than set
  PlaneMeasurementDeterminationTypeVal planACheckVal;
  planACheckVal.Checked = &planACheck;
  PlaneMeasurementDeterminationTypeChoicePair planACheckChoice
    (PlaneMeasurementDeterminationTypeChoicePair::CheckedE, planACheckVal);
  planAMeasDet.setPlaneMeasurementDeterminationTypePair(&planACheckChoice);
  planAItem.setDeterminationMode(&planAMeasDet);

  // add to list
  featItemsList.push_back(&planAItem);
  // featItemsN.setval(1 + featItemsN.getval());
  // featItemsN is already set to 1

  // reference to item
  QIFReferenceFullType planAItemRef;
  planAItemRef.setval(planAItemid.getval());
  planAItemRef.setbad(false);

  // make a plane feature measurement
  PlaneFeatureMeasurementType planAMeas;
  planAMeas.setprintElement(strdup("PlaneFeatureMeasurement"));
  QIFIdType planAMeasid(idString(qifid++)); // required id 12
  planAMeas.setid(&planAMeasid);

  // reference to item
  planAMeas.setFeatureItemId(&planAItemRef);

  // measured location
  MeasuredPointType planAMeasLoc;
  XmlDouble planAMeasLocx("0.0");
  XmlDouble planAMeasLocy("0.0");
  XmlDouble planAMeasLocz("0.0");
  planAMeasLoc.push_back(&planAMeasLocx); // perfect because it's datum A
  planAMeasLoc.push_back(&planAMeasLocy);
  planAMeasLoc.push_back(&planAMeasLocz);
  planAMeas.setLocation(&planAMeasLoc);

  // plane normal
  MeasuredUnitVectorType planAMeasNor;
  XmlDouble planAMeasNori("0.0");
  XmlDouble planAMeasNorj("0.0");
  XmlDouble planAMeasNork("1.0");
  planAMeasNor.push_back(&planAMeasNori); // perfect because it's datum A
  planAMeasNor.push_back(&planAMeasNorj);
  planAMeasNor.push_back(&planAMeasNork);
  planAMeas.setNormal(&planAMeasNor);

  // add to list
  featMeasiList.push_back(&planAMeas);
  // featMeasiN.setval(1 + featMeasiN.getval());
  // featMeasiN is already set to 1

  // point datum definition at plane nominal
  // array of one reference id
  ArrayReferenceFullType datAfeats;
  QIFReferenceFullTypeLisd datAfeatsList;
  datAfeats.setId(&datAfeatsList);
  datAfeatsList.push_back(&planANomRef);
  NaturalType datAfeatsN("1");
  datAfeats.setn(&datAfeatsN);
  // hook to datum
  datA.setFeatureNominalIds(&datAfeats);

  // make a flatness characteristic definition
  FlatnessCharacteristicDefinitionType flatDef;
  flatDef.setprintElement(strdup("FlatnessCharacteristicDefinition"));
  QIFIdType flatDefid(idString(qifid++)); // required id 13
  flatDef.setid(&flatDefid);
	
  // define the tolerance zone
  LinearValueType flatZone("0.1");
  // a flatness can be simple, per-unit-area, or both.
  // Items is used to store this hierachy of objects
  FlatnessCharact_1066_Type flatDefLinear;
  flatDefLinear.setToleranceValue(&flatZone);
  FlatnessCharact_1049_TypeVal flatDefVal;
  flatDefVal.FlatnessCharact_1066 = &flatDefLinear; 
  FlatnessCharact_1049_TypeChoicePair flatDefChoice
    (FlatnessCharact_1049_TypeChoicePair::FlatnessCharact_1066E, flatDefVal);
  FlatnessCharact_1049_Type flatDef1049;
  flatDef1049.setFlatnessCharact_1049_TypePair(&flatDefChoice);
  flatDef.setFlatnessCharact_1049(&flatDef1049);

  // add to list
  charDefsList.push_back(&flatDef);
  // charDefsN.setval(1 + charDefsN.getval());
  // charDefsN is already set to 1
  
  // make a new QIF document
  QIFDocumentType qifdoc;
  QPIdType qifdocQPId("a04702e1-cce4-4240-bd8b-35451f7d6dfe");
  qifdoc.setQPId(&qifdocQPId);

  // make a flatness characteristic nominal
  FlatnessCharacteristicNominalType flatNom;
  flatNom.setprintElement(strdup("FlatnessCharacteristicNominal"));
  QIFIdType flatNomid(idString(qifid++)); // required id 14
  flatNom.setid(&flatNomid);

  // required reference to definition
  QIFReferenceType flatDefRef;
  flatDefRef.setval(flatDefid.getval());
  flatDefRef.setbad(false);
  flatNom.setCharacteristicDefinitionId(&flatDefRef);
  
  // add to list
  charNomsList.push_back(&flatNom);
  // charNomsN.setval(1 + charNomsN.getval());
  // charNomsN is already set to 1

  // make a flatness characteristic item
  FlatnessCharacteristicItemType flatItem;
  flatItem.setprintElement(strdup("FlatnessCharacteristicItem"));
  QIFIdType flatItemid(idString(qifid++)); // required id 15
  flatItem.setid(&flatItemid);

  // required reference to nominal
  QIFReferenceFullType flatNomRef;
  flatNomRef.setval(flatNomid.getval());
  flatNomRef.setbad(false);
  flatItem.setCharacteristicNominalId(&flatNomRef);

  // give tolerance a name
  XmlToken flatItemName("FLAT1");
  flatItem.setName(&flatItemName);

  // point tolerance at feature
  ArrayReferenceType flatItemFeatIds;
  QIFReferenceTypeLisd flatItemFeatIdsList;
  flatItemFeatIds.setId(&flatItemFeatIdsList);
  flatItemFeatIdsList.push_back(&planAItemRef);
  NaturalType flatItemFeatIdsN("1");
  flatItemFeatIds.setn(&flatItemFeatIdsN);
  flatItem.setFeatureItemIds(&flatItemFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType flatItemDevIds;
  QIFReferenceTypeLisd flatItemDevIdsList;
  flatItemDevIds.setId(&flatItemDevIdsList);
  flatItemDevIdsList.push_back(&cmm1Ref);
  flatItemDevIdsList.push_back(&cmm2Ref);
  NaturalType flatItemDevIdsN("2");
  flatItemDevIds.setn(&flatItemDevIdsN);
  flatItem.setMeasurementDeviceIds(&flatItemDevIds);

  // add to list
  charItemsList.push_back(&flatItem);
  // charItemsN.setval(1 + charItemsN.getval());
  // charItemsN is already set to 1

  // make a flatness characteristic measurement
  FlatnessCharacteristicMeasurementType flatMeas;
  flatMeas.setprintElement(strdup("FlatnessCharacteristicMeasurement"));
  QIFIdType flatMeasid(idString(qifid++)); // required id 16
  flatMeas.setid(&flatMeasid);

  // required reference to item
  QIFReferenceFullType flatItemRef;
  flatItemRef.setval(flatItemid.getval());
  flatItemRef.setbad(false);
  flatMeas.setCharacteristicItemId(&flatItemRef);
  
  
  // required status
  CharacteristicStatusType flatStat;
  CharacteristicStatusTypeVal flatStatVal;
  CharacteristicStatusEnumType flatStatEnum("PASS");
  flatStatVal.CharacteristicStatusEnum = &flatStatEnum;
  CharacteristicStatusTypeChoicePair flatStatChoice
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     flatStatVal);
  flatStat.setCharacteristicStatusTypePair(&flatStatChoice);
  flatMeas.setStatus(&flatStat);
  
  // measured value
  MeasuredLinearValueType flatMeasVal("0.023");
  flatMeas.setValue(&flatMeasVal);

  // point measured tolerance at measured feature
  QIFReferenceType planAMeasRef;
  planAMeasRef.setval(planAMeasid.getval());
  planAMeasRef.setbad(false);
  ArrayReferenceType flatMeasFeatIds;
  QIFReferenceTypeLisd flatMeasFeatIdsList;
  flatMeasFeatIds.setId(&flatMeasFeatIdsList);
  flatMeasFeatIdsList.push_back(&planAMeasRef);
  NaturalType flatMeasFeatIdsN("1");
  flatMeasFeatIds.setn(&flatMeasFeatIdsN);
  flatMeas.setFeatureMeasurementIds(&flatMeasFeatIds);
  
  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType flatMeasDevIds;
  QIFReferenceTypeLisd flatMeasDevIdsList;
  flatMeasDevIds.setId(&flatMeasDevIdsList);
  flatMeasDevIdsList.push_back(&cmm2Ref);
  NaturalType flatMeasDevIdsN("1");
  flatMeasDevIds.setn(&flatMeasDevIdsN);
  flatMeas.setMeasurementDeviceIds(&flatMeasDevIds);

  // add to list
  charMeasiList.push_back(&flatMeas);
  // charMeasiN.setval(1 + charMeasiN.getval());
  // charMeasiN is already set to 1
// endregion Datum A plane

// region datum B cylinder	
  // make a cylinder feature definition * SHARED BETWEEN DATUMS B AND C *
  CylinderFeatureDefinitionType cylBCDef;
  cylBCDef.setprintElement(strdup("CylinderFeatureDefinition"));
  QIFIdType cylBCDefid(idString(qifid++)); // required id 17
  cylBCDef.setid(&cylBCDefid);

  // feature size
  LinearValueType diaBCSize("12.7");
  cylBCDef.setDiameter(&diaBCSize);
  
  // material side
  InternalExternalEnumType cylBCDefSide("INTERNAL");
  cylBCDef.setInternalExternal(&cylBCDefSide);

  // add to list
  featDefsList.push_back(&cylBCDef);
  featDefsN.setval(1 + featDefsN.getval()); // increment n

  // make a cylinder feature nominal (not sharable)
  CylinderFeatureNominalType cylBNom;
  cylBNom.setprintElement(strdup("CylinderFeatureNominal"));
  QIFIdType cylBNomid(idString(qifid++)); // required id 18
  cylBNom.setid(&cylBNomid);

  // reference to shared definition
  QIFReferenceType cylBCDefRef;
  cylBCDefRef.setval(cylBCDefid.getval());
  cylBCDefRef.setbad(false);
  cylBNom.setFeatureDefinitionId(&cylBCDefRef);

  // cylinder location
  PointType cylBcen;
  XmlDouble cylBcenx("30.0");
  XmlDouble cylBceny("0.0");
  XmlDouble cylBcenz("0.0");
  cylBcen.push_back(&cylBcenx);
  cylBcen.push_back(&cylBceny);
  cylBcen.push_back(&cylBcenz);
  
  // cylinder axis
  UnitVectorType cylBvec;
  XmlDouble cylBveci("0.0");
  XmlDouble cylBvecj("0.0");
  XmlDouble cylBveck("-1.0");
  cylBvec.push_back(&cylBveci);
  cylBvec.push_back(&cylBvecj);
  cylBvec.push_back(&cylBveck);

  // cylinder axis
  AxisType cylBaxis;
  cylBaxis.setAxisPoint(&cylBcen);
  cylBaxis.setDirection(&cylBvec);
  cylBNom.setAxis(&cylBaxis);

  // add to list
  featNomsList.push_back(&cylBNom);
  featNomsN.setval(1 + featNomsN.getval()); // increment n

  // make a cylinder feature item
  CylinderFeatureItemType cylBItem;
  cylBItem.setprintElement(strdup("CylinderFeatureItem"));
  QIFIdType cylBItemid(idString(qifid++)); // required id 19
  cylBItem.setid(&cylBItemid);
  
  // reference to nominal
  QIFReferenceFullType cylBNomRef;
  cylBNomRef.setval(cylBNomid.getval());
  cylBNomRef.setbad(false);
  cylBItem.setFeatureNominalId(&cylBNomRef);

  // Give cylinder a name
  XmlToken cylBItemName("DAT_B");
  cylBItem.setFeatureName(&cylBItemName);

  // is this cylinder checked or set?
  CylinderCheckedFeatureType cylBCheck;
  CylinderMeasurementDeterminationType cylBMeasDet;
  // this feature is checked, rather than set
  CylinderMeasurementDeterminationTypeVal cylBCheckVal;
  cylBCheckVal.Checked = &cylBCheck;
  CylinderMeasurementDeterminationTypeChoicePair cylBCheckChoice
    (CylinderMeasurementDeterminationTypeChoicePair::CheckedE, cylBCheckVal);
  cylBMeasDet.setCylinderMeasurementDeterminationTypePair(&cylBCheckChoice);
  cylBItem.setDeterminationMode(&cylBMeasDet);

  // add to list
  featItemsList.push_back(&cylBItem);
  featItemsN.setval(1 + featItemsN.getval());  // increment n

  // make a cylinder feature measurement
  CylinderFeatureMeasurementType cylBMeas;
  cylBMeas.setprintElement(strdup("CylinderFeatureMeasurement"));
  QIFIdType cylBMeasid(idString(qifid++)); // required id 20
  cylBMeas.setid(&cylBMeasid);
  
  // reference to item
  QIFReferenceFullType cylBItemRef;
  cylBItemRef.setval(cylBItemid.getval());
  cylBItemRef.setbad(false);
  cylBMeas.setFeatureItemId(&cylBItemRef);
	
  // cylinder location
  MeasuredPointType cylBMeasCen;
  XmlDouble cylBMeasCenx("30.0");
  XmlDouble cylBMeasCeny("0.0");
  XmlDouble cylBMeasCenz("0.0");
  cylBMeasCen.push_back(&cylBMeasCenx);
  cylBMeasCen.push_back(&cylBMeasCeny);
  cylBMeasCen.push_back(&cylBMeasCenz);

    // cylinder axis
  MeasuredUnitVectorType cylBMeasVec;
  XmlDouble cylBMeasVeci("0.051");
  XmlDouble cylBMeasVecj("0.0");
  XmlDouble cylBMeasVeck("-0.9987");
  cylBMeasVec.push_back(&cylBMeasVeci);
  cylBMeasVec.push_back(&cylBMeasVecj);
  cylBMeasVec.push_back(&cylBMeasVeck);

  // cylinder axis
  MeasuredAxisType cylBMeasAxis;
  cylBMeasAxis.setAxisPoint(&cylBMeasCen);
  cylBMeasAxis.setDirection(&cylBMeasVec);
  cylBMeas.setAxis(&cylBMeasAxis);

  // cylinder diameter
  MeasuredLinearValueType cylBMeasDia("12.699");
  cylBMeas.setDiameter(&cylBMeasDia);

  // add to list
  featMeasiList.push_back(&cylBMeas);
  featMeasiN.setval(1 + featMeasiN.getval()); // increment n
  
  // array of one reference id
  ArrayReferenceFullType datBfeats;
  QIFReferenceFullTypeLisd datBfeatsList;
  datBfeats.setId(&datBfeatsList);
  datBfeatsList.push_back(&cylBNomRef);
  NaturalType datBfeatsN("1");
  datBfeats.setn(&datBfeatsN);
  // hook to datum
  datB.setFeatureNominalIds(&datBfeats);
  
  // make a diameter characteristic definition to be shared
  DiameterCharacteristicDefinitionType diaBCDef;
  diaBCDef.setprintElement(strdup("DiameterCharacteristicDefinition"));
  QIFIdType diaBCDefid(idString(qifid++)); // required id 21
  diaBCDef.setid(&diaBCDefid);

  // tolerance (as opposed to limits and fits, or non-tolerance
  LinearValueType plusTolBC("0.3");
  LinearValueType minusTolBC("-0.3");
  LinearToleranceType diaBCTol;
  XmlBoolean diaBCTolBool("false");
  diaBCTol.setDefinedAsLimit(&diaBCTolBool);
  LinearTolerance_1038_Type minBCTol;
  minBCTol.setMinValue(&minusTolBC);
  LinearTolerance_1031_Type maxMinBCTol;
  maxMinBCTol.setMaxValue(&plusTolBC);
  maxMinBCTol.setLinearTolerance_1038(&minBCTol);
  LinearTolerance_1014_TypeVal diaBCTolVal;
  diaBCTolVal.LinearTolerance_1031 = &maxMinBCTol; 
  LinearTolerance_1014_TypeChoicePair diaBCTolChoice
    (LinearTolerance_1014_TypeChoicePair::LinearTolerance_1031E, diaBCTolVal);
  LinearTolerance_1014_Type diaBCTol1014;
  diaBCTol1014.setLinearTolerance_1014_TypePair(&diaBCTolChoice);
  diaBCTol.setLinearTolerance_1014(&diaBCTol1014);
  DiameterCharacteristicDefinitionTypeVal diaBCTolSelVal;
  diaBCTolSelVal.Tolerance = &diaBCTol;
  DiameterCharacteristicDefinitionTypeChoicePair diaBCTolSelChoice
    (DiameterCharacteristicDefinitionTypeChoicePair::ToleranceE, diaBCTolSelVal);
  diaBCDef.setDiameterCharacteristicDefinitionTypeChoicePair(&diaBCTolSelChoice);

  // add to list
  charDefsList.push_back(&diaBCDef);
  charDefsN.setval(1 + charDefsN.getval());  // increment n

  // make a diameter characteristic nominal
  DiameterCharacteristicNominalType diaBCNom;
  diaBCNom.setprintElement(strdup("DiameterCharacteristicNominal"));
  QIFIdType diaBCNomid(idString(qifid++)); // required id 22
  diaBCNom.setid(&diaBCNomid);

  // required reference to definition
  QIFReferenceType diaBCDefRef;
  diaBCDefRef.setval(diaBCDefid.getval());
  diaBCDefRef.setbad(false);
  diaBCNom.setCharacteristicDefinitionId(&diaBCDefRef);

  // nominal value
  diaBCNom.setTargetValue(&diaBCSize); // from feature definition above

  // give shared tolerance a name
  XmlToken diaBCNomName("DIAM1");
  diaBCNom.setName(&diaBCNomName);

   // add to list
  charNomsList.push_back(&diaBCNom);
  charNomsN.setval(1 + charNomsN.getval()); // increment n

  // make a diameter characteristic item (this is not sharable)
  DiameterCharacteristicItemType diaBItem;
  diaBItem.setprintElement(strdup("DiameterCharacteristicItem"));
  QIFIdType diaBItemid(idString(qifid++)); // required id 23
  diaBItem.setid(&diaBItemid);

  // required reference to nominal
  QIFReferenceFullType diaBCNomRef;
  diaBCNomRef.setval(diaBCNomid.getval());
  diaBCNomRef.setbad(false);
  diaBItem.setCharacteristicNominalId(&diaBCNomRef);

  // give tolerance a name
  XmlToken diaBItemName("DIAM1_B");
  diaBItem.setName(&diaBItemName);
	
  // point tolerance at feature
  ArrayReferenceType diaBFeatIds;
  QIFReferenceTypeLisd diaBFeatIdsList;
  diaBFeatIds.setId(&diaBFeatIdsList);
  diaBFeatIdsList.push_back(&cylBItemRef);
  NaturalType diaBFeatIdsN("1");
  diaBFeatIds.setn(&diaBFeatIdsN);
  diaBItem.setFeatureItemIds(&diaBFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType diaBDevIds;
  QIFReferenceTypeLisd diaBDevIdsList;
  diaBDevIds.setId(&diaBDevIdsList);
  diaBDevIdsList.push_back(&cmm1Ref);
  diaBDevIdsList.push_back(&cmm2Ref);
  NaturalType diaBDevIdsN("2");
  diaBDevIds.setn(&diaBDevIdsN);
  diaBItem.setMeasurementDeviceIds(&diaBDevIds);

  // add to list
  charItemsList.push_back(&diaBItem);
  charItemsN.setval(1 + charItemsN.getval()); // increment n

  // make a diameter characteristic measurement
  DiameterCharacteristicMeasurementType diaBMeas;
  diaBMeas.setprintElement(strdup("DiameterCharacteristicMeasurement"));
  QIFIdType diaBMeasid(idString(qifid++)); // required id 24
  diaBMeas.setid(&diaBMeasid);

  // required reference to item
  QIFReferenceFullType diaBItemRef;
  diaBItemRef.setval(diaBItemid.getval());
  diaBItemRef.setbad(false);
  diaBMeas.setCharacteristicItemId(&diaBItemRef);

  // required status
  CharacteristicStatusType diaBStat;
  CharacteristicStatusTypeVal diaBStatVal;
  CharacteristicStatusEnumType diaBStatEnum("PASS");
  diaBStatVal.CharacteristicStatusEnum = &diaBStatEnum;
  CharacteristicStatusTypeChoicePair diaBStatChoice
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     diaBStatVal);
  diaBStat.setCharacteristicStatusTypePair(&diaBStatChoice);
  diaBMeas.setStatus(&diaBStat);

  // measured value
  MeasuredLinearValueType diaBMeasVal("12.699");
  diaBMeas.setValue(&diaBMeasVal);

  // point measured tolerance at measured feature
  QIFReferenceFullType cylBMeasRef;
  cylBMeasRef.setval(cylBMeasid.getval());
  cylBMeasRef.setbad(false);
  ArrayReferenceType diaBFeatMeasIds;
  QIFReferenceTypeLisd diaBFeatMeasIdsList;
  diaBFeatMeasIds.setId(&diaBFeatMeasIdsList);
  NaturalType diaBFeatMeasIdsN("1");
  diaBFeatMeasIds.setn(&diaBFeatMeasIdsN);
  diaBFeatMeasIdsList.push_back(&cylBMeasRef);
  diaBMeas.setFeatureMeasurementIds(&diaBFeatMeasIds);
  
  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType diaBMeasDevIds;
  QIFReferenceTypeLisd diaBMeasDevIdsList;
  diaBMeasDevIds.setId(&diaBMeasDevIdsList);
  NaturalType diaBMeasDevIdsN("1");
  diaBMeasDevIds.setn(&diaBMeasDevIdsN);
  diaBMeasDevIdsList.push_back(&cmm2Ref);
  diaBMeas.setMeasurementDeviceIds(&diaBMeasDevIds);

  // add to list
  charMeasiList.push_back(&diaBMeas);
  charMeasiN.setval(1 + charMeasiN.getval()); // increment n

  // make a perpendicularity characteristic definition
  PerpendicularityCharacteristicDefinitionType perpDef;
  perpDef.setprintElement(strdup("PerpendicularityCharacteristicDefinition"));
  QIFIdType perpDefid(idString(qifid++)); // required id 25
  perpDef.setid(&perpDefid);

  // define the tolerance zone
  LinearValueType perpZone("0.2");
  perpDef.setToleranceValue(&perpZone);

  // define the zone shape
  OrientationZoneShapeType perpZoneShape;
  OrientationZoneShapeTypeVal perpZoneShapeVal;
  OrientationDiametricalZoneType perpZoneShapeDia;
  perpZoneShapeVal.DiametricalZone = &perpZoneShapeDia;
  OrientationZoneShapeTypeChoicePair perpZoneShapeChoice
    (OrientationZoneShapeTypeChoicePair::DiametricalZoneE, perpZoneShapeVal);
  perpZoneShape.setOrientationZoneShapeTypePair(&perpZoneShapeChoice);
  perpDef.setZoneShape(&perpZoneShape);
  // define the material condition
  MaterialModifierEnumType perpDefMat("MAXIMUM");
  perpDef.setMaterialCondition(&perpDefMat);
  // point to DRF
  QIFReferenceFullType ADRFRef;
  ADRFRef.setval(drfAid.getval());
  ADRFRef.setbad(false);
  perpDef.setDatumReferenceFrameId(&ADRFRef);

  // add to list
  charDefsList.push_back(&perpDef);
  charDefsN.setval(1 + charDefsN.getval()); // increment n

  // make a perpendicularity characteristic nominal
  PerpendicularityCharacteristicNominalType perpNom;
  perpNom.setprintElement(strdup("PerpendicularityCharacteristicNominal"));
  QIFIdType perpNomid(idString(qifid++)); // required id 26
  perpNom.setid(&perpNomid);

  // required reference to definition
  QIFReferenceType perpDefRef;
  perpDefRef.setval(perpDefid.getval());
  perpDefRef.setbad(false);
  perpNom.setCharacteristicDefinitionId(&perpDefRef);

  // add to list
  charNomsList.push_back(&perpNom);
  charNomsN.setval(1 + charNomsN.getval()); // increment n

  // make a perpendicularity characteristic item
  PerpendicularityCharacteristicItemType perpItem;
  perpItem.setprintElement(strdup("PerpendicularityCharacteristicItem"));
  QIFIdType perpItemid(idString(qifid++)); // required id 27
  perpItem.setid(&perpItemid);

  // required reference to nominal
  QIFReferenceFullType perpNomRef;
  perpNomRef.setval(perpNomid.getval());
  perpNomRef.setbad(false);
  perpItem.setCharacteristicNominalId(&perpNomRef);
  
  // give tolerance a name
  XmlToken perpItemName("PERP1");
  perpItem.setName(&perpItemName);

  // point tolerance at feature
  ArrayReferenceType perpItemIds;
  QIFReferenceTypeLisd perpItemIdsList;
  perpItemIds.setId(&perpItemIdsList);
  NaturalType perpItemIdsN("1");
  perpItemIds.setn(&perpItemIdsN);
  perpItemIdsList.push_back(&cylBItemRef); // from hooking to diameter
  perpItem.setFeatureItemIds(&perpItemIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType perpItemDevIds;
  QIFReferenceTypeLisd perpItemDevIdsList;
  perpItemDevIds.setId(&perpItemDevIdsList);
  NaturalType perpItemDevIdsN("2");
  perpItemDevIds.setn(&perpItemDevIdsN);
  perpItemDevIdsList.push_back(&cmm1Ref);
  perpItemDevIdsList.push_back(&cmm2Ref);
  perpItem.setMeasurementDeviceIds(&perpItemDevIds);

  // add to list
  charItemsList.push_back(&perpItem);
  charItemsN.setval(1 + charItemsN.getval()); // increment n

  // make a perpendicularity characteristic actual
  PerpendicularityCharacteristicMeasurementType perpMeas;
  perpMeas.setprintElement(strdup
			   ("PerpendicularityCharacteristicMeasurement"));
  QIFIdType perpMeasid(idString(qifid++)); // required id 28
  perpMeas.setid(&perpMeasid);

  // required reference to item
  QIFReferenceFullType perpItemRef;
  perpItemRef.setval(perpItemid.getval());
  perpItemRef.setbad(false);
  perpMeas.setCharacteristicItemId(&perpItemRef);

  // required status
  CharacteristicStatusType perpStat;
  CharacteristicStatusTypeVal perpStatVal;
  CharacteristicStatusEnumType perpStatEnum("PASS");
  perpStatVal.CharacteristicStatusEnum = &perpStatEnum;
  CharacteristicStatusTypeChoicePair perpStatChoice
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     perpStatVal);
  perpStat.setCharacteristicStatusTypePair(&perpStatChoice);
  perpMeas.setStatus(&perpStat);

  // measured value
  MeasuredLinearValueType perpMeasVal("0.07");
  perpMeas.setValue(&perpMeasVal);

  // point measured tolerance at measured feature
  ArrayReferenceType perpMeasFeatIds;
  QIFReferenceTypeLisd perpMeasFeatIdsList;
  perpMeasFeatIds.setId(&perpMeasFeatIdsList);
  NaturalType perpMeasFeatIdsN("1");
  perpMeasFeatIds.setn(&perpMeasFeatIdsN);
  perpMeasFeatIdsList.push_back(&cylBMeasRef);
  perpMeas.setFeatureMeasurementIds(&perpMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType perpMeasDevIds;
  QIFReferenceTypeLisd perpMeasDevIdsList;
  perpMeasDevIds.setId(&perpMeasDevIdsList);
  NaturalType perpMeasDevIdsN("1");
  perpMeasDevIds.setn(&perpMeasDevIdsN);
  perpMeasDevIdsList.push_back(&cmm2Ref);
  perpMeas.setMeasurementDeviceIds(&perpMeasDevIds);

  // add to list
  charMeasiList.push_back(&perpMeas);
  charMeasiN.setval(1 + charMeasiN.getval()); // increment n
// endregion datum B cylinder
  
// region datum C cylinder

  // make a cylinder feature nominal
  CylinderFeatureNominalType cylCNom;
  cylCNom.setprintElement(strdup("CylinderFeatureNominal"));
  QIFIdType cylCNomid(idString(qifid++)); // required id 29
  cylCNom.setid(&cylCNomid);

  // reference to shared definition
  cylCNom.setFeatureDefinitionId(&cylBCDefRef);

  // cylinder location
  PointType cylCcen;
  XmlDouble cylCcenx("150.0");
  XmlDouble cylCceny("0.0");
  XmlDouble cylCcenz("0.0");
  cylCcen.push_back(&cylCcenx);
  cylCcen.push_back(&cylCceny);
  cylCcen.push_back(&cylCcenz);

  // cylinder axis
  UnitVectorType cylCvec;
  XmlDouble cylCveci("0.0");
  XmlDouble cylCvecj("0.0");
  XmlDouble cylCveck("-1.0");
  cylCvec.push_back(&cylCveci);
  cylCvec.push_back(&cylCvecj);
  cylCvec.push_back(&cylCveck);

  // cylinder axis
  AxisType cylCaxis;
  cylCaxis.setAxisPoint(&cylCcen);
  cylCaxis.setDirection(&cylCvec);
  cylCNom.setAxis(&cylCaxis);

  // add to list
  featNomsList.push_back(&cylCNom);
  featNomsN.setval(1 + featNomsN.getval()); // increment n

  // make a cylinder feature item
  CylinderFeatureItemType cylCItem;
  cylCItem.setprintElement(strdup("CylinderFeatureItem"));
  QIFIdType cylCItemid(idString(qifid++)); // required id 30
  cylCItem.setid(&cylCItemid);

  // reference to nominal
  QIFReferenceFullType cylCNomRef;
  cylCNomRef.setval(cylCNomid.getval());
  cylCNomRef.setbad(false);
  cylCItem.setFeatureNominalId(&cylCNomRef);
  
  // Give cylinder a name
  XmlToken cylCItemName("DAT_C");
  cylCItem.setFeatureName(&cylCItemName);

  // is this cylinder checked or set?
  CylinderCheckedFeatureType cylCCheck;
  CylinderMeasurementDeterminationType cylCMeasDet;
  // this feature is checked, rather than set
  CylinderMeasurementDeterminationTypeVal cylCCheckVal;
  cylCCheckVal.Checked = &cylCCheck;
  CylinderMeasurementDeterminationTypeChoicePair cylCCheckChoice
    (CylinderMeasurementDeterminationTypeChoicePair::CheckedE, cylCCheckVal);
  cylCMeasDet.setCylinderMeasurementDeterminationTypePair(&cylCCheckChoice);
  cylCItem.setDeterminationMode(&cylCMeasDet);

  // add to list
  featItemsList.push_back(&cylCItem);
  featItemsN.setval(1 + featItemsN.getval());  // increment n

  // make a cylinder feature actual
  CylinderFeatureMeasurementType cylCMeas;
  cylCMeas.setprintElement(strdup("CylinderFeatureMeasurement"));
  QIFIdType cylCMeasid(idString(qifid++));  // required id 31
  cylCMeas.setid(&cylCMeasid);

  // reference to item
  QIFReferenceFullType cylCItemRef;
  cylCItemRef.setval(cylCItemid.getval());
  cylCItemRef.setbad(false);
  cylCMeas.setFeatureItemId(&cylCItemRef);

  // cylinder location
  MeasuredPointType cylCMeasCen;
  XmlDouble cylCMeasCenx("150.0");
  XmlDouble cylCMeasCeny("0.0");
  XmlDouble cylCMeasCenz("0.0");
  cylCMeasCen.push_back(&cylCMeasCenx);
  cylCMeasCen.push_back(&cylCMeasCeny);
  cylCMeasCen.push_back(&cylCMeasCenz);

  // cylinder axis
  MeasuredUnitVectorType cylCMeasVec;
  XmlDouble cylCMeasVeci("-0.0099");
  XmlDouble cylCMeasVecj("0.0099");
  XmlDouble cylCMeasVeck("-0.9999");
  cylCMeasVec.push_back(&cylCMeasVeci);
  cylCMeasVec.push_back(&cylCMeasVecj);
  cylCMeasVec.push_back(&cylCMeasVeck);

  // cylinder axis
  MeasuredAxisType cylCMeasAxis;
  cylCMeasAxis.setAxisPoint(&cylCMeasCen);
  cylCMeasAxis.setDirection(&cylCMeasVec);
  cylCMeas.setAxis(&cylCMeasAxis);

  // cylinder diameter
  MeasuredLinearValueType cylCMeasDia("12.72");
  cylCMeas.setDiameter(&cylCMeasDia);

  // add to list
  featMeasiList.push_back(&cylCMeas);
  featMeasiN.setval(1 + featMeasiN.getval()); // increment n
  
  // array of one reference id
  ArrayReferenceFullType datCfeats;
  QIFReferenceFullTypeLisd datCfeatsList;
  datCfeats.setId(&datCfeatsList);
  datCfeatsList.push_back(&cylCNomRef);
  NaturalType datCfeatsN("1");
  datCfeats.setn(&datCfeatsN);
  // hook to datum
  datC.setFeatureNominalIds(&datCfeats);
  
  // make a diameter characteristic item (this is not sharable)
  DiameterCharacteristicItemType diaCItem;
  diaCItem.setprintElement(strdup("DiameterCharacteristicItem"));
  QIFIdType diaCItemid(idString(qifid++)); // required id 32
  diaCItem.setid(&diaCItemid);

  // required reference to nominal
  diaCItem.setCharacteristicNominalId(&diaBCNomRef);
  
  // give tolerance a name
  XmlToken diaCItemName("DIAM1_C");
  diaCItem.setName(&diaCItemName);

  // point tolerance at feature
  ArrayReferenceType diaCFeatIds;
  QIFReferenceTypeLisd diaCFeatIdsList;
  diaCFeatIds.setId(&diaCFeatIdsList);
  diaCFeatIdsList.push_back(&cylCItemRef);
  NaturalType diaCFeatIdsN("1");
  diaCFeatIds.setn(&diaCFeatIdsN);
  diaCItem.setFeatureItemIds(&diaCFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType diaCDevIds;
  QIFReferenceTypeLisd diaCDevIdsList;
  diaCDevIds.setId(&diaCDevIdsList);
  diaCDevIdsList.push_back(&cmm1Ref);
  diaCDevIdsList.push_back(&cmm2Ref);
  NaturalType diaCDevIdsN("2");
  diaCDevIds.setn(&diaCDevIdsN);
  diaCItem.setMeasurementDeviceIds(&diaCDevIds);

  // add to list
  charItemsList.push_back(&diaCItem);
  charItemsN.setval(1 + charItemsN.getval()); // increment n

  // make a diameter characteristic measurement
  DiameterCharacteristicMeasurementType diaCMeas;
  diaCMeas.setprintElement(strdup("DiameterCharacteristicMeasurement"));
  QIFIdType diaCMeasid(idString(qifid++)); // required id 33
  diaCMeas.setid(&diaCMeasid);

  // required reference to item
  QIFReferenceFullType diaCItemRef;
  diaCItemRef.setval(diaCItemid.getval());
  diaCItemRef.setbad(false);
  diaCMeas.setCharacteristicItemId(&diaCItemRef);

  // required status
  CharacteristicStatusType diaCStat;
  CharacteristicStatusTypeVal diaCStatVal;
  CharacteristicStatusEnumType diaCStatEnum("PASS");
  diaCStatVal.CharacteristicStatusEnum = &diaCStatEnum;
  CharacteristicStatusTypeChoicePair diaCStatChoice
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     diaCStatVal);
  diaCStat.setCharacteristicStatusTypePair(&diaCStatChoice);
  diaCMeas.setStatus(&diaCStat);

  // measured value
  MeasuredLinearValueType diaCMeasVal("12.72");
  diaCMeas.setValue(&diaCMeasVal);

  // point measured tolerance at measured feature
  QIFReferenceFullType cylCMeasRef;
  cylCMeasRef.setval(cylCMeasid.getval());
  cylCMeasRef.setbad(false);
  ArrayReferenceType diaCFeatMeasIds;
  QIFReferenceTypeLisd diaCFeatMeasIdsList;
  diaCFeatMeasIds.setId(&diaCFeatMeasIdsList);
  NaturalType diaCFeatMeasIdsN("1");
  diaCFeatMeasIds.setn(&diaCFeatMeasIdsN);
  diaCFeatMeasIdsList.push_back(&cylCMeasRef);
  diaCMeas.setFeatureMeasurementIds(&diaCFeatMeasIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType diaCMeasDevIds;
  QIFReferenceTypeLisd diaCMeasDevIdsList;
  diaCMeasDevIds.setId(&diaCMeasDevIdsList);
  NaturalType diaCMeasDevIdsN("1");
  diaCMeasDevIds.setn(&diaCMeasDevIdsN);
  diaCMeasDevIdsList.push_back(&cmm2Ref);
  diaCMeas.setMeasurementDeviceIds(&diaCMeasDevIds);

  // add to list
  charMeasiList.push_back(&diaCMeas);
  charMeasiN.setval(1 + charMeasiN.getval()); // increment n

  // make a position characteristic definition
  PositionCharacteristicDefinitionType posCDef;
  posCDef.setprintElement(strdup("PositionCharacteristicDefinition"));
  QIFIdType posCDefid(idString(qifid++)); // required id 34
  posCDef.setid(&posCDefid);

  // define the tolerance zone shape (diametrical)
  PositionZoneShapeType zoneCShape;
  PositionZoneShapeTypeVal zoneCShapeVal;
  PositionDiametricalZoneType zoneCShapeValDia;
  zoneCShapeVal.DiametricalZone = &zoneCShapeValDia;
  PositionZoneShapeTypeChoicePair zoneCShapeChoice
    (PositionZoneShapeTypeChoicePair::DiametricalZoneE, zoneCShapeVal);
  zoneCShape.setPositionZoneShapeTypePair(&zoneCShapeChoice);
  posCDef.setZoneShape(&zoneCShape);

  // define the tolerance zone
  LinearValueType tolCZone("0.5");
  posCDef.setToleranceValue(&tolCZone);

  // apply MMC material condition
  MaterialModifierEnumType posCDefMat("MAXIMUM");
  posCDef.setMaterialCondition(&posCDefMat);

  // reference our DRF
  QIFReferenceFullType drfABRef;
  drfABRef.setval(drfABid.getval());
  drfABRef.setbad(false);
  posCDef.setDatumReferenceFrameId(&drfABRef);

  // add to list
  charDefsList.push_back(&posCDef);
  charDefsN.setval(1 + charDefsN.getval()); // increment n

  // make a position characteristic nominal
  PositionCharacteristicNominalType posCNom;
  posCNom.setprintElement(strdup("PositionCharacteristicNominal"));
  QIFIdType posCNomid(idString(qifid++)); // required id 35
  posCNom.setid(&posCNomid);
  
  // required reference to definition
  QIFReferenceType posCDefRef;
  posCDefRef.setval(posCDefid.getval());
  posCDefRef.setbad(false);
  posCNom.setCharacteristicDefinitionId(&posCDefRef);

  // add to list
  charNomsList.push_back(&posCNom);
  charNomsN.setval(1 + charNomsN.getval()); // increment n

  // make a position characteristic item
  PositionCharacteristicItemType posCItem;
  posCItem.setprintElement(strdup("PositionCharacteristicItem"));
  QIFIdType posCItemid(idString(qifid++)); // required id 36
  posCItem.setid(&posCItemid);

  // required reference to nominal
  QIFReferenceFullType posCNomRef;
  posCNomRef.setval(posCNomid.getval());
  posCNomRef.setbad(false);
  posCItem.setCharacteristicNominalId(&posCNomRef);
  
  // give tolerance a name
  XmlToken posCItemName("POSN1");
  posCItem.setName(&posCItemName);

  // point tolerance at feature
  ArrayReferenceType posCItemFeatIds;
  QIFReferenceTypeLisd posCItemFeatIdsList;
  posCItemFeatIds.setId(&posCItemFeatIdsList);
  NaturalType posCItemFeatIdsN("1");
  posCItemFeatIds.setn(&posCItemFeatIdsN);
  posCItemFeatIdsList.push_back(&cylCItemRef); // from diameter hook above
  posCItem.setFeatureItemIds(&posCItemFeatIds);
  
  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType posCItemDevIds;
  QIFReferenceTypeLisd posCItemDevIdsList;
  posCItemDevIds.setId(&posCItemDevIdsList);
  NaturalType posCItemDevIdsN("2");
  posCItemDevIds.setn(&posCItemDevIdsN);
  posCItemDevIdsList.push_back(&cmm1Ref);
  posCItemDevIdsList.push_back(&cmm2Ref);
  posCItem.setMeasurementDeviceIds(&posCItemDevIds);

  // add to list
  charItemsList.push_back(&posCItem);
  charItemsN.setval(1 + charItemsN.getval()); // increment n

  // make a position characteristic measurement
  PositionCharacteristicMeasurementType posCMeas;
  posCMeas.setprintElement(strdup("PositionCharacteristicMeasurement"));
  QIFIdType posCMeasid(idString(qifid++)); // required id 37
  posCMeas.setid(&posCMeasid);

  // required reference to item
  QIFReferenceFullType posCItemRef;
  posCItemRef.setval(posCItemid.getval());
  posCItemRef.setbad(false);
  posCMeas.setCharacteristicItemId(&posCItemRef);

  // required status
  CharacteristicStatusType posCStat;
  CharacteristicStatusTypeVal posCStatVal;
  CharacteristicStatusEnumType posCStatEnum("PASS");
  posCStatVal.CharacteristicStatusEnum = &posCStatEnum;
  CharacteristicStatusTypeChoicePair posCStatChoice
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     posCStatVal);
  posCStat.setCharacteristicStatusTypePair(&posCStatChoice);
  posCMeas.setStatus(&posCStat);

  // measured value
  MeasuredLinearValueType posCMeasVal("0.102");
  posCMeas.setValue(&posCMeasVal);

  // point measured tolerance at measured feature
  ArrayReferenceType posCMeasFeatIds;
  QIFReferenceTypeLisd posCMeasFeatIdsList;
  posCMeasFeatIds.setId(&posCMeasFeatIdsList);
  NaturalType posCMeasFeatIdsN("1");
  posCMeasFeatIds.setn(&posCMeasFeatIdsN);
  posCMeasFeatIdsList.push_back(&cylCMeasRef);
  posCMeas.setFeatureMeasurementIds(&posCMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType posCMeasDevIds;
  QIFReferenceTypeLisd posCMeasDevIdsList;
  posCMeasDevIds.setId(&posCMeasDevIdsList);
  NaturalType posCMeasDevIdsN("1");
  posCMeasDevIds.setn(&posCMeasDevIdsN);
  posCMeasDevIdsList.push_back(&cmm2Ref);
  posCMeas.setMeasurementDeviceIds(&posCMeasDevIds);
  
  // add to list
  charMeasiList.push_back(&posCMeas);
  charMeasiN.setval(1 + charMeasiN.getval()); // increment n
// endregion datum C cylinder

// region circle back to ABC
  // make a circle feature definition
  CircleFeatureDefinitionType circDef;
  circDef.setprintElement(strdup("CircleFeatureDefinition"));
  QIFIdType circDefid(idString(qifid++)); // required id 38
  circDef.setid(&circDefid);

  // feature size
  LinearValueType diaSize("6.35");
  circDef.setDiameter(&diaSize);

  // material side
  InternalExternalEnumType circDefSide("INTERNAL");
  circDef.setInternalExternal(&circDefSide);

  // add to list
  featDefsList.push_back(&circDef);
  featDefsN.setval(1 + featDefsN.getval()); // increment n

  // make a circle feature nominal
  CircleFeatureNominalType circNom;
  circNom.setprintElement(strdup("CircleFeatureNominal"));
  QIFIdType circNomid(idString(qifid++)); // required id 39
  circNom.setid(&circNomid);

  // reference to definition
  QIFReferenceType circDefRef;
  circDefRef.setval(circDefid.getval());
  circDefRef.setbad(false);
  circNom.setFeatureDefinitionId(&circDefRef);

  // circle location
  PointType circLoc;
  XmlDouble circLocx("90.0");
  XmlDouble circLocy("50.0");
  XmlDouble circLocz("-1.0");
  circLoc.push_back(&circLocx);
  circLoc.push_back(&circLocy);
  circLoc.push_back(&circLocz);
  circNom.setLocation(&circLoc);

  // circle normal
  UnitVectorType circNor;
  XmlDouble circNori("0.0");
  XmlDouble circNorj("0.0");
  XmlDouble circNork("1.0");
  circNor.push_back(&circNori);
  circNor.push_back(&circNorj);
  circNor.push_back(&circNork);
  circNom.setNormal(&circNor);

  // add to list
  featNomsList.push_back(&circNom);
  featNomsN.setval(1 + featNomsN.getval()); // increment n

  // make a circle feature item
  CircleFeatureItemType circItem;
  circItem.setprintElement(strdup("CircleFeatureItem"));
  QIFIdType circItemid(idString(qifid++)); // required id 40
  circItem.setid(&circItemid);

  // reference to definition
  QIFReferenceFullType circNomRef;
  circNomRef.setval(circNomid.getval());
  circNomRef.setbad(false);
  circItem.setFeatureNominalId(&circNomRef);

  // Give circle a name
  XmlToken circItemName("CIRC1");
  circItem.setFeatureName(&circItemName);

  // is this circle checked or set?
  CircleCheckedFeatureType circCheck;
  CircleMeasurementDeterminationType circMeasDet;
  // this feature is checked, rather than set
  CircleMeasurementDeterminationTypeVal circCheckVal;
  circCheckVal.Checked = &circCheck;
  CircleMeasurementDeterminationTypeChoicePair circCheckChoice
     (CircleMeasurementDeterminationTypeChoicePair::CheckedE, circCheckVal);
  circMeasDet.setCircleMeasurementDeterminationTypePair(&circCheckChoice);
  circItem.setDeterminationMode(&circMeasDet);

  // add to list
  featItemsList.push_back(&circItem);
  featItemsN.setval(1 + featItemsN.getval());  // increment n

  // make a circle feature actual
  CircleFeatureMeasurementType circMeas;
  circMeas.setprintElement(strdup("CircleFeatureMeasurement"));
  QIFIdType circMeasid(idString(qifid++)); // required id 41
  circMeas.setid(&circMeasid);

  // reference to item
  QIFReferenceFullType circItemRef;
  circItemRef.setval(circItemid.getval());
  circItemRef.setbad(false);
  circMeas.setFeatureItemId(&circItemRef);

  // circle location
  MeasuredPointType circMeasLoc;
  XmlDouble circMeasLocx("90.015");
  XmlDouble circMeasLocy("49.973");
  XmlDouble circMeasLocz("-1.0");
  circMeasLoc.push_back(&circMeasLocx);
  circMeasLoc.push_back(&circMeasLocy);
  circMeasLoc.push_back(&circMeasLocz);
  circMeas.setLocation(&circMeasLoc);

  // circle normal
  MeasuredUnitVectorType circMeasNor;
  XmlDouble circMeasNori("0.0");
  XmlDouble circMeasNorj("0.0");
  XmlDouble circMeasNork("1.0");
  circMeasNor.push_back(&circMeasNori);
  circMeasNor.push_back(&circMeasNorj);
  circMeasNor.push_back(&circMeasNork);
  circMeas.setNormal(&circMeasNor);

  // feature size
  MeasuredLinearValueType adiaSize("6.2");
  circMeas.setDiameter(&adiaSize);

  // add to list
  featMeasiList.push_back(&circMeas);
  featMeasiN.setval(1 + featMeasiN.getval()); // increment n

  // make a diameter characteristic definition
  DiameterCharacteristicDefinitionType diaDef;
  diaDef.setprintElement(strdup("DiameterCharacteristicDefinition"));
  QIFIdType diaDefid(idString(qifid++)); // required id 42
  diaDef.setid(&diaDefid);

  // tolerance (as opposed to limits and fits, or non-tolerance)
  LinearValueType highSize("6.5");
  LinearValueType lowSize("6.3");
  LinearToleranceType diaDiaTol;
  XmlBoolean diaDiaTolBool("true");
  diaDiaTol.setDefinedAsLimit(&diaDiaTolBool);

  LinearTolerance_1038_Type minDiaTol;
  minDiaTol.setMinValue(&lowSize);
  LinearTolerance_1031_Type maxMinDiaTol;
  maxMinDiaTol.setMaxValue(&highSize);
  maxMinDiaTol.setLinearTolerance_1038(&minDiaTol);
  LinearTolerance_1014_TypeVal diaDiaTolVal;
  diaDiaTolVal.LinearTolerance_1031 = &maxMinDiaTol; 
  LinearTolerance_1014_TypeChoicePair diaDiaTolChoice
    (LinearTolerance_1014_TypeChoicePair::LinearTolerance_1031E, diaDiaTolVal);
  LinearTolerance_1014_Type diaDiaTol1014;
  diaDiaTol1014.setLinearTolerance_1014_TypePair(&diaDiaTolChoice);
  diaDiaTol.setLinearTolerance_1014(&diaDiaTol1014);
  DiameterCharacteristicDefinitionTypeVal diaDiaTolSelVal;
  diaDiaTolSelVal.Tolerance = &diaDiaTol;
  DiameterCharacteristicDefinitionTypeChoicePair diaDiaTolSelChoice
    (DiameterCharacteristicDefinitionTypeChoicePair::ToleranceE,diaDiaTolSelVal);
  diaDef.setDiameterCharacteristicDefinitionTypeChoicePair(&diaDiaTolSelChoice);

  // add to list
  charDefsList.push_back(&diaDef);
  charDefsN.setval(1 + charDefsN.getval());  // increment n

  // make a diameter characteristic nominal
  DiameterCharacteristicNominalType diaNom;
  diaNom.setprintElement(strdup("DiameterCharacteristicNominal"));
  QIFIdType diaNomid(idString(qifid++)); // required id 43
  diaNom.setid(&diaNomid);

  // required reference to definition
  QIFReferenceType diaDefRef;
  diaDefRef.setval(diaDefid.getval());
  diaDefRef.setbad(false);
  diaNom.setCharacteristicDefinitionId(&diaDefRef);

  // nominal value
  //diaNom->TargetValue = diaSize;

  // add to list
  charNomsList.push_back(&diaNom);
  charNomsN.setval(1 + charNomsN.getval()); // increment n

  // make a diameter characteristic item
  DiameterCharacteristicItemType diaItem;
  diaItem.setprintElement(strdup("DiameterCharacteristicItem"));
  QIFIdType diaItemid(idString(qifid++)); // required id 44
  diaItem.setid(&diaItemid);

  // required reference to nominal
  QIFReferenceFullType diaNomRef;
  diaNomRef.setval(diaNomid.getval());
  diaNomRef.setbad(false);
  diaItem.setCharacteristicNominalId(&diaNomRef);
  
  // give tolerance a name
  XmlToken diaItemName("DIAM2");
  diaItem.setName(&diaItemName);

  // point tolerance at feature
  ArrayReferenceType diaItemFeatIds;
  QIFReferenceTypeLisd diaItemFeatIdsList;
  diaItemFeatIds.setId(&diaItemFeatIdsList);
  NaturalType diaItemFeatIdsN("1");
  diaItemFeatIds.setn(&diaItemFeatIdsN);
  diaItemFeatIdsList.push_back(&circItemRef);
  diaItem.setFeatureItemIds(&diaItemFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType diaItemDevIds;
  QIFReferenceTypeLisd diaItemDevIdsList;
  diaItemDevIds.setId(&diaItemDevIdsList);
  NaturalType diaItemDevIdsN("2");
  diaItemDevIds.setn(&diaItemDevIdsN);
  diaItemDevIdsList.push_back(&cmm1Ref);
  diaItemDevIdsList.push_back(&cmm2Ref);
  diaItem.setMeasurementDeviceIds(&diaItemDevIds);
  
  // add to list
  charItemsList.push_back(&diaItem);
  charItemsN.setval(1 + charItemsN.getval()); // increment n

  // make a diameter characteristic measurement
  DiameterCharacteristicMeasurementType diaMeas;
  diaMeas.setprintElement(strdup("DiameterCharacteristicMeasurement"));
  QIFIdType diaMeasid(idString(qifid++)); // required id 45
  diaMeas.setid(&diaMeasid);

  // required reference to item
  QIFReferenceFullType diaItemRef;
  diaItemRef.setval(diaItemid.getval());
  diaItemRef.setbad(false);
  diaMeas.setCharacteristicItemId(&diaItemRef);

  // required status
  CharacteristicStatusType diaStat;
  CharacteristicStatusTypeVal diaStatVal;
  CharacteristicStatusEnumType diaStatEnum("FAIL");
  diaStatVal.CharacteristicStatusEnum = &diaStatEnum;
  CharacteristicStatusTypeChoicePair diaStatChoice
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE,
     diaStatVal);
  diaStat.setCharacteristicStatusTypePair(&diaStatChoice);
  diaMeas.setStatus(&diaStat);

  // measurement value
  MeasuredLinearValueType diaMeasVal("6.2");
  diaMeas.setValue(&diaMeasVal);

  // point tolerance measurement at feature measurement
  QIFReferenceFullType circMeasRef;
  circMeasRef.setval(circMeasid.getval());
  circMeasRef.setbad(false);
  ArrayReferenceType diaMeasFeatIds;
  QIFReferenceTypeLisd diaMeasFeatIdsList;
  diaMeasFeatIds.setId(&diaMeasFeatIdsList);
  NaturalType diaMeasFeatIdsN("1");
  diaMeasFeatIds.setn(&diaMeasFeatIdsN);
  diaMeasFeatIdsList.push_back(&circMeasRef);
  diaMeas.setFeatureMeasurementIds(&diaMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType diaMeasDevIds;
  QIFReferenceTypeLisd diaMeasDevIdsList;
  diaMeasDevIds.setId(&diaMeasDevIdsList);
  NaturalType diaMeasDevIdsN("1");
  diaMeasDevIds.setn(&diaMeasDevIdsN);
  diaMeasDevIdsList.push_back(&cmm2Ref);
  diaMeas.setMeasurementDeviceIds(&diaMeasDevIds);

  // add to list
  charMeasiList.push_back(&diaMeas);
  charMeasiN.setval(1 + charMeasiN.getval()); // increment n

  // make a position characteristic definition
  PositionCharacteristicDefinitionType posDef;
  posDef.setprintElement(strdup("PositionCharacteristicDefinition"));
  QIFIdType posDefid(idString(qifid++)); // required id 46
  posDef.setid(&posDefid);

  // define the tolerance zone shape (diametrical)
  PositionZoneShapeType zoneShape;
  PositionZoneShapeTypeVal zoneShapeVal;
  PositionDiametricalZoneType zoneShapeValDia;
  zoneShapeVal.DiametricalZone = &zoneShapeValDia;
  PositionZoneShapeTypeChoicePair zoneShapeChoice
    (PositionZoneShapeTypeChoicePair::DiametricalZoneE, zoneShapeVal);
  zoneShape.setPositionZoneShapeTypePair(&zoneShapeChoice);
  posDef.setZoneShape(&zoneShape);

  // define the tolerance zone
  LinearValueType tolZone("0.75");
  posDef.setToleranceValue(&tolZone);
  
  // apply MMC material condition
  MaterialModifierEnumType posDefMat("MAXIMUM");
  posDef.setMaterialCondition(&posDefMat);

  // reference our DRF
  QIFReferenceFullType drfDefRef;
  drfDefRef.setval(drfABCid.getval());
  drfDefRef.setbad(false);
  posDef.setDatumReferenceFrameId(&drfDefRef);

  // add to list
  charDefsList.push_back(&posDef);
  charDefsN.setval(1 + charDefsN.getval()); // increment n 

  // make a position characteristic nominal
  PositionCharacteristicNominalType posNom;
  posNom.setprintElement(strdup("PositionCharacteristicNominal"));
  QIFIdType posNomid(idString(qifid++)); // required id 47
  posNom.setid(&posNomid);

  // required reference to definition
  QIFReferenceType posDefRef;
  posDefRef.setval(posDefid.getval());
  posDefRef.setbad(false);
  posNom.setCharacteristicDefinitionId(&posDefRef);

  // add to list
  charNomsList.push_back(&posNom);
  charNomsN.setval(1 + charNomsN.getval()); // increment n

  // make a position characteristic item
  PositionCharacteristicItemType posItem;
  posItem.setprintElement(strdup("PositionCharacteristicItem"));
  QIFIdType posItemid(idString(qifid++)); // required id 48
  posItem.setid(&posItemid);

  // required reference to nominal
  QIFReferenceFullType posNomRef;
  posNomRef.setval(posNomid.getval());
  posNomRef.setbad(false);
  posItem.setCharacteristicNominalId(&posNomRef);

  // give tolerance a name
  XmlToken posItemName("POSN2");
  posItem.setName(&posItemName);

  // point tolerance at feature
  ArrayReferenceType posItemFeatIds;
  QIFReferenceTypeLisd posItemFeatIdsList;
  posItemFeatIds.setId(&posItemFeatIdsList);
  NaturalType posItemFeatIdsN("1");
  posItemFeatIds.setn(&posItemFeatIdsN);
  posItemFeatIdsList.push_back(&circItemRef); // from diameter
  posItem.setFeatureItemIds(&posItemFeatIds);

  // add our measurement devices
  // (this is a list of devices that could measure the characteristic)
  ArrayReferenceType posItemDevIds;
  QIFReferenceTypeLisd posItemDevIdsList;
  posItemDevIds.setId(&posItemDevIdsList);
  NaturalType posItemDevIdsN("2");
  posItemDevIds.setn(&posItemDevIdsN);
  posItemDevIdsList.push_back(&cmm1Ref);
  posItemDevIdsList.push_back(&cmm2Ref);
  posItem.setMeasurementDeviceIds(&posItemDevIds);
  
  // add to list
  charItemsList.push_back(&posItem);
  charItemsN.setval(1 + charItemsN.getval()); // increment n

  // make a position characteristic measurement
  PositionCharacteristicMeasurementType posMeas;
  posMeas.setprintElement(strdup("PositionCharacteristicMeasurement"));
  QIFIdType posMeasid(idString(qifid++)); // required id 49
  posMeas.setid(&posMeasid);

  // required reference to item
  QIFReferenceFullType posItemRef;
  posItemRef.setval(posItemid.getval());
  posItemRef.setbad(false);
  posMeas.setCharacteristicItemId(&posItemRef);

  // required status
  CharacteristicStatusType posStat;
  CharacteristicStatusTypeVal posStatVal;
  CharacteristicStatusEnumType posStatEnum("PASS");
  posStatVal.CharacteristicStatusEnum = &posStatEnum;
  CharacteristicStatusTypeChoicePair posStatChoice
    (CharacteristicStatusTypeChoicePair::CharacteristicStatusEnumE, posStatVal);
  posStat.setCharacteristicStatusTypePair(&posStatChoice);
  posMeas.setStatus(&posStat);

  // measured value
  MeasuredLinearValueType posMeasVal("0.0618");
  posMeas.setValue(&posMeasVal);

  // point measurement tolerance at measurement feature
  ArrayReferenceType posMeasFeatIds;
  QIFReferenceTypeLisd posMeasFeatIdsList;
  posMeasFeatIds.setId(&posMeasFeatIdsList);
  NaturalType posMeasFeatIdsN("1");
  posMeasFeatIds.setn(&posMeasFeatIdsN);
  posMeasFeatIdsList.push_back(&circMeasRef);
  posMeas.setFeatureMeasurementIds(&posMeasFeatIds);

  // add our measurement device
  // (this is the device that actually measured the characteristic)
  ArrayReferenceType posMeasDevIds;
  QIFReferenceTypeLisd posMeasDevIdsList;
  posMeasDevIds.setId(&posMeasDevIdsList);
  NaturalType posMeasDevIdsN("1");
  posMeasDevIds.setn(&posMeasDevIdsN);
  posMeasDevIdsList.push_back(&cmm2Ref);
  posMeas.setMeasurementDeviceIds(&posMeasDevIds);

  // add to list
  charMeasiList.push_back(&posMeas);
  charMeasiN.setval(1 + charMeasiN.getval()); // increment n
// endregion circle back to ABC

// region QIF document
  // add some application identifying information
  ApplicationType app;
  XmlString appName("QIF_CPlusPlus open source QIF application");
  app.setName(&appName);
  XmlString orgName("Digital Metrology Standards Consortium (DMSC)");
  app.setOrganization(&orgName);
  QIFDocumentHeaderType header;
  header.setApplication(&app);
  qifdoc.setHeader(&header);

  // QIF units are SI units unless otherwise specified
  LinearUnitType linearUnit;
  XmlToken linearUnitSIName("meter");
  linearUnit.setSIUnitName(&linearUnitSIName);
  XmlToken linearUnitName("mm");
  linearUnit.setUnitName(&linearUnitName);
  UnitConversionType unitConversion;
  PositiveDecimalType factor("0.001");
  unitConversion.setFactor(&factor);
  linearUnit.setUnitConversion(&unitConversion);
  PrimaryUnitsType primaryUnits;
  primaryUnits.setLinearUnit(&linearUnit);
  FileUnitsType fileUnits;
  fileUnits.setPrimaryUnits(&primaryUnits);
  qifdoc.setFileUnits(&fileUnits);

  // add our measurement devices
  MeasurementResourcesType measResources;
  measResources.setMeasurementDevices(&measDevices);
  qifdoc.setMeasurementResources(&measResources);

  // add the datum definitions list
  qifdoc.setDatumDefinitions(&datumDefs);

  // add the datum reference frame list
  qifdoc.setDatumReferenceFrames(&drfDefs);
  XmlNMTOKEN qifVersion("3.0.0");
  qifdoc.setversionQIF(&qifVersion);

  // Create the features aspects element
  FeatureAspectsListsType featAspects;
  
  // Feature Definitions
  featAspects.setFeatureDefinitions(&featDefs);

  // Feature Nominals
  featAspects.setFeatureNominals(&featNoms);

  // Feature Items
  featAspects.setFeatureItems(&featItems);

  // add feature aspects to document
  qifdoc.setFeatures(&featAspects);

  // Create the characteristics aspects element
  CharacteristicAspectsListsType charAspects;

  // required GD&T standard
  // standards organization
  StandardsOrganizationType organization;
  StandardsOrganizationTypeVal organizationVal;
  StandardsOrganizationEnumType orgEnum("ASME");
  organizationVal.StandardsOrganizationEnum = &orgEnum;
  StandardsOrganizationTypeChoicePair organizationChoice
    (StandardsOrganizationTypeChoicePair::StandardsOrganizationEnumE,
     organizationVal);
  organization.setStandardsOrganizationTypePair(&organizationChoice);

  // standard
  StandardType formalStandard;
  formalStandard.setOrganization(&organization);
  XmlToken orgDesig("Y14.5");
  formalStandard.setDesignator(&orgDesig);
  XmlString orgYear("2009");
  formalStandard.setYear(&orgYear);
  QIFIdType formalStandardid(idString(qifid++)); // required id 50
  formalStandard.setid(&formalStandardid);

  // add standards to document
  StandardsType standards;
  StandardTypeLisd standardsList;
  standards.setStandard(&standardsList);
  standardsList.push_back(&formalStandard);
  NaturalType standardsN("1");
  standards.setn(&standardsN);
  qifdoc.setStandardsDefinitions(&standards);

  // point characteristics at standard
  QIFReferenceType standardRef;
  standardRef.setval(formalStandardid.getval());
  standardRef.setbad(false);
  charAspects.setFormalStandardId(&standardRef);

  // Characteristic Definitions
  charAspects.setCharacteristicDefinitions(&charDefs);

  // Characteristic Nominals
  charAspects.setCharacteristicNominals(&charNoms);

  // Characteristic Items
  charAspects.setCharacteristicItems(&charItems);

  // add characteristic aspects to document
  qifdoc.setCharacteristics(&charAspects);
  
  // create the measurement results
  MeasurementResultsType measResults;
  QIFIdType measResultsid(idString(qifid++));  // required id 51
  measResults.setid(&measResultsid);

  // overall inspection status
  InspectionStatusType overallStat;
  InspectionStatusTypeVal overallStatVal;
  InspectionStatusEnumType overallStatEnum("FAIL");
  overallStatVal.InspectionStatusEnum = &overallStatEnum;
  InspectionStatusTypeChoicePair overallStatChoice
    (InspectionStatusTypeChoicePair::InspectionStatusEnumE, overallStatVal);
  overallStat.setInspectionStatusTypePair(&overallStatChoice);
  measResults.setInspectionStatus(&overallStat);

  // measured features
  measResults.setMeasuredFeatures(&featMeasi);

  // measured characteristics
  MeasuredCharacteristicsType measuredCharacteristics;
  measuredCharacteristics.setCharacteristicMeasurements(&charMeasi);
  measResults.setMeasuredCharacteristics(&measuredCharacteristics);
  
  // add measured results to list of measured results
  MeasurementResultsSetType measurementResultsSet;
  MeasurementResultsTypeLisd measurementResultsSetList;
  measurementResultsSet.setMeasurementResults(&measurementResultsSetList);
  measurementResultsSetList.push_back(&measResults);
  NaturalType measurementResultsSetN("1");
  measurementResultsSet.setn(&measurementResultsSetN);
  ResultsType measurementsResults;
  measurementsResults.setMeasurementResultsSet(&measurementResultsSet);
  // add measured results to document
  qifdoc.setResults(&measurementsResults);


  // add a (trivial) plan
  MeasureEvaluateAllActionType measAll;
  measAll.setprintElement(strdup("MeasureEvaluateAll"));
  UnnumberedPlanElementsType steps;
  PlanElementBaseTypeLisd stepsList;
  steps.setPlanElement(&stepsList);
  stepsList.push_back(&measAll);
  NaturalType stepsN("1");
  steps.setn(&stepsN);
  UnorderedActionGroupType planRoot;
  planRoot.setSteps(&steps);
  planRoot.setprintElement(strdup("UnorderedPlanRoot"));
  PlanType measurementPlan;
  measurementPlan.setPlanRoot(&planRoot);
  qifdoc.setPlan(&measurementPlan);

  // set idMax
  XmlUnsignedInt idMax(idString(qifid - 1));
  qifdoc.setidMax(&idMax);

  // make a new QIFDocumentFile
  QIFDocumentFile qifdocFile;
  XmlVersion xmlVersion("utf-8", "");
  XmlHeaderForQIFDocument qifdocHeader;
  XmlString noPrefix("http://qifstandards.org/xsd/qif3");
  qifdocHeader.setXmlnsNoPrefix(&noPrefix);
  // the xmlns:xsi line is printed by the schemaLocation printer
  SchemaLocation xsdLocation("xsi", "http://qifstandards.org/xsd/qif3"
			     " ../schema/QIFDocument.xsd", true);
  qifdocHeader.setlocation(&xsdLocation);
  qifdocFile.setversion(&xmlVersion);
  qifdocFile.setheader(&qifdocHeader);
  qifdocFile.setQIFDocument(&qifdoc);

  FILE * outFile;
  outFile = fopen("testCpp30.qif", "w");
  qifdocFile.printSelf(outFile);
  fclose(outFile);
}
