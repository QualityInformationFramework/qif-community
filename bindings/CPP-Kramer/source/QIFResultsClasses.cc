/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <xmlSchemaInstance.hh>
#include "QIFResultsClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class ActualComponentSetType

*/

ActualComponentSetType::ActualComponentSetType()
{
  n = 0;
  ActualComponent = 0;
}

ActualComponentSetType::ActualComponentSetType(
 ActualComponentTypeLisd * ActualComponentIn)
{
  n = 0;
  ActualComponent = ActualComponentIn;
}

ActualComponentSetType::ActualComponentSetType(
 NaturalType * nIn,
 ActualComponentTypeLisd * ActualComponentIn)
{
  n = nIn;
  ActualComponent = ActualComponentIn;
}

ActualComponentSetType::~ActualComponentSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ActualComponent;
  #endif
}

void ActualComponentSetType::printSelf(FILE * outFile)
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
    if (!ActualComponent)
      {
        fprintf(stderr, "ActualComponent list is missing\n");
        exit(1);
      }
    if (ActualComponent->size() == 0)
      {
        fprintf(stderr, "ActualComponent list is empty\n");
        exit(1);
      }
    if (ActualComponent->size() < 1)
      {
        fprintf(stderr,
                "size of ActualComponent list (%d) less than minimum required (1)\n",
                (int)ActualComponent->size());
        exit(1);
      }
    std::list<ActualComponentType *>::iterator iter;
    for (iter = ActualComponent->begin();
         iter != ActualComponent->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ActualComponent");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ActualComponent>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ActualComponentSetType::badAttributes(
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
          if (this->n)
            {
              fprintf(stderr, "two values for n in ActualComponentSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ActualComponentSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ActualComponentSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ActualComponentSetType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * ActualComponentSetType::getn()
{return n;}

void ActualComponentSetType::setn(NaturalType * nIn)
{n = nIn;}

ActualComponentTypeLisd * ActualComponentSetType::getActualComponent()
{return ActualComponent;}

void ActualComponentSetType::setActualComponent(ActualComponentTypeLisd * ActualComponentIn)
{ActualComponent = ActualComponentIn;}

/* ***************************************************************** */

/* class ActualComponentSetTypeLisd

*/

ActualComponentSetTypeLisd::ActualComponentSetTypeLisd() {}

ActualComponentSetTypeLisd::ActualComponentSetTypeLisd(ActualComponentSetType * aActualComponentSetType)
{
  push_back(aActualComponentSetType);
}

ActualComponentSetTypeLisd::~ActualComponentSetTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ActualComponentSetType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ActualComponentSetTypeLisd::printSelf(FILE * outFile)
{
  std::list<ActualComponentSetType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ActualComponentSetsType

*/

ActualComponentSetsType::ActualComponentSetsType()
{
  n = 0;
  ActualComponentSet = 0;
}

ActualComponentSetsType::ActualComponentSetsType(
 ActualComponentSetTypeLisd * ActualComponentSetIn)
{
  n = 0;
  ActualComponentSet = ActualComponentSetIn;
}

ActualComponentSetsType::ActualComponentSetsType(
 NaturalType * nIn,
 ActualComponentSetTypeLisd * ActualComponentSetIn)
{
  n = nIn;
  ActualComponentSet = ActualComponentSetIn;
}

ActualComponentSetsType::~ActualComponentSetsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ActualComponentSet;
  #endif
}

void ActualComponentSetsType::printSelf(FILE * outFile)
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
    if (!ActualComponentSet)
      {
        fprintf(stderr, "ActualComponentSet list is missing\n");
        exit(1);
      }
    if (ActualComponentSet->size() == 0)
      {
        fprintf(stderr, "ActualComponentSet list is empty\n");
        exit(1);
      }
    if (ActualComponentSet->size() < 1)
      {
        fprintf(stderr,
                "size of ActualComponentSet list (%d) less than minimum required (1)\n",
                (int)ActualComponentSet->size());
        exit(1);
      }
    std::list<ActualComponentSetType *>::iterator iter;
    for (iter = ActualComponentSet->begin();
         iter != ActualComponentSet->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ActualComponentSet");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ActualComponentSet>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ActualComponentSetsType::badAttributes(
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
          if (this->n)
            {
              fprintf(stderr, "two values for n in ActualComponentSetsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ActualComponentSetsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ActualComponentSetsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ActualComponentSetsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * ActualComponentSetsType::getn()
{return n;}

void ActualComponentSetsType::setn(NaturalType * nIn)
{n = nIn;}

ActualComponentSetTypeLisd * ActualComponentSetsType::getActualComponentSet()
{return ActualComponentSet;}

void ActualComponentSetsType::setActualComponentSet(ActualComponentSetTypeLisd * ActualComponentSetIn)
{ActualComponentSet = ActualComponentSetIn;}

/* ***************************************************************** */

/* class ActualComponentType

*/

ActualComponentType::ActualComponentType()
{
  id = 0;
  Attributes = 0;
  SerialNumber = 0;
  AdditionalChanges = 0;
  Status = 0;
  Traceability = 0;
  AsmPathId = 0;
}

ActualComponentType::ActualComponentType(
 AttributesType * AttributesIn,
 XmlString * SerialNumberIn,
 XmlString * AdditionalChangesIn,
 InspectionStatusType * StatusIn,
 ActualProductTraceabilityType * TraceabilityIn,
 QIFReferenceType * AsmPathIdIn)
{
  id = 0;
  Attributes = AttributesIn;
  SerialNumber = SerialNumberIn;
  AdditionalChanges = AdditionalChangesIn;
  Status = StatusIn;
  Traceability = TraceabilityIn;
  AsmPathId = AsmPathIdIn;
}

ActualComponentType::ActualComponentType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlString * SerialNumberIn,
 XmlString * AdditionalChangesIn,
 InspectionStatusType * StatusIn,
 ActualProductTraceabilityType * TraceabilityIn,
 QIFReferenceType * AsmPathIdIn)
{
  id = idIn;
  Attributes = AttributesIn;
  SerialNumber = SerialNumberIn;
  AdditionalChanges = AdditionalChangesIn;
  Status = StatusIn;
  Traceability = TraceabilityIn;
  AsmPathId = AsmPathIdIn;
}

ActualComponentType::~ActualComponentType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete SerialNumber;
  delete AdditionalChanges;
  delete Status;
  delete Traceability;
  delete AsmPathId;
  #endif
}

void ActualComponentType::printSelf(FILE * outFile)
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
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (SerialNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SerialNumber");
      SerialNumber->printSelf(outFile);
      fprintf(outFile, "</SerialNumber>\n");
    }
  if (AdditionalChanges)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AdditionalChanges");
      AdditionalChanges->printSelf(outFile);
      fprintf(outFile, "</AdditionalChanges>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (Traceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Traceability");
      Traceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Traceability>\n");
    }
  if (AsmPathId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AsmPathId");
      AsmPathId->printSelf(outFile);
      fprintf(outFile, "</AsmPathId>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ActualComponentType::badAttributes(
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
          if (this->id)
            {
              fprintf(stderr, "two values for id in ActualComponentType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ActualComponentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ActualComponentType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ActualComponentType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->id;
      this->id = 0;
    }
  return returnValue;
}

QIFIdType * ActualComponentType::getid()
{return id;}

void ActualComponentType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * ActualComponentType::getAttributes()
{return Attributes;}

void ActualComponentType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlString * ActualComponentType::getSerialNumber()
{return SerialNumber;}

void ActualComponentType::setSerialNumber(XmlString * SerialNumberIn)
{SerialNumber = SerialNumberIn;}

XmlString * ActualComponentType::getAdditionalChanges()
{return AdditionalChanges;}

void ActualComponentType::setAdditionalChanges(XmlString * AdditionalChangesIn)
{AdditionalChanges = AdditionalChangesIn;}

InspectionStatusType * ActualComponentType::getStatus()
{return Status;}

void ActualComponentType::setStatus(InspectionStatusType * StatusIn)
{Status = StatusIn;}

ActualProductTraceabilityType * ActualComponentType::getTraceability()
{return Traceability;}

void ActualComponentType::setTraceability(ActualProductTraceabilityType * TraceabilityIn)
{Traceability = TraceabilityIn;}

QIFReferenceType * ActualComponentType::getAsmPathId()
{return AsmPathId;}

void ActualComponentType::setAsmPathId(QIFReferenceType * AsmPathIdIn)
{AsmPathId = AsmPathIdIn;}

/* ***************************************************************** */

/* class ActualComponentTypeLisd

*/

ActualComponentTypeLisd::ActualComponentTypeLisd() {}

ActualComponentTypeLisd::ActualComponentTypeLisd(ActualComponentType * aActualComponentType)
{
  push_back(aActualComponentType);
}

ActualComponentTypeLisd::~ActualComponentTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ActualComponentType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ActualComponentTypeLisd::printSelf(FILE * outFile)
{
  std::list<ActualComponentType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class MeasurementResultsSetType

*/

MeasurementResultsSetType::MeasurementResultsSetType()
{
  n = 0;
  MeasurementResults = 0;
}

MeasurementResultsSetType::MeasurementResultsSetType(
 MeasurementResultsTypeLisd * MeasurementResultsIn)
{
  n = 0;
  MeasurementResults = MeasurementResultsIn;
}

MeasurementResultsSetType::MeasurementResultsSetType(
 NaturalType * nIn,
 MeasurementResultsTypeLisd * MeasurementResultsIn)
{
  n = nIn;
  MeasurementResults = MeasurementResultsIn;
}

MeasurementResultsSetType::~MeasurementResultsSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete MeasurementResults;
  #endif
}

void MeasurementResultsSetType::printSelf(FILE * outFile)
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
    if (!MeasurementResults)
      {
        fprintf(stderr, "MeasurementResults list is missing\n");
        exit(1);
      }
    if (MeasurementResults->size() == 0)
      {
        fprintf(stderr, "MeasurementResults list is empty\n");
        exit(1);
      }
    if (MeasurementResults->size() < 1)
      {
        fprintf(stderr,
                "size of MeasurementResults list (%d) less than minimum required (1)\n",
                (int)MeasurementResults->size());
        exit(1);
      }
    std::list<MeasurementResultsType *>::iterator iter;
    for (iter = MeasurementResults->begin();
         iter != MeasurementResults->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<MeasurementResults");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</MeasurementResults>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool MeasurementResultsSetType::badAttributes(
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
          if (this->n)
            {
              fprintf(stderr, "two values for n in MeasurementResultsSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in MeasurementResultsSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasurementResultsSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in MeasurementResultsSetType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * MeasurementResultsSetType::getn()
{return n;}

void MeasurementResultsSetType::setn(NaturalType * nIn)
{n = nIn;}

MeasurementResultsTypeLisd * MeasurementResultsSetType::getMeasurementResults()
{return MeasurementResults;}

void MeasurementResultsSetType::setMeasurementResults(MeasurementResultsTypeLisd * MeasurementResultsIn)
{MeasurementResults = MeasurementResultsIn;}

/* ***************************************************************** */

/* class MeasurementResultsType

*/

MeasurementResultsType::MeasurementResultsType()
{
  id = 0;
  Attributes = 0;
  InspectionTraceability = 0;
  ThisResultsInstanceQPId = 0;
  ExternalFileReferences = 0;
  MeasuredFeatures = 0;
  MeasuredPointSets = 0;
  MeasuredCharacteristics = 0;
  ActualTransforms = 0;
  CoordinateSystemActualTransformAssociations = 0;
  InspectionStatus = 0;
  ActualComponentIds = 0;
}

MeasurementResultsType::MeasurementResultsType(
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
 ArrayReferenceType * ActualComponentIdsIn)
{
  id = 0;
  Attributes = AttributesIn;
  InspectionTraceability = InspectionTraceabilityIn;
  ThisResultsInstanceQPId = ThisResultsInstanceQPIdIn;
  ExternalFileReferences = ExternalFileReferencesIn;
  MeasuredFeatures = MeasuredFeaturesIn;
  MeasuredPointSets = MeasuredPointSetsIn;
  MeasuredCharacteristics = MeasuredCharacteristicsIn;
  ActualTransforms = ActualTransformsIn;
  CoordinateSystemActualTransformAssociations = CoordinateSystemActualTransformAssociationsIn;
  InspectionStatus = InspectionStatusIn;
  ActualComponentIds = ActualComponentIdsIn;
}

MeasurementResultsType::MeasurementResultsType(
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
 ArrayReferenceType * ActualComponentIdsIn)
{
  id = idIn;
  Attributes = AttributesIn;
  InspectionTraceability = InspectionTraceabilityIn;
  ThisResultsInstanceQPId = ThisResultsInstanceQPIdIn;
  ExternalFileReferences = ExternalFileReferencesIn;
  MeasuredFeatures = MeasuredFeaturesIn;
  MeasuredPointSets = MeasuredPointSetsIn;
  MeasuredCharacteristics = MeasuredCharacteristicsIn;
  ActualTransforms = ActualTransformsIn;
  CoordinateSystemActualTransformAssociations = CoordinateSystemActualTransformAssociationsIn;
  InspectionStatus = InspectionStatusIn;
  ActualComponentIds = ActualComponentIdsIn;
}

MeasurementResultsType::~MeasurementResultsType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete InspectionTraceability;
  delete ThisResultsInstanceQPId;
  delete ExternalFileReferences;
  delete MeasuredFeatures;
  delete MeasuredPointSets;
  delete MeasuredCharacteristics;
  delete ActualTransforms;
  delete CoordinateSystemActualTransformAssociations;
  delete InspectionStatus;
  delete ActualComponentIds;
  #endif
}

void MeasurementResultsType::printSelf(FILE * outFile)
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
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (ThisResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisResultsInstanceQPId");
      ThisResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisResultsInstanceQPId>\n");
    }
  if (ExternalFileReferences)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExternalFileReferences");
      ExternalFileReferences->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ExternalFileReferences>\n");
    }
  if (MeasuredFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasuredFeatures");
      MeasuredFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasuredFeatures>\n");
    }
  if (MeasuredPointSets)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasuredPointSets");
      MeasuredPointSets->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasuredPointSets>\n");
    }
  if (MeasuredCharacteristics)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasuredCharacteristics");
      MeasuredCharacteristics->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasuredCharacteristics>\n");
    }
  if (ActualTransforms)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ActualTransforms");
      ActualTransforms->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ActualTransforms>\n");
    }
  if (CoordinateSystemActualTransformAssociations)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemActualTransformAssociations");
      CoordinateSystemActualTransformAssociations->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemActualTransformAssociations>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<InspectionStatus");
  InspectionStatus->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</InspectionStatus>\n");
  if (ActualComponentIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ActualComponentIds");
      ActualComponentIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ActualComponentIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool MeasurementResultsType::badAttributes(
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
          if (this->id)
            {
              fprintf(stderr, "two values for id in MeasurementResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MeasurementResultsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasurementResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in MeasurementResultsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->id;
      this->id = 0;
    }
  return returnValue;
}

QIFIdType * MeasurementResultsType::getid()
{return id;}

void MeasurementResultsType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * MeasurementResultsType::getAttributes()
{return Attributes;}

void MeasurementResultsType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

InspectionTraceabilityType * MeasurementResultsType::getInspectionTraceability()
{return InspectionTraceability;}

void MeasurementResultsType::setInspectionTraceability(InspectionTraceabilityType * InspectionTraceabilityIn)
{InspectionTraceability = InspectionTraceabilityIn;}

QPIdType * MeasurementResultsType::getThisResultsInstanceQPId()
{return ThisResultsInstanceQPId;}

void MeasurementResultsType::setThisResultsInstanceQPId(QPIdType * ThisResultsInstanceQPIdIn)
{ThisResultsInstanceQPId = ThisResultsInstanceQPIdIn;}

ExternalFileReferencesType * MeasurementResultsType::getExternalFileReferences()
{return ExternalFileReferences;}

void MeasurementResultsType::setExternalFileReferences(ExternalFileReferencesType * ExternalFileReferencesIn)
{ExternalFileReferences = ExternalFileReferencesIn;}

FeatureMeasurementsType * MeasurementResultsType::getMeasuredFeatures()
{return MeasuredFeatures;}

void MeasurementResultsType::setMeasuredFeatures(FeatureMeasurementsType * MeasuredFeaturesIn)
{MeasuredFeatures = MeasuredFeaturesIn;}

MeasuredPointSetsType * MeasurementResultsType::getMeasuredPointSets()
{return MeasuredPointSets;}

void MeasurementResultsType::setMeasuredPointSets(MeasuredPointSetsType * MeasuredPointSetsIn)
{MeasuredPointSets = MeasuredPointSetsIn;}

MeasuredCharacteristicsType * MeasurementResultsType::getMeasuredCharacteristics()
{return MeasuredCharacteristics;}

void MeasurementResultsType::setMeasuredCharacteristics(MeasuredCharacteristicsType * MeasuredCharacteristicsIn)
{MeasuredCharacteristics = MeasuredCharacteristicsIn;}

TransformListType * MeasurementResultsType::getActualTransforms()
{return ActualTransforms;}

void MeasurementResultsType::setActualTransforms(TransformListType * ActualTransformsIn)
{ActualTransforms = ActualTransformsIn;}

CoordinateSystemActualTransformAssociationsType * MeasurementResultsType::getCoordinateSystemActualTransformAssociations()
{return CoordinateSystemActualTransformAssociations;}

void MeasurementResultsType::setCoordinateSystemActualTransformAssociations(CoordinateSystemActualTransformAssociationsType * CoordinateSystemActualTransformAssociationsIn)
{CoordinateSystemActualTransformAssociations = CoordinateSystemActualTransformAssociationsIn;}

InspectionStatusType * MeasurementResultsType::getInspectionStatus()
{return InspectionStatus;}

void MeasurementResultsType::setInspectionStatus(InspectionStatusType * InspectionStatusIn)
{InspectionStatus = InspectionStatusIn;}

ArrayReferenceType * MeasurementResultsType::getActualComponentIds()
{return ActualComponentIds;}

void MeasurementResultsType::setActualComponentIds(ArrayReferenceType * ActualComponentIdsIn)
{ActualComponentIds = ActualComponentIdsIn;}

/* ***************************************************************** */

/* class MeasurementResultsTypeLisd

*/

MeasurementResultsTypeLisd::MeasurementResultsTypeLisd() {}

MeasurementResultsTypeLisd::MeasurementResultsTypeLisd(MeasurementResultsType * aMeasurementResultsType)
{
  push_back(aMeasurementResultsType);
}

MeasurementResultsTypeLisd::~MeasurementResultsTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MeasurementResultsType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MeasurementResultsTypeLisd::printSelf(FILE * outFile)
{
  std::list<MeasurementResultsType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ResultsType

*/

ResultsType::ResultsType()
{
  Version = 0;
  MeasurementResultsSet = 0;
  ActualComponentSets = 0;
  InspectionTraceability = 0;
}

ResultsType::ResultsType(
 VersionType * VersionIn,
 MeasurementResultsSetType * MeasurementResultsSetIn,
 ActualComponentSetsType * ActualComponentSetsIn,
 InspectionTraceabilityType * InspectionTraceabilityIn)
{
  Version = VersionIn;
  MeasurementResultsSet = MeasurementResultsSetIn;
  ActualComponentSets = ActualComponentSetsIn;
  InspectionTraceability = InspectionTraceabilityIn;
}

ResultsType::~ResultsType()
{
  #ifndef NODESTRUCT
  delete Version;
  delete MeasurementResultsSet;
  delete ActualComponentSets;
  delete InspectionTraceability;
  #endif
}

void ResultsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<MeasurementResultsSet");
  MeasurementResultsSet->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</MeasurementResultsSet>\n");
  if (ActualComponentSets)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ActualComponentSets");
      ActualComponentSets->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ActualComponentSets>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  doSpaces(-INDENT, outFile);
}

VersionType * ResultsType::getVersion()
{return Version;}

void ResultsType::setVersion(VersionType * VersionIn)
{Version = VersionIn;}

MeasurementResultsSetType * ResultsType::getMeasurementResultsSet()
{return MeasurementResultsSet;}

void ResultsType::setMeasurementResultsSet(MeasurementResultsSetType * MeasurementResultsSetIn)
{MeasurementResultsSet = MeasurementResultsSetIn;}

ActualComponentSetsType * ResultsType::getActualComponentSets()
{return ActualComponentSets;}

void ResultsType::setActualComponentSets(ActualComponentSetsType * ActualComponentSetsIn)
{ActualComponentSets = ActualComponentSetsIn;}

InspectionTraceabilityType * ResultsType::getInspectionTraceability()
{return InspectionTraceability;}

void ResultsType::setInspectionTraceability(InspectionTraceabilityType * InspectionTraceabilityIn)
{InspectionTraceability = InspectionTraceabilityIn;}

/* ***************************************************************** */

