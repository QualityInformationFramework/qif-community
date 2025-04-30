/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include  <map>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "PrimitivesClasses.hh"

#define INDENT 2
extern std::map<unsigned int, XmlSchemaInstanceBase *> idMap;

/* ***************************************************************** */
/* ***************************************************************** */

/* class AngleRangeType

*/

AngleRangeType::AngleRangeType() :
  D2Type()
{
  angularUnit = 0;
}

AngleRangeType::AngleRangeType(
 XmlDouble * aXmlDouble) :
  D2Type(aXmlDouble)
{
  angularUnit = 0;
}

AngleRangeType::AngleRangeType(
 XmlToken * angularUnitIn,
 XmlDouble * aXmlDouble) :
  D2Type(aXmlDouble)
{
  angularUnit = angularUnitIn;
}

AngleRangeType::~AngleRangeType()
{
  #ifndef NODESTRUCT
  delete angularUnit;
  #endif
}

void AngleRangeType::printName(FILE * outFile)
{
  fprintf(outFile, "AngleRangeType");
}

void AngleRangeType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  AngleRangeTypeCheck();
  if (bad)
    {
      fprintf(stderr, "AngleRangeTypeCheck failed\n");
      exit(1);
    }
  if (angularUnit)
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
      fprintf(outFile, "angularUnit=\"");
      angularUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  ListDoubleType::printSelf(outFile);
}

bool AngleRangeType::AngleRangeTypeCheck()
{
  D2TypeCheck();
  return bad;
}

bool AngleRangeType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "angularUnit")
        {
          XmlToken * angularUnitVal;
          if (this->angularUnit)
            {
              fprintf(stderr, "two values for angularUnit in AngleRangeType\n");
              returnValue = true;
              break;
            }
          angularUnitVal = new XmlToken(decl->getval().c_str());
          if (angularUnitVal->getbad())
            {
              delete angularUnitVal;
              fprintf(stderr, "bad value %s for angularUnit in AngleRangeType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->angularUnit = angularUnitVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AngleRangeType\n");
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
      delete this->angularUnit;
      this->angularUnit = 0;
    }
  return returnValue;
}

XmlToken * AngleRangeType::getangularUnit()
{return angularUnit;}

void AngleRangeType::setangularUnit(XmlToken * angularUnitIn)
{angularUnit = angularUnitIn;}

/* ***************************************************************** */

/* class ArrayBinaryQIFReferenceFullType

*/

ArrayBinaryQIFReferenceFullType::ArrayBinaryQIFReferenceFullType() :
  ArrayBinaryQIFReferenceType()
{
  asmPathId = 0;
  asmPathXId = 0;
}

ArrayBinaryQIFReferenceFullType::ArrayBinaryQIFReferenceFullType(
 ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn) :
  ArrayBinaryQIFReferenceType(
    ArrayBinaryQIFReferenceTypePairIn)
{
  asmPathId = 0;
  asmPathXId = 0;
}

ArrayBinaryQIFReferenceFullType::ArrayBinaryQIFReferenceFullType(
 ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn,
 QIFReferenceSimpleType * asmPathIdIn,
 QIFReferenceSimpleType * asmPathXIdIn) :
  ArrayBinaryQIFReferenceType(
    ArrayBinaryQIFReferenceTypePairIn)
{
  asmPathId = asmPathIdIn;
  asmPathXId = asmPathXIdIn;
}

ArrayBinaryQIFReferenceFullType::~ArrayBinaryQIFReferenceFullType()
{
  #ifndef NODESTRUCT
  delete asmPathId;
  delete asmPathXId;
  #endif
}

void ArrayBinaryQIFReferenceFullType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (asmPathId)
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
      fprintf(outFile, "asmPathId=\"");
      asmPathId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (asmPathXId)
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
      fprintf(outFile, "asmPathXId=\"");
      asmPathXId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ArrayBinaryQIFReferenceTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool ArrayBinaryQIFReferenceFullType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "asmPathId")
        {
          QIFReferenceSimpleType * asmPathIdVal;
          if (this->asmPathId)
            {
              fprintf(stderr, "two values for asmPathId in ArrayBinaryQIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          asmPathIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (asmPathIdVal->getbad())
            {
              delete asmPathIdVal;
              fprintf(stderr, "bad value %s for asmPathId in ArrayBinaryQIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->asmPathId = asmPathIdVal;
        }
      else if (decl->getname() == "asmPathXId")
        {
          QIFReferenceSimpleType * asmPathXIdVal;
          if (this->asmPathXId)
            {
              fprintf(stderr, "two values for asmPathXId in ArrayBinaryQIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          asmPathXIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (asmPathXIdVal->getbad())
            {
              delete asmPathXIdVal;
              fprintf(stderr, "bad value %s for asmPathXId in ArrayBinaryQIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->asmPathXId = asmPathXIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayBinaryQIFReferenceFullType\n");
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
      delete this->asmPathId;
      this->asmPathId = 0;
      delete this->asmPathXId;
      this->asmPathXId = 0;
    }
  return returnValue;
}

QIFReferenceSimpleType * ArrayBinaryQIFReferenceFullType::getasmPathId()
{return asmPathId;}

void ArrayBinaryQIFReferenceFullType::setasmPathId(QIFReferenceSimpleType * asmPathIdIn)
{asmPathId = asmPathIdIn;}

QIFReferenceSimpleType * ArrayBinaryQIFReferenceFullType::getasmPathXId()
{return asmPathXId;}

void ArrayBinaryQIFReferenceFullType::setasmPathXId(QIFReferenceSimpleType * asmPathXIdIn)
{asmPathXId = asmPathXIdIn;}

/* ***************************************************************** */

/* class ArrayBinaryQIFReferenceType

*/

ArrayBinaryQIFReferenceType::ArrayBinaryQIFReferenceType()
{
  ArrayBinaryQIFReferenceTypePair = 0;
}

ArrayBinaryQIFReferenceType::ArrayBinaryQIFReferenceType(
 ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn)
{
  ArrayBinaryQIFReferenceTypePair = ArrayBinaryQIFReferenceTypePairIn;
}

ArrayBinaryQIFReferenceType::~ArrayBinaryQIFReferenceType()
{
  #ifndef NODESTRUCT
  delete ArrayBinaryQIFReferenceTypePair;
  #endif
}

void ArrayBinaryQIFReferenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ArrayBinaryQIFReferenceTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceType::getArrayBinaryQIFReferenceTypePair()
{return ArrayBinaryQIFReferenceTypePair;}

void ArrayBinaryQIFReferenceType::setArrayBinaryQIFReferenceTypePair(ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn)
{ArrayBinaryQIFReferenceTypePair = ArrayBinaryQIFReferenceTypePairIn;}
ArrayBinaryQIFReferenceTypeChoicePair::ArrayBinaryQIFReferenceTypeChoicePair() {}

ArrayBinaryQIFReferenceTypeChoicePair::ArrayBinaryQIFReferenceTypeChoicePair(
 whichOne ArrayBinaryQIFReferenceTypeTypeIn,
 ArrayBinaryQIFReferenceTypeVal ArrayBinaryQIFReferenceTypeValueIn)
{
  ArrayBinaryQIFReferenceTypeType = ArrayBinaryQIFReferenceTypeTypeIn;
  ArrayBinaryQIFReferenceTypeValue = ArrayBinaryQIFReferenceTypeValueIn;
}

ArrayBinaryQIFReferenceTypeChoicePair::~ArrayBinaryQIFReferenceTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ArrayBinaryQIFReferenceTypeType == IdsE)
    delete ArrayBinaryQIFReferenceTypeValue.Ids;
  else if (ArrayBinaryQIFReferenceTypeType == ArrayBinaryQIFR_1001E)
    delete ArrayBinaryQIFReferenceTypeValue.ArrayBinaryQIFR_1001;
  #endif
}

void ArrayBinaryQIFReferenceTypeChoicePair::printSelf(FILE * outFile)
{
  if (ArrayBinaryQIFReferenceTypeType == IdsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Ids");
      ArrayBinaryQIFReferenceTypeValue.Ids->printSelf(outFile);
      fprintf(outFile, "</Ids>\n");
    }
  else if (ArrayBinaryQIFReferenceTypeType == ArrayBinaryQIFR_1001E)
    {
      ArrayBinaryQIFReferenceTypeValue.ArrayBinaryQIFR_1001->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ArrayBinaryType

*/

ArrayBinaryType::ArrayBinaryType()
{
  count = 0;
  sizeElement = 0;
  val = "";
}

ArrayBinaryType::ArrayBinaryType(
 const char * valStringIn) :
  XmlBase64Binary(valStringIn)
{
  count = 0;
  sizeElement = 0;
}

ArrayBinaryType::ArrayBinaryType(
 NaturalType * countIn,
 XmlUnsignedInt * sizeElementIn,
 const char * valStringIn) :
  XmlBase64Binary(valStringIn)
{
  count = countIn;
  sizeElement = sizeElementIn;
}

ArrayBinaryType::~ArrayBinaryType()
{
  #ifndef NODESTRUCT
  delete count;
  delete sizeElement;
  #endif
}

void ArrayBinaryType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayBinaryType");
}

void ArrayBinaryType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  if (sizeElement)
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
      fprintf(outFile, "sizeElement=\"");
      sizeElement->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"sizeElement\" missing\n");
      exit(1);
    }
  XmlBase64Binary::printSelf(outFile);
}

bool ArrayBinaryType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayBinaryType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayBinaryType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else if (decl->getname() == "sizeElement")
        {
          XmlUnsignedInt * sizeElementVal;
          if (this->sizeElement)
            {
              fprintf(stderr, "two values for sizeElement in ArrayBinaryType\n");
              returnValue = true;
              break;
            }
          sizeElementVal = new XmlUnsignedInt(decl->getval().c_str());
          if (sizeElementVal->getbad())
            {
              delete sizeElementVal;
              fprintf(stderr, "bad value %s for sizeElement in ArrayBinaryType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->sizeElement = sizeElementVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayBinaryType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayBinaryType\n");
      returnValue = true;
    }
  if (this->sizeElement == 0)
    {
      fprintf(stderr, "required attribute \"sizeElement\" missing in ArrayBinaryType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
      delete this->sizeElement;
      this->sizeElement = 0;
    }
  return returnValue;
}

NaturalType * ArrayBinaryType::getcount()
{return count;}

void ArrayBinaryType::setcount(NaturalType * countIn)
{count = countIn;}

XmlUnsignedInt * ArrayBinaryType::getsizeElement()
{return sizeElement;}

void ArrayBinaryType::setsizeElement(XmlUnsignedInt * sizeElementIn)
{sizeElement = sizeElementIn;}

/* ***************************************************************** */

/* class ArrayDoubleType

*/

ArrayDoubleType::ArrayDoubleType() :
  ListDoubleType()
{
  count = 0;
}

ArrayDoubleType::ArrayDoubleType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = 0;
}

ArrayDoubleType::ArrayDoubleType(
 NaturalType * countIn,
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = countIn;
}

ArrayDoubleType::~ArrayDoubleType()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void ArrayDoubleType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayDoubleType");
}

void ArrayDoubleType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

bool ArrayDoubleType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayDoubleType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayDoubleType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayDoubleType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayDoubleType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * ArrayDoubleType::getcount()
{return count;}

void ArrayDoubleType::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class ArrayI2Type

*/

ArrayI2Type::ArrayI2Type() :
  ListIntType()
{
  count = 0;
}

ArrayI2Type::ArrayI2Type(
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
  count = 0;
}

ArrayI2Type::ArrayI2Type(
 NaturalType * countIn,
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
  count = countIn;
}

ArrayI2Type::~ArrayI2Type()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void ArrayI2Type::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayI2Type");
}

void ArrayI2Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  ListIntType::printSelf(outFile);
}

bool ArrayI2Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayI2Type\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayI2Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayI2Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayI2Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * ArrayI2Type::getcount()
{return count;}

void ArrayI2Type::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class ArrayI3Type

*/

ArrayI3Type::ArrayI3Type() :
  ListIntType()
{
  count = 0;
}

ArrayI3Type::ArrayI3Type(
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
  count = 0;
}

ArrayI3Type::ArrayI3Type(
 NaturalType * countIn,
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
  count = countIn;
}

ArrayI3Type::~ArrayI3Type()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void ArrayI3Type::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayI3Type");
}

void ArrayI3Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  ListIntType::printSelf(outFile);
}

bool ArrayI3Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayI3Type\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayI3Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayI3Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayI3Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * ArrayI3Type::getcount()
{return count;}

void ArrayI3Type::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class ArrayIntType

*/

ArrayIntType::ArrayIntType() :
  ListIntType()
{
  count = 0;
}

ArrayIntType::ArrayIntType(
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
  count = 0;
}

ArrayIntType::ArrayIntType(
 NaturalType * countIn,
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
  count = countIn;
}

ArrayIntType::~ArrayIntType()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void ArrayIntType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayIntType");
}

void ArrayIntType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  ListIntType::printSelf(outFile);
}

bool ArrayIntType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayIntType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayIntType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayIntType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayIntType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * ArrayIntType::getcount()
{return count;}

void ArrayIntType::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class ArrayNaturalType

*/

ArrayNaturalType::ArrayNaturalType() :
  ListNaturalType()
{
  count = 0;
}

ArrayNaturalType::ArrayNaturalType(
 NaturalType * aNaturalType) :
  ListNaturalType(aNaturalType)
{
  count = 0;
}

ArrayNaturalType::ArrayNaturalType(
 NaturalType * countIn,
 NaturalType * aNaturalType) :
  ListNaturalType(aNaturalType)
{
  count = countIn;
}

ArrayNaturalType::~ArrayNaturalType()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void ArrayNaturalType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayNaturalType");
}

void ArrayNaturalType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  ListNaturalType::printSelf(outFile);
}

bool ArrayNaturalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayNaturalType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayNaturalType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayNaturalType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayNaturalType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * ArrayNaturalType::getcount()
{return count;}

void ArrayNaturalType::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class ArrayPairReferenceFullType

*/

ArrayPairReferenceFullType::ArrayPairReferenceFullType()
{
  n = 0;
  FeaturePair = 0;
}

ArrayPairReferenceFullType::ArrayPairReferenceFullType(
 QIFFeaturePairTypeLisd * FeaturePairIn)
{
  n = 0;
  FeaturePair = FeaturePairIn;
}

ArrayPairReferenceFullType::ArrayPairReferenceFullType(
 NaturalType * nIn,
 QIFFeaturePairTypeLisd * FeaturePairIn)
{
  n = nIn;
  FeaturePair = FeaturePairIn;
}

ArrayPairReferenceFullType::~ArrayPairReferenceFullType()
{
  #ifndef NODESTRUCT
  delete n;
  delete FeaturePair;
  #endif
}

void ArrayPairReferenceFullType::printSelf(FILE * outFile)
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
    if (!FeaturePair)
      {
        fprintf(stderr, "FeaturePair list is missing\n");
        exit(1);
      }
    if (FeaturePair->size() == 0)
      {
        fprintf(stderr, "FeaturePair list is empty\n");
        exit(1);
      }
    if (FeaturePair->size() < 1)
      {
        fprintf(stderr,
                "size of FeaturePair list (%d) less than minimum required (1)\n",
                (int)FeaturePair->size());
        exit(1);
      }
    std::list<QIFFeaturePairType *>::iterator iter;
    for (iter = FeaturePair->begin();
         iter != FeaturePair->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<FeaturePair");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</FeaturePair>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArrayPairReferenceFullType::badAttributes(
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
              fprintf(stderr, "two values for n in ArrayPairReferenceFullType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArrayPairReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayPairReferenceFullType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArrayPairReferenceFullType\n");
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

NaturalType * ArrayPairReferenceFullType::getn()
{return n;}

void ArrayPairReferenceFullType::setn(NaturalType * nIn)
{n = nIn;}

QIFFeaturePairTypeLisd * ArrayPairReferenceFullType::getFeaturePair()
{return FeaturePair;}

void ArrayPairReferenceFullType::setFeaturePair(QIFFeaturePairTypeLisd * FeaturePairIn)
{FeaturePair = FeaturePairIn;}

/* ***************************************************************** */

/* class ArrayPoint2dType

*/

ArrayPoint2dType::ArrayPoint2dType() :
  ListDoubleType()
{
  count = 0;
}

ArrayPoint2dType::ArrayPoint2dType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = 0;
}

ArrayPoint2dType::ArrayPoint2dType(
 NaturalType * countIn,
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = countIn;
}

ArrayPoint2dType::~ArrayPoint2dType()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void ArrayPoint2dType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayPoint2dType");
}

void ArrayPoint2dType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

bool ArrayPoint2dType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayPoint2dType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayPoint2dType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayPoint2dType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayPoint2dType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * ArrayPoint2dType::getcount()
{return count;}

void ArrayPoint2dType::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class ArrayPointType

*/

ArrayPointType::ArrayPointType() :
  ListDoubleType()
{
  count = 0;
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

ArrayPointType::ArrayPointType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = 0;
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

ArrayPointType::ArrayPointType(
 NaturalType * countIn,
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
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = countIn;
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

ArrayPointType::~ArrayPointType()
{
  #ifndef NODESTRUCT
  delete count;
  delete decimalPlaces;
  delete linearUnit;
  delete significantFigures;
  delete validity;
  delete xDecimalPlaces;
  delete xSignificantFigures;
  delete xValidity;
  delete yDecimalPlaces;
  delete ySignificantFigures;
  delete yValidity;
  delete zDecimalPlaces;
  delete zSignificantFigures;
  delete zValidity;
  #endif
}

void ArrayPointType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayPointType");
}

void ArrayPointType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
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
  ListDoubleType::printSelf(outFile);
}

bool ArrayPointType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayPointType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayPointType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else if (decl->getname() == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in ArrayPointType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in ArrayPointType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in ArrayPointType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in ArrayPointType\n",
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
              fprintf(stderr, "two values for significantFigures in ArrayPointType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in ArrayPointType\n",
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
              fprintf(stderr, "two values for validity in ArrayPointType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in ArrayPointType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in ArrayPointType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in ArrayPointType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in ArrayPointType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in ArrayPointType\n",
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
              fprintf(stderr, "two values for xValidity in ArrayPointType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in ArrayPointType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in ArrayPointType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in ArrayPointType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in ArrayPointType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in ArrayPointType\n",
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
              fprintf(stderr, "two values for yValidity in ArrayPointType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in ArrayPointType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in ArrayPointType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in ArrayPointType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in ArrayPointType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in ArrayPointType\n",
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
              fprintf(stderr, "two values for zValidity in ArrayPointType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in ArrayPointType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayPointType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayPointType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

NaturalType * ArrayPointType::getcount()
{return count;}

void ArrayPointType::setcount(NaturalType * countIn)
{count = countIn;}

XmlNonNegativeInteger * ArrayPointType::getdecimalPlaces()
{return decimalPlaces;}

void ArrayPointType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlToken * ArrayPointType::getlinearUnit()
{return linearUnit;}

void ArrayPointType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

XmlNonNegativeInteger * ArrayPointType::getsignificantFigures()
{return significantFigures;}

void ArrayPointType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

ValidityEnumType * ArrayPointType::getvalidity()
{return validity;}

void ArrayPointType::setvalidity(ValidityEnumType * validityIn)
{validity = validityIn;}

XmlNonNegativeInteger * ArrayPointType::getxDecimalPlaces()
{return xDecimalPlaces;}

void ArrayPointType::setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn)
{xDecimalPlaces = xDecimalPlacesIn;}

XmlNonNegativeInteger * ArrayPointType::getxSignificantFigures()
{return xSignificantFigures;}

void ArrayPointType::setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn)
{xSignificantFigures = xSignificantFiguresIn;}

ValidityEnumType * ArrayPointType::getxValidity()
{return xValidity;}

void ArrayPointType::setxValidity(ValidityEnumType * xValidityIn)
{xValidity = xValidityIn;}

XmlNonNegativeInteger * ArrayPointType::getyDecimalPlaces()
{return yDecimalPlaces;}

void ArrayPointType::setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn)
{yDecimalPlaces = yDecimalPlacesIn;}

XmlNonNegativeInteger * ArrayPointType::getySignificantFigures()
{return ySignificantFigures;}

void ArrayPointType::setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn)
{ySignificantFigures = ySignificantFiguresIn;}

ValidityEnumType * ArrayPointType::getyValidity()
{return yValidity;}

void ArrayPointType::setyValidity(ValidityEnumType * yValidityIn)
{yValidity = yValidityIn;}

XmlNonNegativeInteger * ArrayPointType::getzDecimalPlaces()
{return zDecimalPlaces;}

void ArrayPointType::setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn)
{zDecimalPlaces = zDecimalPlacesIn;}

XmlNonNegativeInteger * ArrayPointType::getzSignificantFigures()
{return zSignificantFigures;}

void ArrayPointType::setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn)
{zSignificantFigures = zSignificantFiguresIn;}

ValidityEnumType * ArrayPointType::getzValidity()
{return zValidity;}

void ArrayPointType::setzValidity(ValidityEnumType * zValidityIn)
{zValidity = zValidityIn;}

/* ***************************************************************** */

/* class ArrayQPIdFullReferenceType

*/

ArrayQPIdFullReferenceType::ArrayQPIdFullReferenceType()
{
  n = 0;
  QPId = 0;
}

ArrayQPIdFullReferenceType::ArrayQPIdFullReferenceType(
 QPIdFullReferenceTypeLisd * QPIdIn)
{
  n = 0;
  QPId = QPIdIn;
}

ArrayQPIdFullReferenceType::ArrayQPIdFullReferenceType(
 NaturalType * nIn,
 QPIdFullReferenceTypeLisd * QPIdIn)
{
  n = nIn;
  QPId = QPIdIn;
}

ArrayQPIdFullReferenceType::~ArrayQPIdFullReferenceType()
{
  #ifndef NODESTRUCT
  delete n;
  delete QPId;
  #endif
}

void ArrayQPIdFullReferenceType::printSelf(FILE * outFile)
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
    if (!QPId)
      {
        fprintf(stderr, "QPId list is missing\n");
        exit(1);
      }
    if (QPId->size() == 0)
      {
        fprintf(stderr, "QPId list is empty\n");
        exit(1);
      }
    if (QPId->size() < 1)
      {
        fprintf(stderr,
                "size of QPId list (%d) less than minimum required (1)\n",
                (int)QPId->size());
        exit(1);
      }
    std::list<QPIdFullReferenceType *>::iterator iter;
    for (iter = QPId->begin();
         iter != QPId->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<QPId");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</QPId>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArrayQPIdFullReferenceType::badAttributes(
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
              fprintf(stderr, "two values for n in ArrayQPIdFullReferenceType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArrayQPIdFullReferenceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayQPIdFullReferenceType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArrayQPIdFullReferenceType\n");
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

NaturalType * ArrayQPIdFullReferenceType::getn()
{return n;}

void ArrayQPIdFullReferenceType::setn(NaturalType * nIn)
{n = nIn;}

QPIdFullReferenceTypeLisd * ArrayQPIdFullReferenceType::getQPId()
{return QPId;}

void ArrayQPIdFullReferenceType::setQPId(QPIdFullReferenceTypeLisd * QPIdIn)
{QPId = QPIdIn;}

/* ***************************************************************** */

/* class ArrayQPIdFullReferenceTypeLisd

*/

ArrayQPIdFullReferenceTypeLisd::ArrayQPIdFullReferenceTypeLisd() {}

ArrayQPIdFullReferenceTypeLisd::ArrayQPIdFullReferenceTypeLisd(ArrayQPIdFullReferenceType * aArrayQPIdFullReferenceType)
{
  push_back(aArrayQPIdFullReferenceType);
}

ArrayQPIdFullReferenceTypeLisd::~ArrayQPIdFullReferenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ArrayQPIdFullReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ArrayQPIdFullReferenceTypeLisd::printSelf(FILE * outFile)
{
  std::list<ArrayQPIdFullReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ArrayReferenceActiveType

*/

ArrayReferenceActiveType::ArrayReferenceActiveType()
{
  n = 0;
  Id = 0;
}

ArrayReferenceActiveType::ArrayReferenceActiveType(
 QIFReferenceActiveTypeLisd * IdIn)
{
  n = 0;
  Id = IdIn;
}

ArrayReferenceActiveType::ArrayReferenceActiveType(
 NaturalType * nIn,
 QIFReferenceActiveTypeLisd * IdIn)
{
  n = nIn;
  Id = IdIn;
}

ArrayReferenceActiveType::~ArrayReferenceActiveType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Id;
  #endif
}

void ArrayReferenceActiveType::printSelf(FILE * outFile)
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
    if (!Id)
      {
        fprintf(stderr, "Id list is missing\n");
        exit(1);
      }
    if (Id->size() == 0)
      {
        fprintf(stderr, "Id list is empty\n");
        exit(1);
      }
    if (Id->size() < 1)
      {
        fprintf(stderr,
                "size of Id list (%d) less than minimum required (1)\n",
                (int)Id->size());
        exit(1);
      }
    std::list<QIFReferenceActiveType *>::iterator iter;
    for (iter = Id->begin();
         iter != Id->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Id");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Id>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArrayReferenceActiveType::badAttributes(
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
              fprintf(stderr, "two values for n in ArrayReferenceActiveType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArrayReferenceActiveType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayReferenceActiveType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArrayReferenceActiveType\n");
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

NaturalType * ArrayReferenceActiveType::getn()
{return n;}

void ArrayReferenceActiveType::setn(NaturalType * nIn)
{n = nIn;}

QIFReferenceActiveTypeLisd * ArrayReferenceActiveType::getId()
{return Id;}

void ArrayReferenceActiveType::setId(QIFReferenceActiveTypeLisd * IdIn)
{Id = IdIn;}

/* ***************************************************************** */

/* class ArrayReferenceFullType

*/

ArrayReferenceFullType::ArrayReferenceFullType()
{
  n = 0;
  Id = 0;
}

ArrayReferenceFullType::ArrayReferenceFullType(
 QIFReferenceFullTypeLisd * IdIn)
{
  n = 0;
  Id = IdIn;
}

ArrayReferenceFullType::ArrayReferenceFullType(
 NaturalType * nIn,
 QIFReferenceFullTypeLisd * IdIn)
{
  n = nIn;
  Id = IdIn;
}

ArrayReferenceFullType::~ArrayReferenceFullType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Id;
  #endif
}

void ArrayReferenceFullType::printSelf(FILE * outFile)
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
    if (!Id)
      {
        fprintf(stderr, "Id list is missing\n");
        exit(1);
      }
    if (Id->size() == 0)
      {
        fprintf(stderr, "Id list is empty\n");
        exit(1);
      }
    if (Id->size() < 1)
      {
        fprintf(stderr,
                "size of Id list (%d) less than minimum required (1)\n",
                (int)Id->size());
        exit(1);
      }
    std::list<QIFReferenceFullType *>::iterator iter;
    for (iter = Id->begin();
         iter != Id->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Id");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Id>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArrayReferenceFullType::badAttributes(
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
              fprintf(stderr, "two values for n in ArrayReferenceFullType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArrayReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayReferenceFullType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArrayReferenceFullType\n");
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

NaturalType * ArrayReferenceFullType::getn()
{return n;}

void ArrayReferenceFullType::setn(NaturalType * nIn)
{n = nIn;}

QIFReferenceFullTypeLisd * ArrayReferenceFullType::getId()
{return Id;}

void ArrayReferenceFullType::setId(QIFReferenceFullTypeLisd * IdIn)
{Id = IdIn;}

/* ***************************************************************** */

/* class ArrayReferenceType

*/

ArrayReferenceType::ArrayReferenceType()
{
  n = 0;
  Id = 0;
}

ArrayReferenceType::ArrayReferenceType(
 QIFReferenceTypeLisd * IdIn)
{
  n = 0;
  Id = IdIn;
}

ArrayReferenceType::ArrayReferenceType(
 NaturalType * nIn,
 QIFReferenceTypeLisd * IdIn)
{
  n = nIn;
  Id = IdIn;
}

ArrayReferenceType::~ArrayReferenceType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Id;
  #endif
}

void ArrayReferenceType::printSelf(FILE * outFile)
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
    if (!Id)
      {
        fprintf(stderr, "Id list is missing\n");
        exit(1);
      }
    if (Id->size() == 0)
      {
        fprintf(stderr, "Id list is empty\n");
        exit(1);
      }
    if (Id->size() < 1)
      {
        fprintf(stderr,
                "size of Id list (%d) less than minimum required (1)\n",
                (int)Id->size());
        exit(1);
      }
    std::list<QIFReferenceType *>::iterator iter;
    for (iter = Id->begin();
         iter != Id->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Id");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Id>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ArrayReferenceType::badAttributes(
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
              fprintf(stderr, "two values for n in ArrayReferenceType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ArrayReferenceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayReferenceType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ArrayReferenceType\n");
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

NaturalType * ArrayReferenceType::getn()
{return n;}

void ArrayReferenceType::setn(NaturalType * nIn)
{n = nIn;}

QIFReferenceTypeLisd * ArrayReferenceType::getId()
{return Id;}

void ArrayReferenceType::setId(QIFReferenceTypeLisd * IdIn)
{Id = IdIn;}

/* ***************************************************************** */

/* class ArrayUnitVectorType

*/

ArrayUnitVectorType::ArrayUnitVectorType() :
  ListDoubleType()
{
  count = 0;
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

ArrayUnitVectorType::ArrayUnitVectorType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = 0;
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

ArrayUnitVectorType::ArrayUnitVectorType(
 NaturalType * countIn,
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
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
  count = countIn;
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

ArrayUnitVectorType::~ArrayUnitVectorType()
{
  #ifndef NODESTRUCT
  delete count;
  delete decimalPlaces;
  delete linearUnit;
  delete significantFigures;
  delete validity;
  delete xDecimalPlaces;
  delete xSignificantFigures;
  delete xValidity;
  delete yDecimalPlaces;
  delete ySignificantFigures;
  delete yValidity;
  delete zDecimalPlaces;
  delete zSignificantFigures;
  delete zValidity;
  #endif
}

void ArrayUnitVectorType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayUnitVectorType");
}

void ArrayUnitVectorType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
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
  ListDoubleType::printSelf(outFile);
}

bool ArrayUnitVectorType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayUnitVectorType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else if (decl->getname() == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in ArrayUnitVectorType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for significantFigures in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for validity in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for xValidity in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for yValidity in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in ArrayUnitVectorType\n",
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
              fprintf(stderr, "two values for zValidity in ArrayUnitVectorType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in ArrayUnitVectorType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayUnitVectorType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayUnitVectorType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

NaturalType * ArrayUnitVectorType::getcount()
{return count;}

void ArrayUnitVectorType::setcount(NaturalType * countIn)
{count = countIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getdecimalPlaces()
{return decimalPlaces;}

void ArrayUnitVectorType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlToken * ArrayUnitVectorType::getlinearUnit()
{return linearUnit;}

void ArrayUnitVectorType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getsignificantFigures()
{return significantFigures;}

void ArrayUnitVectorType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

ValidityEnumType * ArrayUnitVectorType::getvalidity()
{return validity;}

void ArrayUnitVectorType::setvalidity(ValidityEnumType * validityIn)
{validity = validityIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getxDecimalPlaces()
{return xDecimalPlaces;}

void ArrayUnitVectorType::setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn)
{xDecimalPlaces = xDecimalPlacesIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getxSignificantFigures()
{return xSignificantFigures;}

void ArrayUnitVectorType::setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn)
{xSignificantFigures = xSignificantFiguresIn;}

ValidityEnumType * ArrayUnitVectorType::getxValidity()
{return xValidity;}

void ArrayUnitVectorType::setxValidity(ValidityEnumType * xValidityIn)
{xValidity = xValidityIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getyDecimalPlaces()
{return yDecimalPlaces;}

void ArrayUnitVectorType::setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn)
{yDecimalPlaces = yDecimalPlacesIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getySignificantFigures()
{return ySignificantFigures;}

void ArrayUnitVectorType::setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn)
{ySignificantFigures = ySignificantFiguresIn;}

ValidityEnumType * ArrayUnitVectorType::getyValidity()
{return yValidity;}

void ArrayUnitVectorType::setyValidity(ValidityEnumType * yValidityIn)
{yValidity = yValidityIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getzDecimalPlaces()
{return zDecimalPlaces;}

void ArrayUnitVectorType::setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn)
{zDecimalPlaces = zDecimalPlacesIn;}

XmlNonNegativeInteger * ArrayUnitVectorType::getzSignificantFigures()
{return zSignificantFigures;}

void ArrayUnitVectorType::setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn)
{zSignificantFigures = zSignificantFiguresIn;}

ValidityEnumType * ArrayUnitVectorType::getzValidity()
{return zValidity;}

void ArrayUnitVectorType::setzValidity(ValidityEnumType * zValidityIn)
{zValidity = zValidityIn;}

/* ***************************************************************** */

/* class ArrayUnsignedByteType

*/

ArrayUnsignedByteType::ArrayUnsignedByteType() :
  ListUnsignedByteType()
{
  count = 0;
}

ArrayUnsignedByteType::ArrayUnsignedByteType(
 XmlUnsignedByte * aXmlUnsignedByte) :
  ListUnsignedByteType(aXmlUnsignedByte)
{
  count = 0;
}

ArrayUnsignedByteType::ArrayUnsignedByteType(
 NaturalType * countIn,
 XmlUnsignedByte * aXmlUnsignedByte) :
  ListUnsignedByteType(aXmlUnsignedByte)
{
  count = countIn;
}

ArrayUnsignedByteType::~ArrayUnsignedByteType()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void ArrayUnsignedByteType::printName(FILE * outFile)
{
  fprintf(outFile, "ArrayUnsignedByteType");
}

void ArrayUnsignedByteType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  ListUnsignedByteType::printSelf(outFile);
}

bool ArrayUnsignedByteType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in ArrayUnsignedByteType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in ArrayUnsignedByteType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ArrayUnsignedByteType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in ArrayUnsignedByteType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * ArrayUnsignedByteType::getcount()
{return count;}

void ArrayUnsignedByteType::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class AttributeBaseType

*/

AttributeBaseType::AttributeBaseType()
{
  name = 0;
}

AttributeBaseType::AttributeBaseType(
 XmlString * nameIn)
{
  name = nameIn;
}

AttributeBaseType::~AttributeBaseType()
{
  delete name;
}

void AttributeBaseType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeBaseType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
    }
  return returnValue;
}

XmlString * AttributeBaseType::getname()
{return name;}

void AttributeBaseType::setname(XmlString * nameIn)
{name = nameIn;}

/* ***************************************************************** */

/* class AttributeBaseTypeLisd

*/

AttributeBaseTypeLisd::AttributeBaseTypeLisd() {}

AttributeBaseTypeLisd::AttributeBaseTypeLisd(AttributeBaseType * aAttributeBaseType)
{
  push_back(aAttributeBaseType);
}

AttributeBaseTypeLisd::~AttributeBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AttributeBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AttributeBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<AttributeBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AttributeBoolType

*/

AttributeBoolType::AttributeBoolType() :
  AttributeBaseType()
{
  value = 0;
}

AttributeBoolType::AttributeBoolType(
 XmlString * nameIn,
 XmlBoolean * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeBoolType::~AttributeBoolType()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeBoolType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeBoolType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeBoolType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeBoolType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          XmlBoolean * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeBoolType\n");
              returnValue = true;
              break;
            }
          valueVal = new XmlBoolean(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeBoolType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeBoolType\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeBoolType\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeBoolType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

XmlBoolean * AttributeBoolType::getvalue()
{return value;}

void AttributeBoolType::setvalue(XmlBoolean * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeD1Type

*/

AttributeD1Type::AttributeD1Type() :
  AttributeBaseType()
{
  value = 0;
}

AttributeD1Type::AttributeD1Type(
 XmlString * nameIn,
 XmlDouble * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeD1Type::~AttributeD1Type()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeD1Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeD1Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeD1Type\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeD1Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          XmlDouble * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeD1Type\n");
              returnValue = true;
              break;
            }
          valueVal = new XmlDouble(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeD1Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeD1Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeD1Type\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeD1Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

XmlDouble * AttributeD1Type::getvalue()
{return value;}

void AttributeD1Type::setvalue(XmlDouble * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeD2Type

*/

AttributeD2Type::AttributeD2Type() :
  AttributeBaseType()
{
  value = 0;
}

AttributeD2Type::AttributeD2Type(
 XmlString * nameIn,
 D2Type * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeD2Type::~AttributeD2Type()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeD2Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeD2Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeD2Type\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeD2Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          D2Type * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeD2Type\n");
              returnValue = true;
              break;
            }
          valueVal = new D2Type(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeD2Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeD2Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeD2Type\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeD2Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

D2Type * AttributeD2Type::getvalue()
{return value;}

void AttributeD2Type::setvalue(D2Type * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeD3Type

*/

AttributeD3Type::AttributeD3Type() :
  AttributeBaseType()
{
  value = 0;
}

AttributeD3Type::AttributeD3Type(
 XmlString * nameIn,
 D3Type * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeD3Type::~AttributeD3Type()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeD3Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeD3Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeD3Type\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeD3Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          D3Type * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeD3Type\n");
              returnValue = true;
              break;
            }
          valueVal = new D3Type(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeD3Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeD3Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeD3Type\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeD3Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

D3Type * AttributeD3Type::getvalue()
{return value;}

void AttributeD3Type::setvalue(D3Type * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeI1Type

*/

AttributeI1Type::AttributeI1Type() :
  AttributeBaseType()
{
  value = 0;
}

AttributeI1Type::AttributeI1Type(
 XmlString * nameIn,
 XmlInteger * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeI1Type::~AttributeI1Type()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeI1Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeI1Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeI1Type\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeI1Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          XmlInteger * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeI1Type\n");
              returnValue = true;
              break;
            }
          valueVal = new XmlInteger(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeI1Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeI1Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeI1Type\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeI1Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

XmlInteger * AttributeI1Type::getvalue()
{return value;}

void AttributeI1Type::setvalue(XmlInteger * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeI2Type

*/

AttributeI2Type::AttributeI2Type() :
  AttributeBaseType()
{
  value = 0;
}

AttributeI2Type::AttributeI2Type(
 XmlString * nameIn,
 I2Type * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeI2Type::~AttributeI2Type()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeI2Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeI2Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeI2Type\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeI2Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          I2Type * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeI2Type\n");
              returnValue = true;
              break;
            }
          valueVal = new I2Type(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeI2Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeI2Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeI2Type\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeI2Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

I2Type * AttributeI2Type::getvalue()
{return value;}

void AttributeI2Type::setvalue(I2Type * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeI3Type

*/

AttributeI3Type::AttributeI3Type() :
  AttributeBaseType()
{
  value = 0;
}

AttributeI3Type::AttributeI3Type(
 XmlString * nameIn,
 I3Type * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeI3Type::~AttributeI3Type()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeI3Type::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeI3Type::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeI3Type\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeI3Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          I3Type * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeI3Type\n");
              returnValue = true;
              break;
            }
          valueVal = new I3Type(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeI3Type\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeI3Type\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeI3Type\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeI3Type\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

I3Type * AttributeI3Type::getvalue()
{return value;}

void AttributeI3Type::setvalue(I3Type * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeQPIdType

*/

AttributeQPIdType::AttributeQPIdType() :
  AttributeBaseType()
{
  Value = 0;
}

AttributeQPIdType::AttributeQPIdType(
 QPIdType * ValueIn) :
  AttributeBaseType()
{
  Value = ValueIn;
}

AttributeQPIdType::AttributeQPIdType(
 XmlString * nameIn,
 QPIdType * ValueIn) :
  AttributeBaseType(
    nameIn)
{
  Value = ValueIn;
}

AttributeQPIdType::~AttributeQPIdType()
{
  #ifndef NODESTRUCT
  delete Value;
  #endif
}

void AttributeQPIdType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Value");
  Value->printSelf(outFile);
  fprintf(outFile, "</Value>\n");
  doSpaces(-INDENT, outFile);
}

bool AttributeQPIdType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeQPIdType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeQPIdType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeQPIdType\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeQPIdType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
    }
  return returnValue;
}

QPIdType * AttributeQPIdType::getValue()
{return Value;}

void AttributeQPIdType::setValue(QPIdType * ValueIn)
{Value = ValueIn;}

/* ***************************************************************** */

/* class AttributeStrType

*/

AttributeStrType::AttributeStrType() :
  AttributeBaseType()
{
  value = 0;
}

AttributeStrType::AttributeStrType(
 XmlString * nameIn,
 XmlString * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeStrType::~AttributeStrType()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeStrType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeStrType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeStrType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeStrType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          XmlString * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeStrType\n");
              returnValue = true;
              break;
            }
          valueVal = new XmlString(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeStrType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeStrType\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeStrType\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeStrType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

XmlString * AttributeStrType::getvalue()
{return value;}

void AttributeStrType::setvalue(XmlString * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeTimeType

*/

AttributeTimeType::AttributeTimeType() :
  AttributeBaseType()
{
  value = 0;
}

AttributeTimeType::AttributeTimeType(
 XmlString * nameIn,
 XmlDateTime * valueIn) :
  AttributeBaseType(
    nameIn)
{
  value = valueIn;
}

AttributeTimeType::~AttributeTimeType()
{
  #ifndef NODESTRUCT
  delete value;
  #endif
}

void AttributeTimeType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (value)
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
      fprintf(outFile, "value=\"");
      value->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"value\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool AttributeTimeType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeTimeType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeTimeType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "value")
        {
          XmlDateTime * valueVal;
          if (this->value)
            {
              fprintf(stderr, "two values for value in AttributeTimeType\n");
              returnValue = true;
              break;
            }
          valueVal = new XmlDateTime(decl->getval().c_str());
          if (valueVal->getbad())
            {
              delete valueVal;
              fprintf(stderr, "bad value %s for value in AttributeTimeType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->value = valueVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeTimeType\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeTimeType\n");
      returnValue = true;
    }
  if (this->value == 0)
    {
      fprintf(stderr, "required attribute \"value\" missing in AttributeTimeType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->value;
      this->value = 0;
    }
  return returnValue;
}

XmlDateTime * AttributeTimeType::getvalue()
{return value;}

void AttributeTimeType::setvalue(XmlDateTime * valueIn)
{value = valueIn;}

/* ***************************************************************** */

/* class AttributeUserType

*/

AttributeUserType::AttributeUserType() :
  AttributeBaseType()
{
  nameUserAttribute = 0;
  AttributeUserTypePair = 0;
}

AttributeUserType::AttributeUserType(
 AttributeUserTypeChoicePair * AttributeUserTypePairIn) :
  AttributeBaseType()
{
  nameUserAttribute = 0;
  AttributeUserTypePair = AttributeUserTypePairIn;
}

AttributeUserType::AttributeUserType(
 XmlString * nameIn,
 XmlString * nameUserAttributeIn,
 AttributeUserTypeChoicePair * AttributeUserTypePairIn) :
  AttributeBaseType(
    nameIn)
{
  nameUserAttribute = nameUserAttributeIn;
  AttributeUserTypePair = AttributeUserTypePairIn;
}

AttributeUserType::~AttributeUserType()
{
  #ifndef NODESTRUCT
  delete nameUserAttribute;
  delete AttributeUserTypePair;
  #endif
}

void AttributeUserType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (name)
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
      fprintf(outFile, "name=\"");
      name->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"name\" missing\n");
      exit(1);
    }
  if (nameUserAttribute)
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
      fprintf(outFile, "nameUserAttribute=\"");
      nameUserAttribute->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"nameUserAttribute\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  AttributeUserTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}
AttributeUserTypeChoicePair * AttributeUserType::getAttributeUserTypeChoicePair()
{return AttributeUserTypePair;}

void AttributeUserType::setAttributeUserTypeChoicePair(AttributeUserTypeChoicePair * AttributeUserTypePairIn)
{AttributeUserTypePair = AttributeUserTypePairIn;}

/* ***************************************************************** */

AttributeUserTypeChoicePair::AttributeUserTypeChoicePair() {}

AttributeUserTypeChoicePair::AttributeUserTypeChoicePair(
 whichOne AttributeUserTypeTypeIn,
 AttributeUserTypeVal AttributeUserTypeValueIn)
{
  AttributeUserTypeType = AttributeUserTypeTypeIn;
  AttributeUserTypeValue = AttributeUserTypeValueIn;
}

AttributeUserTypeChoicePair::~AttributeUserTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (AttributeUserTypeType == UserDataXMLE)
    delete AttributeUserTypeValue.UserDataXML;
  else if (AttributeUserTypeType == UserDataBinaryE)
    delete AttributeUserTypeValue.UserDataBinary;
  #endif
}

void AttributeUserTypeChoicePair::printSelf(FILE * outFile)
{
  if (AttributeUserTypeType == UserDataXMLE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDataXML");
      AttributeUserTypeValue.UserDataXML->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDataXML>\n");
    }
  else if (AttributeUserTypeType == UserDataBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDataBinary");
      AttributeUserTypeValue.UserDataBinary->printSelf(outFile);
      fprintf(outFile, "</UserDataBinary>\n");
    }
}

bool AttributeUserType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "name")
        {
          XmlString * nameVal;
          if (this->name)
            {
              fprintf(stderr, "two values for name in AttributeUserType\n");
              returnValue = true;
              break;
            }
          nameVal = new XmlString(decl->getval().c_str());
          if (nameVal->getbad())
            {
              delete nameVal;
              fprintf(stderr, "bad value %s for name in AttributeUserType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->name = nameVal;
        }
      else if (decl->getname() == "nameUserAttribute")
        {
          XmlString * nameUserAttributeVal;
          if (this->nameUserAttribute)
            {
              fprintf(stderr, "two values for nameUserAttribute in AttributeUserType\n");
              returnValue = true;
              break;
            }
          nameUserAttributeVal = new XmlString(decl->getval().c_str());
          if (nameUserAttributeVal->getbad())
            {
              delete nameUserAttributeVal;
              fprintf(stderr, "bad value %s for nameUserAttribute in AttributeUserType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->nameUserAttribute = nameUserAttributeVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributeUserType\n");
          returnValue = true;
          break;
        }
    }
  if (this->name == 0)
    {
      fprintf(stderr, "required attribute \"name\" missing in AttributeUserType\n");
      returnValue = true;
    }
  if (this->nameUserAttribute == 0)
    {
      fprintf(stderr, "required attribute \"nameUserAttribute\" missing in AttributeUserType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->name;
      this->name = 0;
      delete this->nameUserAttribute;
      this->nameUserAttribute = 0;
    }
  return returnValue;
}

XmlString * AttributeUserType::getnameUserAttribute()
{return nameUserAttribute;}

void AttributeUserType::setnameUserAttribute(XmlString * nameUserAttributeIn)
{nameUserAttribute = nameUserAttributeIn;}

/* ***************************************************************** */

/* class AttributesType

*/

AttributesType::AttributesType()
{
  n = 0;
  Attribute = 0;
}

AttributesType::AttributesType(
 AttributeBaseTypeLisd * AttributeIn)
{
  n = 0;
  Attribute = AttributeIn;
}

AttributesType::AttributesType(
 NaturalType * nIn,
 AttributeBaseTypeLisd * AttributeIn)
{
  n = nIn;
  Attribute = AttributeIn;
}

AttributesType::~AttributesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Attribute;
  #endif
}

void AttributesType::printSelf(FILE * outFile)
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
    if (!Attribute)
      {
        fprintf(stderr, "Attribute list is missing\n");
        exit(1);
      }
    if (Attribute->size() == 0)
      {
        fprintf(stderr, "Attribute list is empty\n");
        exit(1);
      }
    if (Attribute->size() < 1)
      {
        fprintf(stderr,
                "size of Attribute list (%d) less than minimum required (1)\n",
                (int)Attribute->size());
        exit(1);
      }
    std::list<AttributeBaseType *>::iterator iter;
    for (iter = Attribute->begin();
         iter != Attribute->end(); iter++)
      {
        AttributeBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->getprintElement() == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->getprintElement(), "AttributeBool") == 0)
          {
            AttributeBoolType * typ;
            if ((typ = dynamic_cast<AttributeBoolType *>(basie)))
              {
                fprintf(outFile, "<AttributeBool");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeBool element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeStr") == 0)
          {
            AttributeStrType * typ;
            if ((typ = dynamic_cast<AttributeStrType *>(basie)))
              {
                fprintf(outFile, "<AttributeStr");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeStr element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeTime") == 0)
          {
            AttributeTimeType * typ;
            if ((typ = dynamic_cast<AttributeTimeType *>(basie)))
              {
                fprintf(outFile, "<AttributeTime");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeTime element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeQPId") == 0)
          {
            AttributeQPIdType * typ;
            if ((typ = dynamic_cast<AttributeQPIdType *>(basie)))
              {
                fprintf(outFile, "<AttributeQPId");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</AttributeQPId>\n");
              }
            else
              {
                fprintf(stderr, "bad AttributeQPId element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeI1") == 0)
          {
            AttributeI1Type * typ;
            if ((typ = dynamic_cast<AttributeI1Type *>(basie)))
              {
                fprintf(outFile, "<AttributeI1");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeI1 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeI2") == 0)
          {
            AttributeI2Type * typ;
            if ((typ = dynamic_cast<AttributeI2Type *>(basie)))
              {
                fprintf(outFile, "<AttributeI2");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeI2 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeI3") == 0)
          {
            AttributeI3Type * typ;
            if ((typ = dynamic_cast<AttributeI3Type *>(basie)))
              {
                fprintf(outFile, "<AttributeI3");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeI3 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeD1") == 0)
          {
            AttributeD1Type * typ;
            if ((typ = dynamic_cast<AttributeD1Type *>(basie)))
              {
                fprintf(outFile, "<AttributeD1");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeD1 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeD2") == 0)
          {
            AttributeD2Type * typ;
            if ((typ = dynamic_cast<AttributeD2Type *>(basie)))
              {
                fprintf(outFile, "<AttributeD2");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeD2 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeD3") == 0)
          {
            AttributeD3Type * typ;
            if ((typ = dynamic_cast<AttributeD3Type *>(basie)))
              {
                fprintf(outFile, "<AttributeD3");
                typ->printSelf(outFile);
              }
            else
              {
                fprintf(stderr, "bad AttributeD3 element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "AttributeUser") == 0)
          {
            AttributeUserType * typ;
            if ((typ = dynamic_cast<AttributeUserType *>(basie)))
              {
                fprintf(outFile, "<AttributeUser");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</AttributeUser>\n");
              }
            else
              {
                fprintf(stderr, "bad AttributeUser element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Attribute type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AttributesType::badAttributes(
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
              fprintf(stderr, "two values for n in AttributesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AttributesType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AttributesType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AttributesType\n");
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

NaturalType * AttributesType::getn()
{return n;}

void AttributesType::setn(NaturalType * nIn)
{n = nIn;}

AttributeBaseTypeLisd * AttributesType::getAttribute()
{return Attribute;}

void AttributesType::setAttribute(AttributeBaseTypeLisd * AttributeIn)
{Attribute = AttributeIn;}

/* ***************************************************************** */

/* class AxisType

*/

AxisType::AxisType()
{
  AxisPoint = 0;
  Direction = 0;
}

AxisType::AxisType(
 PointType * AxisPointIn,
 UnitVectorType * DirectionIn)
{
  AxisPoint = AxisPointIn;
  Direction = DirectionIn;
}

AxisType::~AxisType()
{
  #ifndef NODESTRUCT
  delete AxisPoint;
  delete Direction;
  #endif
}

void AxisType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<AxisPoint");
  AxisPoint->printSelf(outFile);
  fprintf(outFile, "</AxisPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Direction");
  Direction->printSelf(outFile);
  fprintf(outFile, "</Direction>\n");
  doSpaces(-INDENT, outFile);
}

PointType * AxisType::getAxisPoint()
{return AxisPoint;}

void AxisType::setAxisPoint(PointType * AxisPointIn)
{AxisPoint = AxisPointIn;}

UnitVectorType * AxisType::getDirection()
{return Direction;}

void AxisType::setDirection(UnitVectorType * DirectionIn)
{Direction = DirectionIn;}

/* ***************************************************************** */

/* class BinaryDataType

*/

BinaryDataType::BinaryDataType()
{
  count = 0;
  val = "";
}

BinaryDataType::BinaryDataType(
 const char * valStringIn) :
  XmlBase64Binary(valStringIn)
{
  count = 0;
}

BinaryDataType::BinaryDataType(
 NaturalType * countIn,
 const char * valStringIn) :
  XmlBase64Binary(valStringIn)
{
  count = countIn;
}

BinaryDataType::~BinaryDataType()
{
  #ifndef NODESTRUCT
  delete count;
  #endif
}

void BinaryDataType::printName(FILE * outFile)
{
  fprintf(outFile, "BinaryDataType");
}

void BinaryDataType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
  XmlBase64Binary::printSelf(outFile);
}

bool BinaryDataType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in BinaryDataType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in BinaryDataType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in BinaryDataType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in BinaryDataType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
    }
  return returnValue;
}

NaturalType * BinaryDataType::getcount()
{return count;}

void BinaryDataType::setcount(NaturalType * countIn)
{count = countIn;}

/* ***************************************************************** */

/* class BoundingBoxAxisAlignedType

*/

BoundingBoxAxisAlignedType::BoundingBoxAxisAlignedType()
{
  PointMin = 0;
  PointMax = 0;
}

BoundingBoxAxisAlignedType::BoundingBoxAxisAlignedType(
 PointSimpleType * PointMinIn,
 PointSimpleType * PointMaxIn)
{
  PointMin = PointMinIn;
  PointMax = PointMaxIn;
}

BoundingBoxAxisAlignedType::~BoundingBoxAxisAlignedType()
{
  #ifndef NODESTRUCT
  delete PointMin;
  delete PointMax;
  #endif
}

void BoundingBoxAxisAlignedType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<PointMin");
  PointMin->printSelf(outFile);
  fprintf(outFile, "</PointMin>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<PointMax");
  PointMax->printSelf(outFile);
  fprintf(outFile, "</PointMax>\n");
  doSpaces(-INDENT, outFile);
}

PointSimpleType * BoundingBoxAxisAlignedType::getPointMin()
{return PointMin;}

void BoundingBoxAxisAlignedType::setPointMin(PointSimpleType * PointMinIn)
{PointMin = PointMinIn;}

PointSimpleType * BoundingBoxAxisAlignedType::getPointMax()
{return PointMax;}

void BoundingBoxAxisAlignedType::setPointMax(PointSimpleType * PointMaxIn)
{PointMax = PointMaxIn;}

/* ***************************************************************** */

/* class CoordinateSystemCoreType

*/

CoordinateSystemCoreType::CoordinateSystemCoreType()
{
  Rotation = 0;
  Origin = 0;
}

CoordinateSystemCoreType::CoordinateSystemCoreType(
 TransformRotationType * RotationIn,
 PointSimpleType * OriginIn)
{
  Rotation = RotationIn;
  Origin = OriginIn;
}

CoordinateSystemCoreType::~CoordinateSystemCoreType()
{
  #ifndef NODESTRUCT
  delete Rotation;
  delete Origin;
  #endif
}

void CoordinateSystemCoreType::printSelf(FILE * outFile)
{
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
  doSpaces(-INDENT, outFile);
}

TransformRotationType * CoordinateSystemCoreType::getRotation()
{return Rotation;}

void CoordinateSystemCoreType::setRotation(TransformRotationType * RotationIn)
{Rotation = RotationIn;}

PointSimpleType * CoordinateSystemCoreType::getOrigin()
{return Origin;}

void CoordinateSystemCoreType::setOrigin(PointSimpleType * OriginIn)
{Origin = OriginIn;}

/* ***************************************************************** */

/* class D2Type

*/

D2Type::D2Type() :
  ListDoubleType()
{
}

D2Type::D2Type(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

D2Type::D2Type(
 const char * valueString) :
  ListDoubleType(valueString)
{
  D2TypeCheck();
  if (bad)
    {
      fprintf(stderr, "D2TypeCheck failed\n");
      exit(1);
    }
}

D2Type::~D2Type() {}

void D2Type::printName(FILE * outFile)
{
  fprintf(outFile, "D2Type");
}

void D2Type::printSelf(FILE * outFile)
{
  D2TypeCheck();
  if (bad)
    {
      fprintf(stderr, "D2TypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void D2Type::oPrintSelf(FILE * outFile)
{
  D2TypeCheck();
  if (getbad())
    {
      fprintf(stderr, "D2TypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool D2Type::D2TypeCheck()
{
  setbad((size() != 2));
  return bad;
}

/* ***************************************************************** */

/* class D3Type

*/

D3Type::D3Type() :
  ListDoubleType()
{
}

D3Type::D3Type(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

D3Type::D3Type(
 const char * valueString) :
  ListDoubleType(valueString)
{
  D3TypeCheck();
  if (bad)
    {
      fprintf(stderr, "D3TypeCheck failed\n");
      exit(1);
    }
}

D3Type::~D3Type() {}

void D3Type::printName(FILE * outFile)
{
  fprintf(outFile, "D3Type");
}

void D3Type::printSelf(FILE * outFile)
{
  D3TypeCheck();
  if (bad)
    {
      fprintf(stderr, "D3TypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void D3Type::oPrintSelf(FILE * outFile)
{
  D3TypeCheck();
  if (getbad())
    {
      fprintf(stderr, "D3TypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool D3Type::D3TypeCheck()
{
  setbad((size() != 3));
  return bad;
}

/* ***************************************************************** */

/* class D4Type

*/

D4Type::D4Type() :
  ListDoubleType()
{
}

D4Type::D4Type(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

D4Type::D4Type(
 const char * valueString) :
  ListDoubleType(valueString)
{
  D4TypeCheck();
  if (bad)
    {
      fprintf(stderr, "D4TypeCheck failed\n");
      exit(1);
    }
}

D4Type::~D4Type() {}

void D4Type::printName(FILE * outFile)
{
  fprintf(outFile, "D4Type");
}

void D4Type::printSelf(FILE * outFile)
{
  D4TypeCheck();
  if (bad)
    {
      fprintf(stderr, "D4TypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void D4Type::oPrintSelf(FILE * outFile)
{
  D4TypeCheck();
  if (getbad())
    {
      fprintf(stderr, "D4TypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool D4Type::D4TypeCheck()
{
  setbad((size() != 4));
  return bad;
}

/* ***************************************************************** */

/* class DoublePositiveType

*/

DoublePositiveType::DoublePositiveType() :
  XmlDouble()
{
}

DoublePositiveType::DoublePositiveType(
 const char * valIn) :
  XmlDouble(
    valIn)
{
  if (!getbad())
    setbad((val <= 0.0));
}

DoublePositiveType::~DoublePositiveType() {}

bool DoublePositiveType::DoublePositiveTypeIsBad()
{
  if (XmlDoubleIsBad())
    return true;
  return ((val <= 0.0));
}

void DoublePositiveType::printName(FILE * outFile)
{
  fprintf(outFile, "DoublePositiveType");
}

void DoublePositiveType::printSelf(FILE * outFile)
{
  if (DoublePositiveTypeIsBad())
    {
      fprintf(stderr, "bad DoublePositiveType value, ");
      XmlDouble::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDouble::printSelf(outFile);
}

void DoublePositiveType::oPrintSelf(FILE * outFile)
{
  if (DoublePositiveTypeIsBad())
    {
      fprintf(stderr, "bad DoublePositiveType value, ");
      XmlDouble::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDouble::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ElementReferenceFullType

*/

ElementReferenceFullType::ElementReferenceFullType()
{
  Id = 0;
}

ElementReferenceFullType::ElementReferenceFullType(
 QIFReferenceFullType * IdIn)
{
  Id = IdIn;
}

ElementReferenceFullType::~ElementReferenceFullType()
{
  #ifndef NODESTRUCT
  delete Id;
  #endif
}

void ElementReferenceFullType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Id");
  Id->printSelf(outFile);
  fprintf(outFile, "</Id>\n");
  doSpaces(-INDENT, outFile);
}

QIFReferenceFullType * ElementReferenceFullType::getId()
{return Id;}

void ElementReferenceFullType::setId(QIFReferenceFullType * IdIn)
{Id = IdIn;}

/* ***************************************************************** */

/* class ElementReferenceType

*/

ElementReferenceType::ElementReferenceType()
{
  Id = 0;
}

ElementReferenceType::ElementReferenceType(
 QIFReferenceType * IdIn)
{
  Id = IdIn;
}

ElementReferenceType::~ElementReferenceType()
{
  #ifndef NODESTRUCT
  delete Id;
  #endif
}

void ElementReferenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Id");
  Id->printSelf(outFile);
  fprintf(outFile, "</Id>\n");
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * ElementReferenceType::getId()
{return Id;}

void ElementReferenceType::setId(QIFReferenceType * IdIn)
{Id = IdIn;}

/* ***************************************************************** */

/* class FractionType

*/

FractionType::FractionType()
{
  Numerator = 0;
  Denominator = 0;
}

FractionType::FractionType(
 NaturalType * NumeratorIn,
 NaturalType * DenominatorIn)
{
  Numerator = NumeratorIn;
  Denominator = DenominatorIn;
}

FractionType::~FractionType()
{
  #ifndef NODESTRUCT
  delete Numerator;
  delete Denominator;
  #endif
}

void FractionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Numerator");
  Numerator->printSelf(outFile);
  fprintf(outFile, "</Numerator>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Denominator");
  Denominator->printSelf(outFile);
  fprintf(outFile, "</Denominator>\n");
  doSpaces(-INDENT, outFile);
}

NaturalType * FractionType::getNumerator()
{return Numerator;}

void FractionType::setNumerator(NaturalType * NumeratorIn)
{Numerator = NumeratorIn;}

NaturalType * FractionType::getDenominator()
{return Denominator;}

void FractionType::setDenominator(NaturalType * DenominatorIn)
{Denominator = DenominatorIn;}

/* ***************************************************************** */

/* class I2Type

*/

I2Type::I2Type() :
  ListIntType()
{
}

I2Type::I2Type(
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
}

I2Type::I2Type(
 const char * valueString) :
  ListIntType(valueString)
{
  I2TypeCheck();
  if (bad)
    {
      fprintf(stderr, "I2TypeCheck failed\n");
      exit(1);
    }
}

I2Type::~I2Type() {}

void I2Type::printName(FILE * outFile)
{
  fprintf(outFile, "I2Type");
}

void I2Type::printSelf(FILE * outFile)
{
  I2TypeCheck();
  if (bad)
    {
      fprintf(stderr, "I2TypeCheck failed\n");
      exit(1);
    }
  ListIntType::printSelf(outFile);
}

void I2Type::oPrintSelf(FILE * outFile)
{
  I2TypeCheck();
  if (getbad())
    {
      fprintf(stderr, "I2TypeCheck failed\n");
      exit(1);
    }
  ListIntType::oPrintSelf(outFile);
}

bool I2Type::I2TypeCheck()
{
  setbad((size() != 2));
  return bad;
}

/* ***************************************************************** */

/* class I3Type

*/

I3Type::I3Type() :
  ListIntType()
{
}

I3Type::I3Type(
 XmlInteger * aXmlInteger) :
  ListIntType(aXmlInteger)
{
}

I3Type::I3Type(
 const char * valueString) :
  ListIntType(valueString)
{
  I3TypeCheck();
  if (bad)
    {
      fprintf(stderr, "I3TypeCheck failed\n");
      exit(1);
    }
}

I3Type::~I3Type() {}

void I3Type::printName(FILE * outFile)
{
  fprintf(outFile, "I3Type");
}

void I3Type::printSelf(FILE * outFile)
{
  I3TypeCheck();
  if (bad)
    {
      fprintf(stderr, "I3TypeCheck failed\n");
      exit(1);
    }
  ListIntType::printSelf(outFile);
}

void I3Type::oPrintSelf(FILE * outFile)
{
  I3TypeCheck();
  if (getbad())
    {
      fprintf(stderr, "I3TypeCheck failed\n");
      exit(1);
    }
  ListIntType::oPrintSelf(outFile);
}

bool I3Type::I3TypeCheck()
{
  setbad((size() != 3));
  return bad;
}

/* ***************************************************************** */

/* class LatitudeLongitudeSweepType

*/

LatitudeLongitudeSweepType::LatitudeLongitudeSweepType()
{
  DirMeridianPrime = 0;
  DomainLatitude = 0;
  DomainLongitude = 0;
}

LatitudeLongitudeSweepType::LatitudeLongitudeSweepType(
 UnitVectorType * DirMeridianPrimeIn,
 AngleRangeType * DomainLatitudeIn,
 AngleRangeType * DomainLongitudeIn)
{
  DirMeridianPrime = DirMeridianPrimeIn;
  DomainLatitude = DomainLatitudeIn;
  DomainLongitude = DomainLongitudeIn;
}

LatitudeLongitudeSweepType::~LatitudeLongitudeSweepType()
{
  #ifndef NODESTRUCT
  delete DirMeridianPrime;
  delete DomainLatitude;
  delete DomainLongitude;
  #endif
}

void LatitudeLongitudeSweepType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DirMeridianPrime");
  DirMeridianPrime->printSelf(outFile);
  fprintf(outFile, "</DirMeridianPrime>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DomainLatitude");
  DomainLatitude->printSelf(outFile);
  fprintf(outFile, "</DomainLatitude>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DomainLongitude");
  DomainLongitude->printSelf(outFile);
  fprintf(outFile, "</DomainLongitude>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorType * LatitudeLongitudeSweepType::getDirMeridianPrime()
{return DirMeridianPrime;}

void LatitudeLongitudeSweepType::setDirMeridianPrime(UnitVectorType * DirMeridianPrimeIn)
{DirMeridianPrime = DirMeridianPrimeIn;}

AngleRangeType * LatitudeLongitudeSweepType::getDomainLatitude()
{return DomainLatitude;}

void LatitudeLongitudeSweepType::setDomainLatitude(AngleRangeType * DomainLatitudeIn)
{DomainLatitude = DomainLatitudeIn;}

AngleRangeType * LatitudeLongitudeSweepType::getDomainLongitude()
{return DomainLongitude;}

void LatitudeLongitudeSweepType::setDomainLongitude(AngleRangeType * DomainLongitudeIn)
{DomainLongitude = DomainLongitudeIn;}

/* ***************************************************************** */

/* class LineSegment2dType

*/

LineSegment2dType::LineSegment2dType()
{
  StartPoint = 0;
  EndPoint = 0;
}

LineSegment2dType::LineSegment2dType(
 Point2dSimpleType * StartPointIn,
 Point2dSimpleType * EndPointIn)
{
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
}

LineSegment2dType::~LineSegment2dType()
{
  #ifndef NODESTRUCT
  delete StartPoint;
  delete EndPoint;
  #endif
}

void LineSegment2dType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<StartPoint");
  StartPoint->printSelf(outFile);
  fprintf(outFile, "</StartPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<EndPoint");
  EndPoint->printSelf(outFile);
  fprintf(outFile, "</EndPoint>\n");
  doSpaces(-INDENT, outFile);
}

Point2dSimpleType * LineSegment2dType::getStartPoint()
{return StartPoint;}

void LineSegment2dType::setStartPoint(Point2dSimpleType * StartPointIn)
{StartPoint = StartPointIn;}

Point2dSimpleType * LineSegment2dType::getEndPoint()
{return EndPoint;}

void LineSegment2dType::setEndPoint(Point2dSimpleType * EndPointIn)
{EndPoint = EndPointIn;}

/* ***************************************************************** */

/* class LineSegmentType

*/

LineSegmentType::LineSegmentType()
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
  StartPoint = 0;
  EndPoint = 0;
}

LineSegmentType::LineSegmentType(
 PointSimpleType * StartPointIn,
 PointSimpleType * EndPointIn)
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
}

LineSegmentType::LineSegmentType(
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
 PointSimpleType * StartPointIn,
 PointSimpleType * EndPointIn)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
  StartPoint = StartPointIn;
  EndPoint = EndPointIn;
}

LineSegmentType::~LineSegmentType()
{
  #ifndef NODESTRUCT
  delete decimalPlaces;
  delete linearUnit;
  delete significantFigures;
  delete validity;
  delete xDecimalPlaces;
  delete xSignificantFigures;
  delete xValidity;
  delete yDecimalPlaces;
  delete ySignificantFigures;
  delete yValidity;
  delete zDecimalPlaces;
  delete zSignificantFigures;
  delete zValidity;
  delete StartPoint;
  delete EndPoint;
  #endif
}

void LineSegmentType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<StartPoint");
  StartPoint->printSelf(outFile);
  fprintf(outFile, "</StartPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<EndPoint");
  EndPoint->printSelf(outFile);
  fprintf(outFile, "</EndPoint>\n");
  doSpaces(-INDENT, outFile);
}

bool LineSegmentType::badAttributes(
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
              fprintf(stderr, "two values for decimalPlaces in LineSegmentType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in LineSegmentType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in LineSegmentType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in LineSegmentType\n",
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
              fprintf(stderr, "two values for significantFigures in LineSegmentType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in LineSegmentType\n",
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
              fprintf(stderr, "two values for validity in LineSegmentType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in LineSegmentType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in LineSegmentType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in LineSegmentType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in LineSegmentType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in LineSegmentType\n",
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
              fprintf(stderr, "two values for xValidity in LineSegmentType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in LineSegmentType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in LineSegmentType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in LineSegmentType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in LineSegmentType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in LineSegmentType\n",
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
              fprintf(stderr, "two values for yValidity in LineSegmentType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in LineSegmentType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in LineSegmentType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in LineSegmentType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in LineSegmentType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in LineSegmentType\n",
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
              fprintf(stderr, "two values for zValidity in LineSegmentType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in LineSegmentType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LineSegmentType\n");
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
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

XmlNonNegativeInteger * LineSegmentType::getdecimalPlaces()
{return decimalPlaces;}

void LineSegmentType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlToken * LineSegmentType::getlinearUnit()
{return linearUnit;}

void LineSegmentType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

XmlNonNegativeInteger * LineSegmentType::getsignificantFigures()
{return significantFigures;}

void LineSegmentType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

ValidityEnumType * LineSegmentType::getvalidity()
{return validity;}

void LineSegmentType::setvalidity(ValidityEnumType * validityIn)
{validity = validityIn;}

XmlNonNegativeInteger * LineSegmentType::getxDecimalPlaces()
{return xDecimalPlaces;}

void LineSegmentType::setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn)
{xDecimalPlaces = xDecimalPlacesIn;}

XmlNonNegativeInteger * LineSegmentType::getxSignificantFigures()
{return xSignificantFigures;}

void LineSegmentType::setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn)
{xSignificantFigures = xSignificantFiguresIn;}

ValidityEnumType * LineSegmentType::getxValidity()
{return xValidity;}

void LineSegmentType::setxValidity(ValidityEnumType * xValidityIn)
{xValidity = xValidityIn;}

XmlNonNegativeInteger * LineSegmentType::getyDecimalPlaces()
{return yDecimalPlaces;}

void LineSegmentType::setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn)
{yDecimalPlaces = yDecimalPlacesIn;}

XmlNonNegativeInteger * LineSegmentType::getySignificantFigures()
{return ySignificantFigures;}

void LineSegmentType::setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn)
{ySignificantFigures = ySignificantFiguresIn;}

ValidityEnumType * LineSegmentType::getyValidity()
{return yValidity;}

void LineSegmentType::setyValidity(ValidityEnumType * yValidityIn)
{yValidity = yValidityIn;}

XmlNonNegativeInteger * LineSegmentType::getzDecimalPlaces()
{return zDecimalPlaces;}

void LineSegmentType::setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn)
{zDecimalPlaces = zDecimalPlacesIn;}

XmlNonNegativeInteger * LineSegmentType::getzSignificantFigures()
{return zSignificantFigures;}

void LineSegmentType::setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn)
{zSignificantFigures = zSignificantFiguresIn;}

ValidityEnumType * LineSegmentType::getzValidity()
{return zValidity;}

void LineSegmentType::setzValidity(ValidityEnumType * zValidityIn)
{zValidity = zValidityIn;}

PointSimpleType * LineSegmentType::getStartPoint()
{return StartPoint;}

void LineSegmentType::setStartPoint(PointSimpleType * StartPointIn)
{StartPoint = StartPointIn;}

PointSimpleType * LineSegmentType::getEndPoint()
{return EndPoint;}

void LineSegmentType::setEndPoint(PointSimpleType * EndPointIn)
{EndPoint = EndPointIn;}

/* ***************************************************************** */

/* class ListBooleanType

*/

ListBooleanType::ListBooleanType()
{
}

ListBooleanType::ListBooleanType(
 XmlBoolean * aXmlBoolean) :
  XmlBooleanLisd(aXmlBoolean)
{
}

ListBooleanType::ListBooleanType(
 const char * valueString) :
  XmlBooleanLisd(valueString)
{
}

ListBooleanType::~ListBooleanType()
{
}

void ListBooleanType::printName(FILE * outFile)
{
  fprintf(outFile, "ListBooleanType");
}

void ListBooleanType::printSelf(FILE * outFile)
{
  XmlBooleanLisd::printSelf(outFile);
}

void ListBooleanType::oPrintSelf(FILE * outFile)
{
  XmlBooleanLisd::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ListDateTimeType

*/

ListDateTimeType::ListDateTimeType()
{
}

ListDateTimeType::ListDateTimeType(
 XmlDateTime * aXmlDateTime) :
  XmlDateTimeLisd(aXmlDateTime)
{
}

ListDateTimeType::ListDateTimeType(
 const char * valueString) :
  XmlDateTimeLisd(valueString)
{
}

ListDateTimeType::~ListDateTimeType()
{
}

void ListDateTimeType::printName(FILE * outFile)
{
  fprintf(outFile, "ListDateTimeType");
}

void ListDateTimeType::printSelf(FILE * outFile)
{
  XmlDateTimeLisd::printSelf(outFile);
}

void ListDateTimeType::oPrintSelf(FILE * outFile)
{
  XmlDateTimeLisd::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ListDoubleType

*/

ListDoubleType::ListDoubleType()
{
}

ListDoubleType::ListDoubleType(
 XmlDouble * aXmlDouble) :
  XmlDoubleLisd(aXmlDouble)
{
}

ListDoubleType::ListDoubleType(
 const char * valueString) :
  XmlDoubleLisd(valueString)
{
}

ListDoubleType::~ListDoubleType()
{
}

void ListDoubleType::printName(FILE * outFile)
{
  fprintf(outFile, "ListDoubleType");
}

void ListDoubleType::printSelf(FILE * outFile)
{
  XmlDoubleLisd::printSelf(outFile);
}

void ListDoubleType::oPrintSelf(FILE * outFile)
{
  XmlDoubleLisd::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ListIntType

*/

ListIntType::ListIntType()
{
}

ListIntType::ListIntType(
 XmlInteger * aXmlInteger) :
  XmlIntegerLisd(aXmlInteger)
{
}

ListIntType::ListIntType(
 const char * valueString) :
  XmlIntegerLisd(valueString)
{
}

ListIntType::~ListIntType()
{
}

void ListIntType::printName(FILE * outFile)
{
  fprintf(outFile, "ListIntType");
}

void ListIntType::printSelf(FILE * outFile)
{
  XmlIntegerLisd::printSelf(outFile);
}

void ListIntType::oPrintSelf(FILE * outFile)
{
  XmlIntegerLisd::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ListNaturalType

*/

ListNaturalType::ListNaturalType()
{
}

ListNaturalType::ListNaturalType(
 NaturalType * aNaturalType)
{
  push_back(aNaturalType);
}

ListNaturalType::ListNaturalType(
 const char * valueString)
{
  NaturalType * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
  for (n = 0; valueString[n]; n++)
    {
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
        { //skip leading white space and handle empty or white string
          if (valueString[n] == 0)
            break;
        }
      if (valueString[n] == 0)
        break;
      start = n;
      for (; (valueString[n] != 0) &&
             (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
        {
          fprintf(stderr, "%s is not a valid ListNaturalType\n",
                  valueString);
          bad = true;
          break;
        }
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new NaturalType(buffer);
      if (val->getbad())
        {
          fprintf(stderr, "%s is not a valid ListNaturalType\n",
                  valueString);
          bad = true;
          break;
        }
      else
        push_back(val);
      if (valueString[n] == 0)
        break;
    }
}

ListNaturalType::~ListNaturalType()
{
  #ifndef NODESTRUCT
  std::list<NaturalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ListNaturalType::printName(FILE * outFile)
{
  fprintf(outFile, "ListNaturalType");
}

void ListNaturalType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">");
  oPrintSelf(outFile);
}

void ListNaturalType::oPrintSelf(FILE * outFile)
{
  std::list<NaturalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->oPrintSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    } 
}

bool ListNaturalType::getbad() {return bad;}

void ListNaturalType::setbad(bool badIn) {bad = badIn;}

/* ***************************************************************** */

/* class ListQIFReferenceFullType

*/

ListQIFReferenceFullType::ListQIFReferenceFullType() :
  ListQIFReferenceType()
{
  asmPathId = 0;
  asmPathXId = 0;
}

ListQIFReferenceFullType::ListQIFReferenceFullType(
 ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn) :
  ListQIFReferenceType(
    ListQIFReferenceTypePairIn)
{
  asmPathId = 0;
  asmPathXId = 0;
}

ListQIFReferenceFullType::ListQIFReferenceFullType(
 NaturalType * nIn,
 ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn,
 QIFReferenceSimpleType * asmPathIdIn,
 QIFReferenceSimpleType * asmPathXIdIn) :
  ListQIFReferenceType(
    nIn,
    ListQIFReferenceTypePairIn)
{
  asmPathId = asmPathIdIn;
  asmPathXId = asmPathXIdIn;
}

ListQIFReferenceFullType::~ListQIFReferenceFullType()
{
  #ifndef NODESTRUCT
  delete asmPathId;
  delete asmPathXId;
  #endif
}

void ListQIFReferenceFullType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (asmPathId)
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
      fprintf(outFile, "asmPathId=\"");
      asmPathId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (asmPathXId)
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
      fprintf(outFile, "asmPathXId=\"");
      asmPathXId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  ListQIFReferenceTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool ListQIFReferenceFullType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "asmPathId")
        {
          QIFReferenceSimpleType * asmPathIdVal;
          if (this->asmPathId)
            {
              fprintf(stderr, "two values for asmPathId in ListQIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          asmPathIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (asmPathIdVal->getbad())
            {
              delete asmPathIdVal;
              fprintf(stderr, "bad value %s for asmPathId in ListQIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->asmPathId = asmPathIdVal;
        }
      else if (decl->getname() == "asmPathXId")
        {
          QIFReferenceSimpleType * asmPathXIdVal;
          if (this->asmPathXId)
            {
              fprintf(stderr, "two values for asmPathXId in ListQIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          asmPathXIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (asmPathXIdVal->getbad())
            {
              delete asmPathXIdVal;
              fprintf(stderr, "bad value %s for asmPathXId in ListQIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->asmPathXId = asmPathXIdVal;
        }
      else if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ListQIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ListQIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ListQIFReferenceFullType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ListQIFReferenceFullType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->asmPathId;
      this->asmPathId = 0;
      delete this->asmPathXId;
      this->asmPathXId = 0;
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

QIFReferenceSimpleType * ListQIFReferenceFullType::getasmPathId()
{return asmPathId;}

void ListQIFReferenceFullType::setasmPathId(QIFReferenceSimpleType * asmPathIdIn)
{asmPathId = asmPathIdIn;}

QIFReferenceSimpleType * ListQIFReferenceFullType::getasmPathXId()
{return asmPathXId;}

void ListQIFReferenceFullType::setasmPathXId(QIFReferenceSimpleType * asmPathXIdIn)
{asmPathXId = asmPathXIdIn;}

/* ***************************************************************** */

/* class ListQIFReferenceSimpleType

*/

ListQIFReferenceSimpleType::ListQIFReferenceSimpleType()
{
}

ListQIFReferenceSimpleType::ListQIFReferenceSimpleType(
 QIFReferenceSimpleType * aQIFReferenceSimpleType)
{
  push_back(aQIFReferenceSimpleType);
}

ListQIFReferenceSimpleType::ListQIFReferenceSimpleType(
 const char * valueString)
{
  QIFReferenceSimpleType * val;
  int n;
  int start;
  char buffer[200];

  bad = false;
  for (n = 0; valueString[n]; n++)
    {
      for (; (valueString[n] != 0) && (isspace(valueString[n])); n++)
        { //skip leading white space and handle empty or white string
          if (valueString[n] == 0)
            break;
        }
      if (valueString[n] == 0)
        break;
      start = n;
      for (; (valueString[n] != 0) &&
             (!isspace(valueString[n])); n++);
      if ((n - start) > 199)
        {
          fprintf(stderr, "%s is not a valid ListQIFReferenceSimpleType\n",
                  valueString);
          bad = true;
          break;
        }
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new QIFReferenceSimpleType(buffer);
      if (val->getbad())
        {
          fprintf(stderr, "%s is not a valid ListQIFReferenceSimpleType\n",
                  valueString);
          bad = true;
          break;
        }
      else
        push_back(val);
      if (valueString[n] == 0)
        break;
    }
}

ListQIFReferenceSimpleType::~ListQIFReferenceSimpleType()
{
  #ifndef NODESTRUCT
  std::list<QIFReferenceSimpleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ListQIFReferenceSimpleType::printName(FILE * outFile)
{
  fprintf(outFile, "ListQIFReferenceSimpleType");
}

void ListQIFReferenceSimpleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">");
  oPrintSelf(outFile);
}

void ListQIFReferenceSimpleType::oPrintSelf(FILE * outFile)
{
  std::list<QIFReferenceSimpleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->oPrintSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    } 
}

bool ListQIFReferenceSimpleType::getbad() {return bad;}

void ListQIFReferenceSimpleType::setbad(bool badIn) {bad = badIn;}

/* ***************************************************************** */

/* class ListQIFReferenceType

*/

ListQIFReferenceType::ListQIFReferenceType()
{
  n = 0;
  ListQIFReferenceTypePair = 0;
}

ListQIFReferenceType::ListQIFReferenceType(
 ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn)
{
  n = 0;
  ListQIFReferenceTypePair = ListQIFReferenceTypePairIn;
}

ListQIFReferenceType::ListQIFReferenceType(
 NaturalType * nIn,
 ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn)
{
  n = nIn;
  ListQIFReferenceTypePair = ListQIFReferenceTypePairIn;
}

ListQIFReferenceType::~ListQIFReferenceType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ListQIFReferenceTypePair;
  #endif
}

void ListQIFReferenceType::printSelf(FILE * outFile)
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
  ListQIFReferenceTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ListQIFReferenceTypeChoicePair * ListQIFReferenceType::getListQIFReferenceTypePair()
{return ListQIFReferenceTypePair;}

void ListQIFReferenceType::setListQIFReferenceTypePair(ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn)
{ListQIFReferenceTypePair = ListQIFReferenceTypePairIn;}
ListQIFReferenceTypeChoicePair::ListQIFReferenceTypeChoicePair() {}

ListQIFReferenceTypeChoicePair::ListQIFReferenceTypeChoicePair(
 whichOne ListQIFReferenceTypeTypeIn,
 ListQIFReferenceTypeVal ListQIFReferenceTypeValueIn)
{
  ListQIFReferenceTypeType = ListQIFReferenceTypeTypeIn;
  ListQIFReferenceTypeValue = ListQIFReferenceTypeValueIn;
}

ListQIFReferenceTypeChoicePair::~ListQIFReferenceTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ListQIFReferenceTypeType == IdsE)
    delete ListQIFReferenceTypeValue.Ids;
  else if (ListQIFReferenceTypeType == ListQIFReferenc_1002E)
    delete ListQIFReferenceTypeValue.ListQIFReferenc_1002;
  #endif
}

void ListQIFReferenceTypeChoicePair::printSelf(FILE * outFile)
{
  if (ListQIFReferenceTypeType == IdsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Ids");
      ListQIFReferenceTypeValue.Ids->printSelf(outFile);
      fprintf(outFile, "</Ids>\n");
    }
  else if (ListQIFReferenceTypeType == ListQIFReferenc_1002E)
    {
      ListQIFReferenceTypeValue.ListQIFReferenc_1002->printSelf(outFile);
    }
}

bool ListQIFReferenceType::badAttributes(
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
              fprintf(stderr, "two values for n in ListQIFReferenceType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ListQIFReferenceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ListQIFReferenceType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ListQIFReferenceType\n");
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

NaturalType * ListQIFReferenceType::getn()
{return n;}

void ListQIFReferenceType::setn(NaturalType * nIn)
{n = nIn;}

/* ***************************************************************** */

/* class ListTokenType

*/

ListTokenType::ListTokenType()
{
}

ListTokenType::ListTokenType(
 XmlNMTOKEN * aXmlNMTOKEN) :
  XmlNMTOKENLisd(aXmlNMTOKEN)
{
}

ListTokenType::ListTokenType(
 const char * valueString) :
  XmlNMTOKENLisd(valueString)
{
}

ListTokenType::~ListTokenType()
{
}

void ListTokenType::printName(FILE * outFile)
{
  fprintf(outFile, "ListTokenType");
}

void ListTokenType::printSelf(FILE * outFile)
{
  XmlNMTOKENLisd::printSelf(outFile);
}

void ListTokenType::oPrintSelf(FILE * outFile)
{
  XmlNMTOKENLisd::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ListUnsignedByteType

*/

ListUnsignedByteType::ListUnsignedByteType()
{
}

ListUnsignedByteType::ListUnsignedByteType(
 XmlUnsignedByte * aXmlUnsignedByte) :
  XmlUnsignedByteLisd(aXmlUnsignedByte)
{
}

ListUnsignedByteType::ListUnsignedByteType(
 const char * valueString) :
  XmlUnsignedByteLisd(valueString)
{
}

ListUnsignedByteType::~ListUnsignedByteType()
{
}

void ListUnsignedByteType::printName(FILE * outFile)
{
  fprintf(outFile, "ListUnsignedByteType");
}

void ListUnsignedByteType::printSelf(FILE * outFile)
{
  XmlUnsignedByteLisd::printSelf(outFile);
}

void ListUnsignedByteType::oPrintSelf(FILE * outFile)
{
  XmlUnsignedByteLisd::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class Natural2Type

*/

Natural2Type::Natural2Type() :
  ListNaturalType()
{
}

Natural2Type::Natural2Type(
 NaturalType * aNaturalType) :
  ListNaturalType(aNaturalType)
{
}

Natural2Type::Natural2Type(
 const char * valueString) :
  ListNaturalType(valueString)
{
  Natural2TypeCheck();
  if (bad)
    {
      fprintf(stderr, "Natural2TypeCheck failed\n");
      exit(1);
    }
}

Natural2Type::~Natural2Type() {}

void Natural2Type::printName(FILE * outFile)
{
  fprintf(outFile, "Natural2Type");
}

void Natural2Type::printSelf(FILE * outFile)
{
  Natural2TypeCheck();
  if (bad)
    {
      fprintf(stderr, "Natural2TypeCheck failed\n");
      exit(1);
    }
  ListNaturalType::printSelf(outFile);
}

void Natural2Type::oPrintSelf(FILE * outFile)
{
  Natural2TypeCheck();
  if (getbad())
    {
      fprintf(stderr, "Natural2TypeCheck failed\n");
      exit(1);
    }
  ListNaturalType::oPrintSelf(outFile);
}

bool Natural2Type::Natural2TypeCheck()
{
  setbad((size() != 2));
  return bad;
}

/* ***************************************************************** */

/* class NaturalType

*/

NaturalType::NaturalType() :
  XmlUnsignedInt()
{
}

NaturalType::NaturalType(
 const char * valIn) :
  XmlUnsignedInt(
    valIn)
{
  if (!getbad())
    setbad((val < 1));
}

NaturalType::~NaturalType() {}

bool NaturalType::NaturalTypeIsBad()
{
  if (XmlUnsignedIntIsBad())
    return true;
  return ((val < 1));
}

void NaturalType::printName(FILE * outFile)
{
  fprintf(outFile, "NaturalType");
}

void NaturalType::printSelf(FILE * outFile)
{
  if (NaturalTypeIsBad())
    {
      fprintf(stderr, "bad NaturalType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::printSelf(outFile);
}

void NaturalType::oPrintSelf(FILE * outFile)
{
  if (NaturalTypeIsBad())
    {
      fprintf(stderr, "bad NaturalType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class OrientedLatitudeLongitudeSweepType

*/

OrientedLatitudeLongitudeSweepType::OrientedLatitudeLongitudeSweepType() :
  LatitudeLongitudeSweepType()
{
  DirNorthPole = 0;
}

OrientedLatitudeLongitudeSweepType::OrientedLatitudeLongitudeSweepType(
 UnitVectorType * DirMeridianPrimeIn,
 AngleRangeType * DomainLatitudeIn,
 AngleRangeType * DomainLongitudeIn,
 UnitVectorType * DirNorthPoleIn) :
  LatitudeLongitudeSweepType(
    DirMeridianPrimeIn,
    DomainLatitudeIn,
    DomainLongitudeIn)
{
  DirNorthPole = DirNorthPoleIn;
}

OrientedLatitudeLongitudeSweepType::~OrientedLatitudeLongitudeSweepType()
{
  #ifndef NODESTRUCT
  delete DirNorthPole;
  #endif
}

void OrientedLatitudeLongitudeSweepType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DirMeridianPrime");
  DirMeridianPrime->printSelf(outFile);
  fprintf(outFile, "</DirMeridianPrime>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DomainLatitude");
  DomainLatitude->printSelf(outFile);
  fprintf(outFile, "</DomainLatitude>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DomainLongitude");
  DomainLongitude->printSelf(outFile);
  fprintf(outFile, "</DomainLongitude>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DirNorthPole");
  DirNorthPole->printSelf(outFile);
  fprintf(outFile, "</DirNorthPole>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorType * OrientedLatitudeLongitudeSweepType::getDirNorthPole()
{return DirNorthPole;}

void OrientedLatitudeLongitudeSweepType::setDirNorthPole(UnitVectorType * DirNorthPoleIn)
{DirNorthPole = DirNorthPoleIn;}

/* ***************************************************************** */

/* class ParameterRangeType

*/

ParameterRangeType::ParameterRangeType() :
  ListDoubleType()
{
}

ParameterRangeType::ParameterRangeType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

ParameterRangeType::ParameterRangeType(
 const char * valueString) :
  ListDoubleType(valueString)
{
  ParameterRangeTypeCheck();
  if (bad)
    {
      fprintf(stderr, "ParameterRangeTypeCheck failed\n");
      exit(1);
    }
}

ParameterRangeType::~ParameterRangeType() {}

void ParameterRangeType::printName(FILE * outFile)
{
  fprintf(outFile, "ParameterRangeType");
}

void ParameterRangeType::printSelf(FILE * outFile)
{
  ParameterRangeTypeCheck();
  if (bad)
    {
      fprintf(stderr, "ParameterRangeTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void ParameterRangeType::oPrintSelf(FILE * outFile)
{
  ParameterRangeTypeCheck();
  if (getbad())
    {
      fprintf(stderr, "ParameterRangeTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool ParameterRangeType::ParameterRangeTypeCheck()
{
  setbad((size() != 2));
  return bad;
}

/* ***************************************************************** */

/* class PlaneType

*/

PlaneType::PlaneType()
{
  Point = 0;
  Normal = 0;
}

PlaneType::PlaneType(
 PointType * PointIn,
 UnitVectorType * NormalIn)
{
  Point = PointIn;
  Normal = NormalIn;
}

PlaneType::~PlaneType()
{
  #ifndef NODESTRUCT
  delete Point;
  delete Normal;
  #endif
}

void PlaneType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  fprintf(outFile, "</Point>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Normal");
  Normal->printSelf(outFile);
  fprintf(outFile, "</Normal>\n");
  doSpaces(-INDENT, outFile);
}

PointType * PlaneType::getPoint()
{return Point;}

void PlaneType::setPoint(PointType * PointIn)
{Point = PointIn;}

UnitVectorType * PlaneType::getNormal()
{return Normal;}

void PlaneType::setNormal(UnitVectorType * NormalIn)
{Normal = NormalIn;}

/* ***************************************************************** */

/* class PlaneXType

*/

PlaneXType::PlaneXType() :
  PlaneType()
{
  Direction = 0;
}

PlaneXType::PlaneXType(
 PointType * PointIn,
 UnitVectorType * NormalIn,
 UnitVectorType * DirectionIn) :
  PlaneType(
    PointIn,
    NormalIn)
{
  Direction = DirectionIn;
}

PlaneXType::~PlaneXType()
{
  #ifndef NODESTRUCT
  delete Direction;
  #endif
}

void PlaneXType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Point");
  Point->printSelf(outFile);
  fprintf(outFile, "</Point>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Normal");
  Normal->printSelf(outFile);
  fprintf(outFile, "</Normal>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Direction");
  Direction->printSelf(outFile);
  fprintf(outFile, "</Direction>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorType * PlaneXType::getDirection()
{return Direction;}

void PlaneXType::setDirection(UnitVectorType * DirectionIn)
{Direction = DirectionIn;}

/* ***************************************************************** */

/* class Point2dSimpleType

*/

Point2dSimpleType::Point2dSimpleType() :
  ListDoubleType()
{
}

Point2dSimpleType::Point2dSimpleType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

Point2dSimpleType::Point2dSimpleType(
 const char * valueString) :
  ListDoubleType(valueString)
{
  Point2dSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "Point2dSimpleTypeCheck failed\n");
      exit(1);
    }
}

Point2dSimpleType::~Point2dSimpleType() {}

void Point2dSimpleType::printName(FILE * outFile)
{
  fprintf(outFile, "Point2dSimpleType");
}

void Point2dSimpleType::printSelf(FILE * outFile)
{
  Point2dSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "Point2dSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void Point2dSimpleType::oPrintSelf(FILE * outFile)
{
  Point2dSimpleTypeCheck();
  if (getbad())
    {
      fprintf(stderr, "Point2dSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool Point2dSimpleType::Point2dSimpleTypeCheck()
{
  setbad((size() != 2));
  return bad;
}

/* ***************************************************************** */

/* class Point2dSimpleTypeLisd

*/

Point2dSimpleTypeLisd::Point2dSimpleTypeLisd() {}

Point2dSimpleTypeLisd::Point2dSimpleTypeLisd(
  Point2dSimpleType * aPoint2dSimpleType)
{
  push_back(aPoint2dSimpleType);
}

Point2dSimpleTypeLisd::Point2dSimpleTypeLisd(
  Point2dSimpleTypeLisd * aPoint2dSimpleTypeLisd)
{
  *this = *aPoint2dSimpleTypeLisd;
}

Point2dSimpleTypeLisd::~Point2dSimpleTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<Point2dSimpleType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void Point2dSimpleTypeLisd::printSelf(FILE * outFile)
{
  std::list<Point2dSimpleType *>::iterator iter;

  fprintf(outFile, ">");
  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    }
}

/* ***************************************************************** */

/* class PointSimpleType

*/

PointSimpleType::PointSimpleType() :
  ListDoubleType()
{
}

PointSimpleType::PointSimpleType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

PointSimpleType::PointSimpleType(
 const char * valueString) :
  ListDoubleType(valueString)
{
  PointSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "PointSimpleTypeCheck failed\n");
      exit(1);
    }
}

PointSimpleType::~PointSimpleType() {}

void PointSimpleType::printName(FILE * outFile)
{
  fprintf(outFile, "PointSimpleType");
}

void PointSimpleType::printSelf(FILE * outFile)
{
  PointSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "PointSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void PointSimpleType::oPrintSelf(FILE * outFile)
{
  PointSimpleTypeCheck();
  if (getbad())
    {
      fprintf(stderr, "PointSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool PointSimpleType::PointSimpleTypeCheck()
{
  setbad((size() != 3));
  return bad;
}

/* ***************************************************************** */

/* class PointType

*/

PointType::PointType() :
  PointSimpleType()
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

PointType::PointType(
 XmlDouble * aXmlDouble) :
  PointSimpleType(aXmlDouble)
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

PointType::PointType(
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
 XmlDouble * aXmlDouble) :
  PointSimpleType(aXmlDouble)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

PointType::~PointType()
{
  #ifndef NODESTRUCT
  delete decimalPlaces;
  delete linearUnit;
  delete significantFigures;
  delete validity;
  delete xDecimalPlaces;
  delete xSignificantFigures;
  delete xValidity;
  delete yDecimalPlaces;
  delete ySignificantFigures;
  delete yValidity;
  delete zDecimalPlaces;
  delete zSignificantFigures;
  delete zValidity;
  #endif
}

void PointType::printName(FILE * outFile)
{
  fprintf(outFile, "PointType");
}

void PointType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  PointTypeCheck();
  if (bad)
    {
      fprintf(stderr, "PointTypeCheck failed\n");
      exit(1);
    }
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
  ListDoubleType::printSelf(outFile);
}

bool PointType::PointTypeCheck()
{
  PointSimpleTypeCheck();
  return bad;
}

bool PointType::badAttributes(
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
              fprintf(stderr, "two values for decimalPlaces in PointType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in PointType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in PointType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in PointType\n",
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
              fprintf(stderr, "two values for significantFigures in PointType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in PointType\n",
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
              fprintf(stderr, "two values for validity in PointType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in PointType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in PointType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in PointType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in PointType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in PointType\n",
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
              fprintf(stderr, "two values for xValidity in PointType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in PointType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in PointType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in PointType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in PointType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in PointType\n",
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
              fprintf(stderr, "two values for yValidity in PointType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in PointType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in PointType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in PointType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in PointType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in PointType\n",
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
              fprintf(stderr, "two values for zValidity in PointType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in PointType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PointType\n");
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
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

XmlNonNegativeInteger * PointType::getdecimalPlaces()
{return decimalPlaces;}

void PointType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlToken * PointType::getlinearUnit()
{return linearUnit;}

void PointType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

XmlNonNegativeInteger * PointType::getsignificantFigures()
{return significantFigures;}

void PointType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

ValidityEnumType * PointType::getvalidity()
{return validity;}

void PointType::setvalidity(ValidityEnumType * validityIn)
{validity = validityIn;}

XmlNonNegativeInteger * PointType::getxDecimalPlaces()
{return xDecimalPlaces;}

void PointType::setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn)
{xDecimalPlaces = xDecimalPlacesIn;}

XmlNonNegativeInteger * PointType::getxSignificantFigures()
{return xSignificantFigures;}

void PointType::setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn)
{xSignificantFigures = xSignificantFiguresIn;}

ValidityEnumType * PointType::getxValidity()
{return xValidity;}

void PointType::setxValidity(ValidityEnumType * xValidityIn)
{xValidity = xValidityIn;}

XmlNonNegativeInteger * PointType::getyDecimalPlaces()
{return yDecimalPlaces;}

void PointType::setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn)
{yDecimalPlaces = yDecimalPlacesIn;}

XmlNonNegativeInteger * PointType::getySignificantFigures()
{return ySignificantFigures;}

void PointType::setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn)
{ySignificantFigures = ySignificantFiguresIn;}

ValidityEnumType * PointType::getyValidity()
{return yValidity;}

void PointType::setyValidity(ValidityEnumType * yValidityIn)
{yValidity = yValidityIn;}

XmlNonNegativeInteger * PointType::getzDecimalPlaces()
{return zDecimalPlaces;}

void PointType::setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn)
{zDecimalPlaces = zDecimalPlacesIn;}

XmlNonNegativeInteger * PointType::getzSignificantFigures()
{return zSignificantFigures;}

void PointType::setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn)
{zSignificantFigures = zSignificantFiguresIn;}

ValidityEnumType * PointType::getzValidity()
{return zValidity;}

void PointType::setzValidity(ValidityEnumType * zValidityIn)
{zValidity = zValidityIn;}

/* ***************************************************************** */

/* class PolyLineType

*/

PolyLineType::PolyLineType() :
  ArrayPointType()
{
}

PolyLineType::PolyLineType(
 XmlDouble * aXmlDouble) :
  ArrayPointType(aXmlDouble)
{
}

PolyLineType::PolyLineType(
 NaturalType * countIn,
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
 XmlDouble * aXmlDouble) :
  ArrayPointType(aXmlDouble)
{
  count = countIn;
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

PolyLineType::~PolyLineType() {}

void PolyLineType::printName(FILE * outFile)
{
  fprintf(outFile, "PolyLineType");
}

void PolyLineType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (count)
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
      fprintf(outFile, "count=\"");
      count->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"count\" missing\n");
      exit(1);
    }
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
  ListDoubleType::printSelf(outFile);
}

bool PolyLineType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "count")
        {
          NaturalType * countVal;
          if (this->count)
            {
              fprintf(stderr, "two values for count in PolyLineType\n");
              returnValue = true;
              break;
            }
          countVal = new NaturalType(decl->getval().c_str());
          if (countVal->getbad())
            {
              delete countVal;
              fprintf(stderr, "bad value %s for count in PolyLineType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->count = countVal;
        }
      else if (decl->getname() == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in PolyLineType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in PolyLineType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in PolyLineType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in PolyLineType\n",
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
              fprintf(stderr, "two values for significantFigures in PolyLineType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in PolyLineType\n",
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
              fprintf(stderr, "two values for validity in PolyLineType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in PolyLineType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in PolyLineType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in PolyLineType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in PolyLineType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in PolyLineType\n",
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
              fprintf(stderr, "two values for xValidity in PolyLineType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in PolyLineType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in PolyLineType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in PolyLineType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in PolyLineType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in PolyLineType\n",
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
              fprintf(stderr, "two values for yValidity in PolyLineType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in PolyLineType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in PolyLineType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in PolyLineType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in PolyLineType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in PolyLineType\n",
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
              fprintf(stderr, "two values for zValidity in PolyLineType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in PolyLineType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PolyLineType\n");
          returnValue = true;
          break;
        }
    }
  if (this->count == 0)
    {
      fprintf(stderr, "required attribute \"count\" missing in PolyLineType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->count;
      this->count = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

/* ***************************************************************** */

/* class QIFFeaturePairType

*/

QIFFeaturePairType::QIFFeaturePairType()
{
  FirstFeature = 0;
  SecondFeature = 0;
  FirstFeatureZone = 0;
  SecondFeatureZone = 0;
}

QIFFeaturePairType::QIFFeaturePairType(
 QIFReferenceFullType * FirstFeatureIn,
 QIFReferenceFullType * SecondFeatureIn,
 QIFReferenceFullType * FirstFeatureZoneIn,
 QIFReferenceFullType * SecondFeatureZoneIn)
{
  FirstFeature = FirstFeatureIn;
  SecondFeature = SecondFeatureIn;
  FirstFeatureZone = FirstFeatureZoneIn;
  SecondFeatureZone = SecondFeatureZoneIn;
}

QIFFeaturePairType::~QIFFeaturePairType()
{
  #ifndef NODESTRUCT
  delete FirstFeature;
  delete SecondFeature;
  delete FirstFeatureZone;
  delete SecondFeatureZone;
  #endif
}

void QIFFeaturePairType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<FirstFeature");
  FirstFeature->printSelf(outFile);
  fprintf(outFile, "</FirstFeature>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SecondFeature");
  SecondFeature->printSelf(outFile);
  fprintf(outFile, "</SecondFeature>\n");
  if (FirstFeatureZone)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FirstFeatureZone");
      FirstFeatureZone->printSelf(outFile);
      fprintf(outFile, "</FirstFeatureZone>\n");
    }
  if (SecondFeatureZone)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecondFeatureZone");
      SecondFeatureZone->printSelf(outFile);
      fprintf(outFile, "</SecondFeatureZone>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceFullType * QIFFeaturePairType::getFirstFeature()
{return FirstFeature;}

void QIFFeaturePairType::setFirstFeature(QIFReferenceFullType * FirstFeatureIn)
{FirstFeature = FirstFeatureIn;}

QIFReferenceFullType * QIFFeaturePairType::getSecondFeature()
{return SecondFeature;}

void QIFFeaturePairType::setSecondFeature(QIFReferenceFullType * SecondFeatureIn)
{SecondFeature = SecondFeatureIn;}

QIFReferenceFullType * QIFFeaturePairType::getFirstFeatureZone()
{return FirstFeatureZone;}

void QIFFeaturePairType::setFirstFeatureZone(QIFReferenceFullType * FirstFeatureZoneIn)
{FirstFeatureZone = FirstFeatureZoneIn;}

QIFReferenceFullType * QIFFeaturePairType::getSecondFeatureZone()
{return SecondFeatureZone;}

void QIFFeaturePairType::setSecondFeatureZone(QIFReferenceFullType * SecondFeatureZoneIn)
{SecondFeatureZone = SecondFeatureZoneIn;}

/* ***************************************************************** */

/* class QIFFeaturePairTypeLisd

*/

QIFFeaturePairTypeLisd::QIFFeaturePairTypeLisd() {}

QIFFeaturePairTypeLisd::QIFFeaturePairTypeLisd(QIFFeaturePairType * aQIFFeaturePairType)
{
  push_back(aQIFFeaturePairType);
}

QIFFeaturePairTypeLisd::~QIFFeaturePairTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<QIFFeaturePairType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void QIFFeaturePairTypeLisd::printSelf(FILE * outFile)
{
  std::list<QIFFeaturePairType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class QIFIdAndReferenceBaseType

*/

QIFIdAndReferenceBaseType::QIFIdAndReferenceBaseType() :
  XmlUnsignedInt()
{
}

QIFIdAndReferenceBaseType::QIFIdAndReferenceBaseType(
 const char * valIn) :
  XmlUnsignedInt(
    valIn)
{
  if (!getbad())
    setbad(false);
}

QIFIdAndReferenceBaseType::~QIFIdAndReferenceBaseType() {}

bool QIFIdAndReferenceBaseType::QIFIdAndReferenceBaseTypeIsBad()
{
  if (XmlUnsignedIntIsBad())
    return true;
  return (false);
}

void QIFIdAndReferenceBaseType::printName(FILE * outFile)
{
  fprintf(outFile, "QIFIdAndReferenceBaseType");
}

void QIFIdAndReferenceBaseType::printSelf(FILE * outFile)
{
  if (QIFIdAndReferenceBaseTypeIsBad())
    {
      fprintf(stderr, "bad QIFIdAndReferenceBaseType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::printSelf(outFile);
}

void QIFIdAndReferenceBaseType::oPrintSelf(FILE * outFile)
{
  if (QIFIdAndReferenceBaseTypeIsBad())
    {
      fprintf(stderr, "bad QIFIdAndReferenceBaseType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class QIFIdType

*/

QIFIdType::QIFIdType() :
  QIFIdAndReferenceBaseType() {}

QIFIdType::QIFIdType(
 const char * valIn) :
  QIFIdAndReferenceBaseType(
    valIn)
{}

QIFIdType::~QIFIdType() {}

bool QIFIdType::QIFIdTypeIsBad()
{
  if (QIFIdAndReferenceBaseTypeIsBad())
    return true;
  return false;
}

void QIFIdType::printName(FILE * outFile)
{
  fprintf(outFile, "QIFIdType");
}

void QIFIdType::printSelf(FILE * outFile)
{
  if (QIFIdTypeIsBad())
    {
      fprintf(stderr, "bad QIFIdType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::printSelf(outFile);
}

void QIFIdType::oPrintSelf(FILE * outFile)
{
  if (QIFIdTypeIsBad())
    {
      fprintf(stderr, "bad QIFIdType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class QIFReferenceActiveType

*/

QIFReferenceActiveType::QIFReferenceActiveType() :
  QIFReferenceType()
{
  active = 0;
  val = 0;
}

QIFReferenceActiveType::QIFReferenceActiveType(
 const char * valStringIn) :
  QIFReferenceType(valStringIn)
{
  active = 0;
}

QIFReferenceActiveType::QIFReferenceActiveType(
 XmlBoolean * activeIn,
 QIFReferenceSimpleType * xIdIn,
 const char * valStringIn) :
  QIFReferenceType(valStringIn)
{
  active = activeIn;
  xId = xIdIn;
}

QIFReferenceActiveType::~QIFReferenceActiveType()
{
  #ifndef NODESTRUCT
  delete active;
  #endif
}

void QIFReferenceActiveType::printName(FILE * outFile)
{
  fprintf(outFile, "QIFReferenceActiveType");
}

void QIFReferenceActiveType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  QIFReferenceActiveTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "QIFReferenceActiveTypeIsBad failed\n");
      exit(1);
    }
  if (active)
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
      fprintf(outFile, "active=\"");
      active->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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

bool QIFReferenceActiveType::QIFReferenceActiveTypeIsBad()
{
  QIFReferenceTypeIsBad();
  return bad;
}

bool QIFReferenceActiveType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "active")
        {
          XmlBoolean * activeVal;
          if (this->active)
            {
              fprintf(stderr, "two values for active in QIFReferenceActiveType\n");
              returnValue = true;
              break;
            }
          activeVal = new XmlBoolean(decl->getval().c_str());
          if (activeVal->getbad())
            {
              delete activeVal;
              fprintf(stderr, "bad value %s for active in QIFReferenceActiveType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->active = activeVal;
        }
      else if (decl->getname() == "xId")
        {
          QIFReferenceSimpleType * xIdVal;
          if (this->xId)
            {
              fprintf(stderr, "two values for xId in QIFReferenceActiveType\n");
              returnValue = true;
              break;
            }
          xIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (xIdVal->getbad())
            {
              delete xIdVal;
              fprintf(stderr, "bad value %s for xId in QIFReferenceActiveType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xId = xIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in QIFReferenceActiveType\n");
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
      delete this->active;
      this->active = 0;
      delete this->xId;
      this->xId = 0;
    }
  return returnValue;
}

XmlBoolean * QIFReferenceActiveType::getactive()
{return active;}

void QIFReferenceActiveType::setactive(XmlBoolean * activeIn)
{active = activeIn;}

/* ***************************************************************** */

/* class QIFReferenceActiveTypeLisd

*/

QIFReferenceActiveTypeLisd::QIFReferenceActiveTypeLisd() {}

QIFReferenceActiveTypeLisd::QIFReferenceActiveTypeLisd(QIFReferenceActiveType * aQIFReferenceActiveType)
{
  push_back(aQIFReferenceActiveType);
}

QIFReferenceActiveTypeLisd::~QIFReferenceActiveTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<QIFReferenceActiveType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void QIFReferenceActiveTypeLisd::printSelf(FILE * outFile)
{
  std::list<QIFReferenceActiveType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class QIFReferenceBaseType

*/

QIFReferenceBaseType::QIFReferenceBaseType() :
  QIFIdAndReferenceBaseType() {}

QIFReferenceBaseType::QIFReferenceBaseType(
 const char * valIn) :
  QIFIdAndReferenceBaseType(
    valIn)
{}

QIFReferenceBaseType::~QIFReferenceBaseType() {}

bool QIFReferenceBaseType::QIFReferenceBaseTypeIsBad()
{
  if (QIFIdAndReferenceBaseTypeIsBad())
    return true;
  return false;
}

void QIFReferenceBaseType::printName(FILE * outFile)
{
  fprintf(outFile, "QIFReferenceBaseType");
}

void QIFReferenceBaseType::printSelf(FILE * outFile)
{
  if (QIFReferenceBaseTypeIsBad())
    {
      fprintf(stderr, "bad QIFReferenceBaseType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::printSelf(outFile);
}

void QIFReferenceBaseType::oPrintSelf(FILE * outFile)
{
  if (QIFReferenceBaseTypeIsBad())
    {
      fprintf(stderr, "bad QIFReferenceBaseType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class QIFReferenceFullType

*/

QIFReferenceFullType::QIFReferenceFullType() :
  QIFReferenceType()
{
  asmPathId = 0;
  asmPathXId = 0;
  val = 0;
}

QIFReferenceFullType::QIFReferenceFullType(
 const char * valStringIn) :
  QIFReferenceType(valStringIn)
{
  asmPathId = 0;
  asmPathXId = 0;
}

QIFReferenceFullType::QIFReferenceFullType(
 QIFReferenceSimpleType * asmPathIdIn,
 QIFReferenceSimpleType * asmPathXIdIn,
 QIFReferenceSimpleType * xIdIn,
 const char * valStringIn) :
  QIFReferenceType(valStringIn)
{
  asmPathId = asmPathIdIn;
  asmPathXId = asmPathXIdIn;
  xId = xIdIn;
}

QIFReferenceFullType::~QIFReferenceFullType()
{
  #ifndef NODESTRUCT
  delete asmPathId;
  delete asmPathXId;
  #endif
}

void QIFReferenceFullType::printName(FILE * outFile)
{
  fprintf(outFile, "QIFReferenceFullType");
}

void QIFReferenceFullType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  QIFReferenceFullTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "QIFReferenceFullTypeIsBad failed\n");
      exit(1);
    }
  if (asmPathId)
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
      fprintf(outFile, "asmPathId=\"");
      asmPathId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (asmPathXId)
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
      fprintf(outFile, "asmPathXId=\"");
      asmPathXId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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

bool QIFReferenceFullType::QIFReferenceFullTypeIsBad()
{
  QIFReferenceTypeIsBad();
  return bad;
}

bool QIFReferenceFullType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "asmPathId")
        {
          QIFReferenceSimpleType * asmPathIdVal;
          if (this->asmPathId)
            {
              fprintf(stderr, "two values for asmPathId in QIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          asmPathIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (asmPathIdVal->getbad())
            {
              delete asmPathIdVal;
              fprintf(stderr, "bad value %s for asmPathId in QIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->asmPathId = asmPathIdVal;
        }
      else if (decl->getname() == "asmPathXId")
        {
          QIFReferenceSimpleType * asmPathXIdVal;
          if (this->asmPathXId)
            {
              fprintf(stderr, "two values for asmPathXId in QIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          asmPathXIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (asmPathXIdVal->getbad())
            {
              delete asmPathXIdVal;
              fprintf(stderr, "bad value %s for asmPathXId in QIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->asmPathXId = asmPathXIdVal;
        }
      else if (decl->getname() == "xId")
        {
          QIFReferenceSimpleType * xIdVal;
          if (this->xId)
            {
              fprintf(stderr, "two values for xId in QIFReferenceFullType\n");
              returnValue = true;
              break;
            }
          xIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (xIdVal->getbad())
            {
              delete xIdVal;
              fprintf(stderr, "bad value %s for xId in QIFReferenceFullType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xId = xIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in QIFReferenceFullType\n");
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
      delete this->asmPathId;
      this->asmPathId = 0;
      delete this->asmPathXId;
      this->asmPathXId = 0;
      delete this->xId;
      this->xId = 0;
    }
  return returnValue;
}

QIFReferenceSimpleType * QIFReferenceFullType::getasmPathId()
{return asmPathId;}

void QIFReferenceFullType::setasmPathId(QIFReferenceSimpleType * asmPathIdIn)
{asmPathId = asmPathIdIn;}

QIFReferenceSimpleType * QIFReferenceFullType::getasmPathXId()
{return asmPathXId;}

void QIFReferenceFullType::setasmPathXId(QIFReferenceSimpleType * asmPathXIdIn)
{asmPathXId = asmPathXIdIn;}

/* ***************************************************************** */

/* class QIFReferenceFullTypeLisd

*/

QIFReferenceFullTypeLisd::QIFReferenceFullTypeLisd() {}

QIFReferenceFullTypeLisd::QIFReferenceFullTypeLisd(QIFReferenceFullType * aQIFReferenceFullType)
{
  push_back(aQIFReferenceFullType);
}

QIFReferenceFullTypeLisd::~QIFReferenceFullTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<QIFReferenceFullType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void QIFReferenceFullTypeLisd::printSelf(FILE * outFile)
{
  std::list<QIFReferenceFullType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class QIFReferenceSimpleType

*/

QIFReferenceSimpleType::QIFReferenceSimpleType() :
  QIFReferenceBaseType() {}

QIFReferenceSimpleType::QIFReferenceSimpleType(
 const char * valIn) :
  QIFReferenceBaseType(
    valIn)
{}

QIFReferenceSimpleType::~QIFReferenceSimpleType() {}

bool QIFReferenceSimpleType::QIFReferenceSimpleTypeIsBad()
{
  if (QIFReferenceBaseTypeIsBad())
    return true;
  return false;
}

void QIFReferenceSimpleType::printName(FILE * outFile)
{
  fprintf(outFile, "QIFReferenceSimpleType");
}

void QIFReferenceSimpleType::printSelf(FILE * outFile)
{
  if (QIFReferenceSimpleTypeIsBad())
    {
      fprintf(stderr, "bad QIFReferenceSimpleType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::printSelf(outFile);
}

void QIFReferenceSimpleType::oPrintSelf(FILE * outFile)
{
  if (QIFReferenceSimpleTypeIsBad())
    {
      fprintf(stderr, "bad QIFReferenceSimpleType value, ");
      XmlUnsignedInt::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlUnsignedInt::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class QIFReferenceType

*/

QIFReferenceType::QIFReferenceType() :
  QIFReferenceBaseType()
{
  xId = 0;
  val = 0;
}

QIFReferenceType::QIFReferenceType(
 const char * valStringIn) :
  QIFReferenceBaseType(valStringIn)
{
  xId = 0;
}

QIFReferenceType::QIFReferenceType(
 QIFReferenceSimpleType * xIdIn,
 const char * valStringIn) :
  QIFReferenceBaseType(valStringIn)
{
  xId = xIdIn;
}

QIFReferenceType::~QIFReferenceType()
{
  #ifndef NODESTRUCT
  delete xId;
  #endif
}

void QIFReferenceType::printName(FILE * outFile)
{
  fprintf(outFile, "QIFReferenceType");
}

void QIFReferenceType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  QIFReferenceTypeIsBad();
  if (bad)
    {
      fprintf(stderr, "QIFReferenceTypeIsBad failed\n");
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

bool QIFReferenceType::QIFReferenceTypeIsBad()
{
  QIFReferenceBaseTypeIsBad();
  return bad;
}

bool QIFReferenceType::badAttributes(
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
              fprintf(stderr, "two values for xId in QIFReferenceType\n");
              returnValue = true;
              break;
            }
          xIdVal = new QIFReferenceSimpleType(decl->getval().c_str());
          if (xIdVal->getbad())
            {
              delete xIdVal;
              fprintf(stderr, "bad value %s for xId in QIFReferenceType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->xId = xIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in QIFReferenceType\n");
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

QIFReferenceSimpleType * QIFReferenceType::getxId()
{return xId;}

void QIFReferenceType::setxId(QIFReferenceSimpleType * xIdIn)
{xId = xIdIn;}

/* ***************************************************************** */

/* class QIFReferenceTypeLisd

*/

QIFReferenceTypeLisd::QIFReferenceTypeLisd() {}

QIFReferenceTypeLisd::QIFReferenceTypeLisd(QIFReferenceType * aQIFReferenceType)
{
  push_back(aQIFReferenceType);
}

QIFReferenceTypeLisd::~QIFReferenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<QIFReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void QIFReferenceTypeLisd::printSelf(FILE * outFile)
{
  std::list<QIFReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class QPIdFullReferenceType

*/

QPIdFullReferenceType::QPIdFullReferenceType()
{
  ItemQPId = 0;
  DocumentQPId = 0;
}

QPIdFullReferenceType::QPIdFullReferenceType(
 QPIdReferenceType * ItemQPIdIn,
 QPIdReferenceTypeLisd * DocumentQPIdIn)
{
  ItemQPId = ItemQPIdIn;
  DocumentQPId = DocumentQPIdIn;
}

QPIdFullReferenceType::~QPIdFullReferenceType()
{
  #ifndef NODESTRUCT
  delete ItemQPId;
  delete DocumentQPId;
  #endif
}

void QPIdFullReferenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ItemQPId");
  ItemQPId->printSelf(outFile);
  fprintf(outFile, "</ItemQPId>\n");
  {
    if (!DocumentQPId)
      {
        DocumentQPId = new QPIdReferenceTypeLisd;
      }
    std::list<QPIdReferenceType *>::iterator iter;
    for (iter = DocumentQPId->begin();
         iter != DocumentQPId->end(); iter++)
      {// list may be empty
        doSpaces(0, outFile);
        fprintf(outFile, "<DocumentQPId");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</DocumentQPId>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

QPIdReferenceType * QPIdFullReferenceType::getItemQPId()
{return ItemQPId;}

void QPIdFullReferenceType::setItemQPId(QPIdReferenceType * ItemQPIdIn)
{ItemQPId = ItemQPIdIn;}

QPIdReferenceTypeLisd * QPIdFullReferenceType::getDocumentQPId()
{return DocumentQPId;}

void QPIdFullReferenceType::setDocumentQPId(QPIdReferenceTypeLisd * DocumentQPIdIn)
{DocumentQPId = DocumentQPIdIn;}

/* ***************************************************************** */

/* class QPIdFullReferenceTypeLisd

*/

QPIdFullReferenceTypeLisd::QPIdFullReferenceTypeLisd() {}

QPIdFullReferenceTypeLisd::QPIdFullReferenceTypeLisd(QPIdFullReferenceType * aQPIdFullReferenceType)
{
  push_back(aQPIdFullReferenceType);
}

QPIdFullReferenceTypeLisd::~QPIdFullReferenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<QPIdFullReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void QPIdFullReferenceTypeLisd::printSelf(FILE * outFile)
{
  std::list<QPIdFullReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class QPIdReferenceType

*/

QPIdReferenceType::QPIdReferenceType() :
  XmlToken()
{
}

QPIdReferenceType::QPIdReferenceType(
 const char * valIn) :
  XmlToken(
    valIn)
{
  if (!bad)
    {
      boost::regex pattern;
      const char * regexp = "^[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$";
      pattern = boost::regex(regexp,
                         boost::regex::extended|boost::regex::no_except);
      if (pattern.empty())
        fprintf(stderr,
                "cannot handle \"%s\", so not checking %s\n",
                regexp, val.c_str());
      else
        bad = !boost::regex_search(val, pattern);
    }
}

QPIdReferenceType::~QPIdReferenceType() {}

bool QPIdReferenceType::QPIdReferenceTypeIsBad()
{
  boost::regex pattern;
  const char * regexp = "^[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$";

  if (XmlTokenIsBad() == true)
    return true;
  pattern = boost::regex(regexp,
                         boost::regex::extended|boost::regex::no_except);
  if (pattern.empty())
    {
      fprintf(stderr, "cannot handle \"%s\", so not checking %s\n",
              regexp, val.c_str());
      return false;
    }
  return !boost::regex_search(val, pattern);
}

void QPIdReferenceType::printName(FILE * outFile)
{
  fprintf(outFile, "QPIdReferenceType");
}

void QPIdReferenceType::printSelf(FILE * outFile)
{
  if (QPIdReferenceTypeIsBad())
    {
      fprintf(stderr, "bad QPIdReferenceType value, ");
      XmlToken::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlToken::printSelf(outFile);
}

void QPIdReferenceType::oPrintSelf(FILE * outFile)
{
  if (QPIdReferenceTypeIsBad())
    {
      fprintf(stderr, "bad QPIdReferenceType value, ");
      XmlToken::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlToken::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class QPIdReferenceTypeLisd

*/

QPIdReferenceTypeLisd::QPIdReferenceTypeLisd() {}

QPIdReferenceTypeLisd::QPIdReferenceTypeLisd(
  QPIdReferenceType * aQPIdReferenceType)
{
  push_back(aQPIdReferenceType);
}

QPIdReferenceTypeLisd::QPIdReferenceTypeLisd(
  QPIdReferenceTypeLisd * aQPIdReferenceTypeLisd)
{
  *this = *aQPIdReferenceTypeLisd;
}

QPIdReferenceTypeLisd::~QPIdReferenceTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<QPIdReferenceType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void QPIdReferenceTypeLisd::printSelf(FILE * outFile)
{
  std::list<QPIdReferenceType *>::iterator iter;

  fprintf(outFile, ">");
  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    }
}

/* ***************************************************************** */

/* class QPIdType

*/

QPIdType::QPIdType() :
  XmlToken()
{
}

QPIdType::QPIdType(
 const char * valIn) :
  XmlToken(
    valIn)
{
  if (!bad)
    {
      boost::regex pattern;
      const char * regexp = "^[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$";
      pattern = boost::regex(regexp,
                         boost::regex::extended|boost::regex::no_except);
      if (pattern.empty())
        fprintf(stderr,
                "cannot handle \"%s\", so not checking %s\n",
                regexp, val.c_str());
      else
        bad = !boost::regex_search(val, pattern);
    }
}

QPIdType::~QPIdType() {}

bool QPIdType::QPIdTypeIsBad()
{
  boost::regex pattern;
  const char * regexp = "^[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$";

  if (XmlTokenIsBad() == true)
    return true;
  pattern = boost::regex(regexp,
                         boost::regex::extended|boost::regex::no_except);
  if (pattern.empty())
    {
      fprintf(stderr, "cannot handle \"%s\", so not checking %s\n",
              regexp, val.c_str());
      return false;
    }
  return !boost::regex_search(val, pattern);
}

void QPIdType::printName(FILE * outFile)
{
  fprintf(outFile, "QPIdType");
}

void QPIdType::printSelf(FILE * outFile)
{
  if (QPIdTypeIsBad())
    {
      fprintf(stderr, "bad QPIdType value, ");
      XmlToken::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlToken::printSelf(outFile);
}

void QPIdType::oPrintSelf(FILE * outFile)
{
  if (QPIdTypeIsBad())
    {
      fprintf(stderr, "bad QPIdType value, ");
      XmlToken::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlToken::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SweepType

*/

SweepType::SweepType()
{
  DirBeg = 0;
  DomainAngle = 0;
}

SweepType::SweepType(
 UnitVectorType * DirBegIn,
 AngleRangeType * DomainAngleIn)
{
  DirBeg = DirBegIn;
  DomainAngle = DomainAngleIn;
}

SweepType::~SweepType()
{
  #ifndef NODESTRUCT
  delete DirBeg;
  delete DomainAngle;
  #endif
}

void SweepType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<DirBeg");
  DirBeg->printSelf(outFile);
  fprintf(outFile, "</DirBeg>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DomainAngle");
  DomainAngle->printSelf(outFile);
  fprintf(outFile, "</DomainAngle>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorType * SweepType::getDirBeg()
{return DirBeg;}

void SweepType::setDirBeg(UnitVectorType * DirBegIn)
{DirBeg = DirBegIn;}

AngleRangeType * SweepType::getDomainAngle()
{return DomainAngle;}

void SweepType::setDomainAngle(AngleRangeType * DomainAngleIn)
{DomainAngle = DomainAngleIn;}

/* ***************************************************************** */

/* class TransformMatrixType

*/

TransformMatrixType::TransformMatrixType() :
  CoordinateSystemCoreType()
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

TransformMatrixType::TransformMatrixType(
 TransformRotationType * RotationIn,
 PointSimpleType * OriginIn) :
  CoordinateSystemCoreType(
    RotationIn,
    OriginIn)
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

TransformMatrixType::TransformMatrixType(
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
 ValidityEnumType * zValidityIn) :
  CoordinateSystemCoreType(
    RotationIn,
    OriginIn)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

TransformMatrixType::~TransformMatrixType()
{
  #ifndef NODESTRUCT
  delete decimalPlaces;
  delete linearUnit;
  delete significantFigures;
  delete validity;
  delete xDecimalPlaces;
  delete xSignificantFigures;
  delete xValidity;
  delete yDecimalPlaces;
  delete ySignificantFigures;
  delete yValidity;
  delete zDecimalPlaces;
  delete zSignificantFigures;
  delete zValidity;
  #endif
}

void TransformMatrixType::printSelf(FILE * outFile)
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
  doSpaces(-INDENT, outFile);
}

bool TransformMatrixType::badAttributes(
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
              fprintf(stderr, "two values for decimalPlaces in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in TransformMatrixType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in TransformMatrixType\n",
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
              fprintf(stderr, "two values for significantFigures in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in TransformMatrixType\n",
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
              fprintf(stderr, "two values for validity in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in TransformMatrixType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in TransformMatrixType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in TransformMatrixType\n",
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
              fprintf(stderr, "two values for xValidity in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in TransformMatrixType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in TransformMatrixType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in TransformMatrixType\n",
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
              fprintf(stderr, "two values for yValidity in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in TransformMatrixType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in TransformMatrixType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in TransformMatrixType\n",
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
              fprintf(stderr, "two values for zValidity in TransformMatrixType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in TransformMatrixType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TransformMatrixType\n");
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
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

XmlNonNegativeInteger * TransformMatrixType::getdecimalPlaces()
{return decimalPlaces;}

void TransformMatrixType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlToken * TransformMatrixType::getlinearUnit()
{return linearUnit;}

void TransformMatrixType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

XmlNonNegativeInteger * TransformMatrixType::getsignificantFigures()
{return significantFigures;}

void TransformMatrixType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

ValidityEnumType * TransformMatrixType::getvalidity()
{return validity;}

void TransformMatrixType::setvalidity(ValidityEnumType * validityIn)
{validity = validityIn;}

XmlNonNegativeInteger * TransformMatrixType::getxDecimalPlaces()
{return xDecimalPlaces;}

void TransformMatrixType::setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn)
{xDecimalPlaces = xDecimalPlacesIn;}

XmlNonNegativeInteger * TransformMatrixType::getxSignificantFigures()
{return xSignificantFigures;}

void TransformMatrixType::setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn)
{xSignificantFigures = xSignificantFiguresIn;}

ValidityEnumType * TransformMatrixType::getxValidity()
{return xValidity;}

void TransformMatrixType::setxValidity(ValidityEnumType * xValidityIn)
{xValidity = xValidityIn;}

XmlNonNegativeInteger * TransformMatrixType::getyDecimalPlaces()
{return yDecimalPlaces;}

void TransformMatrixType::setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn)
{yDecimalPlaces = yDecimalPlacesIn;}

XmlNonNegativeInteger * TransformMatrixType::getySignificantFigures()
{return ySignificantFigures;}

void TransformMatrixType::setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn)
{ySignificantFigures = ySignificantFiguresIn;}

ValidityEnumType * TransformMatrixType::getyValidity()
{return yValidity;}

void TransformMatrixType::setyValidity(ValidityEnumType * yValidityIn)
{yValidity = yValidityIn;}

XmlNonNegativeInteger * TransformMatrixType::getzDecimalPlaces()
{return zDecimalPlaces;}

void TransformMatrixType::setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn)
{zDecimalPlaces = zDecimalPlacesIn;}

XmlNonNegativeInteger * TransformMatrixType::getzSignificantFigures()
{return zSignificantFigures;}

void TransformMatrixType::setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn)
{zSignificantFigures = zSignificantFiguresIn;}

ValidityEnumType * TransformMatrixType::getzValidity()
{return zValidity;}

void TransformMatrixType::setzValidity(ValidityEnumType * zValidityIn)
{zValidity = zValidityIn;}

/* ***************************************************************** */

/* class TransformRotationType

*/

TransformRotationType::TransformRotationType()
{
  XDirection = 0;
  YDirection = 0;
  ZDirection = 0;
}

TransformRotationType::TransformRotationType(
 UnitVectorSimpleType * XDirectionIn,
 UnitVectorSimpleType * YDirectionIn,
 UnitVectorSimpleType * ZDirectionIn)
{
  XDirection = XDirectionIn;
  YDirection = YDirectionIn;
  ZDirection = ZDirectionIn;
}

TransformRotationType::~TransformRotationType()
{
  #ifndef NODESTRUCT
  delete XDirection;
  delete YDirection;
  delete ZDirection;
  #endif
}

void TransformRotationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<XDirection");
  XDirection->printSelf(outFile);
  fprintf(outFile, "</XDirection>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<YDirection");
  YDirection->printSelf(outFile);
  fprintf(outFile, "</YDirection>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ZDirection");
  ZDirection->printSelf(outFile);
  fprintf(outFile, "</ZDirection>\n");
  doSpaces(-INDENT, outFile);
}

UnitVectorSimpleType * TransformRotationType::getXDirection()
{return XDirection;}

void TransformRotationType::setXDirection(UnitVectorSimpleType * XDirectionIn)
{XDirection = XDirectionIn;}

UnitVectorSimpleType * TransformRotationType::getYDirection()
{return YDirection;}

void TransformRotationType::setYDirection(UnitVectorSimpleType * YDirectionIn)
{YDirection = YDirectionIn;}

UnitVectorSimpleType * TransformRotationType::getZDirection()
{return ZDirection;}

void TransformRotationType::setZDirection(UnitVectorSimpleType * ZDirectionIn)
{ZDirection = ZDirectionIn;}

/* ***************************************************************** */

/* class UnitVector2dSimpleType

*/

UnitVector2dSimpleType::UnitVector2dSimpleType() :
  ListDoubleType()
{
}

UnitVector2dSimpleType::UnitVector2dSimpleType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

UnitVector2dSimpleType::UnitVector2dSimpleType(
 const char * valueString) :
  ListDoubleType(valueString)
{
  UnitVector2dSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "UnitVector2dSimpleTypeCheck failed\n");
      exit(1);
    }
}

UnitVector2dSimpleType::~UnitVector2dSimpleType() {}

void UnitVector2dSimpleType::printName(FILE * outFile)
{
  fprintf(outFile, "UnitVector2dSimpleType");
}

void UnitVector2dSimpleType::printSelf(FILE * outFile)
{
  UnitVector2dSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "UnitVector2dSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void UnitVector2dSimpleType::oPrintSelf(FILE * outFile)
{
  UnitVector2dSimpleTypeCheck();
  if (getbad())
    {
      fprintf(stderr, "UnitVector2dSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool UnitVector2dSimpleType::UnitVector2dSimpleTypeCheck()
{
  setbad((size() != 2));
  return bad;
}

/* ***************************************************************** */

/* class UnitVectorSimpleType

*/

UnitVectorSimpleType::UnitVectorSimpleType() :
  ListDoubleType()
{
}

UnitVectorSimpleType::UnitVectorSimpleType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

UnitVectorSimpleType::UnitVectorSimpleType(
 const char * valueString) :
  ListDoubleType(valueString)
{
  UnitVectorSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "UnitVectorSimpleTypeCheck failed\n");
      exit(1);
    }
}

UnitVectorSimpleType::~UnitVectorSimpleType() {}

void UnitVectorSimpleType::printName(FILE * outFile)
{
  fprintf(outFile, "UnitVectorSimpleType");
}

void UnitVectorSimpleType::printSelf(FILE * outFile)
{
  UnitVectorSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "UnitVectorSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void UnitVectorSimpleType::oPrintSelf(FILE * outFile)
{
  UnitVectorSimpleTypeCheck();
  if (getbad())
    {
      fprintf(stderr, "UnitVectorSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool UnitVectorSimpleType::UnitVectorSimpleTypeCheck()
{
  setbad((size() != 3));
  return bad;
}

/* ***************************************************************** */

/* class UnitVectorType

*/

UnitVectorType::UnitVectorType() :
  UnitVectorSimpleType()
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

UnitVectorType::UnitVectorType(
 XmlDouble * aXmlDouble) :
  UnitVectorSimpleType(aXmlDouble)
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

UnitVectorType::UnitVectorType(
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
 XmlDouble * aXmlDouble) :
  UnitVectorSimpleType(aXmlDouble)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

UnitVectorType::~UnitVectorType()
{
  #ifndef NODESTRUCT
  delete decimalPlaces;
  delete linearUnit;
  delete significantFigures;
  delete validity;
  delete xDecimalPlaces;
  delete xSignificantFigures;
  delete xValidity;
  delete yDecimalPlaces;
  delete ySignificantFigures;
  delete yValidity;
  delete zDecimalPlaces;
  delete zSignificantFigures;
  delete zValidity;
  #endif
}

void UnitVectorType::printName(FILE * outFile)
{
  fprintf(outFile, "UnitVectorType");
}

void UnitVectorType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  UnitVectorTypeCheck();
  if (bad)
    {
      fprintf(stderr, "UnitVectorTypeCheck failed\n");
      exit(1);
    }
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
  ListDoubleType::printSelf(outFile);
}

bool UnitVectorType::UnitVectorTypeCheck()
{
  UnitVectorSimpleTypeCheck();
  return bad;
}

bool UnitVectorType::badAttributes(
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
              fprintf(stderr, "two values for decimalPlaces in UnitVectorType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in UnitVectorType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in UnitVectorType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in UnitVectorType\n",
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
              fprintf(stderr, "two values for significantFigures in UnitVectorType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in UnitVectorType\n",
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
              fprintf(stderr, "two values for validity in UnitVectorType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in UnitVectorType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in UnitVectorType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in UnitVectorType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in UnitVectorType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in UnitVectorType\n",
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
              fprintf(stderr, "two values for xValidity in UnitVectorType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in UnitVectorType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in UnitVectorType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in UnitVectorType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in UnitVectorType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in UnitVectorType\n",
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
              fprintf(stderr, "two values for yValidity in UnitVectorType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in UnitVectorType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in UnitVectorType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in UnitVectorType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in UnitVectorType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in UnitVectorType\n",
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
              fprintf(stderr, "two values for zValidity in UnitVectorType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in UnitVectorType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in UnitVectorType\n");
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
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

XmlNonNegativeInteger * UnitVectorType::getdecimalPlaces()
{return decimalPlaces;}

void UnitVectorType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlToken * UnitVectorType::getlinearUnit()
{return linearUnit;}

void UnitVectorType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

XmlNonNegativeInteger * UnitVectorType::getsignificantFigures()
{return significantFigures;}

void UnitVectorType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

ValidityEnumType * UnitVectorType::getvalidity()
{return validity;}

void UnitVectorType::setvalidity(ValidityEnumType * validityIn)
{validity = validityIn;}

XmlNonNegativeInteger * UnitVectorType::getxDecimalPlaces()
{return xDecimalPlaces;}

void UnitVectorType::setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn)
{xDecimalPlaces = xDecimalPlacesIn;}

XmlNonNegativeInteger * UnitVectorType::getxSignificantFigures()
{return xSignificantFigures;}

void UnitVectorType::setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn)
{xSignificantFigures = xSignificantFiguresIn;}

ValidityEnumType * UnitVectorType::getxValidity()
{return xValidity;}

void UnitVectorType::setxValidity(ValidityEnumType * xValidityIn)
{xValidity = xValidityIn;}

XmlNonNegativeInteger * UnitVectorType::getyDecimalPlaces()
{return yDecimalPlaces;}

void UnitVectorType::setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn)
{yDecimalPlaces = yDecimalPlacesIn;}

XmlNonNegativeInteger * UnitVectorType::getySignificantFigures()
{return ySignificantFigures;}

void UnitVectorType::setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn)
{ySignificantFigures = ySignificantFiguresIn;}

ValidityEnumType * UnitVectorType::getyValidity()
{return yValidity;}

void UnitVectorType::setyValidity(ValidityEnumType * yValidityIn)
{yValidity = yValidityIn;}

XmlNonNegativeInteger * UnitVectorType::getzDecimalPlaces()
{return zDecimalPlaces;}

void UnitVectorType::setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn)
{zDecimalPlaces = zDecimalPlacesIn;}

XmlNonNegativeInteger * UnitVectorType::getzSignificantFigures()
{return zSignificantFigures;}

void UnitVectorType::setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn)
{zSignificantFigures = zSignificantFiguresIn;}

ValidityEnumType * UnitVectorType::getzValidity()
{return zValidity;}

void UnitVectorType::setzValidity(ValidityEnumType * zValidityIn)
{zValidity = zValidityIn;}

/* ***************************************************************** */

/* class UserDataXMLType

*/

UserDataXMLType::UserDataXMLType()
{
  XmlAnyElement = 0;
}

UserDataXMLType::UserDataXMLType(
 XmlAnyString * XmlAnyElementIn)
{
  XmlAnyElement = XmlAnyElementIn;
}

UserDataXMLType::~UserDataXMLType()
{
  #ifndef NODESTRUCT
  delete XmlAnyElement;
  #endif
}

void UserDataXMLType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  XmlAnyElement->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

XmlAnyString * UserDataXMLType::getXmlAnyElement()
{return XmlAnyElement;}

void UserDataXMLType::setXmlAnyElement(XmlAnyString * XmlAnyElementIn)
{XmlAnyElement = XmlAnyElementIn;}

/* ***************************************************************** */

/* class ValidationPointsType

*/

ValidationPointsType::ValidationPointsType()
{
  ValidationPoint_1003 = 0;
  ValidationPoint_1004 = 0;
}

ValidationPointsType::ValidationPointsType(
 ValidationPoint_1003_Type * ValidationPoint_1003In,
 ValidationPoint_1004_Type * ValidationPoint_1004In)
{
  ValidationPoint_1003 = ValidationPoint_1003In;
  ValidationPoint_1004 = ValidationPoint_1004In;
}

ValidationPointsType::~ValidationPointsType()
{
  #ifndef NODESTRUCT
  delete ValidationPoint_1003;
  delete ValidationPoint_1004;
  #endif
}

void ValidationPointsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ValidationPoint_1003->printSelf(outFile);
  if (ValidationPoint_1004)
    {
  ValidationPoint_1004->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

ValidationPoint_1003_Type * ValidationPointsType::getValidationPoint_1003()
{return ValidationPoint_1003;}

void ValidationPointsType::setValidationPoint_1003(ValidationPoint_1003_Type * ValidationPoint_1003In)
{ValidationPoint_1003 = ValidationPoint_1003In;}

ValidationPoint_1004_Type * ValidationPointsType::getValidationPoint_1004()
{return ValidationPoint_1004;}

void ValidationPointsType::setValidationPoint_1004(ValidationPoint_1004_Type * ValidationPoint_1004In)
{ValidationPoint_1004 = ValidationPoint_1004In;}

/* ***************************************************************** */

/* class ValidityEnumType

*/

ValidityEnumType::ValidityEnumType() :
  XmlNMTOKEN()
{
}

ValidityEnumType::ValidityEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "REPORTED") &&
           strcmp(val.c_str(), "DUMMY") &&
           strcmp(val.c_str(), "MOOT") &&
           strcmp(val.c_str(), "DERIVED") &&
           strcmp(val.c_str(), "SET"));
}

ValidityEnumType::~ValidityEnumType() {}

bool ValidityEnumType::ValidityEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "REPORTED") &&
          strcmp(val.c_str(), "DUMMY") &&
          strcmp(val.c_str(), "MOOT") &&
          strcmp(val.c_str(), "DERIVED") &&
          strcmp(val.c_str(), "SET"));
}

void ValidityEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ValidityEnumType");
}

void ValidityEnumType::printSelf(FILE * outFile)
{
  if (ValidityEnumTypeIsBad())
    {
      fprintf(stderr, "bad ValidityEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ValidityEnumType::oPrintSelf(FILE * outFile)
{
  if (ValidityEnumTypeIsBad())
    {
      fprintf(stderr, "bad ValidityEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class VectorSimpleType

*/

VectorSimpleType::VectorSimpleType() :
  ListDoubleType()
{
}

VectorSimpleType::VectorSimpleType(
 XmlDouble * aXmlDouble) :
  ListDoubleType(aXmlDouble)
{
}

VectorSimpleType::VectorSimpleType(
 const char * valueString) :
  ListDoubleType(valueString)
{
  VectorSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "VectorSimpleTypeCheck failed\n");
      exit(1);
    }
}

VectorSimpleType::~VectorSimpleType() {}

void VectorSimpleType::printName(FILE * outFile)
{
  fprintf(outFile, "VectorSimpleType");
}

void VectorSimpleType::printSelf(FILE * outFile)
{
  VectorSimpleTypeCheck();
  if (bad)
    {
      fprintf(stderr, "VectorSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::printSelf(outFile);
}

void VectorSimpleType::oPrintSelf(FILE * outFile)
{
  VectorSimpleTypeCheck();
  if (getbad())
    {
      fprintf(stderr, "VectorSimpleTypeCheck failed\n");
      exit(1);
    }
  ListDoubleType::oPrintSelf(outFile);
}

bool VectorSimpleType::VectorSimpleTypeCheck()
{
  setbad((size() != 3));
  return bad;
}

/* ***************************************************************** */

/* class VectorType

*/

VectorType::VectorType() :
  VectorSimpleType()
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

VectorType::VectorType(
 XmlDouble * aXmlDouble) :
  VectorSimpleType(aXmlDouble)
{
  decimalPlaces = 0;
  linearUnit = 0;
  significantFigures = 0;
  validity = 0;
  xDecimalPlaces = 0;
  xSignificantFigures = 0;
  xValidity = 0;
  yDecimalPlaces = 0;
  ySignificantFigures = 0;
  yValidity = 0;
  zDecimalPlaces = 0;
  zSignificantFigures = 0;
  zValidity = 0;
}

VectorType::VectorType(
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
 XmlDouble * aXmlDouble) :
  VectorSimpleType(aXmlDouble)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yDecimalPlaces = yDecimalPlacesIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

VectorType::~VectorType()
{
  #ifndef NODESTRUCT
  delete decimalPlaces;
  delete linearUnit;
  delete significantFigures;
  delete validity;
  delete xDecimalPlaces;
  delete xSignificantFigures;
  delete xValidity;
  delete yDecimalPlaces;
  delete ySignificantFigures;
  delete yValidity;
  delete zDecimalPlaces;
  delete zSignificantFigures;
  delete zValidity;
  #endif
}

void VectorType::printName(FILE * outFile)
{
  fprintf(outFile, "VectorType");
}

void VectorType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  VectorTypeCheck();
  if (bad)
    {
      fprintf(stderr, "VectorTypeCheck failed\n");
      exit(1);
    }
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
  ListDoubleType::printSelf(outFile);
}

bool VectorType::VectorTypeCheck()
{
  VectorSimpleTypeCheck();
  return bad;
}

bool VectorType::badAttributes(
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
              fprintf(stderr, "two values for decimalPlaces in VectorType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (decimalPlacesVal->getbad())
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in VectorType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->getname() == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in VectorType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->getval().c_str());
          if (linearUnitVal->getbad())
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in VectorType\n",
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
              fprintf(stderr, "two values for significantFigures in VectorType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (significantFiguresVal->getbad())
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in VectorType\n",
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
              fprintf(stderr, "two values for validity in VectorType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->getval().c_str());
          if (validityVal->getbad())
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in VectorType\n",
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
              fprintf(stderr, "two values for xDecimalPlaces in VectorType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xDecimalPlacesVal->getbad())
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in VectorType\n",
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
              fprintf(stderr, "two values for xSignificantFigures in VectorType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (xSignificantFiguresVal->getbad())
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in VectorType\n",
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
              fprintf(stderr, "two values for xValidity in VectorType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (xValidityVal->getbad())
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in VectorType\n",
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
              fprintf(stderr, "two values for yDecimalPlaces in VectorType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (yDecimalPlacesVal->getbad())
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in VectorType\n",
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
              fprintf(stderr, "two values for ySignificantFigures in VectorType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (ySignificantFiguresVal->getbad())
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in VectorType\n",
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
              fprintf(stderr, "two values for yValidity in VectorType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (yValidityVal->getbad())
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in VectorType\n",
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
              fprintf(stderr, "two values for zDecimalPlaces in VectorType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zDecimalPlacesVal->getbad())
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in VectorType\n",
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
              fprintf(stderr, "two values for zSignificantFigures in VectorType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->getval().c_str());
          if (zSignificantFiguresVal->getbad())
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in VectorType\n",
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
              fprintf(stderr, "two values for zValidity in VectorType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->getval().c_str());
          if (zValidityVal->getbad())
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in VectorType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in VectorType\n");
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
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
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

XmlNonNegativeInteger * VectorType::getdecimalPlaces()
{return decimalPlaces;}

void VectorType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlToken * VectorType::getlinearUnit()
{return linearUnit;}

void VectorType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

XmlNonNegativeInteger * VectorType::getsignificantFigures()
{return significantFigures;}

void VectorType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

ValidityEnumType * VectorType::getvalidity()
{return validity;}

void VectorType::setvalidity(ValidityEnumType * validityIn)
{validity = validityIn;}

XmlNonNegativeInteger * VectorType::getxDecimalPlaces()
{return xDecimalPlaces;}

void VectorType::setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn)
{xDecimalPlaces = xDecimalPlacesIn;}

XmlNonNegativeInteger * VectorType::getxSignificantFigures()
{return xSignificantFigures;}

void VectorType::setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn)
{xSignificantFigures = xSignificantFiguresIn;}

ValidityEnumType * VectorType::getxValidity()
{return xValidity;}

void VectorType::setxValidity(ValidityEnumType * xValidityIn)
{xValidity = xValidityIn;}

XmlNonNegativeInteger * VectorType::getyDecimalPlaces()
{return yDecimalPlaces;}

void VectorType::setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn)
{yDecimalPlaces = yDecimalPlacesIn;}

XmlNonNegativeInteger * VectorType::getySignificantFigures()
{return ySignificantFigures;}

void VectorType::setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn)
{ySignificantFigures = ySignificantFiguresIn;}

ValidityEnumType * VectorType::getyValidity()
{return yValidity;}

void VectorType::setyValidity(ValidityEnumType * yValidityIn)
{yValidity = yValidityIn;}

XmlNonNegativeInteger * VectorType::getzDecimalPlaces()
{return zDecimalPlaces;}

void VectorType::setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn)
{zDecimalPlaces = zDecimalPlacesIn;}

XmlNonNegativeInteger * VectorType::getzSignificantFigures()
{return zSignificantFigures;}

void VectorType::setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn)
{zSignificantFigures = zSignificantFiguresIn;}

ValidityEnumType * VectorType::getzValidity()
{return zValidity;}

void VectorType::setzValidity(ValidityEnumType * zValidityIn)
{zValidity = zValidityIn;}

/* ***************************************************************** */

/* class ArrayBinaryQIFR_1001_Type

*/

ArrayBinaryQIFR_1001_Type::ArrayBinaryQIFR_1001_Type()
{
  Id = 0;
  XIds = 0;
}

ArrayBinaryQIFR_1001_Type::ArrayBinaryQIFR_1001_Type(
 QIFReferenceSimpleType * IdIn,
 ArrayBinaryType * XIdsIn)
{
  Id = IdIn;
  XIds = XIdsIn;
}

ArrayBinaryQIFR_1001_Type::~ArrayBinaryQIFR_1001_Type()
{
  #ifndef NODESTRUCT
  delete Id;
  delete XIds;
  #endif
}

void ArrayBinaryQIFR_1001_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<Id");
  Id->printSelf(outFile);
  fprintf(outFile, "</Id>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<XIds");
  XIds->printSelf(outFile);
  fprintf(outFile, "</XIds>\n");
}

QIFReferenceSimpleType * ArrayBinaryQIFR_1001_Type::getId()
{return Id;}

void ArrayBinaryQIFR_1001_Type::setId(QIFReferenceSimpleType * IdIn)
{Id = IdIn;}

ArrayBinaryType * ArrayBinaryQIFR_1001_Type::getXIds()
{return XIds;}

void ArrayBinaryQIFR_1001_Type::setXIds(ArrayBinaryType * XIdsIn)
{XIds = XIdsIn;}

/* ***************************************************************** */

/* class ListQIFReferenc_1002_Type

*/

ListQIFReferenc_1002_Type::ListQIFReferenc_1002_Type()
{
  Id = 0;
  XIds = 0;
}

ListQIFReferenc_1002_Type::ListQIFReferenc_1002_Type(
 QIFReferenceSimpleType * IdIn,
 ListQIFReferenceSimpleType * XIdsIn)
{
  Id = IdIn;
  XIds = XIdsIn;
}

ListQIFReferenc_1002_Type::~ListQIFReferenc_1002_Type()
{
  #ifndef NODESTRUCT
  delete Id;
  delete XIds;
  #endif
}

void ListQIFReferenc_1002_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<Id");
  Id->printSelf(outFile);
  fprintf(outFile, "</Id>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<XIds");
  XIds->printSelf(outFile);
  fprintf(outFile, "</XIds>\n");
}

QIFReferenceSimpleType * ListQIFReferenc_1002_Type::getId()
{return Id;}

void ListQIFReferenc_1002_Type::setId(QIFReferenceSimpleType * IdIn)
{Id = IdIn;}

ListQIFReferenceSimpleType * ListQIFReferenc_1002_Type::getXIds()
{return XIds;}

void ListQIFReferenc_1002_Type::setXIds(ListQIFReferenceSimpleType * XIdsIn)
{XIds = XIdsIn;}

/* ***************************************************************** */

/* class ValidationPoint_1003_Type

*/

ValidationPoint_1003_Type::ValidationPoint_1003_Type()
{
  ValidationPoint_1003_TypePair = 0;
}

ValidationPoint_1003_Type::ValidationPoint_1003_Type(
 ValidationPoint_1003_TypeChoicePair * ValidationPoint_1003_TypePairIn)
{
  ValidationPoint_1003_TypePair = ValidationPoint_1003_TypePairIn;
}

ValidationPoint_1003_Type::~ValidationPoint_1003_Type()
{
  #ifndef NODESTRUCT
  delete ValidationPoint_1003_TypePair;
  #endif
}

void ValidationPoint_1003_Type::printSelf(FILE * outFile)
{
  ValidationPoint_1003_TypePair->printSelf(outFile);
}

ValidationPoint_1003_TypeChoicePair * ValidationPoint_1003_Type::getValidationPoint_1003_TypePair()
{return ValidationPoint_1003_TypePair;}

void ValidationPoint_1003_Type::setValidationPoint_1003_TypePair(ValidationPoint_1003_TypeChoicePair * ValidationPoint_1003_TypePairIn)
{ValidationPoint_1003_TypePair = ValidationPoint_1003_TypePairIn;}
ValidationPoint_1003_TypeChoicePair::ValidationPoint_1003_TypeChoicePair() {}

ValidationPoint_1003_TypeChoicePair::ValidationPoint_1003_TypeChoicePair(
 whichOne ValidationPoint_1003_TypeTypeIn,
 ValidationPoint_1003_TypeVal ValidationPoint_1003_TypeValueIn)
{
  ValidationPoint_1003_TypeType = ValidationPoint_1003_TypeTypeIn;
  ValidationPoint_1003_TypeValue = ValidationPoint_1003_TypeValueIn;
}

ValidationPoint_1003_TypeChoicePair::~ValidationPoint_1003_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ValidationPoint_1003_TypeType == PointsE)
    delete ValidationPoint_1003_TypeValue.Points;
  else if (ValidationPoint_1003_TypeType == PointsBinaryE)
    delete ValidationPoint_1003_TypeValue.PointsBinary;
  #endif
}

void ValidationPoint_1003_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ValidationPoint_1003_TypeType == PointsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Points");
      ValidationPoint_1003_TypeValue.Points->printSelf(outFile);
      fprintf(outFile, "</Points>\n");
    }
  else if (ValidationPoint_1003_TypeType == PointsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PointsBinary");
      ValidationPoint_1003_TypeValue.PointsBinary->printSelf(outFile);
      fprintf(outFile, "</PointsBinary>\n");
    }
}

/* ***************************************************************** */

/* class ValidationPoint_1004_Type

*/

ValidationPoint_1004_Type::ValidationPoint_1004_Type()
{
  ValidationPoint_1004_TypePair = 0;
}

ValidationPoint_1004_Type::ValidationPoint_1004_Type(
 ValidationPoint_1004_TypeChoicePair * ValidationPoint_1004_TypePairIn)
{
  ValidationPoint_1004_TypePair = ValidationPoint_1004_TypePairIn;
}

ValidationPoint_1004_Type::~ValidationPoint_1004_Type()
{
  #ifndef NODESTRUCT
  delete ValidationPoint_1004_TypePair;
  #endif
}

void ValidationPoint_1004_Type::printSelf(FILE * outFile)
{
  if (ValidationPoint_1004_TypePair)
    {
      ValidationPoint_1004_TypePair->printSelf(outFile);
    }
}

ValidationPoint_1004_TypeChoicePair * ValidationPoint_1004_Type::getValidationPoint_1004_TypePair()
{return ValidationPoint_1004_TypePair;}

void ValidationPoint_1004_Type::setValidationPoint_1004_TypePair(ValidationPoint_1004_TypeChoicePair * ValidationPoint_1004_TypePairIn)
{ValidationPoint_1004_TypePair = ValidationPoint_1004_TypePairIn;}
ValidationPoint_1004_TypeChoicePair::ValidationPoint_1004_TypeChoicePair() {}

ValidationPoint_1004_TypeChoicePair::ValidationPoint_1004_TypeChoicePair(
 whichOne ValidationPoint_1004_TypeTypeIn,
 ValidationPoint_1004_TypeVal ValidationPoint_1004_TypeValueIn)
{
  ValidationPoint_1004_TypeType = ValidationPoint_1004_TypeTypeIn;
  ValidationPoint_1004_TypeValue = ValidationPoint_1004_TypeValueIn;
}

ValidationPoint_1004_TypeChoicePair::~ValidationPoint_1004_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ValidationPoint_1004_TypeType == DirectionsE)
    delete ValidationPoint_1004_TypeValue.Directions;
  else if (ValidationPoint_1004_TypeType == DirectionsBinaryE)
    delete ValidationPoint_1004_TypeValue.DirectionsBinary;
  #endif
}

void ValidationPoint_1004_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ValidationPoint_1004_TypeType == DirectionsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Directions");
      ValidationPoint_1004_TypeValue.Directions->printSelf(outFile);
      fprintf(outFile, "</Directions>\n");
    }
  else if (ValidationPoint_1004_TypeType == DirectionsBinaryE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DirectionsBinary");
      ValidationPoint_1004_TypeValue.DirectionsBinary->printSelf(outFile);
      fprintf(outFile, "</DirectionsBinary>\n");
    }
}

/* ***************************************************************** */

