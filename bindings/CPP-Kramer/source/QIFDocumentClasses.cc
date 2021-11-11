/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "QIFDocumentClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class QIFDocumentFile

*/

QIFDocumentFile::QIFDocumentFile()
{
  version = 0;
  header = 0;
  QIFDocument = 0;
}

QIFDocumentFile::QIFDocumentFile(
  XmlVersion * versionIn,
  XmlHeaderForQIFDocument * headerIn,
  QIFDocumentType * QIFDocumentIn)
{
  version = versionIn;
  header = headerIn;
  QIFDocument = QIFDocumentIn;
}

QIFDocumentFile::~QIFDocumentFile()
{
  #ifndef NODESTRUCT
  delete version;
  delete header;
  delete QIFDocument;
  #endif
}

void QIFDocumentFile::printSelf(FILE * outFile)
{
  version->printSelf(outFile);
  fprintf(outFile, "<QIFDocument\n");
  header->printSelf(outFile);
  QIFDocument->printSelf(outFile);
  fprintf(outFile, "</QIFDocument>\n");
}

XmlVersion * QIFDocumentFile::getversion()
{return version;}

void QIFDocumentFile::setversion(XmlVersion * versionIn)
{version = versionIn;}

XmlHeaderForQIFDocument * QIFDocumentFile::getheader()
{return header;}

void QIFDocumentFile::setheader(XmlHeaderForQIFDocument * headerIn)
{header = headerIn;}

QIFDocumentType * QIFDocumentFile::getQIFDocument()
{return QIFDocument;}

void QIFDocumentFile::setQIFDocument(QIFDocumentType * QIFDocumentIn )
{QIFDocument = QIFDocumentIn;}

/* ***************************************************************** */

/* class ExternalQIFDocumentReferenceType

*/

ExternalQIFDocumentReferenceType::ExternalQIFDocumentReferenceType()
{
  id = 0;
  QPId = 0;
  URI = 0;
  Description = 0;
}

ExternalQIFDocumentReferenceType::ExternalQIFDocumentReferenceType(
 QPIdReferenceType * QPIdIn,
 XmlAnyURI * URIIn,
 XmlString * DescriptionIn)
{
  id = 0;
  QPId = QPIdIn;
  URI = URIIn;
  Description = DescriptionIn;
}

ExternalQIFDocumentReferenceType::ExternalQIFDocumentReferenceType(
 QIFIdType * idIn,
 QPIdReferenceType * QPIdIn,
 XmlAnyURI * URIIn,
 XmlString * DescriptionIn)
{
  id = idIn;
  QPId = QPIdIn;
  URI = URIIn;
  Description = DescriptionIn;
}

ExternalQIFDocumentReferenceType::~ExternalQIFDocumentReferenceType()
{
  #ifndef NODESTRUCT
  delete id;
  delete QPId;
  delete URI;
  delete Description;
  #endif
}

void ExternalQIFDocumentReferenceType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (id)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "id=\"");
      id->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<QPId");
  QPId->printSelf(outFile);
  fprintf(outFile, "</QPId>\n");
  if (URI)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<URI");
      URI->printSelf(outFile);
      fprintf(outFile, "</URI>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ExternalQIFDocumentReferenceType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in ExternalQIFDocumentReferenceType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ExternalQIFDocumentReferenceType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ExternalQIFDocumentReferenceType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ExternalQIFDocumentReferenceType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

QIFIdType * ExternalQIFDocumentReferenceType::getid()
{return id;}

void ExternalQIFDocumentReferenceType::setid(QIFIdType * idIn)
{id = idIn;}

QPIdReferenceType * ExternalQIFDocumentReferenceType::getQPId()
{return QPId;}

void ExternalQIFDocumentReferenceType::setQPId(QPIdReferenceType * QPIdIn)
{QPId = QPIdIn;}

XmlAnyURI * ExternalQIFDocumentReferenceType::getURI()
{return URI;}

void ExternalQIFDocumentReferenceType::setURI(XmlAnyURI * URIIn)
{URI = URIIn;}

XmlString * ExternalQIFDocumentReferenceType::getDescription()
{return Description;}

void ExternalQIFDocumentReferenceType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

/* ***************************************************************** */

/* class ExternalQIFDocumentReferenceTypeLisd

*/

ExternalQIFDocumentReferenceTypeLisd::ExternalQIFDocumentReferenceTypeLisd() {}

ExternalQIFDocumentReferenceTypeLisd::ExternalQIFDocumentReferenceTypeLisd(ExternalQIFDocumentReferenceType * aExternalQIFDocumentReferenceType)
{
  push_back(aExternalQIFDocumentReferenceType);
}

ExternalQIFDocumentReferenceTypeLisd::~ExternalQIFDocumentReferenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ExternalQIFDocumentReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ExternalQIFDocumentReferenceTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ExternalQIFReferencesType

*/

ExternalQIFReferencesType::ExternalQIFReferencesType()
{
  n = 0;
  ExternalQIFDocument = 0;
}

ExternalQIFReferencesType::ExternalQIFReferencesType(
 ExternalQIFDocumentReferenceTypeLisd * ExternalQIFDocumentIn)
{
  n = 0;
  ExternalQIFDocument = ExternalQIFDocumentIn;
}

ExternalQIFReferencesType::ExternalQIFReferencesType(
 NaturalType * nIn,
 ExternalQIFDocumentReferenceTypeLisd * ExternalQIFDocumentIn)
{
  n = nIn;
  ExternalQIFDocument = ExternalQIFDocumentIn;
}

ExternalQIFReferencesType::~ExternalQIFReferencesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ExternalQIFDocument;
  #endif
}

void ExternalQIFReferencesType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (n)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "n=\"");
      n->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"n\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ExternalQIFDocument)
      {
        fprintf(stderr, "ExternalQIFDocument list is missing\n");
        exit(1);
      }
    if (ExternalQIFDocument->size() == 0)
      {
        fprintf(stderr, "ExternalQIFDocument list is empty\n");
        exit(1);
      }
    std::list<ExternalQIFDocumentReferenceType *>::iterator iter;
    for (iter = ExternalQIFDocument->begin();
         iter != ExternalQIFDocument->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ExternalQIFDocument");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ExternalQIFDocument>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ExternalQIFReferencesType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "n")
        {
          NaturalType * nVal;
          if (n)
            {
              fprintf(stderr, "two values for n in ExternalQIFReferencesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ExternalQIFReferencesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ExternalQIFReferencesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ExternalQIFReferencesType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * ExternalQIFReferencesType::getn()
{return n;}

void ExternalQIFReferencesType::setn(NaturalType * nIn)
{n = nIn;}

ExternalQIFDocumentReferenceTypeLisd * ExternalQIFReferencesType::getExternalQIFDocument()
{return ExternalQIFDocument;}

void ExternalQIFReferencesType::setExternalQIFDocument(ExternalQIFDocumentReferenceTypeLisd * ExternalQIFDocumentIn)
{ExternalQIFDocument = ExternalQIFDocumentIn;}

/* ***************************************************************** */

/* class QIFDocumentHeaderType

*/

QIFDocumentHeaderType::QIFDocumentHeaderType()
{
  Application = 0;
  Author = 0;
  ApplicationSource = 0;
  Description = 0;
  Scope = 0;
}

QIFDocumentHeaderType::QIFDocumentHeaderType(
 ApplicationType * ApplicationIn,
 AuthorType * AuthorIn,
 ApplicationType * ApplicationSourceIn,
 XmlString * DescriptionIn,
 XmlString * ScopeIn)
{
  Application = ApplicationIn;
  Author = AuthorIn;
  ApplicationSource = ApplicationSourceIn;
  Description = DescriptionIn;
  Scope = ScopeIn;
}

QIFDocumentHeaderType::~QIFDocumentHeaderType()
{
  #ifndef NODESTRUCT
  delete Application;
  delete Author;
  delete ApplicationSource;
  delete Description;
  delete Scope;
  #endif
}

void QIFDocumentHeaderType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Application)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Application");
      Application->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Application>\n");
    }
  if (Author)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Author");
      Author->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Author>\n");
    }
  if (ApplicationSource)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ApplicationSource");
      ApplicationSource->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ApplicationSource>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (Scope)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Scope");
      Scope->printSelf(outFile);
      fprintf(outFile, "</Scope>\n");
    }
  doSpaces(-INDENT, outFile);
}

ApplicationType * QIFDocumentHeaderType::getApplication()
{return Application;}

void QIFDocumentHeaderType::setApplication(ApplicationType * ApplicationIn)
{Application = ApplicationIn;}

AuthorType * QIFDocumentHeaderType::getAuthor()
{return Author;}

void QIFDocumentHeaderType::setAuthor(AuthorType * AuthorIn)
{Author = AuthorIn;}

ApplicationType * QIFDocumentHeaderType::getApplicationSource()
{return ApplicationSource;}

void QIFDocumentHeaderType::setApplicationSource(ApplicationType * ApplicationSourceIn)
{ApplicationSource = ApplicationSourceIn;}

XmlString * QIFDocumentHeaderType::getDescription()
{return Description;}

void QIFDocumentHeaderType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

XmlString * QIFDocumentHeaderType::getScope()
{return Scope;}

void QIFDocumentHeaderType::setScope(XmlString * ScopeIn)
{Scope = ScopeIn;}

/* ***************************************************************** */

/* class QIFDocumentType

*/

QIFDocumentType::QIFDocumentType()
{
  idMax = 0;
  versionQIF = 0;
  QPId = 0;
  Attributes = 0;
  VersionHistory = 0;
  Version = 0;
  Header = 0;
  ValidationCounts = 0;
  ProductDataQuality = 0;
  ExternalQIFReferences = 0;
  StandardsDefinitions = 0;
  SoftwareDefinitions = 0;
  AlgorithmDefinitions = 0;
  PreInspectionTraceability = 0;
  FileUnits = 0;
  DatumDefinitions = 0;
  DatumTargetDefinitions = 0;
  Transforms = 0;
  CoordinateSystems = 0;
  DatumReferenceFrames = 0;
  MeasurementResources = 0;
  ThreadSpecifications = 0;
  Product = 0;
  Features = 0;
  FeatureZones = 0;
  Characteristics = 0;
  Plan = 0;
  Results = 0;
  Statistics = 0;
  ManufacturingProcessTraceabilities = 0;
  Rules = 0;
  UserDataXML = 0;
  Signature = 0;
}

QIFDocumentType::QIFDocumentType(
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
 XmlString * SignatureIn)
{
  idMax = 0;
  versionQIF = 0;
  QPId = QPIdIn;
  Attributes = AttributesIn;
  VersionHistory = VersionHistoryIn;
  Version = VersionIn;
  Header = HeaderIn;
  ValidationCounts = ValidationCountsIn;
  ProductDataQuality = ProductDataQualityIn;
  ExternalQIFReferences = ExternalQIFReferencesIn;
  StandardsDefinitions = StandardsDefinitionsIn;
  SoftwareDefinitions = SoftwareDefinitionsIn;
  AlgorithmDefinitions = AlgorithmDefinitionsIn;
  PreInspectionTraceability = PreInspectionTraceabilityIn;
  FileUnits = FileUnitsIn;
  DatumDefinitions = DatumDefinitionsIn;
  DatumTargetDefinitions = DatumTargetDefinitionsIn;
  Transforms = TransformsIn;
  CoordinateSystems = CoordinateSystemsIn;
  DatumReferenceFrames = DatumReferenceFramesIn;
  MeasurementResources = MeasurementResourcesIn;
  ThreadSpecifications = ThreadSpecificationsIn;
  Product = ProductIn;
  Features = FeaturesIn;
  FeatureZones = FeatureZonesIn;
  Characteristics = CharacteristicsIn;
  Plan = PlanIn;
  Results = ResultsIn;
  Statistics = StatisticsIn;
  ManufacturingProcessTraceabilities = ManufacturingProcessTraceabilitiesIn;
  Rules = RulesIn;
  UserDataXML = UserDataXMLIn;
  Signature = SignatureIn;
}

QIFDocumentType::QIFDocumentType(
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
 XmlString * SignatureIn)
{
  idMax = idMaxIn;
  versionQIF = versionQIFIn;
  QPId = QPIdIn;
  Attributes = AttributesIn;
  VersionHistory = VersionHistoryIn;
  Version = VersionIn;
  Header = HeaderIn;
  ValidationCounts = ValidationCountsIn;
  ProductDataQuality = ProductDataQualityIn;
  ExternalQIFReferences = ExternalQIFReferencesIn;
  StandardsDefinitions = StandardsDefinitionsIn;
  SoftwareDefinitions = SoftwareDefinitionsIn;
  AlgorithmDefinitions = AlgorithmDefinitionsIn;
  PreInspectionTraceability = PreInspectionTraceabilityIn;
  FileUnits = FileUnitsIn;
  DatumDefinitions = DatumDefinitionsIn;
  DatumTargetDefinitions = DatumTargetDefinitionsIn;
  Transforms = TransformsIn;
  CoordinateSystems = CoordinateSystemsIn;
  DatumReferenceFrames = DatumReferenceFramesIn;
  MeasurementResources = MeasurementResourcesIn;
  ThreadSpecifications = ThreadSpecificationsIn;
  Product = ProductIn;
  Features = FeaturesIn;
  FeatureZones = FeatureZonesIn;
  Characteristics = CharacteristicsIn;
  Plan = PlanIn;
  Results = ResultsIn;
  Statistics = StatisticsIn;
  ManufacturingProcessTraceabilities = ManufacturingProcessTraceabilitiesIn;
  Rules = RulesIn;
  UserDataXML = UserDataXMLIn;
  Signature = SignatureIn;
}

QIFDocumentType::~QIFDocumentType()
{
  #ifndef NODESTRUCT
  delete idMax;
  delete versionQIF;
  delete QPId;
  delete Attributes;
  delete VersionHistory;
  delete Version;
  delete Header;
  delete ValidationCounts;
  delete ProductDataQuality;
  delete ExternalQIFReferences;
  delete StandardsDefinitions;
  delete SoftwareDefinitions;
  delete AlgorithmDefinitions;
  delete PreInspectionTraceability;
  delete FileUnits;
  delete DatumDefinitions;
  delete DatumTargetDefinitions;
  delete Transforms;
  delete CoordinateSystems;
  delete DatumReferenceFrames;
  delete MeasurementResources;
  delete ThreadSpecifications;
  delete Product;
  delete Features;
  delete FeatureZones;
  delete Characteristics;
  delete Plan;
  delete Results;
  delete Statistics;
  delete ManufacturingProcessTraceabilities;
  delete Rules;
  delete UserDataXML;
  delete Signature;
  #endif
}

void QIFDocumentType::printSelf(FILE * outFile)
{
  if (idMax)
    {
      fprintf(outFile, "\n");
      fprintf(outFile, "  idMax=\"");
      idMax->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"idMax\" missing\n");
      exit(1);
    }
  if (versionQIF)
    {
      fprintf(outFile, "\n");
      fprintf(outFile, "  versionQIF=\"");
      versionQIF->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"versionQIF\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<QPId");
  QPId->printSelf(outFile);
  fprintf(outFile, "</QPId>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (VersionHistory)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<VersionHistory");
      VersionHistory->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</VersionHistory>\n");
    }
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Header)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Header");
      Header->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Header>\n");
    }
  if (ValidationCounts)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ValidationCounts");
      ValidationCounts->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ValidationCounts>\n");
    }
  if (ProductDataQuality)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductDataQuality");
      ProductDataQuality->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ProductDataQuality>\n");
    }
  if (ExternalQIFReferences)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExternalQIFReferences");
      ExternalQIFReferences->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ExternalQIFReferences>\n");
    }
  if (StandardsDefinitions)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StandardsDefinitions");
      StandardsDefinitions->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StandardsDefinitions>\n");
    }
  if (SoftwareDefinitions)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SoftwareDefinitions");
      SoftwareDefinitions->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SoftwareDefinitions>\n");
    }
  if (AlgorithmDefinitions)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlgorithmDefinitions");
      AlgorithmDefinitions->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlgorithmDefinitions>\n");
    }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (FileUnits)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FileUnits");
      FileUnits->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FileUnits>\n");
    }
  if (DatumDefinitions)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitions");
      DatumDefinitions->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumDefinitions>\n");
    }
  if (DatumTargetDefinitions)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitions");
      DatumTargetDefinitions->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetDefinitions>\n");
    }
  if (Transforms)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transforms");
      Transforms->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transforms>\n");
    }
  if (CoordinateSystems)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystems");
      CoordinateSystems->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystems>\n");
    }
  if (DatumReferenceFrames)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFrames");
      DatumReferenceFrames->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumReferenceFrames>\n");
    }
  if (MeasurementResources)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementResources");
      MeasurementResources->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementResources>\n");
    }
  if (ThreadSpecifications)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThreadSpecifications");
      ThreadSpecifications->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ThreadSpecifications>\n");
    }
  if (Product)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Product");
      Product->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Product>\n");
    }
  if (Features)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Features");
      Features->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Features>\n");
    }
  if (FeatureZones)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureZones");
      FeatureZones->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureZones>\n");
    }
  if (Characteristics)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Characteristics");
      Characteristics->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Characteristics>\n");
    }
  if (Plan)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Plan");
      Plan->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Plan>\n");
    }
  if (Results)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Results");
      Results->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Results>\n");
    }
  if (Statistics)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Statistics");
      Statistics->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Statistics>\n");
    }
  if (ManufacturingProcessTraceabilities)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ManufacturingProcessTraceabilities");
      ManufacturingProcessTraceabilities->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ManufacturingProcessTraceabilities>\n");
    }
  if (Rules)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Rules");
      Rules->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Rules>\n");
    }
  if (UserDataXML)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDataXML");
      UserDataXML->printSelf(outFile);
      fprintf(outFile, "</UserDataXML>\n");
    }
  if (Signature)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Signature");
      Signature->printSelf(outFile);
      fprintf(outFile, "</Signature>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool QIFDocumentType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "idMax")
        {
          XmlUnsignedInt * idMaxVal;
          if (idMax)
            {
              fprintf(stderr, "two values for idMax in QIFDocumentType\n");
              returnValue = true;
              break;
            }
          idMaxVal = new XmlUnsignedInt(decl->val.c_str());
          if (idMaxVal->bad)
            {
              delete idMaxVal;
              fprintf(stderr, "bad value %s for idMax in QIFDocumentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            idMax = idMaxVal;
        }
      else if (decl->name == "versionQIF")
        {
          XmlNMTOKEN * versionQIFVal;
          if (versionQIF)
            {
              fprintf(stderr, "two values for versionQIF in QIFDocumentType\n");
              returnValue = true;
              break;
            }
          versionQIFVal = new XmlNMTOKEN(decl->val.c_str());
          if (versionQIFVal->bad)
            {
              delete versionQIFVal;
              fprintf(stderr, "bad value %s for versionQIF in QIFDocumentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            versionQIF = versionQIFVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in QIFDocumentType\n");
          returnValue = true;
          break;
        }
    }
  if (idMax == 0)
    {
      fprintf(stderr, "required attribute \"idMax\" missing in QIFDocumentType\n");
      returnValue = true;
    }
  if (versionQIF == 0)
    {
      fprintf(stderr, "required attribute \"versionQIF\" missing in QIFDocumentType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete idMax;
      idMax = 0;
      delete versionQIF;
      versionQIF = 0;
    }
  return returnValue;
}

XmlUnsignedInt * QIFDocumentType::getidMax()
{return idMax;}

void QIFDocumentType::setidMax(XmlUnsignedInt * idMaxIn)
{idMax = idMaxIn;}

XmlNMTOKEN * QIFDocumentType::getversionQIF()
{return versionQIF;}

void QIFDocumentType::setversionQIF(XmlNMTOKEN * versionQIFIn)
{versionQIF = versionQIFIn;}

QPIdType * QIFDocumentType::getQPId()
{return QPId;}

void QIFDocumentType::setQPId(QPIdType * QPIdIn)
{QPId = QPIdIn;}

AttributesType * QIFDocumentType::getAttributes()
{return Attributes;}

void QIFDocumentType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

VersionHistoryType * QIFDocumentType::getVersionHistory()
{return VersionHistory;}

void QIFDocumentType::setVersionHistory(VersionHistoryType * VersionHistoryIn)
{VersionHistory = VersionHistoryIn;}

VersionBaseType * QIFDocumentType::getVersion()
{return Version;}

void QIFDocumentType::setVersion(VersionBaseType * VersionIn)
{Version = VersionIn;}

QIFDocumentHeaderType * QIFDocumentType::getHeader()
{return Header;}

void QIFDocumentType::setHeader(QIFDocumentHeaderType * HeaderIn)
{Header = HeaderIn;}

ValidationCountsType * QIFDocumentType::getValidationCounts()
{return ValidationCounts;}

void QIFDocumentType::setValidationCounts(ValidationCountsType * ValidationCountsIn)
{ValidationCounts = ValidationCountsIn;}

ProductDataQualityType * QIFDocumentType::getProductDataQuality()
{return ProductDataQuality;}

void QIFDocumentType::setProductDataQuality(ProductDataQualityType * ProductDataQualityIn)
{ProductDataQuality = ProductDataQualityIn;}

ExternalQIFReferencesType * QIFDocumentType::getExternalQIFReferences()
{return ExternalQIFReferences;}

void QIFDocumentType::setExternalQIFReferences(ExternalQIFReferencesType * ExternalQIFReferencesIn)
{ExternalQIFReferences = ExternalQIFReferencesIn;}

StandardsType * QIFDocumentType::getStandardsDefinitions()
{return StandardsDefinitions;}

void QIFDocumentType::setStandardsDefinitions(StandardsType * StandardsDefinitionsIn)
{StandardsDefinitions = StandardsDefinitionsIn;}

SoftwaresType * QIFDocumentType::getSoftwareDefinitions()
{return SoftwareDefinitions;}

void QIFDocumentType::setSoftwareDefinitions(SoftwaresType * SoftwareDefinitionsIn)
{SoftwareDefinitions = SoftwareDefinitionsIn;}

AlgorithmsType * QIFDocumentType::getAlgorithmDefinitions()
{return AlgorithmDefinitions;}

void QIFDocumentType::setAlgorithmDefinitions(AlgorithmsType * AlgorithmDefinitionsIn)
{AlgorithmDefinitions = AlgorithmDefinitionsIn;}

PreInspectionTraceabilityType * QIFDocumentType::getPreInspectionTraceability()
{return PreInspectionTraceability;}

void QIFDocumentType::setPreInspectionTraceability(PreInspectionTraceabilityType * PreInspectionTraceabilityIn)
{PreInspectionTraceability = PreInspectionTraceabilityIn;}

FileUnitsType * QIFDocumentType::getFileUnits()
{return FileUnits;}

void QIFDocumentType::setFileUnits(FileUnitsType * FileUnitsIn)
{FileUnits = FileUnitsIn;}

DatumDefinitionsType * QIFDocumentType::getDatumDefinitions()
{return DatumDefinitions;}

void QIFDocumentType::setDatumDefinitions(DatumDefinitionsType * DatumDefinitionsIn)
{DatumDefinitions = DatumDefinitionsIn;}

DatumTargetDefinitionsType * QIFDocumentType::getDatumTargetDefinitions()
{return DatumTargetDefinitions;}

void QIFDocumentType::setDatumTargetDefinitions(DatumTargetDefinitionsType * DatumTargetDefinitionsIn)
{DatumTargetDefinitions = DatumTargetDefinitionsIn;}

TransformListType * QIFDocumentType::getTransforms()
{return Transforms;}

void QIFDocumentType::setTransforms(TransformListType * TransformsIn)
{Transforms = TransformsIn;}

CoordinateSystemsType * QIFDocumentType::getCoordinateSystems()
{return CoordinateSystems;}

void QIFDocumentType::setCoordinateSystems(CoordinateSystemsType * CoordinateSystemsIn)
{CoordinateSystems = CoordinateSystemsIn;}

DatumReferenceFramesType * QIFDocumentType::getDatumReferenceFrames()
{return DatumReferenceFrames;}

void QIFDocumentType::setDatumReferenceFrames(DatumReferenceFramesType * DatumReferenceFramesIn)
{DatumReferenceFrames = DatumReferenceFramesIn;}

MeasurementResourcesType * QIFDocumentType::getMeasurementResources()
{return MeasurementResources;}

void QIFDocumentType::setMeasurementResources(MeasurementResourcesType * MeasurementResourcesIn)
{MeasurementResources = MeasurementResourcesIn;}

ThreadSpecificationsType * QIFDocumentType::getThreadSpecifications()
{return ThreadSpecifications;}

void QIFDocumentType::setThreadSpecifications(ThreadSpecificationsType * ThreadSpecificationsIn)
{ThreadSpecifications = ThreadSpecificationsIn;}

ProductType * QIFDocumentType::getProduct()
{return Product;}

void QIFDocumentType::setProduct(ProductType * ProductIn)
{Product = ProductIn;}

FeatureAspectsListsType * QIFDocumentType::getFeatures()
{return Features;}

void QIFDocumentType::setFeatures(FeatureAspectsListsType * FeaturesIn)
{Features = FeaturesIn;}

FeatureZoneListType * QIFDocumentType::getFeatureZones()
{return FeatureZones;}

void QIFDocumentType::setFeatureZones(FeatureZoneListType * FeatureZonesIn)
{FeatureZones = FeatureZonesIn;}

CharacteristicAspectsListsType * QIFDocumentType::getCharacteristics()
{return Characteristics;}

void QIFDocumentType::setCharacteristics(CharacteristicAspectsListsType * CharacteristicsIn)
{Characteristics = CharacteristicsIn;}

PlanType * QIFDocumentType::getPlan()
{return Plan;}

void QIFDocumentType::setPlan(PlanType * PlanIn)
{Plan = PlanIn;}

ResultsType * QIFDocumentType::getResults()
{return Results;}

void QIFDocumentType::setResults(ResultsType * ResultsIn)
{Results = ResultsIn;}

StatisticsType * QIFDocumentType::getStatistics()
{return Statistics;}

void QIFDocumentType::setStatistics(StatisticsType * StatisticsIn)
{Statistics = StatisticsIn;}

ManufacturingProcessTraceabilitiesType * QIFDocumentType::getManufacturingProcessTraceabilities()
{return ManufacturingProcessTraceabilities;}

void QIFDocumentType::setManufacturingProcessTraceabilities(ManufacturingProcessTraceabilitiesType * ManufacturingProcessTraceabilitiesIn)
{ManufacturingProcessTraceabilities = ManufacturingProcessTraceabilitiesIn;}

QIFRulesType * QIFDocumentType::getRules()
{return Rules;}

void QIFDocumentType::setRules(QIFRulesType * RulesIn)
{Rules = RulesIn;}

XmlString * QIFDocumentType::getUserDataXML()
{return UserDataXML;}

void QIFDocumentType::setUserDataXML(XmlString * UserDataXMLIn)
{UserDataXML = UserDataXMLIn;}

XmlString * QIFDocumentType::getSignature()
{return Signature;}

void QIFDocumentType::setSignature(XmlString * SignatureIn)
{Signature = SignatureIn;}

/* ***************************************************************** */

XmlHeaderForQIFDocument::XmlHeaderForQIFDocument()
{
  XmlnsNoPrefix = 0;
  XmlnsiWithPrefix = 0;
  location = 0;
  idMax = 0;
  versionQIF = 0;
}

XmlHeaderForQIFDocument::XmlHeaderForQIFDocument(
  XmlString * XmlnsNoPrefixIn,
  XmlStringLisd * XmlnsiWithPrefixIn,
  SchemaLocation * locationIn)
{
  XmlnsNoPrefix = XmlnsNoPrefixIn;
  XmlnsiWithPrefix = XmlnsiWithPrefixIn;
  location = locationIn;
  idMax = 0;
  versionQIF = 0;
}

XmlHeaderForQIFDocument::~XmlHeaderForQIFDocument()
{
  #ifndef NODESTRUCT
  delete XmlnsiWithPrefix;
  delete XmlnsNoPrefix;
  delete location;
  delete idMax;
  delete versionQIF;
  #endif
}

// The fields other than XmlnsNoPrefix, XmlnsiWithPrefix, and location
// belong also to the top level type and are printed by its PRINTSELF.

void XmlHeaderForQIFDocument::printSelf(FILE * outFile)
{
  std::list<XmlString *>::iterator iter;

  if (XmlnsNoPrefix)
    {
      fprintf(outFile, "  xmlns=\"%s\"\n", XmlnsNoPrefix->val.c_str());
    }
  if (XmlnsiWithPrefix)
    {
      for (iter = XmlnsiWithPrefix->begin();
           iter != XmlnsiWithPrefix->end(); iter++)
        {
          fprintf(outFile, "  xmlns:%s\"\n", (*iter)->val.c_str());
        }
    }
  if (location)
    {
      fprintf(outFile,
              "  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n");
      location->printSelf(outFile);
    }
}

bool XmlHeaderForQIFDocument::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;
  bool hasXsi;
  int stop;
  int n;

  returnValue = false;
  hasXsi = false;
  char buffer[NAMESIZE];
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "xmlns")
        {
          if (XmlnsNoPrefix)
            {
              fprintf(stderr,
                      "two values for no colon xmlns in XmlHeaderForQIFDocument\n");
              returnValue = true;
              break;
            }
          XmlnsNoPrefix = new XmlString(decl->val.c_str());
        }
      else if (decl->name == "xmlns:")
        {
          strncpy(buffer, decl->val.c_str(), NAMESIZE);
          if ((buffer[0] == 'x') &&
              (buffer[1] == 's') && 
              (buffer[2] == 'i') &&
              (isspace(buffer[3]) || (buffer[3] == '=')))
            {
              stop = strlen(buffer);
              if (hasXsi)
                {
                  fprintf(stderr, "two values for xmlns:xsi\n");
                  returnValue = true;
                  break;
                }
              n = 3;
              if (buffer[n] != '=')
                { // find the = if not already there -- must be one
                  for (n = 4; ((n < stop) && (buffer[n] != '=')); n++);
                } // next find the "
              for (n++; ((n < stop) && (buffer[n] != '"')); n++);
              if (strcmp(buffer+n+1,
                         "http://www.w3.org/2001/XMLSchema-instance"))
                {
                  fprintf(stderr, "xmlns:xsi must be "
                          "\"http://www.w3.org/2001/XMLSchema-instance\"\n");
                  returnValue = true;
                  break;
                }
              else
                {
                  hasXsi = true;
                }
            }
          else
            {
              if (XmlnsiWithPrefix == 0)
                {
                  XmlnsiWithPrefix = new XmlStringLisd;
                }
              XmlnsiWithPrefix->push_back(new XmlString(buffer));
            }
        }
      else if (decl->name == "xsi:schemaLocation")
        {
          if (location)
            {
              fprintf(stderr,
                      "two values for location in XmlHeaderForQIFDocument\n");
              returnValue = true;
              break;
            }
          location = new SchemaLocation("xsi", decl->val.c_str(), true);
        }
      else if (decl->name == "xsi:noNamespaceSchemaLocation")
        {
          if (location)
            {
              fprintf(stderr,
                      "two values for location in XmlHeaderForQIFDocument\n");
              returnValue = true;
              break;
            }
          location = new SchemaLocation("xsi", decl->val.c_str(), false);
        }
      else if (decl->name == "idMax")
        {
          XmlUnsignedInt * idMaxVal;
          if (idMax)
            {
              fprintf(stderr, "two values for idMax in XmlHeaderForQIFDocument\n");
              returnValue = true;
              break;
            }
          idMaxVal = new XmlUnsignedInt(decl->val.c_str());
          if (idMaxVal->bad)
            {
              delete idMaxVal;
              fprintf(stderr, "bad value %s for idMax in XmlHeaderForQIFDocument\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            idMax = idMaxVal;
        }
      else if (decl->name == "versionQIF")
        {
          XmlNMTOKEN * versionQIFVal;
          if (versionQIF)
            {
              fprintf(stderr, "two values for versionQIF in XmlHeaderForQIFDocument\n");
              returnValue = true;
              break;
            }
          versionQIFVal = new XmlNMTOKEN(decl->val.c_str());
          if (versionQIFVal->bad)
            {
              delete versionQIFVal;
              fprintf(stderr, "bad value %s for versionQIF in XmlHeaderForQIFDocument\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            versionQIF = versionQIFVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in XmlHeaderForQIFDocument\n");
          returnValue = true;
          break;
        }
    }
  if (idMax == 0)
    {
      fprintf(stderr, "required attribute \"idMax\" missing in XmlHeaderForQIFDocument\n");
      returnValue = true;
    }
  if (versionQIF == 0)
    {
      fprintf(stderr, "required attribute \"versionQIF\" missing in XmlHeaderForQIFDocument\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete XmlnsNoPrefix;
      XmlnsNoPrefix = 0;
      delete XmlnsiWithPrefix;
      XmlnsiWithPrefix = 0;
      delete location;
      location = 0;
      delete idMax;
      idMax = 0;
      delete versionQIF;
      versionQIF = 0;
    }
  if (location && !hasXsi)
    {
      fprintf(stderr, "xsi namespace used but not declared\n");
      returnValue = true;
    }
  return returnValue;
}

XmlString * XmlHeaderForQIFDocument::getXmlnsNoPrefix()
{return XmlnsNoPrefix;}

void XmlHeaderForQIFDocument::setXmlnsNoPrefix(XmlString * XmlnsNoPrefixIn)
{XmlnsNoPrefix = XmlnsNoPrefixIn;}

XmlStringLisd * XmlHeaderForQIFDocument::getXmlnsiWithPrefix()
{return XmlnsiWithPrefix;}

void XmlHeaderForQIFDocument::setXmlnsiWithPrefix
(XmlStringLisd * XmlnsiWithPrefixIn)
{XmlnsiWithPrefix = XmlnsiWithPrefixIn;}

SchemaLocation * XmlHeaderForQIFDocument::getlocation()
{return location;}

void XmlHeaderForQIFDocument::setlocation(SchemaLocation * locationIn)
{location = locationIn;}

XmlUnsignedInt * XmlHeaderForQIFDocument::getidMax()
{return idMax;}

void XmlHeaderForQIFDocument::setidMax(XmlUnsignedInt * idMaxIn)
{idMax = idMaxIn;}

XmlNMTOKEN * XmlHeaderForQIFDocument::getversionQIF()
{return versionQIF;}

void XmlHeaderForQIFDocument::setversionQIF(XmlNMTOKEN * versionQIFIn)
{versionQIF = versionQIFIn;}

/* ***************************************************************** */

