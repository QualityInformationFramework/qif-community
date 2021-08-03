/*********************************************************************/

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "QIFProductClasses.hh"

#define INDENT 2

/*********************************************************************/
/*********************************************************************/

/* class AsmPathType

*/

AsmPathType::AsmPathType()
{
  id = 0;
  ComponentIds = 0;
}

AsmPathType::AsmPathType(
 ArrayReferenceType * ComponentIdsIn)
{
  id = 0;
  ComponentIds = ComponentIdsIn;
}

AsmPathType::AsmPathType(
 QIFIdType * idIn,
 ArrayReferenceType * ComponentIdsIn)
{
  id = idIn;
  ComponentIds = ComponentIdsIn;
}

AsmPathType::~AsmPathType()
{
  #ifndef NODESTRUCT
  delete id;
  delete ComponentIds;
  #endif
}

void AsmPathType::printSelf(FILE * outFile)
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
  if (ComponentIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ComponentIds");
      ComponentIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ComponentIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool AsmPathType::badAttributes(
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
              fprintf(stderr, "two values for id in AsmPathType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AsmPathType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AsmPathType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in AsmPathType\n");
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

QIFIdType * AsmPathType::getid()
{return id;}

void AsmPathType::setid(QIFIdType * idIn)
{id = idIn;}

ArrayReferenceType * AsmPathType::getComponentIds()
{return ComponentIds;}

void AsmPathType::setComponentIds(ArrayReferenceType * ComponentIdsIn)
{ComponentIds = ComponentIdsIn;}

/*********************************************************************/

/* class AsmPathTypeLisd

*/

AsmPathTypeLisd::AsmPathTypeLisd() {}

AsmPathTypeLisd::AsmPathTypeLisd(AsmPathType * aAsmPathType)
{
  push_back(aAsmPathType);
}

AsmPathTypeLisd::~AsmPathTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AsmPathType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AsmPathTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class AsmPathsType

*/

AsmPathsType::AsmPathsType()
{
  n = 0;
  AsmPath = 0;
}

AsmPathsType::AsmPathsType(
 AsmPathTypeLisd * AsmPathIn)
{
  n = 0;
  AsmPath = AsmPathIn;
}

AsmPathsType::AsmPathsType(
 NaturalType * nIn,
 AsmPathTypeLisd * AsmPathIn)
{
  n = nIn;
  AsmPath = AsmPathIn;
}

AsmPathsType::~AsmPathsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete AsmPath;
  #endif
}

void AsmPathsType::printSelf(FILE * outFile)
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
    if (!AsmPath)
      {
        fprintf(stderr, "AsmPath list is missing\n");
        exit(1);
      }
    if (AsmPath->size() == 0)
      {
        fprintf(stderr, "AsmPath list is empty\n");
        exit(1);
      }
    std::list<AsmPathType *>::iterator iter;
    for (iter = AsmPath->begin();
         iter != AsmPath->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<AsmPath");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</AsmPath>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AsmPathsType::badAttributes(
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
              fprintf(stderr, "two values for n in AsmPathsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AsmPathsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AsmPathsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AsmPathsType\n");
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

NaturalType * AsmPathsType::getn()
{return n;}

void AsmPathsType::setn(NaturalType * nIn)
{n = nIn;}

AsmPathTypeLisd * AsmPathsType::getAsmPath()
{return AsmPath;}

void AsmPathsType::setAsmPath(AsmPathTypeLisd * AsmPathIn)
{AsmPath = AsmPathIn;}

/*********************************************************************/

/* class AssemblySetType

*/

AssemblySetType::AssemblySetType()
{
  n = 0;
  Assembly = 0;
}

AssemblySetType::AssemblySetType(
 AssemblyTypeLisd * AssemblyIn)
{
  n = 0;
  Assembly = AssemblyIn;
}

AssemblySetType::AssemblySetType(
 NaturalType * nIn,
 AssemblyTypeLisd * AssemblyIn)
{
  n = nIn;
  Assembly = AssemblyIn;
}

AssemblySetType::~AssemblySetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Assembly;
  #endif
}

void AssemblySetType::printSelf(FILE * outFile)
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
    if (!Assembly)
      {
        fprintf(stderr, "Assembly list is missing\n");
        exit(1);
      }
    if (Assembly->size() == 0)
      {
        fprintf(stderr, "Assembly list is empty\n");
        exit(1);
      }
    std::list<AssemblyType *>::iterator iter;
    for (iter = Assembly->begin();
         iter != Assembly->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Assembly");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Assembly>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AssemblySetType::badAttributes(
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
              fprintf(stderr, "two values for n in AssemblySetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AssemblySetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AssemblySetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AssemblySetType\n");
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

NaturalType * AssemblySetType::getn()
{return n;}

void AssemblySetType::setn(NaturalType * nIn)
{n = nIn;}

AssemblyTypeLisd * AssemblySetType::getAssembly()
{return Assembly;}

void AssemblySetType::setAssembly(AssemblyTypeLisd * AssemblyIn)
{Assembly = AssemblyIn;}

/*********************************************************************/

/* class AssemblyType

*/

AssemblyType::AssemblyType() :
  PartAssemblyBaseType()
{
  ComponentIds = 0;
  DefinitionExternal = 0;
  FoldersAssembly = 0;
}

AssemblyType::AssemblyType(
 AttributesType * AttributesIn,
 ValidationPartAssemblyType * ValidationIn,
 PartAssemblyHeaderType * HeaderIn,
 QPIdType * UUIDIn,
 XmlString * ModelNumberIn,
 XmlString * VersionIn,
 SecurityClassificationType * SecurityClassificationIn,
 XmlString * ExportControlClassificationIn,
 ArrayReferenceType * FeatureNominalIdsIn,
 ArrayReferenceType * FeatureZoneIdsIn,
 ArrayReferenceType * CharacteristicNominalIdsIn,
 ArrayReferenceType * NoteIdsIn,
 ArrayReferenceType * PartNoteIdsIn,
 ArrayReferenceType * DatumDefinitionIdsIn,
 ArrayReferenceType * DatumTargetDefinitionIdsIn,
 ArrayReferenceType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn,
 ArrayReferenceType * ComponentIdsIn,
 DefinitionExternalType * DefinitionExternalIn,
 FoldersAssemblyType * FoldersAssemblyIn) :
  PartAssemblyBaseType(
    AttributesIn,
    ValidationIn,
    HeaderIn,
    UUIDIn,
    ModelNumberIn,
    VersionIn,
    SecurityClassificationIn,
    ExportControlClassificationIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
  ComponentIds = ComponentIdsIn;
  DefinitionExternal = DefinitionExternalIn;
  FoldersAssembly = FoldersAssemblyIn;
}

AssemblyType::AssemblyType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 NaturalType * materialIndexIn,
 PointSimpleType * originMassPropertyIn,
 ValidationPartAssemblyType * ValidationIn,
 PartAssemblyHeaderType * HeaderIn,
 QPIdType * UUIDIn,
 XmlString * ModelNumberIn,
 XmlString * VersionIn,
 SecurityClassificationType * SecurityClassificationIn,
 XmlString * ExportControlClassificationIn,
 ArrayReferenceType * FeatureNominalIdsIn,
 ArrayReferenceType * FeatureZoneIdsIn,
 ArrayReferenceType * CharacteristicNominalIdsIn,
 ArrayReferenceType * NoteIdsIn,
 ArrayReferenceType * PartNoteIdsIn,
 ArrayReferenceType * DatumDefinitionIdsIn,
 ArrayReferenceType * DatumTargetDefinitionIdsIn,
 ArrayReferenceType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn,
 ArrayReferenceType * ComponentIdsIn,
 DefinitionExternalType * DefinitionExternalIn,
 FoldersAssemblyType * FoldersAssemblyIn) :
  PartAssemblyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    materialIndexIn,
    originMassPropertyIn,
    ValidationIn,
    HeaderIn,
    UUIDIn,
    ModelNumberIn,
    VersionIn,
    SecurityClassificationIn,
    ExportControlClassificationIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
  ComponentIds = ComponentIdsIn;
  DefinitionExternal = DefinitionExternalIn;
  FoldersAssembly = FoldersAssemblyIn;
}

AssemblyType::~AssemblyType()
{
  #ifndef NODESTRUCT
  delete ComponentIds;
  delete DefinitionExternal;
  delete FoldersAssembly;
  #endif
}

void AssemblyType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (materialIndex)
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
      fprintf(outFile, "materialIndex=\"");
      materialIndex->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (originMassProperty)
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
      fprintf(outFile, "originMassProperty=\"");
      originMassProperty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  if (Header)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Header");
      Header->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Header>\n");
    }
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (ModelNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModelNumber");
      ModelNumber->printSelf(outFile);
      fprintf(outFile, "</ModelNumber>\n");
    }
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (SecurityClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecurityClassification");
      SecurityClassification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SecurityClassification>\n");
    }
  if (ExportControlClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExportControlClassification");
      ExportControlClassification->printSelf(outFile);
      fprintf(outFile, "</ExportControlClassification>\n");
    }
  if (FeatureNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalIds");
      FeatureNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureNominalIds>\n");
    }
  if (FeatureZoneIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureZoneIds");
      FeatureZoneIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureZoneIds>\n");
    }
  if (CharacteristicNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicNominalIds");
      CharacteristicNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicNominalIds>\n");
    }
  if (NoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteIds");
      NoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteIds>\n");
    }
  if (PartNoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteIds");
      PartNoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteIds>\n");
    }
  if (DatumDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionIds");
      DatumDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumDefinitionIds>\n");
    }
  if (DatumTargetDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitionIds");
      DatumTargetDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetDefinitionIds>\n");
    }
  if (DatumReferenceFrameIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFrameIds");
      DatumReferenceFrameIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumReferenceFrameIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  if (CoordinateSystemIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemIds");
      CoordinateSystemIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemIds>\n");
    }
  if (AuxiliaryIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AuxiliaryIds");
      AuxiliaryIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AuxiliaryIds>\n");
    }
  if (ViewIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ViewIds");
      ViewIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ViewIds>\n");
    }
  if (PointCloudIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointCloudIds");
      PointCloudIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointCloudIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ComponentIds");
  ComponentIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ComponentIds>\n");
  if (DefinitionExternal)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DefinitionExternal");
      DefinitionExternal->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DefinitionExternal>\n");
    }
  if (FoldersAssembly)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FoldersAssembly");
      FoldersAssembly->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FoldersAssembly>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool AssemblyType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in AssemblyType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in AssemblyType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in AssemblyType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in AssemblyType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "materialIndex")
        {
          NaturalType * materialIndexVal;
          if (materialIndex)
            {
              fprintf(stderr, "two values for materialIndex in AssemblyType\n");
              returnValue = true;
              break;
            }
          materialIndexVal = new NaturalType(decl->val.c_str());
          if (materialIndexVal->bad)
            {
              delete materialIndexVal;
              fprintf(stderr, "bad value %s for materialIndex in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            materialIndex = materialIndexVal;
        }
      else if (decl->name == "originMassProperty")
        {
          PointSimpleType * originMassPropertyVal;
          if (originMassProperty)
            {
              fprintf(stderr, "two values for originMassProperty in AssemblyType\n");
              returnValue = true;
              break;
            }
          originMassPropertyVal = new PointSimpleType(decl->val.c_str());
          if (originMassPropertyVal->bad)
            {
              delete originMassPropertyVal;
              fprintf(stderr, "bad value %s for originMassProperty in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            originMassProperty = originMassPropertyVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in AssemblyType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in AssemblyType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in AssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AssemblyType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in AssemblyType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete materialIndex;
      materialIndex = 0;
      delete originMassProperty;
      originMassProperty = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

ArrayReferenceType * AssemblyType::getComponentIds()
{return ComponentIds;}

void AssemblyType::setComponentIds(ArrayReferenceType * ComponentIdsIn)
{ComponentIds = ComponentIdsIn;}

DefinitionExternalType * AssemblyType::getDefinitionExternal()
{return DefinitionExternal;}

void AssemblyType::setDefinitionExternal(DefinitionExternalType * DefinitionExternalIn)
{DefinitionExternal = DefinitionExternalIn;}

FoldersAssemblyType * AssemblyType::getFoldersAssembly()
{return FoldersAssembly;}

void AssemblyType::setFoldersAssembly(FoldersAssemblyType * FoldersAssemblyIn)
{FoldersAssembly = FoldersAssemblyIn;}

/*********************************************************************/

/* class AssemblyTypeLisd

*/

AssemblyTypeLisd::AssemblyTypeLisd() {}

AssemblyTypeLisd::AssemblyTypeLisd(AssemblyType * aAssemblyType)
{
  push_back(aAssemblyType);
}

AssemblyTypeLisd::~AssemblyTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AssemblyType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AssemblyTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class ComponentSetType

*/

ComponentSetType::ComponentSetType()
{
  n = 0;
  Component = 0;
}

ComponentSetType::ComponentSetType(
 ComponentTypeLisd * ComponentIn)
{
  n = 0;
  Component = ComponentIn;
}

ComponentSetType::ComponentSetType(
 NaturalType * nIn,
 ComponentTypeLisd * ComponentIn)
{
  n = nIn;
  Component = ComponentIn;
}

ComponentSetType::~ComponentSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Component;
  #endif
}

void ComponentSetType::printSelf(FILE * outFile)
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
    if (!Component)
      {
        fprintf(stderr, "Component list is missing\n");
        exit(1);
      }
    if (Component->size() == 0)
      {
        fprintf(stderr, "Component list is empty\n");
        exit(1);
      }
    std::list<ComponentType *>::iterator iter;
    for (iter = Component->begin();
         iter != Component->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Component");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Component>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ComponentSetType::badAttributes(
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
              fprintf(stderr, "two values for n in ComponentSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ComponentSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ComponentSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ComponentSetType\n");
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

NaturalType * ComponentSetType::getn()
{return n;}

void ComponentSetType::setn(NaturalType * nIn)
{n = nIn;}

ComponentTypeLisd * ComponentSetType::getComponent()
{return Component;}

void ComponentSetType::setComponent(ComponentTypeLisd * ComponentIn)
{Component = ComponentIn;}

/*********************************************************************/

/* class ComponentType

*/

ComponentType::ComponentType() :
  DrawableBaseType()
{
  Transform = 0;
  UUID = 0;
  Traceability = 0;
  ComponentType_1237 = 0;
}

ComponentType::ComponentType(
 AttributesType * AttributesIn,
 ElementReferenceType * TransformIn,
 QPIdType * UUIDIn,
 ProductTraceabilityType * TraceabilityIn,
 ComponentType_1237_Type * ComponentType_1237In) :
  DrawableBaseType(
    AttributesIn)
{
  Transform = TransformIn;
  UUID = UUIDIn;
  Traceability = TraceabilityIn;
  ComponentType_1237 = ComponentType_1237In;
}

ComponentType::ComponentType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 ElementReferenceType * TransformIn,
 QPIdType * UUIDIn,
 ProductTraceabilityType * TraceabilityIn,
 ComponentType_1237_Type * ComponentType_1237In) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  Transform = TransformIn;
  UUID = UUIDIn;
  Traceability = TraceabilityIn;
  ComponentType_1237 = ComponentType_1237In;
}

ComponentType::~ComponentType()
{
  #ifndef NODESTRUCT
  delete Transform;
  delete UUID;
  delete Traceability;
  delete ComponentType_1237;
  #endif
}

void ComponentType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Transform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Transform");
      Transform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Transform>\n");
    }
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (Traceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Traceability");
      Traceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Traceability>\n");
    }
  ComponentType_1237->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool ComponentType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in ComponentType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in ComponentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in ComponentType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in ComponentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in ComponentType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ComponentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in ComponentType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in ComponentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in ComponentType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in ComponentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in ComponentType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in ComponentType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ComponentType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ComponentType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

ElementReferenceType * ComponentType::getTransform()
{return Transform;}

void ComponentType::setTransform(ElementReferenceType * TransformIn)
{Transform = TransformIn;}

QPIdType * ComponentType::getUUID()
{return UUID;}

void ComponentType::setUUID(QPIdType * UUIDIn)
{UUID = UUIDIn;}

ProductTraceabilityType * ComponentType::getTraceability()
{return Traceability;}

void ComponentType::setTraceability(ProductTraceabilityType * TraceabilityIn)
{Traceability = TraceabilityIn;}

ComponentType_1237_Type * ComponentType::getComponentType_1237()
{return ComponentType_1237;}

void ComponentType::setComponentType_1237(ComponentType_1237_Type * ComponentType_1237In)
{ComponentType_1237 = ComponentType_1237In;}

/*********************************************************************/

/* class ComponentTypeLisd

*/

ComponentTypeLisd::ComponentTypeLisd() {}

ComponentTypeLisd::ComponentTypeLisd(ComponentType * aComponentType)
{
  push_back(aComponentType);
}

ComponentTypeLisd::~ComponentTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ComponentType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ComponentTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class DefinitionExternalType

*/

DefinitionExternalType::DefinitionExternalType()
{
  id = 0;
  n = 0;
  DefinitionExternalTypePairs = 0;
}

DefinitionExternalType::DefinitionExternalType(
 DefinitionExternalTypeChoicePairLisd * DefinitionExternalTypePairsIn)
{
  id = 0;
  n = 0;
  DefinitionExternalTypePairs = DefinitionExternalTypePairsIn;
}

DefinitionExternalType::DefinitionExternalType(
 QIFIdType * idIn,
 NaturalType * nIn,
 DefinitionExternalTypeChoicePairLisd * DefinitionExternalTypePairsIn)
{
  id = idIn;
  n = nIn;
  DefinitionExternalTypePairs = DefinitionExternalTypePairsIn;
}

DefinitionExternalType::~DefinitionExternalType()
{
  #ifndef NODESTRUCT
  delete id;
  delete n;
  delete DefinitionExternalTypePairs;
  #endif
}

void DefinitionExternalType::printSelf(FILE * outFile)
{
  std::list<DefinitionExternalTypeChoicePair *>::iterator iter;
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
  for (iter = DefinitionExternalTypePairs->begin();
       iter != DefinitionExternalTypePairs->end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

DefinitionExternalTypeChoicePairLisd * DefinitionExternalType::getDefinitionExternalTypePairs()
{return DefinitionExternalTypePairs;}

void DefinitionExternalType::setDefinitionExternalTypePairs(DefinitionExternalTypeChoicePairLisd * DefinitionExternalTypePairsIn)
{DefinitionExternalTypePairs = DefinitionExternalTypePairsIn;}

/*********************************************************************/

/* class DefinitionExternalTypeChoicePair

*/

DefinitionExternalTypeChoicePair::DefinitionExternalTypeChoicePair() {}

DefinitionExternalTypeChoicePair::DefinitionExternalTypeChoicePair(
 whichOne DefinitionExternalTypeTypeIn,
 DefinitionExternalTypeVal DefinitionExternalTypeValueIn)
{
  DefinitionExternalTypeType = DefinitionExternalTypeTypeIn;
  DefinitionExternalTypeValue = DefinitionExternalTypeValueIn;
}

DefinitionExternalTypeChoicePair::~DefinitionExternalTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (DefinitionExternalTypeType == PrintedDrawingE)
    delete DefinitionExternalTypeValue.PrintedDrawing;
  else if (DefinitionExternalTypeType == DigitalDrawingE)
    delete DefinitionExternalTypeValue.DigitalDrawing;
  else if (DefinitionExternalTypeType == DigitalModelE)
    delete DefinitionExternalTypeValue.DigitalModel;
  else if (DefinitionExternalTypeType == PhysicalModelE)
    delete DefinitionExternalTypeValue.PhysicalModel;
  #endif
}

void DefinitionExternalTypeChoicePair::printSelf(FILE * outFile)
{
  if (DefinitionExternalTypeType == PrintedDrawingE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PrintedDrawing");
      DefinitionExternalTypeValue.PrintedDrawing->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PrintedDrawing>\n");
    }
  else if (DefinitionExternalTypeType == DigitalDrawingE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DigitalDrawing");
      DefinitionExternalTypeValue.DigitalDrawing->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DigitalDrawing>\n");
    }
  else if (DefinitionExternalTypeType == DigitalModelE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DigitalModel");
      DefinitionExternalTypeValue.DigitalModel->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DigitalModel>\n");
    }
  else if (DefinitionExternalTypeType == PhysicalModelE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PhysicalModel");
      DefinitionExternalTypeValue.PhysicalModel->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PhysicalModel>\n");
    }
}

/*********************************************************************/

/* class DefinitionExternalTypeChoicePairLisd

*/

DefinitionExternalTypeChoicePairLisd::DefinitionExternalTypeChoicePairLisd() {}

DefinitionExternalTypeChoicePairLisd::DefinitionExternalTypeChoicePairLisd(DefinitionExternalTypeChoicePair * aDefinitionExternalTypeChoicePair)
{
  push_back(aDefinitionExternalTypeChoicePair);
}

DefinitionExternalTypeChoicePairLisd::~DefinitionExternalTypeChoicePairLisd()
{
  #ifndef NODESTRUCT
  std::list<DefinitionExternalTypeChoicePair *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DefinitionExternalTypeChoicePairLisd::printSelf(FILE * outFile)
{
  std::list<DefinitionExternalTypeChoicePair *>::iterator iter;

  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

bool DefinitionExternalType::badAttributes(
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
              fprintf(stderr, "two values for id in DefinitionExternalType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DefinitionExternalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "n")
        {
          NaturalType * nVal;
          if (n)
            {
              fprintf(stderr, "two values for n in DefinitionExternalType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DefinitionExternalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DefinitionExternalType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in DefinitionExternalType\n");
      returnValue = true;
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DefinitionExternalType\n");
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
      delete n;
      n = 0;
    }
  return returnValue;
}

QIFIdType * DefinitionExternalType::getid()
{return id;}

void DefinitionExternalType::setid(QIFIdType * idIn)
{id = idIn;}

NaturalType * DefinitionExternalType::getn()
{return n;}

void DefinitionExternalType::setn(NaturalType * nIn)
{n = nIn;}

/*********************************************************************/

/* class DigitalDrawingType

*/

DigitalDrawingType::DigitalDrawingType()
{
  id = 0;
  Name = 0;
  File = 0;
  Application = 0;
  Author = 0;
  ApplicationSource = 0;
  Description = 0;
  Entities = 0;
}

DigitalDrawingType::DigitalDrawingType(
 XmlString * NameIn,
 FileType * FileIn,
 ApplicationType * ApplicationIn,
 AuthorType * AuthorIn,
 ApplicationType * ApplicationSourceIn,
 XmlString * DescriptionIn,
 EntitiesExternalType * EntitiesIn)
{
  id = 0;
  Name = NameIn;
  File = FileIn;
  Application = ApplicationIn;
  Author = AuthorIn;
  ApplicationSource = ApplicationSourceIn;
  Description = DescriptionIn;
  Entities = EntitiesIn;
}

DigitalDrawingType::DigitalDrawingType(
 QIFIdType * idIn,
 XmlString * NameIn,
 FileType * FileIn,
 ApplicationType * ApplicationIn,
 AuthorType * AuthorIn,
 ApplicationType * ApplicationSourceIn,
 XmlString * DescriptionIn,
 EntitiesExternalType * EntitiesIn)
{
  id = idIn;
  Name = NameIn;
  File = FileIn;
  Application = ApplicationIn;
  Author = AuthorIn;
  ApplicationSource = ApplicationSourceIn;
  Description = DescriptionIn;
  Entities = EntitiesIn;
}

DigitalDrawingType::~DigitalDrawingType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Name;
  delete File;
  delete Application;
  delete Author;
  delete ApplicationSource;
  delete Description;
  delete Entities;
  #endif
}

void DigitalDrawingType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<File");
  File->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</File>\n");
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
  if (Entities)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Entities");
      Entities->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Entities>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool DigitalDrawingType::badAttributes(
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
              fprintf(stderr, "two values for id in DigitalDrawingType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DigitalDrawingType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DigitalDrawingType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in DigitalDrawingType\n");
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

QIFIdType * DigitalDrawingType::getid()
{return id;}

void DigitalDrawingType::setid(QIFIdType * idIn)
{id = idIn;}

XmlString * DigitalDrawingType::getName()
{return Name;}

void DigitalDrawingType::setName(XmlString * NameIn)
{Name = NameIn;}

FileType * DigitalDrawingType::getFile()
{return File;}

void DigitalDrawingType::setFile(FileType * FileIn)
{File = FileIn;}

ApplicationType * DigitalDrawingType::getApplication()
{return Application;}

void DigitalDrawingType::setApplication(ApplicationType * ApplicationIn)
{Application = ApplicationIn;}

AuthorType * DigitalDrawingType::getAuthor()
{return Author;}

void DigitalDrawingType::setAuthor(AuthorType * AuthorIn)
{Author = AuthorIn;}

ApplicationType * DigitalDrawingType::getApplicationSource()
{return ApplicationSource;}

void DigitalDrawingType::setApplicationSource(ApplicationType * ApplicationSourceIn)
{ApplicationSource = ApplicationSourceIn;}

XmlString * DigitalDrawingType::getDescription()
{return Description;}

void DigitalDrawingType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

EntitiesExternalType * DigitalDrawingType::getEntities()
{return Entities;}

void DigitalDrawingType::setEntities(EntitiesExternalType * EntitiesIn)
{Entities = EntitiesIn;}

/*********************************************************************/

/* class DigitalModelType

*/

DigitalModelType::DigitalModelType()
{
  id = 0;
  Name = 0;
  File = 0;
  Application = 0;
  Author = 0;
  ApplicationSource = 0;
  Description = 0;
  Units = 0;
  GDT = 0;
  Topology = 0;
  Entities = 0;
}

DigitalModelType::DigitalModelType(
 XmlString * NameIn,
 FileType * FileIn,
 ApplicationType * ApplicationIn,
 AuthorType * AuthorIn,
 ApplicationType * ApplicationSourceIn,
 XmlString * DescriptionIn,
 OtherUnitsType * UnitsIn,
 GDTEnumType * GDTIn,
 TopologyEnumType * TopologyIn,
 EntitiesExternalType * EntitiesIn)
{
  id = 0;
  Name = NameIn;
  File = FileIn;
  Application = ApplicationIn;
  Author = AuthorIn;
  ApplicationSource = ApplicationSourceIn;
  Description = DescriptionIn;
  Units = UnitsIn;
  GDT = GDTIn;
  Topology = TopologyIn;
  Entities = EntitiesIn;
}

DigitalModelType::DigitalModelType(
 QIFIdType * idIn,
 XmlString * NameIn,
 FileType * FileIn,
 ApplicationType * ApplicationIn,
 AuthorType * AuthorIn,
 ApplicationType * ApplicationSourceIn,
 XmlString * DescriptionIn,
 OtherUnitsType * UnitsIn,
 GDTEnumType * GDTIn,
 TopologyEnumType * TopologyIn,
 EntitiesExternalType * EntitiesIn)
{
  id = idIn;
  Name = NameIn;
  File = FileIn;
  Application = ApplicationIn;
  Author = AuthorIn;
  ApplicationSource = ApplicationSourceIn;
  Description = DescriptionIn;
  Units = UnitsIn;
  GDT = GDTIn;
  Topology = TopologyIn;
  Entities = EntitiesIn;
}

DigitalModelType::~DigitalModelType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Name;
  delete File;
  delete Application;
  delete Author;
  delete ApplicationSource;
  delete Description;
  delete Units;
  delete GDT;
  delete Topology;
  delete Entities;
  #endif
}

void DigitalModelType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<File");
  File->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</File>\n");
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
  if (Units)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Units");
      Units->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Units>\n");
    }
  if (GDT)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<GDT");
      GDT->printSelf(outFile);
      fprintf(outFile, "</GDT>\n");
    }
  if (Topology)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Topology");
      Topology->printSelf(outFile);
      fprintf(outFile, "</Topology>\n");
    }
  if (Entities)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Entities");
      Entities->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Entities>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool DigitalModelType::badAttributes(
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
              fprintf(stderr, "two values for id in DigitalModelType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DigitalModelType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DigitalModelType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in DigitalModelType\n");
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

QIFIdType * DigitalModelType::getid()
{return id;}

void DigitalModelType::setid(QIFIdType * idIn)
{id = idIn;}

XmlString * DigitalModelType::getName()
{return Name;}

void DigitalModelType::setName(XmlString * NameIn)
{Name = NameIn;}

FileType * DigitalModelType::getFile()
{return File;}

void DigitalModelType::setFile(FileType * FileIn)
{File = FileIn;}

ApplicationType * DigitalModelType::getApplication()
{return Application;}

void DigitalModelType::setApplication(ApplicationType * ApplicationIn)
{Application = ApplicationIn;}

AuthorType * DigitalModelType::getAuthor()
{return Author;}

void DigitalModelType::setAuthor(AuthorType * AuthorIn)
{Author = AuthorIn;}

ApplicationType * DigitalModelType::getApplicationSource()
{return ApplicationSource;}

void DigitalModelType::setApplicationSource(ApplicationType * ApplicationSourceIn)
{ApplicationSource = ApplicationSourceIn;}

XmlString * DigitalModelType::getDescription()
{return Description;}

void DigitalModelType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

OtherUnitsType * DigitalModelType::getUnits()
{return Units;}

void DigitalModelType::setUnits(OtherUnitsType * UnitsIn)
{Units = UnitsIn;}

GDTEnumType * DigitalModelType::getGDT()
{return GDT;}

void DigitalModelType::setGDT(GDTEnumType * GDTIn)
{GDT = GDTIn;}

TopologyEnumType * DigitalModelType::getTopology()
{return Topology;}

void DigitalModelType::setTopology(TopologyEnumType * TopologyIn)
{Topology = TopologyIn;}

EntitiesExternalType * DigitalModelType::getEntities()
{return Entities;}

void DigitalModelType::setEntities(EntitiesExternalType * EntitiesIn)
{Entities = EntitiesIn;}

/*********************************************************************/

/* class FileInternalType

*/

FileInternalType::FileInternalType()
{
  Name = 0;
  Version = 0;
}

FileInternalType::FileInternalType(
 XmlString * NameIn,
 VersionType * VersionIn)
{
  Name = NameIn;
  Version = VersionIn;
}

FileInternalType::~FileInternalType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete Version;
  #endif
}

void FileInternalType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlString * FileInternalType::getName()
{return Name;}

void FileInternalType::setName(XmlString * NameIn)
{Name = NameIn;}

VersionType * FileInternalType::getVersion()
{return Version;}

void FileInternalType::setVersion(VersionType * VersionIn)
{Version = VersionIn;}

/*********************************************************************/

/* class FolderAssemblyType

*/

FolderAssemblyType::FolderAssemblyType() :
  FolderPartAssemblyBaseType()
{
  ComponentIds = 0;
}

FolderAssemblyType::FolderAssemblyType(
 AttributesType * AttributesIn,
 ArrayReferenceType * FolderIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn,
 ArrayReferenceFullType * FeatureZoneIdsIn,
 ArrayReferenceFullType * CharacteristicNominalIdsIn,
 ArrayReferenceFullType * NoteIdsIn,
 ArrayReferenceFullType * PartNoteIdsIn,
 ArrayReferenceFullType * DatumDefinitionIdsIn,
 ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
 ArrayReferenceFullType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn,
 ArrayReferenceType * ComponentIdsIn) :
  FolderPartAssemblyBaseType(
    AttributesIn,
    FolderIdsIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
  ComponentIds = ComponentIdsIn;
}

FolderAssemblyType::FolderAssemblyType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 ArrayReferenceType * FolderIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn,
 ArrayReferenceFullType * FeatureZoneIdsIn,
 ArrayReferenceFullType * CharacteristicNominalIdsIn,
 ArrayReferenceFullType * NoteIdsIn,
 ArrayReferenceFullType * PartNoteIdsIn,
 ArrayReferenceFullType * DatumDefinitionIdsIn,
 ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
 ArrayReferenceFullType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn,
 ArrayReferenceType * ComponentIdsIn) :
  FolderPartAssemblyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    FolderIdsIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
  ComponentIds = ComponentIdsIn;
}

FolderAssemblyType::~FolderAssemblyType()
{
  #ifndef NODESTRUCT
  delete ComponentIds;
  #endif
}

void FolderAssemblyType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (FolderIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FolderIds");
      FolderIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FolderIds>\n");
    }
  if (FeatureNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalIds");
      FeatureNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureNominalIds>\n");
    }
  if (FeatureZoneIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureZoneIds");
      FeatureZoneIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureZoneIds>\n");
    }
  if (CharacteristicNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicNominalIds");
      CharacteristicNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicNominalIds>\n");
    }
  if (NoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteIds");
      NoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteIds>\n");
    }
  if (PartNoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteIds");
      PartNoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteIds>\n");
    }
  if (DatumDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionIds");
      DatumDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumDefinitionIds>\n");
    }
  if (DatumTargetDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitionIds");
      DatumTargetDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetDefinitionIds>\n");
    }
  if (DatumReferenceFrameIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFrameIds");
      DatumReferenceFrameIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumReferenceFrameIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  if (CoordinateSystemIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemIds");
      CoordinateSystemIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemIds>\n");
    }
  if (AuxiliaryIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AuxiliaryIds");
      AuxiliaryIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AuxiliaryIds>\n");
    }
  if (ViewIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ViewIds");
      ViewIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ViewIds>\n");
    }
  if (PointCloudIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointCloudIds");
      PointCloudIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointCloudIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ComponentIds");
  ComponentIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ComponentIds>\n");
  doSpaces(-INDENT, outFile);
}

bool FolderAssemblyType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in FolderAssemblyType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in FolderAssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in FolderAssemblyType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in FolderAssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in FolderAssemblyType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FolderAssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in FolderAssemblyType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in FolderAssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in FolderAssemblyType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in FolderAssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in FolderAssemblyType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in FolderAssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FolderAssemblyType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in FolderAssemblyType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

ArrayReferenceType * FolderAssemblyType::getComponentIds()
{return ComponentIds;}

void FolderAssemblyType::setComponentIds(ArrayReferenceType * ComponentIdsIn)
{ComponentIds = ComponentIdsIn;}

/*********************************************************************/

/* class FolderAssemblyTypeLisd

*/

FolderAssemblyTypeLisd::FolderAssemblyTypeLisd() {}

FolderAssemblyTypeLisd::FolderAssemblyTypeLisd(FolderAssemblyType * aFolderAssemblyType)
{
  push_back(aFolderAssemblyType);
}

FolderAssemblyTypeLisd::~FolderAssemblyTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<FolderAssemblyType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void FolderAssemblyTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class FolderPartAssemblyBaseType

*/

FolderPartAssemblyBaseType::FolderPartAssemblyBaseType() :
  DrawableBaseType()
{
  FolderIds = 0;
  FeatureNominalIds = 0;
  FeatureZoneIds = 0;
  CharacteristicNominalIds = 0;
  NoteIds = 0;
  PartNoteIds = 0;
  DatumDefinitionIds = 0;
  DatumTargetDefinitionIds = 0;
  DatumReferenceFrameIds = 0;
  BodyIds = 0;
  CoordinateSystemIds = 0;
  AuxiliaryIds = 0;
  ViewIds = 0;
  PointCloudIds = 0;
}

FolderPartAssemblyBaseType::FolderPartAssemblyBaseType(
 AttributesType * AttributesIn,
 ArrayReferenceType * FolderIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn,
 ArrayReferenceFullType * FeatureZoneIdsIn,
 ArrayReferenceFullType * CharacteristicNominalIdsIn,
 ArrayReferenceFullType * NoteIdsIn,
 ArrayReferenceFullType * PartNoteIdsIn,
 ArrayReferenceFullType * DatumDefinitionIdsIn,
 ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
 ArrayReferenceFullType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn) :
  DrawableBaseType(
    AttributesIn)
{
  FolderIds = FolderIdsIn;
  FeatureNominalIds = FeatureNominalIdsIn;
  FeatureZoneIds = FeatureZoneIdsIn;
  CharacteristicNominalIds = CharacteristicNominalIdsIn;
  NoteIds = NoteIdsIn;
  PartNoteIds = PartNoteIdsIn;
  DatumDefinitionIds = DatumDefinitionIdsIn;
  DatumTargetDefinitionIds = DatumTargetDefinitionIdsIn;
  DatumReferenceFrameIds = DatumReferenceFrameIdsIn;
  BodyIds = BodyIdsIn;
  CoordinateSystemIds = CoordinateSystemIdsIn;
  AuxiliaryIds = AuxiliaryIdsIn;
  ViewIds = ViewIdsIn;
  PointCloudIds = PointCloudIdsIn;
}

FolderPartAssemblyBaseType::FolderPartAssemblyBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 ArrayReferenceType * FolderIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn,
 ArrayReferenceFullType * FeatureZoneIdsIn,
 ArrayReferenceFullType * CharacteristicNominalIdsIn,
 ArrayReferenceFullType * NoteIdsIn,
 ArrayReferenceFullType * PartNoteIdsIn,
 ArrayReferenceFullType * DatumDefinitionIdsIn,
 ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
 ArrayReferenceFullType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  FolderIds = FolderIdsIn;
  FeatureNominalIds = FeatureNominalIdsIn;
  FeatureZoneIds = FeatureZoneIdsIn;
  CharacteristicNominalIds = CharacteristicNominalIdsIn;
  NoteIds = NoteIdsIn;
  PartNoteIds = PartNoteIdsIn;
  DatumDefinitionIds = DatumDefinitionIdsIn;
  DatumTargetDefinitionIds = DatumTargetDefinitionIdsIn;
  DatumReferenceFrameIds = DatumReferenceFrameIdsIn;
  BodyIds = BodyIdsIn;
  CoordinateSystemIds = CoordinateSystemIdsIn;
  AuxiliaryIds = AuxiliaryIdsIn;
  ViewIds = ViewIdsIn;
  PointCloudIds = PointCloudIdsIn;
}

FolderPartAssemblyBaseType::~FolderPartAssemblyBaseType()
{
  #ifndef NODESTRUCT
  delete FolderIds;
  delete FeatureNominalIds;
  delete FeatureZoneIds;
  delete CharacteristicNominalIds;
  delete NoteIds;
  delete PartNoteIds;
  delete DatumDefinitionIds;
  delete DatumTargetDefinitionIds;
  delete DatumReferenceFrameIds;
  delete BodyIds;
  delete CoordinateSystemIds;
  delete AuxiliaryIds;
  delete ViewIds;
  delete PointCloudIds;
  #endif
}

void FolderPartAssemblyBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (FolderIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FolderIds");
      FolderIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FolderIds>\n");
    }
  if (FeatureNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalIds");
      FeatureNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureNominalIds>\n");
    }
  if (FeatureZoneIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureZoneIds");
      FeatureZoneIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureZoneIds>\n");
    }
  if (CharacteristicNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicNominalIds");
      CharacteristicNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicNominalIds>\n");
    }
  if (NoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteIds");
      NoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteIds>\n");
    }
  if (PartNoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteIds");
      PartNoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteIds>\n");
    }
  if (DatumDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionIds");
      DatumDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumDefinitionIds>\n");
    }
  if (DatumTargetDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitionIds");
      DatumTargetDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetDefinitionIds>\n");
    }
  if (DatumReferenceFrameIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFrameIds");
      DatumReferenceFrameIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumReferenceFrameIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  if (CoordinateSystemIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemIds");
      CoordinateSystemIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemIds>\n");
    }
  if (AuxiliaryIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AuxiliaryIds");
      AuxiliaryIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AuxiliaryIds>\n");
    }
  if (ViewIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ViewIds");
      ViewIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ViewIds>\n");
    }
  if (PointCloudIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointCloudIds");
      PointCloudIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointCloudIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool FolderPartAssemblyBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in FolderPartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in FolderPartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in FolderPartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in FolderPartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in FolderPartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FolderPartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in FolderPartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in FolderPartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in FolderPartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in FolderPartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in FolderPartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in FolderPartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FolderPartAssemblyBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in FolderPartAssemblyBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

ArrayReferenceType * FolderPartAssemblyBaseType::getFolderIds()
{return FolderIds;}

void FolderPartAssemblyBaseType::setFolderIds(ArrayReferenceType * FolderIdsIn)
{FolderIds = FolderIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getFeatureNominalIds()
{return FeatureNominalIds;}

void FolderPartAssemblyBaseType::setFeatureNominalIds(ArrayReferenceFullType * FeatureNominalIdsIn)
{FeatureNominalIds = FeatureNominalIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getFeatureZoneIds()
{return FeatureZoneIds;}

void FolderPartAssemblyBaseType::setFeatureZoneIds(ArrayReferenceFullType * FeatureZoneIdsIn)
{FeatureZoneIds = FeatureZoneIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getCharacteristicNominalIds()
{return CharacteristicNominalIds;}

void FolderPartAssemblyBaseType::setCharacteristicNominalIds(ArrayReferenceFullType * CharacteristicNominalIdsIn)
{CharacteristicNominalIds = CharacteristicNominalIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getNoteIds()
{return NoteIds;}

void FolderPartAssemblyBaseType::setNoteIds(ArrayReferenceFullType * NoteIdsIn)
{NoteIds = NoteIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getPartNoteIds()
{return PartNoteIds;}

void FolderPartAssemblyBaseType::setPartNoteIds(ArrayReferenceFullType * PartNoteIdsIn)
{PartNoteIds = PartNoteIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getDatumDefinitionIds()
{return DatumDefinitionIds;}

void FolderPartAssemblyBaseType::setDatumDefinitionIds(ArrayReferenceFullType * DatumDefinitionIdsIn)
{DatumDefinitionIds = DatumDefinitionIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getDatumTargetDefinitionIds()
{return DatumTargetDefinitionIds;}

void FolderPartAssemblyBaseType::setDatumTargetDefinitionIds(ArrayReferenceFullType * DatumTargetDefinitionIdsIn)
{DatumTargetDefinitionIds = DatumTargetDefinitionIdsIn;}

ArrayReferenceFullType * FolderPartAssemblyBaseType::getDatumReferenceFrameIds()
{return DatumReferenceFrameIds;}

void FolderPartAssemblyBaseType::setDatumReferenceFrameIds(ArrayReferenceFullType * DatumReferenceFrameIdsIn)
{DatumReferenceFrameIds = DatumReferenceFrameIdsIn;}

ArrayReferenceType * FolderPartAssemblyBaseType::getBodyIds()
{return BodyIds;}

void FolderPartAssemblyBaseType::setBodyIds(ArrayReferenceType * BodyIdsIn)
{BodyIds = BodyIdsIn;}

ArrayReferenceType * FolderPartAssemblyBaseType::getCoordinateSystemIds()
{return CoordinateSystemIds;}

void FolderPartAssemblyBaseType::setCoordinateSystemIds(ArrayReferenceType * CoordinateSystemIdsIn)
{CoordinateSystemIds = CoordinateSystemIdsIn;}

ArrayReferenceType * FolderPartAssemblyBaseType::getAuxiliaryIds()
{return AuxiliaryIds;}

void FolderPartAssemblyBaseType::setAuxiliaryIds(ArrayReferenceType * AuxiliaryIdsIn)
{AuxiliaryIds = AuxiliaryIdsIn;}

ArrayReferenceType * FolderPartAssemblyBaseType::getViewIds()
{return ViewIds;}

void FolderPartAssemblyBaseType::setViewIds(ArrayReferenceType * ViewIdsIn)
{ViewIds = ViewIdsIn;}

ArrayReferenceType * FolderPartAssemblyBaseType::getPointCloudIds()
{return PointCloudIds;}

void FolderPartAssemblyBaseType::setPointCloudIds(ArrayReferenceType * PointCloudIdsIn)
{PointCloudIds = PointCloudIdsIn;}

/*********************************************************************/

/* class FolderPartType

*/

FolderPartType::FolderPartType() :
  FolderPartAssemblyBaseType()
{
}

FolderPartType::FolderPartType(
 AttributesType * AttributesIn,
 ArrayReferenceType * FolderIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn,
 ArrayReferenceFullType * FeatureZoneIdsIn,
 ArrayReferenceFullType * CharacteristicNominalIdsIn,
 ArrayReferenceFullType * NoteIdsIn,
 ArrayReferenceFullType * PartNoteIdsIn,
 ArrayReferenceFullType * DatumDefinitionIdsIn,
 ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
 ArrayReferenceFullType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn) :
  FolderPartAssemblyBaseType(
    AttributesIn,
    FolderIdsIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
}

FolderPartType::FolderPartType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 ArrayReferenceType * FolderIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn,
 ArrayReferenceFullType * FeatureZoneIdsIn,
 ArrayReferenceFullType * CharacteristicNominalIdsIn,
 ArrayReferenceFullType * NoteIdsIn,
 ArrayReferenceFullType * PartNoteIdsIn,
 ArrayReferenceFullType * DatumDefinitionIdsIn,
 ArrayReferenceFullType * DatumTargetDefinitionIdsIn,
 ArrayReferenceFullType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn) :
  FolderPartAssemblyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    FolderIdsIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
}

FolderPartType::~FolderPartType()
{
  #ifndef NODESTRUCT
  #endif
}

void FolderPartType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (FolderIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FolderIds");
      FolderIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FolderIds>\n");
    }
  if (FeatureNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalIds");
      FeatureNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureNominalIds>\n");
    }
  if (FeatureZoneIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureZoneIds");
      FeatureZoneIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureZoneIds>\n");
    }
  if (CharacteristicNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicNominalIds");
      CharacteristicNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicNominalIds>\n");
    }
  if (NoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteIds");
      NoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteIds>\n");
    }
  if (PartNoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteIds");
      PartNoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteIds>\n");
    }
  if (DatumDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionIds");
      DatumDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumDefinitionIds>\n");
    }
  if (DatumTargetDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitionIds");
      DatumTargetDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetDefinitionIds>\n");
    }
  if (DatumReferenceFrameIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFrameIds");
      DatumReferenceFrameIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumReferenceFrameIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  if (CoordinateSystemIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemIds");
      CoordinateSystemIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemIds>\n");
    }
  if (AuxiliaryIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AuxiliaryIds");
      AuxiliaryIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AuxiliaryIds>\n");
    }
  if (ViewIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ViewIds");
      ViewIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ViewIds>\n");
    }
  if (PointCloudIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointCloudIds");
      PointCloudIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointCloudIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool FolderPartType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in FolderPartType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in FolderPartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in FolderPartType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in FolderPartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in FolderPartType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FolderPartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in FolderPartType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in FolderPartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in FolderPartType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in FolderPartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in FolderPartType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in FolderPartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FolderPartType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in FolderPartType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class FolderPartTypeLisd

*/

FolderPartTypeLisd::FolderPartTypeLisd() {}

FolderPartTypeLisd::FolderPartTypeLisd(FolderPartType * aFolderPartType)
{
  push_back(aFolderPartType);
}

FolderPartTypeLisd::~FolderPartTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<FolderPartType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void FolderPartTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class FoldersAssemblyType

*/

FoldersAssemblyType::FoldersAssemblyType()
{
  n = 0;
  FolderAssembly = 0;
}

FoldersAssemblyType::FoldersAssemblyType(
 FolderAssemblyTypeLisd * FolderAssemblyIn)
{
  n = 0;
  FolderAssembly = FolderAssemblyIn;
}

FoldersAssemblyType::FoldersAssemblyType(
 NaturalType * nIn,
 FolderAssemblyTypeLisd * FolderAssemblyIn)
{
  n = nIn;
  FolderAssembly = FolderAssemblyIn;
}

FoldersAssemblyType::~FoldersAssemblyType()
{
  #ifndef NODESTRUCT
  delete n;
  delete FolderAssembly;
  #endif
}

void FoldersAssemblyType::printSelf(FILE * outFile)
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
    if (!FolderAssembly)
      {
        fprintf(stderr, "FolderAssembly list is missing\n");
        exit(1);
      }
    if (FolderAssembly->size() == 0)
      {
        fprintf(stderr, "FolderAssembly list is empty\n");
        exit(1);
      }
    std::list<FolderAssemblyType *>::iterator iter;
    for (iter = FolderAssembly->begin();
         iter != FolderAssembly->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<FolderAssembly");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</FolderAssembly>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool FoldersAssemblyType::badAttributes(
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
              fprintf(stderr, "two values for n in FoldersAssemblyType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in FoldersAssemblyType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FoldersAssemblyType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in FoldersAssemblyType\n");
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

NaturalType * FoldersAssemblyType::getn()
{return n;}

void FoldersAssemblyType::setn(NaturalType * nIn)
{n = nIn;}

FolderAssemblyTypeLisd * FoldersAssemblyType::getFolderAssembly()
{return FolderAssembly;}

void FoldersAssemblyType::setFolderAssembly(FolderAssemblyTypeLisd * FolderAssemblyIn)
{FolderAssembly = FolderAssemblyIn;}

/*********************************************************************/

/* class FoldersPartType

*/

FoldersPartType::FoldersPartType()
{
  n = 0;
  FolderPart = 0;
}

FoldersPartType::FoldersPartType(
 FolderPartTypeLisd * FolderPartIn)
{
  n = 0;
  FolderPart = FolderPartIn;
}

FoldersPartType::FoldersPartType(
 NaturalType * nIn,
 FolderPartTypeLisd * FolderPartIn)
{
  n = nIn;
  FolderPart = FolderPartIn;
}

FoldersPartType::~FoldersPartType()
{
  #ifndef NODESTRUCT
  delete n;
  delete FolderPart;
  #endif
}

void FoldersPartType::printSelf(FILE * outFile)
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
    if (!FolderPart)
      {
        fprintf(stderr, "FolderPart list is missing\n");
        exit(1);
      }
    if (FolderPart->size() == 0)
      {
        fprintf(stderr, "FolderPart list is empty\n");
        exit(1);
      }
    std::list<FolderPartType *>::iterator iter;
    for (iter = FolderPart->begin();
         iter != FolderPart->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<FolderPart");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</FolderPart>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool FoldersPartType::badAttributes(
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
              fprintf(stderr, "two values for n in FoldersPartType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in FoldersPartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FoldersPartType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in FoldersPartType\n");
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

NaturalType * FoldersPartType::getn()
{return n;}

void FoldersPartType::setn(NaturalType * nIn)
{n = nIn;}

FolderPartTypeLisd * FoldersPartType::getFolderPart()
{return FolderPart;}

void FoldersPartType::setFolderPart(FolderPartTypeLisd * FolderPartIn)
{FolderPart = FolderPartIn;}

/*********************************************************************/

/* class GDTEnumType

*/

GDTEnumType::GDTEnumType() :
  XmlString()
{
}

GDTEnumType::GDTEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "UNKNOWN") &&
           strcmp(val.c_str(), "HUMANREAD") &&
           strcmp(val.c_str(), "MACHINEREAD") &&
           strcmp(val.c_str(), "ABSENT"));
}

GDTEnumType::~GDTEnumType() {}

bool GDTEnumType::GDTEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "UNKNOWN") &&
          strcmp(val.c_str(), "HUMANREAD") &&
          strcmp(val.c_str(), "MACHINEREAD") &&
          strcmp(val.c_str(), "ABSENT"));
}

void GDTEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "GDTEnumType");
}

void GDTEnumType::printSelf(FILE * outFile)
{
  if (GDTEnumTypeIsBad())
    {
      fprintf(stderr, "bad GDTEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void GDTEnumType::oPrintSelf(FILE * outFile)
{
  if (GDTEnumTypeIsBad())
    {
      fprintf(stderr, "bad GDTEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/*********************************************************************/

/* class LayerSetType

*/

LayerSetType::LayerSetType()
{
  n = 0;
  Layer = 0;
}

LayerSetType::LayerSetType(
 LayerTypeLisd * LayerIn)
{
  n = 0;
  Layer = LayerIn;
}

LayerSetType::LayerSetType(
 NaturalType * nIn,
 LayerTypeLisd * LayerIn)
{
  n = nIn;
  Layer = LayerIn;
}

LayerSetType::~LayerSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Layer;
  #endif
}

void LayerSetType::printSelf(FILE * outFile)
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
    if (!Layer)
      {
        fprintf(stderr, "Layer list is missing\n");
        exit(1);
      }
    if (Layer->size() == 0)
      {
        fprintf(stderr, "Layer list is empty\n");
        exit(1);
      }
    std::list<LayerType *>::iterator iter;
    for (iter = Layer->begin();
         iter != Layer->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Layer");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Layer>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool LayerSetType::badAttributes(
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
              fprintf(stderr, "two values for n in LayerSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in LayerSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LayerSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in LayerSetType\n");
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

NaturalType * LayerSetType::getn()
{return n;}

void LayerSetType::setn(NaturalType * nIn)
{n = nIn;}

LayerTypeLisd * LayerSetType::getLayer()
{return Layer;}

void LayerSetType::setLayer(LayerTypeLisd * LayerIn)
{Layer = LayerIn;}

/*********************************************************************/

/* class LayerType

*/

LayerType::LayerType() :
  DrawableBaseType()
{
  applyColor = 0;
  index = 0;
  ElementIds = 0;
}

LayerType::LayerType(
 AttributesType * AttributesIn,
 ArrayReferenceFullType * ElementIdsIn) :
  DrawableBaseType(
    AttributesIn)
{
  applyColor = 0;
  index = 0;
  ElementIds = ElementIdsIn;
}

LayerType::LayerType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlBoolean * applyColorIn,
 XmlUnsignedInt * indexIn,
 ArrayReferenceFullType * ElementIdsIn) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  applyColor = applyColorIn;
  index = indexIn;
  ElementIds = ElementIdsIn;
}

LayerType::~LayerType()
{
  #ifndef NODESTRUCT
  delete applyColor;
  delete index;
  delete ElementIds;
  #endif
}

void LayerType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (applyColor)
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
      fprintf(outFile, "applyColor=\"");
      applyColor->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (index)
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
      fprintf(outFile, "index=\"");
      index->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"index\" missing\n");
      exit(1);
    }
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (ElementIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ElementIds");
      ElementIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ElementIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool LayerType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "applyColor")
        {
          XmlBoolean * applyColorVal;
          if (applyColor)
            {
              fprintf(stderr, "two values for applyColor in LayerType\n");
              returnValue = true;
              break;
            }
          applyColorVal = new XmlBoolean(decl->val.c_str());
          if (applyColorVal->bad)
            {
              delete applyColorVal;
              fprintf(stderr, "bad value %s for applyColor in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            applyColor = applyColorVal;
        }
      else if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in LayerType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in LayerType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in LayerType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "index")
        {
          XmlUnsignedInt * indexVal;
          if (index)
            {
              fprintf(stderr, "two values for index in LayerType\n");
              returnValue = true;
              break;
            }
          indexVal = new XmlUnsignedInt(decl->val.c_str());
          if (indexVal->bad)
            {
              delete indexVal;
              fprintf(stderr, "bad value %s for index in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            index = indexVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in LayerType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in LayerType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in LayerType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in LayerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LayerType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in LayerType\n");
      returnValue = true;
    }
  if (index == 0)
    {
      fprintf(stderr, "required attribute \"index\" missing in LayerType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete applyColor;
      applyColor = 0;
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete index;
      index = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

XmlBoolean * LayerType::getapplyColor()
{return applyColor;}

void LayerType::setapplyColor(XmlBoolean * applyColorIn)
{applyColor = applyColorIn;}

XmlUnsignedInt * LayerType::getindex()
{return index;}

void LayerType::setindex(XmlUnsignedInt * indexIn)
{index = indexIn;}

ArrayReferenceFullType * LayerType::getElementIds()
{return ElementIds;}

void LayerType::setElementIds(ArrayReferenceFullType * ElementIdsIn)
{ElementIds = ElementIdsIn;}

/*********************************************************************/

/* class LayerTypeLisd

*/

LayerTypeLisd::LayerTypeLisd() {}

LayerTypeLisd::LayerTypeLisd(LayerType * aLayerType)
{
  push_back(aLayerType);
}

LayerTypeLisd::~LayerTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<LayerType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LayerTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class NoteFlagSetType

*/

NoteFlagSetType::NoteFlagSetType()
{
  n = 0;
  NoteFlag = 0;
}

NoteFlagSetType::NoteFlagSetType(
 NoteFlagTypeLisd * NoteFlagIn)
{
  n = 0;
  NoteFlag = NoteFlagIn;
}

NoteFlagSetType::NoteFlagSetType(
 NaturalType * nIn,
 NoteFlagTypeLisd * NoteFlagIn)
{
  n = nIn;
  NoteFlag = NoteFlagIn;
}

NoteFlagSetType::~NoteFlagSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete NoteFlag;
  #endif
}

void NoteFlagSetType::printSelf(FILE * outFile)
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
    if (!NoteFlag)
      {
        fprintf(stderr, "NoteFlag list is missing\n");
        exit(1);
      }
    if (NoteFlag->size() == 0)
      {
        fprintf(stderr, "NoteFlag list is empty\n");
        exit(1);
      }
    std::list<NoteFlagType *>::iterator iter;
    for (iter = NoteFlag->begin();
         iter != NoteFlag->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<NoteFlag");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</NoteFlag>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool NoteFlagSetType::badAttributes(
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
              fprintf(stderr, "two values for n in NoteFlagSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in NoteFlagSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NoteFlagSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in NoteFlagSetType\n");
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

NaturalType * NoteFlagSetType::getn()
{return n;}

void NoteFlagSetType::setn(NaturalType * nIn)
{n = nIn;}

NoteFlagTypeLisd * NoteFlagSetType::getNoteFlag()
{return NoteFlag;}

void NoteFlagSetType::setNoteFlag(NoteFlagTypeLisd * NoteFlagIn)
{NoteFlag = NoteFlagIn;}

/*********************************************************************/

/* class NoteFlagType

*/

NoteFlagType::NoteFlagType() :
  NoteType()
{
  TextHidden = 0;
  URI = 0;
}

NoteFlagType::NoteFlagType(
 AttributesType * AttributesIn,
 ArrayReferenceFullType * EntityInternalIdsIn,
 ArrayReferenceFullType * EntityExternalIdsIn,
 XmlString * TextIn,
 XmlString * TextHiddenIn,
 XmlAnyURI * URIIn) :
  NoteType(
    AttributesIn,
    EntityInternalIdsIn,
    EntityExternalIdsIn,
    TextIn)
{
  TextHidden = TextHiddenIn;
  URI = URIIn;
}

NoteFlagType::NoteFlagType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 NoteFormEnumType * formIn,
 ArrayReferenceFullType * EntityInternalIdsIn,
 ArrayReferenceFullType * EntityExternalIdsIn,
 XmlString * TextIn,
 XmlString * TextHiddenIn,
 XmlAnyURI * URIIn) :
  NoteType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    formIn,
    EntityInternalIdsIn,
    EntityExternalIdsIn,
    TextIn)
{
  TextHidden = TextHiddenIn;
  URI = URIIn;
}

NoteFlagType::~NoteFlagType()
{
  #ifndef NODESTRUCT
  delete TextHidden;
  delete URI;
  #endif
}

void NoteFlagType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (EntityInternalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EntityInternalIds");
      EntityInternalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EntityInternalIds>\n");
    }
  if (EntityExternalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EntityExternalIds");
      EntityExternalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EntityExternalIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Text");
  Text->printSelf(outFile);
  fprintf(outFile, "</Text>\n");
  if (TextHidden)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TextHidden");
      TextHidden->printSelf(outFile);
      fprintf(outFile, "</TextHidden>\n");
    }
  if (URI)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<URI");
      URI->printSelf(outFile);
      fprintf(outFile, "</URI>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool NoteFlagType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in NoteFlagType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in NoteFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "form")
        {
          NoteFormEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in NoteFlagType\n");
              returnValue = true;
              break;
            }
          formVal = new NoteFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in NoteFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in NoteFlagType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in NoteFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in NoteFlagType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in NoteFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in NoteFlagType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in NoteFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in NoteFlagType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in NoteFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in NoteFlagType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in NoteFlagType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NoteFlagType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in NoteFlagType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete form;
      form = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

XmlString * NoteFlagType::getTextHidden()
{return TextHidden;}

void NoteFlagType::setTextHidden(XmlString * TextHiddenIn)
{TextHidden = TextHiddenIn;}

XmlAnyURI * NoteFlagType::getURI()
{return URI;}

void NoteFlagType::setURI(XmlAnyURI * URIIn)
{URI = URIIn;}

/*********************************************************************/

/* class NoteFlagTypeLisd

*/

NoteFlagTypeLisd::NoteFlagTypeLisd() {}

NoteFlagTypeLisd::NoteFlagTypeLisd(NoteFlagType * aNoteFlagType)
{
  push_back(aNoteFlagType);
}

NoteFlagTypeLisd::~NoteFlagTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<NoteFlagType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void NoteFlagTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class NoteFormEnumType

*/

NoteFormEnumType::NoteFormEnumType() :
  XmlString()
{
}

NoteFormEnumType::NoteFormEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "3D") &&
           strcmp(val.c_str(), "SCREEN"));
}

NoteFormEnumType::~NoteFormEnumType() {}

bool NoteFormEnumType::NoteFormEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "3D") &&
          strcmp(val.c_str(), "SCREEN"));
}

void NoteFormEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "NoteFormEnumType");
}

void NoteFormEnumType::printSelf(FILE * outFile)
{
  if (NoteFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad NoteFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void NoteFormEnumType::oPrintSelf(FILE * outFile)
{
  if (NoteFormEnumTypeIsBad())
    {
      fprintf(stderr, "bad NoteFormEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/*********************************************************************/

/* class NoteSetType

*/

NoteSetType::NoteSetType()
{
  n = 0;
  Note = 0;
}

NoteSetType::NoteSetType(
 NoteTypeLisd * NoteIn)
{
  n = 0;
  Note = NoteIn;
}

NoteSetType::NoteSetType(
 NaturalType * nIn,
 NoteTypeLisd * NoteIn)
{
  n = nIn;
  Note = NoteIn;
}

NoteSetType::~NoteSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Note;
  #endif
}

void NoteSetType::printSelf(FILE * outFile)
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
    if (!Note)
      {
        fprintf(stderr, "Note list is missing\n");
        exit(1);
      }
    if (Note->size() == 0)
      {
        fprintf(stderr, "Note list is empty\n");
        exit(1);
      }
    std::list<NoteType *>::iterator iter;
    for (iter = Note->begin();
         iter != Note->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Note");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Note>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool NoteSetType::badAttributes(
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
              fprintf(stderr, "two values for n in NoteSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in NoteSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NoteSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in NoteSetType\n");
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

NaturalType * NoteSetType::getn()
{return n;}

void NoteSetType::setn(NaturalType * nIn)
{n = nIn;}

NoteTypeLisd * NoteSetType::getNote()
{return Note;}

void NoteSetType::setNote(NoteTypeLisd * NoteIn)
{Note = NoteIn;}

/*********************************************************************/

/* class NoteType

*/

NoteType::NoteType() :
  DrawableBaseType()
{
  form = 0;
  EntityInternalIds = 0;
  EntityExternalIds = 0;
  Text = 0;
}

NoteType::NoteType(
 AttributesType * AttributesIn,
 ArrayReferenceFullType * EntityInternalIdsIn,
 ArrayReferenceFullType * EntityExternalIdsIn,
 XmlString * TextIn) :
  DrawableBaseType(
    AttributesIn)
{
  form = 0;
  EntityInternalIds = EntityInternalIdsIn;
  EntityExternalIds = EntityExternalIdsIn;
  Text = TextIn;
}

NoteType::NoteType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 NoteFormEnumType * formIn,
 ArrayReferenceFullType * EntityInternalIdsIn,
 ArrayReferenceFullType * EntityExternalIdsIn,
 XmlString * TextIn) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  form = formIn;
  EntityInternalIds = EntityInternalIdsIn;
  EntityExternalIds = EntityExternalIdsIn;
  Text = TextIn;
}

NoteType::~NoteType()
{
  #ifndef NODESTRUCT
  delete form;
  delete EntityInternalIds;
  delete EntityExternalIds;
  delete Text;
  #endif
}

void NoteType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (form)
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
      fprintf(outFile, "form=\"");
      form->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (EntityInternalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EntityInternalIds");
      EntityInternalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EntityInternalIds>\n");
    }
  if (EntityExternalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EntityExternalIds");
      EntityExternalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EntityExternalIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Text");
  Text->printSelf(outFile);
  fprintf(outFile, "</Text>\n");
  doSpaces(-INDENT, outFile);
}

bool NoteType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in NoteType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in NoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "form")
        {
          NoteFormEnumType * formVal;
          if (form)
            {
              fprintf(stderr, "two values for form in NoteType\n");
              returnValue = true;
              break;
            }
          formVal = new NoteFormEnumType(decl->val.c_str());
          if (formVal->bad)
            {
              delete formVal;
              fprintf(stderr, "bad value %s for form in NoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            form = formVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in NoteType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in NoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in NoteType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in NoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in NoteType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in NoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in NoteType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in NoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in NoteType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in NoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NoteType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in NoteType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete form;
      form = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

NoteFormEnumType * NoteType::getform()
{return form;}

void NoteType::setform(NoteFormEnumType * formIn)
{form = formIn;}

ArrayReferenceFullType * NoteType::getEntityInternalIds()
{return EntityInternalIds;}

void NoteType::setEntityInternalIds(ArrayReferenceFullType * EntityInternalIdsIn)
{EntityInternalIds = EntityInternalIdsIn;}

ArrayReferenceFullType * NoteType::getEntityExternalIds()
{return EntityExternalIds;}

void NoteType::setEntityExternalIds(ArrayReferenceFullType * EntityExternalIdsIn)
{EntityExternalIds = EntityExternalIdsIn;}

XmlString * NoteType::getText()
{return Text;}

void NoteType::setText(XmlString * TextIn)
{Text = TextIn;}

/*********************************************************************/

/* class NoteTypeLisd

*/

NoteTypeLisd::NoteTypeLisd() {}

NoteTypeLisd::NoteTypeLisd(NoteType * aNoteType)
{
  push_back(aNoteType);
}

NoteTypeLisd::~NoteTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<NoteType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void NoteTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class PartAssemblyBaseType

*/

PartAssemblyBaseType::PartAssemblyBaseType() :
  DrawableBaseType()
{
  materialIndex = 0;
  originMassProperty = 0;
  Validation = 0;
  Header = 0;
  UUID = 0;
  ModelNumber = 0;
  Version = 0;
  SecurityClassification = 0;
  ExportControlClassification = 0;
  FeatureNominalIds = 0;
  FeatureZoneIds = 0;
  CharacteristicNominalIds = 0;
  NoteIds = 0;
  PartNoteIds = 0;
  DatumDefinitionIds = 0;
  DatumTargetDefinitionIds = 0;
  DatumReferenceFrameIds = 0;
  BodyIds = 0;
  CoordinateSystemIds = 0;
  AuxiliaryIds = 0;
  ViewIds = 0;
  PointCloudIds = 0;
}

PartAssemblyBaseType::PartAssemblyBaseType(
 AttributesType * AttributesIn,
 ValidationPartAssemblyType * ValidationIn,
 PartAssemblyHeaderType * HeaderIn,
 QPIdType * UUIDIn,
 XmlString * ModelNumberIn,
 XmlString * VersionIn,
 SecurityClassificationType * SecurityClassificationIn,
 XmlString * ExportControlClassificationIn,
 ArrayReferenceType * FeatureNominalIdsIn,
 ArrayReferenceType * FeatureZoneIdsIn,
 ArrayReferenceType * CharacteristicNominalIdsIn,
 ArrayReferenceType * NoteIdsIn,
 ArrayReferenceType * PartNoteIdsIn,
 ArrayReferenceType * DatumDefinitionIdsIn,
 ArrayReferenceType * DatumTargetDefinitionIdsIn,
 ArrayReferenceType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn) :
  DrawableBaseType(
    AttributesIn)
{
  materialIndex = 0;
  originMassProperty = 0;
  Validation = ValidationIn;
  Header = HeaderIn;
  UUID = UUIDIn;
  ModelNumber = ModelNumberIn;
  Version = VersionIn;
  SecurityClassification = SecurityClassificationIn;
  ExportControlClassification = ExportControlClassificationIn;
  FeatureNominalIds = FeatureNominalIdsIn;
  FeatureZoneIds = FeatureZoneIdsIn;
  CharacteristicNominalIds = CharacteristicNominalIdsIn;
  NoteIds = NoteIdsIn;
  PartNoteIds = PartNoteIdsIn;
  DatumDefinitionIds = DatumDefinitionIdsIn;
  DatumTargetDefinitionIds = DatumTargetDefinitionIdsIn;
  DatumReferenceFrameIds = DatumReferenceFrameIdsIn;
  BodyIds = BodyIdsIn;
  CoordinateSystemIds = CoordinateSystemIdsIn;
  AuxiliaryIds = AuxiliaryIdsIn;
  ViewIds = ViewIdsIn;
  PointCloudIds = PointCloudIdsIn;
}

PartAssemblyBaseType::PartAssemblyBaseType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 NaturalType * materialIndexIn,
 PointSimpleType * originMassPropertyIn,
 ValidationPartAssemblyType * ValidationIn,
 PartAssemblyHeaderType * HeaderIn,
 QPIdType * UUIDIn,
 XmlString * ModelNumberIn,
 XmlString * VersionIn,
 SecurityClassificationType * SecurityClassificationIn,
 XmlString * ExportControlClassificationIn,
 ArrayReferenceType * FeatureNominalIdsIn,
 ArrayReferenceType * FeatureZoneIdsIn,
 ArrayReferenceType * CharacteristicNominalIdsIn,
 ArrayReferenceType * NoteIdsIn,
 ArrayReferenceType * PartNoteIdsIn,
 ArrayReferenceType * DatumDefinitionIdsIn,
 ArrayReferenceType * DatumTargetDefinitionIdsIn,
 ArrayReferenceType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  materialIndex = materialIndexIn;
  originMassProperty = originMassPropertyIn;
  Validation = ValidationIn;
  Header = HeaderIn;
  UUID = UUIDIn;
  ModelNumber = ModelNumberIn;
  Version = VersionIn;
  SecurityClassification = SecurityClassificationIn;
  ExportControlClassification = ExportControlClassificationIn;
  FeatureNominalIds = FeatureNominalIdsIn;
  FeatureZoneIds = FeatureZoneIdsIn;
  CharacteristicNominalIds = CharacteristicNominalIdsIn;
  NoteIds = NoteIdsIn;
  PartNoteIds = PartNoteIdsIn;
  DatumDefinitionIds = DatumDefinitionIdsIn;
  DatumTargetDefinitionIds = DatumTargetDefinitionIdsIn;
  DatumReferenceFrameIds = DatumReferenceFrameIdsIn;
  BodyIds = BodyIdsIn;
  CoordinateSystemIds = CoordinateSystemIdsIn;
  AuxiliaryIds = AuxiliaryIdsIn;
  ViewIds = ViewIdsIn;
  PointCloudIds = PointCloudIdsIn;
}

PartAssemblyBaseType::~PartAssemblyBaseType()
{
  #ifndef NODESTRUCT
  delete materialIndex;
  delete originMassProperty;
  delete Validation;
  delete Header;
  delete UUID;
  delete ModelNumber;
  delete Version;
  delete SecurityClassification;
  delete ExportControlClassification;
  delete FeatureNominalIds;
  delete FeatureZoneIds;
  delete CharacteristicNominalIds;
  delete NoteIds;
  delete PartNoteIds;
  delete DatumDefinitionIds;
  delete DatumTargetDefinitionIds;
  delete DatumReferenceFrameIds;
  delete BodyIds;
  delete CoordinateSystemIds;
  delete AuxiliaryIds;
  delete ViewIds;
  delete PointCloudIds;
  #endif
}

void PartAssemblyBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (materialIndex)
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
      fprintf(outFile, "materialIndex=\"");
      materialIndex->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (originMassProperty)
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
      fprintf(outFile, "originMassProperty=\"");
      originMassProperty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  if (Header)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Header");
      Header->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Header>\n");
    }
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (ModelNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModelNumber");
      ModelNumber->printSelf(outFile);
      fprintf(outFile, "</ModelNumber>\n");
    }
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (SecurityClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecurityClassification");
      SecurityClassification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SecurityClassification>\n");
    }
  if (ExportControlClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExportControlClassification");
      ExportControlClassification->printSelf(outFile);
      fprintf(outFile, "</ExportControlClassification>\n");
    }
  if (FeatureNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalIds");
      FeatureNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureNominalIds>\n");
    }
  if (FeatureZoneIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureZoneIds");
      FeatureZoneIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureZoneIds>\n");
    }
  if (CharacteristicNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicNominalIds");
      CharacteristicNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicNominalIds>\n");
    }
  if (NoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteIds");
      NoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteIds>\n");
    }
  if (PartNoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteIds");
      PartNoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteIds>\n");
    }
  if (DatumDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionIds");
      DatumDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumDefinitionIds>\n");
    }
  if (DatumTargetDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitionIds");
      DatumTargetDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetDefinitionIds>\n");
    }
  if (DatumReferenceFrameIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFrameIds");
      DatumReferenceFrameIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumReferenceFrameIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  if (CoordinateSystemIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemIds");
      CoordinateSystemIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemIds>\n");
    }
  if (AuxiliaryIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AuxiliaryIds");
      AuxiliaryIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AuxiliaryIds>\n");
    }
  if (ViewIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ViewIds");
      ViewIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ViewIds>\n");
    }
  if (PointCloudIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointCloudIds");
      PointCloudIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointCloudIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool PartAssemblyBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "materialIndex")
        {
          NaturalType * materialIndexVal;
          if (materialIndex)
            {
              fprintf(stderr, "two values for materialIndex in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          materialIndexVal = new NaturalType(decl->val.c_str());
          if (materialIndexVal->bad)
            {
              delete materialIndexVal;
              fprintf(stderr, "bad value %s for materialIndex in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            materialIndex = materialIndexVal;
        }
      else if (decl->name == "originMassProperty")
        {
          PointSimpleType * originMassPropertyVal;
          if (originMassProperty)
            {
              fprintf(stderr, "two values for originMassProperty in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          originMassPropertyVal = new PointSimpleType(decl->val.c_str());
          if (originMassPropertyVal->bad)
            {
              delete originMassPropertyVal;
              fprintf(stderr, "bad value %s for originMassProperty in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            originMassProperty = originMassPropertyVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in PartAssemblyBaseType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in PartAssemblyBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PartAssemblyBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PartAssemblyBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete materialIndex;
      materialIndex = 0;
      delete originMassProperty;
      originMassProperty = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

NaturalType * PartAssemblyBaseType::getmaterialIndex()
{return materialIndex;}

void PartAssemblyBaseType::setmaterialIndex(NaturalType * materialIndexIn)
{materialIndex = materialIndexIn;}

PointSimpleType * PartAssemblyBaseType::getoriginMassProperty()
{return originMassProperty;}

void PartAssemblyBaseType::setoriginMassProperty(PointSimpleType * originMassPropertyIn)
{originMassProperty = originMassPropertyIn;}

ValidationPartAssemblyType * PartAssemblyBaseType::getValidation()
{return Validation;}

void PartAssemblyBaseType::setValidation(ValidationPartAssemblyType * ValidationIn)
{Validation = ValidationIn;}

PartAssemblyHeaderType * PartAssemblyBaseType::getHeader()
{return Header;}

void PartAssemblyBaseType::setHeader(PartAssemblyHeaderType * HeaderIn)
{Header = HeaderIn;}

QPIdType * PartAssemblyBaseType::getUUID()
{return UUID;}

void PartAssemblyBaseType::setUUID(QPIdType * UUIDIn)
{UUID = UUIDIn;}

XmlString * PartAssemblyBaseType::getModelNumber()
{return ModelNumber;}

void PartAssemblyBaseType::setModelNumber(XmlString * ModelNumberIn)
{ModelNumber = ModelNumberIn;}

XmlString * PartAssemblyBaseType::getVersion()
{return Version;}

void PartAssemblyBaseType::setVersion(XmlString * VersionIn)
{Version = VersionIn;}

SecurityClassificationType * PartAssemblyBaseType::getSecurityClassification()
{return SecurityClassification;}

void PartAssemblyBaseType::setSecurityClassification(SecurityClassificationType * SecurityClassificationIn)
{SecurityClassification = SecurityClassificationIn;}

XmlString * PartAssemblyBaseType::getExportControlClassification()
{return ExportControlClassification;}

void PartAssemblyBaseType::setExportControlClassification(XmlString * ExportControlClassificationIn)
{ExportControlClassification = ExportControlClassificationIn;}

ArrayReferenceType * PartAssemblyBaseType::getFeatureNominalIds()
{return FeatureNominalIds;}

void PartAssemblyBaseType::setFeatureNominalIds(ArrayReferenceType * FeatureNominalIdsIn)
{FeatureNominalIds = FeatureNominalIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getFeatureZoneIds()
{return FeatureZoneIds;}

void PartAssemblyBaseType::setFeatureZoneIds(ArrayReferenceType * FeatureZoneIdsIn)
{FeatureZoneIds = FeatureZoneIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getCharacteristicNominalIds()
{return CharacteristicNominalIds;}

void PartAssemblyBaseType::setCharacteristicNominalIds(ArrayReferenceType * CharacteristicNominalIdsIn)
{CharacteristicNominalIds = CharacteristicNominalIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getNoteIds()
{return NoteIds;}

void PartAssemblyBaseType::setNoteIds(ArrayReferenceType * NoteIdsIn)
{NoteIds = NoteIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getPartNoteIds()
{return PartNoteIds;}

void PartAssemblyBaseType::setPartNoteIds(ArrayReferenceType * PartNoteIdsIn)
{PartNoteIds = PartNoteIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getDatumDefinitionIds()
{return DatumDefinitionIds;}

void PartAssemblyBaseType::setDatumDefinitionIds(ArrayReferenceType * DatumDefinitionIdsIn)
{DatumDefinitionIds = DatumDefinitionIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getDatumTargetDefinitionIds()
{return DatumTargetDefinitionIds;}

void PartAssemblyBaseType::setDatumTargetDefinitionIds(ArrayReferenceType * DatumTargetDefinitionIdsIn)
{DatumTargetDefinitionIds = DatumTargetDefinitionIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getDatumReferenceFrameIds()
{return DatumReferenceFrameIds;}

void PartAssemblyBaseType::setDatumReferenceFrameIds(ArrayReferenceType * DatumReferenceFrameIdsIn)
{DatumReferenceFrameIds = DatumReferenceFrameIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getBodyIds()
{return BodyIds;}

void PartAssemblyBaseType::setBodyIds(ArrayReferenceType * BodyIdsIn)
{BodyIds = BodyIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getCoordinateSystemIds()
{return CoordinateSystemIds;}

void PartAssemblyBaseType::setCoordinateSystemIds(ArrayReferenceType * CoordinateSystemIdsIn)
{CoordinateSystemIds = CoordinateSystemIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getAuxiliaryIds()
{return AuxiliaryIds;}

void PartAssemblyBaseType::setAuxiliaryIds(ArrayReferenceType * AuxiliaryIdsIn)
{AuxiliaryIds = AuxiliaryIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getViewIds()
{return ViewIds;}

void PartAssemblyBaseType::setViewIds(ArrayReferenceType * ViewIdsIn)
{ViewIds = ViewIdsIn;}

ArrayReferenceType * PartAssemblyBaseType::getPointCloudIds()
{return PointCloudIds;}

void PartAssemblyBaseType::setPointCloudIds(ArrayReferenceType * PointCloudIdsIn)
{PointCloudIds = PointCloudIdsIn;}

/*********************************************************************/

/* class PartAssemblyHeaderType

*/

PartAssemblyHeaderType::PartAssemblyHeaderType()
{
  Name = 0;
  File = 0;
  Application = 0;
  Author = 0;
  ApplicationSource = 0;
  Description = 0;
}

PartAssemblyHeaderType::PartAssemblyHeaderType(
 XmlString * NameIn,
 FileInternalType * FileIn,
 ApplicationType * ApplicationIn,
 AuthorType * AuthorIn,
 ApplicationType * ApplicationSourceIn,
 XmlString * DescriptionIn)
{
  Name = NameIn;
  File = FileIn;
  Application = ApplicationIn;
  Author = AuthorIn;
  ApplicationSource = ApplicationSourceIn;
  Description = DescriptionIn;
}

PartAssemblyHeaderType::~PartAssemblyHeaderType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete File;
  delete Application;
  delete Author;
  delete ApplicationSource;
  delete Description;
  #endif
}

void PartAssemblyHeaderType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (File)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<File");
      File->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</File>\n");
    }
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
  doSpaces(-INDENT, outFile);
}

XmlString * PartAssemblyHeaderType::getName()
{return Name;}

void PartAssemblyHeaderType::setName(XmlString * NameIn)
{Name = NameIn;}

FileInternalType * PartAssemblyHeaderType::getFile()
{return File;}

void PartAssemblyHeaderType::setFile(FileInternalType * FileIn)
{File = FileIn;}

ApplicationType * PartAssemblyHeaderType::getApplication()
{return Application;}

void PartAssemblyHeaderType::setApplication(ApplicationType * ApplicationIn)
{Application = ApplicationIn;}

AuthorType * PartAssemblyHeaderType::getAuthor()
{return Author;}

void PartAssemblyHeaderType::setAuthor(AuthorType * AuthorIn)
{Author = AuthorIn;}

ApplicationType * PartAssemblyHeaderType::getApplicationSource()
{return ApplicationSource;}

void PartAssemblyHeaderType::setApplicationSource(ApplicationType * ApplicationSourceIn)
{ApplicationSource = ApplicationSourceIn;}

XmlString * PartAssemblyHeaderType::getDescription()
{return Description;}

void PartAssemblyHeaderType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

/*********************************************************************/

/* class PartFamilyType

*/

PartFamilyType::PartFamilyType()
{
  PrimaryShapeClass = 0;
  MinimumTolerance = 0;
  MinimumBoundingBox = 0;
  PrimaryManufacturingMethod = 0;
}

PartFamilyType::PartFamilyType(
 ShapeClassType * PrimaryShapeClassIn,
 LinearValueType * MinimumToleranceIn,
 BoundingBoxType * MinimumBoundingBoxIn,
 ManufacturingMethodType * PrimaryManufacturingMethodIn)
{
  PrimaryShapeClass = PrimaryShapeClassIn;
  MinimumTolerance = MinimumToleranceIn;
  MinimumBoundingBox = MinimumBoundingBoxIn;
  PrimaryManufacturingMethod = PrimaryManufacturingMethodIn;
}

PartFamilyType::~PartFamilyType()
{
  #ifndef NODESTRUCT
  delete PrimaryShapeClass;
  delete MinimumTolerance;
  delete MinimumBoundingBox;
  delete PrimaryManufacturingMethod;
  #endif
}

void PartFamilyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (PrimaryShapeClass)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PrimaryShapeClass");
      PrimaryShapeClass->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PrimaryShapeClass>\n");
    }
  if (MinimumTolerance)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinimumTolerance");
      MinimumTolerance->printSelf(outFile);
      fprintf(outFile, "</MinimumTolerance>\n");
    }
  if (MinimumBoundingBox)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinimumBoundingBox");
      MinimumBoundingBox->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MinimumBoundingBox>\n");
    }
  if (PrimaryManufacturingMethod)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PrimaryManufacturingMethod");
      PrimaryManufacturingMethod->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PrimaryManufacturingMethod>\n");
    }
  doSpaces(-INDENT, outFile);
}

ShapeClassType * PartFamilyType::getPrimaryShapeClass()
{return PrimaryShapeClass;}

void PartFamilyType::setPrimaryShapeClass(ShapeClassType * PrimaryShapeClassIn)
{PrimaryShapeClass = PrimaryShapeClassIn;}

LinearValueType * PartFamilyType::getMinimumTolerance()
{return MinimumTolerance;}

void PartFamilyType::setMinimumTolerance(LinearValueType * MinimumToleranceIn)
{MinimumTolerance = MinimumToleranceIn;}

BoundingBoxType * PartFamilyType::getMinimumBoundingBox()
{return MinimumBoundingBox;}

void PartFamilyType::setMinimumBoundingBox(BoundingBoxType * MinimumBoundingBoxIn)
{MinimumBoundingBox = MinimumBoundingBoxIn;}

ManufacturingMethodType * PartFamilyType::getPrimaryManufacturingMethod()
{return PrimaryManufacturingMethod;}

void PartFamilyType::setPrimaryManufacturingMethod(ManufacturingMethodType * PrimaryManufacturingMethodIn)
{PrimaryManufacturingMethod = PrimaryManufacturingMethodIn;}

/*********************************************************************/

/* class PartNoteSetType

*/

PartNoteSetType::PartNoteSetType()
{
  n = 0;
  PartNote = 0;
}

PartNoteSetType::PartNoteSetType(
 PartNoteTypeLisd * PartNoteIn)
{
  n = 0;
  PartNote = PartNoteIn;
}

PartNoteSetType::PartNoteSetType(
 NaturalType * nIn,
 PartNoteTypeLisd * PartNoteIn)
{
  n = nIn;
  PartNote = PartNoteIn;
}

PartNoteSetType::~PartNoteSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete PartNote;
  #endif
}

void PartNoteSetType::printSelf(FILE * outFile)
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
    if (!PartNote)
      {
        fprintf(stderr, "PartNote list is missing\n");
        exit(1);
      }
    if (PartNote->size() == 0)
      {
        fprintf(stderr, "PartNote list is empty\n");
        exit(1);
      }
    std::list<PartNoteType *>::iterator iter;
    for (iter = PartNote->begin();
         iter != PartNote->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<PartNote");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</PartNote>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool PartNoteSetType::badAttributes(
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
              fprintf(stderr, "two values for n in PartNoteSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in PartNoteSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PartNoteSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in PartNoteSetType\n");
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

NaturalType * PartNoteSetType::getn()
{return n;}

void PartNoteSetType::setn(NaturalType * nIn)
{n = nIn;}

PartNoteTypeLisd * PartNoteSetType::getPartNote()
{return PartNote;}

void PartNoteSetType::setPartNote(PartNoteTypeLisd * PartNoteIn)
{PartNote = PartNoteIn;}

/*********************************************************************/

/* class PartNoteType

*/

PartNoteType::PartNoteType() :
  DrawableBaseType()
{
  Text = 0;
  PartNoteIds = 0;
}

PartNoteType::PartNoteType(
 AttributesType * AttributesIn,
 XmlString * TextIn,
 ArrayReferenceType * PartNoteIdsIn) :
  DrawableBaseType(
    AttributesIn)
{
  Text = TextIn;
  PartNoteIds = PartNoteIdsIn;
}

PartNoteType::PartNoteType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 XmlString * TextIn,
 ArrayReferenceType * PartNoteIdsIn) :
  DrawableBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn)
{
  Text = TextIn;
  PartNoteIds = PartNoteIdsIn;
}

PartNoteType::~PartNoteType()
{
  #ifndef NODESTRUCT
  delete Text;
  delete PartNoteIds;
  #endif
}

void PartNoteType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Text)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Text");
      Text->printSelf(outFile);
      fprintf(outFile, "</Text>\n");
    }
  if (PartNoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteIds");
      PartNoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool PartNoteType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in PartNoteType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in PartNoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in PartNoteType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in PartNoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in PartNoteType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PartNoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in PartNoteType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PartNoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in PartNoteType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in PartNoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in PartNoteType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in PartNoteType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PartNoteType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PartNoteType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

XmlString * PartNoteType::getText()
{return Text;}

void PartNoteType::setText(XmlString * TextIn)
{Text = TextIn;}

ArrayReferenceType * PartNoteType::getPartNoteIds()
{return PartNoteIds;}

void PartNoteType::setPartNoteIds(ArrayReferenceType * PartNoteIdsIn)
{PartNoteIds = PartNoteIdsIn;}

/*********************************************************************/

/* class PartNoteTypeLisd

*/

PartNoteTypeLisd::PartNoteTypeLisd() {}

PartNoteTypeLisd::PartNoteTypeLisd(PartNoteType * aPartNoteType)
{
  push_back(aPartNoteType);
}

PartNoteTypeLisd::~PartNoteTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PartNoteType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PartNoteTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class PartSetType

*/

PartSetType::PartSetType()
{
  n = 0;
  Part = 0;
}

PartSetType::PartSetType(
 PartTypeLisd * PartIn)
{
  n = 0;
  Part = PartIn;
}

PartSetType::PartSetType(
 NaturalType * nIn,
 PartTypeLisd * PartIn)
{
  n = nIn;
  Part = PartIn;
}

PartSetType::~PartSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Part;
  #endif
}

void PartSetType::printSelf(FILE * outFile)
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
    if (!Part)
      {
        fprintf(stderr, "Part list is missing\n");
        exit(1);
      }
    if (Part->size() == 0)
      {
        fprintf(stderr, "Part list is empty\n");
        exit(1);
      }
    std::list<PartType *>::iterator iter;
    for (iter = Part->begin();
         iter != Part->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Part");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Part>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool PartSetType::badAttributes(
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
              fprintf(stderr, "two values for n in PartSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in PartSetType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PartSetType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in PartSetType\n");
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

NaturalType * PartSetType::getn()
{return n;}

void PartSetType::setn(NaturalType * nIn)
{n = nIn;}

PartTypeLisd * PartSetType::getPart()
{return Part;}

void PartSetType::setPart(PartTypeLisd * PartIn)
{Part = PartIn;}

/*********************************************************************/

/* class PartType

*/

PartType::PartType() :
  PartAssemblyBaseType()
{
  DefinitionExternal = 0;
  PartFamily = 0;
  FoldersPart = 0;
}

PartType::PartType(
 AttributesType * AttributesIn,
 ValidationPartAssemblyType * ValidationIn,
 PartAssemblyHeaderType * HeaderIn,
 QPIdType * UUIDIn,
 XmlString * ModelNumberIn,
 XmlString * VersionIn,
 SecurityClassificationType * SecurityClassificationIn,
 XmlString * ExportControlClassificationIn,
 ArrayReferenceType * FeatureNominalIdsIn,
 ArrayReferenceType * FeatureZoneIdsIn,
 ArrayReferenceType * CharacteristicNominalIdsIn,
 ArrayReferenceType * NoteIdsIn,
 ArrayReferenceType * PartNoteIdsIn,
 ArrayReferenceType * DatumDefinitionIdsIn,
 ArrayReferenceType * DatumTargetDefinitionIdsIn,
 ArrayReferenceType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn,
 DefinitionExternalType * DefinitionExternalIn,
 PartFamilyType * PartFamilyIn,
 FoldersPartType * FoldersPartIn) :
  PartAssemblyBaseType(
    AttributesIn,
    ValidationIn,
    HeaderIn,
    UUIDIn,
    ModelNumberIn,
    VersionIn,
    SecurityClassificationIn,
    ExportControlClassificationIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
  DefinitionExternal = DefinitionExternalIn;
  PartFamily = PartFamilyIn;
  FoldersPart = FoldersPartIn;
}

PartType::PartType(
 XmlString * labelIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ColorType * colorIn,
 XmlBoolean * hiddenIn,
 DoublePositiveType * sizeIn,
 TransparencyType * transparencyIn,
 NaturalType * materialIndexIn,
 PointSimpleType * originMassPropertyIn,
 ValidationPartAssemblyType * ValidationIn,
 PartAssemblyHeaderType * HeaderIn,
 QPIdType * UUIDIn,
 XmlString * ModelNumberIn,
 XmlString * VersionIn,
 SecurityClassificationType * SecurityClassificationIn,
 XmlString * ExportControlClassificationIn,
 ArrayReferenceType * FeatureNominalIdsIn,
 ArrayReferenceType * FeatureZoneIdsIn,
 ArrayReferenceType * CharacteristicNominalIdsIn,
 ArrayReferenceType * NoteIdsIn,
 ArrayReferenceType * PartNoteIdsIn,
 ArrayReferenceType * DatumDefinitionIdsIn,
 ArrayReferenceType * DatumTargetDefinitionIdsIn,
 ArrayReferenceType * DatumReferenceFrameIdsIn,
 ArrayReferenceType * BodyIdsIn,
 ArrayReferenceType * CoordinateSystemIdsIn,
 ArrayReferenceType * AuxiliaryIdsIn,
 ArrayReferenceType * ViewIdsIn,
 ArrayReferenceType * PointCloudIdsIn,
 DefinitionExternalType * DefinitionExternalIn,
 PartFamilyType * PartFamilyIn,
 FoldersPartType * FoldersPartIn) :
  PartAssemblyBaseType(
    labelIn,
    idIn,
    AttributesIn,
    colorIn,
    hiddenIn,
    sizeIn,
    transparencyIn,
    materialIndexIn,
    originMassPropertyIn,
    ValidationIn,
    HeaderIn,
    UUIDIn,
    ModelNumberIn,
    VersionIn,
    SecurityClassificationIn,
    ExportControlClassificationIn,
    FeatureNominalIdsIn,
    FeatureZoneIdsIn,
    CharacteristicNominalIdsIn,
    NoteIdsIn,
    PartNoteIdsIn,
    DatumDefinitionIdsIn,
    DatumTargetDefinitionIdsIn,
    DatumReferenceFrameIdsIn,
    BodyIdsIn,
    CoordinateSystemIdsIn,
    AuxiliaryIdsIn,
    ViewIdsIn,
    PointCloudIdsIn)
{
  DefinitionExternal = DefinitionExternalIn;
  PartFamily = PartFamilyIn;
  FoldersPart = FoldersPartIn;
}

PartType::~PartType()
{
  #ifndef NODESTRUCT
  delete DefinitionExternal;
  delete PartFamily;
  delete FoldersPart;
  #endif
}

void PartType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (color)
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
      fprintf(outFile, "color=\"");
      color->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (hidden)
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
      fprintf(outFile, "hidden=\"");
      hidden->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
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
  if (label)
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
      fprintf(outFile, "label=\"");
      label->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (materialIndex)
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
      fprintf(outFile, "materialIndex=\"");
      materialIndex->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (originMassProperty)
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
      fprintf(outFile, "originMassProperty=\"");
      originMassProperty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (size)
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
      fprintf(outFile, "size=\"");
      size->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (transparency)
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
      fprintf(outFile, "transparency=\"");
      transparency->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (Validation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Validation");
      Validation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Validation>\n");
    }
  if (Header)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Header");
      Header->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Header>\n");
    }
  if (UUID)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UUID");
      UUID->printSelf(outFile);
      fprintf(outFile, "</UUID>\n");
    }
  if (ModelNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModelNumber");
      ModelNumber->printSelf(outFile);
      fprintf(outFile, "</ModelNumber>\n");
    }
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (SecurityClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecurityClassification");
      SecurityClassification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SecurityClassification>\n");
    }
  if (ExportControlClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExportControlClassification");
      ExportControlClassification->printSelf(outFile);
      fprintf(outFile, "</ExportControlClassification>\n");
    }
  if (FeatureNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalIds");
      FeatureNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureNominalIds>\n");
    }
  if (FeatureZoneIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureZoneIds");
      FeatureZoneIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureZoneIds>\n");
    }
  if (CharacteristicNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicNominalIds");
      CharacteristicNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicNominalIds>\n");
    }
  if (NoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteIds");
      NoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteIds>\n");
    }
  if (PartNoteIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteIds");
      PartNoteIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteIds>\n");
    }
  if (DatumDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionIds");
      DatumDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumDefinitionIds>\n");
    }
  if (DatumTargetDefinitionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitionIds");
      DatumTargetDefinitionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetDefinitionIds>\n");
    }
  if (DatumReferenceFrameIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFrameIds");
      DatumReferenceFrameIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumReferenceFrameIds>\n");
    }
  if (BodyIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BodyIds");
      BodyIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BodyIds>\n");
    }
  if (CoordinateSystemIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemIds");
      CoordinateSystemIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemIds>\n");
    }
  if (AuxiliaryIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AuxiliaryIds");
      AuxiliaryIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AuxiliaryIds>\n");
    }
  if (ViewIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ViewIds");
      ViewIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ViewIds>\n");
    }
  if (PointCloudIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointCloudIds");
      PointCloudIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PointCloudIds>\n");
    }
  if (DefinitionExternal)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DefinitionExternal");
      DefinitionExternal->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DefinitionExternal>\n");
    }
  if (PartFamily)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartFamily");
      PartFamily->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartFamily>\n");
    }
  if (FoldersPart)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FoldersPart");
      FoldersPart->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FoldersPart>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool PartType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "color")
        {
          ColorType * colorVal;
          if (color)
            {
              fprintf(stderr, "two values for color in PartType\n");
              returnValue = true;
              break;
            }
          colorVal = new ColorType(decl->val.c_str());
          if (colorVal->bad)
            {
              delete colorVal;
              fprintf(stderr, "bad value %s for color in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            color = colorVal;
        }
      else if (decl->name == "hidden")
        {
          XmlBoolean * hiddenVal;
          if (hidden)
            {
              fprintf(stderr, "two values for hidden in PartType\n");
              returnValue = true;
              break;
            }
          hiddenVal = new XmlBoolean(decl->val.c_str());
          if (hiddenVal->bad)
            {
              delete hiddenVal;
              fprintf(stderr, "bad value %s for hidden in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            hidden = hiddenVal;
        }
      else if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (id)
            {
              fprintf(stderr, "two values for id in PartType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else if (decl->name == "label")
        {
          XmlString * labelVal;
          if (label)
            {
              fprintf(stderr, "two values for label in PartType\n");
              returnValue = true;
              break;
            }
          labelVal = new XmlString(decl->val.c_str());
          if (labelVal->bad)
            {
              delete labelVal;
              fprintf(stderr, "bad value %s for label in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            label = labelVal;
        }
      else if (decl->name == "materialIndex")
        {
          NaturalType * materialIndexVal;
          if (materialIndex)
            {
              fprintf(stderr, "two values for materialIndex in PartType\n");
              returnValue = true;
              break;
            }
          materialIndexVal = new NaturalType(decl->val.c_str());
          if (materialIndexVal->bad)
            {
              delete materialIndexVal;
              fprintf(stderr, "bad value %s for materialIndex in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            materialIndex = materialIndexVal;
        }
      else if (decl->name == "originMassProperty")
        {
          PointSimpleType * originMassPropertyVal;
          if (originMassProperty)
            {
              fprintf(stderr, "two values for originMassProperty in PartType\n");
              returnValue = true;
              break;
            }
          originMassPropertyVal = new PointSimpleType(decl->val.c_str());
          if (originMassPropertyVal->bad)
            {
              delete originMassPropertyVal;
              fprintf(stderr, "bad value %s for originMassProperty in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            originMassProperty = originMassPropertyVal;
        }
      else if (decl->name == "size")
        {
          DoublePositiveType * sizeVal;
          if (size)
            {
              fprintf(stderr, "two values for size in PartType\n");
              returnValue = true;
              break;
            }
          sizeVal = new DoublePositiveType(decl->val.c_str());
          if (sizeVal->bad)
            {
              delete sizeVal;
              fprintf(stderr, "bad value %s for size in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            size = sizeVal;
        }
      else if (decl->name == "transparency")
        {
          TransparencyType * transparencyVal;
          if (transparency)
            {
              fprintf(stderr, "two values for transparency in PartType\n");
              returnValue = true;
              break;
            }
          transparencyVal = new TransparencyType(decl->val.c_str());
          if (transparencyVal->bad)
            {
              delete transparencyVal;
              fprintf(stderr, "bad value %s for transparency in PartType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            transparency = transparencyVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PartType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PartType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete color;
      color = 0;
      delete hidden;
      hidden = 0;
      delete id;
      id = 0;
      delete label;
      label = 0;
      delete materialIndex;
      materialIndex = 0;
      delete originMassProperty;
      originMassProperty = 0;
      delete size;
      size = 0;
      delete transparency;
      transparency = 0;
    }
  return returnValue;
}

DefinitionExternalType * PartType::getDefinitionExternal()
{return DefinitionExternal;}

void PartType::setDefinitionExternal(DefinitionExternalType * DefinitionExternalIn)
{DefinitionExternal = DefinitionExternalIn;}

PartFamilyType * PartType::getPartFamily()
{return PartFamily;}

void PartType::setPartFamily(PartFamilyType * PartFamilyIn)
{PartFamily = PartFamilyIn;}

FoldersPartType * PartType::getFoldersPart()
{return FoldersPart;}

void PartType::setFoldersPart(FoldersPartType * FoldersPartIn)
{FoldersPart = FoldersPartIn;}

/*********************************************************************/

/* class PartTypeLisd

*/

PartTypeLisd::PartTypeLisd() {}

PartTypeLisd::PartTypeLisd(PartType * aPartType)
{
  push_back(aPartType);
}

PartTypeLisd::~PartTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PartType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PartTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class PhysicalModelType

*/

PhysicalModelType::PhysicalModelType()
{
  id = 0;
  Name = 0;
  Version = 0;
  Description = 0;
  Author = 0;
  Location = 0;
  ModelNumber = 0;
}

PhysicalModelType::PhysicalModelType(
 XmlString * NameIn,
 XmlString * VersionIn,
 XmlString * DescriptionIn,
 AuthorType * AuthorIn,
 XmlString * LocationIn,
 XmlString * ModelNumberIn)
{
  id = 0;
  Name = NameIn;
  Version = VersionIn;
  Description = DescriptionIn;
  Author = AuthorIn;
  Location = LocationIn;
  ModelNumber = ModelNumberIn;
}

PhysicalModelType::PhysicalModelType(
 QIFIdType * idIn,
 XmlString * NameIn,
 XmlString * VersionIn,
 XmlString * DescriptionIn,
 AuthorType * AuthorIn,
 XmlString * LocationIn,
 XmlString * ModelNumberIn)
{
  id = idIn;
  Name = NameIn;
  Version = VersionIn;
  Description = DescriptionIn;
  Author = AuthorIn;
  Location = LocationIn;
  ModelNumber = ModelNumberIn;
}

PhysicalModelType::~PhysicalModelType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Name;
  delete Version;
  delete Description;
  delete Author;
  delete Location;
  delete ModelNumber;
  #endif
}

void PhysicalModelType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (Author)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Author");
      Author->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Author>\n");
    }
  if (Location)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Location");
      Location->printSelf(outFile);
      fprintf(outFile, "</Location>\n");
    }
  if (ModelNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModelNumber");
      ModelNumber->printSelf(outFile);
      fprintf(outFile, "</ModelNumber>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool PhysicalModelType::badAttributes(
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
              fprintf(stderr, "two values for id in PhysicalModelType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PhysicalModelType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PhysicalModelType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PhysicalModelType\n");
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

QIFIdType * PhysicalModelType::getid()
{return id;}

void PhysicalModelType::setid(QIFIdType * idIn)
{id = idIn;}

XmlString * PhysicalModelType::getName()
{return Name;}

void PhysicalModelType::setName(XmlString * NameIn)
{Name = NameIn;}

XmlString * PhysicalModelType::getVersion()
{return Version;}

void PhysicalModelType::setVersion(XmlString * VersionIn)
{Version = VersionIn;}

XmlString * PhysicalModelType::getDescription()
{return Description;}

void PhysicalModelType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

AuthorType * PhysicalModelType::getAuthor()
{return Author;}

void PhysicalModelType::setAuthor(AuthorType * AuthorIn)
{Author = AuthorIn;}

XmlString * PhysicalModelType::getLocation()
{return Location;}

void PhysicalModelType::setLocation(XmlString * LocationIn)
{Location = LocationIn;}

XmlString * PhysicalModelType::getModelNumber()
{return ModelNumber;}

void PhysicalModelType::setModelNumber(XmlString * ModelNumberIn)
{ModelNumber = ModelNumberIn;}

/*********************************************************************/

/* class PrintedDrawingType

*/

PrintedDrawingType::PrintedDrawingType()
{
  id = 0;
  Name = 0;
  Version = 0;
  Description = 0;
  Author = 0;
  DrawingNumber = 0;
  AdditionalChanges = 0;
  Location = 0;
}

PrintedDrawingType::PrintedDrawingType(
 XmlString * NameIn,
 XmlString * VersionIn,
 XmlString * DescriptionIn,
 AuthorType * AuthorIn,
 XmlString * DrawingNumberIn,
 XmlString * AdditionalChangesIn,
 XmlString * LocationIn)
{
  id = 0;
  Name = NameIn;
  Version = VersionIn;
  Description = DescriptionIn;
  Author = AuthorIn;
  DrawingNumber = DrawingNumberIn;
  AdditionalChanges = AdditionalChangesIn;
  Location = LocationIn;
}

PrintedDrawingType::PrintedDrawingType(
 QIFIdType * idIn,
 XmlString * NameIn,
 XmlString * VersionIn,
 XmlString * DescriptionIn,
 AuthorType * AuthorIn,
 XmlString * DrawingNumberIn,
 XmlString * AdditionalChangesIn,
 XmlString * LocationIn)
{
  id = idIn;
  Name = NameIn;
  Version = VersionIn;
  Description = DescriptionIn;
  Author = AuthorIn;
  DrawingNumber = DrawingNumberIn;
  AdditionalChanges = AdditionalChangesIn;
  Location = LocationIn;
}

PrintedDrawingType::~PrintedDrawingType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Name;
  delete Version;
  delete Description;
  delete Author;
  delete DrawingNumber;
  delete AdditionalChanges;
  delete Location;
  #endif
}

void PrintedDrawingType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (Author)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Author");
      Author->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Author>\n");
    }
  if (DrawingNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DrawingNumber");
      DrawingNumber->printSelf(outFile);
      fprintf(outFile, "</DrawingNumber>\n");
    }
  if (AdditionalChanges)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AdditionalChanges");
      AdditionalChanges->printSelf(outFile);
      fprintf(outFile, "</AdditionalChanges>\n");
    }
  if (Location)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Location");
      Location->printSelf(outFile);
      fprintf(outFile, "</Location>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool PrintedDrawingType::badAttributes(
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
              fprintf(stderr, "two values for id in PrintedDrawingType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PrintedDrawingType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PrintedDrawingType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in PrintedDrawingType\n");
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

QIFIdType * PrintedDrawingType::getid()
{return id;}

void PrintedDrawingType::setid(QIFIdType * idIn)
{id = idIn;}

XmlString * PrintedDrawingType::getName()
{return Name;}

void PrintedDrawingType::setName(XmlString * NameIn)
{Name = NameIn;}

XmlString * PrintedDrawingType::getVersion()
{return Version;}

void PrintedDrawingType::setVersion(XmlString * VersionIn)
{Version = VersionIn;}

XmlString * PrintedDrawingType::getDescription()
{return Description;}

void PrintedDrawingType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

AuthorType * PrintedDrawingType::getAuthor()
{return Author;}

void PrintedDrawingType::setAuthor(AuthorType * AuthorIn)
{Author = AuthorIn;}

XmlString * PrintedDrawingType::getDrawingNumber()
{return DrawingNumber;}

void PrintedDrawingType::setDrawingNumber(XmlString * DrawingNumberIn)
{DrawingNumber = DrawingNumberIn;}

XmlString * PrintedDrawingType::getAdditionalChanges()
{return AdditionalChanges;}

void PrintedDrawingType::setAdditionalChanges(XmlString * AdditionalChangesIn)
{AdditionalChanges = AdditionalChangesIn;}

XmlString * PrintedDrawingType::getLocation()
{return Location;}

void PrintedDrawingType::setLocation(XmlString * LocationIn)
{Location = LocationIn;}

/*********************************************************************/

/* class ProductHeaderType

*/

ProductHeaderType::ProductHeaderType() :
  PartAssemblyHeaderType()
{
  ScaleCoefficient = 0;
  ModelTolerance = 0;
  MassPropertyTolerance = 0;
}

ProductHeaderType::ProductHeaderType(
 XmlString * NameIn,
 FileInternalType * FileIn,
 ApplicationType * ApplicationIn,
 AuthorType * AuthorIn,
 ApplicationType * ApplicationSourceIn,
 XmlString * DescriptionIn,
 XmlDouble * ScaleCoefficientIn,
 XmlDouble * ModelToleranceIn,
 XmlDouble * MassPropertyToleranceIn) :
  PartAssemblyHeaderType(
    NameIn,
    FileIn,
    ApplicationIn,
    AuthorIn,
    ApplicationSourceIn,
    DescriptionIn)
{
  ScaleCoefficient = ScaleCoefficientIn;
  ModelTolerance = ModelToleranceIn;
  MassPropertyTolerance = MassPropertyToleranceIn;
}

ProductHeaderType::~ProductHeaderType()
{
  #ifndef NODESTRUCT
  delete ScaleCoefficient;
  delete ModelTolerance;
  delete MassPropertyTolerance;
  #endif
}

void ProductHeaderType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (File)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<File");
      File->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</File>\n");
    }
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
  if (ScaleCoefficient)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ScaleCoefficient");
      ScaleCoefficient->printSelf(outFile);
      fprintf(outFile, "</ScaleCoefficient>\n");
    }
  if (ModelTolerance)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModelTolerance");
      ModelTolerance->printSelf(outFile);
      fprintf(outFile, "</ModelTolerance>\n");
    }
  if (MassPropertyTolerance)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassPropertyTolerance");
      MassPropertyTolerance->printSelf(outFile);
      fprintf(outFile, "</MassPropertyTolerance>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlDouble * ProductHeaderType::getScaleCoefficient()
{return ScaleCoefficient;}

void ProductHeaderType::setScaleCoefficient(XmlDouble * ScaleCoefficientIn)
{ScaleCoefficient = ScaleCoefficientIn;}

XmlDouble * ProductHeaderType::getModelTolerance()
{return ModelTolerance;}

void ProductHeaderType::setModelTolerance(XmlDouble * ModelToleranceIn)
{ModelTolerance = ModelToleranceIn;}

XmlDouble * ProductHeaderType::getMassPropertyTolerance()
{return MassPropertyTolerance;}

void ProductHeaderType::setMassPropertyTolerance(XmlDouble * MassPropertyToleranceIn)
{MassPropertyTolerance = MassPropertyToleranceIn;}

/*********************************************************************/

/* class ProductType

*/

ProductType::ProductType()
{
  Header = 0;
  GeometrySet = 0;
  TopologySet = 0;
  NoteSet = 0;
  NoteFlagSet = 0;
  PartNoteSet = 0;
  ViewSet = 0;
  LayerSet = 0;
  CoordinateSystemSet = 0;
  VisualizationSet = 0;
  AuxiliarySet = 0;
  PartSet = 0;
  AssemblySet = 0;
  ComponentSet = 0;
  ProductType_1238 = 0;
  AsmPaths = 0;
  MaterialLibrary = 0;
}

ProductType::ProductType(
 ProductHeaderType * HeaderIn,
 GeometrySetType * GeometrySetIn,
 TopologySetType * TopologySetIn,
 NoteSetType * NoteSetIn,
 NoteFlagSetType * NoteFlagSetIn,
 PartNoteSetType * PartNoteSetIn,
 ViewSetType * ViewSetIn,
 LayerSetType * LayerSetIn,
 CoordinateSystemSetType * CoordinateSystemSetIn,
 VisualizationSetType * VisualizationSetIn,
 AuxiliarySetType * AuxiliarySetIn,
 PartSetType * PartSetIn,
 AssemblySetType * AssemblySetIn,
 ComponentSetType * ComponentSetIn,
 ProductType_1238_Type * ProductType_1238In,
 AsmPathsType * AsmPathsIn,
 MaterialsType * MaterialLibraryIn)
{
  Header = HeaderIn;
  GeometrySet = GeometrySetIn;
  TopologySet = TopologySetIn;
  NoteSet = NoteSetIn;
  NoteFlagSet = NoteFlagSetIn;
  PartNoteSet = PartNoteSetIn;
  ViewSet = ViewSetIn;
  LayerSet = LayerSetIn;
  CoordinateSystemSet = CoordinateSystemSetIn;
  VisualizationSet = VisualizationSetIn;
  AuxiliarySet = AuxiliarySetIn;
  PartSet = PartSetIn;
  AssemblySet = AssemblySetIn;
  ComponentSet = ComponentSetIn;
  ProductType_1238 = ProductType_1238In;
  AsmPaths = AsmPathsIn;
  MaterialLibrary = MaterialLibraryIn;
}

ProductType::~ProductType()
{
  #ifndef NODESTRUCT
  delete Header;
  delete GeometrySet;
  delete TopologySet;
  delete NoteSet;
  delete NoteFlagSet;
  delete PartNoteSet;
  delete ViewSet;
  delete LayerSet;
  delete CoordinateSystemSet;
  delete VisualizationSet;
  delete AuxiliarySet;
  delete PartSet;
  delete AssemblySet;
  delete ComponentSet;
  delete ProductType_1238;
  delete AsmPaths;
  delete MaterialLibrary;
  #endif
}

void ProductType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Header)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Header");
      Header->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Header>\n");
    }
  if (GeometrySet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<GeometrySet");
      GeometrySet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</GeometrySet>\n");
    }
  if (TopologySet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TopologySet");
      TopologySet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TopologySet>\n");
    }
  if (NoteSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteSet");
      NoteSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteSet>\n");
    }
  if (NoteFlagSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NoteFlagSet");
      NoteFlagSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NoteFlagSet>\n");
    }
  if (PartNoteSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartNoteSet");
      PartNoteSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartNoteSet>\n");
    }
  if (ViewSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ViewSet");
      ViewSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ViewSet>\n");
    }
  if (LayerSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LayerSet");
      LayerSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LayerSet>\n");
    }
  if (CoordinateSystemSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemSet");
      CoordinateSystemSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CoordinateSystemSet>\n");
    }
  if (VisualizationSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<VisualizationSet");
      VisualizationSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</VisualizationSet>\n");
    }
  if (AuxiliarySet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AuxiliarySet");
      AuxiliarySet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AuxiliarySet>\n");
    }
  if (PartSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartSet");
      PartSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartSet>\n");
    }
  if (AssemblySet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AssemblySet");
      AssemblySet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AssemblySet>\n");
    }
  if (ComponentSet)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ComponentSet");
      ComponentSet->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ComponentSet>\n");
    }
  if (ProductType_1238)
    {
      ProductType_1238->printSelf(outFile);
    }
  if (AsmPaths)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AsmPaths");
      AsmPaths->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AsmPaths>\n");
    }
  if (MaterialLibrary)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaterialLibrary");
      MaterialLibrary->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaterialLibrary>\n");
    }
  doSpaces(-INDENT, outFile);
}

ProductHeaderType * ProductType::getHeader()
{return Header;}

void ProductType::setHeader(ProductHeaderType * HeaderIn)
{Header = HeaderIn;}

GeometrySetType * ProductType::getGeometrySet()
{return GeometrySet;}

void ProductType::setGeometrySet(GeometrySetType * GeometrySetIn)
{GeometrySet = GeometrySetIn;}

TopologySetType * ProductType::getTopologySet()
{return TopologySet;}

void ProductType::setTopologySet(TopologySetType * TopologySetIn)
{TopologySet = TopologySetIn;}

NoteSetType * ProductType::getNoteSet()
{return NoteSet;}

void ProductType::setNoteSet(NoteSetType * NoteSetIn)
{NoteSet = NoteSetIn;}

NoteFlagSetType * ProductType::getNoteFlagSet()
{return NoteFlagSet;}

void ProductType::setNoteFlagSet(NoteFlagSetType * NoteFlagSetIn)
{NoteFlagSet = NoteFlagSetIn;}

PartNoteSetType * ProductType::getPartNoteSet()
{return PartNoteSet;}

void ProductType::setPartNoteSet(PartNoteSetType * PartNoteSetIn)
{PartNoteSet = PartNoteSetIn;}

ViewSetType * ProductType::getViewSet()
{return ViewSet;}

void ProductType::setViewSet(ViewSetType * ViewSetIn)
{ViewSet = ViewSetIn;}

LayerSetType * ProductType::getLayerSet()
{return LayerSet;}

void ProductType::setLayerSet(LayerSetType * LayerSetIn)
{LayerSet = LayerSetIn;}

CoordinateSystemSetType * ProductType::getCoordinateSystemSet()
{return CoordinateSystemSet;}

void ProductType::setCoordinateSystemSet(CoordinateSystemSetType * CoordinateSystemSetIn)
{CoordinateSystemSet = CoordinateSystemSetIn;}

VisualizationSetType * ProductType::getVisualizationSet()
{return VisualizationSet;}

void ProductType::setVisualizationSet(VisualizationSetType * VisualizationSetIn)
{VisualizationSet = VisualizationSetIn;}

AuxiliarySetType * ProductType::getAuxiliarySet()
{return AuxiliarySet;}

void ProductType::setAuxiliarySet(AuxiliarySetType * AuxiliarySetIn)
{AuxiliarySet = AuxiliarySetIn;}

PartSetType * ProductType::getPartSet()
{return PartSet;}

void ProductType::setPartSet(PartSetType * PartSetIn)
{PartSet = PartSetIn;}

AssemblySetType * ProductType::getAssemblySet()
{return AssemblySet;}

void ProductType::setAssemblySet(AssemblySetType * AssemblySetIn)
{AssemblySet = AssemblySetIn;}

ComponentSetType * ProductType::getComponentSet()
{return ComponentSet;}

void ProductType::setComponentSet(ComponentSetType * ComponentSetIn)
{ComponentSet = ComponentSetIn;}

ProductType_1238_Type * ProductType::getProductType_1238()
{return ProductType_1238;}

void ProductType::setProductType_1238(ProductType_1238_Type * ProductType_1238In)
{ProductType_1238 = ProductType_1238In;}

AsmPathsType * ProductType::getAsmPaths()
{return AsmPaths;}

void ProductType::setAsmPaths(AsmPathsType * AsmPathsIn)
{AsmPaths = AsmPathsIn;}

MaterialsType * ProductType::getMaterialLibrary()
{return MaterialLibrary;}

void ProductType::setMaterialLibrary(MaterialsType * MaterialLibraryIn)
{MaterialLibrary = MaterialLibraryIn;}

/*********************************************************************/

/* class TopologyEnumType

*/

TopologyEnumType::TopologyEnumType() :
  XmlString()
{
}

TopologyEnumType::TopologyEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "UNKNOWN") &&
           strcmp(val.c_str(), "PRESENT") &&
           strcmp(val.c_str(), "ABSENT"));
}

TopologyEnumType::~TopologyEnumType() {}

bool TopologyEnumType::TopologyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "UNKNOWN") &&
          strcmp(val.c_str(), "PRESENT") &&
          strcmp(val.c_str(), "ABSENT"));
}

void TopologyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "TopologyEnumType");
}

void TopologyEnumType::printSelf(FILE * outFile)
{
  if (TopologyEnumTypeIsBad())
    {
      fprintf(stderr, "bad TopologyEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void TopologyEnumType::oPrintSelf(FILE * outFile)
{
  if (TopologyEnumTypeIsBad())
    {
      fprintf(stderr, "bad TopologyEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/*********************************************************************/

/* class ValidationPartAssemblyInstanceType

*/

ValidationPartAssemblyInstanceType::ValidationPartAssemblyInstanceType()
{
  AsmPathId = 0;
  Centroid = 0;
  Box = 0;
}

ValidationPartAssemblyInstanceType::ValidationPartAssemblyInstanceType(
 QIFReferenceType * AsmPathIdIn,
 PointSimpleType * CentroidIn,
 BoundingBoxAxisAlignedType * BoxIn)
{
  AsmPathId = AsmPathIdIn;
  Centroid = CentroidIn;
  Box = BoxIn;
}

ValidationPartAssemblyInstanceType::~ValidationPartAssemblyInstanceType()
{
  #ifndef NODESTRUCT
  delete AsmPathId;
  delete Centroid;
  delete Box;
  #endif
}

void ValidationPartAssemblyInstanceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<AsmPathId");
  AsmPathId->printSelf(outFile);
  fprintf(outFile, "</AsmPathId>\n");
  if (Centroid)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Centroid");
      Centroid->printSelf(outFile);
      fprintf(outFile, "</Centroid>\n");
    }
  if (Box)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Box");
      Box->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Box>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * ValidationPartAssemblyInstanceType::getAsmPathId()
{return AsmPathId;}

void ValidationPartAssemblyInstanceType::setAsmPathId(QIFReferenceType * AsmPathIdIn)
{AsmPathId = AsmPathIdIn;}

PointSimpleType * ValidationPartAssemblyInstanceType::getCentroid()
{return Centroid;}

void ValidationPartAssemblyInstanceType::setCentroid(PointSimpleType * CentroidIn)
{Centroid = CentroidIn;}

BoundingBoxAxisAlignedType * ValidationPartAssemblyInstanceType::getBox()
{return Box;}

void ValidationPartAssemblyInstanceType::setBox(BoundingBoxAxisAlignedType * BoxIn)
{Box = BoxIn;}

/*********************************************************************/

/* class ValidationPartAssemblyInstanceTypeLisd

*/

ValidationPartAssemblyInstanceTypeLisd::ValidationPartAssemblyInstanceTypeLisd() {}

ValidationPartAssemblyInstanceTypeLisd::ValidationPartAssemblyInstanceTypeLisd(ValidationPartAssemblyInstanceType * aValidationPartAssemblyInstanceType)
{
  push_back(aValidationPartAssemblyInstanceType);
}

ValidationPartAssemblyInstanceTypeLisd::~ValidationPartAssemblyInstanceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ValidationPartAssemblyInstanceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ValidationPartAssemblyInstanceTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class ValidationPartAssemblyInstancesType

*/

ValidationPartAssemblyInstancesType::ValidationPartAssemblyInstancesType()
{
  n = 0;
  Instance = 0;
}

ValidationPartAssemblyInstancesType::ValidationPartAssemblyInstancesType(
 ValidationPartAssemblyInstanceTypeLisd * InstanceIn)
{
  n = 0;
  Instance = InstanceIn;
}

ValidationPartAssemblyInstancesType::ValidationPartAssemblyInstancesType(
 NaturalType * nIn,
 ValidationPartAssemblyInstanceTypeLisd * InstanceIn)
{
  n = nIn;
  Instance = InstanceIn;
}

ValidationPartAssemblyInstancesType::~ValidationPartAssemblyInstancesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Instance;
  #endif
}

void ValidationPartAssemblyInstancesType::printSelf(FILE * outFile)
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
    if (!Instance)
      {
        fprintf(stderr, "Instance list is missing\n");
        exit(1);
      }
    if (Instance->size() == 0)
      {
        fprintf(stderr, "Instance list is empty\n");
        exit(1);
      }
    std::list<ValidationPartAssemblyInstanceType *>::iterator iter;
    for (iter = Instance->begin();
         iter != Instance->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Instance");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Instance>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ValidationPartAssemblyInstancesType::badAttributes(
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
              fprintf(stderr, "two values for n in ValidationPartAssemblyInstancesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ValidationPartAssemblyInstancesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ValidationPartAssemblyInstancesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ValidationPartAssemblyInstancesType\n");
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

NaturalType * ValidationPartAssemblyInstancesType::getn()
{return n;}

void ValidationPartAssemblyInstancesType::setn(NaturalType * nIn)
{n = nIn;}

ValidationPartAssemblyInstanceTypeLisd * ValidationPartAssemblyInstancesType::getInstance()
{return Instance;}

void ValidationPartAssemblyInstancesType::setInstance(ValidationPartAssemblyInstanceTypeLisd * InstanceIn)
{Instance = InstanceIn;}

/*********************************************************************/

/* class ValidationPartAssemblyType

*/

ValidationPartAssemblyType::ValidationPartAssemblyType()
{
  Area = 0;
  Centroid = 0;
  Volume = 0;
  Box = 0;
  FacePoints = 0;
  EdgePoints = 0;
  Instances = 0;
}

ValidationPartAssemblyType::ValidationPartAssemblyType(
 XmlDouble * AreaIn,
 PointSimpleType * CentroidIn,
 XmlDouble * VolumeIn,
 BoundingBoxAxisAlignedType * BoxIn,
 ValidationPointsType * FacePointsIn,
 ValidationPointsType * EdgePointsIn,
 ValidationPartAssemblyInstancesType * InstancesIn)
{
  Area = AreaIn;
  Centroid = CentroidIn;
  Volume = VolumeIn;
  Box = BoxIn;
  FacePoints = FacePointsIn;
  EdgePoints = EdgePointsIn;
  Instances = InstancesIn;
}

ValidationPartAssemblyType::~ValidationPartAssemblyType()
{
  #ifndef NODESTRUCT
  delete Area;
  delete Centroid;
  delete Volume;
  delete Box;
  delete FacePoints;
  delete EdgePoints;
  delete Instances;
  #endif
}

void ValidationPartAssemblyType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Area)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Area");
      Area->printSelf(outFile);
      fprintf(outFile, "</Area>\n");
    }
  if (Centroid)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Centroid");
      Centroid->printSelf(outFile);
      fprintf(outFile, "</Centroid>\n");
    }
  if (Volume)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Volume");
      Volume->printSelf(outFile);
      fprintf(outFile, "</Volume>\n");
    }
  if (Box)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Box");
      Box->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Box>\n");
    }
  if (FacePoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FacePoints");
      FacePoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FacePoints>\n");
    }
  if (EdgePoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EdgePoints");
      EdgePoints->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</EdgePoints>\n");
    }
  if (Instances)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Instances");
      Instances->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Instances>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlDouble * ValidationPartAssemblyType::getArea()
{return Area;}

void ValidationPartAssemblyType::setArea(XmlDouble * AreaIn)
{Area = AreaIn;}

PointSimpleType * ValidationPartAssemblyType::getCentroid()
{return Centroid;}

void ValidationPartAssemblyType::setCentroid(PointSimpleType * CentroidIn)
{Centroid = CentroidIn;}

XmlDouble * ValidationPartAssemblyType::getVolume()
{return Volume;}

void ValidationPartAssemblyType::setVolume(XmlDouble * VolumeIn)
{Volume = VolumeIn;}

BoundingBoxAxisAlignedType * ValidationPartAssemblyType::getBox()
{return Box;}

void ValidationPartAssemblyType::setBox(BoundingBoxAxisAlignedType * BoxIn)
{Box = BoxIn;}

ValidationPointsType * ValidationPartAssemblyType::getFacePoints()
{return FacePoints;}

void ValidationPartAssemblyType::setFacePoints(ValidationPointsType * FacePointsIn)
{FacePoints = FacePointsIn;}

ValidationPointsType * ValidationPartAssemblyType::getEdgePoints()
{return EdgePoints;}

void ValidationPartAssemblyType::setEdgePoints(ValidationPointsType * EdgePointsIn)
{EdgePoints = EdgePointsIn;}

ValidationPartAssemblyInstancesType * ValidationPartAssemblyType::getInstances()
{return Instances;}

void ValidationPartAssemblyType::setInstances(ValidationPartAssemblyInstancesType * InstancesIn)
{Instances = InstancesIn;}

/*********************************************************************/

/* class ComponentType_1237_Type

*/

ComponentType_1237_Type::ComponentType_1237_Type()
{
  ComponentType_1237_TypePair = 0;
}

ComponentType_1237_Type::ComponentType_1237_Type(
 ComponentType_1237_TypeChoicePair * ComponentType_1237_TypePairIn)
{
  ComponentType_1237_TypePair = ComponentType_1237_TypePairIn;
}

ComponentType_1237_Type::~ComponentType_1237_Type()
{
  #ifndef NODESTRUCT
  delete ComponentType_1237_TypePair;
  #endif
}

void ComponentType_1237_Type::printSelf(FILE * outFile)
{
  ComponentType_1237_TypePair->printSelf(outFile);
}

ComponentType_1237_TypeChoicePair * ComponentType_1237_Type::getComponentType_1237_TypePair()
{return ComponentType_1237_TypePair;}

void ComponentType_1237_Type::setComponentType_1237_TypePair(ComponentType_1237_TypeChoicePair * ComponentType_1237_TypePairIn)
{ComponentType_1237_TypePair = ComponentType_1237_TypePairIn;}

/*********************************************************************/

/* class ComponentType_1237_TypeChoicePair

*/

ComponentType_1237_TypeChoicePair::ComponentType_1237_TypeChoicePair() {}

ComponentType_1237_TypeChoicePair::ComponentType_1237_TypeChoicePair(
 whichOne ComponentType_1237_TypeTypeIn,
 ComponentType_1237_TypeVal ComponentType_1237_TypeValueIn)
{
  ComponentType_1237_TypeType = ComponentType_1237_TypeTypeIn;
  ComponentType_1237_TypeValue = ComponentType_1237_TypeValueIn;
}

ComponentType_1237_TypeChoicePair::~ComponentType_1237_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ComponentType_1237_TypeType == PartE)
    delete ComponentType_1237_TypeValue.Part;
  else if (ComponentType_1237_TypeType == AssemblyE)
    delete ComponentType_1237_TypeValue.Assembly;
  #endif
}

void ComponentType_1237_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ComponentType_1237_TypeType == PartE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Part");
      ComponentType_1237_TypeValue.Part->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Part>\n");
    }
  else if (ComponentType_1237_TypeType == AssemblyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Assembly");
      ComponentType_1237_TypeValue.Assembly->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Assembly>\n");
    }
}

/*********************************************************************/

/* class ProductType_1238_Type

*/

ProductType_1238_Type::ProductType_1238_Type()
{
  ProductType_1238_TypePair = 0;
}

ProductType_1238_Type::ProductType_1238_Type(
 ProductType_1238_TypeChoicePair * ProductType_1238_TypePairIn)
{
  ProductType_1238_TypePair = ProductType_1238_TypePairIn;
}

ProductType_1238_Type::~ProductType_1238_Type()
{
  #ifndef NODESTRUCT
  delete ProductType_1238_TypePair;
  #endif
}

void ProductType_1238_Type::printSelf(FILE * outFile)
{
  if (ProductType_1238_TypePair)
    {
      ProductType_1238_TypePair->printSelf(outFile);
    }
}

ProductType_1238_TypeChoicePair * ProductType_1238_Type::getProductType_1238_TypePair()
{return ProductType_1238_TypePair;}

void ProductType_1238_Type::setProductType_1238_TypePair(ProductType_1238_TypeChoicePair * ProductType_1238_TypePairIn)
{ProductType_1238_TypePair = ProductType_1238_TypePairIn;}

/*********************************************************************/

/* class ProductType_1238_TypeChoicePair

*/

ProductType_1238_TypeChoicePair::ProductType_1238_TypeChoicePair() {}

ProductType_1238_TypeChoicePair::ProductType_1238_TypeChoicePair(
 whichOne ProductType_1238_TypeTypeIn,
 ProductType_1238_TypeVal ProductType_1238_TypeValueIn)
{
  ProductType_1238_TypeType = ProductType_1238_TypeTypeIn;
  ProductType_1238_TypeValue = ProductType_1238_TypeValueIn;
}

ProductType_1238_TypeChoicePair::~ProductType_1238_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ProductType_1238_TypeType == RootPartE)
    delete ProductType_1238_TypeValue.RootPart;
  else if (ProductType_1238_TypeType == RootAssemblyE)
    delete ProductType_1238_TypeValue.RootAssembly;
  else if (ProductType_1238_TypeType == RootComponentE)
    delete ProductType_1238_TypeValue.RootComponent;
  #endif
}

void ProductType_1238_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ProductType_1238_TypeType == RootPartE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RootPart");
      ProductType_1238_TypeValue.RootPart->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RootPart>\n");
    }
  else if (ProductType_1238_TypeType == RootAssemblyE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RootAssembly");
      ProductType_1238_TypeValue.RootAssembly->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RootAssembly>\n");
    }
  else if (ProductType_1238_TypeType == RootComponentE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RootComponent");
      ProductType_1238_TypeValue.RootComponent->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RootComponent>\n");
    }
}

/*********************************************************************/

