/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include  <map>
#include <xmlSchemaInstance.hh>
#include "IntermediatesPMIClasses.hh"

#define INDENT 2
extern std::map<unsigned int, XmlSchemaInstanceBase *> idMap;

/* ***************************************************************** */
/* ***************************************************************** */

/* class AddressDescriptionEnumType

*/

AddressDescriptionEnumType::AddressDescriptionEnumType() :
  XmlNMTOKEN()
{
}

AddressDescriptionEnumType::AddressDescriptionEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "DELIVERY") &&
           strcmp(val.c_str(), "POSTAL") &&
           strcmp(val.c_str(), "VISITOR") &&
           strcmp(val.c_str(), "NOTDEFINED"));
}

AddressDescriptionEnumType::~AddressDescriptionEnumType() {}

bool AddressDescriptionEnumType::AddressDescriptionEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "DELIVERY") &&
          strcmp(val.c_str(), "POSTAL") &&
          strcmp(val.c_str(), "VISITOR") &&
          strcmp(val.c_str(), "NOTDEFINED"));
}

void AddressDescriptionEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "AddressDescriptionEnumType");
}

void AddressDescriptionEnumType::printSelf(FILE * outFile)
{
  if (AddressDescriptionEnumTypeIsBad())
    {
      fprintf(stderr, "bad AddressDescriptionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void AddressDescriptionEnumType::oPrintSelf(FILE * outFile)
{
  if (AddressDescriptionEnumTypeIsBad())
    {
      fprintf(stderr, "bad AddressDescriptionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class AddressDescriptionType

*/

AddressDescriptionType::AddressDescriptionType()
{
  AddressDescriptionTypePair = 0;
}

AddressDescriptionType::AddressDescriptionType(
 AddressDescriptionTypeChoicePair * AddressDescriptionTypePairIn)
{
  AddressDescriptionTypePair = AddressDescriptionTypePairIn;
}

AddressDescriptionType::~AddressDescriptionType()
{
  #ifndef NODESTRUCT
  delete AddressDescriptionTypePair;
  #endif
}

void AddressDescriptionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  AddressDescriptionTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

AddressDescriptionTypeChoicePair * AddressDescriptionType::getAddressDescriptionTypePair()
{return AddressDescriptionTypePair;}

void AddressDescriptionType::setAddressDescriptionTypePair(AddressDescriptionTypeChoicePair * AddressDescriptionTypePairIn)
{AddressDescriptionTypePair = AddressDescriptionTypePairIn;}
AddressDescriptionTypeChoicePair::AddressDescriptionTypeChoicePair() {}

AddressDescriptionTypeChoicePair::AddressDescriptionTypeChoicePair(
 whichOne AddressDescriptionTypeTypeIn,
 AddressDescriptionTypeVal AddressDescriptionTypeValueIn)
{
  AddressDescriptionTypeType = AddressDescriptionTypeTypeIn;
  AddressDescriptionTypeValue = AddressDescriptionTypeValueIn;
}

AddressDescriptionTypeChoicePair::~AddressDescriptionTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (AddressDescriptionTypeType == AddressDescriptionEnumE)
    delete AddressDescriptionTypeValue.AddressDescriptionEnum;
  else if (AddressDescriptionTypeType == OtherAddressDescriptionE)
    delete AddressDescriptionTypeValue.OtherAddressDescription;
  #endif
}

void AddressDescriptionTypeChoicePair::printSelf(FILE * outFile)
{
  if (AddressDescriptionTypeType == AddressDescriptionEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AddressDescriptionEnum");
      AddressDescriptionTypeValue.AddressDescriptionEnum->printSelf(outFile);
      fprintf(outFile, "</AddressDescriptionEnum>\n");
    }
  else if (AddressDescriptionTypeType == OtherAddressDescriptionE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherAddressDescription");
      AddressDescriptionTypeValue.OtherAddressDescription->printSelf(outFile);
      fprintf(outFile, "</OtherAddressDescription>\n");
    }
}

/* ***************************************************************** */

/* class AlgorithmType

*/

AlgorithmType::AlgorithmType()
{
  id = 0;
  Attributes = 0;
  AlgorithmType_1006 = 0;
  Name = 0;
  Description = 0;
}

AlgorithmType::AlgorithmType(
 AttributesType * AttributesIn,
 AlgorithmType_1006_Type * AlgorithmType_1006In,
 XmlString * NameIn,
 XmlString * DescriptionIn)
{
  id = 0;
  Attributes = AttributesIn;
  AlgorithmType_1006 = AlgorithmType_1006In;
  Name = NameIn;
  Description = DescriptionIn;
}

AlgorithmType::AlgorithmType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 AlgorithmType_1006_Type * AlgorithmType_1006In,
 XmlString * NameIn,
 XmlString * DescriptionIn)
{
  id = idIn;
  Attributes = AttributesIn;
  AlgorithmType_1006 = AlgorithmType_1006In;
  Name = NameIn;
  Description = DescriptionIn;
}

AlgorithmType::~AlgorithmType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete AlgorithmType_1006;
  delete Name;
  delete Description;
  #endif
}

void AlgorithmType::printSelf(FILE * outFile)
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
  AlgorithmType_1006->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool AlgorithmType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in AlgorithmType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AlgorithmType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AlgorithmType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in AlgorithmType\n");
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

QIFIdType * AlgorithmType::getid()
{return id;}

void AlgorithmType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * AlgorithmType::getAttributes()
{return Attributes;}

void AlgorithmType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

AlgorithmType_1006_Type * AlgorithmType::getAlgorithmType_1006()
{return AlgorithmType_1006;}

void AlgorithmType::setAlgorithmType_1006(AlgorithmType_1006_Type * AlgorithmType_1006In)
{AlgorithmType_1006 = AlgorithmType_1006In;}

XmlString * AlgorithmType::getName()
{return Name;}

void AlgorithmType::setName(XmlString * NameIn)
{Name = NameIn;}

XmlString * AlgorithmType::getDescription()
{return Description;}

void AlgorithmType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

/* ***************************************************************** */

/* class AlgorithmTypeLisd

*/

AlgorithmTypeLisd::AlgorithmTypeLisd() {}

AlgorithmTypeLisd::AlgorithmTypeLisd(AlgorithmType * aAlgorithmType)
{
  push_back(aAlgorithmType);
}

AlgorithmTypeLisd::~AlgorithmTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AlgorithmType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AlgorithmTypeLisd::printSelf(FILE * outFile)
{
  std::list<AlgorithmType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AlgorithmsType

*/

AlgorithmsType::AlgorithmsType()
{
  n = 0;
  Algorithm = 0;
}

AlgorithmsType::AlgorithmsType(
 AlgorithmTypeLisd * AlgorithmIn)
{
  n = 0;
  Algorithm = AlgorithmIn;
}

AlgorithmsType::AlgorithmsType(
 NaturalType * nIn,
 AlgorithmTypeLisd * AlgorithmIn)
{
  n = nIn;
  Algorithm = AlgorithmIn;
}

AlgorithmsType::~AlgorithmsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Algorithm;
  #endif
}

void AlgorithmsType::printSelf(FILE * outFile)
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
    if (!Algorithm)
      {
        fprintf(stderr, "Algorithm list is missing\n");
        exit(1);
      }
    if (Algorithm->size() == 0)
      {
        fprintf(stderr, "Algorithm list is empty\n");
        exit(1);
      }
    if (Algorithm->size() < 1)
      {
        fprintf(stderr,
                "size of Algorithm list (%d) less than minimum required (1)\n",
                (int)Algorithm->size());
        exit(1);
      }
    std::list<AlgorithmType *>::iterator iter;
    for (iter = Algorithm->begin();
         iter != Algorithm->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Algorithm");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Algorithm>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AlgorithmsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in AlgorithmsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AlgorithmsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AlgorithmsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AlgorithmsType\n");
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

NaturalType * AlgorithmsType::getn()
{return n;}

void AlgorithmsType::setn(NaturalType * nIn)
{n = nIn;}

AlgorithmTypeLisd * AlgorithmsType::getAlgorithm()
{return Algorithm;}

void AlgorithmsType::setAlgorithm(AlgorithmTypeLisd * AlgorithmIn)
{Algorithm = AlgorithmIn;}

/* ***************************************************************** */

/* class AlignmentFeatureType

*/

AlignmentFeatureType::AlignmentFeatureType()
{
  AlignmentFeatureTypePair = 0;
}

AlignmentFeatureType::AlignmentFeatureType(
 AlignmentFeatureTypeChoicePair * AlignmentFeatureTypePairIn)
{
  AlignmentFeatureTypePair = AlignmentFeatureTypePairIn;
}

AlignmentFeatureType::~AlignmentFeatureType()
{
  #ifndef NODESTRUCT
  delete AlignmentFeatureTypePair;
  #endif
}

void AlignmentFeatureType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  AlignmentFeatureTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

AlignmentFeatureTypeChoicePair * AlignmentFeatureType::getAlignmentFeatureTypePair()
{return AlignmentFeatureTypePair;}

void AlignmentFeatureType::setAlignmentFeatureTypePair(AlignmentFeatureTypeChoicePair * AlignmentFeatureTypePairIn)
{AlignmentFeatureTypePair = AlignmentFeatureTypePairIn;}
AlignmentFeatureTypeChoicePair::AlignmentFeatureTypeChoicePair() {}

AlignmentFeatureTypeChoicePair::AlignmentFeatureTypeChoicePair(
 whichOne AlignmentFeatureTypeTypeIn,
 AlignmentFeatureTypeVal AlignmentFeatureTypeValueIn)
{
  AlignmentFeatureTypeType = AlignmentFeatureTypeTypeIn;
  AlignmentFeatureTypeValue = AlignmentFeatureTypeValueIn;
}

AlignmentFeatureTypeChoicePair::~AlignmentFeatureTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (AlignmentFeatureTypeType == DatumDefinitionIdE)
    delete AlignmentFeatureTypeValue.DatumDefinitionId;
  else if (AlignmentFeatureTypeType == BaseFeatureE)
    delete AlignmentFeatureTypeValue.BaseFeature;
  #endif
}

void AlignmentFeatureTypeChoicePair::printSelf(FILE * outFile)
{
  if (AlignmentFeatureTypeType == DatumDefinitionIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionId");
      AlignmentFeatureTypeValue.DatumDefinitionId->printSelf(outFile);
      fprintf(outFile, "</DatumDefinitionId>\n");
    }
  else if (AlignmentFeatureTypeType == BaseFeatureE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BaseFeature");
      AlignmentFeatureTypeValue.BaseFeature->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</BaseFeature>\n");
    }
}

/* ***************************************************************** */

/* class AlignmentOperationBaseType

*/

AlignmentOperationBaseType::AlignmentOperationBaseType()
{
  SequenceNumber = 0;
  Attributes = 0;
}

AlignmentOperationBaseType::AlignmentOperationBaseType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn)
{
  SequenceNumber = SequenceNumberIn;
  Attributes = AttributesIn;
}

AlignmentOperationBaseType::~AlignmentOperationBaseType()
{
  #ifndef NODESTRUCT
  delete SequenceNumber;
  delete Attributes;
  #endif
}

void AlignmentOperationBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

NaturalType * AlignmentOperationBaseType::getSequenceNumber()
{return SequenceNumber;}

void AlignmentOperationBaseType::setSequenceNumber(NaturalType * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

AttributesType * AlignmentOperationBaseType::getAttributes()
{return Attributes;}

void AlignmentOperationBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class AlignmentOperationBaseTypeLisd

*/

AlignmentOperationBaseTypeLisd::AlignmentOperationBaseTypeLisd() {}

AlignmentOperationBaseTypeLisd::AlignmentOperationBaseTypeLisd(AlignmentOperationBaseType * aAlignmentOperationBaseType)
{
  push_back(aAlignmentOperationBaseType);
}

AlignmentOperationBaseTypeLisd::~AlignmentOperationBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AlignmentOperationBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AlignmentOperationBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<AlignmentOperationBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AlignmentOperationsType

*/

AlignmentOperationsType::AlignmentOperationsType()
{
  n = 0;
  AlignmentOperation = 0;
  BaseCoordinateSystemId = 0;
}

AlignmentOperationsType::AlignmentOperationsType(
 AlignmentOperationBaseTypeLisd * AlignmentOperationIn,
 QIFReferenceFullType * BaseCoordinateSystemIdIn)
{
  n = 0;
  AlignmentOperation = AlignmentOperationIn;
  BaseCoordinateSystemId = BaseCoordinateSystemIdIn;
}

AlignmentOperationsType::AlignmentOperationsType(
 NaturalType * nIn,
 AlignmentOperationBaseTypeLisd * AlignmentOperationIn,
 QIFReferenceFullType * BaseCoordinateSystemIdIn)
{
  n = nIn;
  AlignmentOperation = AlignmentOperationIn;
  BaseCoordinateSystemId = BaseCoordinateSystemIdIn;
}

AlignmentOperationsType::~AlignmentOperationsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete AlignmentOperation;
  delete BaseCoordinateSystemId;
  #endif
}

void AlignmentOperationsType::printSelf(FILE * outFile)
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
    if (!AlignmentOperation)
      {
        fprintf(stderr, "AlignmentOperation list is missing\n");
        exit(1);
      }
    if (AlignmentOperation->size() == 0)
      {
        fprintf(stderr, "AlignmentOperation list is empty\n");
        exit(1);
      }
    if (AlignmentOperation->size() < 1)
      {
        fprintf(stderr,
                "size of AlignmentOperation list (%d) less than minimum required (1)\n",
                (int)AlignmentOperation->size());
        exit(1);
      }
    std::list<AlignmentOperationBaseType *>::iterator iter;
    for (iter = AlignmentOperation->begin();
         iter != AlignmentOperation->end(); iter++)
      {
        AlignmentOperationBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->getprintElement() == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->getprintElement(), "PrimaryAlignment") == 0)
          {
            PrimaryAlignmentOperationType * typ;
            if ((typ = dynamic_cast<PrimaryAlignmentOperationType *>(basie)))
              {
                fprintf(outFile, "<PrimaryAlignment");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</PrimaryAlignment>\n");
              }
            else
              {
                fprintf(stderr, "bad PrimaryAlignment element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "SecondaryAlignment") == 0)
          {
            SecondaryAlignmentOperationType * typ;
            if ((typ = dynamic_cast<SecondaryAlignmentOperationType *>(basie)))
              {
                fprintf(outFile, "<SecondaryAlignment");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</SecondaryAlignment>\n");
              }
            else
              {
                fprintf(stderr, "bad SecondaryAlignment element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "MeasurementOffset") == 0)
          {
            MeasurementOffsetAlignmentOperationType * typ;
            if ((typ = dynamic_cast<MeasurementOffsetAlignmentOperationType *>(basie)))
              {
                fprintf(outFile, "<MeasurementOffset");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</MeasurementOffset>\n");
              }
            else
              {
                fprintf(stderr, "bad MeasurementOffset element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "NominalOffset") == 0)
          {
            NominalOffsetAlignmentOperationType * typ;
            if ((typ = dynamic_cast<NominalOffsetAlignmentOperationType *>(basie)))
              {
                fprintf(outFile, "<NominalOffset");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</NominalOffset>\n");
              }
            else
              {
                fprintf(stderr, "bad NominalOffset element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "NominalRotation") == 0)
          {
            NominalRotationAlignmentOperationType * typ;
            if ((typ = dynamic_cast<NominalRotationAlignmentOperationType *>(basie)))
              {
                fprintf(outFile, "<NominalRotation");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</NominalRotation>\n");
              }
            else
              {
                fprintf(stderr, "bad NominalRotation element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "DatumPrecedence") == 0)
          {
            DatumPrecedenceAlignmentOperationType * typ;
            if ((typ = dynamic_cast<DatumPrecedenceAlignmentOperationType *>(basie)))
              {
                fprintf(outFile, "<DatumPrecedence");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DatumPrecedence>\n");
              }
            else
              {
                fprintf(stderr, "bad DatumPrecedence element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "BestFit") == 0)
          {
            BestFitAlignmentOperationType * typ;
            if ((typ = dynamic_cast<BestFitAlignmentOperationType *>(basie)))
              {
                fprintf(outFile, "<BestFit");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</BestFit>\n");
              }
            else
              {
                fprintf(stderr, "bad BestFit element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "Machine") == 0)
          {
            MachineCoordinateSystemOperationType * typ;
            if ((typ = dynamic_cast<MachineCoordinateSystemOperationType *>(basie)))
              {
                fprintf(outFile, "<Machine");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Machine>\n");
              }
            else
              {
                fprintf(stderr, "bad Machine element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad AlignmentOperation type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  if (BaseCoordinateSystemId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BaseCoordinateSystemId");
      BaseCoordinateSystemId->printSelf(outFile);
      fprintf(outFile, "</BaseCoordinateSystemId>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool AlignmentOperationsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in AlignmentOperationsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AlignmentOperationsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AlignmentOperationsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AlignmentOperationsType\n");
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

NaturalType * AlignmentOperationsType::getn()
{return n;}

void AlignmentOperationsType::setn(NaturalType * nIn)
{n = nIn;}

AlignmentOperationBaseTypeLisd * AlignmentOperationsType::getAlignmentOperation()
{return AlignmentOperation;}

void AlignmentOperationsType::setAlignmentOperation(AlignmentOperationBaseTypeLisd * AlignmentOperationIn)
{AlignmentOperation = AlignmentOperationIn;}

QIFReferenceFullType * AlignmentOperationsType::getBaseCoordinateSystemId()
{return BaseCoordinateSystemId;}

void AlignmentOperationsType::setBaseCoordinateSystemId(QIFReferenceFullType * BaseCoordinateSystemIdIn)
{BaseCoordinateSystemId = BaseCoordinateSystemIdIn;}

/* ***************************************************************** */

/* class AngleBetweenAnalysisModeEnumType

*/

AngleBetweenAnalysisModeEnumType::AngleBetweenAnalysisModeEnumType() :
  XmlNMTOKEN()
{
}

AngleBetweenAnalysisModeEnumType::AngleBetweenAnalysisModeEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "TWODIMENSIONAL") &&
           strcmp(val.c_str(), "THREEDIMENSIONAL"));
}

AngleBetweenAnalysisModeEnumType::~AngleBetweenAnalysisModeEnumType() {}

bool AngleBetweenAnalysisModeEnumType::AngleBetweenAnalysisModeEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "TWODIMENSIONAL") &&
          strcmp(val.c_str(), "THREEDIMENSIONAL"));
}

void AngleBetweenAnalysisModeEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "AngleBetweenAnalysisModeEnumType");
}

void AngleBetweenAnalysisModeEnumType::printSelf(FILE * outFile)
{
  if (AngleBetweenAnalysisModeEnumTypeIsBad())
    {
      fprintf(stderr, "bad AngleBetweenAnalysisModeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void AngleBetweenAnalysisModeEnumType::oPrintSelf(FILE * outFile)
{
  if (AngleBetweenAnalysisModeEnumTypeIsBad())
    {
      fprintf(stderr, "bad AngleBetweenAnalysisModeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class AngularCoordinateDirectionEnumType

*/

AngularCoordinateDirectionEnumType::AngularCoordinateDirectionEnumType() :
  XmlNMTOKEN()
{
}

AngularCoordinateDirectionEnumType::AngularCoordinateDirectionEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "ANGULAR") &&
           strcmp(val.c_str(), "AZIMUTH") &&
           strcmp(val.c_str(), "POLAR"));
}

AngularCoordinateDirectionEnumType::~AngularCoordinateDirectionEnumType() {}

bool AngularCoordinateDirectionEnumType::AngularCoordinateDirectionEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ANGULAR") &&
          strcmp(val.c_str(), "AZIMUTH") &&
          strcmp(val.c_str(), "POLAR"));
}

void AngularCoordinateDirectionEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "AngularCoordinateDirectionEnumType");
}

void AngularCoordinateDirectionEnumType::printSelf(FILE * outFile)
{
  if (AngularCoordinateDirectionEnumTypeIsBad())
    {
      fprintf(stderr, "bad AngularCoordinateDirectionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void AngularCoordinateDirectionEnumType::oPrintSelf(FILE * outFile)
{
  if (AngularCoordinateDirectionEnumTypeIsBad())
    {
      fprintf(stderr, "bad AngularCoordinateDirectionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class AngularToleranceDefinitionType

*/

AngularToleranceDefinitionType::AngularToleranceDefinitionType()
{
  id = 0;
  Attributes = 0;
  AngularToleranc_1007 = 0;
}

AngularToleranceDefinitionType::AngularToleranceDefinitionType(
 AttributesType * AttributesIn,
 AngularToleranc_1007_Type * AngularToleranc_1007In)
{
  id = 0;
  Attributes = AttributesIn;
  AngularToleranc_1007 = AngularToleranc_1007In;
}

AngularToleranceDefinitionType::AngularToleranceDefinitionType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 AngularToleranc_1007_Type * AngularToleranc_1007In)
{
  id = idIn;
  Attributes = AttributesIn;
  AngularToleranc_1007 = AngularToleranc_1007In;
}

AngularToleranceDefinitionType::~AngularToleranceDefinitionType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete AngularToleranc_1007;
  #endif
}

void AngularToleranceDefinitionType::printSelf(FILE * outFile)
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
  AngularToleranc_1007->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool AngularToleranceDefinitionType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in AngularToleranceDefinitionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AngularToleranceDefinitionType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AngularToleranceDefinitionType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in AngularToleranceDefinitionType\n");
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

QIFIdType * AngularToleranceDefinitionType::getid()
{return id;}

void AngularToleranceDefinitionType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * AngularToleranceDefinitionType::getAttributes()
{return Attributes;}

void AngularToleranceDefinitionType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

AngularToleranc_1007_Type * AngularToleranceDefinitionType::getAngularToleranc_1007()
{return AngularToleranc_1007;}

void AngularToleranceDefinitionType::setAngularToleranc_1007(AngularToleranc_1007_Type * AngularToleranc_1007In)
{AngularToleranc_1007 = AngularToleranc_1007In;}

/* ***************************************************************** */

/* class AngularToleranceType

*/

AngularToleranceType::AngularToleranceType()
{
  AngularToleranc_1008 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

AngularToleranceType::AngularToleranceType(
 AngularToleranc_1008_Type * AngularToleranc_1008In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  AngularToleranc_1008 = AngularToleranc_1008In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

AngularToleranceType::~AngularToleranceType()
{
  #ifndef NODESTRUCT
  delete AngularToleranc_1008;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void AngularToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  AngularToleranc_1008->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

AngularToleranc_1008_Type * AngularToleranceType::getAngularToleranc_1008()
{return AngularToleranc_1008;}

void AngularToleranceType::setAngularToleranc_1008(AngularToleranc_1008_Type * AngularToleranc_1008In)
{AngularToleranc_1008 = AngularToleranc_1008In;}

XmlBoolean * AngularToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void AngularToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * AngularToleranceType::getAttributes()
{return Attributes;}

void AngularToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class AreaToleranceType

*/

AreaToleranceType::AreaToleranceType()
{
  AreaToleranceTy_1009 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

AreaToleranceType::AreaToleranceType(
 AreaToleranceTy_1009_Type * AreaToleranceTy_1009In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  AreaToleranceTy_1009 = AreaToleranceTy_1009In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

AreaToleranceType::~AreaToleranceType()
{
  #ifndef NODESTRUCT
  delete AreaToleranceTy_1009;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void AreaToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  AreaToleranceTy_1009->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

AreaToleranceTy_1009_Type * AreaToleranceType::getAreaToleranceTy_1009()
{return AreaToleranceTy_1009;}

void AreaToleranceType::setAreaToleranceTy_1009(AreaToleranceTy_1009_Type * AreaToleranceTy_1009In)
{AreaToleranceTy_1009 = AreaToleranceTy_1009In;}

XmlBoolean * AreaToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void AreaToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * AreaToleranceType::getAttributes()
{return Attributes;}

void AreaToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class BaseFeatureType

*/

BaseFeatureType::BaseFeatureType()
{
  ReferencedComponent = 0;
  FeatureId = 0;
}

BaseFeatureType::BaseFeatureType(
 ReferencedComponentEnumType * ReferencedComponentIn,
 QIFReferenceFullType * FeatureIdIn)
{
  ReferencedComponent = ReferencedComponentIn;
  FeatureId = FeatureIdIn;
}

BaseFeatureType::~BaseFeatureType()
{
  #ifndef NODESTRUCT
  delete ReferencedComponent;
  delete FeatureId;
  #endif
}

void BaseFeatureType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ReferencedComponent");
  ReferencedComponent->printSelf(outFile);
  fprintf(outFile, "</ReferencedComponent>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureId");
  FeatureId->printSelf(outFile);
  fprintf(outFile, "</FeatureId>\n");
  doSpaces(-INDENT, outFile);
}

ReferencedComponentEnumType * BaseFeatureType::getReferencedComponent()
{return ReferencedComponent;}

void BaseFeatureType::setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn)
{ReferencedComponent = ReferencedComponentIn;}

QIFReferenceFullType * BaseFeatureType::getFeatureId()
{return FeatureId;}

void BaseFeatureType::setFeatureId(QIFReferenceFullType * FeatureIdIn)
{FeatureId = FeatureIdIn;}

/* ***************************************************************** */

/* class BaseFeatureTypeLisd

*/

BaseFeatureTypeLisd::BaseFeatureTypeLisd() {}

BaseFeatureTypeLisd::BaseFeatureTypeLisd(BaseFeatureType * aBaseFeatureType)
{
  push_back(aBaseFeatureType);
}

BaseFeatureTypeLisd::~BaseFeatureTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<BaseFeatureType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void BaseFeatureTypeLisd::printSelf(FILE * outFile)
{
  std::list<BaseFeatureType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class BestFitAlignmentOperationType

*/

BestFitAlignmentOperationType::BestFitAlignmentOperationType() :
  AlignmentOperationBaseType()
{
  n = 0;
  DegreesOfFreedom = 0;
  BaseFeature = 0;
}

BestFitAlignmentOperationType::BestFitAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 DegreesOfFreedomType * DegreesOfFreedomIn,
 SequencedBaseFeatureTypeLisd * BaseFeatureIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  n = 0;
  DegreesOfFreedom = DegreesOfFreedomIn;
  BaseFeature = BaseFeatureIn;
}

BestFitAlignmentOperationType::BestFitAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 NaturalType * nIn,
 DegreesOfFreedomType * DegreesOfFreedomIn,
 SequencedBaseFeatureTypeLisd * BaseFeatureIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  n = nIn;
  DegreesOfFreedom = DegreesOfFreedomIn;
  BaseFeature = BaseFeatureIn;
}

BestFitAlignmentOperationType::~BestFitAlignmentOperationType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DegreesOfFreedom;
  delete BaseFeature;
  #endif
}

void BestFitAlignmentOperationType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<DegreesOfFreedom");
  DegreesOfFreedom->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</DegreesOfFreedom>\n");
  {
    if (!BaseFeature)
      {
        fprintf(stderr, "BaseFeature list is missing\n");
        exit(1);
      }
    if (BaseFeature->size() == 0)
      {
        fprintf(stderr, "BaseFeature list is empty\n");
        exit(1);
      }
    if (BaseFeature->size() < 1)
      {
        fprintf(stderr,
                "size of BaseFeature list (%d) less than minimum required (1)\n",
                (int)BaseFeature->size());
        exit(1);
      }
    std::list<SequencedBaseFeatureType *>::iterator iter;
    for (iter = BaseFeature->begin();
         iter != BaseFeature->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<BaseFeature");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</BaseFeature>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool BestFitAlignmentOperationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in BestFitAlignmentOperationType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in BestFitAlignmentOperationType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in BestFitAlignmentOperationType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in BestFitAlignmentOperationType\n");
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

NaturalType * BestFitAlignmentOperationType::getn()
{return n;}

void BestFitAlignmentOperationType::setn(NaturalType * nIn)
{n = nIn;}

DegreesOfFreedomType * BestFitAlignmentOperationType::getDegreesOfFreedom()
{return DegreesOfFreedom;}

void BestFitAlignmentOperationType::setDegreesOfFreedom(DegreesOfFreedomType * DegreesOfFreedomIn)
{DegreesOfFreedom = DegreesOfFreedomIn;}

SequencedBaseFeatureTypeLisd * BestFitAlignmentOperationType::getBaseFeature()
{return BaseFeature;}

void BestFitAlignmentOperationType::setBaseFeature(SequencedBaseFeatureTypeLisd * BaseFeatureIn)
{BaseFeature = BaseFeatureIn;}

/* ***************************************************************** */

/* class CollectionPlaneType

*/

CollectionPlaneType::CollectionPlaneType()
{
  CollectionPlaneEnum = 0;
  DatumDefinitionId = 0;
}

CollectionPlaneType::CollectionPlaneType(
 ModifyingPlaneEnumType * CollectionPlaneEnumIn,
 QIFReferenceFullType * DatumDefinitionIdIn)
{
  CollectionPlaneEnum = CollectionPlaneEnumIn;
  DatumDefinitionId = DatumDefinitionIdIn;
}

CollectionPlaneType::~CollectionPlaneType()
{
  #ifndef NODESTRUCT
  delete CollectionPlaneEnum;
  delete DatumDefinitionId;
  #endif
}

void CollectionPlaneType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<CollectionPlaneEnum");
  CollectionPlaneEnum->printSelf(outFile);
  fprintf(outFile, "</CollectionPlaneEnum>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumDefinitionId");
  DatumDefinitionId->printSelf(outFile);
  fprintf(outFile, "</DatumDefinitionId>\n");
  doSpaces(-INDENT, outFile);
}

ModifyingPlaneEnumType * CollectionPlaneType::getCollectionPlaneEnum()
{return CollectionPlaneEnum;}

void CollectionPlaneType::setCollectionPlaneEnum(ModifyingPlaneEnumType * CollectionPlaneEnumIn)
{CollectionPlaneEnum = CollectionPlaneEnumIn;}

QIFReferenceFullType * CollectionPlaneType::getDatumDefinitionId()
{return DatumDefinitionId;}

void CollectionPlaneType::setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn)
{DatumDefinitionId = DatumDefinitionIdIn;}

/* ***************************************************************** */

/* class CommonFileSpecEnumType

*/

CommonFileSpecEnumType::CommonFileSpecEnumType() :
  XmlNMTOKEN()
{
}

CommonFileSpecEnumType::CommonFileSpecEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "AVI") &&
           strcmp(val.c_str(), "BMP") &&
           strcmp(val.c_str(), "DOC") &&
           strcmp(val.c_str(), "DOCX") &&
           strcmp(val.c_str(), "DXF") &&
           strcmp(val.c_str(), "DTD") &&
           strcmp(val.c_str(), "GIF") &&
           strcmp(val.c_str(), "GZIP") &&
           strcmp(val.c_str(), "HTML") &&
           strcmp(val.c_str(), "IGES") &&
           strcmp(val.c_str(), "JPEG") &&
           strcmp(val.c_str(), "JPG") &&
           strcmp(val.c_str(), "MOV") &&
           strcmp(val.c_str(), "MPEG") &&
           strcmp(val.c_str(), "MPG") &&
           strcmp(val.c_str(), "PDF") &&
           strcmp(val.c_str(), "PNG") &&
           strcmp(val.c_str(), "PPM") &&
           strcmp(val.c_str(), "PPT") &&
           strcmp(val.c_str(), "PRT") &&
           strcmp(val.c_str(), "RAR") &&
           strcmp(val.c_str(), "RTF") &&
           strcmp(val.c_str(), "STL") &&
           strcmp(val.c_str(), "STEP") &&
           strcmp(val.c_str(), "STP") &&
           strcmp(val.c_str(), "TAR") &&
           strcmp(val.c_str(), "TIF") &&
           strcmp(val.c_str(), "TIFF") &&
           strcmp(val.c_str(), "TXT") &&
           strcmp(val.c_str(), "WMV") &&
           strcmp(val.c_str(), "XLS") &&
           strcmp(val.c_str(), "XLSX") &&
           strcmp(val.c_str(), "XML") &&
           strcmp(val.c_str(), "XSD") &&
           strcmp(val.c_str(), "X_T") &&
           strcmp(val.c_str(), "ZIP"));
}

CommonFileSpecEnumType::~CommonFileSpecEnumType() {}

bool CommonFileSpecEnumType::CommonFileSpecEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "AVI") &&
          strcmp(val.c_str(), "BMP") &&
          strcmp(val.c_str(), "DOC") &&
          strcmp(val.c_str(), "DOCX") &&
          strcmp(val.c_str(), "DXF") &&
          strcmp(val.c_str(), "DTD") &&
          strcmp(val.c_str(), "GIF") &&
          strcmp(val.c_str(), "GZIP") &&
          strcmp(val.c_str(), "HTML") &&
          strcmp(val.c_str(), "IGES") &&
          strcmp(val.c_str(), "JPEG") &&
          strcmp(val.c_str(), "JPG") &&
          strcmp(val.c_str(), "MOV") &&
          strcmp(val.c_str(), "MPEG") &&
          strcmp(val.c_str(), "MPG") &&
          strcmp(val.c_str(), "PDF") &&
          strcmp(val.c_str(), "PNG") &&
          strcmp(val.c_str(), "PPM") &&
          strcmp(val.c_str(), "PPT") &&
          strcmp(val.c_str(), "PRT") &&
          strcmp(val.c_str(), "RAR") &&
          strcmp(val.c_str(), "RTF") &&
          strcmp(val.c_str(), "STL") &&
          strcmp(val.c_str(), "STEP") &&
          strcmp(val.c_str(), "STP") &&
          strcmp(val.c_str(), "TAR") &&
          strcmp(val.c_str(), "TIF") &&
          strcmp(val.c_str(), "TIFF") &&
          strcmp(val.c_str(), "TXT") &&
          strcmp(val.c_str(), "WMV") &&
          strcmp(val.c_str(), "XLS") &&
          strcmp(val.c_str(), "XLSX") &&
          strcmp(val.c_str(), "XML") &&
          strcmp(val.c_str(), "XSD") &&
          strcmp(val.c_str(), "X_T") &&
          strcmp(val.c_str(), "ZIP"));
}

void CommonFileSpecEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "CommonFileSpecEnumType");
}

void CommonFileSpecEnumType::printSelf(FILE * outFile)
{
  if (CommonFileSpecEnumTypeIsBad())
    {
      fprintf(stderr, "bad CommonFileSpecEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void CommonFileSpecEnumType::oPrintSelf(FILE * outFile)
{
  if (CommonFileSpecEnumTypeIsBad())
    {
      fprintf(stderr, "bad CommonFileSpecEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class CompoundDatumType

*/

CompoundDatumType::CompoundDatumType()
{
  n = 0;
  Datum = 0;
  ReducedDatum = 0;
}

CompoundDatumType::CompoundDatumType(
 SequencedDatumTypeLisd * DatumIn,
 ReducedDatumEnumType * ReducedDatumIn)
{
  n = 0;
  Datum = DatumIn;
  ReducedDatum = ReducedDatumIn;
}

CompoundDatumType::CompoundDatumType(
 NaturalType * nIn,
 SequencedDatumTypeLisd * DatumIn,
 ReducedDatumEnumType * ReducedDatumIn)
{
  n = nIn;
  Datum = DatumIn;
  ReducedDatum = ReducedDatumIn;
}

CompoundDatumType::~CompoundDatumType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Datum;
  delete ReducedDatum;
  #endif
}

void CompoundDatumType::printSelf(FILE * outFile)
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
    if (!Datum)
      {
        fprintf(stderr, "Datum list is missing\n");
        exit(1);
      }
    if (Datum->size() == 0)
      {
        fprintf(stderr, "Datum list is empty\n");
        exit(1);
      }
    if (Datum->size() < 2)
      {
        fprintf(stderr,
                "size of Datum list (%d) less than minimum required (2)\n",
                (int)Datum->size());
        exit(1);
      }
    std::list<SequencedDatumType *>::iterator iter;
    for (iter = Datum->begin();
         iter != Datum->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Datum");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Datum>\n");
      }
  }
  if (ReducedDatum)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReducedDatum");
      ReducedDatum->printSelf(outFile);
      fprintf(outFile, "</ReducedDatum>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool CompoundDatumType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in CompoundDatumType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CompoundDatumType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CompoundDatumType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CompoundDatumType\n");
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

NaturalType * CompoundDatumType::getn()
{return n;}

void CompoundDatumType::setn(NaturalType * nIn)
{n = nIn;}

SequencedDatumTypeLisd * CompoundDatumType::getDatum()
{return Datum;}

void CompoundDatumType::setDatum(SequencedDatumTypeLisd * DatumIn)
{Datum = DatumIn;}

ReducedDatumEnumType * CompoundDatumType::getReducedDatum()
{return ReducedDatum;}

void CompoundDatumType::setReducedDatum(ReducedDatumEnumType * ReducedDatumIn)
{ReducedDatum = ReducedDatumIn;}

/* ***************************************************************** */

/* class CoordinateSystemActualTransformAssociationType

*/

CoordinateSystemActualTransformAssociationType::CoordinateSystemActualTransformAssociationType()
{
  ActualTransformId = 0;
  CoordinateSystemId = 0;
}

CoordinateSystemActualTransformAssociationType::CoordinateSystemActualTransformAssociationType(
 QIFReferenceType * ActualTransformIdIn,
 QIFReferenceFullType * CoordinateSystemIdIn)
{
  ActualTransformId = ActualTransformIdIn;
  CoordinateSystemId = CoordinateSystemIdIn;
}

CoordinateSystemActualTransformAssociationType::~CoordinateSystemActualTransformAssociationType()
{
  #ifndef NODESTRUCT
  delete ActualTransformId;
  delete CoordinateSystemId;
  #endif
}

void CoordinateSystemActualTransformAssociationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ActualTransformId");
  ActualTransformId->printSelf(outFile);
  fprintf(outFile, "</ActualTransformId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<CoordinateSystemId");
  CoordinateSystemId->printSelf(outFile);
  fprintf(outFile, "</CoordinateSystemId>\n");
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * CoordinateSystemActualTransformAssociationType::getActualTransformId()
{return ActualTransformId;}

void CoordinateSystemActualTransformAssociationType::setActualTransformId(QIFReferenceType * ActualTransformIdIn)
{ActualTransformId = ActualTransformIdIn;}

QIFReferenceFullType * CoordinateSystemActualTransformAssociationType::getCoordinateSystemId()
{return CoordinateSystemId;}

void CoordinateSystemActualTransformAssociationType::setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn)
{CoordinateSystemId = CoordinateSystemIdIn;}

/* ***************************************************************** */

/* class CoordinateSystemActualTransformAssociationTypeLisd

*/

CoordinateSystemActualTransformAssociationTypeLisd::CoordinateSystemActualTransformAssociationTypeLisd() {}

CoordinateSystemActualTransformAssociationTypeLisd::CoordinateSystemActualTransformAssociationTypeLisd(CoordinateSystemActualTransformAssociationType * aCoordinateSystemActualTransformAssociationType)
{
  push_back(aCoordinateSystemActualTransformAssociationType);
}

CoordinateSystemActualTransformAssociationTypeLisd::~CoordinateSystemActualTransformAssociationTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<CoordinateSystemActualTransformAssociationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void CoordinateSystemActualTransformAssociationTypeLisd::printSelf(FILE * outFile)
{
  std::list<CoordinateSystemActualTransformAssociationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class CoordinateSystemActualTransformAssociationsType

*/

CoordinateSystemActualTransformAssociationsType::CoordinateSystemActualTransformAssociationsType()
{
  n = 0;
  CoordinateSystemActualTransformAssociation = 0;
}

CoordinateSystemActualTransformAssociationsType::CoordinateSystemActualTransformAssociationsType(
 CoordinateSystemActualTransformAssociationTypeLisd * CoordinateSystemActualTransformAssociationIn)
{
  n = 0;
  CoordinateSystemActualTransformAssociation = CoordinateSystemActualTransformAssociationIn;
}

CoordinateSystemActualTransformAssociationsType::CoordinateSystemActualTransformAssociationsType(
 NaturalType * nIn,
 CoordinateSystemActualTransformAssociationTypeLisd * CoordinateSystemActualTransformAssociationIn)
{
  n = nIn;
  CoordinateSystemActualTransformAssociation = CoordinateSystemActualTransformAssociationIn;
}

CoordinateSystemActualTransformAssociationsType::~CoordinateSystemActualTransformAssociationsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete CoordinateSystemActualTransformAssociation;
  #endif
}

void CoordinateSystemActualTransformAssociationsType::printSelf(FILE * outFile)
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
    if (!CoordinateSystemActualTransformAssociation)
      {
        fprintf(stderr, "CoordinateSystemActualTransformAssociation list is missing\n");
        exit(1);
      }
    if (CoordinateSystemActualTransformAssociation->size() == 0)
      {
        fprintf(stderr, "CoordinateSystemActualTransformAssociation list is empty\n");
        exit(1);
      }
    if (CoordinateSystemActualTransformAssociation->size() < 1)
      {
        fprintf(stderr,
                "size of CoordinateSystemActualTransformAssociation list (%d) less than minimum required (1)\n",
                (int)CoordinateSystemActualTransformAssociation->size());
        exit(1);
      }
    std::list<CoordinateSystemActualTransformAssociationType *>::iterator iter;
    for (iter = CoordinateSystemActualTransformAssociation->begin();
         iter != CoordinateSystemActualTransformAssociation->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<CoordinateSystemActualTransformAssociation");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</CoordinateSystemActualTransformAssociation>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CoordinateSystemActualTransformAssociationsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in CoordinateSystemActualTransformAssociationsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CoordinateSystemActualTransformAssociationsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CoordinateSystemActualTransformAssociationsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CoordinateSystemActualTransformAssociationsType\n");
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

NaturalType * CoordinateSystemActualTransformAssociationsType::getn()
{return n;}

void CoordinateSystemActualTransformAssociationsType::setn(NaturalType * nIn)
{n = nIn;}

CoordinateSystemActualTransformAssociationTypeLisd * CoordinateSystemActualTransformAssociationsType::getCoordinateSystemActualTransformAssociation()
{return CoordinateSystemActualTransformAssociation;}

void CoordinateSystemActualTransformAssociationsType::setCoordinateSystemActualTransformAssociation(CoordinateSystemActualTransformAssociationTypeLisd * CoordinateSystemActualTransformAssociationIn)
{CoordinateSystemActualTransformAssociation = CoordinateSystemActualTransformAssociationIn;}

/* ***************************************************************** */

/* class CoordinateSystemListType

*/

CoordinateSystemListType::CoordinateSystemListType()
{
  n = 0;
  CoordinateSystem = 0;
}

CoordinateSystemListType::CoordinateSystemListType(
 CoordinateSystemTypeLisd * CoordinateSystemIn)
{
  n = 0;
  CoordinateSystem = CoordinateSystemIn;
}

CoordinateSystemListType::CoordinateSystemListType(
 NaturalType * nIn,
 CoordinateSystemTypeLisd * CoordinateSystemIn)
{
  n = nIn;
  CoordinateSystem = CoordinateSystemIn;
}

CoordinateSystemListType::~CoordinateSystemListType()
{
  #ifndef NODESTRUCT
  delete n;
  delete CoordinateSystem;
  #endif
}

void CoordinateSystemListType::printSelf(FILE * outFile)
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
    if (!CoordinateSystem)
      {
        fprintf(stderr, "CoordinateSystem list is missing\n");
        exit(1);
      }
    if (CoordinateSystem->size() == 0)
      {
        fprintf(stderr, "CoordinateSystem list is empty\n");
        exit(1);
      }
    if (CoordinateSystem->size() < 1)
      {
        fprintf(stderr,
                "size of CoordinateSystem list (%d) less than minimum required (1)\n",
                (int)CoordinateSystem->size());
        exit(1);
      }
    std::list<CoordinateSystemType *>::iterator iter;
    for (iter = CoordinateSystem->begin();
         iter != CoordinateSystem->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<CoordinateSystem");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</CoordinateSystem>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CoordinateSystemListType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in CoordinateSystemListType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CoordinateSystemListType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CoordinateSystemListType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CoordinateSystemListType\n");
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

NaturalType * CoordinateSystemListType::getn()
{return n;}

void CoordinateSystemListType::setn(NaturalType * nIn)
{n = nIn;}

CoordinateSystemTypeLisd * CoordinateSystemListType::getCoordinateSystem()
{return CoordinateSystem;}

void CoordinateSystemListType::setCoordinateSystem(CoordinateSystemTypeLisd * CoordinateSystemIn)
{CoordinateSystem = CoordinateSystemIn;}

/* ***************************************************************** */

/* class CoordinateSystemType

*/

CoordinateSystemType::CoordinateSystemType()
{
  id = 0;
  Attributes = 0;
  Name = 0;
  NominalTransform = 0;
  InternalCADCoordinateSystemId = 0;
  ExternalCADCoordinateSystemId = 0;
  AlignmentOperations = 0;
  SequenceNumber = 0;
}

CoordinateSystemType::CoordinateSystemType(
 AttributesType * AttributesIn,
 XmlToken * NameIn,
 TransformMatrixType * NominalTransformIn,
 QIFReferenceFullType * InternalCADCoordinateSystemIdIn,
 QIFReferenceFullType * ExternalCADCoordinateSystemIdIn,
 AlignmentOperationsType * AlignmentOperationsIn,
 NaturalType * SequenceNumberIn)
{
  id = 0;
  Attributes = AttributesIn;
  Name = NameIn;
  NominalTransform = NominalTransformIn;
  InternalCADCoordinateSystemId = InternalCADCoordinateSystemIdIn;
  ExternalCADCoordinateSystemId = ExternalCADCoordinateSystemIdIn;
  AlignmentOperations = AlignmentOperationsIn;
  SequenceNumber = SequenceNumberIn;
}

CoordinateSystemType::CoordinateSystemType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlToken * NameIn,
 TransformMatrixType * NominalTransformIn,
 QIFReferenceFullType * InternalCADCoordinateSystemIdIn,
 QIFReferenceFullType * ExternalCADCoordinateSystemIdIn,
 AlignmentOperationsType * AlignmentOperationsIn,
 NaturalType * SequenceNumberIn)
{
  id = idIn;
  Attributes = AttributesIn;
  Name = NameIn;
  NominalTransform = NominalTransformIn;
  InternalCADCoordinateSystemId = InternalCADCoordinateSystemIdIn;
  ExternalCADCoordinateSystemId = ExternalCADCoordinateSystemIdIn;
  AlignmentOperations = AlignmentOperationsIn;
  SequenceNumber = SequenceNumberIn;
}

CoordinateSystemType::~CoordinateSystemType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete Name;
  delete NominalTransform;
  delete InternalCADCoordinateSystemId;
  delete ExternalCADCoordinateSystemId;
  delete AlignmentOperations;
  delete SequenceNumber;
  #endif
}

void CoordinateSystemType::printSelf(FILE * outFile)
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
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (NominalTransform)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NominalTransform");
      NominalTransform->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NominalTransform>\n");
    }
  if (InternalCADCoordinateSystemId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InternalCADCoordinateSystemId");
      InternalCADCoordinateSystemId->printSelf(outFile);
      fprintf(outFile, "</InternalCADCoordinateSystemId>\n");
    }
  if (ExternalCADCoordinateSystemId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExternalCADCoordinateSystemId");
      ExternalCADCoordinateSystemId->printSelf(outFile);
      fprintf(outFile, "</ExternalCADCoordinateSystemId>\n");
    }
  if (AlignmentOperations)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlignmentOperations");
      AlignmentOperations->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlignmentOperations>\n");
    }
  if (SequenceNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SequenceNumber");
      SequenceNumber->printSelf(outFile);
      fprintf(outFile, "</SequenceNumber>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool CoordinateSystemType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in CoordinateSystemType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CoordinateSystemType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CoordinateSystemType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in CoordinateSystemType\n");
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

QIFIdType * CoordinateSystemType::getid()
{return id;}

void CoordinateSystemType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * CoordinateSystemType::getAttributes()
{return Attributes;}

void CoordinateSystemType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlToken * CoordinateSystemType::getName()
{return Name;}

void CoordinateSystemType::setName(XmlToken * NameIn)
{Name = NameIn;}

TransformMatrixType * CoordinateSystemType::getNominalTransform()
{return NominalTransform;}

void CoordinateSystemType::setNominalTransform(TransformMatrixType * NominalTransformIn)
{NominalTransform = NominalTransformIn;}

QIFReferenceFullType * CoordinateSystemType::getInternalCADCoordinateSystemId()
{return InternalCADCoordinateSystemId;}

void CoordinateSystemType::setInternalCADCoordinateSystemId(QIFReferenceFullType * InternalCADCoordinateSystemIdIn)
{InternalCADCoordinateSystemId = InternalCADCoordinateSystemIdIn;}

QIFReferenceFullType * CoordinateSystemType::getExternalCADCoordinateSystemId()
{return ExternalCADCoordinateSystemId;}

void CoordinateSystemType::setExternalCADCoordinateSystemId(QIFReferenceFullType * ExternalCADCoordinateSystemIdIn)
{ExternalCADCoordinateSystemId = ExternalCADCoordinateSystemIdIn;}

AlignmentOperationsType * CoordinateSystemType::getAlignmentOperations()
{return AlignmentOperations;}

void CoordinateSystemType::setAlignmentOperations(AlignmentOperationsType * AlignmentOperationsIn)
{AlignmentOperations = AlignmentOperationsIn;}

NaturalType * CoordinateSystemType::getSequenceNumber()
{return SequenceNumber;}

void CoordinateSystemType::setSequenceNumber(NaturalType * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

/* ***************************************************************** */

/* class CoordinateSystemTypeLisd

*/

CoordinateSystemTypeLisd::CoordinateSystemTypeLisd() {}

CoordinateSystemTypeLisd::CoordinateSystemTypeLisd(CoordinateSystemType * aCoordinateSystemType)
{
  push_back(aCoordinateSystemType);
}

CoordinateSystemTypeLisd::~CoordinateSystemTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<CoordinateSystemType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void CoordinateSystemTypeLisd::printSelf(FILE * outFile)
{
  std::list<CoordinateSystemType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class CoordinateSystemsType

*/

CoordinateSystemsType::CoordinateSystemsType()
{
  CoordinateSystemDefinitions = 0;
  CommonCoordinateSystemId = 0;
  MachineCoordinateSystem = 0;
}

CoordinateSystemsType::CoordinateSystemsType(
 CoordinateSystemListType * CoordinateSystemDefinitionsIn,
 QIFReferenceFullType * CommonCoordinateSystemIdIn,
 MachineCoordinateSystemTypeLisd * MachineCoordinateSystemIn)
{
  CoordinateSystemDefinitions = CoordinateSystemDefinitionsIn;
  CommonCoordinateSystemId = CommonCoordinateSystemIdIn;
  MachineCoordinateSystem = MachineCoordinateSystemIn;
}

CoordinateSystemsType::~CoordinateSystemsType()
{
  #ifndef NODESTRUCT
  delete CoordinateSystemDefinitions;
  delete CommonCoordinateSystemId;
  delete MachineCoordinateSystem;
  #endif
}

void CoordinateSystemsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<CoordinateSystemDefinitions");
  CoordinateSystemDefinitions->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CoordinateSystemDefinitions>\n");
  if (CommonCoordinateSystemId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CommonCoordinateSystemId");
      CommonCoordinateSystemId->printSelf(outFile);
      fprintf(outFile, "</CommonCoordinateSystemId>\n");
    }
  {
    if (!MachineCoordinateSystem)
      {
        MachineCoordinateSystem = new MachineCoordinateSystemTypeLisd;
      }
    std::list<MachineCoordinateSystemType *>::iterator iter;
    for (iter = MachineCoordinateSystem->begin();
         iter != MachineCoordinateSystem->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<MachineCoordinateSystem");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</MachineCoordinateSystem>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

CoordinateSystemListType * CoordinateSystemsType::getCoordinateSystemDefinitions()
{return CoordinateSystemDefinitions;}

void CoordinateSystemsType::setCoordinateSystemDefinitions(CoordinateSystemListType * CoordinateSystemDefinitionsIn)
{CoordinateSystemDefinitions = CoordinateSystemDefinitionsIn;}

QIFReferenceFullType * CoordinateSystemsType::getCommonCoordinateSystemId()
{return CommonCoordinateSystemId;}

void CoordinateSystemsType::setCommonCoordinateSystemId(QIFReferenceFullType * CommonCoordinateSystemIdIn)
{CommonCoordinateSystemId = CommonCoordinateSystemIdIn;}

MachineCoordinateSystemTypeLisd * CoordinateSystemsType::getMachineCoordinateSystem()
{return MachineCoordinateSystem;}

void CoordinateSystemsType::setMachineCoordinateSystem(MachineCoordinateSystemTypeLisd * MachineCoordinateSystemIn)
{MachineCoordinateSystem = MachineCoordinateSystemIn;}

/* ***************************************************************** */

/* class CustomerOrganizationType

*/

CustomerOrganizationType::CustomerOrganizationType() :
  OrganizationType()
{
  CustomerNumber = 0;
}

CustomerOrganizationType::CustomerOrganizationType(
 XmlToken * NameIn,
 PhysicalAddressType * AddressIn,
 AttributesType * AttributesIn,
 XmlToken * CustomerNumberIn) :
  OrganizationType(
    NameIn,
    AddressIn,
    AttributesIn)
{
  CustomerNumber = CustomerNumberIn;
}

CustomerOrganizationType::~CustomerOrganizationType()
{
  #ifndef NODESTRUCT
  delete CustomerNumber;
  #endif
}

void CustomerOrganizationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (Address)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Address");
      Address->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Address>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<CustomerNumber");
  CustomerNumber->printSelf(outFile);
  fprintf(outFile, "</CustomerNumber>\n");
  doSpaces(-INDENT, outFile);
}

XmlToken * CustomerOrganizationType::getCustomerNumber()
{return CustomerNumber;}

void CustomerOrganizationType::setCustomerNumber(XmlToken * CustomerNumberIn)
{CustomerNumber = CustomerNumberIn;}

/* ***************************************************************** */

/* class DatumDefinitionType

*/

DatumDefinitionType::DatumDefinitionType()
{
  id = 0;
  Attributes = 0;
  DatumLabel = 0;
  DatumTargetIds = 0;
  FeatureNominalIds = 0;
}

DatumDefinitionType::DatumDefinitionType(
 AttributesType * AttributesIn,
 XmlNMTOKEN * DatumLabelIn,
 ArrayReferenceFullType * DatumTargetIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn)
{
  id = 0;
  Attributes = AttributesIn;
  DatumLabel = DatumLabelIn;
  DatumTargetIds = DatumTargetIdsIn;
  FeatureNominalIds = FeatureNominalIdsIn;
}

DatumDefinitionType::DatumDefinitionType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlNMTOKEN * DatumLabelIn,
 ArrayReferenceFullType * DatumTargetIdsIn,
 ArrayReferenceFullType * FeatureNominalIdsIn)
{
  id = idIn;
  Attributes = AttributesIn;
  DatumLabel = DatumLabelIn;
  DatumTargetIds = DatumTargetIdsIn;
  FeatureNominalIds = FeatureNominalIdsIn;
}

DatumDefinitionType::~DatumDefinitionType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete DatumLabel;
  delete DatumTargetIds;
  delete FeatureNominalIds;
  #endif
}

void DatumDefinitionType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumLabel");
  DatumLabel->printSelf(outFile);
  fprintf(outFile, "</DatumLabel>\n");
  if (DatumTargetIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetIds");
      DatumTargetIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTargetIds>\n");
    }
  if (FeatureNominalIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalIds");
      FeatureNominalIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureNominalIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool DatumDefinitionType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in DatumDefinitionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DatumDefinitionType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DatumDefinitionType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in DatumDefinitionType\n");
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

QIFIdType * DatumDefinitionType::getid()
{return id;}

void DatumDefinitionType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * DatumDefinitionType::getAttributes()
{return Attributes;}

void DatumDefinitionType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlNMTOKEN * DatumDefinitionType::getDatumLabel()
{return DatumLabel;}

void DatumDefinitionType::setDatumLabel(XmlNMTOKEN * DatumLabelIn)
{DatumLabel = DatumLabelIn;}

ArrayReferenceFullType * DatumDefinitionType::getDatumTargetIds()
{return DatumTargetIds;}

void DatumDefinitionType::setDatumTargetIds(ArrayReferenceFullType * DatumTargetIdsIn)
{DatumTargetIds = DatumTargetIdsIn;}

ArrayReferenceFullType * DatumDefinitionType::getFeatureNominalIds()
{return FeatureNominalIds;}

void DatumDefinitionType::setFeatureNominalIds(ArrayReferenceFullType * FeatureNominalIdsIn)
{FeatureNominalIds = FeatureNominalIdsIn;}

/* ***************************************************************** */

/* class DatumDefinitionTypeLisd

*/

DatumDefinitionTypeLisd::DatumDefinitionTypeLisd() {}

DatumDefinitionTypeLisd::DatumDefinitionTypeLisd(DatumDefinitionType * aDatumDefinitionType)
{
  push_back(aDatumDefinitionType);
}

DatumDefinitionTypeLisd::~DatumDefinitionTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DatumDefinitionType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DatumDefinitionTypeLisd::printSelf(FILE * outFile)
{
  std::list<DatumDefinitionType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class DatumDefinitionsType

*/

DatumDefinitionsType::DatumDefinitionsType()
{
  n = 0;
  DatumDefinition = 0;
}

DatumDefinitionsType::DatumDefinitionsType(
 DatumDefinitionTypeLisd * DatumDefinitionIn)
{
  n = 0;
  DatumDefinition = DatumDefinitionIn;
}

DatumDefinitionsType::DatumDefinitionsType(
 NaturalType * nIn,
 DatumDefinitionTypeLisd * DatumDefinitionIn)
{
  n = nIn;
  DatumDefinition = DatumDefinitionIn;
}

DatumDefinitionsType::~DatumDefinitionsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DatumDefinition;
  #endif
}

void DatumDefinitionsType::printSelf(FILE * outFile)
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
    if (!DatumDefinition)
      {
        fprintf(stderr, "DatumDefinition list is missing\n");
        exit(1);
      }
    if (DatumDefinition->size() == 0)
      {
        fprintf(stderr, "DatumDefinition list is empty\n");
        exit(1);
      }
    if (DatumDefinition->size() < 1)
      {
        fprintf(stderr,
                "size of DatumDefinition list (%d) less than minimum required (1)\n",
                (int)DatumDefinition->size());
        exit(1);
      }
    std::list<DatumDefinitionType *>::iterator iter;
    for (iter = DatumDefinition->begin();
         iter != DatumDefinition->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<DatumDefinition");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</DatumDefinition>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DatumDefinitionsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in DatumDefinitionsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DatumDefinitionsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DatumDefinitionsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DatumDefinitionsType\n");
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

NaturalType * DatumDefinitionsType::getn()
{return n;}

void DatumDefinitionsType::setn(NaturalType * nIn)
{n = nIn;}

DatumDefinitionTypeLisd * DatumDefinitionsType::getDatumDefinition()
{return DatumDefinition;}

void DatumDefinitionsType::setDatumDefinition(DatumDefinitionTypeLisd * DatumDefinitionIn)
{DatumDefinition = DatumDefinitionIn;}

/* ***************************************************************** */

/* class DatumFeatureBaseType

*/

DatumFeatureBaseType::DatumFeatureBaseType()
{
  FeatureNominalId = 0;
}

DatumFeatureBaseType::DatumFeatureBaseType(
 QIFReferenceFullType * FeatureNominalIdIn)
{
  FeatureNominalId = FeatureNominalIdIn;
}

DatumFeatureBaseType::~DatumFeatureBaseType()
{
  #ifndef NODESTRUCT
  delete FeatureNominalId;
  #endif
}

void DatumFeatureBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureNominalId");
  FeatureNominalId->printSelf(outFile);
  fprintf(outFile, "</FeatureNominalId>\n");
  doSpaces(-INDENT, outFile);
}

QIFReferenceFullType * DatumFeatureBaseType::getFeatureNominalId()
{return FeatureNominalId;}

void DatumFeatureBaseType::setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn)
{FeatureNominalId = FeatureNominalIdIn;}

/* ***************************************************************** */

/* class DatumFeatureSimulatorModifierType

*/

DatumFeatureSimulatorModifierType::DatumFeatureSimulatorModifierType()
{
  DatumFeatureSimulatorModifierTypePair = 0;
}

DatumFeatureSimulatorModifierType::DatumFeatureSimulatorModifierType(
 DatumFeatureSimulatorModifierTypeChoicePair * DatumFeatureSimulatorModifierTypePairIn)
{
  DatumFeatureSimulatorModifierTypePair = DatumFeatureSimulatorModifierTypePairIn;
}

DatumFeatureSimulatorModifierType::~DatumFeatureSimulatorModifierType()
{
  #ifndef NODESTRUCT
  delete DatumFeatureSimulatorModifierTypePair;
  #endif
}

void DatumFeatureSimulatorModifierType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  DatumFeatureSimulatorModifierTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

DatumFeatureSimulatorModifierTypeChoicePair * DatumFeatureSimulatorModifierType::getDatumFeatureSimulatorModifierTypePair()
{return DatumFeatureSimulatorModifierTypePair;}

void DatumFeatureSimulatorModifierType::setDatumFeatureSimulatorModifierTypePair(DatumFeatureSimulatorModifierTypeChoicePair * DatumFeatureSimulatorModifierTypePairIn)
{DatumFeatureSimulatorModifierTypePair = DatumFeatureSimulatorModifierTypePairIn;}
DatumFeatureSimulatorModifierTypeChoicePair::DatumFeatureSimulatorModifierTypeChoicePair() {}

DatumFeatureSimulatorModifierTypeChoicePair::DatumFeatureSimulatorModifierTypeChoicePair(
 whichOne DatumFeatureSimulatorModifierTypeTypeIn,
 DatumFeatureSimulatorModifierTypeVal DatumFeatureSimulatorModifierTypeValueIn)
{
  DatumFeatureSimulatorModifierTypeType = DatumFeatureSimulatorModifierTypeTypeIn;
  DatumFeatureSimulatorModifierTypeValue = DatumFeatureSimulatorModifierTypeValueIn;
}

DatumFeatureSimulatorModifierTypeChoicePair::~DatumFeatureSimulatorModifierTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (DatumFeatureSimulatorModifierTypeType == LinearSizeE)
    delete DatumFeatureSimulatorModifierTypeValue.LinearSize;
  else if (DatumFeatureSimulatorModifierTypeType == DiametricalSizeE)
    delete DatumFeatureSimulatorModifierTypeValue.DiametricalSize;
  else if (DatumFeatureSimulatorModifierTypeType == BasicSizeE)
    delete DatumFeatureSimulatorModifierTypeValue.BasicSize;
  #endif
}

void DatumFeatureSimulatorModifierTypeChoicePair::printSelf(FILE * outFile)
{
  if (DatumFeatureSimulatorModifierTypeType == LinearSizeE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearSize");
      DatumFeatureSimulatorModifierTypeValue.LinearSize->printSelf(outFile);
      fprintf(outFile, "</LinearSize>\n");
    }
  else if (DatumFeatureSimulatorModifierTypeType == DiametricalSizeE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DiametricalSize");
      DatumFeatureSimulatorModifierTypeValue.DiametricalSize->printSelf(outFile);
      fprintf(outFile, "</DiametricalSize>\n");
    }
  else if (DatumFeatureSimulatorModifierTypeType == BasicSizeE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BasicSize");
      DatumFeatureSimulatorModifierTypeValue.BasicSize->printSelf(outFile);
      fprintf(outFile, "</BasicSize>\n");
    }
}

/* ***************************************************************** */

/* class DatumPrecedenceAlignmentOperationType

*/

DatumPrecedenceAlignmentOperationType::DatumPrecedenceAlignmentOperationType() :
  AlignmentOperationBaseType()
{
  DatumReferenceFrameId = 0;
  PrimaryAxis = 0;
  SecondaryAxis = 0;
}

DatumPrecedenceAlignmentOperationType::DatumPrecedenceAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 QIFReferenceFullType * DatumReferenceFrameIdIn,
 UnitVectorType * PrimaryAxisIn,
 UnitVectorType * SecondaryAxisIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  DatumReferenceFrameId = DatumReferenceFrameIdIn;
  PrimaryAxis = PrimaryAxisIn;
  SecondaryAxis = SecondaryAxisIn;
}

DatumPrecedenceAlignmentOperationType::~DatumPrecedenceAlignmentOperationType()
{
  #ifndef NODESTRUCT
  delete DatumReferenceFrameId;
  delete PrimaryAxis;
  delete SecondaryAxis;
  #endif
}

void DatumPrecedenceAlignmentOperationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumReferenceFrameId");
  DatumReferenceFrameId->printSelf(outFile);
  fprintf(outFile, "</DatumReferenceFrameId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PrimaryAxis");
  PrimaryAxis->printSelf(outFile);
  fprintf(outFile, "</PrimaryAxis>\n");
  if (SecondaryAxis)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecondaryAxis");
      SecondaryAxis->printSelf(outFile);
      fprintf(outFile, "</SecondaryAxis>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceFullType * DatumPrecedenceAlignmentOperationType::getDatumReferenceFrameId()
{return DatumReferenceFrameId;}

void DatumPrecedenceAlignmentOperationType::setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn)
{DatumReferenceFrameId = DatumReferenceFrameIdIn;}

UnitVectorType * DatumPrecedenceAlignmentOperationType::getPrimaryAxis()
{return PrimaryAxis;}

void DatumPrecedenceAlignmentOperationType::setPrimaryAxis(UnitVectorType * PrimaryAxisIn)
{PrimaryAxis = PrimaryAxisIn;}

UnitVectorType * DatumPrecedenceAlignmentOperationType::getSecondaryAxis()
{return SecondaryAxis;}

void DatumPrecedenceAlignmentOperationType::setSecondaryAxis(UnitVectorType * SecondaryAxisIn)
{SecondaryAxis = SecondaryAxisIn;}

/* ***************************************************************** */

/* class DatumReferenceFrameType

*/

DatumReferenceFrameType::DatumReferenceFrameType()
{
  id = 0;
  Attributes = 0;
  Datums = 0;
  Name = 0;
  Description = 0;
  CoordinateSystemId = 0;
}

DatumReferenceFrameType::DatumReferenceFrameType(
 AttributesType * AttributesIn,
 DatumsType * DatumsIn,
 XmlToken * NameIn,
 XmlString * DescriptionIn,
 QIFReferenceFullType * CoordinateSystemIdIn)
{
  id = 0;
  Attributes = AttributesIn;
  Datums = DatumsIn;
  Name = NameIn;
  Description = DescriptionIn;
  CoordinateSystemId = CoordinateSystemIdIn;
}

DatumReferenceFrameType::DatumReferenceFrameType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 DatumsType * DatumsIn,
 XmlToken * NameIn,
 XmlString * DescriptionIn,
 QIFReferenceFullType * CoordinateSystemIdIn)
{
  id = idIn;
  Attributes = AttributesIn;
  Datums = DatumsIn;
  Name = NameIn;
  Description = DescriptionIn;
  CoordinateSystemId = CoordinateSystemIdIn;
}

DatumReferenceFrameType::~DatumReferenceFrameType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete Datums;
  delete Name;
  delete Description;
  delete CoordinateSystemId;
  #endif
}

void DatumReferenceFrameType::printSelf(FILE * outFile)
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
  if (Datums)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Datums");
      Datums->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Datums>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (CoordinateSystemId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemId");
      CoordinateSystemId->printSelf(outFile);
      fprintf(outFile, "</CoordinateSystemId>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool DatumReferenceFrameType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in DatumReferenceFrameType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DatumReferenceFrameType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DatumReferenceFrameType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in DatumReferenceFrameType\n");
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

QIFIdType * DatumReferenceFrameType::getid()
{return id;}

void DatumReferenceFrameType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * DatumReferenceFrameType::getAttributes()
{return Attributes;}

void DatumReferenceFrameType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

DatumsType * DatumReferenceFrameType::getDatums()
{return Datums;}

void DatumReferenceFrameType::setDatums(DatumsType * DatumsIn)
{Datums = DatumsIn;}

XmlToken * DatumReferenceFrameType::getName()
{return Name;}

void DatumReferenceFrameType::setName(XmlToken * NameIn)
{Name = NameIn;}

XmlString * DatumReferenceFrameType::getDescription()
{return Description;}

void DatumReferenceFrameType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

QIFReferenceFullType * DatumReferenceFrameType::getCoordinateSystemId()
{return CoordinateSystemId;}

void DatumReferenceFrameType::setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn)
{CoordinateSystemId = CoordinateSystemIdIn;}

/* ***************************************************************** */

/* class DatumReferenceFrameTypeLisd

*/

DatumReferenceFrameTypeLisd::DatumReferenceFrameTypeLisd() {}

DatumReferenceFrameTypeLisd::DatumReferenceFrameTypeLisd(DatumReferenceFrameType * aDatumReferenceFrameType)
{
  push_back(aDatumReferenceFrameType);
}

DatumReferenceFrameTypeLisd::~DatumReferenceFrameTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DatumReferenceFrameType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DatumReferenceFrameTypeLisd::printSelf(FILE * outFile)
{
  std::list<DatumReferenceFrameType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class DatumReferenceFramesType

*/

DatumReferenceFramesType::DatumReferenceFramesType()
{
  n = 0;
  DatumReferenceFrame = 0;
}

DatumReferenceFramesType::DatumReferenceFramesType(
 DatumReferenceFrameTypeLisd * DatumReferenceFrameIn)
{
  n = 0;
  DatumReferenceFrame = DatumReferenceFrameIn;
}

DatumReferenceFramesType::DatumReferenceFramesType(
 NaturalType * nIn,
 DatumReferenceFrameTypeLisd * DatumReferenceFrameIn)
{
  n = nIn;
  DatumReferenceFrame = DatumReferenceFrameIn;
}

DatumReferenceFramesType::~DatumReferenceFramesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DatumReferenceFrame;
  #endif
}

void DatumReferenceFramesType::printSelf(FILE * outFile)
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
    if (!DatumReferenceFrame)
      {
        fprintf(stderr, "DatumReferenceFrame list is missing\n");
        exit(1);
      }
    if (DatumReferenceFrame->size() == 0)
      {
        fprintf(stderr, "DatumReferenceFrame list is empty\n");
        exit(1);
      }
    if (DatumReferenceFrame->size() < 1)
      {
        fprintf(stderr,
                "size of DatumReferenceFrame list (%d) less than minimum required (1)\n",
                (int)DatumReferenceFrame->size());
        exit(1);
      }
    std::list<DatumReferenceFrameType *>::iterator iter;
    for (iter = DatumReferenceFrame->begin();
         iter != DatumReferenceFrame->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<DatumReferenceFrame");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</DatumReferenceFrame>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DatumReferenceFramesType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in DatumReferenceFramesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DatumReferenceFramesType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DatumReferenceFramesType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DatumReferenceFramesType\n");
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

NaturalType * DatumReferenceFramesType::getn()
{return n;}

void DatumReferenceFramesType::setn(NaturalType * nIn)
{n = nIn;}

DatumReferenceFrameTypeLisd * DatumReferenceFramesType::getDatumReferenceFrame()
{return DatumReferenceFrame;}

void DatumReferenceFramesType::setDatumReferenceFrame(DatumReferenceFrameTypeLisd * DatumReferenceFrameIn)
{DatumReferenceFrame = DatumReferenceFrameIn;}

/* ***************************************************************** */

/* class DatumTargetDefinitionsType

*/

DatumTargetDefinitionsType::DatumTargetDefinitionsType()
{
  n = 0;
  DatumTarget = 0;
}

DatumTargetDefinitionsType::DatumTargetDefinitionsType(
 DatumTargetTypeLisd * DatumTargetIn)
{
  n = 0;
  DatumTarget = DatumTargetIn;
}

DatumTargetDefinitionsType::DatumTargetDefinitionsType(
 NaturalType * nIn,
 DatumTargetTypeLisd * DatumTargetIn)
{
  n = nIn;
  DatumTarget = DatumTargetIn;
}

DatumTargetDefinitionsType::~DatumTargetDefinitionsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DatumTarget;
  #endif
}

void DatumTargetDefinitionsType::printSelf(FILE * outFile)
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
    if (!DatumTarget)
      {
        fprintf(stderr, "DatumTarget list is missing\n");
        exit(1);
      }
    if (DatumTarget->size() == 0)
      {
        fprintf(stderr, "DatumTarget list is empty\n");
        exit(1);
      }
    if (DatumTarget->size() < 1)
      {
        fprintf(stderr,
                "size of DatumTarget list (%d) less than minimum required (1)\n",
                (int)DatumTarget->size());
        exit(1);
      }
    std::list<DatumTargetType *>::iterator iter;
    for (iter = DatumTarget->begin();
         iter != DatumTarget->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<DatumTarget");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</DatumTarget>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DatumTargetDefinitionsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in DatumTargetDefinitionsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DatumTargetDefinitionsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DatumTargetDefinitionsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DatumTargetDefinitionsType\n");
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

NaturalType * DatumTargetDefinitionsType::getn()
{return n;}

void DatumTargetDefinitionsType::setn(NaturalType * nIn)
{n = nIn;}

DatumTargetTypeLisd * DatumTargetDefinitionsType::getDatumTarget()
{return DatumTarget;}

void DatumTargetDefinitionsType::setDatumTarget(DatumTargetTypeLisd * DatumTargetIn)
{DatumTarget = DatumTargetIn;}

/* ***************************************************************** */

/* class DatumTargetType

*/

DatumTargetType::DatumTargetType()
{
  id = 0;
  Attributes = 0;
  DatumTargetLabel = 0;
  FeatureNominalId = 0;
  TargetZoneId = 0;
  MovableDatumTarget = 0;
}

DatumTargetType::DatumTargetType(
 AttributesType * AttributesIn,
 XmlToken * DatumTargetLabelIn,
 QIFReferenceFullType * FeatureNominalIdIn,
 QIFReferenceFullType * TargetZoneIdIn,
 MovableDatumTargetDirectionType * MovableDatumTargetIn)
{
  id = 0;
  Attributes = AttributesIn;
  DatumTargetLabel = DatumTargetLabelIn;
  FeatureNominalId = FeatureNominalIdIn;
  TargetZoneId = TargetZoneIdIn;
  MovableDatumTarget = MovableDatumTargetIn;
}

DatumTargetType::DatumTargetType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlToken * DatumTargetLabelIn,
 QIFReferenceFullType * FeatureNominalIdIn,
 QIFReferenceFullType * TargetZoneIdIn,
 MovableDatumTargetDirectionType * MovableDatumTargetIn)
{
  id = idIn;
  Attributes = AttributesIn;
  DatumTargetLabel = DatumTargetLabelIn;
  FeatureNominalId = FeatureNominalIdIn;
  TargetZoneId = TargetZoneIdIn;
  MovableDatumTarget = MovableDatumTargetIn;
}

DatumTargetType::~DatumTargetType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete DatumTargetLabel;
  delete FeatureNominalId;
  delete TargetZoneId;
  delete MovableDatumTarget;
  #endif
}

void DatumTargetType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumTargetLabel");
  DatumTargetLabel->printSelf(outFile);
  fprintf(outFile, "</DatumTargetLabel>\n");
  if (FeatureNominalId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalId");
      FeatureNominalId->printSelf(outFile);
      fprintf(outFile, "</FeatureNominalId>\n");
    }
  if (TargetZoneId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TargetZoneId");
      TargetZoneId->printSelf(outFile);
      fprintf(outFile, "</TargetZoneId>\n");
    }
  if (MovableDatumTarget)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MovableDatumTarget");
      MovableDatumTarget->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MovableDatumTarget>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool DatumTargetType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in DatumTargetType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DatumTargetType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DatumTargetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in DatumTargetType\n");
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

QIFIdType * DatumTargetType::getid()
{return id;}

void DatumTargetType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * DatumTargetType::getAttributes()
{return Attributes;}

void DatumTargetType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlToken * DatumTargetType::getDatumTargetLabel()
{return DatumTargetLabel;}

void DatumTargetType::setDatumTargetLabel(XmlToken * DatumTargetLabelIn)
{DatumTargetLabel = DatumTargetLabelIn;}

QIFReferenceFullType * DatumTargetType::getFeatureNominalId()
{return FeatureNominalId;}

void DatumTargetType::setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn)
{FeatureNominalId = FeatureNominalIdIn;}

QIFReferenceFullType * DatumTargetType::getTargetZoneId()
{return TargetZoneId;}

void DatumTargetType::setTargetZoneId(QIFReferenceFullType * TargetZoneIdIn)
{TargetZoneId = TargetZoneIdIn;}

MovableDatumTargetDirectionType * DatumTargetType::getMovableDatumTarget()
{return MovableDatumTarget;}

void DatumTargetType::setMovableDatumTarget(MovableDatumTargetDirectionType * MovableDatumTargetIn)
{MovableDatumTarget = MovableDatumTargetIn;}

/* ***************************************************************** */

/* class DatumTargetTypeLisd

*/

DatumTargetTypeLisd::DatumTargetTypeLisd() {}

DatumTargetTypeLisd::DatumTargetTypeLisd(DatumTargetType * aDatumTargetType)
{
  push_back(aDatumTargetType);
}

DatumTargetTypeLisd::~DatumTargetTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DatumTargetType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DatumTargetTypeLisd::printSelf(FILE * outFile)
{
  std::list<DatumTargetType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class DatumTranslationType

*/

DatumTranslationType::DatumTranslationType()
{
  DatumTranslationAllowed = 0;
}

DatumTranslationType::DatumTranslationType(
 XmlBoolean * DatumTranslationAllowedIn)
{
  DatumTranslationAllowed = DatumTranslationAllowedIn;
}

DatumTranslationType::~DatumTranslationType()
{
  #ifndef NODESTRUCT
  delete DatumTranslationAllowed;
  #endif
}

void DatumTranslationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumTranslationAllowed");
  DatumTranslationAllowed->printSelf(outFile);
  fprintf(outFile, "</DatumTranslationAllowed>\n");
  doSpaces(-INDENT, outFile);
}

XmlBoolean * DatumTranslationType::getDatumTranslationAllowed()
{return DatumTranslationAllowed;}

void DatumTranslationType::setDatumTranslationAllowed(XmlBoolean * DatumTranslationAllowedIn)
{DatumTranslationAllowed = DatumTranslationAllowedIn;}

/* ***************************************************************** */

/* class DatumType

*/

DatumType::DatumType()
{
  DatumDefinitionId = 0;
  MaterialModifier = 0;
  SizeCharacteristicDefinitionId = 0;
  ReferencedComponent = 0;
  SubstituteFeatureAlgorithm = 0;
  DatumFeatureSimulatorModifier = 0;
  DatumTranslation = 0;
  DegreesOfFreedom = 0;
  ProjectedDatum = 0;
  DiameterModifier = 0;
  SectionModifier = 0;
  ContactingFeature = 0;
  DistanceVariable = 0;
  DatumFixed = 0;
  ReducedDatum = 0;
  ConstrainOrientation = 0;
  ConstrainSubsequent = 0;
  Attributes = 0;
}

DatumType::DatumType(
 QIFReferenceFullType * DatumDefinitionIdIn,
 MaterialModifierEnumType * MaterialModifierIn,
 QIFReferenceType * SizeCharacteristicDefinitionIdIn,
 ReferencedComponentEnumType * ReferencedComponentIn,
 SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
 DatumFeatureSimulatorModifierType * DatumFeatureSimulatorModifierIn,
 DatumTranslationType * DatumTranslationIn,
 DegreesOfFreedomType * DegreesOfFreedomIn,
 LinearValueType * ProjectedDatumIn,
 DiameterModifierEnumType * DiameterModifierIn,
 SectionModifierEnumType * SectionModifierIn,
 XmlBoolean * ContactingFeatureIn,
 XmlBoolean * DistanceVariableIn,
 XmlBoolean * DatumFixedIn,
 ReducedDatumEnumType * ReducedDatumIn,
 XmlBoolean * ConstrainOrientationIn,
 XmlBoolean * ConstrainSubsequentIn,
 AttributesType * AttributesIn)
{
  DatumDefinitionId = DatumDefinitionIdIn;
  MaterialModifier = MaterialModifierIn;
  SizeCharacteristicDefinitionId = SizeCharacteristicDefinitionIdIn;
  ReferencedComponent = ReferencedComponentIn;
  SubstituteFeatureAlgorithm = SubstituteFeatureAlgorithmIn;
  DatumFeatureSimulatorModifier = DatumFeatureSimulatorModifierIn;
  DatumTranslation = DatumTranslationIn;
  DegreesOfFreedom = DegreesOfFreedomIn;
  ProjectedDatum = ProjectedDatumIn;
  DiameterModifier = DiameterModifierIn;
  SectionModifier = SectionModifierIn;
  ContactingFeature = ContactingFeatureIn;
  DistanceVariable = DistanceVariableIn;
  DatumFixed = DatumFixedIn;
  ReducedDatum = ReducedDatumIn;
  ConstrainOrientation = ConstrainOrientationIn;
  ConstrainSubsequent = ConstrainSubsequentIn;
  Attributes = AttributesIn;
}

DatumType::~DatumType()
{
  #ifndef NODESTRUCT
  delete DatumDefinitionId;
  delete MaterialModifier;
  delete SizeCharacteristicDefinitionId;
  delete ReferencedComponent;
  delete SubstituteFeatureAlgorithm;
  delete DatumFeatureSimulatorModifier;
  delete DatumTranslation;
  delete DegreesOfFreedom;
  delete ProjectedDatum;
  delete DiameterModifier;
  delete SectionModifier;
  delete ContactingFeature;
  delete DistanceVariable;
  delete DatumFixed;
  delete ReducedDatum;
  delete ConstrainOrientation;
  delete ConstrainSubsequent;
  delete Attributes;
  #endif
}

void DatumType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumDefinitionId");
  DatumDefinitionId->printSelf(outFile);
  fprintf(outFile, "</DatumDefinitionId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<MaterialModifier");
  MaterialModifier->printSelf(outFile);
  fprintf(outFile, "</MaterialModifier>\n");
  if (SizeCharacteristicDefinitionId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SizeCharacteristicDefinitionId");
      SizeCharacteristicDefinitionId->printSelf(outFile);
      fprintf(outFile, "</SizeCharacteristicDefinitionId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ReferencedComponent");
  ReferencedComponent->printSelf(outFile);
  fprintf(outFile, "</ReferencedComponent>\n");
  if (SubstituteFeatureAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubstituteFeatureAlgorithm");
      SubstituteFeatureAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SubstituteFeatureAlgorithm>\n");
    }
  if (DatumFeatureSimulatorModifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumFeatureSimulatorModifier");
      DatumFeatureSimulatorModifier->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumFeatureSimulatorModifier>\n");
    }
  if (DatumTranslation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTranslation");
      DatumTranslation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DatumTranslation>\n");
    }
  if (DegreesOfFreedom)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DegreesOfFreedom");
      DegreesOfFreedom->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DegreesOfFreedom>\n");
    }
  if (ProjectedDatum)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProjectedDatum");
      ProjectedDatum->printSelf(outFile);
      fprintf(outFile, "</ProjectedDatum>\n");
    }
  if (DiameterModifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DiameterModifier");
      DiameterModifier->printSelf(outFile);
      fprintf(outFile, "</DiameterModifier>\n");
    }
  if (SectionModifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SectionModifier");
      SectionModifier->printSelf(outFile);
      fprintf(outFile, "</SectionModifier>\n");
    }
  if (ContactingFeature)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ContactingFeature");
      ContactingFeature->printSelf(outFile);
      fprintf(outFile, "</ContactingFeature>\n");
    }
  if (DistanceVariable)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DistanceVariable");
      DistanceVariable->printSelf(outFile);
      fprintf(outFile, "</DistanceVariable>\n");
    }
  if (DatumFixed)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumFixed");
      DatumFixed->printSelf(outFile);
      fprintf(outFile, "</DatumFixed>\n");
    }
  if (ReducedDatum)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReducedDatum");
      ReducedDatum->printSelf(outFile);
      fprintf(outFile, "</ReducedDatum>\n");
    }
  if (ConstrainOrientation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ConstrainOrientation");
      ConstrainOrientation->printSelf(outFile);
      fprintf(outFile, "</ConstrainOrientation>\n");
    }
  if (ConstrainSubsequent)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ConstrainSubsequent");
      ConstrainSubsequent->printSelf(outFile);
      fprintf(outFile, "</ConstrainSubsequent>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceFullType * DatumType::getDatumDefinitionId()
{return DatumDefinitionId;}

void DatumType::setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn)
{DatumDefinitionId = DatumDefinitionIdIn;}

MaterialModifierEnumType * DatumType::getMaterialModifier()
{return MaterialModifier;}

void DatumType::setMaterialModifier(MaterialModifierEnumType * MaterialModifierIn)
{MaterialModifier = MaterialModifierIn;}

QIFReferenceType * DatumType::getSizeCharacteristicDefinitionId()
{return SizeCharacteristicDefinitionId;}

void DatumType::setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn)
{SizeCharacteristicDefinitionId = SizeCharacteristicDefinitionIdIn;}

ReferencedComponentEnumType * DatumType::getReferencedComponent()
{return ReferencedComponent;}

void DatumType::setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn)
{ReferencedComponent = ReferencedComponentIn;}

SubstituteFeatureAlgorithmType * DatumType::getSubstituteFeatureAlgorithm()
{return SubstituteFeatureAlgorithm;}

void DatumType::setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn)
{SubstituteFeatureAlgorithm = SubstituteFeatureAlgorithmIn;}

DatumFeatureSimulatorModifierType * DatumType::getDatumFeatureSimulatorModifier()
{return DatumFeatureSimulatorModifier;}

void DatumType::setDatumFeatureSimulatorModifier(DatumFeatureSimulatorModifierType * DatumFeatureSimulatorModifierIn)
{DatumFeatureSimulatorModifier = DatumFeatureSimulatorModifierIn;}

DatumTranslationType * DatumType::getDatumTranslation()
{return DatumTranslation;}

void DatumType::setDatumTranslation(DatumTranslationType * DatumTranslationIn)
{DatumTranslation = DatumTranslationIn;}

DegreesOfFreedomType * DatumType::getDegreesOfFreedom()
{return DegreesOfFreedom;}

void DatumType::setDegreesOfFreedom(DegreesOfFreedomType * DegreesOfFreedomIn)
{DegreesOfFreedom = DegreesOfFreedomIn;}

LinearValueType * DatumType::getProjectedDatum()
{return ProjectedDatum;}

void DatumType::setProjectedDatum(LinearValueType * ProjectedDatumIn)
{ProjectedDatum = ProjectedDatumIn;}

DiameterModifierEnumType * DatumType::getDiameterModifier()
{return DiameterModifier;}

void DatumType::setDiameterModifier(DiameterModifierEnumType * DiameterModifierIn)
{DiameterModifier = DiameterModifierIn;}

SectionModifierEnumType * DatumType::getSectionModifier()
{return SectionModifier;}

void DatumType::setSectionModifier(SectionModifierEnumType * SectionModifierIn)
{SectionModifier = SectionModifierIn;}

XmlBoolean * DatumType::getContactingFeature()
{return ContactingFeature;}

void DatumType::setContactingFeature(XmlBoolean * ContactingFeatureIn)
{ContactingFeature = ContactingFeatureIn;}

XmlBoolean * DatumType::getDistanceVariable()
{return DistanceVariable;}

void DatumType::setDistanceVariable(XmlBoolean * DistanceVariableIn)
{DistanceVariable = DistanceVariableIn;}

XmlBoolean * DatumType::getDatumFixed()
{return DatumFixed;}

void DatumType::setDatumFixed(XmlBoolean * DatumFixedIn)
{DatumFixed = DatumFixedIn;}

ReducedDatumEnumType * DatumType::getReducedDatum()
{return ReducedDatum;}

void DatumType::setReducedDatum(ReducedDatumEnumType * ReducedDatumIn)
{ReducedDatum = ReducedDatumIn;}

XmlBoolean * DatumType::getConstrainOrientation()
{return ConstrainOrientation;}

void DatumType::setConstrainOrientation(XmlBoolean * ConstrainOrientationIn)
{ConstrainOrientation = ConstrainOrientationIn;}

XmlBoolean * DatumType::getConstrainSubsequent()
{return ConstrainSubsequent;}

void DatumType::setConstrainSubsequent(XmlBoolean * ConstrainSubsequentIn)
{ConstrainSubsequent = ConstrainSubsequentIn;}

AttributesType * DatumType::getAttributes()
{return Attributes;}

void DatumType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class DatumWithPrecedenceType

*/

DatumWithPrecedenceType::DatumWithPrecedenceType()
{
  DatumWithPreced_1010 = 0;
  Precedence = 0;
}

DatumWithPrecedenceType::DatumWithPrecedenceType(
 DatumWithPreced_1010_Type * DatumWithPreced_1010In,
 PrecedenceType * PrecedenceIn)
{
  DatumWithPreced_1010 = DatumWithPreced_1010In;
  Precedence = PrecedenceIn;
}

DatumWithPrecedenceType::~DatumWithPrecedenceType()
{
  #ifndef NODESTRUCT
  delete DatumWithPreced_1010;
  delete Precedence;
  #endif
}

void DatumWithPrecedenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  DatumWithPreced_1010->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Precedence");
  Precedence->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Precedence>\n");
  doSpaces(-INDENT, outFile);
}

DatumWithPreced_1010_Type * DatumWithPrecedenceType::getDatumWithPreced_1010()
{return DatumWithPreced_1010;}

void DatumWithPrecedenceType::setDatumWithPreced_1010(DatumWithPreced_1010_Type * DatumWithPreced_1010In)
{DatumWithPreced_1010 = DatumWithPreced_1010In;}

PrecedenceType * DatumWithPrecedenceType::getPrecedence()
{return Precedence;}

void DatumWithPrecedenceType::setPrecedence(PrecedenceType * PrecedenceIn)
{Precedence = PrecedenceIn;}

/* ***************************************************************** */

/* class DatumWithPrecedenceTypeLisd

*/

DatumWithPrecedenceTypeLisd::DatumWithPrecedenceTypeLisd() {}

DatumWithPrecedenceTypeLisd::DatumWithPrecedenceTypeLisd(DatumWithPrecedenceType * aDatumWithPrecedenceType)
{
  push_back(aDatumWithPrecedenceType);
}

DatumWithPrecedenceTypeLisd::~DatumWithPrecedenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DatumWithPrecedenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DatumWithPrecedenceTypeLisd::printSelf(FILE * outFile)
{
  std::list<DatumWithPrecedenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class DatumsType

*/

DatumsType::DatumsType()
{
  n = 0;
  Datum = 0;
}

DatumsType::DatumsType(
 DatumWithPrecedenceTypeLisd * DatumIn)
{
  n = 0;
  Datum = DatumIn;
}

DatumsType::DatumsType(
 NaturalType * nIn,
 DatumWithPrecedenceTypeLisd * DatumIn)
{
  n = nIn;
  Datum = DatumIn;
}

DatumsType::~DatumsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Datum;
  #endif
}

void DatumsType::printSelf(FILE * outFile)
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
    if (!Datum)
      {
        fprintf(stderr, "Datum list is missing\n");
        exit(1);
      }
    if (Datum->size() == 0)
      {
        fprintf(stderr, "Datum list is empty\n");
        exit(1);
      }
    if (Datum->size() > 5)
      {
        fprintf(stderr,
                "size of Datum list (%d) greater than maximum allowed (5)\n",
                (int)Datum->size());
        exit(1);
      }
    if (Datum->size() < 1)
      {
        fprintf(stderr,
                "size of Datum list (%d) less than minimum required (1)\n",
                (int)Datum->size());
        exit(1);
      }
    std::list<DatumWithPrecedenceType *>::iterator iter;
    for (iter = Datum->begin();
         iter != Datum->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Datum");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Datum>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool DatumsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in DatumsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DatumsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DatumsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DatumsType\n");
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

NaturalType * DatumsType::getn()
{return n;}

void DatumsType::setn(NaturalType * nIn)
{n = nIn;}

DatumWithPrecedenceTypeLisd * DatumsType::getDatum()
{return Datum;}

void DatumsType::setDatum(DatumWithPrecedenceTypeLisd * DatumIn)
{Datum = DatumIn;}

/* ***************************************************************** */

/* class DefiningPointMeasurementType

*/

DefiningPointMeasurementType::DefiningPointMeasurementType() :
  MeasuredPointWithNormalBaseType()
{
  SequenceNumber = 0;
}

DefiningPointMeasurementType::DefiningPointMeasurementType(
 MeasuredPointType * PointIn,
 MeasuredUnitVectorType * NormalIn,
 NaturalType * SequenceNumberIn) :
  MeasuredPointWithNormalBaseType(
    PointIn,
    NormalIn)
{
  SequenceNumber = SequenceNumberIn;
}

DefiningPointMeasurementType::DefiningPointMeasurementType(
 QIFIdType * idIn,
 MeasuredPointType * PointIn,
 MeasuredUnitVectorType * NormalIn,
 NaturalType * SequenceNumberIn) :
  MeasuredPointWithNormalBaseType(
    idIn,
    PointIn,
    NormalIn)
{
  SequenceNumber = SequenceNumberIn;
}

DefiningPointMeasurementType::~DefiningPointMeasurementType()
{
  #ifndef NODESTRUCT
  delete SequenceNumber;
  #endif
}

void DefiningPointMeasurementType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  fprintf(outFile, "</Point>\n");
  if (Normal)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Normal");
      Normal->printSelf(outFile);
      fprintf(outFile, "</Normal>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  doSpaces(-INDENT, outFile);
}

bool DefiningPointMeasurementType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in DefiningPointMeasurementType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DefiningPointMeasurementType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DefiningPointMeasurementType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in DefiningPointMeasurementType\n");
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

NaturalType * DefiningPointMeasurementType::getSequenceNumber()
{return SequenceNumber;}

void DefiningPointMeasurementType::setSequenceNumber(NaturalType * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

/* ***************************************************************** */

/* class DefiningPointMeasurementTypeLisd

*/

DefiningPointMeasurementTypeLisd::DefiningPointMeasurementTypeLisd() {}

DefiningPointMeasurementTypeLisd::DefiningPointMeasurementTypeLisd(DefiningPointMeasurementType * aDefiningPointMeasurementType)
{
  push_back(aDefiningPointMeasurementType);
}

DefiningPointMeasurementTypeLisd::~DefiningPointMeasurementTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DefiningPointMeasurementType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DefiningPointMeasurementTypeLisd::printSelf(FILE * outFile)
{
  std::list<DefiningPointMeasurementType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class DefiningPointNominalType

*/

DefiningPointNominalType::DefiningPointNominalType() :
  PointWithNormalBaseType()
{
  SequenceNumber = 0;
}

DefiningPointNominalType::DefiningPointNominalType(
 PointType * PointIn,
 UnitVectorType * NormalIn,
 NaturalType * SequenceNumberIn) :
  PointWithNormalBaseType(
    PointIn,
    NormalIn)
{
  SequenceNumber = SequenceNumberIn;
}

DefiningPointNominalType::DefiningPointNominalType(
 QIFIdType * idIn,
 PointType * PointIn,
 UnitVectorType * NormalIn,
 NaturalType * SequenceNumberIn) :
  PointWithNormalBaseType(
    idIn,
    PointIn,
    NormalIn)
{
  SequenceNumber = SequenceNumberIn;
}

DefiningPointNominalType::~DefiningPointNominalType()
{
  #ifndef NODESTRUCT
  delete SequenceNumber;
  #endif
}

void DefiningPointNominalType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  fprintf(outFile, "</Point>\n");
  if (Normal)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Normal");
      Normal->printSelf(outFile);
      fprintf(outFile, "</Normal>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  doSpaces(-INDENT, outFile);
}

bool DefiningPointNominalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in DefiningPointNominalType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DefiningPointNominalType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DefiningPointNominalType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in DefiningPointNominalType\n");
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

NaturalType * DefiningPointNominalType::getSequenceNumber()
{return SequenceNumber;}

void DefiningPointNominalType::setSequenceNumber(NaturalType * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

/* ***************************************************************** */

/* class DefiningPointNominalTypeLisd

*/

DefiningPointNominalTypeLisd::DefiningPointNominalTypeLisd() {}

DefiningPointNominalTypeLisd::DefiningPointNominalTypeLisd(DefiningPointNominalType * aDefiningPointNominalType)
{
  push_back(aDefiningPointNominalType);
}

DefiningPointNominalTypeLisd::~DefiningPointNominalTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DefiningPointNominalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DefiningPointNominalTypeLisd::printSelf(FILE * outFile)
{
  std::list<DefiningPointNominalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class DegreeOfFreedomEnumType

*/

DegreeOfFreedomEnumType::DegreeOfFreedomEnumType() :
  XmlNMTOKEN()
{
}

DegreeOfFreedomEnumType::DegreeOfFreedomEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "U") &&
           strcmp(val.c_str(), "V") &&
           strcmp(val.c_str(), "W") &&
           strcmp(val.c_str(), "X") &&
           strcmp(val.c_str(), "Y") &&
           strcmp(val.c_str(), "Z"));
}

DegreeOfFreedomEnumType::~DegreeOfFreedomEnumType() {}

bool DegreeOfFreedomEnumType::DegreeOfFreedomEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "U") &&
          strcmp(val.c_str(), "V") &&
          strcmp(val.c_str(), "W") &&
          strcmp(val.c_str(), "X") &&
          strcmp(val.c_str(), "Y") &&
          strcmp(val.c_str(), "Z"));
}

void DegreeOfFreedomEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DegreeOfFreedomEnumType");
}

void DegreeOfFreedomEnumType::printSelf(FILE * outFile)
{
  if (DegreeOfFreedomEnumTypeIsBad())
    {
      fprintf(stderr, "bad DegreeOfFreedomEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DegreeOfFreedomEnumType::oPrintSelf(FILE * outFile)
{
  if (DegreeOfFreedomEnumTypeIsBad())
    {
      fprintf(stderr, "bad DegreeOfFreedomEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class DegreeOfFreedomEnumTypeLisd

*/

DegreeOfFreedomEnumTypeLisd::DegreeOfFreedomEnumTypeLisd() {}

DegreeOfFreedomEnumTypeLisd::DegreeOfFreedomEnumTypeLisd(
  DegreeOfFreedomEnumType * aDegreeOfFreedomEnumType)
{
  push_back(aDegreeOfFreedomEnumType);
}

DegreeOfFreedomEnumTypeLisd::DegreeOfFreedomEnumTypeLisd(
  DegreeOfFreedomEnumTypeLisd * aDegreeOfFreedomEnumTypeLisd)
{
  *this = *aDegreeOfFreedomEnumTypeLisd;
}

DegreeOfFreedomEnumTypeLisd::~DegreeOfFreedomEnumTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<DegreeOfFreedomEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void DegreeOfFreedomEnumTypeLisd::printSelf(FILE * outFile)
{
  std::list<DegreeOfFreedomEnumType *>::iterator iter;

  fprintf(outFile, ">");
  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    }
}

/* ***************************************************************** */

/* class DegreesOfFreedomType

*/

DegreesOfFreedomType::DegreesOfFreedomType()
{
  n = 0;
  DegreesOfFreedomTypePair = 0;
}

DegreesOfFreedomType::DegreesOfFreedomType(
 DegreesOfFreedomTypeChoicePair * DegreesOfFreedomTypePairIn)
{
  n = 0;
  DegreesOfFreedomTypePair = DegreesOfFreedomTypePairIn;
}

DegreesOfFreedomType::DegreesOfFreedomType(
 NaturalType * nIn,
 DegreesOfFreedomTypeChoicePair * DegreesOfFreedomTypePairIn)
{
  n = nIn;
  DegreesOfFreedomTypePair = DegreesOfFreedomTypePairIn;
}

DegreesOfFreedomType::~DegreesOfFreedomType()
{
  #ifndef NODESTRUCT
  delete n;
  delete DegreesOfFreedomTypePair;
  #endif
}

void DegreesOfFreedomType::printSelf(FILE * outFile)
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
  DegreesOfFreedomTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

DegreesOfFreedomTypeChoicePair * DegreesOfFreedomType::getDegreesOfFreedomTypePair()
{return DegreesOfFreedomTypePair;}

void DegreesOfFreedomType::setDegreesOfFreedomTypePair(DegreesOfFreedomTypeChoicePair * DegreesOfFreedomTypePairIn)
{DegreesOfFreedomTypePair = DegreesOfFreedomTypePairIn;}
DegreesOfFreedomTypeChoicePair::DegreesOfFreedomTypeChoicePair() {}

DegreesOfFreedomTypeChoicePair::DegreesOfFreedomTypeChoicePair(
 whichOne DegreesOfFreedomTypeTypeIn,
 DegreesOfFreedomTypeVal DegreesOfFreedomTypeValueIn)
{
  DegreesOfFreedomTypeType = DegreesOfFreedomTypeTypeIn;
  DegreesOfFreedomTypeValue = DegreesOfFreedomTypeValueIn;
}

DegreesOfFreedomTypeChoicePair::~DegreesOfFreedomTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (DegreesOfFreedomTypeType == DegreeOfFreedomE)
    delete DegreesOfFreedomTypeValue.DegreeOfFreedom;
  else if (DegreesOfFreedomTypeType == ISODegreeOfFreedomE)
    delete DegreesOfFreedomTypeValue.ISODegreeOfFreedom;
  #endif
}

void DegreesOfFreedomTypeChoicePair::printSelf(FILE * outFile)
{
  if (DegreesOfFreedomTypeType == DegreeOfFreedomE)
    {
      std::list<DegreeOfFreedomEnumType *>::iterator iter;
      for (iter = DegreesOfFreedomTypeValue.DegreeOfFreedom->begin();
           iter != DegreesOfFreedomTypeValue.DegreeOfFreedom->end();
           iter++)
        {
          doSpaces(0, outFile);
          fprintf(outFile, "<DegreeOfFreedom");
          (*iter)->printSelf(outFile);
          fprintf(outFile, "</DegreeOfFreedom>\n");
        }
    }
  else if (DegreesOfFreedomTypeType == ISODegreeOfFreedomE)
    {
      std::list<ISODegreeOfFreedomEnumType *>::iterator iter;
      for (iter = DegreesOfFreedomTypeValue.ISODegreeOfFreedom->begin();
           iter != DegreesOfFreedomTypeValue.ISODegreeOfFreedom->end();
           iter++)
        {
          doSpaces(0, outFile);
          fprintf(outFile, "<ISODegreeOfFreedom");
          (*iter)->printSelf(outFile);
          fprintf(outFile, "</ISODegreeOfFreedom>\n");
        }
    }
}

bool DegreesOfFreedomType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in DegreesOfFreedomType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in DegreesOfFreedomType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DegreesOfFreedomType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in DegreesOfFreedomType\n");
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

NaturalType * DegreesOfFreedomType::getn()
{return n;}

void DegreesOfFreedomType::setn(NaturalType * nIn)
{n = nIn;}

/* ***************************************************************** */

/* class DiameterModifierEnumType

*/

DiameterModifierEnumType::DiameterModifierEnumType() :
  XmlNMTOKEN()
{
}

DiameterModifierEnumType::DiameterModifierEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "PD") &&
           strcmp(val.c_str(), "MD") &&
           strcmp(val.c_str(), "LD"));
}

DiameterModifierEnumType::~DiameterModifierEnumType() {}

bool DiameterModifierEnumType::DiameterModifierEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PD") &&
          strcmp(val.c_str(), "MD") &&
          strcmp(val.c_str(), "LD"));
}

void DiameterModifierEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DiameterModifierEnumType");
}

void DiameterModifierEnumType::printSelf(FILE * outFile)
{
  if (DiameterModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad DiameterModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DiameterModifierEnumType::oPrintSelf(FILE * outFile)
{
  if (DiameterModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad DiameterModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class DimensionDeterminationEnumType

*/

DimensionDeterminationEnumType::DimensionDeterminationEnumType() :
  XmlNMTOKEN()
{
}

DimensionDeterminationEnumType::DimensionDeterminationEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "LP") &&
           strcmp(val.c_str(), "LS") &&
           strcmp(val.c_str(), "GG") &&
           strcmp(val.c_str(), "GX") &&
           strcmp(val.c_str(), "GN") &&
           strcmp(val.c_str(), "GC") &&
           strcmp(val.c_str(), "CC") &&
           strcmp(val.c_str(), "CA") &&
           strcmp(val.c_str(), "CV"));
}

DimensionDeterminationEnumType::~DimensionDeterminationEnumType() {}

bool DimensionDeterminationEnumType::DimensionDeterminationEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "LP") &&
          strcmp(val.c_str(), "LS") &&
          strcmp(val.c_str(), "GG") &&
          strcmp(val.c_str(), "GX") &&
          strcmp(val.c_str(), "GN") &&
          strcmp(val.c_str(), "GC") &&
          strcmp(val.c_str(), "CC") &&
          strcmp(val.c_str(), "CA") &&
          strcmp(val.c_str(), "CV"));
}

void DimensionDeterminationEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DimensionDeterminationEnumType");
}

void DimensionDeterminationEnumType::printSelf(FILE * outFile)
{
  if (DimensionDeterminationEnumTypeIsBad())
    {
      fprintf(stderr, "bad DimensionDeterminationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DimensionDeterminationEnumType::oPrintSelf(FILE * outFile)
{
  if (DimensionDeterminationEnumTypeIsBad())
    {
      fprintf(stderr, "bad DimensionDeterminationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class DimensionModifierEnumType

*/

DimensionModifierEnumType::DimensionModifierEnumType() :
  XmlNMTOKEN()
{
}

DimensionModifierEnumType::DimensionModifierEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "BASIC_OR_TED") &&
           strcmp(val.c_str(), "SET") &&
           strcmp(val.c_str(), "REFERENCE_OR_AUXILIARY"));
}

DimensionModifierEnumType::~DimensionModifierEnumType() {}

bool DimensionModifierEnumType::DimensionModifierEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "BASIC_OR_TED") &&
          strcmp(val.c_str(), "SET") &&
          strcmp(val.c_str(), "REFERENCE_OR_AUXILIARY"));
}

void DimensionModifierEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DimensionModifierEnumType");
}

void DimensionModifierEnumType::printSelf(FILE * outFile)
{
  if (DimensionModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad DimensionModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DimensionModifierEnumType::oPrintSelf(FILE * outFile)
{
  if (DimensionModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad DimensionModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class DimensionModifiersType

*/

DimensionModifiersType::DimensionModifiersType()
{
  DeterminationModifier = 0;
  SignificanceModifier = 0;
  SectionModifier = 0;
}

DimensionModifiersType::DimensionModifiersType(
 DimensionDeterminationEnumType * DeterminationModifierIn,
 SignificantDimensionEnumType * SignificanceModifierIn,
 SectionModifierEnumType * SectionModifierIn)
{
  DeterminationModifier = DeterminationModifierIn;
  SignificanceModifier = SignificanceModifierIn;
  SectionModifier = SectionModifierIn;
}

DimensionModifiersType::~DimensionModifiersType()
{
  #ifndef NODESTRUCT
  delete DeterminationModifier;
  delete SignificanceModifier;
  delete SectionModifier;
  #endif
}

void DimensionModifiersType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (DeterminationModifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DeterminationModifier");
      DeterminationModifier->printSelf(outFile);
      fprintf(outFile, "</DeterminationModifier>\n");
    }
  if (SignificanceModifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SignificanceModifier");
      SignificanceModifier->printSelf(outFile);
      fprintf(outFile, "</SignificanceModifier>\n");
    }
  if (SectionModifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SectionModifier");
      SectionModifier->printSelf(outFile);
      fprintf(outFile, "</SectionModifier>\n");
    }
  doSpaces(-INDENT, outFile);
}

DimensionDeterminationEnumType * DimensionModifiersType::getDeterminationModifier()
{return DeterminationModifier;}

void DimensionModifiersType::setDeterminationModifier(DimensionDeterminationEnumType * DeterminationModifierIn)
{DeterminationModifier = DeterminationModifierIn;}

SignificantDimensionEnumType * DimensionModifiersType::getSignificanceModifier()
{return SignificanceModifier;}

void DimensionModifiersType::setSignificanceModifier(SignificantDimensionEnumType * SignificanceModifierIn)
{SignificanceModifier = SignificanceModifierIn;}

SectionModifierEnumType * DimensionModifiersType::getSectionModifier()
{return SectionModifier;}

void DimensionModifiersType::setSectionModifier(SectionModifierEnumType * SectionModifierIn)
{SectionModifier = SectionModifierIn;}

/* ***************************************************************** */

/* class DirectionFeatureType

*/

DirectionFeatureType::DirectionFeatureType()
{
  DirectionFeatureEnum = 0;
  DatumDefinitionId = 0;
}

DirectionFeatureType::DirectionFeatureType(
 ModifyingPlaneEnumType * DirectionFeatureEnumIn,
 QIFReferenceFullType * DatumDefinitionIdIn)
{
  DirectionFeatureEnum = DirectionFeatureEnumIn;
  DatumDefinitionId = DatumDefinitionIdIn;
}

DirectionFeatureType::~DirectionFeatureType()
{
  #ifndef NODESTRUCT
  delete DirectionFeatureEnum;
  delete DatumDefinitionId;
  #endif
}

void DirectionFeatureType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DirectionFeatureEnum");
  DirectionFeatureEnum->printSelf(outFile);
  fprintf(outFile, "</DirectionFeatureEnum>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumDefinitionId");
  DatumDefinitionId->printSelf(outFile);
  fprintf(outFile, "</DatumDefinitionId>\n");
  doSpaces(-INDENT, outFile);
}

ModifyingPlaneEnumType * DirectionFeatureType::getDirectionFeatureEnum()
{return DirectionFeatureEnum;}

void DirectionFeatureType::setDirectionFeatureEnum(ModifyingPlaneEnumType * DirectionFeatureEnumIn)
{DirectionFeatureEnum = DirectionFeatureEnumIn;}

QIFReferenceFullType * DirectionFeatureType::getDatumDefinitionId()
{return DatumDefinitionId;}

void DirectionFeatureType::setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn)
{DatumDefinitionId = DatumDefinitionIdIn;}

/* ***************************************************************** */

/* class DirectionalOffsetType

*/

DirectionalOffsetType::DirectionalOffsetType()
{
  Offset = 0;
  DirectionalOffs_1011 = 0;
}

DirectionalOffsetType::DirectionalOffsetType(
 LinearValueType * OffsetIn,
 DirectionalOffs_1011_Type * DirectionalOffs_1011In)
{
  Offset = OffsetIn;
  DirectionalOffs_1011 = DirectionalOffs_1011In;
}

DirectionalOffsetType::~DirectionalOffsetType()
{
  #ifndef NODESTRUCT
  delete Offset;
  delete DirectionalOffs_1011;
  #endif
}

void DirectionalOffsetType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Offset");
  Offset->printSelf(outFile);
  fprintf(outFile, "</Offset>\n");
  DirectionalOffs_1011->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

LinearValueType * DirectionalOffsetType::getOffset()
{return Offset;}

void DirectionalOffsetType::setOffset(LinearValueType * OffsetIn)
{Offset = OffsetIn;}

DirectionalOffs_1011_Type * DirectionalOffsetType::getDirectionalOffs_1011()
{return DirectionalOffs_1011;}

void DirectionalOffsetType::setDirectionalOffs_1011(DirectionalOffs_1011_Type * DirectionalOffs_1011In)
{DirectionalOffs_1011 = DirectionalOffs_1011In;}

/* ***************************************************************** */

/* class DistanceBetweenAnalysisModeEnumType

*/

DistanceBetweenAnalysisModeEnumType::DistanceBetweenAnalysisModeEnumType() :
  XmlNMTOKEN()
{
}

DistanceBetweenAnalysisModeEnumType::DistanceBetweenAnalysisModeEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "ONEDIMENSIONAL") &&
           strcmp(val.c_str(), "TWODIMENSIONAL") &&
           strcmp(val.c_str(), "THREEDIMENSIONAL"));
}

DistanceBetweenAnalysisModeEnumType::~DistanceBetweenAnalysisModeEnumType() {}

bool DistanceBetweenAnalysisModeEnumType::DistanceBetweenAnalysisModeEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ONEDIMENSIONAL") &&
          strcmp(val.c_str(), "TWODIMENSIONAL") &&
          strcmp(val.c_str(), "THREEDIMENSIONAL"));
}

void DistanceBetweenAnalysisModeEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DistanceBetweenAnalysisModeEnumType");
}

void DistanceBetweenAnalysisModeEnumType::printSelf(FILE * outFile)
{
  if (DistanceBetweenAnalysisModeEnumTypeIsBad())
    {
      fprintf(stderr, "bad DistanceBetweenAnalysisModeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DistanceBetweenAnalysisModeEnumType::oPrintSelf(FILE * outFile)
{
  if (DistanceBetweenAnalysisModeEnumTypeIsBad())
    {
      fprintf(stderr, "bad DistanceBetweenAnalysisModeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class EmployeeType

*/

EmployeeType::EmployeeType()
{
  Name = 0;
  EmployeeId = 0;
  Shift = 0;
}

EmployeeType::EmployeeType(
 XmlToken * NameIn,
 XmlToken * EmployeeIdIn,
 XmlToken * ShiftIn)
{
  Name = NameIn;
  EmployeeId = EmployeeIdIn;
  Shift = ShiftIn;
}

EmployeeType::~EmployeeType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete EmployeeId;
  delete Shift;
  #endif
}

void EmployeeType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (EmployeeId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<EmployeeId");
      EmployeeId->printSelf(outFile);
      fprintf(outFile, "</EmployeeId>\n");
    }
  if (Shift)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Shift");
      Shift->printSelf(outFile);
      fprintf(outFile, "</Shift>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * EmployeeType::getName()
{return Name;}

void EmployeeType::setName(XmlToken * NameIn)
{Name = NameIn;}

XmlToken * EmployeeType::getEmployeeId()
{return EmployeeId;}

void EmployeeType::setEmployeeId(XmlToken * EmployeeIdIn)
{EmployeeId = EmployeeIdIn;}

XmlToken * EmployeeType::getShift()
{return Shift;}

void EmployeeType::setShift(XmlToken * ShiftIn)
{Shift = ShiftIn;}

/* ***************************************************************** */

/* class EmployeeTypeLisd

*/

EmployeeTypeLisd::EmployeeTypeLisd() {}

EmployeeTypeLisd::EmployeeTypeLisd(EmployeeType * aEmployeeType)
{
  push_back(aEmployeeType);
}

EmployeeTypeLisd::~EmployeeTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<EmployeeType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void EmployeeTypeLisd::printSelf(FILE * outFile)
{
  std::list<EmployeeType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class EntitiesExternalType

*/

EntitiesExternalType::EntitiesExternalType()
{
  n = 0;
  Entity = 0;
}

EntitiesExternalType::EntitiesExternalType(
 EntityExternalTypeLisd * EntityIn)
{
  n = 0;
  Entity = EntityIn;
}

EntitiesExternalType::EntitiesExternalType(
 NaturalType * nIn,
 EntityExternalTypeLisd * EntityIn)
{
  n = nIn;
  Entity = EntityIn;
}

EntitiesExternalType::~EntitiesExternalType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Entity;
  #endif
}

void EntitiesExternalType::printSelf(FILE * outFile)
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
    if (!Entity)
      {
        fprintf(stderr, "Entity list is missing\n");
        exit(1);
      }
    if (Entity->size() == 0)
      {
        fprintf(stderr, "Entity list is empty\n");
        exit(1);
      }
    if (Entity->size() < 1)
      {
        fprintf(stderr,
                "size of Entity list (%d) less than minimum required (1)\n",
                (int)Entity->size());
        exit(1);
      }
    std::list<EntityExternalType *>::iterator iter;
    for (iter = Entity->begin();
         iter != Entity->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Entity");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Entity>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool EntitiesExternalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in EntitiesExternalType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in EntitiesExternalType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EntitiesExternalType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in EntitiesExternalType\n");
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

NaturalType * EntitiesExternalType::getn()
{return n;}

void EntitiesExternalType::setn(NaturalType * nIn)
{n = nIn;}

EntityExternalTypeLisd * EntitiesExternalType::getEntity()
{return Entity;}

void EntitiesExternalType::setEntity(EntityExternalTypeLisd * EntityIn)
{Entity = EntityIn;}

/* ***************************************************************** */

/* class EntityExternalType

*/

EntityExternalType::EntityExternalType()
{
  id = 0;
  EntityId = 0;
  Name = 0;
  Description = 0;
}

EntityExternalType::EntityExternalType(
 XmlToken * EntityIdIn,
 XmlToken * NameIn,
 XmlString * DescriptionIn)
{
  id = 0;
  EntityId = EntityIdIn;
  Name = NameIn;
  Description = DescriptionIn;
}

EntityExternalType::EntityExternalType(
 QIFIdType * idIn,
 XmlToken * EntityIdIn,
 XmlToken * NameIn,
 XmlString * DescriptionIn)
{
  id = idIn;
  EntityId = EntityIdIn;
  Name = NameIn;
  Description = DescriptionIn;
}

EntityExternalType::~EntityExternalType()
{
  #ifndef NODESTRUCT
  delete id;
  delete EntityId;
  delete Name;
  delete Description;
  #endif
}

void EntityExternalType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<EntityId");
  EntityId->printSelf(outFile);
  fprintf(outFile, "</EntityId>\n");
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
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

bool EntityExternalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in EntityExternalType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in EntityExternalType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EntityExternalType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in EntityExternalType\n");
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

QIFIdType * EntityExternalType::getid()
{return id;}

void EntityExternalType::setid(QIFIdType * idIn)
{id = idIn;}

XmlToken * EntityExternalType::getEntityId()
{return EntityId;}

void EntityExternalType::setEntityId(XmlToken * EntityIdIn)
{EntityId = EntityIdIn;}

XmlToken * EntityExternalType::getName()
{return Name;}

void EntityExternalType::setName(XmlToken * NameIn)
{Name = NameIn;}

XmlString * EntityExternalType::getDescription()
{return Description;}

void EntityExternalType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

/* ***************************************************************** */

/* class EntityExternalTypeLisd

*/

EntityExternalTypeLisd::EntityExternalTypeLisd() {}

EntityExternalTypeLisd::EntityExternalTypeLisd(EntityExternalType * aEntityExternalType)
{
  push_back(aEntityExternalType);
}

EntityExternalTypeLisd::~EntityExternalTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<EntityExternalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void EntityExternalTypeLisd::printSelf(FILE * outFile)
{
  std::list<EntityExternalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class EventBaseType

*/

EventBaseType::EventBaseType()
{
  id = 0;
  Description = 0;
}

EventBaseType::EventBaseType(
 XmlString * DescriptionIn)
{
  id = 0;
  Description = DescriptionIn;
}

EventBaseType::EventBaseType(
 QIFIdType * idIn,
 XmlString * DescriptionIn)
{
  id = idIn;
  Description = DescriptionIn;
}

EventBaseType::~EventBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Description;
  #endif
}

void EventBaseType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Description");
  Description->printSelf(outFile);
  fprintf(outFile, "</Description>\n");
  doSpaces(-INDENT, outFile);
}

bool EventBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in EventBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in EventBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EventBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in EventBaseType\n");
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

QIFIdType * EventBaseType::getid()
{return id;}

void EventBaseType::setid(QIFIdType * idIn)
{id = idIn;}

XmlString * EventBaseType::getDescription()
{return Description;}

void EventBaseType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

/* ***************************************************************** */

/* class ExternalFileReferenceType

*/

ExternalFileReferenceType::ExternalFileReferenceType()
{
  URI = 0;
  FileSpec = 0;
  Description = 0;
}

ExternalFileReferenceType::ExternalFileReferenceType(
 XmlAnyURI * URIIn,
 FileSpecType * FileSpecIn,
 XmlString * DescriptionIn)
{
  URI = URIIn;
  FileSpec = FileSpecIn;
  Description = DescriptionIn;
}

ExternalFileReferenceType::~ExternalFileReferenceType()
{
  #ifndef NODESTRUCT
  delete URI;
  delete FileSpec;
  delete Description;
  #endif
}

void ExternalFileReferenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<URI");
  URI->printSelf(outFile);
  fprintf(outFile, "</URI>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<FileSpec");
  FileSpec->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</FileSpec>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Description");
  Description->printSelf(outFile);
  fprintf(outFile, "</Description>\n");
  doSpaces(-INDENT, outFile);
}

XmlAnyURI * ExternalFileReferenceType::getURI()
{return URI;}

void ExternalFileReferenceType::setURI(XmlAnyURI * URIIn)
{URI = URIIn;}

FileSpecType * ExternalFileReferenceType::getFileSpec()
{return FileSpec;}

void ExternalFileReferenceType::setFileSpec(FileSpecType * FileSpecIn)
{FileSpec = FileSpecIn;}

XmlString * ExternalFileReferenceType::getDescription()
{return Description;}

void ExternalFileReferenceType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

/* ***************************************************************** */

/* class ExternalFileReferenceTypeLisd

*/

ExternalFileReferenceTypeLisd::ExternalFileReferenceTypeLisd() {}

ExternalFileReferenceTypeLisd::ExternalFileReferenceTypeLisd(ExternalFileReferenceType * aExternalFileReferenceType)
{
  push_back(aExternalFileReferenceType);
}

ExternalFileReferenceTypeLisd::~ExternalFileReferenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ExternalFileReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ExternalFileReferenceTypeLisd::printSelf(FILE * outFile)
{
  std::list<ExternalFileReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ExternalFileReferencesType

*/

ExternalFileReferencesType::ExternalFileReferencesType()
{
  n = 0;
  ExternalFileReference = 0;
}

ExternalFileReferencesType::ExternalFileReferencesType(
 ExternalFileReferenceTypeLisd * ExternalFileReferenceIn)
{
  n = 0;
  ExternalFileReference = ExternalFileReferenceIn;
}

ExternalFileReferencesType::ExternalFileReferencesType(
 NaturalType * nIn,
 ExternalFileReferenceTypeLisd * ExternalFileReferenceIn)
{
  n = nIn;
  ExternalFileReference = ExternalFileReferenceIn;
}

ExternalFileReferencesType::~ExternalFileReferencesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ExternalFileReference;
  #endif
}

void ExternalFileReferencesType::printSelf(FILE * outFile)
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
    if (!ExternalFileReference)
      {
        fprintf(stderr, "ExternalFileReference list is missing\n");
        exit(1);
      }
    if (ExternalFileReference->size() == 0)
      {
        fprintf(stderr, "ExternalFileReference list is empty\n");
        exit(1);
      }
    if (ExternalFileReference->size() < 1)
      {
        fprintf(stderr,
                "size of ExternalFileReference list (%d) less than minimum required (1)\n",
                (int)ExternalFileReference->size());
        exit(1);
      }
    std::list<ExternalFileReferenceType *>::iterator iter;
    for (iter = ExternalFileReference->begin();
         iter != ExternalFileReference->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ExternalFileReference");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ExternalFileReference>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ExternalFileReferencesType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ExternalFileReferencesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ExternalFileReferencesType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ExternalFileReferencesType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ExternalFileReferencesType\n");
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

NaturalType * ExternalFileReferencesType::getn()
{return n;}

void ExternalFileReferencesType::setn(NaturalType * nIn)
{n = nIn;}

ExternalFileReferenceTypeLisd * ExternalFileReferencesType::getExternalFileReference()
{return ExternalFileReference;}

void ExternalFileReferencesType::setExternalFileReference(ExternalFileReferenceTypeLisd * ExternalFileReferenceIn)
{ExternalFileReference = ExternalFileReferenceIn;}

/* ***************************************************************** */

/* class FileSpecType

*/

FileSpecType::FileSpecType()
{
  FileSpecTypePair = 0;
}

FileSpecType::FileSpecType(
 FileSpecTypeChoicePair * FileSpecTypePairIn)
{
  FileSpecTypePair = FileSpecTypePairIn;
}

FileSpecType::~FileSpecType()
{
  #ifndef NODESTRUCT
  delete FileSpecTypePair;
  #endif
}

void FileSpecType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  FileSpecTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

FileSpecTypeChoicePair * FileSpecType::getFileSpecTypePair()
{return FileSpecTypePair;}

void FileSpecType::setFileSpecTypePair(FileSpecTypeChoicePair * FileSpecTypePairIn)
{FileSpecTypePair = FileSpecTypePairIn;}
FileSpecTypeChoicePair::FileSpecTypeChoicePair() {}

FileSpecTypeChoicePair::FileSpecTypeChoicePair(
 whichOne FileSpecTypeTypeIn,
 FileSpecTypeVal FileSpecTypeValueIn)
{
  FileSpecTypeType = FileSpecTypeTypeIn;
  FileSpecTypeValue = FileSpecTypeValueIn;
}

FileSpecTypeChoicePair::~FileSpecTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (FileSpecTypeType == CommonFileSpecEnumE)
    delete FileSpecTypeValue.CommonFileSpecEnum;
  else if (FileSpecTypeType == OtherFileSpecE)
    delete FileSpecTypeValue.OtherFileSpec;
  #endif
}

void FileSpecTypeChoicePair::printSelf(FILE * outFile)
{
  if (FileSpecTypeType == CommonFileSpecEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CommonFileSpecEnum");
      FileSpecTypeValue.CommonFileSpecEnum->printSelf(outFile);
      fprintf(outFile, "</CommonFileSpecEnum>\n");
    }
  else if (FileSpecTypeType == OtherFileSpecE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherFileSpec");
      FileSpecTypeValue.OtherFileSpec->printSelf(outFile);
      fprintf(outFile, "</OtherFileSpec>\n");
    }
}

/* ***************************************************************** */

/* class FileType

*/

FileType::FileType()
{
  Name = 0;
  Version = 0;
  Format = 0;
}

FileType::FileType(
 XmlToken * NameIn,
 XmlToken * VersionIn,
 DigitalModelFormatType * FormatIn)
{
  Name = NameIn;
  Version = VersionIn;
  Format = FormatIn;
}

FileType::~FileType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete Version;
  delete Format;
  #endif
}

void FileType::printSelf(FILE * outFile)
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
      fprintf(outFile, "</Version>\n");
    }
  if (Format)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Format");
      Format->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Format>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * FileType::getName()
{return Name;}

void FileType::setName(XmlToken * NameIn)
{Name = NameIn;}

XmlToken * FileType::getVersion()
{return Version;}

void FileType::setVersion(XmlToken * VersionIn)
{Version = VersionIn;}

DigitalModelFormatType * FileType::getFormat()
{return Format;}

void FileType::setFormat(DigitalModelFormatType * FormatIn)
{Format = FormatIn;}

/* ***************************************************************** */

/* class ForceToleranceType

*/

ForceToleranceType::ForceToleranceType()
{
  ForceToleranceT_1012 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

ForceToleranceType::ForceToleranceType(
 ForceToleranceT_1012_Type * ForceToleranceT_1012In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  ForceToleranceT_1012 = ForceToleranceT_1012In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

ForceToleranceType::~ForceToleranceType()
{
  #ifndef NODESTRUCT
  delete ForceToleranceT_1012;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void ForceToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ForceToleranceT_1012->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

ForceToleranceT_1012_Type * ForceToleranceType::getForceToleranceT_1012()
{return ForceToleranceT_1012;}

void ForceToleranceType::setForceToleranceT_1012(ForceToleranceT_1012_Type * ForceToleranceT_1012In)
{ForceToleranceT_1012 = ForceToleranceT_1012In;}

XmlBoolean * ForceToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void ForceToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * ForceToleranceType::getAttributes()
{return Attributes;}

void ForceToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class ISODegreeOfFreedomEnumType

*/

ISODegreeOfFreedomEnumType::ISODegreeOfFreedomEnumType() :
  XmlNMTOKEN()
{
}

ISODegreeOfFreedomEnumType::ISODegreeOfFreedomEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "Rx") &&
           strcmp(val.c_str(), "Ry") &&
           strcmp(val.c_str(), "Rz") &&
           strcmp(val.c_str(), "Tx") &&
           strcmp(val.c_str(), "Ty") &&
           strcmp(val.c_str(), "Tz"));
}

ISODegreeOfFreedomEnumType::~ISODegreeOfFreedomEnumType() {}

bool ISODegreeOfFreedomEnumType::ISODegreeOfFreedomEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "Rx") &&
          strcmp(val.c_str(), "Ry") &&
          strcmp(val.c_str(), "Rz") &&
          strcmp(val.c_str(), "Tx") &&
          strcmp(val.c_str(), "Ty") &&
          strcmp(val.c_str(), "Tz"));
}

void ISODegreeOfFreedomEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ISODegreeOfFreedomEnumType");
}

void ISODegreeOfFreedomEnumType::printSelf(FILE * outFile)
{
  if (ISODegreeOfFreedomEnumTypeIsBad())
    {
      fprintf(stderr, "bad ISODegreeOfFreedomEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ISODegreeOfFreedomEnumType::oPrintSelf(FILE * outFile)
{
  if (ISODegreeOfFreedomEnumTypeIsBad())
    {
      fprintf(stderr, "bad ISODegreeOfFreedomEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ISODegreeOfFreedomEnumTypeLisd

*/

ISODegreeOfFreedomEnumTypeLisd::ISODegreeOfFreedomEnumTypeLisd() {}

ISODegreeOfFreedomEnumTypeLisd::ISODegreeOfFreedomEnumTypeLisd(
  ISODegreeOfFreedomEnumType * aISODegreeOfFreedomEnumType)
{
  push_back(aISODegreeOfFreedomEnumType);
}

ISODegreeOfFreedomEnumTypeLisd::ISODegreeOfFreedomEnumTypeLisd(
  ISODegreeOfFreedomEnumTypeLisd * aISODegreeOfFreedomEnumTypeLisd)
{
  *this = *aISODegreeOfFreedomEnumTypeLisd;
}

ISODegreeOfFreedomEnumTypeLisd::~ISODegreeOfFreedomEnumTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ISODegreeOfFreedomEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ISODegreeOfFreedomEnumTypeLisd::printSelf(FILE * outFile)
{
  std::list<ISODegreeOfFreedomEnumType *>::iterator iter;

  fprintf(outFile, ">");
  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    }
}

/* ***************************************************************** */

/* class InspectionStatusEnumType

*/

InspectionStatusEnumType::InspectionStatusEnumType() :
  XmlNMTOKEN()
{
}

InspectionStatusEnumType::InspectionStatusEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "PASS") &&
           strcmp(val.c_str(), "FAIL") &&
           strcmp(val.c_str(), "REWORK") &&
           strcmp(val.c_str(), "SYSERROR") &&
           strcmp(val.c_str(), "UNKNOWN") &&
           strcmp(val.c_str(), "NOT_CALCULATED") &&
           strcmp(val.c_str(), "NOT_MEASURED") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

InspectionStatusEnumType::~InspectionStatusEnumType() {}

bool InspectionStatusEnumType::InspectionStatusEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PASS") &&
          strcmp(val.c_str(), "FAIL") &&
          strcmp(val.c_str(), "REWORK") &&
          strcmp(val.c_str(), "SYSERROR") &&
          strcmp(val.c_str(), "UNKNOWN") &&
          strcmp(val.c_str(), "NOT_CALCULATED") &&
          strcmp(val.c_str(), "NOT_MEASURED") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void InspectionStatusEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "InspectionStatusEnumType");
}

void InspectionStatusEnumType::printSelf(FILE * outFile)
{
  if (InspectionStatusEnumTypeIsBad())
    {
      fprintf(stderr, "bad InspectionStatusEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void InspectionStatusEnumType::oPrintSelf(FILE * outFile)
{
  if (InspectionStatusEnumTypeIsBad())
    {
      fprintf(stderr, "bad InspectionStatusEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class InspectionStatusType

*/

InspectionStatusType::InspectionStatusType()
{
  InspectionStatusTypePair = 0;
}

InspectionStatusType::InspectionStatusType(
 InspectionStatusTypeChoicePair * InspectionStatusTypePairIn)
{
  InspectionStatusTypePair = InspectionStatusTypePairIn;
}

InspectionStatusType::~InspectionStatusType()
{
  #ifndef NODESTRUCT
  delete InspectionStatusTypePair;
  #endif
}

void InspectionStatusType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  InspectionStatusTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

InspectionStatusTypeChoicePair * InspectionStatusType::getInspectionStatusTypePair()
{return InspectionStatusTypePair;}

void InspectionStatusType::setInspectionStatusTypePair(InspectionStatusTypeChoicePair * InspectionStatusTypePairIn)
{InspectionStatusTypePair = InspectionStatusTypePairIn;}
InspectionStatusTypeChoicePair::InspectionStatusTypeChoicePair() {}

InspectionStatusTypeChoicePair::InspectionStatusTypeChoicePair(
 whichOne InspectionStatusTypeTypeIn,
 InspectionStatusTypeVal InspectionStatusTypeValueIn)
{
  InspectionStatusTypeType = InspectionStatusTypeTypeIn;
  InspectionStatusTypeValue = InspectionStatusTypeValueIn;
}

InspectionStatusTypeChoicePair::~InspectionStatusTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (InspectionStatusTypeType == InspectionStatusEnumE)
    delete InspectionStatusTypeValue.InspectionStatusEnum;
  else if (InspectionStatusTypeType == OtherInspectionStatusE)
    delete InspectionStatusTypeValue.OtherInspectionStatus;
  #endif
}

void InspectionStatusTypeChoicePair::printSelf(FILE * outFile)
{
  if (InspectionStatusTypeType == InspectionStatusEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionStatusEnum");
      InspectionStatusTypeValue.InspectionStatusEnum->printSelf(outFile);
      fprintf(outFile, "</InspectionStatusEnum>\n");
    }
  else if (InspectionStatusTypeType == OtherInspectionStatusE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherInspectionStatus");
      InspectionStatusTypeValue.OtherInspectionStatus->printSelf(outFile);
      fprintf(outFile, "</OtherInspectionStatus>\n");
    }
}

/* ***************************************************************** */

/* class IntersectionPlaneEnumType

*/

IntersectionPlaneEnumType::IntersectionPlaneEnumType() :
  XmlNMTOKEN()
{
}

IntersectionPlaneEnumType::IntersectionPlaneEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "PARALLEL") &&
           strcmp(val.c_str(), "PERPENDICULAR") &&
           strcmp(val.c_str(), "INCLUDING"));
}

IntersectionPlaneEnumType::~IntersectionPlaneEnumType() {}

bool IntersectionPlaneEnumType::IntersectionPlaneEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PARALLEL") &&
          strcmp(val.c_str(), "PERPENDICULAR") &&
          strcmp(val.c_str(), "INCLUDING"));
}

void IntersectionPlaneEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "IntersectionPlaneEnumType");
}

void IntersectionPlaneEnumType::printSelf(FILE * outFile)
{
  if (IntersectionPlaneEnumTypeIsBad())
    {
      fprintf(stderr, "bad IntersectionPlaneEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void IntersectionPlaneEnumType::oPrintSelf(FILE * outFile)
{
  if (IntersectionPlaneEnumTypeIsBad())
    {
      fprintf(stderr, "bad IntersectionPlaneEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class IntersectionPlaneType

*/

IntersectionPlaneType::IntersectionPlaneType()
{
  IntersectionPlaneEnum = 0;
  DatumDefinitionId = 0;
}

IntersectionPlaneType::IntersectionPlaneType(
 IntersectionPlaneEnumType * IntersectionPlaneEnumIn,
 QIFReferenceFullType * DatumDefinitionIdIn)
{
  IntersectionPlaneEnum = IntersectionPlaneEnumIn;
  DatumDefinitionId = DatumDefinitionIdIn;
}

IntersectionPlaneType::~IntersectionPlaneType()
{
  #ifndef NODESTRUCT
  delete IntersectionPlaneEnum;
  delete DatumDefinitionId;
  #endif
}

void IntersectionPlaneType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<IntersectionPlaneEnum");
  IntersectionPlaneEnum->printSelf(outFile);
  fprintf(outFile, "</IntersectionPlaneEnum>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumDefinitionId");
  DatumDefinitionId->printSelf(outFile);
  fprintf(outFile, "</DatumDefinitionId>\n");
  doSpaces(-INDENT, outFile);
}

IntersectionPlaneEnumType * IntersectionPlaneType::getIntersectionPlaneEnum()
{return IntersectionPlaneEnum;}

void IntersectionPlaneType::setIntersectionPlaneEnum(IntersectionPlaneEnumType * IntersectionPlaneEnumIn)
{IntersectionPlaneEnum = IntersectionPlaneEnumIn;}

QIFReferenceFullType * IntersectionPlaneType::getDatumDefinitionId()
{return DatumDefinitionId;}

void IntersectionPlaneType::setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn)
{DatumDefinitionId = DatumDefinitionIdIn;}

/* ***************************************************************** */

/* class LimitsAndFitsSpecificationType

*/

LimitsAndFitsSpecificationType::LimitsAndFitsSpecificationType()
{
  zoneVariance = 0;
  FormVariance = 0;
  Grade = 0;
}

LimitsAndFitsSpecificationType::LimitsAndFitsSpecificationType(
 XmlToken * FormVarianceIn,
 XmlToken * GradeIn)
{
  zoneVariance = 0;
  FormVariance = FormVarianceIn;
  Grade = GradeIn;
}

LimitsAndFitsSpecificationType::LimitsAndFitsSpecificationType(
 LimitsAndFitsZoneVarianceType * zoneVarianceIn,
 XmlToken * FormVarianceIn,
 XmlToken * GradeIn)
{
  zoneVariance = zoneVarianceIn;
  FormVariance = FormVarianceIn;
  Grade = GradeIn;
}

LimitsAndFitsSpecificationType::~LimitsAndFitsSpecificationType()
{
  #ifndef NODESTRUCT
  delete zoneVariance;
  delete FormVariance;
  delete Grade;
  #endif
}

void LimitsAndFitsSpecificationType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (zoneVariance)
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
      fprintf(outFile, "zoneVariance=\"");
      zoneVariance->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"zoneVariance\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<FormVariance");
  FormVariance->printSelf(outFile);
  fprintf(outFile, "</FormVariance>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Grade");
  Grade->printSelf(outFile);
  fprintf(outFile, "</Grade>\n");
  doSpaces(-INDENT, outFile);
}

bool LimitsAndFitsSpecificationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "zoneVariance")
        {
          LimitsAndFitsZoneVarianceType * zoneVarianceVal;
          if (this->zoneVariance)
            {
              fprintf(stderr, "two values for zoneVariance in LimitsAndFitsSpecificationType\n");
              returnValue = true;
              break;
            }
          zoneVarianceVal = new LimitsAndFitsZoneVarianceType(decl->getval().c_str());
          if (zoneVarianceVal->getbad())
            {
              delete zoneVarianceVal;
              fprintf(stderr, "bad value %s for zoneVariance in LimitsAndFitsSpecificationType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zoneVariance = zoneVarianceVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LimitsAndFitsSpecificationType\n");
          returnValue = true;
          break;
        }
    }
  if (this->zoneVariance == 0)
    {
      fprintf(stderr, "required attribute \"zoneVariance\" missing in LimitsAndFitsSpecificationType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->zoneVariance;
      this->zoneVariance = 0;
    }
  return returnValue;
}

LimitsAndFitsZoneVarianceType * LimitsAndFitsSpecificationType::getzoneVariance()
{return zoneVariance;}

void LimitsAndFitsSpecificationType::setzoneVariance(LimitsAndFitsZoneVarianceType * zoneVarianceIn)
{zoneVariance = zoneVarianceIn;}

XmlToken * LimitsAndFitsSpecificationType::getFormVariance()
{return FormVariance;}

void LimitsAndFitsSpecificationType::setFormVariance(XmlToken * FormVarianceIn)
{FormVariance = FormVarianceIn;}

XmlToken * LimitsAndFitsSpecificationType::getGrade()
{return Grade;}

void LimitsAndFitsSpecificationType::setGrade(XmlToken * GradeIn)
{Grade = GradeIn;}

/* ***************************************************************** */

/* class LimitsAndFitsZoneVarianceType

*/

LimitsAndFitsZoneVarianceType::LimitsAndFitsZoneVarianceType() :
  XmlNMTOKEN()
{
}

LimitsAndFitsZoneVarianceType::LimitsAndFitsZoneVarianceType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "HOLE") &&
           strcmp(val.c_str(), "SHAFT"));
}

LimitsAndFitsZoneVarianceType::~LimitsAndFitsZoneVarianceType() {}

bool LimitsAndFitsZoneVarianceType::LimitsAndFitsZoneVarianceTypeIsBad()
{
  return (strcmp(val.c_str(), "HOLE") &&
          strcmp(val.c_str(), "SHAFT"));
}

void LimitsAndFitsZoneVarianceType::printName(FILE * outFile)
{
  fprintf(outFile, "LimitsAndFitsZoneVarianceType");
}

void LimitsAndFitsZoneVarianceType::printSelf(FILE * outFile)
{
  if (LimitsAndFitsZoneVarianceTypeIsBad())
    {
      fprintf(stderr, "bad LimitsAndFitsZoneVarianceType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void LimitsAndFitsZoneVarianceType::oPrintSelf(FILE * outFile)
{
  if (LimitsAndFitsZoneVarianceTypeIsBad())
    {
      fprintf(stderr, "bad LimitsAndFitsZoneVarianceType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class LinearCoordinateDirectionEnumType

*/

LinearCoordinateDirectionEnumType::LinearCoordinateDirectionEnumType() :
  XmlNMTOKEN()
{
}

LinearCoordinateDirectionEnumType::LinearCoordinateDirectionEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "XAXIS") &&
           strcmp(val.c_str(), "YAXIS") &&
           strcmp(val.c_str(), "ZAXIS") &&
           strcmp(val.c_str(), "RADIAL"));
}

LinearCoordinateDirectionEnumType::~LinearCoordinateDirectionEnumType() {}

bool LinearCoordinateDirectionEnumType::LinearCoordinateDirectionEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "XAXIS") &&
          strcmp(val.c_str(), "YAXIS") &&
          strcmp(val.c_str(), "ZAXIS") &&
          strcmp(val.c_str(), "RADIAL"));
}

void LinearCoordinateDirectionEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "LinearCoordinateDirectionEnumType");
}

void LinearCoordinateDirectionEnumType::printSelf(FILE * outFile)
{
  if (LinearCoordinateDirectionEnumTypeIsBad())
    {
      fprintf(stderr, "bad LinearCoordinateDirectionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void LinearCoordinateDirectionEnumType::oPrintSelf(FILE * outFile)
{
  if (LinearCoordinateDirectionEnumTypeIsBad())
    {
      fprintf(stderr, "bad LinearCoordinateDirectionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class LinearToleranceDefinitionType

*/

LinearToleranceDefinitionType::LinearToleranceDefinitionType()
{
  id = 0;
  Attributes = 0;
  LinearTolerance_1013 = 0;
}

LinearToleranceDefinitionType::LinearToleranceDefinitionType(
 AttributesType * AttributesIn,
 LinearTolerance_1013_Type * LinearTolerance_1013In)
{
  id = 0;
  Attributes = AttributesIn;
  LinearTolerance_1013 = LinearTolerance_1013In;
}

LinearToleranceDefinitionType::LinearToleranceDefinitionType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 LinearTolerance_1013_Type * LinearTolerance_1013In)
{
  id = idIn;
  Attributes = AttributesIn;
  LinearTolerance_1013 = LinearTolerance_1013In;
}

LinearToleranceDefinitionType::~LinearToleranceDefinitionType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete LinearTolerance_1013;
  #endif
}

void LinearToleranceDefinitionType::printSelf(FILE * outFile)
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
  LinearTolerance_1013->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool LinearToleranceDefinitionType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in LinearToleranceDefinitionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LinearToleranceDefinitionType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LinearToleranceDefinitionType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in LinearToleranceDefinitionType\n");
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

QIFIdType * LinearToleranceDefinitionType::getid()
{return id;}

void LinearToleranceDefinitionType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * LinearToleranceDefinitionType::getAttributes()
{return Attributes;}

void LinearToleranceDefinitionType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

LinearTolerance_1013_Type * LinearToleranceDefinitionType::getLinearTolerance_1013()
{return LinearTolerance_1013;}

void LinearToleranceDefinitionType::setLinearTolerance_1013(LinearTolerance_1013_Type * LinearTolerance_1013In)
{LinearTolerance_1013 = LinearTolerance_1013In;}

/* ***************************************************************** */

/* class LinearToleranceType

*/

LinearToleranceType::LinearToleranceType()
{
  LinearTolerance_1014 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

LinearToleranceType::LinearToleranceType(
 LinearTolerance_1014_Type * LinearTolerance_1014In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  LinearTolerance_1014 = LinearTolerance_1014In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

LinearToleranceType::~LinearToleranceType()
{
  #ifndef NODESTRUCT
  delete LinearTolerance_1014;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void LinearToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  LinearTolerance_1014->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

LinearTolerance_1014_Type * LinearToleranceType::getLinearTolerance_1014()
{return LinearTolerance_1014;}

void LinearToleranceType::setLinearTolerance_1014(LinearTolerance_1014_Type * LinearTolerance_1014In)
{LinearTolerance_1014 = LinearTolerance_1014In;}

XmlBoolean * LinearToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void LinearToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * LinearToleranceType::getAttributes()
{return Attributes;}

void LinearToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class LocationType

*/

LocationType::LocationType()
{
  id = 0;
  LocationDescription = 0;
  Address = 0;
}

LocationType::LocationType(
 XmlString * LocationDescriptionIn,
 PhysicalAddressType * AddressIn)
{
  id = 0;
  LocationDescription = LocationDescriptionIn;
  Address = AddressIn;
}

LocationType::LocationType(
 QIFIdType * idIn,
 XmlString * LocationDescriptionIn,
 PhysicalAddressType * AddressIn)
{
  id = idIn;
  LocationDescription = LocationDescriptionIn;
  Address = AddressIn;
}

LocationType::~LocationType()
{
  #ifndef NODESTRUCT
  delete id;
  delete LocationDescription;
  delete Address;
  #endif
}

void LocationType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<LocationDescription");
  LocationDescription->printSelf(outFile);
  fprintf(outFile, "</LocationDescription>\n");
  if (Address)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Address");
      Address->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Address>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool LocationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in LocationType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LocationType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LocationType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in LocationType\n");
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

QIFIdType * LocationType::getid()
{return id;}

void LocationType::setid(QIFIdType * idIn)
{id = idIn;}

XmlString * LocationType::getLocationDescription()
{return LocationDescription;}

void LocationType::setLocationDescription(XmlString * LocationDescriptionIn)
{LocationDescription = LocationDescriptionIn;}

PhysicalAddressType * LocationType::getAddress()
{return Address;}

void LocationType::setAddress(PhysicalAddressType * AddressIn)
{Address = AddressIn;}

/* ***************************************************************** */

/* class MachineCoordinateSystemOperationType

*/

MachineCoordinateSystemOperationType::MachineCoordinateSystemOperationType() :
  AlignmentOperationBaseType() {}

MachineCoordinateSystemOperationType::MachineCoordinateSystemOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{}

MachineCoordinateSystemOperationType::~MachineCoordinateSystemOperationType() {}

void MachineCoordinateSystemOperationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

/* ***************************************************************** */

/* class MachineCoordinateSystemType

*/

MachineCoordinateSystemType::MachineCoordinateSystemType()
{
  CoordinateSystemId = 0;
  MeasurementDeviceId = 0;
}

MachineCoordinateSystemType::MachineCoordinateSystemType(
 QIFReferenceFullType * CoordinateSystemIdIn,
 QIFReferenceType * MeasurementDeviceIdIn)
{
  CoordinateSystemId = CoordinateSystemIdIn;
  MeasurementDeviceId = MeasurementDeviceIdIn;
}

MachineCoordinateSystemType::~MachineCoordinateSystemType()
{
  #ifndef NODESTRUCT
  delete CoordinateSystemId;
  delete MeasurementDeviceId;
  #endif
}

void MachineCoordinateSystemType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<CoordinateSystemId");
  CoordinateSystemId->printSelf(outFile);
  fprintf(outFile, "</CoordinateSystemId>\n");
  if (MeasurementDeviceId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceId");
      MeasurementDeviceId->printSelf(outFile);
      fprintf(outFile, "</MeasurementDeviceId>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceFullType * MachineCoordinateSystemType::getCoordinateSystemId()
{return CoordinateSystemId;}

void MachineCoordinateSystemType::setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn)
{CoordinateSystemId = CoordinateSystemIdIn;}

QIFReferenceType * MachineCoordinateSystemType::getMeasurementDeviceId()
{return MeasurementDeviceId;}

void MachineCoordinateSystemType::setMeasurementDeviceId(QIFReferenceType * MeasurementDeviceIdIn)
{MeasurementDeviceId = MeasurementDeviceIdIn;}

/* ***************************************************************** */

/* class MachineCoordinateSystemTypeLisd

*/

MachineCoordinateSystemTypeLisd::MachineCoordinateSystemTypeLisd() {}

MachineCoordinateSystemTypeLisd::MachineCoordinateSystemTypeLisd(MachineCoordinateSystemType * aMachineCoordinateSystemType)
{
  push_back(aMachineCoordinateSystemType);
}

MachineCoordinateSystemTypeLisd::~MachineCoordinateSystemTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MachineCoordinateSystemType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MachineCoordinateSystemTypeLisd::printSelf(FILE * outFile)
{
  std::list<MachineCoordinateSystemType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class MassToleranceType

*/

MassToleranceType::MassToleranceType()
{
  MassToleranceTy_1015 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

MassToleranceType::MassToleranceType(
 MassToleranceTy_1015_Type * MassToleranceTy_1015In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  MassToleranceTy_1015 = MassToleranceTy_1015In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

MassToleranceType::~MassToleranceType()
{
  #ifndef NODESTRUCT
  delete MassToleranceTy_1015;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void MassToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  MassToleranceTy_1015->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

MassToleranceTy_1015_Type * MassToleranceType::getMassToleranceTy_1015()
{return MassToleranceTy_1015;}

void MassToleranceType::setMassToleranceTy_1015(MassToleranceTy_1015_Type * MassToleranceTy_1015In)
{MassToleranceTy_1015 = MassToleranceTy_1015In;}

XmlBoolean * MassToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void MassToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * MassToleranceType::getAttributes()
{return Attributes;}

void MassToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class MaterialClassEnumType

*/

MaterialClassEnumType::MaterialClassEnumType() :
  XmlNMTOKEN()
{
}

MaterialClassEnumType::MaterialClassEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "PLASTIC") &&
           strcmp(val.c_str(), "METAL") &&
           strcmp(val.c_str(), "WOOD") &&
           strcmp(val.c_str(), "STONE") &&
           strcmp(val.c_str(), "RUBBER") &&
           strcmp(val.c_str(), "COMPOSITE") &&
           strcmp(val.c_str(), "FOAM") &&
           strcmp(val.c_str(), "CERAMIC") &&
           strcmp(val.c_str(), "GLASS"));
}

MaterialClassEnumType::~MaterialClassEnumType() {}

bool MaterialClassEnumType::MaterialClassEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PLASTIC") &&
          strcmp(val.c_str(), "METAL") &&
          strcmp(val.c_str(), "WOOD") &&
          strcmp(val.c_str(), "STONE") &&
          strcmp(val.c_str(), "RUBBER") &&
          strcmp(val.c_str(), "COMPOSITE") &&
          strcmp(val.c_str(), "FOAM") &&
          strcmp(val.c_str(), "CERAMIC") &&
          strcmp(val.c_str(), "GLASS"));
}

void MaterialClassEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "MaterialClassEnumType");
}

void MaterialClassEnumType::printSelf(FILE * outFile)
{
  if (MaterialClassEnumTypeIsBad())
    {
      fprintf(stderr, "bad MaterialClassEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void MaterialClassEnumType::oPrintSelf(FILE * outFile)
{
  if (MaterialClassEnumTypeIsBad())
    {
      fprintf(stderr, "bad MaterialClassEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class MaterialModifierEnumType

*/

MaterialModifierEnumType::MaterialModifierEnumType() :
  XmlNMTOKEN()
{
}

MaterialModifierEnumType::MaterialModifierEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "REGARDLESS") &&
           strcmp(val.c_str(), "LEAST") &&
           strcmp(val.c_str(), "MAXIMUM") &&
           strcmp(val.c_str(), "LEAST_RPR") &&
           strcmp(val.c_str(), "MAXIMUM_RPR") &&
           strcmp(val.c_str(), "NONE"));
}

MaterialModifierEnumType::~MaterialModifierEnumType() {}

bool MaterialModifierEnumType::MaterialModifierEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "REGARDLESS") &&
          strcmp(val.c_str(), "LEAST") &&
          strcmp(val.c_str(), "MAXIMUM") &&
          strcmp(val.c_str(), "LEAST_RPR") &&
          strcmp(val.c_str(), "MAXIMUM_RPR") &&
          strcmp(val.c_str(), "NONE"));
}

void MaterialModifierEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "MaterialModifierEnumType");
}

void MaterialModifierEnumType::printSelf(FILE * outFile)
{
  if (MaterialModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad MaterialModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void MaterialModifierEnumType::oPrintSelf(FILE * outFile)
{
  if (MaterialModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad MaterialModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class MaterialType

*/

MaterialType::MaterialType()
{
  Index = 0;
  MaterialName = 0;
  Attributes = 0;
  MaterialType_1016 = 0;
  Description = 0;
  MassDensity = 0;
  PoissonsRatio = 0;
  YoungsModulus = 0;
  UltimateTensileStress = 0;
  CompressiveYieldStress = 0;
  TensileYieldStress = 0;
  ThermalExpansion = 0;
  SpecificHeatCapacity = 0;
  ThermalConductivity = 0;
}

MaterialType::MaterialType(
 AttributesType * AttributesIn,
 MaterialType_1016_Type * MaterialType_1016In,
 XmlString * DescriptionIn,
 XmlDouble * MassDensityIn,
 XmlDouble * PoissonsRatioIn,
 XmlDouble * YoungsModulusIn,
 XmlDouble * UltimateTensileStressIn,
 XmlDouble * CompressiveYieldStressIn,
 XmlDouble * TensileYieldStressIn,
 XmlDouble * ThermalExpansionIn,
 XmlDouble * SpecificHeatCapacityIn,
 XmlDouble * ThermalConductivityIn)
{
  Index = 0;
  MaterialName = 0;
  Attributes = AttributesIn;
  MaterialType_1016 = MaterialType_1016In;
  Description = DescriptionIn;
  MassDensity = MassDensityIn;
  PoissonsRatio = PoissonsRatioIn;
  YoungsModulus = YoungsModulusIn;
  UltimateTensileStress = UltimateTensileStressIn;
  CompressiveYieldStress = CompressiveYieldStressIn;
  TensileYieldStress = TensileYieldStressIn;
  ThermalExpansion = ThermalExpansionIn;
  SpecificHeatCapacity = SpecificHeatCapacityIn;
  ThermalConductivity = ThermalConductivityIn;
}

MaterialType::MaterialType(
 NaturalType * IndexIn,
 XmlToken * MaterialNameIn,
 AttributesType * AttributesIn,
 MaterialType_1016_Type * MaterialType_1016In,
 XmlString * DescriptionIn,
 XmlDouble * MassDensityIn,
 XmlDouble * PoissonsRatioIn,
 XmlDouble * YoungsModulusIn,
 XmlDouble * UltimateTensileStressIn,
 XmlDouble * CompressiveYieldStressIn,
 XmlDouble * TensileYieldStressIn,
 XmlDouble * ThermalExpansionIn,
 XmlDouble * SpecificHeatCapacityIn,
 XmlDouble * ThermalConductivityIn)
{
  Index = IndexIn;
  MaterialName = MaterialNameIn;
  Attributes = AttributesIn;
  MaterialType_1016 = MaterialType_1016In;
  Description = DescriptionIn;
  MassDensity = MassDensityIn;
  PoissonsRatio = PoissonsRatioIn;
  YoungsModulus = YoungsModulusIn;
  UltimateTensileStress = UltimateTensileStressIn;
  CompressiveYieldStress = CompressiveYieldStressIn;
  TensileYieldStress = TensileYieldStressIn;
  ThermalExpansion = ThermalExpansionIn;
  SpecificHeatCapacity = SpecificHeatCapacityIn;
  ThermalConductivity = ThermalConductivityIn;
}

MaterialType::~MaterialType()
{
  #ifndef NODESTRUCT
  delete Index;
  delete MaterialName;
  delete Attributes;
  delete MaterialType_1016;
  delete Description;
  delete MassDensity;
  delete PoissonsRatio;
  delete YoungsModulus;
  delete UltimateTensileStress;
  delete CompressiveYieldStress;
  delete TensileYieldStress;
  delete ThermalExpansion;
  delete SpecificHeatCapacity;
  delete ThermalConductivity;
  #endif
}

void MaterialType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (Index)
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
      fprintf(outFile, "Index=\"");
      Index->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"Index\" missing\n");
      exit(1);
    }
  if (MaterialName)
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
      fprintf(outFile, "MaterialName=\"");
      MaterialName->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"MaterialName\" missing\n");
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
  if (MaterialType_1016)
    {
  MaterialType_1016->printSelf(outFile);
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (MassDensity)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassDensity");
      MassDensity->printSelf(outFile);
      fprintf(outFile, "</MassDensity>\n");
    }
  if (PoissonsRatio)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PoissonsRatio");
      PoissonsRatio->printSelf(outFile);
      fprintf(outFile, "</PoissonsRatio>\n");
    }
  if (YoungsModulus)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<YoungsModulus");
      YoungsModulus->printSelf(outFile);
      fprintf(outFile, "</YoungsModulus>\n");
    }
  if (UltimateTensileStress)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UltimateTensileStress");
      UltimateTensileStress->printSelf(outFile);
      fprintf(outFile, "</UltimateTensileStress>\n");
    }
  if (CompressiveYieldStress)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CompressiveYieldStress");
      CompressiveYieldStress->printSelf(outFile);
      fprintf(outFile, "</CompressiveYieldStress>\n");
    }
  if (TensileYieldStress)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TensileYieldStress");
      TensileYieldStress->printSelf(outFile);
      fprintf(outFile, "</TensileYieldStress>\n");
    }
  if (ThermalExpansion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThermalExpansion");
      ThermalExpansion->printSelf(outFile);
      fprintf(outFile, "</ThermalExpansion>\n");
    }
  if (SpecificHeatCapacity)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpecificHeatCapacity");
      SpecificHeatCapacity->printSelf(outFile);
      fprintf(outFile, "</SpecificHeatCapacity>\n");
    }
  if (ThermalConductivity)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThermalConductivity");
      ThermalConductivity->printSelf(outFile);
      fprintf(outFile, "</ThermalConductivity>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool MaterialType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "Index")
        {
          NaturalType * IndexVal;
          if (this->Index)
            {
              fprintf(stderr, "two values for Index in MaterialType\n");
              returnValue = true;
              break;
            }
          IndexVal = new NaturalType(decl->getval().c_str());
          if (IndexVal->getbad())
            {
              delete IndexVal;
              fprintf(stderr, "bad value %s for Index in MaterialType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->Index = IndexVal;
        }
      else if (decl->getname() == "MaterialName")
        {
          XmlToken * MaterialNameVal;
          if (this->MaterialName)
            {
              fprintf(stderr, "two values for MaterialName in MaterialType\n");
              returnValue = true;
              break;
            }
          MaterialNameVal = new XmlToken(decl->getval().c_str());
          if (MaterialNameVal->getbad())
            {
              delete MaterialNameVal;
              fprintf(stderr, "bad value %s for MaterialName in MaterialType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->MaterialName = MaterialNameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MaterialType\n");
          returnValue = true;
          break;
        }
    }
  if (this->Index == 0)
    {
      fprintf(stderr, "required attribute \"Index\" missing in MaterialType\n");
      returnValue = true;
    }
  if (this->MaterialName == 0)
    {
      fprintf(stderr, "required attribute \"MaterialName\" missing in MaterialType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->Index;
      this->Index = 0;
      delete this->MaterialName;
      this->MaterialName = 0;
    }
  return returnValue;
}

NaturalType * MaterialType::getIndex()
{return Index;}

void MaterialType::setIndex(NaturalType * IndexIn)
{Index = IndexIn;}

XmlToken * MaterialType::getMaterialName()
{return MaterialName;}

void MaterialType::setMaterialName(XmlToken * MaterialNameIn)
{MaterialName = MaterialNameIn;}

AttributesType * MaterialType::getAttributes()
{return Attributes;}

void MaterialType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

MaterialType_1016_Type * MaterialType::getMaterialType_1016()
{return MaterialType_1016;}

void MaterialType::setMaterialType_1016(MaterialType_1016_Type * MaterialType_1016In)
{MaterialType_1016 = MaterialType_1016In;}

XmlString * MaterialType::getDescription()
{return Description;}

void MaterialType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

XmlDouble * MaterialType::getMassDensity()
{return MassDensity;}

void MaterialType::setMassDensity(XmlDouble * MassDensityIn)
{MassDensity = MassDensityIn;}

XmlDouble * MaterialType::getPoissonsRatio()
{return PoissonsRatio;}

void MaterialType::setPoissonsRatio(XmlDouble * PoissonsRatioIn)
{PoissonsRatio = PoissonsRatioIn;}

XmlDouble * MaterialType::getYoungsModulus()
{return YoungsModulus;}

void MaterialType::setYoungsModulus(XmlDouble * YoungsModulusIn)
{YoungsModulus = YoungsModulusIn;}

XmlDouble * MaterialType::getUltimateTensileStress()
{return UltimateTensileStress;}

void MaterialType::setUltimateTensileStress(XmlDouble * UltimateTensileStressIn)
{UltimateTensileStress = UltimateTensileStressIn;}

XmlDouble * MaterialType::getCompressiveYieldStress()
{return CompressiveYieldStress;}

void MaterialType::setCompressiveYieldStress(XmlDouble * CompressiveYieldStressIn)
{CompressiveYieldStress = CompressiveYieldStressIn;}

XmlDouble * MaterialType::getTensileYieldStress()
{return TensileYieldStress;}

void MaterialType::setTensileYieldStress(XmlDouble * TensileYieldStressIn)
{TensileYieldStress = TensileYieldStressIn;}

XmlDouble * MaterialType::getThermalExpansion()
{return ThermalExpansion;}

void MaterialType::setThermalExpansion(XmlDouble * ThermalExpansionIn)
{ThermalExpansion = ThermalExpansionIn;}

XmlDouble * MaterialType::getSpecificHeatCapacity()
{return SpecificHeatCapacity;}

void MaterialType::setSpecificHeatCapacity(XmlDouble * SpecificHeatCapacityIn)
{SpecificHeatCapacity = SpecificHeatCapacityIn;}

XmlDouble * MaterialType::getThermalConductivity()
{return ThermalConductivity;}

void MaterialType::setThermalConductivity(XmlDouble * ThermalConductivityIn)
{ThermalConductivity = ThermalConductivityIn;}

/* ***************************************************************** */

/* class MaterialTypeLisd

*/

MaterialTypeLisd::MaterialTypeLisd() {}

MaterialTypeLisd::MaterialTypeLisd(MaterialType * aMaterialType)
{
  push_back(aMaterialType);
}

MaterialTypeLisd::~MaterialTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MaterialType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MaterialTypeLisd::printSelf(FILE * outFile)
{
  std::list<MaterialType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class MaterialsType

*/

MaterialsType::MaterialsType()
{
  n = 0;
  Material = 0;
}

MaterialsType::MaterialsType(
 MaterialTypeLisd * MaterialIn)
{
  n = 0;
  Material = MaterialIn;
}

MaterialsType::MaterialsType(
 NaturalType * nIn,
 MaterialTypeLisd * MaterialIn)
{
  n = nIn;
  Material = MaterialIn;
}

MaterialsType::~MaterialsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Material;
  #endif
}

void MaterialsType::printSelf(FILE * outFile)
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
    if (!Material)
      {
        fprintf(stderr, "Material list is missing\n");
        exit(1);
      }
    if (Material->size() == 0)
      {
        fprintf(stderr, "Material list is empty\n");
        exit(1);
      }
    if (Material->size() < 1)
      {
        fprintf(stderr,
                "size of Material list (%d) less than minimum required (1)\n",
                (int)Material->size());
        exit(1);
      }
    std::list<MaterialType *>::iterator iter;
    for (iter = Material->begin();
         iter != Material->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Material");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Material>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool MaterialsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in MaterialsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in MaterialsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MaterialsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in MaterialsType\n");
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

NaturalType * MaterialsType::getn()
{return n;}

void MaterialsType::setn(NaturalType * nIn)
{n = nIn;}

MaterialTypeLisd * MaterialsType::getMaterial()
{return Material;}

void MaterialsType::setMaterial(MaterialTypeLisd * MaterialIn)
{Material = MaterialIn;}

/* ***************************************************************** */

/* class MeasurePointNominalType

*/

MeasurePointNominalType::MeasurePointNominalType() :
  PointWithNormalBaseType()
{
  MeasurementDeviceId = 0;
  SensorId = 0;
  TipId = 0;
}

MeasurePointNominalType::MeasurePointNominalType(
 PointType * PointIn,
 UnitVectorType * NormalIn,
 QIFReferenceType * MeasurementDeviceIdIn,
 QIFReferenceType * SensorIdIn,
 QIFReferenceType * TipIdIn) :
  PointWithNormalBaseType(
    PointIn,
    NormalIn)
{
  MeasurementDeviceId = MeasurementDeviceIdIn;
  SensorId = SensorIdIn;
  TipId = TipIdIn;
}

MeasurePointNominalType::MeasurePointNominalType(
 QIFIdType * idIn,
 PointType * PointIn,
 UnitVectorType * NormalIn,
 QIFReferenceType * MeasurementDeviceIdIn,
 QIFReferenceType * SensorIdIn,
 QIFReferenceType * TipIdIn) :
  PointWithNormalBaseType(
    idIn,
    PointIn,
    NormalIn)
{
  MeasurementDeviceId = MeasurementDeviceIdIn;
  SensorId = SensorIdIn;
  TipId = TipIdIn;
}

MeasurePointNominalType::~MeasurePointNominalType()
{
  #ifndef NODESTRUCT
  delete MeasurementDeviceId;
  delete SensorId;
  delete TipId;
  #endif
}

void MeasurePointNominalType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  fprintf(outFile, "</Point>\n");
  if (Normal)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Normal");
      Normal->printSelf(outFile);
      fprintf(outFile, "</Normal>\n");
    }
  if (MeasurementDeviceId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceId");
      MeasurementDeviceId->printSelf(outFile);
      fprintf(outFile, "</MeasurementDeviceId>\n");
    }
  if (SensorId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SensorId");
      SensorId->printSelf(outFile);
      fprintf(outFile, "</SensorId>\n");
    }
  if (TipId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TipId");
      TipId->printSelf(outFile);
      fprintf(outFile, "</TipId>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool MeasurePointNominalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in MeasurePointNominalType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MeasurePointNominalType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasurePointNominalType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in MeasurePointNominalType\n");
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

QIFReferenceType * MeasurePointNominalType::getMeasurementDeviceId()
{return MeasurementDeviceId;}

void MeasurePointNominalType::setMeasurementDeviceId(QIFReferenceType * MeasurementDeviceIdIn)
{MeasurementDeviceId = MeasurementDeviceIdIn;}

QIFReferenceType * MeasurePointNominalType::getSensorId()
{return SensorId;}

void MeasurePointNominalType::setSensorId(QIFReferenceType * SensorIdIn)
{SensorId = SensorIdIn;}

QIFReferenceType * MeasurePointNominalType::getTipId()
{return TipId;}

void MeasurePointNominalType::setTipId(QIFReferenceType * TipIdIn)
{TipId = TipIdIn;}

/* ***************************************************************** */

/* class MeasurePointNominalTypeLisd

*/

MeasurePointNominalTypeLisd::MeasurePointNominalTypeLisd() {}

MeasurePointNominalTypeLisd::MeasurePointNominalTypeLisd(MeasurePointNominalType * aMeasurePointNominalType)
{
  push_back(aMeasurePointNominalType);
}

MeasurePointNominalTypeLisd::~MeasurePointNominalTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MeasurePointNominalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MeasurePointNominalTypeLisd::printSelf(FILE * outFile)
{
  std::list<MeasurePointNominalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class MeasuredDatumFeatureType

*/

MeasuredDatumFeatureType::MeasuredDatumFeatureType() :
  DatumFeatureBaseType()
{
  MaterialModifier = 0;
  SubstituteFeatureAlgorithm = 0;
}

MeasuredDatumFeatureType::MeasuredDatumFeatureType(
 QIFReferenceFullType * FeatureNominalIdIn,
 MaterialModifierEnumType * MaterialModifierIn,
 SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn) :
  DatumFeatureBaseType(
    FeatureNominalIdIn)
{
  MaterialModifier = MaterialModifierIn;
  SubstituteFeatureAlgorithm = SubstituteFeatureAlgorithmIn;
}

MeasuredDatumFeatureType::~MeasuredDatumFeatureType()
{
  #ifndef NODESTRUCT
  delete MaterialModifier;
  delete SubstituteFeatureAlgorithm;
  #endif
}

void MeasuredDatumFeatureType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureNominalId");
  FeatureNominalId->printSelf(outFile);
  fprintf(outFile, "</FeatureNominalId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<MaterialModifier");
  MaterialModifier->printSelf(outFile);
  fprintf(outFile, "</MaterialModifier>\n");
  if (SubstituteFeatureAlgorithm)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubstituteFeatureAlgorithm");
      SubstituteFeatureAlgorithm->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SubstituteFeatureAlgorithm>\n");
    }
  doSpaces(-INDENT, outFile);
}

MaterialModifierEnumType * MeasuredDatumFeatureType::getMaterialModifier()
{return MaterialModifier;}

void MeasuredDatumFeatureType::setMaterialModifier(MaterialModifierEnumType * MaterialModifierIn)
{MaterialModifier = MaterialModifierIn;}

SubstituteFeatureAlgorithmType * MeasuredDatumFeatureType::getSubstituteFeatureAlgorithm()
{return SubstituteFeatureAlgorithm;}

void MeasuredDatumFeatureType::setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn)
{SubstituteFeatureAlgorithm = SubstituteFeatureAlgorithmIn;}

/* ***************************************************************** */

/* class MeasuredPointWithNormalBaseType

*/

MeasuredPointWithNormalBaseType::MeasuredPointWithNormalBaseType()
{
  id = 0;
  Point = 0;
  Normal = 0;
}

MeasuredPointWithNormalBaseType::MeasuredPointWithNormalBaseType(
 MeasuredPointType * PointIn,
 MeasuredUnitVectorType * NormalIn)
{
  id = 0;
  Point = PointIn;
  Normal = NormalIn;
}

MeasuredPointWithNormalBaseType::MeasuredPointWithNormalBaseType(
 QIFIdType * idIn,
 MeasuredPointType * PointIn,
 MeasuredUnitVectorType * NormalIn)
{
  id = idIn;
  Point = PointIn;
  Normal = NormalIn;
}

MeasuredPointWithNormalBaseType::~MeasuredPointWithNormalBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Point;
  delete Normal;
  #endif
}

void MeasuredPointWithNormalBaseType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  fprintf(outFile, "</Point>\n");
  if (Normal)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Normal");
      Normal->printSelf(outFile);
      fprintf(outFile, "</Normal>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool MeasuredPointWithNormalBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in MeasuredPointWithNormalBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MeasuredPointWithNormalBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredPointWithNormalBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in MeasuredPointWithNormalBaseType\n");
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

QIFIdType * MeasuredPointWithNormalBaseType::getid()
{return id;}

void MeasuredPointWithNormalBaseType::setid(QIFIdType * idIn)
{id = idIn;}

MeasuredPointType * MeasuredPointWithNormalBaseType::getPoint()
{return Point;}

void MeasuredPointWithNormalBaseType::setPoint(MeasuredPointType * PointIn)
{Point = PointIn;}

MeasuredUnitVectorType * MeasuredPointWithNormalBaseType::getNormal()
{return Normal;}

void MeasuredPointWithNormalBaseType::setNormal(MeasuredUnitVectorType * NormalIn)
{Normal = NormalIn;}

/* ***************************************************************** */

/* class MeasurementDirectiveEnumType

*/

MeasurementDirectiveEnumType::MeasurementDirectiveEnumType() :
  XmlNMTOKEN()
{
}

MeasurementDirectiveEnumType::MeasurementDirectiveEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "MINIMUM") &&
           strcmp(val.c_str(), "MAXIMUM") &&
           strcmp(val.c_str(), "AVERAGE") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

MeasurementDirectiveEnumType::~MeasurementDirectiveEnumType() {}

bool MeasurementDirectiveEnumType::MeasurementDirectiveEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "MINIMUM") &&
          strcmp(val.c_str(), "MAXIMUM") &&
          strcmp(val.c_str(), "AVERAGE") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void MeasurementDirectiveEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasurementDirectiveEnumType");
}

void MeasurementDirectiveEnumType::printSelf(FILE * outFile)
{
  if (MeasurementDirectiveEnumTypeIsBad())
    {
      fprintf(stderr, "bad MeasurementDirectiveEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void MeasurementDirectiveEnumType::oPrintSelf(FILE * outFile)
{
  if (MeasurementDirectiveEnumTypeIsBad())
    {
      fprintf(stderr, "bad MeasurementDirectiveEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class MeasurementDirectiveType

*/

MeasurementDirectiveType::MeasurementDirectiveType()
{
  MeasurementDirectiveTypePair = 0;
}

MeasurementDirectiveType::MeasurementDirectiveType(
 MeasurementDirectiveTypeChoicePair * MeasurementDirectiveTypePairIn)
{
  MeasurementDirectiveTypePair = MeasurementDirectiveTypePairIn;
}

MeasurementDirectiveType::~MeasurementDirectiveType()
{
  #ifndef NODESTRUCT
  delete MeasurementDirectiveTypePair;
  #endif
}

void MeasurementDirectiveType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  MeasurementDirectiveTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

MeasurementDirectiveTypeChoicePair * MeasurementDirectiveType::getMeasurementDirectiveTypePair()
{return MeasurementDirectiveTypePair;}

void MeasurementDirectiveType::setMeasurementDirectiveTypePair(MeasurementDirectiveTypeChoicePair * MeasurementDirectiveTypePairIn)
{MeasurementDirectiveTypePair = MeasurementDirectiveTypePairIn;}
MeasurementDirectiveTypeChoicePair::MeasurementDirectiveTypeChoicePair() {}

MeasurementDirectiveTypeChoicePair::MeasurementDirectiveTypeChoicePair(
 whichOne MeasurementDirectiveTypeTypeIn,
 MeasurementDirectiveTypeVal MeasurementDirectiveTypeValueIn)
{
  MeasurementDirectiveTypeType = MeasurementDirectiveTypeTypeIn;
  MeasurementDirectiveTypeValue = MeasurementDirectiveTypeValueIn;
}

MeasurementDirectiveTypeChoicePair::~MeasurementDirectiveTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MeasurementDirectiveTypeType == MeasurementDirectiveEnumE)
    delete MeasurementDirectiveTypeValue.MeasurementDirectiveEnum;
  else if (MeasurementDirectiveTypeType == OtherMeasurementDirectiveE)
    delete MeasurementDirectiveTypeValue.OtherMeasurementDirective;
  #endif
}

void MeasurementDirectiveTypeChoicePair::printSelf(FILE * outFile)
{
  if (MeasurementDirectiveTypeType == MeasurementDirectiveEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDirectiveEnum");
      MeasurementDirectiveTypeValue.MeasurementDirectiveEnum->printSelf(outFile);
      fprintf(outFile, "</MeasurementDirectiveEnum>\n");
    }
  else if (MeasurementDirectiveTypeType == OtherMeasurementDirectiveE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherMeasurementDirective");
      MeasurementDirectiveTypeValue.OtherMeasurementDirective->printSelf(outFile);
      fprintf(outFile, "</OtherMeasurementDirective>\n");
    }
}

/* ***************************************************************** */

/* class MeasurementOffsetAlignmentOperationType

*/

MeasurementOffsetAlignmentOperationType::MeasurementOffsetAlignmentOperationType() :
  AlignmentOperationBaseType()
{
  n = 0;
  Origin = 0;
}

MeasurementOffsetAlignmentOperationType::MeasurementOffsetAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 MeasurementOriginOffsetTypeLisd * OriginIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  n = 0;
  Origin = OriginIn;
}

MeasurementOffsetAlignmentOperationType::MeasurementOffsetAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 NaturalType * nIn,
 MeasurementOriginOffsetTypeLisd * OriginIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  n = nIn;
  Origin = OriginIn;
}

MeasurementOffsetAlignmentOperationType::~MeasurementOffsetAlignmentOperationType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Origin;
  #endif
}

void MeasurementOffsetAlignmentOperationType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  {
    if (!Origin)
      {
        fprintf(stderr, "Origin list is missing\n");
        exit(1);
      }
    if (Origin->size() == 0)
      {
        fprintf(stderr, "Origin list is empty\n");
        exit(1);
      }
    if (Origin->size() > 3)
      {
        fprintf(stderr,
                "size of Origin list (%d) greater than maximum allowed (3)\n",
                (int)Origin->size());
        exit(1);
      }
    if (Origin->size() < 1)
      {
        fprintf(stderr,
                "size of Origin list (%d) less than minimum required (1)\n",
                (int)Origin->size());
        exit(1);
      }
    std::list<MeasurementOriginOffsetType *>::iterator iter;
    for (iter = Origin->begin();
         iter != Origin->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Origin");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Origin>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool MeasurementOffsetAlignmentOperationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in MeasurementOffsetAlignmentOperationType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in MeasurementOffsetAlignmentOperationType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasurementOffsetAlignmentOperationType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in MeasurementOffsetAlignmentOperationType\n");
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

NaturalType * MeasurementOffsetAlignmentOperationType::getn()
{return n;}

void MeasurementOffsetAlignmentOperationType::setn(NaturalType * nIn)
{n = nIn;}

MeasurementOriginOffsetTypeLisd * MeasurementOffsetAlignmentOperationType::getOrigin()
{return Origin;}

void MeasurementOffsetAlignmentOperationType::setOrigin(MeasurementOriginOffsetTypeLisd * OriginIn)
{Origin = OriginIn;}

/* ***************************************************************** */

/* class MeasurementOriginOffsetType

*/

MeasurementOriginOffsetType::MeasurementOriginOffsetType()
{
  OriginEntity = 0;
  OriginDirection = 0;
}

MeasurementOriginOffsetType::MeasurementOriginOffsetType(
 AlignmentFeatureType * OriginEntityIn,
 UnitVectorType * OriginDirectionIn)
{
  OriginEntity = OriginEntityIn;
  OriginDirection = OriginDirectionIn;
}

MeasurementOriginOffsetType::~MeasurementOriginOffsetType()
{
  #ifndef NODESTRUCT
  delete OriginEntity;
  delete OriginDirection;
  #endif
}

void MeasurementOriginOffsetType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<OriginEntity");
  OriginEntity->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</OriginEntity>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<OriginDirection");
  OriginDirection->printSelf(outFile);
  fprintf(outFile, "</OriginDirection>\n");
  doSpaces(-INDENT, outFile);
}

AlignmentFeatureType * MeasurementOriginOffsetType::getOriginEntity()
{return OriginEntity;}

void MeasurementOriginOffsetType::setOriginEntity(AlignmentFeatureType * OriginEntityIn)
{OriginEntity = OriginEntityIn;}

UnitVectorType * MeasurementOriginOffsetType::getOriginDirection()
{return OriginDirection;}

void MeasurementOriginOffsetType::setOriginDirection(UnitVectorType * OriginDirectionIn)
{OriginDirection = OriginDirectionIn;}

/* ***************************************************************** */

/* class MeasurementOriginOffsetTypeLisd

*/

MeasurementOriginOffsetTypeLisd::MeasurementOriginOffsetTypeLisd() {}

MeasurementOriginOffsetTypeLisd::MeasurementOriginOffsetTypeLisd(MeasurementOriginOffsetType * aMeasurementOriginOffsetType)
{
  push_back(aMeasurementOriginOffsetType);
}

MeasurementOriginOffsetTypeLisd::~MeasurementOriginOffsetTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MeasurementOriginOffsetType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MeasurementOriginOffsetTypeLisd::printSelf(FILE * outFile)
{
  std::list<MeasurementOriginOffsetType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ModifyingPlaneEnumType

*/

ModifyingPlaneEnumType::ModifyingPlaneEnumType() :
  XmlNMTOKEN()
{
}

ModifyingPlaneEnumType::ModifyingPlaneEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "PARALLEL") &&
           strcmp(val.c_str(), "PERPENDICULAR") &&
           strcmp(val.c_str(), "INCLINED"));
}

ModifyingPlaneEnumType::~ModifyingPlaneEnumType() {}

bool ModifyingPlaneEnumType::ModifyingPlaneEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PARALLEL") &&
          strcmp(val.c_str(), "PERPENDICULAR") &&
          strcmp(val.c_str(), "INCLINED"));
}

void ModifyingPlaneEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ModifyingPlaneEnumType");
}

void ModifyingPlaneEnumType::printSelf(FILE * outFile)
{
  if (ModifyingPlaneEnumTypeIsBad())
    {
      fprintf(stderr, "bad ModifyingPlaneEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ModifyingPlaneEnumType::oPrintSelf(FILE * outFile)
{
  if (ModifyingPlaneEnumTypeIsBad())
    {
      fprintf(stderr, "bad ModifyingPlaneEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class MovableDatumTargetDirectionType

*/

MovableDatumTargetDirectionType::MovableDatumTargetDirectionType()
{
  DatumTargetTranslationDirection = 0;
}

MovableDatumTargetDirectionType::MovableDatumTargetDirectionType(
 UnitVectorType * DatumTargetTranslationDirectionIn)
{
  DatumTargetTranslationDirection = DatumTargetTranslationDirectionIn;
}

MovableDatumTargetDirectionType::~MovableDatumTargetDirectionType()
{
  #ifndef NODESTRUCT
  delete DatumTargetTranslationDirection;
  #endif
}

void MovableDatumTargetDirectionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumTargetTranslationDirection");
  DatumTargetTranslationDirection->printSelf(outFile);
  fprintf(outFile, "</DatumTargetTranslationDirection>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorType * MovableDatumTargetDirectionType::getDatumTargetTranslationDirection()
{return DatumTargetTranslationDirection;}

void MovableDatumTargetDirectionType::setDatumTargetTranslationDirection(UnitVectorType * DatumTargetTranslationDirectionIn)
{DatumTargetTranslationDirection = DatumTargetTranslationDirectionIn;}

/* ***************************************************************** */

/* class MultiLeadThreadSpecificationType

*/

MultiLeadThreadSpecificationType::MultiLeadThreadSpecificationType() :
  ThreadSpecificationDetailedBaseType()
{
  ThreadPitch = 0;
  ThreadLeadDistance = 0;
  ThreadLeadStarts = 0;
}

MultiLeadThreadSpecificationType::MultiLeadThreadSpecificationType(
 LinearValueType * DiameterIn,
 ThreadSeriesType * ThreadSeriesIn,
 ThreadClassType * ThreadToleranceClassIn,
 ThreadClassType * CrestDiameterToleranceClassIn,
 XmlBoolean * LeftHandedIn,
 XmlBoolean * ModifiedThreadIn,
 LinearValueType * ThreadLengthEngagementIn,
 AttributesType * AttributesIn,
 LinearValueType * ThreadPitchIn,
 LinearValueType * ThreadLeadDistanceIn,
 NaturalType * ThreadLeadStartsIn) :
  ThreadSpecificationDetailedBaseType(
    DiameterIn,
    ThreadSeriesIn,
    ThreadToleranceClassIn,
    CrestDiameterToleranceClassIn,
    LeftHandedIn,
    ModifiedThreadIn,
    ThreadLengthEngagementIn,
    AttributesIn)
{
  ThreadPitch = ThreadPitchIn;
  ThreadLeadDistance = ThreadLeadDistanceIn;
  ThreadLeadStarts = ThreadLeadStartsIn;
}

MultiLeadThreadSpecificationType::MultiLeadThreadSpecificationType(
 QIFIdType * idIn,
 LinearValueType * DiameterIn,
 ThreadSeriesType * ThreadSeriesIn,
 ThreadClassType * ThreadToleranceClassIn,
 ThreadClassType * CrestDiameterToleranceClassIn,
 XmlBoolean * LeftHandedIn,
 XmlBoolean * ModifiedThreadIn,
 LinearValueType * ThreadLengthEngagementIn,
 AttributesType * AttributesIn,
 LinearValueType * ThreadPitchIn,
 LinearValueType * ThreadLeadDistanceIn,
 NaturalType * ThreadLeadStartsIn) :
  ThreadSpecificationDetailedBaseType(
    idIn,
    DiameterIn,
    ThreadSeriesIn,
    ThreadToleranceClassIn,
    CrestDiameterToleranceClassIn,
    LeftHandedIn,
    ModifiedThreadIn,
    ThreadLengthEngagementIn,
    AttributesIn)
{
  ThreadPitch = ThreadPitchIn;
  ThreadLeadDistance = ThreadLeadDistanceIn;
  ThreadLeadStarts = ThreadLeadStartsIn;
}

MultiLeadThreadSpecificationType::~MultiLeadThreadSpecificationType()
{
  #ifndef NODESTRUCT
  delete ThreadPitch;
  delete ThreadLeadDistance;
  delete ThreadLeadStarts;
  #endif
}

void MultiLeadThreadSpecificationType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadSeries");
  ThreadSeries->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ThreadSeries>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadToleranceClass");
  ThreadToleranceClass->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ThreadToleranceClass>\n");
  if (CrestDiameterToleranceClass)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CrestDiameterToleranceClass");
      CrestDiameterToleranceClass->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CrestDiameterToleranceClass>\n");
    }
  if (LeftHanded)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LeftHanded");
      LeftHanded->printSelf(outFile);
      fprintf(outFile, "</LeftHanded>\n");
    }
  if (ModifiedThread)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModifiedThread");
      ModifiedThread->printSelf(outFile);
      fprintf(outFile, "</ModifiedThread>\n");
    }
  if (ThreadLengthEngagement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThreadLengthEngagement");
      ThreadLengthEngagement->printSelf(outFile);
      fprintf(outFile, "</ThreadLengthEngagement>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadPitch");
  ThreadPitch->printSelf(outFile);
  fprintf(outFile, "</ThreadPitch>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadLeadDistance");
  ThreadLeadDistance->printSelf(outFile);
  fprintf(outFile, "</ThreadLeadDistance>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadLeadStarts");
  ThreadLeadStarts->printSelf(outFile);
  fprintf(outFile, "</ThreadLeadStarts>\n");
  doSpaces(-INDENT, outFile);
}

bool MultiLeadThreadSpecificationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in MultiLeadThreadSpecificationType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MultiLeadThreadSpecificationType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MultiLeadThreadSpecificationType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in MultiLeadThreadSpecificationType\n");
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

LinearValueType * MultiLeadThreadSpecificationType::getThreadPitch()
{return ThreadPitch;}

void MultiLeadThreadSpecificationType::setThreadPitch(LinearValueType * ThreadPitchIn)
{ThreadPitch = ThreadPitchIn;}

LinearValueType * MultiLeadThreadSpecificationType::getThreadLeadDistance()
{return ThreadLeadDistance;}

void MultiLeadThreadSpecificationType::setThreadLeadDistance(LinearValueType * ThreadLeadDistanceIn)
{ThreadLeadDistance = ThreadLeadDistanceIn;}

NaturalType * MultiLeadThreadSpecificationType::getThreadLeadStarts()
{return ThreadLeadStarts;}

void MultiLeadThreadSpecificationType::setThreadLeadStarts(NaturalType * ThreadLeadStartsIn)
{ThreadLeadStarts = ThreadLeadStartsIn;}

/* ***************************************************************** */

/* class NominalDatumFeatureType

*/

NominalDatumFeatureType::NominalDatumFeatureType() :
  DatumFeatureBaseType() {}

NominalDatumFeatureType::NominalDatumFeatureType(
 QIFReferenceFullType * FeatureNominalIdIn) :
  DatumFeatureBaseType(
    FeatureNominalIdIn)
{}

NominalDatumFeatureType::~NominalDatumFeatureType() {}

void NominalDatumFeatureType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureNominalId");
  FeatureNominalId->printSelf(outFile);
  fprintf(outFile, "</FeatureNominalId>\n");
  doSpaces(-INDENT, outFile);
}

/* ***************************************************************** */

/* class NominalOffsetAlignmentOperationType

*/

NominalOffsetAlignmentOperationType::NominalOffsetAlignmentOperationType() :
  AlignmentOperationBaseType()
{
  Offset = 0;
}

NominalOffsetAlignmentOperationType::NominalOffsetAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 VectorType * OffsetIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  Offset = OffsetIn;
}

NominalOffsetAlignmentOperationType::~NominalOffsetAlignmentOperationType()
{
  #ifndef NODESTRUCT
  delete Offset;
  #endif
}

void NominalOffsetAlignmentOperationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Offset");
  Offset->printSelf(outFile);
  fprintf(outFile, "</Offset>\n");
  doSpaces(-INDENT, outFile);
}

VectorType * NominalOffsetAlignmentOperationType::getOffset()
{return Offset;}

void NominalOffsetAlignmentOperationType::setOffset(VectorType * OffsetIn)
{Offset = OffsetIn;}

/* ***************************************************************** */

/* class NominalRotationAlignmentOperationType

*/

NominalRotationAlignmentOperationType::NominalRotationAlignmentOperationType() :
  AlignmentOperationBaseType()
{
  RotationAxis = 0;
  Angle = 0;
}

NominalRotationAlignmentOperationType::NominalRotationAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 UnitVectorType * RotationAxisIn,
 AngularValueType * AngleIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  RotationAxis = RotationAxisIn;
  Angle = AngleIn;
}

NominalRotationAlignmentOperationType::~NominalRotationAlignmentOperationType()
{
  #ifndef NODESTRUCT
  delete RotationAxis;
  delete Angle;
  #endif
}

void NominalRotationAlignmentOperationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<RotationAxis");
  RotationAxis->printSelf(outFile);
  fprintf(outFile, "</RotationAxis>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Angle");
  Angle->printSelf(outFile);
  fprintf(outFile, "</Angle>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorType * NominalRotationAlignmentOperationType::getRotationAxis()
{return RotationAxis;}

void NominalRotationAlignmentOperationType::setRotationAxis(UnitVectorType * RotationAxisIn)
{RotationAxis = RotationAxisIn;}

AngularValueType * NominalRotationAlignmentOperationType::getAngle()
{return Angle;}

void NominalRotationAlignmentOperationType::setAngle(AngularValueType * AngleIn)
{Angle = AngleIn;}

/* ***************************************************************** */

/* class NonToleranceEnumType

*/

NonToleranceEnumType::NonToleranceEnumType() :
  XmlNMTOKEN()
{
}

NonToleranceEnumType::NonToleranceEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "MEASURED") &&
           strcmp(val.c_str(), "SET"));
}

NonToleranceEnumType::~NonToleranceEnumType() {}

bool NonToleranceEnumType::NonToleranceEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "MEASURED") &&
          strcmp(val.c_str(), "SET"));
}

void NonToleranceEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "NonToleranceEnumType");
}

void NonToleranceEnumType::printSelf(FILE * outFile)
{
  if (NonToleranceEnumTypeIsBad())
    {
      fprintf(stderr, "bad NonToleranceEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void NonToleranceEnumType::oPrintSelf(FILE * outFile)
{
  if (NonToleranceEnumTypeIsBad())
    {
      fprintf(stderr, "bad NonToleranceEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class NotableEventType

*/

NotableEventType::NotableEventType() :
  EventBaseType()
{
  Active = 0;
}

NotableEventType::NotableEventType(
 XmlString * DescriptionIn,
 XmlBoolean * ActiveIn) :
  EventBaseType(
    DescriptionIn)
{
  Active = ActiveIn;
}

NotableEventType::NotableEventType(
 QIFIdType * idIn,
 XmlString * DescriptionIn,
 XmlBoolean * ActiveIn) :
  EventBaseType(
    idIn,
    DescriptionIn)
{
  Active = ActiveIn;
}

NotableEventType::~NotableEventType()
{
  #ifndef NODESTRUCT
  delete Active;
  #endif
}

void NotableEventType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Description");
  Description->printSelf(outFile);
  fprintf(outFile, "</Description>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Active");
  Active->printSelf(outFile);
  fprintf(outFile, "</Active>\n");
  doSpaces(-INDENT, outFile);
}

bool NotableEventType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in NotableEventType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in NotableEventType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NotableEventType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in NotableEventType\n");
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

XmlBoolean * NotableEventType::getActive()
{return Active;}

void NotableEventType::setActive(XmlBoolean * ActiveIn)
{Active = ActiveIn;}

/* ***************************************************************** */

/* class NotableEventTypeLisd

*/

NotableEventTypeLisd::NotableEventTypeLisd() {}

NotableEventTypeLisd::NotableEventTypeLisd(NotableEventType * aNotableEventType)
{
  push_back(aNotableEventType);
}

NotableEventTypeLisd::~NotableEventTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<NotableEventType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void NotableEventTypeLisd::printSelf(FILE * outFile)
{
  std::list<NotableEventType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class NotableEventsType

*/

NotableEventsType::NotableEventsType()
{
  n = 0;
  NotableEvent = 0;
}

NotableEventsType::NotableEventsType(
 NotableEventTypeLisd * NotableEventIn)
{
  n = 0;
  NotableEvent = NotableEventIn;
}

NotableEventsType::NotableEventsType(
 NaturalType * nIn,
 NotableEventTypeLisd * NotableEventIn)
{
  n = nIn;
  NotableEvent = NotableEventIn;
}

NotableEventsType::~NotableEventsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete NotableEvent;
  #endif
}

void NotableEventsType::printSelf(FILE * outFile)
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
    if (!NotableEvent)
      {
        fprintf(stderr, "NotableEvent list is missing\n");
        exit(1);
      }
    if (NotableEvent->size() == 0)
      {
        fprintf(stderr, "NotableEvent list is empty\n");
        exit(1);
      }
    if (NotableEvent->size() < 1)
      {
        fprintf(stderr,
                "size of NotableEvent list (%d) less than minimum required (1)\n",
                (int)NotableEvent->size());
        exit(1);
      }
    std::list<NotableEventType *>::iterator iter;
    for (iter = NotableEvent->begin();
         iter != NotableEvent->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<NotableEvent");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</NotableEvent>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool NotableEventsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in NotableEventsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in NotableEventsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NotableEventsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in NotableEventsType\n");
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

NaturalType * NotableEventsType::getn()
{return n;}

void NotableEventsType::setn(NaturalType * nIn)
{n = nIn;}

NotableEventTypeLisd * NotableEventsType::getNotableEvent()
{return NotableEvent;}

void NotableEventsType::setNotableEvent(NotableEventTypeLisd * NotableEventIn)
{NotableEvent = NotableEventIn;}

/* ***************************************************************** */

/* class NotedEventType

*/

NotedEventType::NotedEventType() :
  EventBaseType()
{
  SequenceNumber = 0;
  TimeOccurred = 0;
  NotableEventId = 0;
}

NotedEventType::NotedEventType(
 XmlString * DescriptionIn,
 NaturalType * SequenceNumberIn,
 XmlDateTime * TimeOccurredIn,
 QIFReferenceType * NotableEventIdIn) :
  EventBaseType(
    DescriptionIn)
{
  SequenceNumber = SequenceNumberIn;
  TimeOccurred = TimeOccurredIn;
  NotableEventId = NotableEventIdIn;
}

NotedEventType::NotedEventType(
 QIFIdType * idIn,
 XmlString * DescriptionIn,
 NaturalType * SequenceNumberIn,
 XmlDateTime * TimeOccurredIn,
 QIFReferenceType * NotableEventIdIn) :
  EventBaseType(
    idIn,
    DescriptionIn)
{
  SequenceNumber = SequenceNumberIn;
  TimeOccurred = TimeOccurredIn;
  NotableEventId = NotableEventIdIn;
}

NotedEventType::~NotedEventType()
{
  #ifndef NODESTRUCT
  delete SequenceNumber;
  delete TimeOccurred;
  delete NotableEventId;
  #endif
}

void NotedEventType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Description");
  Description->printSelf(outFile);
  fprintf(outFile, "</Description>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (TimeOccurred)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeOccurred");
      TimeOccurred->printSelf(outFile);
      fprintf(outFile, "</TimeOccurred>\n");
    }
  if (NotableEventId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NotableEventId");
      NotableEventId->printSelf(outFile);
      fprintf(outFile, "</NotableEventId>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool NotedEventType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in NotedEventType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in NotedEventType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NotedEventType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in NotedEventType\n");
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

NaturalType * NotedEventType::getSequenceNumber()
{return SequenceNumber;}

void NotedEventType::setSequenceNumber(NaturalType * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

XmlDateTime * NotedEventType::getTimeOccurred()
{return TimeOccurred;}

void NotedEventType::setTimeOccurred(XmlDateTime * TimeOccurredIn)
{TimeOccurred = TimeOccurredIn;}

QIFReferenceType * NotedEventType::getNotableEventId()
{return NotableEventId;}

void NotedEventType::setNotableEventId(QIFReferenceType * NotableEventIdIn)
{NotableEventId = NotableEventIdIn;}

/* ***************************************************************** */

/* class NotedEventTypeLisd

*/

NotedEventTypeLisd::NotedEventTypeLisd() {}

NotedEventTypeLisd::NotedEventTypeLisd(NotedEventType * aNotedEventType)
{
  push_back(aNotedEventType);
}

NotedEventTypeLisd::~NotedEventTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<NotedEventType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void NotedEventTypeLisd::printSelf(FILE * outFile)
{
  std::list<NotedEventType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class NotedEventsType

*/

NotedEventsType::NotedEventsType()
{
  n = 0;
  NotedEvent = 0;
}

NotedEventsType::NotedEventsType(
 NotedEventTypeLisd * NotedEventIn)
{
  n = 0;
  NotedEvent = NotedEventIn;
}

NotedEventsType::NotedEventsType(
 NaturalType * nIn,
 NotedEventTypeLisd * NotedEventIn)
{
  n = nIn;
  NotedEvent = NotedEventIn;
}

NotedEventsType::~NotedEventsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete NotedEvent;
  #endif
}

void NotedEventsType::printSelf(FILE * outFile)
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
    if (!NotedEvent)
      {
        fprintf(stderr, "NotedEvent list is missing\n");
        exit(1);
      }
    if (NotedEvent->size() == 0)
      {
        fprintf(stderr, "NotedEvent list is empty\n");
        exit(1);
      }
    if (NotedEvent->size() < 1)
      {
        fprintf(stderr,
                "size of NotedEvent list (%d) less than minimum required (1)\n",
                (int)NotedEvent->size());
        exit(1);
      }
    std::list<NotedEventType *>::iterator iter;
    for (iter = NotedEvent->begin();
         iter != NotedEvent->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<NotedEvent");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</NotedEvent>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool NotedEventsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in NotedEventsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in NotedEventsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NotedEventsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in NotedEventsType\n");
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

NaturalType * NotedEventsType::getn()
{return n;}

void NotedEventsType::setn(NaturalType * nIn)
{n = nIn;}

NotedEventTypeLisd * NotedEventsType::getNotedEvent()
{return NotedEvent;}

void NotedEventsType::setNotedEvent(NotedEventTypeLisd * NotedEventIn)
{NotedEvent = NotedEventIn;}

/* ***************************************************************** */

/* class OrganizationType

*/

OrganizationType::OrganizationType()
{
  Name = 0;
  Address = 0;
  Attributes = 0;
}

OrganizationType::OrganizationType(
 XmlToken * NameIn,
 PhysicalAddressType * AddressIn,
 AttributesType * AttributesIn)
{
  Name = NameIn;
  Address = AddressIn;
  Attributes = AttributesIn;
}

OrganizationType::~OrganizationType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete Address;
  delete Attributes;
  #endif
}

void OrganizationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  if (Address)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Address");
      Address->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Address>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * OrganizationType::getName()
{return Name;}

void OrganizationType::setName(XmlToken * NameIn)
{Name = NameIn;}

PhysicalAddressType * OrganizationType::getAddress()
{return Address;}

void OrganizationType::setAddress(PhysicalAddressType * AddressIn)
{Address = AddressIn;}

AttributesType * OrganizationType::getAttributes()
{return Attributes;}

void OrganizationType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class OrientationPlaneType

*/

OrientationPlaneType::OrientationPlaneType()
{
  OrientationPlaneEnum = 0;
  DatumDefinitionId = 0;
}

OrientationPlaneType::OrientationPlaneType(
 ModifyingPlaneEnumType * OrientationPlaneEnumIn,
 QIFReferenceFullType * DatumDefinitionIdIn)
{
  OrientationPlaneEnum = OrientationPlaneEnumIn;
  DatumDefinitionId = DatumDefinitionIdIn;
}

OrientationPlaneType::~OrientationPlaneType()
{
  #ifndef NODESTRUCT
  delete OrientationPlaneEnum;
  delete DatumDefinitionId;
  #endif
}

void OrientationPlaneType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<OrientationPlaneEnum");
  OrientationPlaneEnum->printSelf(outFile);
  fprintf(outFile, "</OrientationPlaneEnum>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumDefinitionId");
  DatumDefinitionId->printSelf(outFile);
  fprintf(outFile, "</DatumDefinitionId>\n");
  doSpaces(-INDENT, outFile);
}

ModifyingPlaneEnumType * OrientationPlaneType::getOrientationPlaneEnum()
{return OrientationPlaneEnum;}

void OrientationPlaneType::setOrientationPlaneEnum(ModifyingPlaneEnumType * OrientationPlaneEnumIn)
{OrientationPlaneEnum = OrientationPlaneEnumIn;}

QIFReferenceFullType * OrientationPlaneType::getDatumDefinitionId()
{return DatumDefinitionId;}

void OrientationPlaneType::setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn)
{DatumDefinitionId = DatumDefinitionIdIn;}

/* ***************************************************************** */

/* class PhysicalAddressType

*/

PhysicalAddressType::PhysicalAddressType()
{
  Description = 0;
  InternalLocation = 0;
  StreetNumber = 0;
  Street = 0;
  PostalBox = 0;
  Town = 0;
  Region = 0;
  PostalCode = 0;
  Country = 0;
  FacsimileNumber = 0;
  TelephoneNumber = 0;
  ElectronicMailAddress = 0;
  TelexNumber = 0;
}

PhysicalAddressType::PhysicalAddressType(
 AddressDescriptionType * DescriptionIn,
 XmlToken * InternalLocationIn,
 XmlToken * StreetNumberIn,
 XmlToken * StreetIn,
 XmlToken * PostalBoxIn,
 XmlToken * TownIn,
 XmlToken * RegionIn,
 XmlToken * PostalCodeIn,
 XmlToken * CountryIn,
 XmlToken * FacsimileNumberIn,
 XmlToken * TelephoneNumberIn,
 XmlToken * ElectronicMailAddressIn,
 XmlToken * TelexNumberIn)
{
  Description = DescriptionIn;
  InternalLocation = InternalLocationIn;
  StreetNumber = StreetNumberIn;
  Street = StreetIn;
  PostalBox = PostalBoxIn;
  Town = TownIn;
  Region = RegionIn;
  PostalCode = PostalCodeIn;
  Country = CountryIn;
  FacsimileNumber = FacsimileNumberIn;
  TelephoneNumber = TelephoneNumberIn;
  ElectronicMailAddress = ElectronicMailAddressIn;
  TelexNumber = TelexNumberIn;
}

PhysicalAddressType::~PhysicalAddressType()
{
  #ifndef NODESTRUCT
  delete Description;
  delete InternalLocation;
  delete StreetNumber;
  delete Street;
  delete PostalBox;
  delete Town;
  delete Region;
  delete PostalCode;
  delete Country;
  delete FacsimileNumber;
  delete TelephoneNumber;
  delete ElectronicMailAddress;
  delete TelexNumber;
  #endif
}

void PhysicalAddressType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (InternalLocation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InternalLocation");
      InternalLocation->printSelf(outFile);
      fprintf(outFile, "</InternalLocation>\n");
    }
  if (StreetNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StreetNumber");
      StreetNumber->printSelf(outFile);
      fprintf(outFile, "</StreetNumber>\n");
    }
  if (Street)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Street");
      Street->printSelf(outFile);
      fprintf(outFile, "</Street>\n");
    }
  if (PostalBox)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PostalBox");
      PostalBox->printSelf(outFile);
      fprintf(outFile, "</PostalBox>\n");
    }
  if (Town)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Town");
      Town->printSelf(outFile);
      fprintf(outFile, "</Town>\n");
    }
  if (Region)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Region");
      Region->printSelf(outFile);
      fprintf(outFile, "</Region>\n");
    }
  if (PostalCode)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PostalCode");
      PostalCode->printSelf(outFile);
      fprintf(outFile, "</PostalCode>\n");
    }
  if (Country)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Country");
      Country->printSelf(outFile);
      fprintf(outFile, "</Country>\n");
    }
  if (FacsimileNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FacsimileNumber");
      FacsimileNumber->printSelf(outFile);
      fprintf(outFile, "</FacsimileNumber>\n");
    }
  if (TelephoneNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TelephoneNumber");
      TelephoneNumber->printSelf(outFile);
      fprintf(outFile, "</TelephoneNumber>\n");
    }
  if (ElectronicMailAddress)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ElectronicMailAddress");
      ElectronicMailAddress->printSelf(outFile);
      fprintf(outFile, "</ElectronicMailAddress>\n");
    }
  if (TelexNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TelexNumber");
      TelexNumber->printSelf(outFile);
      fprintf(outFile, "</TelexNumber>\n");
    }
  doSpaces(-INDENT, outFile);
}

AddressDescriptionType * PhysicalAddressType::getDescription()
{return Description;}

void PhysicalAddressType::setDescription(AddressDescriptionType * DescriptionIn)
{Description = DescriptionIn;}

XmlToken * PhysicalAddressType::getInternalLocation()
{return InternalLocation;}

void PhysicalAddressType::setInternalLocation(XmlToken * InternalLocationIn)
{InternalLocation = InternalLocationIn;}

XmlToken * PhysicalAddressType::getStreetNumber()
{return StreetNumber;}

void PhysicalAddressType::setStreetNumber(XmlToken * StreetNumberIn)
{StreetNumber = StreetNumberIn;}

XmlToken * PhysicalAddressType::getStreet()
{return Street;}

void PhysicalAddressType::setStreet(XmlToken * StreetIn)
{Street = StreetIn;}

XmlToken * PhysicalAddressType::getPostalBox()
{return PostalBox;}

void PhysicalAddressType::setPostalBox(XmlToken * PostalBoxIn)
{PostalBox = PostalBoxIn;}

XmlToken * PhysicalAddressType::getTown()
{return Town;}

void PhysicalAddressType::setTown(XmlToken * TownIn)
{Town = TownIn;}

XmlToken * PhysicalAddressType::getRegion()
{return Region;}

void PhysicalAddressType::setRegion(XmlToken * RegionIn)
{Region = RegionIn;}

XmlToken * PhysicalAddressType::getPostalCode()
{return PostalCode;}

void PhysicalAddressType::setPostalCode(XmlToken * PostalCodeIn)
{PostalCode = PostalCodeIn;}

XmlToken * PhysicalAddressType::getCountry()
{return Country;}

void PhysicalAddressType::setCountry(XmlToken * CountryIn)
{Country = CountryIn;}

XmlToken * PhysicalAddressType::getFacsimileNumber()
{return FacsimileNumber;}

void PhysicalAddressType::setFacsimileNumber(XmlToken * FacsimileNumberIn)
{FacsimileNumber = FacsimileNumberIn;}

XmlToken * PhysicalAddressType::getTelephoneNumber()
{return TelephoneNumber;}

void PhysicalAddressType::setTelephoneNumber(XmlToken * TelephoneNumberIn)
{TelephoneNumber = TelephoneNumberIn;}

XmlToken * PhysicalAddressType::getElectronicMailAddress()
{return ElectronicMailAddress;}

void PhysicalAddressType::setElectronicMailAddress(XmlToken * ElectronicMailAddressIn)
{ElectronicMailAddress = ElectronicMailAddressIn;}

XmlToken * PhysicalAddressType::getTelexNumber()
{return TelexNumber;}

void PhysicalAddressType::setTelexNumber(XmlToken * TelexNumberIn)
{TelexNumber = TelexNumberIn;}

/* ***************************************************************** */

/* class PointSetReferenceBaseType

*/

PointSetReferenceBaseType::PointSetReferenceBaseType() :
  QIFReferenceType()
{
  val = 0;
}

PointSetReferenceBaseType::PointSetReferenceBaseType(
 const char * valStringIn) :
  QIFReferenceType(valStringIn)
{
}

PointSetReferenceBaseType::PointSetReferenceBaseType(
 QIFReferenceSimpleType * xIdIn,
 const char * valStringIn) :
  QIFReferenceType(valStringIn)
{
  xId = xIdIn;
}

PointSetReferenceBaseType::~PointSetReferenceBaseType() {}

void PointSetReferenceBaseType::printName(FILE * outFile)
{
  fprintf(outFile, "PointSetReferenceBaseType");
}

void PointSetReferenceBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  PointSetReferenceBaseTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "PointSetReferenceBaseTypeIsBad failed\n");
      exit(1);
    }
  if (xId)
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
      fprintf(outFile, "xId=\"");
      xId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlUnsignedInt::printSelf(outFile);
}

bool PointSetReferenceBaseType::PointSetReferenceBaseTypeIsBad()
{
  QIFReferenceTypeIsBad();
  return bad;
}

bool PointSetReferenceBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "xId")
        {
          QIFReferenceSimpleType * xIdVal;
          if (this->xId)
            {
              fprintf(stderr, "two values for xId in PointSetReferenceBaseType\n");
              returnValue = true;
              break;
            }
          xIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (xIdVal->getbad())
            {
              delete xIdVal;
              fprintf(stderr, "bad value %s for xId in PointSetReferenceBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xId = xIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointSetReferenceBaseType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->xId;
      this->xId = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class PointSetReferenceBaseTypeLisd

*/

PointSetReferenceBaseTypeLisd::PointSetReferenceBaseTypeLisd() {}

PointSetReferenceBaseTypeLisd::PointSetReferenceBaseTypeLisd(PointSetReferenceBaseType * aPointSetReferenceBaseType)
{
  push_back(aPointSetReferenceBaseType);
}

PointSetReferenceBaseTypeLisd::~PointSetReferenceBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PointSetReferenceBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PointSetReferenceBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<PointSetReferenceBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class PointSetReferenceRangeType

*/

PointSetReferenceRangeType::PointSetReferenceRangeType() :
  PointSetReferenceBaseType()
{
  range = 0;
  val = 0;
}

PointSetReferenceRangeType::PointSetReferenceRangeType(
 const char * valStringIn) :
  PointSetReferenceBaseType(valStringIn)
{
  range = 0;
}

PointSetReferenceRangeType::PointSetReferenceRangeType(
 Natural2Type * rangeIn,
 QIFReferenceSimpleType * xIdIn,
 const char * valStringIn) :
  PointSetReferenceBaseType(valStringIn)
{
  range = rangeIn;
  xId = xIdIn;
}

PointSetReferenceRangeType::~PointSetReferenceRangeType()
{
  #ifndef NODESTRUCT
  delete range;
  #endif
}

void PointSetReferenceRangeType::printName(FILE * outFile)
{
  fprintf(outFile, "PointSetReferenceRangeType");
}

void PointSetReferenceRangeType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  PointSetReferenceRangeTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "PointSetReferenceRangeTypeIsBad failed\n");
      exit(1);
    }
  if (range)
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
      fprintf(outFile, "range=\"");
      range->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"range\" missing\n");
      exit(1);
    }
  if (xId)
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
      fprintf(outFile, "xId=\"");
      xId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlUnsignedInt::printSelf(outFile);
}

bool PointSetReferenceRangeType::PointSetReferenceRangeTypeIsBad()
{
  PointSetReferenceBaseTypeIsBad();
  return bad;
}

bool PointSetReferenceRangeType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "range")
        {
          Natural2Type * rangeVal;
          if (this->range)
            {
              fprintf(stderr, "two values for range in PointSetReferenceRangeType\n");
              returnValue = true;
              break;
            }
          rangeVal = new Natural2Type(decl->getval().c_str());
          if (rangeVal->getbad())
            {
              delete rangeVal;
              fprintf(stderr, "bad value %s for range in PointSetReferenceRangeType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->range = rangeVal;
        }
      else if (decl->getname() == "xId")
        {
          QIFReferenceSimpleType * xIdVal;
          if (this->xId)
            {
              fprintf(stderr, "two values for xId in PointSetReferenceRangeType\n");
              returnValue = true;
              break;
            }
          xIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (xIdVal->getbad())
            {
              delete xIdVal;
              fprintf(stderr, "bad value %s for xId in PointSetReferenceRangeType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xId = xIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointSetReferenceRangeType\n");
          returnValue = true;
          break;
        }
    }
  if (this->range == 0)
    {
      fprintf(stderr, "required attribute \"range\" missing in PointSetReferenceRangeType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->range;
      this->range = 0;
      delete this->xId;
      this->xId = 0;
    }
  return returnValue;
}

Natural2Type * PointSetReferenceRangeType::getrange()
{return range;}

void PointSetReferenceRangeType::setrange(Natural2Type * rangeIn)
{range = rangeIn;}

/* ***************************************************************** */

/* class PointSetReferenceSingleType

*/

PointSetReferenceSingleType::PointSetReferenceSingleType() :
  PointSetReferenceBaseType()
{
  index = 0;
  val = 0;
}

PointSetReferenceSingleType::PointSetReferenceSingleType(
 const char * valStringIn) :
  PointSetReferenceBaseType(valStringIn)
{
  index = 0;
}

PointSetReferenceSingleType::PointSetReferenceSingleType(
 NaturalType * indexIn,
 QIFReferenceSimpleType * xIdIn,
 const char * valStringIn) :
  PointSetReferenceBaseType(valStringIn)
{
  index = indexIn;
  xId = xIdIn;
}

PointSetReferenceSingleType::~PointSetReferenceSingleType()
{
  #ifndef NODESTRUCT
  delete index;
  #endif
}

void PointSetReferenceSingleType::printName(FILE * outFile)
{
  fprintf(outFile, "PointSetReferenceSingleType");
}

void PointSetReferenceSingleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  PointSetReferenceSingleTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "PointSetReferenceSingleTypeIsBad failed\n");
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
  if (xId)
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
      fprintf(outFile, "xId=\"");
      xId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlUnsignedInt::printSelf(outFile);
}

bool PointSetReferenceSingleType::PointSetReferenceSingleTypeIsBad()
{
  PointSetReferenceBaseTypeIsBad();
  return bad;
}

bool PointSetReferenceSingleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "index")
        {
          NaturalType * indexVal;
          if (this->index)
            {
              fprintf(stderr, "two values for index in PointSetReferenceSingleType\n");
              returnValue = true;
              break;
            }
          indexVal = new NaturalType(decl->getval().c_str());
          if (indexVal->getbad())
            {
              delete indexVal;
              fprintf(stderr, "bad value %s for index in PointSetReferenceSingleType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->index = indexVal;
        }
      else if (decl->getname() == "xId")
        {
          QIFReferenceSimpleType * xIdVal;
          if (this->xId)
            {
              fprintf(stderr, "two values for xId in PointSetReferenceSingleType\n");
              returnValue = true;
              break;
            }
          xIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (xIdVal->getbad())
            {
              delete xIdVal;
              fprintf(stderr, "bad value %s for xId in PointSetReferenceSingleType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xId = xIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointSetReferenceSingleType\n");
          returnValue = true;
          break;
        }
    }
  if (this->index == 0)
    {
      fprintf(stderr, "required attribute \"index\" missing in PointSetReferenceSingleType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->index;
      this->index = 0;
      delete this->xId;
      this->xId = 0;
    }
  return returnValue;
}

NaturalType * PointSetReferenceSingleType::getindex()
{return index;}

void PointSetReferenceSingleType::setindex(NaturalType * indexIn)
{index = indexIn;}

/* ***************************************************************** */

/* class PointSetReferenceWholeType

*/

PointSetReferenceWholeType::PointSetReferenceWholeType() :
  PointSetReferenceBaseType()
{
  val = 0;
}

PointSetReferenceWholeType::PointSetReferenceWholeType(
 const char * valStringIn) :
  PointSetReferenceBaseType(valStringIn)
{
}

PointSetReferenceWholeType::PointSetReferenceWholeType(
 QIFReferenceSimpleType * xIdIn,
 const char * valStringIn) :
  PointSetReferenceBaseType(valStringIn)
{
  xId = xIdIn;
}

PointSetReferenceWholeType::~PointSetReferenceWholeType() {}

void PointSetReferenceWholeType::printName(FILE * outFile)
{
  fprintf(outFile, "PointSetReferenceWholeType");
}

void PointSetReferenceWholeType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  PointSetReferenceWholeTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "PointSetReferenceWholeTypeIsBad failed\n");
      exit(1);
    }
  if (xId)
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
      fprintf(outFile, "xId=\"");
      xId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlUnsignedInt::printSelf(outFile);
}

bool PointSetReferenceWholeType::PointSetReferenceWholeTypeIsBad()
{
  PointSetReferenceBaseTypeIsBad();
  return bad;
}

bool PointSetReferenceWholeType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "xId")
        {
          QIFReferenceSimpleType * xIdVal;
          if (this->xId)
            {
              fprintf(stderr, "two values for xId in PointSetReferenceWholeType\n");
              returnValue = true;
              break;
            }
          xIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (xIdVal->getbad())
            {
              delete xIdVal;
              fprintf(stderr, "bad value %s for xId in PointSetReferenceWholeType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xId = xIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointSetReferenceWholeType\n");
          returnValue = true;
          break;
        }
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->xId;
      this->xId = 0;
    }
  return returnValue;
}

/* ***************************************************************** */

/* class PointWithNormalBaseType

*/

PointWithNormalBaseType::PointWithNormalBaseType()
{
  id = 0;
  Point = 0;
  Normal = 0;
}

PointWithNormalBaseType::PointWithNormalBaseType(
 PointType * PointIn,
 UnitVectorType * NormalIn)
{
  id = 0;
  Point = PointIn;
  Normal = NormalIn;
}

PointWithNormalBaseType::PointWithNormalBaseType(
 QIFIdType * idIn,
 PointType * PointIn,
 UnitVectorType * NormalIn)
{
  id = idIn;
  Point = PointIn;
  Normal = NormalIn;
}

PointWithNormalBaseType::~PointWithNormalBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Point;
  delete Normal;
  #endif
}

void PointWithNormalBaseType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  fprintf(outFile, "</Point>\n");
  if (Normal)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Normal");
      Normal->printSelf(outFile);
      fprintf(outFile, "</Normal>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool PointWithNormalBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in PointWithNormalBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in PointWithNormalBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointWithNormalBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in PointWithNormalBaseType\n");
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

QIFIdType * PointWithNormalBaseType::getid()
{return id;}

void PointWithNormalBaseType::setid(QIFIdType * idIn)
{id = idIn;}

PointType * PointWithNormalBaseType::getPoint()
{return Point;}

void PointWithNormalBaseType::setPoint(PointType * PointIn)
{Point = PointIn;}

UnitVectorType * PointWithNormalBaseType::getNormal()
{return Normal;}

void PointWithNormalBaseType::setNormal(UnitVectorType * NormalIn)
{Normal = NormalIn;}

/* ***************************************************************** */

/* class PrecedenceEnumType

*/

PrecedenceEnumType::PrecedenceEnumType() :
  XmlNMTOKEN()
{
}

PrecedenceEnumType::PrecedenceEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "PRIMARY") &&
           strcmp(val.c_str(), "SECONDARY") &&
           strcmp(val.c_str(), "TERTIARY") &&
           strcmp(val.c_str(), "QUATERNARY") &&
           strcmp(val.c_str(), "QUINARY") &&
           strcmp(val.c_str(), "SENARY"));
}

PrecedenceEnumType::~PrecedenceEnumType() {}

bool PrecedenceEnumType::PrecedenceEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PRIMARY") &&
          strcmp(val.c_str(), "SECONDARY") &&
          strcmp(val.c_str(), "TERTIARY") &&
          strcmp(val.c_str(), "QUATERNARY") &&
          strcmp(val.c_str(), "QUINARY") &&
          strcmp(val.c_str(), "SENARY"));
}

void PrecedenceEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "PrecedenceEnumType");
}

void PrecedenceEnumType::printSelf(FILE * outFile)
{
  if (PrecedenceEnumTypeIsBad())
    {
      fprintf(stderr, "bad PrecedenceEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void PrecedenceEnumType::oPrintSelf(FILE * outFile)
{
  if (PrecedenceEnumTypeIsBad())
    {
      fprintf(stderr, "bad PrecedenceEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class PrecedenceType

*/

PrecedenceType::PrecedenceType()
{
  PrecedenceTypePair = 0;
}

PrecedenceType::PrecedenceType(
 PrecedenceTypeChoicePair * PrecedenceTypePairIn)
{
  PrecedenceTypePair = PrecedenceTypePairIn;
}

PrecedenceType::~PrecedenceType()
{
  #ifndef NODESTRUCT
  delete PrecedenceTypePair;
  #endif
}

void PrecedenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  PrecedenceTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

PrecedenceTypeChoicePair * PrecedenceType::getPrecedenceTypePair()
{return PrecedenceTypePair;}

void PrecedenceType::setPrecedenceTypePair(PrecedenceTypeChoicePair * PrecedenceTypePairIn)
{PrecedenceTypePair = PrecedenceTypePairIn;}
PrecedenceTypeChoicePair::PrecedenceTypeChoicePair() {}

PrecedenceTypeChoicePair::PrecedenceTypeChoicePair(
 whichOne PrecedenceTypeTypeIn,
 PrecedenceTypeVal PrecedenceTypeValueIn)
{
  PrecedenceTypeType = PrecedenceTypeTypeIn;
  PrecedenceTypeValue = PrecedenceTypeValueIn;
}

PrecedenceTypeChoicePair::~PrecedenceTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PrecedenceTypeType == PrecedenceEnumE)
    delete PrecedenceTypeValue.PrecedenceEnum;
  else if (PrecedenceTypeType == OtherPrecedenceE)
    delete PrecedenceTypeValue.OtherPrecedence;
  #endif
}

void PrecedenceTypeChoicePair::printSelf(FILE * outFile)
{
  if (PrecedenceTypeType == PrecedenceEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PrecedenceEnum");
      PrecedenceTypeValue.PrecedenceEnum->printSelf(outFile);
      fprintf(outFile, "</PrecedenceEnum>\n");
    }
  else if (PrecedenceTypeType == OtherPrecedenceE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherPrecedence");
      PrecedenceTypeValue.OtherPrecedence->printSelf(outFile);
      fprintf(outFile, "</OtherPrecedence>\n");
    }
}

/* ***************************************************************** */

/* class PressureToleranceType

*/

PressureToleranceType::PressureToleranceType()
{
  PressureToleran_1017 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

PressureToleranceType::PressureToleranceType(
 PressureToleran_1017_Type * PressureToleran_1017In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  PressureToleran_1017 = PressureToleran_1017In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

PressureToleranceType::~PressureToleranceType()
{
  #ifndef NODESTRUCT
  delete PressureToleran_1017;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void PressureToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  PressureToleran_1017->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

PressureToleran_1017_Type * PressureToleranceType::getPressureToleran_1017()
{return PressureToleran_1017;}

void PressureToleranceType::setPressureToleran_1017(PressureToleran_1017_Type * PressureToleran_1017In)
{PressureToleran_1017 = PressureToleran_1017In;}

XmlBoolean * PressureToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void PressureToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * PressureToleranceType::getAttributes()
{return Attributes;}

void PressureToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class PrimaryAlignmentOperationType

*/

PrimaryAlignmentOperationType::PrimaryAlignmentOperationType() :
  AlignmentOperationBaseType()
{
  PrimaryEntity = 0;
  PrimaryAxis = 0;
}

PrimaryAlignmentOperationType::PrimaryAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 AlignmentFeatureType * PrimaryEntityIn,
 UnitVectorType * PrimaryAxisIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  PrimaryEntity = PrimaryEntityIn;
  PrimaryAxis = PrimaryAxisIn;
}

PrimaryAlignmentOperationType::~PrimaryAlignmentOperationType()
{
  #ifndef NODESTRUCT
  delete PrimaryEntity;
  delete PrimaryAxis;
  #endif
}

void PrimaryAlignmentOperationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<PrimaryEntity");
  PrimaryEntity->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</PrimaryEntity>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PrimaryAxis");
  PrimaryAxis->printSelf(outFile);
  fprintf(outFile, "</PrimaryAxis>\n");
  doSpaces(-INDENT, outFile);
}

AlignmentFeatureType * PrimaryAlignmentOperationType::getPrimaryEntity()
{return PrimaryEntity;}

void PrimaryAlignmentOperationType::setPrimaryEntity(AlignmentFeatureType * PrimaryEntityIn)
{PrimaryEntity = PrimaryEntityIn;}

UnitVectorType * PrimaryAlignmentOperationType::getPrimaryAxis()
{return PrimaryAxis;}

void PrimaryAlignmentOperationType::setPrimaryAxis(UnitVectorType * PrimaryAxisIn)
{PrimaryAxis = PrimaryAxisIn;}

/* ***************************************************************** */

/* class ReducedDatumEnumType

*/

ReducedDatumEnumType::ReducedDatumEnumType() :
  XmlNMTOKEN()
{
}

ReducedDatumEnumType::ReducedDatumEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "PT") &&
           strcmp(val.c_str(), "SL") &&
           strcmp(val.c_str(), "PL"));
}

ReducedDatumEnumType::~ReducedDatumEnumType() {}

bool ReducedDatumEnumType::ReducedDatumEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PT") &&
          strcmp(val.c_str(), "SL") &&
          strcmp(val.c_str(), "PL"));
}

void ReducedDatumEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ReducedDatumEnumType");
}

void ReducedDatumEnumType::printSelf(FILE * outFile)
{
  if (ReducedDatumEnumTypeIsBad())
    {
      fprintf(stderr, "bad ReducedDatumEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ReducedDatumEnumType::oPrintSelf(FILE * outFile)
{
  if (ReducedDatumEnumTypeIsBad())
    {
      fprintf(stderr, "bad ReducedDatumEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ReferencedComponentEnumType

*/

ReferencedComponentEnumType::ReferencedComponentEnumType() :
  XmlNMTOKEN()
{
}

ReferencedComponentEnumType::ReferencedComponentEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "NOMINAL") &&
           strcmp(val.c_str(), "ACTUAL"));
}

ReferencedComponentEnumType::~ReferencedComponentEnumType() {}

bool ReferencedComponentEnumType::ReferencedComponentEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "NOMINAL") &&
          strcmp(val.c_str(), "ACTUAL"));
}

void ReferencedComponentEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ReferencedComponentEnumType");
}

void ReferencedComponentEnumType::printSelf(FILE * outFile)
{
  if (ReferencedComponentEnumTypeIsBad())
    {
      fprintf(stderr, "bad ReferencedComponentEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ReferencedComponentEnumType::oPrintSelf(FILE * outFile)
{
  if (ReferencedComponentEnumTypeIsBad())
    {
      fprintf(stderr, "bad ReferencedComponentEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class RetrievalMethodEnumType

*/

RetrievalMethodEnumType::RetrievalMethodEnumType() :
  XmlNMTOKEN()
{
}

RetrievalMethodEnumType::RetrievalMethodEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "AVERAGE") &&
           strcmp(val.c_str(), "MAXEXTREME") &&
           strcmp(val.c_str(), "MINEXTREME") &&
           strcmp(val.c_str(), "CLOSEST1D") &&
           strcmp(val.c_str(), "CLOSEST2D") &&
           strcmp(val.c_str(), "CLOSEST3D"));
}

RetrievalMethodEnumType::~RetrievalMethodEnumType() {}

bool RetrievalMethodEnumType::RetrievalMethodEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "AVERAGE") &&
          strcmp(val.c_str(), "MAXEXTREME") &&
          strcmp(val.c_str(), "MINEXTREME") &&
          strcmp(val.c_str(), "CLOSEST1D") &&
          strcmp(val.c_str(), "CLOSEST2D") &&
          strcmp(val.c_str(), "CLOSEST3D"));
}

void RetrievalMethodEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "RetrievalMethodEnumType");
}

void RetrievalMethodEnumType::printSelf(FILE * outFile)
{
  if (RetrievalMethodEnumTypeIsBad())
    {
      fprintf(stderr, "bad RetrievalMethodEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void RetrievalMethodEnumType::oPrintSelf(FILE * outFile)
{
  if (RetrievalMethodEnumTypeIsBad())
    {
      fprintf(stderr, "bad RetrievalMethodEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SecondaryAlignmentOperationType

*/

SecondaryAlignmentOperationType::SecondaryAlignmentOperationType() :
  AlignmentOperationBaseType()
{
  SecondaryEntity = 0;
  SecondaryAxis = 0;
  RotationAxis = 0;
}

SecondaryAlignmentOperationType::SecondaryAlignmentOperationType(
 NaturalType * SequenceNumberIn,
 AttributesType * AttributesIn,
 AlignmentFeatureType * SecondaryEntityIn,
 UnitVectorType * SecondaryAxisIn,
 UnitVectorType * RotationAxisIn) :
  AlignmentOperationBaseType(
    SequenceNumberIn,
    AttributesIn)
{
  SecondaryEntity = SecondaryEntityIn;
  SecondaryAxis = SecondaryAxisIn;
  RotationAxis = RotationAxisIn;
}

SecondaryAlignmentOperationType::~SecondaryAlignmentOperationType()
{
  #ifndef NODESTRUCT
  delete SecondaryEntity;
  delete SecondaryAxis;
  delete RotationAxis;
  #endif
}

void SecondaryAlignmentOperationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SecondaryEntity");
  SecondaryEntity->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</SecondaryEntity>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SecondaryAxis");
  SecondaryAxis->printSelf(outFile);
  fprintf(outFile, "</SecondaryAxis>\n");
  if (RotationAxis)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RotationAxis");
      RotationAxis->printSelf(outFile);
      fprintf(outFile, "</RotationAxis>\n");
    }
  doSpaces(-INDENT, outFile);
}

AlignmentFeatureType * SecondaryAlignmentOperationType::getSecondaryEntity()
{return SecondaryEntity;}

void SecondaryAlignmentOperationType::setSecondaryEntity(AlignmentFeatureType * SecondaryEntityIn)
{SecondaryEntity = SecondaryEntityIn;}

UnitVectorType * SecondaryAlignmentOperationType::getSecondaryAxis()
{return SecondaryAxis;}

void SecondaryAlignmentOperationType::setSecondaryAxis(UnitVectorType * SecondaryAxisIn)
{SecondaryAxis = SecondaryAxisIn;}

UnitVectorType * SecondaryAlignmentOperationType::getRotationAxis()
{return RotationAxis;}

void SecondaryAlignmentOperationType::setRotationAxis(UnitVectorType * RotationAxisIn)
{RotationAxis = RotationAxisIn;}

/* ***************************************************************** */

/* class SectionModifierEnumType

*/

SectionModifierEnumType::SectionModifierEnumType() :
  XmlNMTOKEN()
{
}

SectionModifierEnumType::SectionModifierEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "ACS") &&
           strcmp(val.c_str(), "ALS") &&
           strcmp(val.c_str(), "SCS"));
}

SectionModifierEnumType::~SectionModifierEnumType() {}

bool SectionModifierEnumType::SectionModifierEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ACS") &&
          strcmp(val.c_str(), "ALS") &&
          strcmp(val.c_str(), "SCS"));
}

void SectionModifierEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SectionModifierEnumType");
}

void SectionModifierEnumType::printSelf(FILE * outFile)
{
  if (SectionModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad SectionModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SectionModifierEnumType::oPrintSelf(FILE * outFile)
{
  if (SectionModifierEnumTypeIsBad())
    {
      fprintf(stderr, "bad SectionModifierEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SequencedBaseFeatureType

*/

SequencedBaseFeatureType::SequencedBaseFeatureType() :
  BaseFeatureType()
{
  SequenceNumber = 0;
}

SequencedBaseFeatureType::SequencedBaseFeatureType(
 ReferencedComponentEnumType * ReferencedComponentIn,
 QIFReferenceFullType * FeatureIdIn,
 NaturalType * SequenceNumberIn) :
  BaseFeatureType(
    ReferencedComponentIn,
    FeatureIdIn)
{
  SequenceNumber = SequenceNumberIn;
}

SequencedBaseFeatureType::~SequencedBaseFeatureType()
{
  #ifndef NODESTRUCT
  delete SequenceNumber;
  #endif
}

void SequencedBaseFeatureType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ReferencedComponent");
  ReferencedComponent->printSelf(outFile);
  fprintf(outFile, "</ReferencedComponent>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureId");
  FeatureId->printSelf(outFile);
  fprintf(outFile, "</FeatureId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  doSpaces(-INDENT, outFile);
}

NaturalType * SequencedBaseFeatureType::getSequenceNumber()
{return SequenceNumber;}

void SequencedBaseFeatureType::setSequenceNumber(NaturalType * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

/* ***************************************************************** */

/* class SequencedBaseFeatureTypeLisd

*/

SequencedBaseFeatureTypeLisd::SequencedBaseFeatureTypeLisd() {}

SequencedBaseFeatureTypeLisd::SequencedBaseFeatureTypeLisd(SequencedBaseFeatureType * aSequencedBaseFeatureType)
{
  push_back(aSequencedBaseFeatureType);
}

SequencedBaseFeatureTypeLisd::~SequencedBaseFeatureTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SequencedBaseFeatureType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SequencedBaseFeatureTypeLisd::printSelf(FILE * outFile)
{
  std::list<SequencedBaseFeatureType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class SequencedDatumType

*/

SequencedDatumType::SequencedDatumType()
{
  SequencedDatumT_1018 = 0;
  SequenceNumber = 0;
}

SequencedDatumType::SequencedDatumType(
 SequencedDatumT_1018_Type * SequencedDatumT_1018In,
 NaturalType * SequenceNumberIn)
{
  SequencedDatumT_1018 = SequencedDatumT_1018In;
  SequenceNumber = SequenceNumberIn;
}

SequencedDatumType::~SequencedDatumType()
{
  #ifndef NODESTRUCT
  delete SequencedDatumT_1018;
  delete SequenceNumber;
  #endif
}

void SequencedDatumType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  SequencedDatumT_1018->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  doSpaces(-INDENT, outFile);
}

SequencedDatumT_1018_Type * SequencedDatumType::getSequencedDatumT_1018()
{return SequencedDatumT_1018;}

void SequencedDatumType::setSequencedDatumT_1018(SequencedDatumT_1018_Type * SequencedDatumT_1018In)
{SequencedDatumT_1018 = SequencedDatumT_1018In;}

NaturalType * SequencedDatumType::getSequenceNumber()
{return SequenceNumber;}

void SequencedDatumType::setSequenceNumber(NaturalType * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

/* ***************************************************************** */

/* class SequencedDatumTypeLisd

*/

SequencedDatumTypeLisd::SequencedDatumTypeLisd() {}

SequencedDatumTypeLisd::SequencedDatumTypeLisd(SequencedDatumType * aSequencedDatumType)
{
  push_back(aSequencedDatumType);
}

SequencedDatumTypeLisd::~SequencedDatumTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SequencedDatumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SequencedDatumTypeLisd::printSelf(FILE * outFile)
{
  std::list<SequencedDatumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class SignOffsType

*/

SignOffsType::SignOffsType()
{
  n = 0;
  Employee = 0;
}

SignOffsType::SignOffsType(
 EmployeeTypeLisd * EmployeeIn)
{
  n = 0;
  Employee = EmployeeIn;
}

SignOffsType::SignOffsType(
 NaturalType * nIn,
 EmployeeTypeLisd * EmployeeIn)
{
  n = nIn;
  Employee = EmployeeIn;
}

SignOffsType::~SignOffsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Employee;
  #endif
}

void SignOffsType::printSelf(FILE * outFile)
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
    if (!Employee)
      {
        fprintf(stderr, "Employee list is missing\n");
        exit(1);
      }
    if (Employee->size() == 0)
      {
        fprintf(stderr, "Employee list is empty\n");
        exit(1);
      }
    if (Employee->size() < 1)
      {
        fprintf(stderr,
                "size of Employee list (%d) less than minimum required (1)\n",
                (int)Employee->size());
        exit(1);
      }
    std::list<EmployeeType *>::iterator iter;
    for (iter = Employee->begin();
         iter != Employee->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Employee");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Employee>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SignOffsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in SignOffsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SignOffsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SignOffsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SignOffsType\n");
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

NaturalType * SignOffsType::getn()
{return n;}

void SignOffsType::setn(NaturalType * nIn)
{n = nIn;}

EmployeeTypeLisd * SignOffsType::getEmployee()
{return Employee;}

void SignOffsType::setEmployee(EmployeeTypeLisd * EmployeeIn)
{Employee = EmployeeIn;}

/* ***************************************************************** */

/* class SignificantDimensionEnumType

*/

SignificantDimensionEnumType::SignificantDimensionEnumType() :
  XmlNMTOKEN()
{
}

SignificantDimensionEnumType::SignificantDimensionEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "SX") &&
           strcmp(val.c_str(), "SN") &&
           strcmp(val.c_str(), "SA") &&
           strcmp(val.c_str(), "SM") &&
           strcmp(val.c_str(), "SD") &&
           strcmp(val.c_str(), "SR") &&
           strcmp(val.c_str(), "SQ"));
}

SignificantDimensionEnumType::~SignificantDimensionEnumType() {}

bool SignificantDimensionEnumType::SignificantDimensionEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "SX") &&
          strcmp(val.c_str(), "SN") &&
          strcmp(val.c_str(), "SA") &&
          strcmp(val.c_str(), "SM") &&
          strcmp(val.c_str(), "SD") &&
          strcmp(val.c_str(), "SR") &&
          strcmp(val.c_str(), "SQ"));
}

void SignificantDimensionEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SignificantDimensionEnumType");
}

void SignificantDimensionEnumType::printSelf(FILE * outFile)
{
  if (SignificantDimensionEnumTypeIsBad())
    {
      fprintf(stderr, "bad SignificantDimensionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SignificantDimensionEnumType::oPrintSelf(FILE * outFile)
{
  if (SignificantDimensionEnumTypeIsBad())
    {
      fprintf(stderr, "bad SignificantDimensionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SingleLeadThreadSpecificationType

*/

SingleLeadThreadSpecificationType::SingleLeadThreadSpecificationType() :
  ThreadSpecificationDetailedBaseType()
{
  ThreadDensity = 0;
}

SingleLeadThreadSpecificationType::SingleLeadThreadSpecificationType(
 LinearValueType * DiameterIn,
 ThreadSeriesType * ThreadSeriesIn,
 ThreadClassType * ThreadToleranceClassIn,
 ThreadClassType * CrestDiameterToleranceClassIn,
 XmlBoolean * LeftHandedIn,
 XmlBoolean * ModifiedThreadIn,
 LinearValueType * ThreadLengthEngagementIn,
 AttributesType * AttributesIn,
 SpecifiedDecimalType * ThreadDensityIn) :
  ThreadSpecificationDetailedBaseType(
    DiameterIn,
    ThreadSeriesIn,
    ThreadToleranceClassIn,
    CrestDiameterToleranceClassIn,
    LeftHandedIn,
    ModifiedThreadIn,
    ThreadLengthEngagementIn,
    AttributesIn)
{
  ThreadDensity = ThreadDensityIn;
}

SingleLeadThreadSpecificationType::SingleLeadThreadSpecificationType(
 QIFIdType * idIn,
 LinearValueType * DiameterIn,
 ThreadSeriesType * ThreadSeriesIn,
 ThreadClassType * ThreadToleranceClassIn,
 ThreadClassType * CrestDiameterToleranceClassIn,
 XmlBoolean * LeftHandedIn,
 XmlBoolean * ModifiedThreadIn,
 LinearValueType * ThreadLengthEngagementIn,
 AttributesType * AttributesIn,
 SpecifiedDecimalType * ThreadDensityIn) :
  ThreadSpecificationDetailedBaseType(
    idIn,
    DiameterIn,
    ThreadSeriesIn,
    ThreadToleranceClassIn,
    CrestDiameterToleranceClassIn,
    LeftHandedIn,
    ModifiedThreadIn,
    ThreadLengthEngagementIn,
    AttributesIn)
{
  ThreadDensity = ThreadDensityIn;
}

SingleLeadThreadSpecificationType::~SingleLeadThreadSpecificationType()
{
  #ifndef NODESTRUCT
  delete ThreadDensity;
  #endif
}

void SingleLeadThreadSpecificationType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadSeries");
  ThreadSeries->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ThreadSeries>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadToleranceClass");
  ThreadToleranceClass->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ThreadToleranceClass>\n");
  if (CrestDiameterToleranceClass)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CrestDiameterToleranceClass");
      CrestDiameterToleranceClass->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CrestDiameterToleranceClass>\n");
    }
  if (LeftHanded)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LeftHanded");
      LeftHanded->printSelf(outFile);
      fprintf(outFile, "</LeftHanded>\n");
    }
  if (ModifiedThread)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModifiedThread");
      ModifiedThread->printSelf(outFile);
      fprintf(outFile, "</ModifiedThread>\n");
    }
  if (ThreadLengthEngagement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThreadLengthEngagement");
      ThreadLengthEngagement->printSelf(outFile);
      fprintf(outFile, "</ThreadLengthEngagement>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadDensity");
  ThreadDensity->printSelf(outFile);
  fprintf(outFile, "</ThreadDensity>\n");
  doSpaces(-INDENT, outFile);
}

bool SingleLeadThreadSpecificationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in SingleLeadThreadSpecificationType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in SingleLeadThreadSpecificationType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SingleLeadThreadSpecificationType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in SingleLeadThreadSpecificationType\n");
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

SpecifiedDecimalType * SingleLeadThreadSpecificationType::getThreadDensity()
{return ThreadDensity;}

void SingleLeadThreadSpecificationType::setThreadDensity(SpecifiedDecimalType * ThreadDensityIn)
{ThreadDensity = ThreadDensityIn;}

/* ***************************************************************** */

/* class SoftwareType

*/

SoftwareType::SoftwareType()
{
  id = 0;
  Attributes = 0;
  VendorName = 0;
  ApplicationName = 0;
  Version = 0;
  Description = 0;
  URI = 0;
  ReferencedStandardIds = 0;
}

SoftwareType::SoftwareType(
 AttributesType * AttributesIn,
 XmlToken * VendorNameIn,
 XmlToken * ApplicationNameIn,
 XmlToken * VersionIn,
 XmlString * DescriptionIn,
 XmlAnyURI * URIIn,
 ArrayReferenceType * ReferencedStandardIdsIn)
{
  id = 0;
  Attributes = AttributesIn;
  VendorName = VendorNameIn;
  ApplicationName = ApplicationNameIn;
  Version = VersionIn;
  Description = DescriptionIn;
  URI = URIIn;
  ReferencedStandardIds = ReferencedStandardIdsIn;
}

SoftwareType::SoftwareType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlToken * VendorNameIn,
 XmlToken * ApplicationNameIn,
 XmlToken * VersionIn,
 XmlString * DescriptionIn,
 XmlAnyURI * URIIn,
 ArrayReferenceType * ReferencedStandardIdsIn)
{
  id = idIn;
  Attributes = AttributesIn;
  VendorName = VendorNameIn;
  ApplicationName = ApplicationNameIn;
  Version = VersionIn;
  Description = DescriptionIn;
  URI = URIIn;
  ReferencedStandardIds = ReferencedStandardIdsIn;
}

SoftwareType::~SoftwareType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete VendorName;
  delete ApplicationName;
  delete Version;
  delete Description;
  delete URI;
  delete ReferencedStandardIds;
  #endif
}

void SoftwareType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<VendorName");
  VendorName->printSelf(outFile);
  fprintf(outFile, "</VendorName>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ApplicationName");
  ApplicationName->printSelf(outFile);
  fprintf(outFile, "</ApplicationName>\n");
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
  if (URI)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<URI");
      URI->printSelf(outFile);
      fprintf(outFile, "</URI>\n");
    }
  if (ReferencedStandardIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReferencedStandardIds");
      ReferencedStandardIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ReferencedStandardIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool SoftwareType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in SoftwareType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in SoftwareType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SoftwareType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in SoftwareType\n");
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

QIFIdType * SoftwareType::getid()
{return id;}

void SoftwareType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * SoftwareType::getAttributes()
{return Attributes;}

void SoftwareType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlToken * SoftwareType::getVendorName()
{return VendorName;}

void SoftwareType::setVendorName(XmlToken * VendorNameIn)
{VendorName = VendorNameIn;}

XmlToken * SoftwareType::getApplicationName()
{return ApplicationName;}

void SoftwareType::setApplicationName(XmlToken * ApplicationNameIn)
{ApplicationName = ApplicationNameIn;}

XmlToken * SoftwareType::getVersion()
{return Version;}

void SoftwareType::setVersion(XmlToken * VersionIn)
{Version = VersionIn;}

XmlString * SoftwareType::getDescription()
{return Description;}

void SoftwareType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

XmlAnyURI * SoftwareType::getURI()
{return URI;}

void SoftwareType::setURI(XmlAnyURI * URIIn)
{URI = URIIn;}

ArrayReferenceType * SoftwareType::getReferencedStandardIds()
{return ReferencedStandardIds;}

void SoftwareType::setReferencedStandardIds(ArrayReferenceType * ReferencedStandardIdsIn)
{ReferencedStandardIds = ReferencedStandardIdsIn;}

/* ***************************************************************** */

/* class SoftwareTypeLisd

*/

SoftwareTypeLisd::SoftwareTypeLisd() {}

SoftwareTypeLisd::SoftwareTypeLisd(SoftwareType * aSoftwareType)
{
  push_back(aSoftwareType);
}

SoftwareTypeLisd::~SoftwareTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SoftwareType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SoftwareTypeLisd::printSelf(FILE * outFile)
{
  std::list<SoftwareType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class SoftwaresType

*/

SoftwaresType::SoftwaresType()
{
  n = 0;
  Software = 0;
}

SoftwaresType::SoftwaresType(
 SoftwareTypeLisd * SoftwareIn)
{
  n = 0;
  Software = SoftwareIn;
}

SoftwaresType::SoftwaresType(
 NaturalType * nIn,
 SoftwareTypeLisd * SoftwareIn)
{
  n = nIn;
  Software = SoftwareIn;
}

SoftwaresType::~SoftwaresType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Software;
  #endif
}

void SoftwaresType::printSelf(FILE * outFile)
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
    if (!Software)
      {
        fprintf(stderr, "Software list is missing\n");
        exit(1);
      }
    if (Software->size() == 0)
      {
        fprintf(stderr, "Software list is empty\n");
        exit(1);
      }
    if (Software->size() < 1)
      {
        fprintf(stderr,
                "size of Software list (%d) less than minimum required (1)\n",
                (int)Software->size());
        exit(1);
      }
    std::list<SoftwareType *>::iterator iter;
    for (iter = Software->begin();
         iter != Software->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Software");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Software>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SoftwaresType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in SoftwaresType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SoftwaresType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SoftwaresType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SoftwaresType\n");
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

NaturalType * SoftwaresType::getn()
{return n;}

void SoftwaresType::setn(NaturalType * nIn)
{n = nIn;}

SoftwareTypeLisd * SoftwaresType::getSoftware()
{return Software;}

void SoftwaresType::setSoftware(SoftwareTypeLisd * SoftwareIn)
{Software = SoftwareIn;}

/* ***************************************************************** */

/* class SpeedToleranceType

*/

SpeedToleranceType::SpeedToleranceType()
{
  SpeedToleranceT_1019 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

SpeedToleranceType::SpeedToleranceType(
 SpeedToleranceT_1019_Type * SpeedToleranceT_1019In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  SpeedToleranceT_1019 = SpeedToleranceT_1019In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

SpeedToleranceType::~SpeedToleranceType()
{
  #ifndef NODESTRUCT
  delete SpeedToleranceT_1019;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void SpeedToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  SpeedToleranceT_1019->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

SpeedToleranceT_1019_Type * SpeedToleranceType::getSpeedToleranceT_1019()
{return SpeedToleranceT_1019;}

void SpeedToleranceType::setSpeedToleranceT_1019(SpeedToleranceT_1019_Type * SpeedToleranceT_1019In)
{SpeedToleranceT_1019 = SpeedToleranceT_1019In;}

XmlBoolean * SpeedToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void SpeedToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * SpeedToleranceType::getAttributes()
{return Attributes;}

void SpeedToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class StandardType

*/

StandardType::StandardType()
{
  id = 0;
  Attributes = 0;
  Organization = 0;
  Designator = 0;
  Year = 0;
  Title = 0;
  Description = 0;
  URI = 0;
  ISBN = 0;
  ReferencedStandardIds = 0;
}

StandardType::StandardType(
 AttributesType * AttributesIn,
 StandardsOrganizationType * OrganizationIn,
 XmlToken * DesignatorIn,
 XmlString * YearIn,
 XmlString * TitleIn,
 XmlString * DescriptionIn,
 XmlAnyURI * URIIn,
 XmlNMTOKEN * ISBNIn,
 ArrayReferenceType * ReferencedStandardIdsIn)
{
  id = 0;
  Attributes = AttributesIn;
  Organization = OrganizationIn;
  Designator = DesignatorIn;
  Year = YearIn;
  Title = TitleIn;
  Description = DescriptionIn;
  URI = URIIn;
  ISBN = ISBNIn;
  ReferencedStandardIds = ReferencedStandardIdsIn;
}

StandardType::StandardType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 StandardsOrganizationType * OrganizationIn,
 XmlToken * DesignatorIn,
 XmlString * YearIn,
 XmlString * TitleIn,
 XmlString * DescriptionIn,
 XmlAnyURI * URIIn,
 XmlNMTOKEN * ISBNIn,
 ArrayReferenceType * ReferencedStandardIdsIn)
{
  id = idIn;
  Attributes = AttributesIn;
  Organization = OrganizationIn;
  Designator = DesignatorIn;
  Year = YearIn;
  Title = TitleIn;
  Description = DescriptionIn;
  URI = URIIn;
  ISBN = ISBNIn;
  ReferencedStandardIds = ReferencedStandardIdsIn;
}

StandardType::~StandardType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete Organization;
  delete Designator;
  delete Year;
  delete Title;
  delete Description;
  delete URI;
  delete ISBN;
  delete ReferencedStandardIds;
  #endif
}

void StandardType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<Organization");
  Organization->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Organization>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Designator");
  Designator->printSelf(outFile);
  fprintf(outFile, "</Designator>\n");
  if (Year)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Year");
      Year->printSelf(outFile);
      fprintf(outFile, "</Year>\n");
    }
  if (Title)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Title");
      Title->printSelf(outFile);
      fprintf(outFile, "</Title>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (URI)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<URI");
      URI->printSelf(outFile);
      fprintf(outFile, "</URI>\n");
    }
  if (ISBN)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ISBN");
      ISBN->printSelf(outFile);
      fprintf(outFile, "</ISBN>\n");
    }
  if (ReferencedStandardIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReferencedStandardIds");
      ReferencedStandardIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ReferencedStandardIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool StandardType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in StandardType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in StandardType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StandardType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in StandardType\n");
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

QIFIdType * StandardType::getid()
{return id;}

void StandardType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * StandardType::getAttributes()
{return Attributes;}

void StandardType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

StandardsOrganizationType * StandardType::getOrganization()
{return Organization;}

void StandardType::setOrganization(StandardsOrganizationType * OrganizationIn)
{Organization = OrganizationIn;}

XmlToken * StandardType::getDesignator()
{return Designator;}

void StandardType::setDesignator(XmlToken * DesignatorIn)
{Designator = DesignatorIn;}

XmlString * StandardType::getYear()
{return Year;}

void StandardType::setYear(XmlString * YearIn)
{Year = YearIn;}

XmlString * StandardType::getTitle()
{return Title;}

void StandardType::setTitle(XmlString * TitleIn)
{Title = TitleIn;}

XmlString * StandardType::getDescription()
{return Description;}

void StandardType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

XmlAnyURI * StandardType::getURI()
{return URI;}

void StandardType::setURI(XmlAnyURI * URIIn)
{URI = URIIn;}

XmlNMTOKEN * StandardType::getISBN()
{return ISBN;}

void StandardType::setISBN(XmlNMTOKEN * ISBNIn)
{ISBN = ISBNIn;}

ArrayReferenceType * StandardType::getReferencedStandardIds()
{return ReferencedStandardIds;}

void StandardType::setReferencedStandardIds(ArrayReferenceType * ReferencedStandardIdsIn)
{ReferencedStandardIds = ReferencedStandardIdsIn;}

/* ***************************************************************** */

/* class StandardTypeLisd

*/

StandardTypeLisd::StandardTypeLisd() {}

StandardTypeLisd::StandardTypeLisd(StandardType * aStandardType)
{
  push_back(aStandardType);
}

StandardTypeLisd::~StandardTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<StandardType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void StandardTypeLisd::printSelf(FILE * outFile)
{
  std::list<StandardType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class StandardsOrganizationEnumType

*/

StandardsOrganizationEnumType::StandardsOrganizationEnumType() :
  XmlNMTOKEN()
{
}

StandardsOrganizationEnumType::StandardsOrganizationEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "AIAG") &&
           strcmp(val.c_str(), "ANSI") &&
           strcmp(val.c_str(), "ASAM") &&
           strcmp(val.c_str(), "ASME") &&
           strcmp(val.c_str(), "AWS") &&
           strcmp(val.c_str(), "BSI") &&
           strcmp(val.c_str(), "DIN") &&
           strcmp(val.c_str(), "DOD") &&
           strcmp(val.c_str(), "EASC") &&
           strcmp(val.c_str(), "GOST") &&
           strcmp(val.c_str(), "GOST_R") &&
           strcmp(val.c_str(), "IEC") &&
           strcmp(val.c_str(), "IEEE") &&
           strcmp(val.c_str(), "ISO") &&
           strcmp(val.c_str(), "JEITA") &&
           strcmp(val.c_str(), "JIS") &&
           strcmp(val.c_str(), "UL") &&
           strcmp(val.c_str(), "VDA") &&
           strcmp(val.c_str(), "W3C"));
}

StandardsOrganizationEnumType::~StandardsOrganizationEnumType() {}

bool StandardsOrganizationEnumType::StandardsOrganizationEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "AIAG") &&
          strcmp(val.c_str(), "ANSI") &&
          strcmp(val.c_str(), "ASAM") &&
          strcmp(val.c_str(), "ASME") &&
          strcmp(val.c_str(), "AWS") &&
          strcmp(val.c_str(), "BSI") &&
          strcmp(val.c_str(), "DIN") &&
          strcmp(val.c_str(), "DOD") &&
          strcmp(val.c_str(), "EASC") &&
          strcmp(val.c_str(), "GOST") &&
          strcmp(val.c_str(), "GOST_R") &&
          strcmp(val.c_str(), "IEC") &&
          strcmp(val.c_str(), "IEEE") &&
          strcmp(val.c_str(), "ISO") &&
          strcmp(val.c_str(), "JEITA") &&
          strcmp(val.c_str(), "JIS") &&
          strcmp(val.c_str(), "UL") &&
          strcmp(val.c_str(), "VDA") &&
          strcmp(val.c_str(), "W3C"));
}

void StandardsOrganizationEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "StandardsOrganizationEnumType");
}

void StandardsOrganizationEnumType::printSelf(FILE * outFile)
{
  if (StandardsOrganizationEnumTypeIsBad())
    {
      fprintf(stderr, "bad StandardsOrganizationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void StandardsOrganizationEnumType::oPrintSelf(FILE * outFile)
{
  if (StandardsOrganizationEnumTypeIsBad())
    {
      fprintf(stderr, "bad StandardsOrganizationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class StandardsOrganizationType

*/

StandardsOrganizationType::StandardsOrganizationType()
{
  StandardsOrganizationTypePair = 0;
}

StandardsOrganizationType::StandardsOrganizationType(
 StandardsOrganizationTypeChoicePair * StandardsOrganizationTypePairIn)
{
  StandardsOrganizationTypePair = StandardsOrganizationTypePairIn;
}

StandardsOrganizationType::~StandardsOrganizationType()
{
  #ifndef NODESTRUCT
  delete StandardsOrganizationTypePair;
  #endif
}

void StandardsOrganizationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  StandardsOrganizationTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

StandardsOrganizationTypeChoicePair * StandardsOrganizationType::getStandardsOrganizationTypePair()
{return StandardsOrganizationTypePair;}

void StandardsOrganizationType::setStandardsOrganizationTypePair(StandardsOrganizationTypeChoicePair * StandardsOrganizationTypePairIn)
{StandardsOrganizationTypePair = StandardsOrganizationTypePairIn;}
StandardsOrganizationTypeChoicePair::StandardsOrganizationTypeChoicePair() {}

StandardsOrganizationTypeChoicePair::StandardsOrganizationTypeChoicePair(
 whichOne StandardsOrganizationTypeTypeIn,
 StandardsOrganizationTypeVal StandardsOrganizationTypeValueIn)
{
  StandardsOrganizationTypeType = StandardsOrganizationTypeTypeIn;
  StandardsOrganizationTypeValue = StandardsOrganizationTypeValueIn;
}

StandardsOrganizationTypeChoicePair::~StandardsOrganizationTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (StandardsOrganizationTypeType == StandardsOrganizationEnumE)
    delete StandardsOrganizationTypeValue.StandardsOrganizationEnum;
  else if (StandardsOrganizationTypeType == OtherStandardsOrganizationE)
    delete StandardsOrganizationTypeValue.OtherStandardsOrganization;
  #endif
}

void StandardsOrganizationTypeChoicePair::printSelf(FILE * outFile)
{
  if (StandardsOrganizationTypeType == StandardsOrganizationEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StandardsOrganizationEnum");
      StandardsOrganizationTypeValue.StandardsOrganizationEnum->printSelf(outFile);
      fprintf(outFile, "</StandardsOrganizationEnum>\n");
    }
  else if (StandardsOrganizationTypeType == OtherStandardsOrganizationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherStandardsOrganization");
      StandardsOrganizationTypeValue.OtherStandardsOrganization->printSelf(outFile);
      fprintf(outFile, "</OtherStandardsOrganization>\n");
    }
}

/* ***************************************************************** */

/* class StandardsType

*/

StandardsType::StandardsType()
{
  n = 0;
  Standard = 0;
}

StandardsType::StandardsType(
 StandardTypeLisd * StandardIn)
{
  n = 0;
  Standard = StandardIn;
}

StandardsType::StandardsType(
 NaturalType * nIn,
 StandardTypeLisd * StandardIn)
{
  n = nIn;
  Standard = StandardIn;
}

StandardsType::~StandardsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Standard;
  #endif
}

void StandardsType::printSelf(FILE * outFile)
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
    if (!Standard)
      {
        fprintf(stderr, "Standard list is missing\n");
        exit(1);
      }
    if (Standard->size() == 0)
      {
        fprintf(stderr, "Standard list is empty\n");
        exit(1);
      }
    if (Standard->size() < 1)
      {
        fprintf(stderr,
                "size of Standard list (%d) less than minimum required (1)\n",
                (int)Standard->size());
        exit(1);
      }
    std::list<StandardType *>::iterator iter;
    for (iter = Standard->begin();
         iter != Standard->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Standard");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Standard>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool StandardsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in StandardsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in StandardsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StandardsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in StandardsType\n");
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

NaturalType * StandardsType::getn()
{return n;}

void StandardsType::setn(NaturalType * nIn)
{n = nIn;}

StandardTypeLisd * StandardsType::getStandard()
{return Standard;}

void StandardsType::setStandard(StandardTypeLisd * StandardIn)
{Standard = StandardIn;}

/* ***************************************************************** */

/* class SubstituteFeatureAlgorithmEnumType

*/

SubstituteFeatureAlgorithmEnumType::SubstituteFeatureAlgorithmEnumType() :
  XmlNMTOKEN()
{
}

SubstituteFeatureAlgorithmEnumType::SubstituteFeatureAlgorithmEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "BEZIER") &&
           strcmp(val.c_str(), "BSPLINE") &&
           strcmp(val.c_str(), "DEFAULT") &&
           strcmp(val.c_str(), "LEASTSQUARES") &&
           strcmp(val.c_str(), "MAXINSCRIBED") &&
           strcmp(val.c_str(), "MAXINNERLOCALSIZE") &&
           strcmp(val.c_str(), "MAXOUTERLOCALSIZE") &&
           strcmp(val.c_str(), "MINCIRCUMSCRIBED") &&
           strcmp(val.c_str(), "MININNERLOCALSIZE") &&
           strcmp(val.c_str(), "MINOUTERLOCALSIZE") &&
           strcmp(val.c_str(), "MINMAX") &&
           strcmp(val.c_str(), "NURBS") &&
           strcmp(val.c_str(), "ONESIDED") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

SubstituteFeatureAlgorithmEnumType::~SubstituteFeatureAlgorithmEnumType() {}

bool SubstituteFeatureAlgorithmEnumType::SubstituteFeatureAlgorithmEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "BEZIER") &&
          strcmp(val.c_str(), "BSPLINE") &&
          strcmp(val.c_str(), "DEFAULT") &&
          strcmp(val.c_str(), "LEASTSQUARES") &&
          strcmp(val.c_str(), "MAXINSCRIBED") &&
          strcmp(val.c_str(), "MAXINNERLOCALSIZE") &&
          strcmp(val.c_str(), "MAXOUTERLOCALSIZE") &&
          strcmp(val.c_str(), "MINCIRCUMSCRIBED") &&
          strcmp(val.c_str(), "MININNERLOCALSIZE") &&
          strcmp(val.c_str(), "MINOUTERLOCALSIZE") &&
          strcmp(val.c_str(), "MINMAX") &&
          strcmp(val.c_str(), "NURBS") &&
          strcmp(val.c_str(), "ONESIDED") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void SubstituteFeatureAlgorithmEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SubstituteFeatureAlgorithmEnumType");
}

void SubstituteFeatureAlgorithmEnumType::printSelf(FILE * outFile)
{
  if (SubstituteFeatureAlgorithmEnumTypeIsBad())
    {
      fprintf(stderr, "bad SubstituteFeatureAlgorithmEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SubstituteFeatureAlgorithmEnumType::oPrintSelf(FILE * outFile)
{
  if (SubstituteFeatureAlgorithmEnumTypeIsBad())
    {
      fprintf(stderr, "bad SubstituteFeatureAlgorithmEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SubstituteFeatureAlgorithmType

*/

SubstituteFeatureAlgorithmType::SubstituteFeatureAlgorithmType()
{
  Attributes = 0;
  SubstituteFeatu_1020 = 0;
}

SubstituteFeatureAlgorithmType::SubstituteFeatureAlgorithmType(
 AttributesType * AttributesIn,
 SubstituteFeatu_1020_Type * SubstituteFeatu_1020In)
{
  Attributes = AttributesIn;
  SubstituteFeatu_1020 = SubstituteFeatu_1020In;
}

SubstituteFeatureAlgorithmType::~SubstituteFeatureAlgorithmType()
{
  #ifndef NODESTRUCT
  delete Attributes;
  delete SubstituteFeatu_1020;
  #endif
}

void SubstituteFeatureAlgorithmType::printSelf(FILE * outFile)
{
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
  SubstituteFeatu_1020->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

AttributesType * SubstituteFeatureAlgorithmType::getAttributes()
{return Attributes;}

void SubstituteFeatureAlgorithmType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

SubstituteFeatu_1020_Type * SubstituteFeatureAlgorithmType::getSubstituteFeatu_1020()
{return SubstituteFeatu_1020;}

void SubstituteFeatureAlgorithmType::setSubstituteFeatu_1020(SubstituteFeatu_1020_Type * SubstituteFeatu_1020In)
{SubstituteFeatu_1020 = SubstituteFeatu_1020In;}

/* ***************************************************************** */

/* class TemperatureToleranceType

*/

TemperatureToleranceType::TemperatureToleranceType()
{
  TemperatureTole_1021 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

TemperatureToleranceType::TemperatureToleranceType(
 TemperatureTole_1021_Type * TemperatureTole_1021In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  TemperatureTole_1021 = TemperatureTole_1021In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

TemperatureToleranceType::~TemperatureToleranceType()
{
  #ifndef NODESTRUCT
  delete TemperatureTole_1021;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void TemperatureToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  TemperatureTole_1021->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

TemperatureTole_1021_Type * TemperatureToleranceType::getTemperatureTole_1021()
{return TemperatureTole_1021;}

void TemperatureToleranceType::setTemperatureTole_1021(TemperatureTole_1021_Type * TemperatureTole_1021In)
{TemperatureTole_1021 = TemperatureTole_1021In;}

XmlBoolean * TemperatureToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void TemperatureToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * TemperatureToleranceType::getAttributes()
{return Attributes;}

void TemperatureToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class TextThreadSpecificationType

*/

TextThreadSpecificationType::TextThreadSpecificationType()
{
  id = 0;
  TextSpecification = 0;
}

TextThreadSpecificationType::TextThreadSpecificationType(
 XmlString * TextSpecificationIn)
{
  id = 0;
  TextSpecification = TextSpecificationIn;
}

TextThreadSpecificationType::TextThreadSpecificationType(
 QIFIdType * idIn,
 XmlString * TextSpecificationIn)
{
  id = idIn;
  TextSpecification = TextSpecificationIn;
}

TextThreadSpecificationType::~TextThreadSpecificationType()
{
  #ifndef NODESTRUCT
  delete id;
  delete TextSpecification;
  #endif
}

void TextThreadSpecificationType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<TextSpecification");
  TextSpecification->printSelf(outFile);
  fprintf(outFile, "</TextSpecification>\n");
  doSpaces(-INDENT, outFile);
}

bool TextThreadSpecificationType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in TextThreadSpecificationType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in TextThreadSpecificationType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TextThreadSpecificationType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in TextThreadSpecificationType\n");
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

QIFIdType * TextThreadSpecificationType::getid()
{return id;}

void TextThreadSpecificationType::setid(QIFIdType * idIn)
{id = idIn;}

XmlString * TextThreadSpecificationType::getTextSpecification()
{return TextSpecification;}

void TextThreadSpecificationType::setTextSpecification(XmlString * TextSpecificationIn)
{TextSpecification = TextSpecificationIn;}

/* ***************************************************************** */

/* class ThreadSpecificationDetailedBaseType

*/

ThreadSpecificationDetailedBaseType::ThreadSpecificationDetailedBaseType()
{
  id = 0;
  Diameter = 0;
  ThreadSeries = 0;
  ThreadToleranceClass = 0;
  CrestDiameterToleranceClass = 0;
  LeftHanded = 0;
  ModifiedThread = 0;
  ThreadLengthEngagement = 0;
  Attributes = 0;
}

ThreadSpecificationDetailedBaseType::ThreadSpecificationDetailedBaseType(
 LinearValueType * DiameterIn,
 ThreadSeriesType * ThreadSeriesIn,
 ThreadClassType * ThreadToleranceClassIn,
 ThreadClassType * CrestDiameterToleranceClassIn,
 XmlBoolean * LeftHandedIn,
 XmlBoolean * ModifiedThreadIn,
 LinearValueType * ThreadLengthEngagementIn,
 AttributesType * AttributesIn)
{
  id = 0;
  Diameter = DiameterIn;
  ThreadSeries = ThreadSeriesIn;
  ThreadToleranceClass = ThreadToleranceClassIn;
  CrestDiameterToleranceClass = CrestDiameterToleranceClassIn;
  LeftHanded = LeftHandedIn;
  ModifiedThread = ModifiedThreadIn;
  ThreadLengthEngagement = ThreadLengthEngagementIn;
  Attributes = AttributesIn;
}

ThreadSpecificationDetailedBaseType::ThreadSpecificationDetailedBaseType(
 QIFIdType * idIn,
 LinearValueType * DiameterIn,
 ThreadSeriesType * ThreadSeriesIn,
 ThreadClassType * ThreadToleranceClassIn,
 ThreadClassType * CrestDiameterToleranceClassIn,
 XmlBoolean * LeftHandedIn,
 XmlBoolean * ModifiedThreadIn,
 LinearValueType * ThreadLengthEngagementIn,
 AttributesType * AttributesIn)
{
  id = idIn;
  Diameter = DiameterIn;
  ThreadSeries = ThreadSeriesIn;
  ThreadToleranceClass = ThreadToleranceClassIn;
  CrestDiameterToleranceClass = CrestDiameterToleranceClassIn;
  LeftHanded = LeftHandedIn;
  ModifiedThread = ModifiedThreadIn;
  ThreadLengthEngagement = ThreadLengthEngagementIn;
  Attributes = AttributesIn;
}

ThreadSpecificationDetailedBaseType::~ThreadSpecificationDetailedBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Diameter;
  delete ThreadSeries;
  delete ThreadToleranceClass;
  delete CrestDiameterToleranceClass;
  delete LeftHanded;
  delete ModifiedThread;
  delete ThreadLengthEngagement;
  delete Attributes;
  #endif
}

void ThreadSpecificationDetailedBaseType::printSelf(FILE * outFile)
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
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadSeries");
  ThreadSeries->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ThreadSeries>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ThreadToleranceClass");
  ThreadToleranceClass->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ThreadToleranceClass>\n");
  if (CrestDiameterToleranceClass)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CrestDiameterToleranceClass");
      CrestDiameterToleranceClass->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CrestDiameterToleranceClass>\n");
    }
  if (LeftHanded)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LeftHanded");
      LeftHanded->printSelf(outFile);
      fprintf(outFile, "</LeftHanded>\n");
    }
  if (ModifiedThread)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ModifiedThread");
      ModifiedThread->printSelf(outFile);
      fprintf(outFile, "</ModifiedThread>\n");
    }
  if (ThreadLengthEngagement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThreadLengthEngagement");
      ThreadLengthEngagement->printSelf(outFile);
      fprintf(outFile, "</ThreadLengthEngagement>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ThreadSpecificationDetailedBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ThreadSpecificationDetailedBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ThreadSpecificationDetailedBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ThreadSpecificationDetailedBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in ThreadSpecificationDetailedBaseType\n");
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

QIFIdType * ThreadSpecificationDetailedBaseType::getid()
{return id;}

void ThreadSpecificationDetailedBaseType::setid(QIFIdType * idIn)
{id = idIn;}

LinearValueType * ThreadSpecificationDetailedBaseType::getDiameter()
{return Diameter;}

void ThreadSpecificationDetailedBaseType::setDiameter(LinearValueType * DiameterIn)
{Diameter = DiameterIn;}

ThreadSeriesType * ThreadSpecificationDetailedBaseType::getThreadSeries()
{return ThreadSeries;}

void ThreadSpecificationDetailedBaseType::setThreadSeries(ThreadSeriesType * ThreadSeriesIn)
{ThreadSeries = ThreadSeriesIn;}

ThreadClassType * ThreadSpecificationDetailedBaseType::getThreadToleranceClass()
{return ThreadToleranceClass;}

void ThreadSpecificationDetailedBaseType::setThreadToleranceClass(ThreadClassType * ThreadToleranceClassIn)
{ThreadToleranceClass = ThreadToleranceClassIn;}

ThreadClassType * ThreadSpecificationDetailedBaseType::getCrestDiameterToleranceClass()
{return CrestDiameterToleranceClass;}

void ThreadSpecificationDetailedBaseType::setCrestDiameterToleranceClass(ThreadClassType * CrestDiameterToleranceClassIn)
{CrestDiameterToleranceClass = CrestDiameterToleranceClassIn;}

XmlBoolean * ThreadSpecificationDetailedBaseType::getLeftHanded()
{return LeftHanded;}

void ThreadSpecificationDetailedBaseType::setLeftHanded(XmlBoolean * LeftHandedIn)
{LeftHanded = LeftHandedIn;}

XmlBoolean * ThreadSpecificationDetailedBaseType::getModifiedThread()
{return ModifiedThread;}

void ThreadSpecificationDetailedBaseType::setModifiedThread(XmlBoolean * ModifiedThreadIn)
{ModifiedThread = ModifiedThreadIn;}

LinearValueType * ThreadSpecificationDetailedBaseType::getThreadLengthEngagement()
{return ThreadLengthEngagement;}

void ThreadSpecificationDetailedBaseType::setThreadLengthEngagement(LinearValueType * ThreadLengthEngagementIn)
{ThreadLengthEngagement = ThreadLengthEngagementIn;}

AttributesType * ThreadSpecificationDetailedBaseType::getAttributes()
{return Attributes;}

void ThreadSpecificationDetailedBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class ThreadSpecificationType

*/

ThreadSpecificationType::ThreadSpecificationType()
{
  ThreadSpecificationTypePair = 0;
}

ThreadSpecificationType::ThreadSpecificationType(
 ThreadSpecificationTypeChoicePair * ThreadSpecificationTypePairIn)
{
  ThreadSpecificationTypePair = ThreadSpecificationTypePairIn;
}

ThreadSpecificationType::~ThreadSpecificationType()
{
  #ifndef NODESTRUCT
  delete ThreadSpecificationTypePair;
  #endif
}

void ThreadSpecificationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ThreadSpecificationTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ThreadSpecificationTypeChoicePair * ThreadSpecificationType::getThreadSpecificationTypePair()
{return ThreadSpecificationTypePair;}

void ThreadSpecificationType::setThreadSpecificationTypePair(ThreadSpecificationTypeChoicePair * ThreadSpecificationTypePairIn)
{ThreadSpecificationTypePair = ThreadSpecificationTypePairIn;}
ThreadSpecificationTypeChoicePair::ThreadSpecificationTypeChoicePair() {}

ThreadSpecificationTypeChoicePair::ThreadSpecificationTypeChoicePair(
 whichOne ThreadSpecificationTypeTypeIn,
 ThreadSpecificationTypeVal ThreadSpecificationTypeValueIn)
{
  ThreadSpecificationTypeType = ThreadSpecificationTypeTypeIn;
  ThreadSpecificationTypeValue = ThreadSpecificationTypeValueIn;
}

ThreadSpecificationTypeChoicePair::~ThreadSpecificationTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ThreadSpecificationTypeType == SingleLeadSpecificationE)
    delete ThreadSpecificationTypeValue.SingleLeadSpecification;
  else if (ThreadSpecificationTypeType == MultiLeadSpecificationE)
    delete ThreadSpecificationTypeValue.MultiLeadSpecification;
  else if (ThreadSpecificationTypeType == TextThreadSpecificationE)
    delete ThreadSpecificationTypeValue.TextThreadSpecification;
  #endif
}

void ThreadSpecificationTypeChoicePair::printSelf(FILE * outFile)
{
  if (ThreadSpecificationTypeType == SingleLeadSpecificationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SingleLeadSpecification");
      ThreadSpecificationTypeValue.SingleLeadSpecification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SingleLeadSpecification>\n");
    }
  else if (ThreadSpecificationTypeType == MultiLeadSpecificationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MultiLeadSpecification");
      ThreadSpecificationTypeValue.MultiLeadSpecification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MultiLeadSpecification>\n");
    }
  else if (ThreadSpecificationTypeType == TextThreadSpecificationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TextThreadSpecification");
      ThreadSpecificationTypeValue.TextThreadSpecification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TextThreadSpecification>\n");
    }
}

/* ***************************************************************** */

/* class ThreadSpecificationTypeLisd

*/

ThreadSpecificationTypeLisd::ThreadSpecificationTypeLisd() {}

ThreadSpecificationTypeLisd::ThreadSpecificationTypeLisd(ThreadSpecificationType * aThreadSpecificationType)
{
  push_back(aThreadSpecificationType);
}

ThreadSpecificationTypeLisd::~ThreadSpecificationTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ThreadSpecificationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ThreadSpecificationTypeLisd::printSelf(FILE * outFile)
{
  std::list<ThreadSpecificationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ThreadSpecificationsType

*/

ThreadSpecificationsType::ThreadSpecificationsType()
{
  n = 0;
  ThreadSpecification = 0;
}

ThreadSpecificationsType::ThreadSpecificationsType(
 ThreadSpecificationTypeLisd * ThreadSpecificationIn)
{
  n = 0;
  ThreadSpecification = ThreadSpecificationIn;
}

ThreadSpecificationsType::ThreadSpecificationsType(
 NaturalType * nIn,
 ThreadSpecificationTypeLisd * ThreadSpecificationIn)
{
  n = nIn;
  ThreadSpecification = ThreadSpecificationIn;
}

ThreadSpecificationsType::~ThreadSpecificationsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ThreadSpecification;
  #endif
}

void ThreadSpecificationsType::printSelf(FILE * outFile)
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
    if (!ThreadSpecification)
      {
        fprintf(stderr, "ThreadSpecification list is missing\n");
        exit(1);
      }
    if (ThreadSpecification->size() == 0)
      {
        fprintf(stderr, "ThreadSpecification list is empty\n");
        exit(1);
      }
    if (ThreadSpecification->size() < 1)
      {
        fprintf(stderr,
                "size of ThreadSpecification list (%d) less than minimum required (1)\n",
                (int)ThreadSpecification->size());
        exit(1);
      }
    std::list<ThreadSpecificationType *>::iterator iter;
    for (iter = ThreadSpecification->begin();
         iter != ThreadSpecification->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ThreadSpecification");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ThreadSpecification>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ThreadSpecificationsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ThreadSpecificationsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ThreadSpecificationsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ThreadSpecificationsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ThreadSpecificationsType\n");
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

NaturalType * ThreadSpecificationsType::getn()
{return n;}

void ThreadSpecificationsType::setn(NaturalType * nIn)
{n = nIn;}

ThreadSpecificationTypeLisd * ThreadSpecificationsType::getThreadSpecification()
{return ThreadSpecification;}

void ThreadSpecificationsType::setThreadSpecification(ThreadSpecificationTypeLisd * ThreadSpecificationIn)
{ThreadSpecification = ThreadSpecificationIn;}

/* ***************************************************************** */

/* class TimeToleranceType

*/

TimeToleranceType::TimeToleranceType()
{
  TimeToleranceTy_1022 = 0;
  DefinedAsLimit = 0;
  Attributes = 0;
}

TimeToleranceType::TimeToleranceType(
 TimeToleranceTy_1022_Type * TimeToleranceTy_1022In,
 XmlBoolean * DefinedAsLimitIn,
 AttributesType * AttributesIn)
{
  TimeToleranceTy_1022 = TimeToleranceTy_1022In;
  DefinedAsLimit = DefinedAsLimitIn;
  Attributes = AttributesIn;
}

TimeToleranceType::~TimeToleranceType()
{
  #ifndef NODESTRUCT
  delete TimeToleranceTy_1022;
  delete DefinedAsLimit;
  delete Attributes;
  #endif
}

void TimeToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  TimeToleranceTy_1022->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DefinedAsLimit");
  DefinedAsLimit->printSelf(outFile);
  fprintf(outFile, "</DefinedAsLimit>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

TimeToleranceTy_1022_Type * TimeToleranceType::getTimeToleranceTy_1022()
{return TimeToleranceTy_1022;}

void TimeToleranceType::setTimeToleranceTy_1022(TimeToleranceTy_1022_Type * TimeToleranceTy_1022In)
{TimeToleranceTy_1022 = TimeToleranceTy_1022In;}

XmlBoolean * TimeToleranceType::getDefinedAsLimit()
{return DefinedAsLimit;}

void TimeToleranceType::setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn)
{DefinedAsLimit = DefinedAsLimitIn;}

AttributesType * TimeToleranceType::getAttributes()
{return Attributes;}

void TimeToleranceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class ToleranceZonePerUnitAngleType

*/

ToleranceZonePerUnitAngleType::ToleranceZonePerUnitAngleType()
{
  ToleranceValuePerUnit = 0;
  UnitAngle = 0;
}

ToleranceZonePerUnitAngleType::ToleranceZonePerUnitAngleType(
 LinearValueType * ToleranceValuePerUnitIn,
 AngularValueType * UnitAngleIn)
{
  ToleranceValuePerUnit = ToleranceValuePerUnitIn;
  UnitAngle = UnitAngleIn;
}

ToleranceZonePerUnitAngleType::~ToleranceZonePerUnitAngleType()
{
  #ifndef NODESTRUCT
  delete ToleranceValuePerUnit;
  delete UnitAngle;
  #endif
}

void ToleranceZonePerUnitAngleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ToleranceValuePerUnit");
  ToleranceValuePerUnit->printSelf(outFile);
  fprintf(outFile, "</ToleranceValuePerUnit>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitAngle");
  UnitAngle->printSelf(outFile);
  fprintf(outFile, "</UnitAngle>\n");
  doSpaces(-INDENT, outFile);
}

LinearValueType * ToleranceZonePerUnitAngleType::getToleranceValuePerUnit()
{return ToleranceValuePerUnit;}

void ToleranceZonePerUnitAngleType::setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn)
{ToleranceValuePerUnit = ToleranceValuePerUnitIn;}

AngularValueType * ToleranceZonePerUnitAngleType::getUnitAngle()
{return UnitAngle;}

void ToleranceZonePerUnitAngleType::setUnitAngle(AngularValueType * UnitAngleIn)
{UnitAngle = UnitAngleIn;}

/* ***************************************************************** */

/* class ToleranceZonePerUnitAreaType

*/

ToleranceZonePerUnitAreaType::ToleranceZonePerUnitAreaType()
{
  ToleranceValuePerUnit = 0;
  ToleranceZonePe_1023 = 0;
}

ToleranceZonePerUnitAreaType::ToleranceZonePerUnitAreaType(
 LinearValueType * ToleranceValuePerUnitIn,
 ToleranceZonePe_1023_Type * ToleranceZonePe_1023In)
{
  ToleranceValuePerUnit = ToleranceValuePerUnitIn;
  ToleranceZonePe_1023 = ToleranceZonePe_1023In;
}

ToleranceZonePerUnitAreaType::~ToleranceZonePerUnitAreaType()
{
  #ifndef NODESTRUCT
  delete ToleranceValuePerUnit;
  delete ToleranceZonePe_1023;
  #endif
}

void ToleranceZonePerUnitAreaType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ToleranceValuePerUnit");
  ToleranceValuePerUnit->printSelf(outFile);
  fprintf(outFile, "</ToleranceValuePerUnit>\n");
  ToleranceZonePe_1023->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

LinearValueType * ToleranceZonePerUnitAreaType::getToleranceValuePerUnit()
{return ToleranceValuePerUnit;}

void ToleranceZonePerUnitAreaType::setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn)
{ToleranceValuePerUnit = ToleranceValuePerUnitIn;}

ToleranceZonePe_1023_Type * ToleranceZonePerUnitAreaType::getToleranceZonePe_1023()
{return ToleranceZonePe_1023;}

void ToleranceZonePerUnitAreaType::setToleranceZonePe_1023(ToleranceZonePe_1023_Type * ToleranceZonePe_1023In)
{ToleranceZonePe_1023 = ToleranceZonePe_1023In;}

/* ***************************************************************** */

/* class ToleranceZonePerUnitLengthType

*/

ToleranceZonePerUnitLengthType::ToleranceZonePerUnitLengthType()
{
  ToleranceValuePerUnit = 0;
  UnitLength = 0;
}

ToleranceZonePerUnitLengthType::ToleranceZonePerUnitLengthType(
 LinearValueType * ToleranceValuePerUnitIn,
 LinearValueType * UnitLengthIn)
{
  ToleranceValuePerUnit = ToleranceValuePerUnitIn;
  UnitLength = UnitLengthIn;
}

ToleranceZonePerUnitLengthType::~ToleranceZonePerUnitLengthType()
{
  #ifndef NODESTRUCT
  delete ToleranceValuePerUnit;
  delete UnitLength;
  #endif
}

void ToleranceZonePerUnitLengthType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ToleranceValuePerUnit");
  ToleranceValuePerUnit->printSelf(outFile);
  fprintf(outFile, "</ToleranceValuePerUnit>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitLength");
  UnitLength->printSelf(outFile);
  fprintf(outFile, "</UnitLength>\n");
  doSpaces(-INDENT, outFile);
}

LinearValueType * ToleranceZonePerUnitLengthType::getToleranceValuePerUnit()
{return ToleranceValuePerUnit;}

void ToleranceZonePerUnitLengthType::setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn)
{ToleranceValuePerUnit = ToleranceValuePerUnitIn;}

LinearValueType * ToleranceZonePerUnitLengthType::getUnitLength()
{return UnitLength;}

void ToleranceZonePerUnitLengthType::setUnitLength(LinearValueType * UnitLengthIn)
{UnitLength = UnitLengthIn;}

/* ***************************************************************** */

/* class ToleranceZonePerUnitPolarAreaType

*/

ToleranceZonePerUnitPolarAreaType::ToleranceZonePerUnitPolarAreaType()
{
  ToleranceValuePerUnit = 0;
  UnitAngle = 0;
  UnitLength = 0;
}

ToleranceZonePerUnitPolarAreaType::ToleranceZonePerUnitPolarAreaType(
 LinearValueType * ToleranceValuePerUnitIn,
 AngularValueType * UnitAngleIn,
 LinearValueType * UnitLengthIn)
{
  ToleranceValuePerUnit = ToleranceValuePerUnitIn;
  UnitAngle = UnitAngleIn;
  UnitLength = UnitLengthIn;
}

ToleranceZonePerUnitPolarAreaType::~ToleranceZonePerUnitPolarAreaType()
{
  #ifndef NODESTRUCT
  delete ToleranceValuePerUnit;
  delete UnitAngle;
  delete UnitLength;
  #endif
}

void ToleranceZonePerUnitPolarAreaType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ToleranceValuePerUnit");
  ToleranceValuePerUnit->printSelf(outFile);
  fprintf(outFile, "</ToleranceValuePerUnit>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitAngle");
  UnitAngle->printSelf(outFile);
  fprintf(outFile, "</UnitAngle>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitLength");
  UnitLength->printSelf(outFile);
  fprintf(outFile, "</UnitLength>\n");
  doSpaces(-INDENT, outFile);
}

LinearValueType * ToleranceZonePerUnitPolarAreaType::getToleranceValuePerUnit()
{return ToleranceValuePerUnit;}

void ToleranceZonePerUnitPolarAreaType::setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn)
{ToleranceValuePerUnit = ToleranceValuePerUnitIn;}

AngularValueType * ToleranceZonePerUnitPolarAreaType::getUnitAngle()
{return UnitAngle;}

void ToleranceZonePerUnitPolarAreaType::setUnitAngle(AngularValueType * UnitAngleIn)
{UnitAngle = UnitAngleIn;}

LinearValueType * ToleranceZonePerUnitPolarAreaType::getUnitLength()
{return UnitLength;}

void ToleranceZonePerUnitPolarAreaType::setUnitLength(LinearValueType * UnitLengthIn)
{UnitLength = UnitLengthIn;}

/* ***************************************************************** */

/* class TransformInstanceType

*/

TransformInstanceType::TransformInstanceType() :
  TransformMatrixType()
{
  id = 0;
  Attributes = 0;
  Name = 0;
}

TransformInstanceType::TransformInstanceType(
 TransformRotationType * RotationIn,
 PointSimpleType * OriginIn,
 AttributesType * AttributesIn,
 XmlToken * NameIn) :
  TransformMatrixType(
    RotationIn,
    OriginIn)
{
  id = 0;
  Attributes = AttributesIn;
  Name = NameIn;
}

TransformInstanceType::TransformInstanceType(
 TransformRotationType * RotationIn,
 PointSimpleType * OriginIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * linearUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 ValidityEnumType * validityIn,
 XmlNonNegativeInteger * xDecimalPlacesIn,
 XmlNonNegativeInteger * xSignificantFiguresIn,
 ValidityEnumType * xValidityIn,
 XmlNonNegativeInteger * yDecimalPlacesIn,
 XmlNonNegativeInteger * ySignificantFiguresIn,
 ValidityEnumType * yValidityIn,
 XmlNonNegativeInteger * zDecimalPlacesIn,
 XmlNonNegativeInteger * zSignificantFiguresIn,
 ValidityEnumType * zValidityIn,
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlToken * NameIn) :
  TransformMatrixType(
    RotationIn,
    OriginIn,
    decimalPlacesIn,
    linearUnitIn,
    significantFiguresIn,
    validityIn,
    xDecimalPlacesIn,
    xSignificantFiguresIn,
    xValidityIn,
    yDecimalPlacesIn,
    ySignificantFiguresIn,
    yValidityIn,
    zDecimalPlacesIn,
    zSignificantFiguresIn,
    zValidityIn)
{
  id = idIn;
  Attributes = AttributesIn;
  Name = NameIn;
}

TransformInstanceType::~TransformInstanceType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete Name;
  #endif
}

void TransformInstanceType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (decimalPlaces)
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
      fprintf(outFile, "decimalPlaces=\"");
      decimalPlaces->oPrintSelf(outFile);
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
  if (linearUnit)
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
      fprintf(outFile, "linearUnit=\"");
      linearUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (significantFigures)
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
      fprintf(outFile, "significantFigures=\"");
      significantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (validity)
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
      fprintf(outFile, "validity=\"");
      validity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (xDecimalPlaces)
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
      fprintf(outFile, "xDecimalPlaces=\"");
      xDecimalPlaces->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (xSignificantFigures)
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
      fprintf(outFile, "xSignificantFigures=\"");
      xSignificantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (xValidity)
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
      fprintf(outFile, "xValidity=\"");
      xValidity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (yDecimalPlaces)
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
      fprintf(outFile, "yDecimalPlaces=\"");
      yDecimalPlaces->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (ySignificantFigures)
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
      fprintf(outFile, "ySignificantFigures=\"");
      ySignificantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (yValidity)
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
      fprintf(outFile, "yValidity=\"");
      yValidity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (zDecimalPlaces)
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
      fprintf(outFile, "zDecimalPlaces=\"");
      zDecimalPlaces->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (zSignificantFigures)
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
      fprintf(outFile, "zSignificantFigures=\"");
      zSignificantFigures->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (zValidity)
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
      fprintf(outFile, "zValidity=\"");
      zValidity->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Rotation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Rotation");
      Rotation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Rotation>\n");
    }
  if (Origin)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Origin");
      Origin->printSelf(outFile);
      fprintf(outFile, "</Origin>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool TransformInstanceType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->linearUnit = linearUnitVal;
        }
      else if (decl->getname() == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->getname() == "validity")
        {
          ValidityEnumType * validityVal;
          if (this->validity)
            {
              fprintf(stderr, "two values for validity in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->validity = validityVal;
        }
      else if (decl->getname() == "xDecimalPlaces")
        {
          XmlNonNegativeInteger * xDecimalPlacesVal;
          if (this->xDecimalPlaces)
            {
              fprintf(stderr, "two values for xDecimalPlaces in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xDecimalPlaces = xDecimalPlacesVal;
        }
      else if (decl->getname() == "xSignificantFigures")
        {
          XmlNonNegativeInteger * xSignificantFiguresVal;
          if (this->xSignificantFigures)
            {
              fprintf(stderr, "two values for xSignificantFigures in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xSignificantFigures = xSignificantFiguresVal;
        }
      else if (decl->getname() == "xValidity")
        {
          ValidityEnumType * xValidityVal;
          if (this->xValidity)
            {
              fprintf(stderr, "two values for xValidity in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xValidity = xValidityVal;
        }
      else if (decl->getname() == "yDecimalPlaces")
        {
          XmlNonNegativeInteger * yDecimalPlacesVal;
          if (this->yDecimalPlaces)
            {
              fprintf(stderr, "two values for yDecimalPlaces in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->yDecimalPlaces = yDecimalPlacesVal;
        }
      else if (decl->getname() == "ySignificantFigures")
        {
          XmlNonNegativeInteger * ySignificantFiguresVal;
          if (this->ySignificantFigures)
            {
              fprintf(stderr, "two values for ySignificantFigures in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->ySignificantFigures = ySignificantFiguresVal;
        }
      else if (decl->getname() == "yValidity")
        {
          ValidityEnumType * yValidityVal;
          if (this->yValidity)
            {
              fprintf(stderr, "two values for yValidity in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->yValidity = yValidityVal;
        }
      else if (decl->getname() == "zDecimalPlaces")
        {
          XmlNonNegativeInteger * zDecimalPlacesVal;
          if (this->zDecimalPlaces)
            {
              fprintf(stderr, "two values for zDecimalPlaces in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zDecimalPlaces = zDecimalPlacesVal;
        }
      else if (decl->getname() == "zSignificantFigures")
        {
          XmlNonNegativeInteger * zSignificantFiguresVal;
          if (this->zSignificantFigures)
            {
              fprintf(stderr, "two values for zSignificantFigures in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zSignificantFigures = zSignificantFiguresVal;
        }
      else if (decl->getname() == "zValidity")
        {
          ValidityEnumType * zValidityVal;
          if (this->zValidity)
            {
              fprintf(stderr, "two values for zValidity in TransformInstanceType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in TransformInstanceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TransformInstanceType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in TransformInstanceType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->id;
      this->id = 0;
      delete this->linearUnit;
      this->linearUnit = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->validity;
      this->validity = 0;
      delete this->xDecimalPlaces;
      this->xDecimalPlaces = 0;
      delete this->xSignificantFigures;
      this->xSignificantFigures = 0;
      delete this->xValidity;
      this->xValidity = 0;
      delete this->yDecimalPlaces;
      this->yDecimalPlaces = 0;
      delete this->ySignificantFigures;
      this->ySignificantFigures = 0;
      delete this->yValidity;
      this->yValidity = 0;
      delete this->zDecimalPlaces;
      this->zDecimalPlaces = 0;
      delete this->zSignificantFigures;
      this->zSignificantFigures = 0;
      delete this->zValidity;
      this->zValidity = 0;
    }
  return returnValue;
}

QIFIdType * TransformInstanceType::getid()
{return id;}

void TransformInstanceType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * TransformInstanceType::getAttributes()
{return Attributes;}

void TransformInstanceType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlToken * TransformInstanceType::getName()
{return Name;}

void TransformInstanceType::setName(XmlToken * NameIn)
{Name = NameIn;}

/* ***************************************************************** */

/* class TransformInstanceTypeLisd

*/

TransformInstanceTypeLisd::TransformInstanceTypeLisd() {}

TransformInstanceTypeLisd::TransformInstanceTypeLisd(TransformInstanceType * aTransformInstanceType)
{
  push_back(aTransformInstanceType);
}

TransformInstanceTypeLisd::~TransformInstanceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TransformInstanceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TransformInstanceTypeLisd::printSelf(FILE * outFile)
{
  std::list<TransformInstanceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class TransformListType

*/

TransformListType::TransformListType()
{
  n = 0;
  Transform = 0;
}

TransformListType::TransformListType(
 TransformInstanceTypeLisd * TransformIn)
{
  n = 0;
  Transform = TransformIn;
}

TransformListType::TransformListType(
 NaturalType * nIn,
 TransformInstanceTypeLisd * TransformIn)
{
  n = nIn;
  Transform = TransformIn;
}

TransformListType::~TransformListType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Transform;
  #endif
}

void TransformListType::printSelf(FILE * outFile)
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
    if (!Transform)
      {
        fprintf(stderr, "Transform list is missing\n");
        exit(1);
      }
    if (Transform->size() == 0)
      {
        fprintf(stderr, "Transform list is empty\n");
        exit(1);
      }
    if (Transform->size() < 1)
      {
        fprintf(stderr,
                "size of Transform list (%d) less than minimum required (1)\n",
                (int)Transform->size());
        exit(1);
      }
    std::list<TransformInstanceType *>::iterator iter;
    for (iter = Transform->begin();
         iter != Transform->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Transform");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Transform>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool TransformListType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in TransformListType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in TransformListType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TransformListType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in TransformListType\n");
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

NaturalType * TransformListType::getn()
{return n;}

void TransformListType::setn(NaturalType * nIn)
{n = nIn;}

TransformInstanceTypeLisd * TransformListType::getTransform()
{return Transform;}

void TransformListType::setTransform(TransformInstanceTypeLisd * TransformIn)
{Transform = TransformIn;}

/* ***************************************************************** */

/* class VersionBaseType

*/

VersionBaseType::VersionBaseType()
{
  TimeCreated = 0;
  SignOffs = 0;
}

VersionBaseType::VersionBaseType(
 XmlDateTime * TimeCreatedIn,
 SignOffsType * SignOffsIn)
{
  TimeCreated = TimeCreatedIn;
  SignOffs = SignOffsIn;
}

VersionBaseType::~VersionBaseType()
{
  #ifndef NODESTRUCT
  delete TimeCreated;
  delete SignOffs;
  #endif
}

void VersionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (TimeCreated)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeCreated");
      TimeCreated->printSelf(outFile);
      fprintf(outFile, "</TimeCreated>\n");
    }
  if (SignOffs)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SignOffs");
      SignOffs->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SignOffs>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlDateTime * VersionBaseType::getTimeCreated()
{return TimeCreated;}

void VersionBaseType::setTimeCreated(XmlDateTime * TimeCreatedIn)
{TimeCreated = TimeCreatedIn;}

SignOffsType * VersionBaseType::getSignOffs()
{return SignOffs;}

void VersionBaseType::setSignOffs(SignOffsType * SignOffsIn)
{SignOffs = SignOffsIn;}

/* ***************************************************************** */

/* class VersionHistoryType

*/

VersionHistoryType::VersionHistoryType()
{
  n = 0;
  EarlierVersion = 0;
}

VersionHistoryType::VersionHistoryType(
 VersionReferenceTypeLisd * EarlierVersionIn)
{
  n = 0;
  EarlierVersion = EarlierVersionIn;
}

VersionHistoryType::VersionHistoryType(
 NaturalType * nIn,
 VersionReferenceTypeLisd * EarlierVersionIn)
{
  n = nIn;
  EarlierVersion = EarlierVersionIn;
}

VersionHistoryType::~VersionHistoryType()
{
  #ifndef NODESTRUCT
  delete n;
  delete EarlierVersion;
  #endif
}

void VersionHistoryType::printSelf(FILE * outFile)
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
    if (!EarlierVersion)
      {
        fprintf(stderr, "EarlierVersion list is missing\n");
        exit(1);
      }
    if (EarlierVersion->size() == 0)
      {
        fprintf(stderr, "EarlierVersion list is empty\n");
        exit(1);
      }
    if (EarlierVersion->size() < 1)
      {
        fprintf(stderr,
                "size of EarlierVersion list (%d) less than minimum required (1)\n",
                (int)EarlierVersion->size());
        exit(1);
      }
    std::list<VersionReferenceType *>::iterator iter;
    for (iter = EarlierVersion->begin();
         iter != EarlierVersion->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<EarlierVersion");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</EarlierVersion>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool VersionHistoryType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in VersionHistoryType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in VersionHistoryType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in VersionHistoryType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in VersionHistoryType\n");
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

NaturalType * VersionHistoryType::getn()
{return n;}

void VersionHistoryType::setn(NaturalType * nIn)
{n = nIn;}

VersionReferenceTypeLisd * VersionHistoryType::getEarlierVersion()
{return EarlierVersion;}

void VersionHistoryType::setEarlierVersion(VersionReferenceTypeLisd * EarlierVersionIn)
{EarlierVersion = EarlierVersionIn;}

/* ***************************************************************** */

/* class VersionReferenceType

*/

VersionReferenceType::VersionReferenceType() :
  VersionBaseType()
{
  QPIdReference = 0;
}

VersionReferenceType::VersionReferenceType(
 XmlDateTime * TimeCreatedIn,
 SignOffsType * SignOffsIn,
 QPIdReferenceType * QPIdReferenceIn) :
  VersionBaseType(
    TimeCreatedIn,
    SignOffsIn)
{
  QPIdReference = QPIdReferenceIn;
}

VersionReferenceType::~VersionReferenceType()
{
  #ifndef NODESTRUCT
  delete QPIdReference;
  #endif
}

void VersionReferenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (TimeCreated)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeCreated");
      TimeCreated->printSelf(outFile);
      fprintf(outFile, "</TimeCreated>\n");
    }
  if (SignOffs)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SignOffs");
      SignOffs->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SignOffs>\n");
    }
  if (QPIdReference)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<QPIdReference");
      QPIdReference->printSelf(outFile);
      fprintf(outFile, "</QPIdReference>\n");
    }
  doSpaces(-INDENT, outFile);
}

QPIdReferenceType * VersionReferenceType::getQPIdReference()
{return QPIdReference;}

void VersionReferenceType::setQPIdReference(QPIdReferenceType * QPIdReferenceIn)
{QPIdReference = QPIdReferenceIn;}

/* ***************************************************************** */

/* class VersionReferenceTypeLisd

*/

VersionReferenceTypeLisd::VersionReferenceTypeLisd() {}

VersionReferenceTypeLisd::VersionReferenceTypeLisd(VersionReferenceType * aVersionReferenceType)
{
  push_back(aVersionReferenceType);
}

VersionReferenceTypeLisd::~VersionReferenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<VersionReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void VersionReferenceTypeLisd::printSelf(FILE * outFile)
{
  std::list<VersionReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class VersionType

*/

VersionType::VersionType() :
  VersionBaseType()
{
  ThisInstanceQPId = 0;
}

VersionType::VersionType(
 XmlDateTime * TimeCreatedIn,
 SignOffsType * SignOffsIn,
 QPIdType * ThisInstanceQPIdIn) :
  VersionBaseType(
    TimeCreatedIn,
    SignOffsIn)
{
  ThisInstanceQPId = ThisInstanceQPIdIn;
}

VersionType::~VersionType()
{
  #ifndef NODESTRUCT
  delete ThisInstanceQPId;
  #endif
}

void VersionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (TimeCreated)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeCreated");
      TimeCreated->printSelf(outFile);
      fprintf(outFile, "</TimeCreated>\n");
    }
  if (SignOffs)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SignOffs");
      SignOffs->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SignOffs>\n");
    }
  if (ThisInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisInstanceQPId");
      ThisInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisInstanceQPId>\n");
    }
  doSpaces(-INDENT, outFile);
}

QPIdType * VersionType::getThisInstanceQPId()
{return ThisInstanceQPId;}

void VersionType::setThisInstanceQPId(QPIdType * ThisInstanceQPIdIn)
{ThisInstanceQPId = ThisInstanceQPIdIn;}

/* ***************************************************************** */

/* class VirtualMeasurementType

*/

VirtualMeasurementType::VirtualMeasurementType()
{
  id = 0;
}

VirtualMeasurementType::VirtualMeasurementType(
 QIFIdType * idIn)
{
  id = idIn;
}

VirtualMeasurementType::~VirtualMeasurementType()
{
  delete id;
}

void VirtualMeasurementType::printSelf(FILE * outFile)
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
  fprintf(outFile, "/>\n");
}

bool VirtualMeasurementType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in VirtualMeasurementType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in VirtualMeasurementType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in VirtualMeasurementType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in VirtualMeasurementType\n");
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

QIFIdType * VirtualMeasurementType::getid()
{return id;}

void VirtualMeasurementType::setid(QIFIdType * idIn)
{id = idIn;}

/* ***************************************************************** */

/* class ZoneDataSetType

*/

ZoneDataSetType::ZoneDataSetType()
{
  n = 0;
  ZoneData = 0;
}

ZoneDataSetType::ZoneDataSetType(
 ZoneDataTypeLisd * ZoneDataIn)
{
  n = 0;
  ZoneData = ZoneDataIn;
}

ZoneDataSetType::ZoneDataSetType(
 NaturalType * nIn,
 ZoneDataTypeLisd * ZoneDataIn)
{
  n = nIn;
  ZoneData = ZoneDataIn;
}

ZoneDataSetType::~ZoneDataSetType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ZoneData;
  #endif
}

void ZoneDataSetType::printSelf(FILE * outFile)
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
    if (!ZoneData)
      {
        fprintf(stderr, "ZoneData list is missing\n");
        exit(1);
      }
    if (ZoneData->size() == 0)
      {
        fprintf(stderr, "ZoneData list is empty\n");
        exit(1);
      }
    if (ZoneData->size() < 1)
      {
        fprintf(stderr,
                "size of ZoneData list (%d) less than minimum required (1)\n",
                (int)ZoneData->size());
        exit(1);
      }
    std::list<ZoneDataType *>::iterator iter;
    for (iter = ZoneData->begin();
         iter != ZoneData->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ZoneData");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ZoneData>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ZoneDataSetType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ZoneDataSetType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ZoneDataSetType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ZoneDataSetType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ZoneDataSetType\n");
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

NaturalType * ZoneDataSetType::getn()
{return n;}

void ZoneDataSetType::setn(NaturalType * nIn)
{n = nIn;}

ZoneDataTypeLisd * ZoneDataSetType::getZoneData()
{return ZoneData;}

void ZoneDataSetType::setZoneData(ZoneDataTypeLisd * ZoneDataIn)
{ZoneData = ZoneDataIn;}

/* ***************************************************************** */

/* class ZoneDataType

*/

ZoneDataType::ZoneDataType()
{
  FeatureItemId = 0;
  Bonus = 0;
  ReferenceLength = 0;
}

ZoneDataType::ZoneDataType(
 QIFReferenceType * FeatureItemIdIn,
 LinearValueType * BonusIn,
 LinearValueType * ReferenceLengthIn)
{
  FeatureItemId = FeatureItemIdIn;
  Bonus = BonusIn;
  ReferenceLength = ReferenceLengthIn;
}

ZoneDataType::~ZoneDataType()
{
  #ifndef NODESTRUCT
  delete FeatureItemId;
  delete Bonus;
  delete ReferenceLength;
  #endif
}

void ZoneDataType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureItemId");
  FeatureItemId->printSelf(outFile);
  fprintf(outFile, "</FeatureItemId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Bonus");
  Bonus->printSelf(outFile);
  fprintf(outFile, "</Bonus>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ReferenceLength");
  ReferenceLength->printSelf(outFile);
  fprintf(outFile, "</ReferenceLength>\n");
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * ZoneDataType::getFeatureItemId()
{return FeatureItemId;}

void ZoneDataType::setFeatureItemId(QIFReferenceType * FeatureItemIdIn)
{FeatureItemId = FeatureItemIdIn;}

LinearValueType * ZoneDataType::getBonus()
{return Bonus;}

void ZoneDataType::setBonus(LinearValueType * BonusIn)
{Bonus = BonusIn;}

LinearValueType * ZoneDataType::getReferenceLength()
{return ReferenceLength;}

void ZoneDataType::setReferenceLength(LinearValueType * ReferenceLengthIn)
{ReferenceLength = ReferenceLengthIn;}

/* ***************************************************************** */

/* class ZoneDataTypeLisd

*/

ZoneDataTypeLisd::ZoneDataTypeLisd() {}

ZoneDataTypeLisd::ZoneDataTypeLisd(ZoneDataType * aZoneDataType)
{
  push_back(aZoneDataType);
}

ZoneDataTypeLisd::~ZoneDataTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ZoneDataType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ZoneDataTypeLisd::printSelf(FILE * outFile)
{
  std::list<ZoneDataType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AlgorithmType_1006_Type

*/

AlgorithmType_1006_Type::AlgorithmType_1006_Type()
{
  AlgorithmType_1006_TypePair = 0;
}

AlgorithmType_1006_Type::AlgorithmType_1006_Type(
 AlgorithmType_1006_TypeChoicePair * AlgorithmType_1006_TypePairIn)
{
  AlgorithmType_1006_TypePair = AlgorithmType_1006_TypePairIn;
}

AlgorithmType_1006_Type::~AlgorithmType_1006_Type()
{
  #ifndef NODESTRUCT
  delete AlgorithmType_1006_TypePair;
  #endif
}

void AlgorithmType_1006_Type::printSelf(FILE * outFile)
{
  AlgorithmType_1006_TypePair->printSelf(outFile);
}

AlgorithmType_1006_TypeChoicePair * AlgorithmType_1006_Type::getAlgorithmType_1006_TypePair()
{return AlgorithmType_1006_TypePair;}

void AlgorithmType_1006_Type::setAlgorithmType_1006_TypePair(AlgorithmType_1006_TypeChoicePair * AlgorithmType_1006_TypePairIn)
{AlgorithmType_1006_TypePair = AlgorithmType_1006_TypePairIn;}
AlgorithmType_1006_TypeChoicePair::AlgorithmType_1006_TypeChoicePair() {}

AlgorithmType_1006_TypeChoicePair::AlgorithmType_1006_TypeChoicePair(
 whichOne AlgorithmType_1006_TypeTypeIn,
 AlgorithmType_1006_TypeVal AlgorithmType_1006_TypeValueIn)
{
  AlgorithmType_1006_TypeType = AlgorithmType_1006_TypeTypeIn;
  AlgorithmType_1006_TypeValue = AlgorithmType_1006_TypeValueIn;
}

AlgorithmType_1006_TypeChoicePair::~AlgorithmType_1006_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (AlgorithmType_1006_TypeType == AlgorithmType_1_1024E)
    delete AlgorithmType_1006_TypeValue.AlgorithmType_1_1024;
  else if (AlgorithmType_1006_TypeType == AlgorithmType_1_1025E)
    delete AlgorithmType_1006_TypeValue.AlgorithmType_1_1025;
  #endif
}

void AlgorithmType_1006_TypeChoicePair::printSelf(FILE * outFile)
{
  if (AlgorithmType_1006_TypeType == AlgorithmType_1_1024E)
    {
      AlgorithmType_1006_TypeValue.AlgorithmType_1_1024->printSelf(outFile);
    }
  else if (AlgorithmType_1006_TypeType == AlgorithmType_1_1025E)
    {
      AlgorithmType_1006_TypeValue.AlgorithmType_1_1025->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AngularToleranc_1007_Type

*/

AngularToleranc_1007_Type::AngularToleranc_1007_Type()
{
  AngularToleranc_1007_TypePair = 0;
}

AngularToleranc_1007_Type::AngularToleranc_1007_Type(
 AngularToleranc_1007_TypeChoicePair * AngularToleranc_1007_TypePairIn)
{
  AngularToleranc_1007_TypePair = AngularToleranc_1007_TypePairIn;
}

AngularToleranc_1007_Type::~AngularToleranc_1007_Type()
{
  #ifndef NODESTRUCT
  delete AngularToleranc_1007_TypePair;
  #endif
}

void AngularToleranc_1007_Type::printSelf(FILE * outFile)
{
  AngularToleranc_1007_TypePair->printSelf(outFile);
}

AngularToleranc_1007_TypeChoicePair * AngularToleranc_1007_Type::getAngularToleranc_1007_TypePair()
{return AngularToleranc_1007_TypePair;}

void AngularToleranc_1007_Type::setAngularToleranc_1007_TypePair(AngularToleranc_1007_TypeChoicePair * AngularToleranc_1007_TypePairIn)
{AngularToleranc_1007_TypePair = AngularToleranc_1007_TypePairIn;}
AngularToleranc_1007_TypeChoicePair::AngularToleranc_1007_TypeChoicePair() {}

AngularToleranc_1007_TypeChoicePair::AngularToleranc_1007_TypeChoicePair(
 whichOne AngularToleranc_1007_TypeTypeIn,
 AngularToleranc_1007_TypeVal AngularToleranc_1007_TypeValueIn)
{
  AngularToleranc_1007_TypeType = AngularToleranc_1007_TypeTypeIn;
  AngularToleranc_1007_TypeValue = AngularToleranc_1007_TypeValueIn;
}

AngularToleranc_1007_TypeChoicePair::~AngularToleranc_1007_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (AngularToleranc_1007_TypeType == AngularToleranc_1026E)
    delete AngularToleranc_1007_TypeValue.AngularToleranc_1026;
  else if (AngularToleranc_1007_TypeType == MinValueE)
    delete AngularToleranc_1007_TypeValue.MinValue;
  #endif
}

void AngularToleranc_1007_TypeChoicePair::printSelf(FILE * outFile)
{
  if (AngularToleranc_1007_TypeType == AngularToleranc_1026E)
    {
      AngularToleranc_1007_TypeValue.AngularToleranc_1026->printSelf(outFile);
    }
  else if (AngularToleranc_1007_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      AngularToleranc_1007_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class AngularToleranc_1008_Type

*/

AngularToleranc_1008_Type::AngularToleranc_1008_Type()
{
  AngularToleranc_1008_TypePair = 0;
}

AngularToleranc_1008_Type::AngularToleranc_1008_Type(
 AngularToleranc_1008_TypeChoicePair * AngularToleranc_1008_TypePairIn)
{
  AngularToleranc_1008_TypePair = AngularToleranc_1008_TypePairIn;
}

AngularToleranc_1008_Type::~AngularToleranc_1008_Type()
{
  #ifndef NODESTRUCT
  delete AngularToleranc_1008_TypePair;
  #endif
}

void AngularToleranc_1008_Type::printSelf(FILE * outFile)
{
  AngularToleranc_1008_TypePair->printSelf(outFile);
}

AngularToleranc_1008_TypeChoicePair * AngularToleranc_1008_Type::getAngularToleranc_1008_TypePair()
{return AngularToleranc_1008_TypePair;}

void AngularToleranc_1008_Type::setAngularToleranc_1008_TypePair(AngularToleranc_1008_TypeChoicePair * AngularToleranc_1008_TypePairIn)
{AngularToleranc_1008_TypePair = AngularToleranc_1008_TypePairIn;}
AngularToleranc_1008_TypeChoicePair::AngularToleranc_1008_TypeChoicePair() {}

AngularToleranc_1008_TypeChoicePair::AngularToleranc_1008_TypeChoicePair(
 whichOne AngularToleranc_1008_TypeTypeIn,
 AngularToleranc_1008_TypeVal AngularToleranc_1008_TypeValueIn)
{
  AngularToleranc_1008_TypeType = AngularToleranc_1008_TypeTypeIn;
  AngularToleranc_1008_TypeValue = AngularToleranc_1008_TypeValueIn;
}

AngularToleranc_1008_TypeChoicePair::~AngularToleranc_1008_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (AngularToleranc_1008_TypeType == AngularToleranc_1027E)
    delete AngularToleranc_1008_TypeValue.AngularToleranc_1027;
  else if (AngularToleranc_1008_TypeType == MinValueE)
    delete AngularToleranc_1008_TypeValue.MinValue;
  else if (AngularToleranc_1008_TypeType == DefinitionIdE)
    delete AngularToleranc_1008_TypeValue.DefinitionId;
  #endif
}

void AngularToleranc_1008_TypeChoicePair::printSelf(FILE * outFile)
{
  if (AngularToleranc_1008_TypeType == AngularToleranc_1027E)
    {
      AngularToleranc_1008_TypeValue.AngularToleranc_1027->printSelf(outFile);
    }
  else if (AngularToleranc_1008_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      AngularToleranc_1008_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
  else if (AngularToleranc_1008_TypeType == DefinitionIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DefinitionId");
      AngularToleranc_1008_TypeValue.DefinitionId->printSelf(outFile);
      fprintf(outFile, "</DefinitionId>\n");
    }
}

/* ***************************************************************** */

/* class AreaToleranceTy_1009_Type

*/

AreaToleranceTy_1009_Type::AreaToleranceTy_1009_Type()
{
  AreaToleranceTy_1009_TypePair = 0;
}

AreaToleranceTy_1009_Type::AreaToleranceTy_1009_Type(
 AreaToleranceTy_1009_TypeChoicePair * AreaToleranceTy_1009_TypePairIn)
{
  AreaToleranceTy_1009_TypePair = AreaToleranceTy_1009_TypePairIn;
}

AreaToleranceTy_1009_Type::~AreaToleranceTy_1009_Type()
{
  #ifndef NODESTRUCT
  delete AreaToleranceTy_1009_TypePair;
  #endif
}

void AreaToleranceTy_1009_Type::printSelf(FILE * outFile)
{
  AreaToleranceTy_1009_TypePair->printSelf(outFile);
}

AreaToleranceTy_1009_TypeChoicePair * AreaToleranceTy_1009_Type::getAreaToleranceTy_1009_TypePair()
{return AreaToleranceTy_1009_TypePair;}

void AreaToleranceTy_1009_Type::setAreaToleranceTy_1009_TypePair(AreaToleranceTy_1009_TypeChoicePair * AreaToleranceTy_1009_TypePairIn)
{AreaToleranceTy_1009_TypePair = AreaToleranceTy_1009_TypePairIn;}
AreaToleranceTy_1009_TypeChoicePair::AreaToleranceTy_1009_TypeChoicePair() {}

AreaToleranceTy_1009_TypeChoicePair::AreaToleranceTy_1009_TypeChoicePair(
 whichOne AreaToleranceTy_1009_TypeTypeIn,
 AreaToleranceTy_1009_TypeVal AreaToleranceTy_1009_TypeValueIn)
{
  AreaToleranceTy_1009_TypeType = AreaToleranceTy_1009_TypeTypeIn;
  AreaToleranceTy_1009_TypeValue = AreaToleranceTy_1009_TypeValueIn;
}

AreaToleranceTy_1009_TypeChoicePair::~AreaToleranceTy_1009_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (AreaToleranceTy_1009_TypeType == AreaToleranceTy_1028E)
    delete AreaToleranceTy_1009_TypeValue.AreaToleranceTy_1028;
  else if (AreaToleranceTy_1009_TypeType == MinValueE)
    delete AreaToleranceTy_1009_TypeValue.MinValue;
  #endif
}

void AreaToleranceTy_1009_TypeChoicePair::printSelf(FILE * outFile)
{
  if (AreaToleranceTy_1009_TypeType == AreaToleranceTy_1028E)
    {
      AreaToleranceTy_1009_TypeValue.AreaToleranceTy_1028->printSelf(outFile);
    }
  else if (AreaToleranceTy_1009_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      AreaToleranceTy_1009_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class DatumWithPreced_1010_Type

*/

DatumWithPreced_1010_Type::DatumWithPreced_1010_Type()
{
  DatumWithPreced_1010_TypePair = 0;
}

DatumWithPreced_1010_Type::DatumWithPreced_1010_Type(
 DatumWithPreced_1010_TypeChoicePair * DatumWithPreced_1010_TypePairIn)
{
  DatumWithPreced_1010_TypePair = DatumWithPreced_1010_TypePairIn;
}

DatumWithPreced_1010_Type::~DatumWithPreced_1010_Type()
{
  #ifndef NODESTRUCT
  delete DatumWithPreced_1010_TypePair;
  #endif
}

void DatumWithPreced_1010_Type::printSelf(FILE * outFile)
{
  DatumWithPreced_1010_TypePair->printSelf(outFile);
}

DatumWithPreced_1010_TypeChoicePair * DatumWithPreced_1010_Type::getDatumWithPreced_1010_TypePair()
{return DatumWithPreced_1010_TypePair;}

void DatumWithPreced_1010_Type::setDatumWithPreced_1010_TypePair(DatumWithPreced_1010_TypeChoicePair * DatumWithPreced_1010_TypePairIn)
{DatumWithPreced_1010_TypePair = DatumWithPreced_1010_TypePairIn;}
DatumWithPreced_1010_TypeChoicePair::DatumWithPreced_1010_TypeChoicePair() {}

DatumWithPreced_1010_TypeChoicePair::DatumWithPreced_1010_TypeChoicePair(
 whichOne DatumWithPreced_1010_TypeTypeIn,
 DatumWithPreced_1010_TypeVal DatumWithPreced_1010_TypeValueIn)
{
  DatumWithPreced_1010_TypeType = DatumWithPreced_1010_TypeTypeIn;
  DatumWithPreced_1010_TypeValue = DatumWithPreced_1010_TypeValueIn;
}

DatumWithPreced_1010_TypeChoicePair::~DatumWithPreced_1010_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (DatumWithPreced_1010_TypeType == SimpleDatumE)
    delete DatumWithPreced_1010_TypeValue.SimpleDatum;
  else if (DatumWithPreced_1010_TypeType == NominalDatumFeatureE)
    delete DatumWithPreced_1010_TypeValue.NominalDatumFeature;
  else if (DatumWithPreced_1010_TypeType == MeasuredDatumFeatureE)
    delete DatumWithPreced_1010_TypeValue.MeasuredDatumFeature;
  else if (DatumWithPreced_1010_TypeType == CompoundDatumE)
    delete DatumWithPreced_1010_TypeValue.CompoundDatum;
  #endif
}

void DatumWithPreced_1010_TypeChoicePair::printSelf(FILE * outFile)
{
  if (DatumWithPreced_1010_TypeType == SimpleDatumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SimpleDatum");
      DatumWithPreced_1010_TypeValue.SimpleDatum->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SimpleDatum>\n");
    }
  else if (DatumWithPreced_1010_TypeType == NominalDatumFeatureE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NominalDatumFeature");
      DatumWithPreced_1010_TypeValue.NominalDatumFeature->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NominalDatumFeature>\n");
    }
  else if (DatumWithPreced_1010_TypeType == MeasuredDatumFeatureE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasuredDatumFeature");
      DatumWithPreced_1010_TypeValue.MeasuredDatumFeature->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasuredDatumFeature>\n");
    }
  else if (DatumWithPreced_1010_TypeType == CompoundDatumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CompoundDatum");
      DatumWithPreced_1010_TypeValue.CompoundDatum->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CompoundDatum>\n");
    }
}

/* ***************************************************************** */

/* class DirectionalOffs_1011_Type

*/

DirectionalOffs_1011_Type::DirectionalOffs_1011_Type()
{
  DirectionalOffs_1011_TypePair = 0;
}

DirectionalOffs_1011_Type::DirectionalOffs_1011_Type(
 DirectionalOffs_1011_TypeChoicePair * DirectionalOffs_1011_TypePairIn)
{
  DirectionalOffs_1011_TypePair = DirectionalOffs_1011_TypePairIn;
}

DirectionalOffs_1011_Type::~DirectionalOffs_1011_Type()
{
  #ifndef NODESTRUCT
  delete DirectionalOffs_1011_TypePair;
  #endif
}

void DirectionalOffs_1011_Type::printSelf(FILE * outFile)
{
  DirectionalOffs_1011_TypePair->printSelf(outFile);
}

DirectionalOffs_1011_TypeChoicePair * DirectionalOffs_1011_Type::getDirectionalOffs_1011_TypePair()
{return DirectionalOffs_1011_TypePair;}

void DirectionalOffs_1011_Type::setDirectionalOffs_1011_TypePair(DirectionalOffs_1011_TypeChoicePair * DirectionalOffs_1011_TypePairIn)
{DirectionalOffs_1011_TypePair = DirectionalOffs_1011_TypePairIn;}
DirectionalOffs_1011_TypeChoicePair::DirectionalOffs_1011_TypeChoicePair() {}

DirectionalOffs_1011_TypeChoicePair::DirectionalOffs_1011_TypeChoicePair(
 whichOne DirectionalOffs_1011_TypeTypeIn,
 DirectionalOffs_1011_TypeVal DirectionalOffs_1011_TypeValueIn)
{
  DirectionalOffs_1011_TypeType = DirectionalOffs_1011_TypeTypeIn;
  DirectionalOffs_1011_TypeValue = DirectionalOffs_1011_TypeValueIn;
}

DirectionalOffs_1011_TypeChoicePair::~DirectionalOffs_1011_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (DirectionalOffs_1011_TypeType == NominalDirectionE)
    delete DirectionalOffs_1011_TypeValue.NominalDirection;
  else if (DirectionalOffs_1011_TypeType == FeatureDirectionE)
    delete DirectionalOffs_1011_TypeValue.FeatureDirection;
  #endif
}

void DirectionalOffs_1011_TypeChoicePair::printSelf(FILE * outFile)
{
  if (DirectionalOffs_1011_TypeType == NominalDirectionE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NominalDirection");
      DirectionalOffs_1011_TypeValue.NominalDirection->printSelf(outFile);
      fprintf(outFile, "</NominalDirection>\n");
    }
  else if (DirectionalOffs_1011_TypeType == FeatureDirectionE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureDirection");
      DirectionalOffs_1011_TypeValue.FeatureDirection->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</FeatureDirection>\n");
    }
}

/* ***************************************************************** */

/* class ForceToleranceT_1012_Type

*/

ForceToleranceT_1012_Type::ForceToleranceT_1012_Type()
{
  ForceToleranceT_1012_TypePair = 0;
}

ForceToleranceT_1012_Type::ForceToleranceT_1012_Type(
 ForceToleranceT_1012_TypeChoicePair * ForceToleranceT_1012_TypePairIn)
{
  ForceToleranceT_1012_TypePair = ForceToleranceT_1012_TypePairIn;
}

ForceToleranceT_1012_Type::~ForceToleranceT_1012_Type()
{
  #ifndef NODESTRUCT
  delete ForceToleranceT_1012_TypePair;
  #endif
}

void ForceToleranceT_1012_Type::printSelf(FILE * outFile)
{
  ForceToleranceT_1012_TypePair->printSelf(outFile);
}

ForceToleranceT_1012_TypeChoicePair * ForceToleranceT_1012_Type::getForceToleranceT_1012_TypePair()
{return ForceToleranceT_1012_TypePair;}

void ForceToleranceT_1012_Type::setForceToleranceT_1012_TypePair(ForceToleranceT_1012_TypeChoicePair * ForceToleranceT_1012_TypePairIn)
{ForceToleranceT_1012_TypePair = ForceToleranceT_1012_TypePairIn;}
ForceToleranceT_1012_TypeChoicePair::ForceToleranceT_1012_TypeChoicePair() {}

ForceToleranceT_1012_TypeChoicePair::ForceToleranceT_1012_TypeChoicePair(
 whichOne ForceToleranceT_1012_TypeTypeIn,
 ForceToleranceT_1012_TypeVal ForceToleranceT_1012_TypeValueIn)
{
  ForceToleranceT_1012_TypeType = ForceToleranceT_1012_TypeTypeIn;
  ForceToleranceT_1012_TypeValue = ForceToleranceT_1012_TypeValueIn;
}

ForceToleranceT_1012_TypeChoicePair::~ForceToleranceT_1012_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ForceToleranceT_1012_TypeType == ForceToleranceT_1029E)
    delete ForceToleranceT_1012_TypeValue.ForceToleranceT_1029;
  else if (ForceToleranceT_1012_TypeType == MinValueE)
    delete ForceToleranceT_1012_TypeValue.MinValue;
  #endif
}

void ForceToleranceT_1012_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ForceToleranceT_1012_TypeType == ForceToleranceT_1029E)
    {
      ForceToleranceT_1012_TypeValue.ForceToleranceT_1029->printSelf(outFile);
    }
  else if (ForceToleranceT_1012_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      ForceToleranceT_1012_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class LinearTolerance_1013_Type

*/

LinearTolerance_1013_Type::LinearTolerance_1013_Type()
{
  LinearTolerance_1013_TypePair = 0;
}

LinearTolerance_1013_Type::LinearTolerance_1013_Type(
 LinearTolerance_1013_TypeChoicePair * LinearTolerance_1013_TypePairIn)
{
  LinearTolerance_1013_TypePair = LinearTolerance_1013_TypePairIn;
}

LinearTolerance_1013_Type::~LinearTolerance_1013_Type()
{
  #ifndef NODESTRUCT
  delete LinearTolerance_1013_TypePair;
  #endif
}

void LinearTolerance_1013_Type::printSelf(FILE * outFile)
{
  LinearTolerance_1013_TypePair->printSelf(outFile);
}

LinearTolerance_1013_TypeChoicePair * LinearTolerance_1013_Type::getLinearTolerance_1013_TypePair()
{return LinearTolerance_1013_TypePair;}

void LinearTolerance_1013_Type::setLinearTolerance_1013_TypePair(LinearTolerance_1013_TypeChoicePair * LinearTolerance_1013_TypePairIn)
{LinearTolerance_1013_TypePair = LinearTolerance_1013_TypePairIn;}
LinearTolerance_1013_TypeChoicePair::LinearTolerance_1013_TypeChoicePair() {}

LinearTolerance_1013_TypeChoicePair::LinearTolerance_1013_TypeChoicePair(
 whichOne LinearTolerance_1013_TypeTypeIn,
 LinearTolerance_1013_TypeVal LinearTolerance_1013_TypeValueIn)
{
  LinearTolerance_1013_TypeType = LinearTolerance_1013_TypeTypeIn;
  LinearTolerance_1013_TypeValue = LinearTolerance_1013_TypeValueIn;
}

LinearTolerance_1013_TypeChoicePair::~LinearTolerance_1013_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (LinearTolerance_1013_TypeType == LinearTolerance_1030E)
    delete LinearTolerance_1013_TypeValue.LinearTolerance_1030;
  else if (LinearTolerance_1013_TypeType == MinValueE)
    delete LinearTolerance_1013_TypeValue.MinValue;
  #endif
}

void LinearTolerance_1013_TypeChoicePair::printSelf(FILE * outFile)
{
  if (LinearTolerance_1013_TypeType == LinearTolerance_1030E)
    {
      LinearTolerance_1013_TypeValue.LinearTolerance_1030->printSelf(outFile);
    }
  else if (LinearTolerance_1013_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      LinearTolerance_1013_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class LinearTolerance_1014_Type

*/

LinearTolerance_1014_Type::LinearTolerance_1014_Type()
{
  LinearTolerance_1014_TypePair = 0;
}

LinearTolerance_1014_Type::LinearTolerance_1014_Type(
 LinearTolerance_1014_TypeChoicePair * LinearTolerance_1014_TypePairIn)
{
  LinearTolerance_1014_TypePair = LinearTolerance_1014_TypePairIn;
}

LinearTolerance_1014_Type::~LinearTolerance_1014_Type()
{
  #ifndef NODESTRUCT
  delete LinearTolerance_1014_TypePair;
  #endif
}

void LinearTolerance_1014_Type::printSelf(FILE * outFile)
{
  LinearTolerance_1014_TypePair->printSelf(outFile);
}

LinearTolerance_1014_TypeChoicePair * LinearTolerance_1014_Type::getLinearTolerance_1014_TypePair()
{return LinearTolerance_1014_TypePair;}

void LinearTolerance_1014_Type::setLinearTolerance_1014_TypePair(LinearTolerance_1014_TypeChoicePair * LinearTolerance_1014_TypePairIn)
{LinearTolerance_1014_TypePair = LinearTolerance_1014_TypePairIn;}
LinearTolerance_1014_TypeChoicePair::LinearTolerance_1014_TypeChoicePair() {}

LinearTolerance_1014_TypeChoicePair::LinearTolerance_1014_TypeChoicePair(
 whichOne LinearTolerance_1014_TypeTypeIn,
 LinearTolerance_1014_TypeVal LinearTolerance_1014_TypeValueIn)
{
  LinearTolerance_1014_TypeType = LinearTolerance_1014_TypeTypeIn;
  LinearTolerance_1014_TypeValue = LinearTolerance_1014_TypeValueIn;
}

LinearTolerance_1014_TypeChoicePair::~LinearTolerance_1014_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (LinearTolerance_1014_TypeType == LinearTolerance_1031E)
    delete LinearTolerance_1014_TypeValue.LinearTolerance_1031;
  else if (LinearTolerance_1014_TypeType == LinearTolerance_1032E)
    delete LinearTolerance_1014_TypeValue.LinearTolerance_1032;
  else if (LinearTolerance_1014_TypeType == DefinitionIdE)
    delete LinearTolerance_1014_TypeValue.DefinitionId;
  #endif
}

void LinearTolerance_1014_TypeChoicePair::printSelf(FILE * outFile)
{
  if (LinearTolerance_1014_TypeType == LinearTolerance_1031E)
    {
      LinearTolerance_1014_TypeValue.LinearTolerance_1031->printSelf(outFile);
    }
  else if (LinearTolerance_1014_TypeType == LinearTolerance_1032E)
    {
      LinearTolerance_1014_TypeValue.LinearTolerance_1032->printSelf(outFile);
    }
  else if (LinearTolerance_1014_TypeType == DefinitionIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DefinitionId");
      LinearTolerance_1014_TypeValue.DefinitionId->printSelf(outFile);
      fprintf(outFile, "</DefinitionId>\n");
    }
}

/* ***************************************************************** */

/* class MassToleranceTy_1015_Type

*/

MassToleranceTy_1015_Type::MassToleranceTy_1015_Type()
{
  MassToleranceTy_1015_TypePair = 0;
}

MassToleranceTy_1015_Type::MassToleranceTy_1015_Type(
 MassToleranceTy_1015_TypeChoicePair * MassToleranceTy_1015_TypePairIn)
{
  MassToleranceTy_1015_TypePair = MassToleranceTy_1015_TypePairIn;
}

MassToleranceTy_1015_Type::~MassToleranceTy_1015_Type()
{
  #ifndef NODESTRUCT
  delete MassToleranceTy_1015_TypePair;
  #endif
}

void MassToleranceTy_1015_Type::printSelf(FILE * outFile)
{
  MassToleranceTy_1015_TypePair->printSelf(outFile);
}

MassToleranceTy_1015_TypeChoicePair * MassToleranceTy_1015_Type::getMassToleranceTy_1015_TypePair()
{return MassToleranceTy_1015_TypePair;}

void MassToleranceTy_1015_Type::setMassToleranceTy_1015_TypePair(MassToleranceTy_1015_TypeChoicePair * MassToleranceTy_1015_TypePairIn)
{MassToleranceTy_1015_TypePair = MassToleranceTy_1015_TypePairIn;}
MassToleranceTy_1015_TypeChoicePair::MassToleranceTy_1015_TypeChoicePair() {}

MassToleranceTy_1015_TypeChoicePair::MassToleranceTy_1015_TypeChoicePair(
 whichOne MassToleranceTy_1015_TypeTypeIn,
 MassToleranceTy_1015_TypeVal MassToleranceTy_1015_TypeValueIn)
{
  MassToleranceTy_1015_TypeType = MassToleranceTy_1015_TypeTypeIn;
  MassToleranceTy_1015_TypeValue = MassToleranceTy_1015_TypeValueIn;
}

MassToleranceTy_1015_TypeChoicePair::~MassToleranceTy_1015_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MassToleranceTy_1015_TypeType == MassToleranceTy_1033E)
    delete MassToleranceTy_1015_TypeValue.MassToleranceTy_1033;
  else if (MassToleranceTy_1015_TypeType == MinValueE)
    delete MassToleranceTy_1015_TypeValue.MinValue;
  #endif
}

void MassToleranceTy_1015_TypeChoicePair::printSelf(FILE * outFile)
{
  if (MassToleranceTy_1015_TypeType == MassToleranceTy_1033E)
    {
      MassToleranceTy_1015_TypeValue.MassToleranceTy_1033->printSelf(outFile);
    }
  else if (MassToleranceTy_1015_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MassToleranceTy_1015_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class MaterialType_1016_Type

*/

MaterialType_1016_Type::MaterialType_1016_Type()
{
  MaterialType_1016_TypePair = 0;
}

MaterialType_1016_Type::MaterialType_1016_Type(
 MaterialType_1016_TypeChoicePair * MaterialType_1016_TypePairIn)
{
  MaterialType_1016_TypePair = MaterialType_1016_TypePairIn;
}

MaterialType_1016_Type::~MaterialType_1016_Type()
{
  #ifndef NODESTRUCT
  delete MaterialType_1016_TypePair;
  #endif
}

void MaterialType_1016_Type::printSelf(FILE * outFile)
{
  if (MaterialType_1016_TypePair)
    {
      MaterialType_1016_TypePair->printSelf(outFile);
    }
}

MaterialType_1016_TypeChoicePair * MaterialType_1016_Type::getMaterialType_1016_TypePair()
{return MaterialType_1016_TypePair;}

void MaterialType_1016_Type::setMaterialType_1016_TypePair(MaterialType_1016_TypeChoicePair * MaterialType_1016_TypePairIn)
{MaterialType_1016_TypePair = MaterialType_1016_TypePairIn;}
MaterialType_1016_TypeChoicePair::MaterialType_1016_TypeChoicePair() {}

MaterialType_1016_TypeChoicePair::MaterialType_1016_TypeChoicePair(
 whichOne MaterialType_1016_TypeTypeIn,
 MaterialType_1016_TypeVal MaterialType_1016_TypeValueIn)
{
  MaterialType_1016_TypeType = MaterialType_1016_TypeTypeIn;
  MaterialType_1016_TypeValue = MaterialType_1016_TypeValueIn;
}

MaterialType_1016_TypeChoicePair::~MaterialType_1016_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MaterialType_1016_TypeType == MaterialClassEnumE)
    delete MaterialType_1016_TypeValue.MaterialClassEnum;
  else if (MaterialType_1016_TypeType == OtherMaterialClassE)
    delete MaterialType_1016_TypeValue.OtherMaterialClass;
  #endif
}

void MaterialType_1016_TypeChoicePair::printSelf(FILE * outFile)
{
  if (MaterialType_1016_TypeType == MaterialClassEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaterialClassEnum");
      MaterialType_1016_TypeValue.MaterialClassEnum->printSelf(outFile);
      fprintf(outFile, "</MaterialClassEnum>\n");
    }
  else if (MaterialType_1016_TypeType == OtherMaterialClassE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherMaterialClass");
      MaterialType_1016_TypeValue.OtherMaterialClass->printSelf(outFile);
      fprintf(outFile, "</OtherMaterialClass>\n");
    }
}

/* ***************************************************************** */

/* class PressureToleran_1017_Type

*/

PressureToleran_1017_Type::PressureToleran_1017_Type()
{
  PressureToleran_1017_TypePair = 0;
}

PressureToleran_1017_Type::PressureToleran_1017_Type(
 PressureToleran_1017_TypeChoicePair * PressureToleran_1017_TypePairIn)
{
  PressureToleran_1017_TypePair = PressureToleran_1017_TypePairIn;
}

PressureToleran_1017_Type::~PressureToleran_1017_Type()
{
  #ifndef NODESTRUCT
  delete PressureToleran_1017_TypePair;
  #endif
}

void PressureToleran_1017_Type::printSelf(FILE * outFile)
{
  PressureToleran_1017_TypePair->printSelf(outFile);
}

PressureToleran_1017_TypeChoicePair * PressureToleran_1017_Type::getPressureToleran_1017_TypePair()
{return PressureToleran_1017_TypePair;}

void PressureToleran_1017_Type::setPressureToleran_1017_TypePair(PressureToleran_1017_TypeChoicePair * PressureToleran_1017_TypePairIn)
{PressureToleran_1017_TypePair = PressureToleran_1017_TypePairIn;}
PressureToleran_1017_TypeChoicePair::PressureToleran_1017_TypeChoicePair() {}

PressureToleran_1017_TypeChoicePair::PressureToleran_1017_TypeChoicePair(
 whichOne PressureToleran_1017_TypeTypeIn,
 PressureToleran_1017_TypeVal PressureToleran_1017_TypeValueIn)
{
  PressureToleran_1017_TypeType = PressureToleran_1017_TypeTypeIn;
  PressureToleran_1017_TypeValue = PressureToleran_1017_TypeValueIn;
}

PressureToleran_1017_TypeChoicePair::~PressureToleran_1017_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PressureToleran_1017_TypeType == PressureToleran_1034E)
    delete PressureToleran_1017_TypeValue.PressureToleran_1034;
  else if (PressureToleran_1017_TypeType == MinValueE)
    delete PressureToleran_1017_TypeValue.MinValue;
  #endif
}

void PressureToleran_1017_TypeChoicePair::printSelf(FILE * outFile)
{
  if (PressureToleran_1017_TypeType == PressureToleran_1034E)
    {
      PressureToleran_1017_TypeValue.PressureToleran_1034->printSelf(outFile);
    }
  else if (PressureToleran_1017_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      PressureToleran_1017_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class SequencedDatumT_1018_Type

*/

SequencedDatumT_1018_Type::SequencedDatumT_1018_Type()
{
  SequencedDatumT_1018_TypePair = 0;
}

SequencedDatumT_1018_Type::SequencedDatumT_1018_Type(
 SequencedDatumT_1018_TypeChoicePair * SequencedDatumT_1018_TypePairIn)
{
  SequencedDatumT_1018_TypePair = SequencedDatumT_1018_TypePairIn;
}

SequencedDatumT_1018_Type::~SequencedDatumT_1018_Type()
{
  #ifndef NODESTRUCT
  delete SequencedDatumT_1018_TypePair;
  #endif
}

void SequencedDatumT_1018_Type::printSelf(FILE * outFile)
{
  SequencedDatumT_1018_TypePair->printSelf(outFile);
}

SequencedDatumT_1018_TypeChoicePair * SequencedDatumT_1018_Type::getSequencedDatumT_1018_TypePair()
{return SequencedDatumT_1018_TypePair;}

void SequencedDatumT_1018_Type::setSequencedDatumT_1018_TypePair(SequencedDatumT_1018_TypeChoicePair * SequencedDatumT_1018_TypePairIn)
{SequencedDatumT_1018_TypePair = SequencedDatumT_1018_TypePairIn;}
SequencedDatumT_1018_TypeChoicePair::SequencedDatumT_1018_TypeChoicePair() {}

SequencedDatumT_1018_TypeChoicePair::SequencedDatumT_1018_TypeChoicePair(
 whichOne SequencedDatumT_1018_TypeTypeIn,
 SequencedDatumT_1018_TypeVal SequencedDatumT_1018_TypeValueIn)
{
  SequencedDatumT_1018_TypeType = SequencedDatumT_1018_TypeTypeIn;
  SequencedDatumT_1018_TypeValue = SequencedDatumT_1018_TypeValueIn;
}

SequencedDatumT_1018_TypeChoicePair::~SequencedDatumT_1018_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SequencedDatumT_1018_TypeType == SimpleDatumE)
    delete SequencedDatumT_1018_TypeValue.SimpleDatum;
  else if (SequencedDatumT_1018_TypeType == CompoundDatumE)
    delete SequencedDatumT_1018_TypeValue.CompoundDatum;
  #endif
}

void SequencedDatumT_1018_TypeChoicePair::printSelf(FILE * outFile)
{
  if (SequencedDatumT_1018_TypeType == SimpleDatumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SimpleDatum");
      SequencedDatumT_1018_TypeValue.SimpleDatum->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SimpleDatum>\n");
    }
  else if (SequencedDatumT_1018_TypeType == CompoundDatumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CompoundDatum");
      SequencedDatumT_1018_TypeValue.CompoundDatum->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CompoundDatum>\n");
    }
}

/* ***************************************************************** */

/* class SpeedToleranceT_1019_Type

*/

SpeedToleranceT_1019_Type::SpeedToleranceT_1019_Type()
{
  SpeedToleranceT_1019_TypePair = 0;
}

SpeedToleranceT_1019_Type::SpeedToleranceT_1019_Type(
 SpeedToleranceT_1019_TypeChoicePair * SpeedToleranceT_1019_TypePairIn)
{
  SpeedToleranceT_1019_TypePair = SpeedToleranceT_1019_TypePairIn;
}

SpeedToleranceT_1019_Type::~SpeedToleranceT_1019_Type()
{
  #ifndef NODESTRUCT
  delete SpeedToleranceT_1019_TypePair;
  #endif
}

void SpeedToleranceT_1019_Type::printSelf(FILE * outFile)
{
  SpeedToleranceT_1019_TypePair->printSelf(outFile);
}

SpeedToleranceT_1019_TypeChoicePair * SpeedToleranceT_1019_Type::getSpeedToleranceT_1019_TypePair()
{return SpeedToleranceT_1019_TypePair;}

void SpeedToleranceT_1019_Type::setSpeedToleranceT_1019_TypePair(SpeedToleranceT_1019_TypeChoicePair * SpeedToleranceT_1019_TypePairIn)
{SpeedToleranceT_1019_TypePair = SpeedToleranceT_1019_TypePairIn;}
SpeedToleranceT_1019_TypeChoicePair::SpeedToleranceT_1019_TypeChoicePair() {}

SpeedToleranceT_1019_TypeChoicePair::SpeedToleranceT_1019_TypeChoicePair(
 whichOne SpeedToleranceT_1019_TypeTypeIn,
 SpeedToleranceT_1019_TypeVal SpeedToleranceT_1019_TypeValueIn)
{
  SpeedToleranceT_1019_TypeType = SpeedToleranceT_1019_TypeTypeIn;
  SpeedToleranceT_1019_TypeValue = SpeedToleranceT_1019_TypeValueIn;
}

SpeedToleranceT_1019_TypeChoicePair::~SpeedToleranceT_1019_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SpeedToleranceT_1019_TypeType == SpeedToleranceT_1035E)
    delete SpeedToleranceT_1019_TypeValue.SpeedToleranceT_1035;
  else if (SpeedToleranceT_1019_TypeType == MinValueE)
    delete SpeedToleranceT_1019_TypeValue.MinValue;
  #endif
}

void SpeedToleranceT_1019_TypeChoicePair::printSelf(FILE * outFile)
{
  if (SpeedToleranceT_1019_TypeType == SpeedToleranceT_1035E)
    {
      SpeedToleranceT_1019_TypeValue.SpeedToleranceT_1035->printSelf(outFile);
    }
  else if (SpeedToleranceT_1019_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      SpeedToleranceT_1019_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class SubstituteFeatu_1020_Type

*/

SubstituteFeatu_1020_Type::SubstituteFeatu_1020_Type()
{
  SubstituteFeatu_1020_TypePair = 0;
}

SubstituteFeatu_1020_Type::SubstituteFeatu_1020_Type(
 SubstituteFeatu_1020_TypeChoicePair * SubstituteFeatu_1020_TypePairIn)
{
  SubstituteFeatu_1020_TypePair = SubstituteFeatu_1020_TypePairIn;
}

SubstituteFeatu_1020_Type::~SubstituteFeatu_1020_Type()
{
  #ifndef NODESTRUCT
  delete SubstituteFeatu_1020_TypePair;
  #endif
}

void SubstituteFeatu_1020_Type::printSelf(FILE * outFile)
{
  SubstituteFeatu_1020_TypePair->printSelf(outFile);
}

SubstituteFeatu_1020_TypeChoicePair * SubstituteFeatu_1020_Type::getSubstituteFeatu_1020_TypePair()
{return SubstituteFeatu_1020_TypePair;}

void SubstituteFeatu_1020_Type::setSubstituteFeatu_1020_TypePair(SubstituteFeatu_1020_TypeChoicePair * SubstituteFeatu_1020_TypePairIn)
{SubstituteFeatu_1020_TypePair = SubstituteFeatu_1020_TypePairIn;}
SubstituteFeatu_1020_TypeChoicePair::SubstituteFeatu_1020_TypeChoicePair() {}

SubstituteFeatu_1020_TypeChoicePair::SubstituteFeatu_1020_TypeChoicePair(
 whichOne SubstituteFeatu_1020_TypeTypeIn,
 SubstituteFeatu_1020_TypeVal SubstituteFeatu_1020_TypeValueIn)
{
  SubstituteFeatu_1020_TypeType = SubstituteFeatu_1020_TypeTypeIn;
  SubstituteFeatu_1020_TypeValue = SubstituteFeatu_1020_TypeValueIn;
}

SubstituteFeatu_1020_TypeChoicePair::~SubstituteFeatu_1020_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SubstituteFeatu_1020_TypeType == SubstituteFeatureAlgorithmEnumE)
    delete SubstituteFeatu_1020_TypeValue.SubstituteFeatureAlgorithmEnum;
  else if (SubstituteFeatu_1020_TypeType == SubstituteFeatureAlgorithmIdE)
    delete SubstituteFeatu_1020_TypeValue.SubstituteFeatureAlgorithmId;
  else if (SubstituteFeatu_1020_TypeType == OtherSubstituteFeatureAlgorithmE)
    delete SubstituteFeatu_1020_TypeValue.OtherSubstituteFeatureAlgorithm;
  #endif
}

void SubstituteFeatu_1020_TypeChoicePair::printSelf(FILE * outFile)
{
  if (SubstituteFeatu_1020_TypeType == SubstituteFeatureAlgorithmEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubstituteFeatureAlgorithmEnum");
      SubstituteFeatu_1020_TypeValue.SubstituteFeatureAlgorithmEnum->printSelf(outFile);
      fprintf(outFile, "</SubstituteFeatureAlgorithmEnum>\n");
    }
  else if (SubstituteFeatu_1020_TypeType == SubstituteFeatureAlgorithmIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubstituteFeatureAlgorithmId");
      SubstituteFeatu_1020_TypeValue.SubstituteFeatureAlgorithmId->printSelf(outFile);
      fprintf(outFile, "</SubstituteFeatureAlgorithmId>\n");
    }
  else if (SubstituteFeatu_1020_TypeType == OtherSubstituteFeatureAlgorithmE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherSubstituteFeatureAlgorithm");
      SubstituteFeatu_1020_TypeValue.OtherSubstituteFeatureAlgorithm->printSelf(outFile);
      fprintf(outFile, "</OtherSubstituteFeatureAlgorithm>\n");
    }
}

/* ***************************************************************** */

/* class TemperatureTole_1021_Type

*/

TemperatureTole_1021_Type::TemperatureTole_1021_Type()
{
  TemperatureTole_1021_TypePair = 0;
}

TemperatureTole_1021_Type::TemperatureTole_1021_Type(
 TemperatureTole_1021_TypeChoicePair * TemperatureTole_1021_TypePairIn)
{
  TemperatureTole_1021_TypePair = TemperatureTole_1021_TypePairIn;
}

TemperatureTole_1021_Type::~TemperatureTole_1021_Type()
{
  #ifndef NODESTRUCT
  delete TemperatureTole_1021_TypePair;
  #endif
}

void TemperatureTole_1021_Type::printSelf(FILE * outFile)
{
  TemperatureTole_1021_TypePair->printSelf(outFile);
}

TemperatureTole_1021_TypeChoicePair * TemperatureTole_1021_Type::getTemperatureTole_1021_TypePair()
{return TemperatureTole_1021_TypePair;}

void TemperatureTole_1021_Type::setTemperatureTole_1021_TypePair(TemperatureTole_1021_TypeChoicePair * TemperatureTole_1021_TypePairIn)
{TemperatureTole_1021_TypePair = TemperatureTole_1021_TypePairIn;}
TemperatureTole_1021_TypeChoicePair::TemperatureTole_1021_TypeChoicePair() {}

TemperatureTole_1021_TypeChoicePair::TemperatureTole_1021_TypeChoicePair(
 whichOne TemperatureTole_1021_TypeTypeIn,
 TemperatureTole_1021_TypeVal TemperatureTole_1021_TypeValueIn)
{
  TemperatureTole_1021_TypeType = TemperatureTole_1021_TypeTypeIn;
  TemperatureTole_1021_TypeValue = TemperatureTole_1021_TypeValueIn;
}

TemperatureTole_1021_TypeChoicePair::~TemperatureTole_1021_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (TemperatureTole_1021_TypeType == TemperatureTole_1036E)
    delete TemperatureTole_1021_TypeValue.TemperatureTole_1036;
  else if (TemperatureTole_1021_TypeType == MinValueE)
    delete TemperatureTole_1021_TypeValue.MinValue;
  #endif
}

void TemperatureTole_1021_TypeChoicePair::printSelf(FILE * outFile)
{
  if (TemperatureTole_1021_TypeType == TemperatureTole_1036E)
    {
      TemperatureTole_1021_TypeValue.TemperatureTole_1036->printSelf(outFile);
    }
  else if (TemperatureTole_1021_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      TemperatureTole_1021_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class TimeToleranceTy_1022_Type

*/

TimeToleranceTy_1022_Type::TimeToleranceTy_1022_Type()
{
  TimeToleranceTy_1022_TypePair = 0;
}

TimeToleranceTy_1022_Type::TimeToleranceTy_1022_Type(
 TimeToleranceTy_1022_TypeChoicePair * TimeToleranceTy_1022_TypePairIn)
{
  TimeToleranceTy_1022_TypePair = TimeToleranceTy_1022_TypePairIn;
}

TimeToleranceTy_1022_Type::~TimeToleranceTy_1022_Type()
{
  #ifndef NODESTRUCT
  delete TimeToleranceTy_1022_TypePair;
  #endif
}

void TimeToleranceTy_1022_Type::printSelf(FILE * outFile)
{
  TimeToleranceTy_1022_TypePair->printSelf(outFile);
}

TimeToleranceTy_1022_TypeChoicePair * TimeToleranceTy_1022_Type::getTimeToleranceTy_1022_TypePair()
{return TimeToleranceTy_1022_TypePair;}

void TimeToleranceTy_1022_Type::setTimeToleranceTy_1022_TypePair(TimeToleranceTy_1022_TypeChoicePair * TimeToleranceTy_1022_TypePairIn)
{TimeToleranceTy_1022_TypePair = TimeToleranceTy_1022_TypePairIn;}
TimeToleranceTy_1022_TypeChoicePair::TimeToleranceTy_1022_TypeChoicePair() {}

TimeToleranceTy_1022_TypeChoicePair::TimeToleranceTy_1022_TypeChoicePair(
 whichOne TimeToleranceTy_1022_TypeTypeIn,
 TimeToleranceTy_1022_TypeVal TimeToleranceTy_1022_TypeValueIn)
{
  TimeToleranceTy_1022_TypeType = TimeToleranceTy_1022_TypeTypeIn;
  TimeToleranceTy_1022_TypeValue = TimeToleranceTy_1022_TypeValueIn;
}

TimeToleranceTy_1022_TypeChoicePair::~TimeToleranceTy_1022_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (TimeToleranceTy_1022_TypeType == TimeToleranceTy_1037E)
    delete TimeToleranceTy_1022_TypeValue.TimeToleranceTy_1037;
  else if (TimeToleranceTy_1022_TypeType == MinValueE)
    delete TimeToleranceTy_1022_TypeValue.MinValue;
  #endif
}

void TimeToleranceTy_1022_TypeChoicePair::printSelf(FILE * outFile)
{
  if (TimeToleranceTy_1022_TypeType == TimeToleranceTy_1037E)
    {
      TimeToleranceTy_1022_TypeValue.TimeToleranceTy_1037->printSelf(outFile);
    }
  else if (TimeToleranceTy_1022_TypeType == MinValueE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      TimeToleranceTy_1022_TypeValue.MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

/* ***************************************************************** */

/* class ToleranceZonePe_1023_Type

*/

ToleranceZonePe_1023_Type::ToleranceZonePe_1023_Type()
{
  ToleranceZonePe_1023_TypePair = 0;
}

ToleranceZonePe_1023_Type::ToleranceZonePe_1023_Type(
 ToleranceZonePe_1023_TypeChoicePair * ToleranceZonePe_1023_TypePairIn)
{
  ToleranceZonePe_1023_TypePair = ToleranceZonePe_1023_TypePairIn;
}

ToleranceZonePe_1023_Type::~ToleranceZonePe_1023_Type()
{
  #ifndef NODESTRUCT
  delete ToleranceZonePe_1023_TypePair;
  #endif
}

void ToleranceZonePe_1023_Type::printSelf(FILE * outFile)
{
  ToleranceZonePe_1023_TypePair->printSelf(outFile);
}

ToleranceZonePe_1023_TypeChoicePair * ToleranceZonePe_1023_Type::getToleranceZonePe_1023_TypePair()
{return ToleranceZonePe_1023_TypePair;}

void ToleranceZonePe_1023_Type::setToleranceZonePe_1023_TypePair(ToleranceZonePe_1023_TypeChoicePair * ToleranceZonePe_1023_TypePairIn)
{ToleranceZonePe_1023_TypePair = ToleranceZonePe_1023_TypePairIn;}
ToleranceZonePe_1023_TypeChoicePair::ToleranceZonePe_1023_TypeChoicePair() {}

ToleranceZonePe_1023_TypeChoicePair::ToleranceZonePe_1023_TypeChoicePair(
 whichOne ToleranceZonePe_1023_TypeTypeIn,
 ToleranceZonePe_1023_TypeVal ToleranceZonePe_1023_TypeValueIn)
{
  ToleranceZonePe_1023_TypeType = ToleranceZonePe_1023_TypeTypeIn;
  ToleranceZonePe_1023_TypeValue = ToleranceZonePe_1023_TypeValueIn;
}

ToleranceZonePe_1023_TypeChoicePair::~ToleranceZonePe_1023_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ToleranceZonePe_1023_TypeType == RectangularUnitAreaE)
    delete ToleranceZonePe_1023_TypeValue.RectangularUnitArea;
  else if (ToleranceZonePe_1023_TypeType == CircularUnitAreaE)
    delete ToleranceZonePe_1023_TypeValue.CircularUnitArea;
  #endif
}

void ToleranceZonePe_1023_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ToleranceZonePe_1023_TypeType == RectangularUnitAreaE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RectangularUnitArea");
      ToleranceZonePe_1023_TypeValue.RectangularUnitArea->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RectangularUnitArea>\n");
    }
  else if (ToleranceZonePe_1023_TypeType == CircularUnitAreaE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CircularUnitArea");
      ToleranceZonePe_1023_TypeValue.CircularUnitArea->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CircularUnitArea>\n");
    }
}

/* ***************************************************************** */

/* class AlgorithmType_1_1024_Type

*/

AlgorithmType_1_1024_Type::AlgorithmType_1_1024_Type()
{
  SoftwareId = 0;
  Parameters = 0;
}

AlgorithmType_1_1024_Type::AlgorithmType_1_1024_Type(
 QIFReferenceType * SoftwareIdIn,
 XmlString * ParametersIn)
{
  SoftwareId = SoftwareIdIn;
  Parameters = ParametersIn;
}

AlgorithmType_1_1024_Type::~AlgorithmType_1_1024_Type()
{
  #ifndef NODESTRUCT
  delete SoftwareId;
  delete Parameters;
  #endif
}

void AlgorithmType_1_1024_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<SoftwareId");
  SoftwareId->printSelf(outFile);
  fprintf(outFile, "</SoftwareId>\n");
  if (Parameters)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Parameters");
      Parameters->printSelf(outFile);
      fprintf(outFile, "</Parameters>\n");
    }
}

QIFReferenceType * AlgorithmType_1_1024_Type::getSoftwareId()
{return SoftwareId;}

void AlgorithmType_1_1024_Type::setSoftwareId(QIFReferenceType * SoftwareIdIn)
{SoftwareId = SoftwareIdIn;}

XmlString * AlgorithmType_1_1024_Type::getParameters()
{return Parameters;}

void AlgorithmType_1_1024_Type::setParameters(XmlString * ParametersIn)
{Parameters = ParametersIn;}

/* ***************************************************************** */

/* class AlgorithmType_1_1025_Type

*/

AlgorithmType_1_1025_Type::AlgorithmType_1_1025_Type()
{
  StandardId = 0;
  Section = 0;
}

AlgorithmType_1_1025_Type::AlgorithmType_1_1025_Type(
 QIFReferenceType * StandardIdIn,
 XmlString * SectionIn)
{
  StandardId = StandardIdIn;
  Section = SectionIn;
}

AlgorithmType_1_1025_Type::~AlgorithmType_1_1025_Type()
{
  #ifndef NODESTRUCT
  delete StandardId;
  delete Section;
  #endif
}

void AlgorithmType_1_1025_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<StandardId");
  StandardId->printSelf(outFile);
  fprintf(outFile, "</StandardId>\n");
  if (Section)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Section");
      Section->printSelf(outFile);
      fprintf(outFile, "</Section>\n");
    }
}

QIFReferenceType * AlgorithmType_1_1025_Type::getStandardId()
{return StandardId;}

void AlgorithmType_1_1025_Type::setStandardId(QIFReferenceType * StandardIdIn)
{StandardId = StandardIdIn;}

XmlString * AlgorithmType_1_1025_Type::getSection()
{return Section;}

void AlgorithmType_1_1025_Type::setSection(XmlString * SectionIn)
{Section = SectionIn;}

/* ***************************************************************** */

/* class AngularToleranc_1026_Type

*/

AngularToleranc_1026_Type::AngularToleranc_1026_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

AngularToleranc_1026_Type::AngularToleranc_1026_Type(
 AngularValueType * MaxValueIn,
 AngularValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

AngularToleranc_1026_Type::~AngularToleranc_1026_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void AngularToleranc_1026_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

AngularValueType * AngularToleranc_1026_Type::getMaxValue()
{return MaxValue;}

void AngularToleranc_1026_Type::setMaxValue(AngularValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

AngularValueType * AngularToleranc_1026_Type::getMinValue()
{return MinValue;}

void AngularToleranc_1026_Type::setMinValue(AngularValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class AngularToleranc_1027_Type

*/

AngularToleranc_1027_Type::AngularToleranc_1027_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

AngularToleranc_1027_Type::AngularToleranc_1027_Type(
 AngularValueType * MaxValueIn,
 AngularValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

AngularToleranc_1027_Type::~AngularToleranc_1027_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void AngularToleranc_1027_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

AngularValueType * AngularToleranc_1027_Type::getMaxValue()
{return MaxValue;}

void AngularToleranc_1027_Type::setMaxValue(AngularValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

AngularValueType * AngularToleranc_1027_Type::getMinValue()
{return MinValue;}

void AngularToleranc_1027_Type::setMinValue(AngularValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class AreaToleranceTy_1028_Type

*/

AreaToleranceTy_1028_Type::AreaToleranceTy_1028_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

AreaToleranceTy_1028_Type::AreaToleranceTy_1028_Type(
 AreaValueType * MaxValueIn,
 AreaValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

AreaToleranceTy_1028_Type::~AreaToleranceTy_1028_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void AreaToleranceTy_1028_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

AreaValueType * AreaToleranceTy_1028_Type::getMaxValue()
{return MaxValue;}

void AreaToleranceTy_1028_Type::setMaxValue(AreaValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

AreaValueType * AreaToleranceTy_1028_Type::getMinValue()
{return MinValue;}

void AreaToleranceTy_1028_Type::setMinValue(AreaValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class ForceToleranceT_1029_Type

*/

ForceToleranceT_1029_Type::ForceToleranceT_1029_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

ForceToleranceT_1029_Type::ForceToleranceT_1029_Type(
 ForceValueType * MaxValueIn,
 ForceValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

ForceToleranceT_1029_Type::~ForceToleranceT_1029_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void ForceToleranceT_1029_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

ForceValueType * ForceToleranceT_1029_Type::getMaxValue()
{return MaxValue;}

void ForceToleranceT_1029_Type::setMaxValue(ForceValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

ForceValueType * ForceToleranceT_1029_Type::getMinValue()
{return MinValue;}

void ForceToleranceT_1029_Type::setMinValue(ForceValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class LinearTolerance_1030_Type

*/

LinearTolerance_1030_Type::LinearTolerance_1030_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

LinearTolerance_1030_Type::LinearTolerance_1030_Type(
 LinearValueType * MaxValueIn,
 LinearValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

LinearTolerance_1030_Type::~LinearTolerance_1030_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void LinearTolerance_1030_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

LinearValueType * LinearTolerance_1030_Type::getMaxValue()
{return MaxValue;}

void LinearTolerance_1030_Type::setMaxValue(LinearValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

LinearValueType * LinearTolerance_1030_Type::getMinValue()
{return MinValue;}

void LinearTolerance_1030_Type::setMinValue(LinearValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class LinearTolerance_1031_Type

*/

LinearTolerance_1031_Type::LinearTolerance_1031_Type()
{
  MaxValue = 0;
  MaxDualValue = 0;
  LinearTolerance_1038 = 0;
}

LinearTolerance_1031_Type::LinearTolerance_1031_Type(
 LinearValueType * MaxValueIn,
 LinearDualValueType * MaxDualValueIn,
 LinearTolerance_1038_Type * LinearTolerance_1038In)
{
  MaxValue = MaxValueIn;
  MaxDualValue = MaxDualValueIn;
  LinearTolerance_1038 = LinearTolerance_1038In;
}

LinearTolerance_1031_Type::~LinearTolerance_1031_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MaxDualValue;
  delete LinearTolerance_1038;
  #endif
}

void LinearTolerance_1031_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MaxDualValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaxDualValue");
      MaxDualValue->printSelf(outFile);
      fprintf(outFile, "</MaxDualValue>\n");
    }
  if (LinearTolerance_1038)
    {
      LinearTolerance_1038->printSelf(outFile);
    }
}

LinearValueType * LinearTolerance_1031_Type::getMaxValue()
{return MaxValue;}

void LinearTolerance_1031_Type::setMaxValue(LinearValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

LinearDualValueType * LinearTolerance_1031_Type::getMaxDualValue()
{return MaxDualValue;}

void LinearTolerance_1031_Type::setMaxDualValue(LinearDualValueType * MaxDualValueIn)
{MaxDualValue = MaxDualValueIn;}

LinearTolerance_1038_Type * LinearTolerance_1031_Type::getLinearTolerance_1038()
{return LinearTolerance_1038;}

void LinearTolerance_1031_Type::setLinearTolerance_1038(LinearTolerance_1038_Type * LinearTolerance_1038In)
{LinearTolerance_1038 = LinearTolerance_1038In;}

/* ***************************************************************** */

/* class LinearTolerance_1032_Type

*/

LinearTolerance_1032_Type::LinearTolerance_1032_Type()
{
  MinValue = 0;
  MinDualValue = 0;
}

LinearTolerance_1032_Type::LinearTolerance_1032_Type(
 LinearValueType * MinValueIn,
 LinearDualValueType * MinDualValueIn)
{
  MinValue = MinValueIn;
  MinDualValue = MinDualValueIn;
}

LinearTolerance_1032_Type::~LinearTolerance_1032_Type()
{
  #ifndef NODESTRUCT
  delete MinValue;
  delete MinDualValue;
  #endif
}

void LinearTolerance_1032_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MinValue");
  MinValue->printSelf(outFile);
  fprintf(outFile, "</MinValue>\n");
  if (MinDualValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinDualValue");
      MinDualValue->printSelf(outFile);
      fprintf(outFile, "</MinDualValue>\n");
    }
}

LinearValueType * LinearTolerance_1032_Type::getMinValue()
{return MinValue;}

void LinearTolerance_1032_Type::setMinValue(LinearValueType * MinValueIn)
{MinValue = MinValueIn;}

LinearDualValueType * LinearTolerance_1032_Type::getMinDualValue()
{return MinDualValue;}

void LinearTolerance_1032_Type::setMinDualValue(LinearDualValueType * MinDualValueIn)
{MinDualValue = MinDualValueIn;}

/* ***************************************************************** */

/* class MassToleranceTy_1033_Type

*/

MassToleranceTy_1033_Type::MassToleranceTy_1033_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

MassToleranceTy_1033_Type::MassToleranceTy_1033_Type(
 MassValueType * MaxValueIn,
 MassValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

MassToleranceTy_1033_Type::~MassToleranceTy_1033_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void MassToleranceTy_1033_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

MassValueType * MassToleranceTy_1033_Type::getMaxValue()
{return MaxValue;}

void MassToleranceTy_1033_Type::setMaxValue(MassValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

MassValueType * MassToleranceTy_1033_Type::getMinValue()
{return MinValue;}

void MassToleranceTy_1033_Type::setMinValue(MassValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class PressureToleran_1034_Type

*/

PressureToleran_1034_Type::PressureToleran_1034_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

PressureToleran_1034_Type::PressureToleran_1034_Type(
 PressureValueType * MaxValueIn,
 PressureValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

PressureToleran_1034_Type::~PressureToleran_1034_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void PressureToleran_1034_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

PressureValueType * PressureToleran_1034_Type::getMaxValue()
{return MaxValue;}

void PressureToleran_1034_Type::setMaxValue(PressureValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

PressureValueType * PressureToleran_1034_Type::getMinValue()
{return MinValue;}

void PressureToleran_1034_Type::setMinValue(PressureValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class SpeedToleranceT_1035_Type

*/

SpeedToleranceT_1035_Type::SpeedToleranceT_1035_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

SpeedToleranceT_1035_Type::SpeedToleranceT_1035_Type(
 SpeedValueType * MaxValueIn,
 SpeedValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

SpeedToleranceT_1035_Type::~SpeedToleranceT_1035_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void SpeedToleranceT_1035_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

SpeedValueType * SpeedToleranceT_1035_Type::getMaxValue()
{return MaxValue;}

void SpeedToleranceT_1035_Type::setMaxValue(SpeedValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

SpeedValueType * SpeedToleranceT_1035_Type::getMinValue()
{return MinValue;}

void SpeedToleranceT_1035_Type::setMinValue(SpeedValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class TemperatureTole_1036_Type

*/

TemperatureTole_1036_Type::TemperatureTole_1036_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

TemperatureTole_1036_Type::TemperatureTole_1036_Type(
 TemperatureValueType * MaxValueIn,
 TemperatureValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

TemperatureTole_1036_Type::~TemperatureTole_1036_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void TemperatureTole_1036_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

TemperatureValueType * TemperatureTole_1036_Type::getMaxValue()
{return MaxValue;}

void TemperatureTole_1036_Type::setMaxValue(TemperatureValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

TemperatureValueType * TemperatureTole_1036_Type::getMinValue()
{return MinValue;}

void TemperatureTole_1036_Type::setMinValue(TemperatureValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class TimeToleranceTy_1037_Type

*/

TimeToleranceTy_1037_Type::TimeToleranceTy_1037_Type()
{
  MaxValue = 0;
  MinValue = 0;
}

TimeToleranceTy_1037_Type::TimeToleranceTy_1037_Type(
 TimeValueType * MaxValueIn,
 TimeValueType * MinValueIn)
{
  MaxValue = MaxValueIn;
  MinValue = MinValueIn;
}

TimeToleranceTy_1037_Type::~TimeToleranceTy_1037_Type()
{
  #ifndef NODESTRUCT
  delete MaxValue;
  delete MinValue;
  #endif
}

void TimeToleranceTy_1037_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MaxValue");
  MaxValue->printSelf(outFile);
  fprintf(outFile, "</MaxValue>\n");
  if (MinValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinValue");
      MinValue->printSelf(outFile);
      fprintf(outFile, "</MinValue>\n");
    }
}

TimeValueType * TimeToleranceTy_1037_Type::getMaxValue()
{return MaxValue;}

void TimeToleranceTy_1037_Type::setMaxValue(TimeValueType * MaxValueIn)
{MaxValue = MaxValueIn;}

TimeValueType * TimeToleranceTy_1037_Type::getMinValue()
{return MinValue;}

void TimeToleranceTy_1037_Type::setMinValue(TimeValueType * MinValueIn)
{MinValue = MinValueIn;}

/* ***************************************************************** */

/* class LinearTolerance_1038_Type

*/

LinearTolerance_1038_Type::LinearTolerance_1038_Type()
{
  MinValue = 0;
  MinDualValue = 0;
}

LinearTolerance_1038_Type::LinearTolerance_1038_Type(
 LinearValueType * MinValueIn,
 LinearDualValueType * MinDualValueIn)
{
  MinValue = MinValueIn;
  MinDualValue = MinDualValueIn;
}

LinearTolerance_1038_Type::~LinearTolerance_1038_Type()
{
  #ifndef NODESTRUCT
  delete MinValue;
  delete MinDualValue;
  #endif
}

void LinearTolerance_1038_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<MinValue");
  MinValue->printSelf(outFile);
  fprintf(outFile, "</MinValue>\n");
  if (MinDualValue)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MinDualValue");
      MinDualValue->printSelf(outFile);
      fprintf(outFile, "</MinDualValue>\n");
    }
}

LinearValueType * LinearTolerance_1038_Type::getMinValue()
{return MinValue;}

void LinearTolerance_1038_Type::setMinValue(LinearValueType * MinValueIn)
{MinValue = MinValueIn;}

LinearDualValueType * LinearTolerance_1038_Type::getMinDualValue()
{return MinDualValue;}

void LinearTolerance_1038_Type::setMinDualValue(LinearDualValueType * MinDualValueIn)
{MinDualValue = MinDualValueIn;}

/* ***************************************************************** */

