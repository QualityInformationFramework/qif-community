/*********************************************************************/

#ifndef QIFDOCUMENT_HH
#define QIFDOCUMENT_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "QIFPlanClasses.hh"
#include "QIFResultsClasses.hh"
#include "QIFStatisticsClasses.hh"
#include "QIFRulesClasses.hh"
#include "QIFProductClasses.hh"
#include "QIFMeasurementResourcesClasses.hh"

/*********************************************************************/

class QIFDocumentFile;
class ExternalQIFDocumentReferenceType;
class ExternalQIFDocumentReferenceTypeLisd;
class ExternalQIFReferencesType;
class QIFDocumentHeaderType;
class QIFDocumentType;
class XmlHeaderForQIFDocument;

/*********************************************************************/
/*********************************************************************/

class QIFDocumentFile :
  public XmlTypeBase
{
public:
  QIFDocumentFile();
  QIFDocumentFile(
    XmlVersion * versionIn,
    XmlHeaderForQIFDocument * headerIn,
    QIFDocumentType * QIFDocumentIn);
  ~QIFDocumentFile();
  void printSelf(FILE * outFile);
  XmlVersion * getversion();
  void setversion(XmlVersion * versionIn);
  XmlHeaderForQIFDocument * getheader();
  void setheader(XmlHeaderForQIFDocument * headerIn);
  QIFDocumentType * getQIFDocument();
  void setQIFDocument(QIFDocumentType * QIFDocumentIn);

protected:
  XmlVersion * version;
  XmlHeaderForQIFDocument * header;
  QIFDocumentType * QIFDocument;
};

/*********************************************************************/

class ExternalQIFDocumentReferenceType :
  public XmlTypeBase
{
public:
  ExternalQIFDocumentReferenceType();
  ExternalQIFDocumentReferenceType(
    QPIdReferenceType * QPIdIn,
    XmlAnyURI * URIIn,
    XmlString * DescriptionIn);
  ExternalQIFDocumentReferenceType(
    QIFIdType * idIn,
    QPIdReferenceType * QPIdIn,
    XmlAnyURI * URIIn,
    XmlString * DescriptionIn);
  ~ExternalQIFDocumentReferenceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  QPIdReferenceType * getQPId();
  void setQPId(QPIdReferenceType * QPIdIn);
  XmlAnyURI * getURI();
  void setURI(XmlAnyURI * URIIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  QIFIdType * id;
  QPIdReferenceType * QPId;
  XmlAnyURI * URI;
  XmlString * Description;
};

/*********************************************************************/

class ExternalQIFDocumentReferenceTypeLisd :
  public std::list<ExternalQIFDocumentReferenceType *>,
  public XmlSchemaInstanceBase
{
public:
  ExternalQIFDocumentReferenceTypeLisd();
  ExternalQIFDocumentReferenceTypeLisd(
    ExternalQIFDocumentReferenceType * aExternalQIFDocumentReferenceType);
  ~ExternalQIFDocumentReferenceTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class ExternalQIFReferencesType :
  public XmlTypeBase
{
public:
  ExternalQIFReferencesType();
  ExternalQIFReferencesType(
    ExternalQIFDocumentReferenceTypeLisd * ExternalQIFDocumentIn);
  ExternalQIFReferencesType(
    NaturalType * nIn,
    ExternalQIFDocumentReferenceTypeLisd * ExternalQIFDocumentIn);
  ~ExternalQIFReferencesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ExternalQIFDocumentReferenceTypeLisd * getExternalQIFDocument();
  void setExternalQIFDocument(ExternalQIFDocumentReferenceTypeLisd *);

protected:
  NaturalType * n;
  ExternalQIFDocumentReferenceTypeLisd * ExternalQIFDocument;
};

/*********************************************************************/

class QIFDocumentHeaderType :
  public XmlTypeBase
{
public:
  QIFDocumentHeaderType();
  QIFDocumentHeaderType(
    ApplicationType * ApplicationIn,
    AuthorType * AuthorIn,
    ApplicationType * ApplicationSourceIn,
    XmlString * DescriptionIn,
    XmlString * ScopeIn);
  ~QIFDocumentHeaderType();
  void printSelf(FILE * outFile);

  ApplicationType * getApplication();
  void setApplication(ApplicationType * ApplicationIn);
  AuthorType * getAuthor();
  void setAuthor(AuthorType * AuthorIn);
  ApplicationType * getApplicationSource();
  void setApplicationSource(ApplicationType * ApplicationSourceIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlString * getScope();
  void setScope(XmlString * ScopeIn);

protected:
  ApplicationType * Application;
  AuthorType * Author;
  ApplicationType * ApplicationSource;
  XmlString * Description;
  XmlString * Scope;
};

/*********************************************************************/

class QIFDocumentType :
  public XmlTypeBase
{
public:
  QIFDocumentType();
  QIFDocumentType(
    QPIdType * QPIdIn,
    AttributesType * AttributesIn,
    VersionHistoryType * VersionHistoryIn,
    VersionBaseType * VersionIn,
    QIFDocumentHeaderType * HeaderIn,
    ValidationCountsType * ValidationCountsIn,
    ProductDataQualityType * ProductDataQualityIn,
    ExternalQIFReferencesType * ExternalQIFReferencesIn,
    StandardsType * StandardsDefinitionsIn,
    SoftwaresType * SoftwareDefinitionsIn,
    AlgorithmsType * AlgorithmDefinitionsIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    FileUnitsType * FileUnitsIn,
    DatumDefinitionsType * DatumDefinitionsIn,
    DatumTargetDefinitionsType * DatumTargetDefinitionsIn,
    TransformListType * TransformsIn,
    CoordinateSystemsType * CoordinateSystemsIn,
    DatumReferenceFramesType * DatumReferenceFramesIn,
    MeasurementResourcesType * MeasurementResourcesIn,
    ThreadSpecificationsType * ThreadSpecificationsIn,
    ProductType * ProductIn,
    FeatureAspectsListsType * FeaturesIn,
    FeatureZoneListType * FeatureZonesIn,
    CharacteristicAspectsListsType * CharacteristicsIn,
    PlanType * PlanIn,
    ResultsType * ResultsIn,
    StatisticsType * StatisticsIn,
    ManufacturingProcessTraceabilitiesType * ManufacturingProcessTraceabilitiesIn,
    QIFRulesType * RulesIn,
    XmlString * UserDataXMLIn,
    XmlString * SignatureIn);
  QIFDocumentType(
    XmlUnsignedInt * idMaxIn,
    XmlNMTOKEN * versionQIFIn,
    QPIdType * QPIdIn,
    AttributesType * AttributesIn,
    VersionHistoryType * VersionHistoryIn,
    VersionBaseType * VersionIn,
    QIFDocumentHeaderType * HeaderIn,
    ValidationCountsType * ValidationCountsIn,
    ProductDataQualityType * ProductDataQualityIn,
    ExternalQIFReferencesType * ExternalQIFReferencesIn,
    StandardsType * StandardsDefinitionsIn,
    SoftwaresType * SoftwareDefinitionsIn,
    AlgorithmsType * AlgorithmDefinitionsIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    FileUnitsType * FileUnitsIn,
    DatumDefinitionsType * DatumDefinitionsIn,
    DatumTargetDefinitionsType * DatumTargetDefinitionsIn,
    TransformListType * TransformsIn,
    CoordinateSystemsType * CoordinateSystemsIn,
    DatumReferenceFramesType * DatumReferenceFramesIn,
    MeasurementResourcesType * MeasurementResourcesIn,
    ThreadSpecificationsType * ThreadSpecificationsIn,
    ProductType * ProductIn,
    FeatureAspectsListsType * FeaturesIn,
    FeatureZoneListType * FeatureZonesIn,
    CharacteristicAspectsListsType * CharacteristicsIn,
    PlanType * PlanIn,
    ResultsType * ResultsIn,
    StatisticsType * StatisticsIn,
    ManufacturingProcessTraceabilitiesType * ManufacturingProcessTraceabilitiesIn,
    QIFRulesType * RulesIn,
    XmlString * UserDataXMLIn,
    XmlString * SignatureIn);
  ~QIFDocumentType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlUnsignedInt * getidMax();
  void setidMax(XmlUnsignedInt * idMaxIn);
  XmlNMTOKEN * getversionQIF();
  void setversionQIF(XmlNMTOKEN * versionQIFIn);

  QPIdType * getQPId();
  void setQPId(QPIdType * QPIdIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  VersionHistoryType * getVersionHistory();
  void setVersionHistory(VersionHistoryType * VersionHistoryIn);
  VersionBaseType * getVersion();
  void setVersion(VersionBaseType * VersionIn);
  QIFDocumentHeaderType * getHeader();
  void setHeader(QIFDocumentHeaderType * HeaderIn);
  ValidationCountsType * getValidationCounts();
  void setValidationCounts(ValidationCountsType * ValidationCountsIn);
  ProductDataQualityType * getProductDataQuality();
  void setProductDataQuality(ProductDataQualityType * ProductDataQualityIn);
  ExternalQIFReferencesType * getExternalQIFReferences();
  void setExternalQIFReferences(ExternalQIFReferencesType * ExternalQIFReferencesIn);
  StandardsType * getStandardsDefinitions();
  void setStandardsDefinitions(StandardsType * StandardsDefinitionsIn);
  SoftwaresType * getSoftwareDefinitions();
  void setSoftwareDefinitions(SoftwaresType * SoftwareDefinitionsIn);
  AlgorithmsType * getAlgorithmDefinitions();
  void setAlgorithmDefinitions(AlgorithmsType * AlgorithmDefinitionsIn);
  PreInspectionTraceabilityType * getPreInspectionTraceability();
  void setPreInspectionTraceability(PreInspectionTraceabilityType * PreInspectionTraceabilityIn);
  FileUnitsType * getFileUnits();
  void setFileUnits(FileUnitsType * FileUnitsIn);
  DatumDefinitionsType * getDatumDefinitions();
  void setDatumDefinitions(DatumDefinitionsType * DatumDefinitionsIn);
  DatumTargetDefinitionsType * getDatumTargetDefinitions();
  void setDatumTargetDefinitions(DatumTargetDefinitionsType * DatumTargetDefinitionsIn);
  TransformListType * getTransforms();
  void setTransforms(TransformListType * TransformsIn);
  CoordinateSystemsType * getCoordinateSystems();
  void setCoordinateSystems(CoordinateSystemsType * CoordinateSystemsIn);
  DatumReferenceFramesType * getDatumReferenceFrames();
  void setDatumReferenceFrames(DatumReferenceFramesType * DatumReferenceFramesIn);
  MeasurementResourcesType * getMeasurementResources();
  void setMeasurementResources(MeasurementResourcesType * MeasurementResourcesIn);
  ThreadSpecificationsType * getThreadSpecifications();
  void setThreadSpecifications(ThreadSpecificationsType * ThreadSpecificationsIn);
  ProductType * getProduct();
  void setProduct(ProductType * ProductIn);
  FeatureAspectsListsType * getFeatures();
  void setFeatures(FeatureAspectsListsType * FeaturesIn);
  FeatureZoneListType * getFeatureZones();
  void setFeatureZones(FeatureZoneListType * FeatureZonesIn);
  CharacteristicAspectsListsType * getCharacteristics();
  void setCharacteristics(CharacteristicAspectsListsType * CharacteristicsIn);
  PlanType * getPlan();
  void setPlan(PlanType * PlanIn);
  ResultsType * getResults();
  void setResults(ResultsType * ResultsIn);
  StatisticsType * getStatistics();
  void setStatistics(StatisticsType * StatisticsIn);
  ManufacturingProcessTraceabilitiesType * getManufacturingProcessTraceabilities();
  void setManufacturingProcessTraceabilities(ManufacturingProcessTraceabilitiesType * ManufacturingProcessTraceabilitiesIn);
  QIFRulesType * getRules();
  void setRules(QIFRulesType * RulesIn);
  XmlString * getUserDataXML();
  void setUserDataXML(XmlString * UserDataXMLIn);
  XmlString * getSignature();
  void setSignature(XmlString * SignatureIn);

protected:
  XmlUnsignedInt * idMax;
  XmlNMTOKEN * versionQIF;
  QPIdType * QPId;
  AttributesType * Attributes;
  VersionHistoryType * VersionHistory;
  VersionBaseType * Version;
  QIFDocumentHeaderType * Header;
  ValidationCountsType * ValidationCounts;
  ProductDataQualityType * ProductDataQuality;
  ExternalQIFReferencesType * ExternalQIFReferences;
  StandardsType * StandardsDefinitions;
  SoftwaresType * SoftwareDefinitions;
  AlgorithmsType * AlgorithmDefinitions;
  PreInspectionTraceabilityType * PreInspectionTraceability;
  FileUnitsType * FileUnits;
  DatumDefinitionsType * DatumDefinitions;
  DatumTargetDefinitionsType * DatumTargetDefinitions;
  TransformListType * Transforms;
  CoordinateSystemsType * CoordinateSystems;
  DatumReferenceFramesType * DatumReferenceFrames;
  MeasurementResourcesType * MeasurementResources;
  ThreadSpecificationsType * ThreadSpecifications;
  ProductType * Product;
  FeatureAspectsListsType * Features;
  FeatureZoneListType * FeatureZones;
  CharacteristicAspectsListsType * Characteristics;
  PlanType * Plan;
  ResultsType * Results;
  StatisticsType * Statistics;
  ManufacturingProcessTraceabilitiesType * ManufacturingProcessTraceabilities;
  QIFRulesType * Rules;
  XmlString * UserDataXML;
  XmlString * Signature;
};

/*********************************************************************/

class XmlHeaderForQIFDocument :
  public XmlSchemaInstanceBase
{
public:
  XmlHeaderForQIFDocument();
  XmlHeaderForQIFDocument(
    XmlString * XmlnsNoPrefixIn,
    XmlStringLisd * XmlnsiWithPrefixIn,
    SchemaLocation * locationIn);
  ~XmlHeaderForQIFDocument();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  XmlString * getXmlnsNoPrefix();
  void setXmlnsNoPrefix(XmlString * XmlnsNoPrefixIn);
  XmlStringLisd * getXmlnsiWithPrefix();
  void setXmlnsiWithPrefix(XmlStringLisd * XmlnsiWithPrefixIn);
  SchemaLocation * getlocation();
  void setlocation(SchemaLocation * locationIn);

  XmlUnsignedInt * getidMax();
  void setidMax(XmlUnsignedInt * idMaxIn);
  XmlNMTOKEN * getversionQIF();
  void setversionQIF(XmlNMTOKEN * versionQIFIn);

protected:
  XmlString * XmlnsNoPrefix;
  XmlStringLisd * XmlnsiWithPrefix;
  SchemaLocation * location;
  XmlUnsignedInt * idMax;
  XmlNMTOKEN * versionQIF;
};

/*********************************************************************/

#endif // QIFDOCUMENT_HH
