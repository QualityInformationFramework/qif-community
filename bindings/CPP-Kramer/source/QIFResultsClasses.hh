/* ***************************************************************** */

#ifndef QIFRESULTS_HH
#define QIFRESULTS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "TraceabilityClasses.hh"
#include "CharacteristicsClasses.hh"
#include "FeaturesClasses.hh"

/* ***************************************************************** */

class ActualComponentSetType;
class ActualComponentSetTypeLisd;
class ActualComponentSetsType;
class ActualComponentType;
class ActualComponentTypeLisd;
class MeasurementResultsSetType;
class MeasurementResultsType;
class MeasurementResultsTypeLisd;
class ResultsType;

/* ***************************************************************** */
/* ***************************************************************** */

class ActualComponentSetType :
  public XmlTypeBase
{
public:
  ActualComponentSetType();
  ActualComponentSetType(
    ActualComponentTypeLisd * ActualComponentIn);
  ActualComponentSetType(
    NaturalType * nIn,
    ActualComponentTypeLisd * ActualComponentIn);
  ~ActualComponentSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ActualComponentTypeLisd * getActualComponent();
  void setActualComponent(ActualComponentTypeLisd *);

protected:
  NaturalType * n;
  ActualComponentTypeLisd * ActualComponent;
};

/* ***************************************************************** */

class ActualComponentSetTypeLisd :
  public std::list<ActualComponentSetType *>,
  public XmlSchemaInstanceBase
{
public:
  ActualComponentSetTypeLisd();
  ActualComponentSetTypeLisd(
    ActualComponentSetType * aActualComponentSetType);
  ~ActualComponentSetTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ActualComponentSetsType :
  public XmlTypeBase
{
public:
  ActualComponentSetsType();
  ActualComponentSetsType(
    ActualComponentSetTypeLisd * ActualComponentSetIn);
  ActualComponentSetsType(
    NaturalType * nIn,
    ActualComponentSetTypeLisd * ActualComponentSetIn);
  ~ActualComponentSetsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ActualComponentSetTypeLisd * getActualComponentSet();
  void setActualComponentSet(ActualComponentSetTypeLisd *);

protected:
  NaturalType * n;
  ActualComponentSetTypeLisd * ActualComponentSet;
};

/* ***************************************************************** */

class ActualComponentType :
  public XmlTypeBase
{
public:
  ActualComponentType();
  ActualComponentType(
    AttributesType * AttributesIn,
    XmlString * SerialNumberIn,
    XmlString * AdditionalChangesIn,
    InspectionStatusType * StatusIn,
    ActualProductTraceabilityType * TraceabilityIn,
    QIFReferenceType * AsmPathIdIn);
  ActualComponentType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * SerialNumberIn,
    XmlString * AdditionalChangesIn,
    InspectionStatusType * StatusIn,
    ActualProductTraceabilityType * TraceabilityIn,
    QIFReferenceType * AsmPathIdIn);
  ~ActualComponentType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlString * getSerialNumber();
  void setSerialNumber(XmlString * SerialNumberIn);
  XmlString * getAdditionalChanges();
  void setAdditionalChanges(XmlString * AdditionalChangesIn);
  InspectionStatusType * getStatus();
  void setStatus(InspectionStatusType * StatusIn);
  ActualProductTraceabilityType * getTraceability();
  void setTraceability(ActualProductTraceabilityType * TraceabilityIn);
  QIFReferenceType * getAsmPathId();
  void setAsmPathId(QIFReferenceType * AsmPathIdIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlString * SerialNumber;
  XmlString * AdditionalChanges;
  InspectionStatusType * Status;
  ActualProductTraceabilityType * Traceability;
  QIFReferenceType * AsmPathId;
};

/* ***************************************************************** */

class ActualComponentTypeLisd :
  public std::list<ActualComponentType *>,
  public XmlSchemaInstanceBase
{
public:
  ActualComponentTypeLisd();
  ActualComponentTypeLisd(
    ActualComponentType * aActualComponentType);
  ~ActualComponentTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MeasurementResultsSetType :
  public XmlTypeBase
{
public:
  MeasurementResultsSetType();
  MeasurementResultsSetType(
    MeasurementResultsTypeLisd * MeasurementResultsIn);
  MeasurementResultsSetType(
    NaturalType * nIn,
    MeasurementResultsTypeLisd * MeasurementResultsIn);
  ~MeasurementResultsSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeasurementResultsTypeLisd * getMeasurementResults();
  void setMeasurementResults(MeasurementResultsTypeLisd *);

protected:
  NaturalType * n;
  MeasurementResultsTypeLisd * MeasurementResults;
};

/* ***************************************************************** */

class MeasurementResultsType :
  public XmlTypeBase
{
public:
  MeasurementResultsType();
  MeasurementResultsType(
    AttributesType * AttributesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    QPIdType * ThisResultsInstanceQPIdIn,
    ExternalFileReferencesType * ExternalFileReferencesIn,
    FeatureMeasurementsType * MeasuredFeaturesIn,
    MeasuredPointSetsType * MeasuredPointSetsIn,
    MeasuredCharacteristicsType * MeasuredCharacteristicsIn,
    TransformListType * ActualTransformsIn,
    CoordinateSystemActualTransformAssociationsType * CoordinateSystemActualTransformAssociationsIn,
    InspectionStatusType * InspectionStatusIn,
    ArrayReferenceType * ActualComponentIdsIn);
  MeasurementResultsType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    QPIdType * ThisResultsInstanceQPIdIn,
    ExternalFileReferencesType * ExternalFileReferencesIn,
    FeatureMeasurementsType * MeasuredFeaturesIn,
    MeasuredPointSetsType * MeasuredPointSetsIn,
    MeasuredCharacteristicsType * MeasuredCharacteristicsIn,
    TransformListType * ActualTransformsIn,
    CoordinateSystemActualTransformAssociationsType * CoordinateSystemActualTransformAssociationsIn,
    InspectionStatusType * InspectionStatusIn,
    ArrayReferenceType * ActualComponentIdsIn);
  ~MeasurementResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  InspectionTraceabilityType * getInspectionTraceability();
  void setInspectionTraceability(InspectionTraceabilityType * InspectionTraceabilityIn);
  QPIdType * getThisResultsInstanceQPId();
  void setThisResultsInstanceQPId(QPIdType * ThisResultsInstanceQPIdIn);
  ExternalFileReferencesType * getExternalFileReferences();
  void setExternalFileReferences(ExternalFileReferencesType * ExternalFileReferencesIn);
  FeatureMeasurementsType * getMeasuredFeatures();
  void setMeasuredFeatures(FeatureMeasurementsType * MeasuredFeaturesIn);
  MeasuredPointSetsType * getMeasuredPointSets();
  void setMeasuredPointSets(MeasuredPointSetsType * MeasuredPointSetsIn);
  MeasuredCharacteristicsType * getMeasuredCharacteristics();
  void setMeasuredCharacteristics(MeasuredCharacteristicsType * MeasuredCharacteristicsIn);
  TransformListType * getActualTransforms();
  void setActualTransforms(TransformListType * ActualTransformsIn);
  CoordinateSystemActualTransformAssociationsType * getCoordinateSystemActualTransformAssociations();
  void setCoordinateSystemActualTransformAssociations(CoordinateSystemActualTransformAssociationsType * CoordinateSystemActualTransformAssociationsIn);
  InspectionStatusType * getInspectionStatus();
  void setInspectionStatus(InspectionStatusType * InspectionStatusIn);
  ArrayReferenceType * getActualComponentIds();
  void setActualComponentIds(ArrayReferenceType * ActualComponentIdsIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  InspectionTraceabilityType * InspectionTraceability;
  QPIdType * ThisResultsInstanceQPId;
  ExternalFileReferencesType * ExternalFileReferences;
  FeatureMeasurementsType * MeasuredFeatures;
  MeasuredPointSetsType * MeasuredPointSets;
  MeasuredCharacteristicsType * MeasuredCharacteristics;
  TransformListType * ActualTransforms;
  CoordinateSystemActualTransformAssociationsType * CoordinateSystemActualTransformAssociations;
  InspectionStatusType * InspectionStatus;
  ArrayReferenceType * ActualComponentIds;
};

/* ***************************************************************** */

class MeasurementResultsTypeLisd :
  public std::list<MeasurementResultsType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasurementResultsTypeLisd();
  MeasurementResultsTypeLisd(
    MeasurementResultsType * aMeasurementResultsType);
  ~MeasurementResultsTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ResultsType :
  public XmlTypeBase
{
public:
  ResultsType();
  ResultsType(
    VersionType * VersionIn,
    MeasurementResultsSetType * MeasurementResultsSetIn,
    ActualComponentSetsType * ActualComponentSetsIn,
    InspectionTraceabilityType * InspectionTraceabilityIn);
  ~ResultsType();
  void printSelf(FILE * outFile);

  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);
  MeasurementResultsSetType * getMeasurementResultsSet();
  void setMeasurementResultsSet(MeasurementResultsSetType * MeasurementResultsSetIn);
  ActualComponentSetsType * getActualComponentSets();
  void setActualComponentSets(ActualComponentSetsType * ActualComponentSetsIn);
  InspectionTraceabilityType * getInspectionTraceability();
  void setInspectionTraceability(InspectionTraceabilityType * InspectionTraceabilityIn);

protected:
  VersionType * Version;
  MeasurementResultsSetType * MeasurementResultsSet;
  ActualComponentSetsType * ActualComponentSets;
  InspectionTraceabilityType * InspectionTraceability;
};

/* ***************************************************************** */

#endif // QIFRESULTS_HH
