/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <xmlSchemaInstance.hh>
#include "UnitsClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class AngularUnitType

*/

AngularUnitType::AngularUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

AngularUnitType::AngularUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

AngularUnitType::~AngularUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void AngularUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * AngularUnitType::getSIUnitName()
{return SIUnitName;}

void AngularUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * AngularUnitType::getUnitName()
{return UnitName;}

void AngularUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * AngularUnitType::getUnitConversion()
{return UnitConversion;}

void AngularUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class AngularUnitTypeLisd

*/

AngularUnitTypeLisd::AngularUnitTypeLisd() {}

AngularUnitTypeLisd::AngularUnitTypeLisd(AngularUnitType * aAngularUnitType)
{
  push_back(aAngularUnitType);
}

AngularUnitTypeLisd::~AngularUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AngularUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AngularUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<AngularUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AngularValueType

*/

AngularValueType::AngularValueType() :
  SpecifiedDecimalType()
{
  angularUnit = 0;
  val = 0;
}

AngularValueType::AngularValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  angularUnit = 0;
}

AngularValueType::AngularValueType(
 XmlToken * angularUnitIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  angularUnit = angularUnitIn;
  decimalPlaces = decimalPlacesIn;
  significantFigures = significantFiguresIn;
}

AngularValueType::~AngularValueType()
{
  #ifndef NODESTRUCT
  delete angularUnit;
  #endif
}

void AngularValueType::printName(FILE * outFile)
{
  fprintf(outFile, "AngularValueType");
}

void AngularValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
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
  XmlDecimal::printSelf(outFile);
}

bool AngularValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "angularUnit")
        {
          XmlToken * angularUnitVal;
          if (this->angularUnit)
            {
              fprintf(stderr, "two values for angularUnit in AngularValueType\n");
              returnValue = true;
              break;
            }
          angularUnitVal = new XmlToken(decl->val.c_str());
          if (angularUnitVal->bad)
            {
              delete angularUnitVal;
              fprintf(stderr, "bad value %s for angularUnit in AngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->angularUnit = angularUnitVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in AngularValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in AngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in AngularValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in AngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AngularValueType\n");
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
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * AngularValueType::getangularUnit()
{return angularUnit;}

void AngularValueType::setangularUnit(XmlToken * angularUnitIn)
{angularUnit = angularUnitIn;}

/* ***************************************************************** */

/* class AreaUnitType

*/

AreaUnitType::AreaUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

AreaUnitType::AreaUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

AreaUnitType::~AreaUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void AreaUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * AreaUnitType::getSIUnitName()
{return SIUnitName;}

void AreaUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * AreaUnitType::getUnitName()
{return UnitName;}

void AreaUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * AreaUnitType::getUnitConversion()
{return UnitConversion;}

void AreaUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class AreaUnitTypeLisd

*/

AreaUnitTypeLisd::AreaUnitTypeLisd() {}

AreaUnitTypeLisd::AreaUnitTypeLisd(AreaUnitType * aAreaUnitType)
{
  push_back(aAreaUnitType);
}

AreaUnitTypeLisd::~AreaUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<AreaUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void AreaUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<AreaUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class AreaValueType

*/

AreaValueType::AreaValueType() :
  SpecifiedDecimalType()
{
  areaUnit = 0;
  val = 0;
}

AreaValueType::AreaValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  areaUnit = 0;
}

AreaValueType::AreaValueType(
 XmlToken * areaUnitIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  areaUnit = areaUnitIn;
  decimalPlaces = decimalPlacesIn;
  significantFigures = significantFiguresIn;
}

AreaValueType::~AreaValueType()
{
  #ifndef NODESTRUCT
  delete areaUnit;
  #endif
}

void AreaValueType::printName(FILE * outFile)
{
  fprintf(outFile, "AreaValueType");
}

void AreaValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (areaUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "areaUnit=\"");
      areaUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  XmlDecimal::printSelf(outFile);
}

bool AreaValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "areaUnit")
        {
          XmlToken * areaUnitVal;
          if (this->areaUnit)
            {
              fprintf(stderr, "two values for areaUnit in AreaValueType\n");
              returnValue = true;
              break;
            }
          areaUnitVal = new XmlToken(decl->val.c_str());
          if (areaUnitVal->bad)
            {
              delete areaUnitVal;
              fprintf(stderr, "bad value %s for areaUnit in AreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->areaUnit = areaUnitVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in AreaValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in AreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in AreaValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in AreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AreaValueType\n");
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
      delete this->areaUnit;
      this->areaUnit = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * AreaValueType::getareaUnit()
{return areaUnit;}

void AreaValueType::setareaUnit(XmlToken * areaUnitIn)
{areaUnit = areaUnitIn;}

/* ***************************************************************** */

/* class FileUnitsType

*/

FileUnitsType::FileUnitsType()
{
  PrimaryUnits = 0;
  OtherUnits = 0;
  UserDefinedUnits = 0;
}

FileUnitsType::FileUnitsType(
 PrimaryUnitsType * PrimaryUnitsIn,
 OtherUnitsType * OtherUnitsIn,
 UserDefinedUnitsType * UserDefinedUnitsIn)
{
  PrimaryUnits = PrimaryUnitsIn;
  OtherUnits = OtherUnitsIn;
  UserDefinedUnits = UserDefinedUnitsIn;
}

FileUnitsType::~FileUnitsType()
{
  #ifndef NODESTRUCT
  delete PrimaryUnits;
  delete OtherUnits;
  delete UserDefinedUnits;
  #endif
}

void FileUnitsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<PrimaryUnits");
  PrimaryUnits->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</PrimaryUnits>\n");
  if (OtherUnits)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherUnits");
      OtherUnits->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</OtherUnits>\n");
    }
  if (UserDefinedUnits)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnits");
      UserDefinedUnits->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnits>\n");
    }
  doSpaces(-INDENT, outFile);
}

PrimaryUnitsType * FileUnitsType::getPrimaryUnits()
{return PrimaryUnits;}

void FileUnitsType::setPrimaryUnits(PrimaryUnitsType * PrimaryUnitsIn)
{PrimaryUnits = PrimaryUnitsIn;}

OtherUnitsType * FileUnitsType::getOtherUnits()
{return OtherUnits;}

void FileUnitsType::setOtherUnits(OtherUnitsType * OtherUnitsIn)
{OtherUnits = OtherUnitsIn;}

UserDefinedUnitsType * FileUnitsType::getUserDefinedUnits()
{return UserDefinedUnits;}

void FileUnitsType::setUserDefinedUnits(UserDefinedUnitsType * UserDefinedUnitsIn)
{UserDefinedUnits = UserDefinedUnitsIn;}

/* ***************************************************************** */

/* class ForceUnitType

*/

ForceUnitType::ForceUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

ForceUnitType::ForceUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

ForceUnitType::~ForceUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void ForceUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * ForceUnitType::getSIUnitName()
{return SIUnitName;}

void ForceUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * ForceUnitType::getUnitName()
{return UnitName;}

void ForceUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * ForceUnitType::getUnitConversion()
{return UnitConversion;}

void ForceUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class ForceUnitTypeLisd

*/

ForceUnitTypeLisd::ForceUnitTypeLisd() {}

ForceUnitTypeLisd::ForceUnitTypeLisd(ForceUnitType * aForceUnitType)
{
  push_back(aForceUnitType);
}

ForceUnitTypeLisd::~ForceUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ForceUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ForceUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<ForceUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ForceValueType

*/

ForceValueType::ForceValueType() :
  SpecifiedDecimalType()
{
  forceUnit = 0;
  val = 0;
}

ForceValueType::ForceValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  forceUnit = 0;
}

ForceValueType::ForceValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * forceUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  forceUnit = forceUnitIn;
  significantFigures = significantFiguresIn;
}

ForceValueType::~ForceValueType()
{
  #ifndef NODESTRUCT
  delete forceUnit;
  #endif
}

void ForceValueType::printName(FILE * outFile)
{
  fprintf(outFile, "ForceValueType");
}

void ForceValueType::printSelf(FILE * outFile)
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
  if (forceUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "forceUnit=\"");
      forceUnit->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool ForceValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in ForceValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in ForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "forceUnit")
        {
          XmlToken * forceUnitVal;
          if (this->forceUnit)
            {
              fprintf(stderr, "two values for forceUnit in ForceValueType\n");
              returnValue = true;
              break;
            }
          forceUnitVal = new XmlToken(decl->val.c_str());
          if (forceUnitVal->bad)
            {
              delete forceUnitVal;
              fprintf(stderr, "bad value %s for forceUnit in ForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->forceUnit = forceUnitVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in ForceValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in ForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ForceValueType\n");
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
      delete this->forceUnit;
      this->forceUnit = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * ForceValueType::getforceUnit()
{return forceUnit;}

void ForceValueType::setforceUnit(XmlToken * forceUnitIn)
{forceUnit = forceUnitIn;}

/* ***************************************************************** */

/* class LinearDualValueType

*/

LinearDualValueType::LinearDualValueType() :
  SpecifiedDecimalType()
{
  linearUnit = 0;
  val = 0;
}

LinearDualValueType::LinearDualValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  linearUnit = 0;
}

LinearDualValueType::LinearDualValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * linearUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
}

LinearDualValueType::~LinearDualValueType()
{
  #ifndef NODESTRUCT
  delete linearUnit;
  #endif
}

void LinearDualValueType::printName(FILE * outFile)
{
  fprintf(outFile, "LinearDualValueType");
}

void LinearDualValueType::printSelf(FILE * outFile)
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
  else
    {
      fprintf(stderr, "required attribute \"linearUnit\" missing\n");
      exit(1);
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
  XmlDecimal::printSelf(outFile);
}

bool LinearDualValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in LinearDualValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in LinearDualValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in LinearDualValueType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->val.c_str());
          if (linearUnitVal->bad)
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in LinearDualValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->linearUnit = linearUnitVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in LinearDualValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in LinearDualValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LinearDualValueType\n");
          returnValue = true;
          break;
        }
    }
  if (this->linearUnit == 0)
    {
      fprintf(stderr, "required attribute \"linearUnit\" missing in LinearDualValueType\n");
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
      delete this->linearUnit;
      this->linearUnit = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * LinearDualValueType::getlinearUnit()
{return linearUnit;}

void LinearDualValueType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

/* ***************************************************************** */

/* class LinearUnitType

*/

LinearUnitType::LinearUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

LinearUnitType::LinearUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

LinearUnitType::~LinearUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void LinearUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * LinearUnitType::getSIUnitName()
{return SIUnitName;}

void LinearUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * LinearUnitType::getUnitName()
{return UnitName;}

void LinearUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * LinearUnitType::getUnitConversion()
{return UnitConversion;}

void LinearUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class LinearUnitTypeLisd

*/

LinearUnitTypeLisd::LinearUnitTypeLisd() {}

LinearUnitTypeLisd::LinearUnitTypeLisd(LinearUnitType * aLinearUnitType)
{
  push_back(aLinearUnitType);
}

LinearUnitTypeLisd::~LinearUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<LinearUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LinearUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<LinearUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class LinearValueType

*/

LinearValueType::LinearValueType() :
  SpecifiedDecimalType()
{
  linearUnit = 0;
  val = 0;
}

LinearValueType::LinearValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  linearUnit = 0;
}

LinearValueType::LinearValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * linearUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  significantFigures = significantFiguresIn;
}

LinearValueType::~LinearValueType()
{
  #ifndef NODESTRUCT
  delete linearUnit;
  #endif
}

void LinearValueType::printName(FILE * outFile)
{
  fprintf(outFile, "LinearValueType");
}

void LinearValueType::printSelf(FILE * outFile)
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
  XmlDecimal::printSelf(outFile);
}

bool LinearValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in LinearValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in LinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in LinearValueType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->val.c_str());
          if (linearUnitVal->bad)
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in LinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->linearUnit = linearUnitVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in LinearValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in LinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LinearValueType\n");
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
    }
  return returnValue;
}

XmlToken * LinearValueType::getlinearUnit()
{return linearUnit;}

void LinearValueType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

/* ***************************************************************** */

/* class LinearValueTypeLisd

*/

LinearValueTypeLisd::LinearValueTypeLisd() {}

LinearValueTypeLisd::LinearValueTypeLisd(LinearValueType * aLinearValueType)
{
  push_back(aLinearValueType);
}

LinearValueTypeLisd::~LinearValueTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<LinearValueType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void LinearValueTypeLisd::printSelf(FILE * outFile)
{
  std::list<LinearValueType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class MassUnitType

*/

MassUnitType::MassUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

MassUnitType::MassUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

MassUnitType::~MassUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void MassUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * MassUnitType::getSIUnitName()
{return SIUnitName;}

void MassUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * MassUnitType::getUnitName()
{return UnitName;}

void MassUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * MassUnitType::getUnitConversion()
{return UnitConversion;}

void MassUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class MassUnitTypeLisd

*/

MassUnitTypeLisd::MassUnitTypeLisd() {}

MassUnitTypeLisd::MassUnitTypeLisd(MassUnitType * aMassUnitType)
{
  push_back(aMassUnitType);
}

MassUnitTypeLisd::~MassUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MassUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MassUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<MassUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class MassValueType

*/

MassValueType::MassValueType() :
  SpecifiedDecimalType()
{
  massUnit = 0;
  val = 0;
}

MassValueType::MassValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  massUnit = 0;
}

MassValueType::MassValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * massUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  massUnit = massUnitIn;
  significantFigures = significantFiguresIn;
}

MassValueType::~MassValueType()
{
  #ifndef NODESTRUCT
  delete massUnit;
  #endif
}

void MassValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MassValueType");
}

void MassValueType::printSelf(FILE * outFile)
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
  if (massUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "massUnit=\"");
      massUnit->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MassValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MassValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "massUnit")
        {
          XmlToken * massUnitVal;
          if (this->massUnit)
            {
              fprintf(stderr, "two values for massUnit in MassValueType\n");
              returnValue = true;
              break;
            }
          massUnitVal = new XmlToken(decl->val.c_str());
          if (massUnitVal->bad)
            {
              delete massUnitVal;
              fprintf(stderr, "bad value %s for massUnit in MassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->massUnit = massUnitVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MassValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MassValueType\n");
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
      delete this->massUnit;
      this->massUnit = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * MassValueType::getmassUnit()
{return massUnit;}

void MassValueType::setmassUnit(XmlToken * massUnitIn)
{massUnit = massUnitIn;}

/* ***************************************************************** */

/* class MeasuredAngularValueType

*/

MeasuredAngularValueType::MeasuredAngularValueType() :
  MeasuredDecimalType()
{
  angularUnit = 0;
  val = 0;
}

MeasuredAngularValueType::MeasuredAngularValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  angularUnit = 0;
}

MeasuredAngularValueType::MeasuredAngularValueType(
 XmlToken * angularUnitIn,
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  angularUnit = angularUnitIn;
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
}

MeasuredAngularValueType::~MeasuredAngularValueType()
{
  #ifndef NODESTRUCT
  delete angularUnit;
  #endif
}

void MeasuredAngularValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredAngularValueType");
}

void MeasuredAngularValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
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
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MeasuredAngularValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "angularUnit")
        {
          XmlToken * angularUnitVal;
          if (this->angularUnit)
            {
              fprintf(stderr, "two values for angularUnit in MeasuredAngularValueType\n");
              returnValue = true;
              break;
            }
          angularUnitVal = new XmlToken(decl->val.c_str());
          if (angularUnitVal->bad)
            {
              delete angularUnitVal;
              fprintf(stderr, "bad value %s for angularUnit in MeasuredAngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->angularUnit = angularUnitVal;
        }
      else if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredAngularValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredAngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredAngularValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredAngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredAngularValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredAngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredAngularValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredAngularValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredAngularValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * MeasuredAngularValueType::getangularUnit()
{return angularUnit;}

void MeasuredAngularValueType::setangularUnit(XmlToken * angularUnitIn)
{angularUnit = angularUnitIn;}

/* ***************************************************************** */

/* class MeasuredAreaValueType

*/

MeasuredAreaValueType::MeasuredAreaValueType() :
  MeasuredDecimalType()
{
  areaUnit = 0;
  val = 0;
}

MeasuredAreaValueType::MeasuredAreaValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  areaUnit = 0;
}

MeasuredAreaValueType::MeasuredAreaValueType(
 XmlToken * areaUnitIn,
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  areaUnit = areaUnitIn;
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
}

MeasuredAreaValueType::~MeasuredAreaValueType()
{
  #ifndef NODESTRUCT
  delete areaUnit;
  #endif
}

void MeasuredAreaValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredAreaValueType");
}

void MeasuredAreaValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (areaUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "areaUnit=\"");
      areaUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MeasuredAreaValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "areaUnit")
        {
          XmlToken * areaUnitVal;
          if (this->areaUnit)
            {
              fprintf(stderr, "two values for areaUnit in MeasuredAreaValueType\n");
              returnValue = true;
              break;
            }
          areaUnitVal = new XmlToken(decl->val.c_str());
          if (areaUnitVal->bad)
            {
              delete areaUnitVal;
              fprintf(stderr, "bad value %s for areaUnit in MeasuredAreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->areaUnit = areaUnitVal;
        }
      else if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredAreaValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredAreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredAreaValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredAreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredAreaValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredAreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredAreaValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredAreaValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredAreaValueType\n");
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
      delete this->areaUnit;
      this->areaUnit = 0;
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * MeasuredAreaValueType::getareaUnit()
{return areaUnit;}

void MeasuredAreaValueType::setareaUnit(XmlToken * areaUnitIn)
{areaUnit = areaUnitIn;}

/* ***************************************************************** */

/* class MeasuredDecimalType

*/

MeasuredDecimalType::MeasuredDecimalType() :
  SpecifiedDecimalType()
{
  combinedUncertainty = 0;
  meanError = 0;
  val = 0;
}

MeasuredDecimalType::MeasuredDecimalType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  combinedUncertainty = 0;
  meanError = 0;
}

MeasuredDecimalType::MeasuredDecimalType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
}

MeasuredDecimalType::~MeasuredDecimalType()
{
  #ifndef NODESTRUCT
  delete combinedUncertainty;
  delete meanError;
  #endif
}

void MeasuredDecimalType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredDecimalType");
}

void MeasuredDecimalType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MeasuredDecimalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredDecimalType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredDecimalType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredDecimalType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredDecimalType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredDecimalType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

NonNegativeDecimalType * MeasuredDecimalType::getcombinedUncertainty()
{return combinedUncertainty;}

void MeasuredDecimalType::setcombinedUncertainty(NonNegativeDecimalType * combinedUncertaintyIn)
{combinedUncertainty = combinedUncertaintyIn;}

NonNegativeDecimalType * MeasuredDecimalType::getmeanError()
{return meanError;}

void MeasuredDecimalType::setmeanError(NonNegativeDecimalType * meanErrorIn)
{meanError = meanErrorIn;}

/* ***************************************************************** */

/* class MeasuredForceValueType

*/

MeasuredForceValueType::MeasuredForceValueType() :
  MeasuredDecimalType()
{
  forceUnit = 0;
  val = 0;
}

MeasuredForceValueType::MeasuredForceValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  forceUnit = 0;
}

MeasuredForceValueType::MeasuredForceValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * forceUnitIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  forceUnit = forceUnitIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
}

MeasuredForceValueType::~MeasuredForceValueType()
{
  #ifndef NODESTRUCT
  delete forceUnit;
  #endif
}

void MeasuredForceValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredForceValueType");
}

void MeasuredForceValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (forceUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "forceUnit=\"");
      forceUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MeasuredForceValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredForceValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredForceValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "forceUnit")
        {
          XmlToken * forceUnitVal;
          if (this->forceUnit)
            {
              fprintf(stderr, "two values for forceUnit in MeasuredForceValueType\n");
              returnValue = true;
              break;
            }
          forceUnitVal = new XmlToken(decl->val.c_str());
          if (forceUnitVal->bad)
            {
              delete forceUnitVal;
              fprintf(stderr, "bad value %s for forceUnit in MeasuredForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->forceUnit = forceUnitVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredForceValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredForceValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredForceValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredForceValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->forceUnit;
      this->forceUnit = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * MeasuredForceValueType::getforceUnit()
{return forceUnit;}

void MeasuredForceValueType::setforceUnit(XmlToken * forceUnitIn)
{forceUnit = forceUnitIn;}

/* ***************************************************************** */

/* class MeasuredLinearValueType

*/

MeasuredLinearValueType::MeasuredLinearValueType() :
  MeasuredDecimalType()
{
  linearUnit = 0;
  val = 0;
}

MeasuredLinearValueType::MeasuredLinearValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  linearUnit = 0;
}

MeasuredLinearValueType::MeasuredLinearValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * linearUnitIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
}

MeasuredLinearValueType::~MeasuredLinearValueType()
{
  #ifndef NODESTRUCT
  delete linearUnit;
  #endif
}

void MeasuredLinearValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredLinearValueType");
}

void MeasuredLinearValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MeasuredLinearValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredLinearValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredLinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredLinearValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredLinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (this->linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in MeasuredLinearValueType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->val.c_str());
          if (linearUnitVal->bad)
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in MeasuredLinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->linearUnit = linearUnitVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredLinearValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredLinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredLinearValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredLinearValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredLinearValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->linearUnit;
      this->linearUnit = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * MeasuredLinearValueType::getlinearUnit()
{return linearUnit;}

void MeasuredLinearValueType::setlinearUnit(XmlToken * linearUnitIn)
{linearUnit = linearUnitIn;}

/* ***************************************************************** */

/* class MeasuredMassValueType

*/

MeasuredMassValueType::MeasuredMassValueType() :
  MeasuredDecimalType()
{
  massUnit = 0;
  val = 0;
}

MeasuredMassValueType::MeasuredMassValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  massUnit = 0;
}

MeasuredMassValueType::MeasuredMassValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * massUnitIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  massUnit = massUnitIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
}

MeasuredMassValueType::~MeasuredMassValueType()
{
  #ifndef NODESTRUCT
  delete massUnit;
  #endif
}

void MeasuredMassValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredMassValueType");
}

void MeasuredMassValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (massUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "massUnit=\"");
      massUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MeasuredMassValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredMassValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredMassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredMassValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredMassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "massUnit")
        {
          XmlToken * massUnitVal;
          if (this->massUnit)
            {
              fprintf(stderr, "two values for massUnit in MeasuredMassValueType\n");
              returnValue = true;
              break;
            }
          massUnitVal = new XmlToken(decl->val.c_str());
          if (massUnitVal->bad)
            {
              delete massUnitVal;
              fprintf(stderr, "bad value %s for massUnit in MeasuredMassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->massUnit = massUnitVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredMassValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredMassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredMassValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredMassValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredMassValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->massUnit;
      this->massUnit = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * MeasuredMassValueType::getmassUnit()
{return massUnit;}

void MeasuredMassValueType::setmassUnit(XmlToken * massUnitIn)
{massUnit = massUnitIn;}

/* ***************************************************************** */

/* class MeasuredPressureValueType

*/

MeasuredPressureValueType::MeasuredPressureValueType() :
  MeasuredDecimalType()
{
  pressureUnit = 0;
  val = 0;
}

MeasuredPressureValueType::MeasuredPressureValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  pressureUnit = 0;
}

MeasuredPressureValueType::MeasuredPressureValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlToken * pressureUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  pressureUnit = pressureUnitIn;
  significantFigures = significantFiguresIn;
}

MeasuredPressureValueType::~MeasuredPressureValueType()
{
  #ifndef NODESTRUCT
  delete pressureUnit;
  #endif
}

void MeasuredPressureValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredPressureValueType");
}

void MeasuredPressureValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  if (pressureUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "pressureUnit=\"");
      pressureUnit->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool MeasuredPressureValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredPressureValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredPressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredPressureValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredPressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredPressureValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredPressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "pressureUnit")
        {
          XmlToken * pressureUnitVal;
          if (this->pressureUnit)
            {
              fprintf(stderr, "two values for pressureUnit in MeasuredPressureValueType\n");
              returnValue = true;
              break;
            }
          pressureUnitVal = new XmlToken(decl->val.c_str());
          if (pressureUnitVal->bad)
            {
              delete pressureUnitVal;
              fprintf(stderr, "bad value %s for pressureUnit in MeasuredPressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->pressureUnit = pressureUnitVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredPressureValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredPressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredPressureValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->pressureUnit;
      this->pressureUnit = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * MeasuredPressureValueType::getpressureUnit()
{return pressureUnit;}

void MeasuredPressureValueType::setpressureUnit(XmlToken * pressureUnitIn)
{pressureUnit = pressureUnitIn;}

/* ***************************************************************** */

/* class MeasuredSpeedValueType

*/

MeasuredSpeedValueType::MeasuredSpeedValueType() :
  MeasuredDecimalType()
{
  speedUnit = 0;
  val = 0;
}

MeasuredSpeedValueType::MeasuredSpeedValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  speedUnit = 0;
}

MeasuredSpeedValueType::MeasuredSpeedValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * speedUnitIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
  speedUnit = speedUnitIn;
}

MeasuredSpeedValueType::~MeasuredSpeedValueType()
{
  #ifndef NODESTRUCT
  delete speedUnit;
  #endif
}

void MeasuredSpeedValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredSpeedValueType");
}

void MeasuredSpeedValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  if (speedUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "speedUnit=\"");
      speedUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlDecimal::printSelf(outFile);
}

bool MeasuredSpeedValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredSpeedValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredSpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredSpeedValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredSpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredSpeedValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredSpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredSpeedValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredSpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "speedUnit")
        {
          XmlToken * speedUnitVal;
          if (this->speedUnit)
            {
              fprintf(stderr, "two values for speedUnit in MeasuredSpeedValueType\n");
              returnValue = true;
              break;
            }
          speedUnitVal = new XmlToken(decl->val.c_str());
          if (speedUnitVal->bad)
            {
              delete speedUnitVal;
              fprintf(stderr, "bad value %s for speedUnit in MeasuredSpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->speedUnit = speedUnitVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredSpeedValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->speedUnit;
      this->speedUnit = 0;
    }
  return returnValue;
}

XmlToken * MeasuredSpeedValueType::getspeedUnit()
{return speedUnit;}

void MeasuredSpeedValueType::setspeedUnit(XmlToken * speedUnitIn)
{speedUnit = speedUnitIn;}

/* ***************************************************************** */

/* class MeasuredTemperatureValueType

*/

MeasuredTemperatureValueType::MeasuredTemperatureValueType() :
  MeasuredDecimalType()
{
  temperatureUnit = 0;
  val = 0;
}

MeasuredTemperatureValueType::MeasuredTemperatureValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  temperatureUnit = 0;
}

MeasuredTemperatureValueType::MeasuredTemperatureValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * temperatureUnitIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
  temperatureUnit = temperatureUnitIn;
}

MeasuredTemperatureValueType::~MeasuredTemperatureValueType()
{
  #ifndef NODESTRUCT
  delete temperatureUnit;
  #endif
}

void MeasuredTemperatureValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredTemperatureValueType");
}

void MeasuredTemperatureValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  if (temperatureUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "temperatureUnit=\"");
      temperatureUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlDecimal::printSelf(outFile);
}

bool MeasuredTemperatureValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredTemperatureValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredTemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredTemperatureValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredTemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredTemperatureValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredTemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredTemperatureValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredTemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "temperatureUnit")
        {
          XmlToken * temperatureUnitVal;
          if (this->temperatureUnit)
            {
              fprintf(stderr, "two values for temperatureUnit in MeasuredTemperatureValueType\n");
              returnValue = true;
              break;
            }
          temperatureUnitVal = new XmlToken(decl->val.c_str());
          if (temperatureUnitVal->bad)
            {
              delete temperatureUnitVal;
              fprintf(stderr, "bad value %s for temperatureUnit in MeasuredTemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->temperatureUnit = temperatureUnitVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredTemperatureValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->temperatureUnit;
      this->temperatureUnit = 0;
    }
  return returnValue;
}

XmlToken * MeasuredTemperatureValueType::gettemperatureUnit()
{return temperatureUnit;}

void MeasuredTemperatureValueType::settemperatureUnit(XmlToken * temperatureUnitIn)
{temperatureUnit = temperatureUnitIn;}

/* ***************************************************************** */

/* class MeasuredTimeValueType

*/

MeasuredTimeValueType::MeasuredTimeValueType() :
  MeasuredDecimalType()
{
  timeUnit = 0;
  val = 0;
}

MeasuredTimeValueType::MeasuredTimeValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  timeUnit = 0;
}

MeasuredTimeValueType::MeasuredTimeValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * timeUnitIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
  timeUnit = timeUnitIn;
}

MeasuredTimeValueType::~MeasuredTimeValueType()
{
  #ifndef NODESTRUCT
  delete timeUnit;
  #endif
}

void MeasuredTimeValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredTimeValueType");
}

void MeasuredTimeValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  if (timeUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "timeUnit=\"");
      timeUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlDecimal::printSelf(outFile);
}

bool MeasuredTimeValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredTimeValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredTimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredTimeValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredTimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredTimeValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredTimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredTimeValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredTimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "timeUnit")
        {
          XmlToken * timeUnitVal;
          if (this->timeUnit)
            {
              fprintf(stderr, "two values for timeUnit in MeasuredTimeValueType\n");
              returnValue = true;
              break;
            }
          timeUnitVal = new XmlToken(decl->val.c_str());
          if (timeUnitVal->bad)
            {
              delete timeUnitVal;
              fprintf(stderr, "bad value %s for timeUnit in MeasuredTimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->timeUnit = timeUnitVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredTimeValueType\n");
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
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->timeUnit;
      this->timeUnit = 0;
    }
  return returnValue;
}

XmlToken * MeasuredTimeValueType::gettimeUnit()
{return timeUnit;}

void MeasuredTimeValueType::settimeUnit(XmlToken * timeUnitIn)
{timeUnit = timeUnitIn;}

/* ***************************************************************** */

/* class MeasuredUserDefinedUnitValueType

*/

MeasuredUserDefinedUnitValueType::MeasuredUserDefinedUnitValueType() :
  MeasuredDecimalType()
{
  unitName = 0;
  val = 0;
}

MeasuredUserDefinedUnitValueType::MeasuredUserDefinedUnitValueType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  unitName = 0;
}

MeasuredUserDefinedUnitValueType::MeasuredUserDefinedUnitValueType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * unitNameIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
  unitName = unitNameIn;
}

MeasuredUserDefinedUnitValueType::~MeasuredUserDefinedUnitValueType()
{
  #ifndef NODESTRUCT
  delete unitName;
  #endif
}

void MeasuredUserDefinedUnitValueType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredUserDefinedUnitValueType");
}

void MeasuredUserDefinedUnitValueType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (combinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "combinedUncertainty=\"");
      combinedUncertainty->oPrintSelf(outFile);
      fprintf(outFile, "\"");
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
  if (meanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "meanError=\"");
      meanError->oPrintSelf(outFile);
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
  if (unitName)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "unitName=\"");
      unitName->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"unitName\" missing\n");
      exit(1);
    }
  XmlDecimal::printSelf(outFile);
}

bool MeasuredUserDefinedUnitValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "combinedUncertainty")
        {
          NonNegativeDecimalType * combinedUncertaintyVal;
          if (this->combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredUserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredUserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredUserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredUserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (this->meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredUserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredUserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredUserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredUserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "unitName")
        {
          XmlToken * unitNameVal;
          if (this->unitName)
            {
              fprintf(stderr, "two values for unitName in MeasuredUserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          unitNameVal = new XmlToken(decl->val.c_str());
          if (unitNameVal->bad)
            {
              delete unitNameVal;
              fprintf(stderr, "bad value %s for unitName in MeasuredUserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->unitName = unitNameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredUserDefinedUnitValueType\n");
          returnValue = true;
          break;
        }
    }
  if (this->unitName == 0)
    {
      fprintf(stderr, "required attribute \"unitName\" missing in MeasuredUserDefinedUnitValueType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->combinedUncertainty;
      this->combinedUncertainty = 0;
      delete this->decimalPlaces;
      this->decimalPlaces = 0;
      delete this->meanError;
      this->meanError = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->unitName;
      this->unitName = 0;
    }
  return returnValue;
}

XmlToken * MeasuredUserDefinedUnitValueType::getunitName()
{return unitName;}

void MeasuredUserDefinedUnitValueType::setunitName(XmlToken * unitNameIn)
{unitName = unitNameIn;}

/* ***************************************************************** */

/* class MeasuredUserDefinedUnitValueTypeLisd

*/

MeasuredUserDefinedUnitValueTypeLisd::MeasuredUserDefinedUnitValueTypeLisd() {}

MeasuredUserDefinedUnitValueTypeLisd::MeasuredUserDefinedUnitValueTypeLisd(MeasuredUserDefinedUnitValueType * aMeasuredUserDefinedUnitValueType)
{
  push_back(aMeasuredUserDefinedUnitValueType);
}

MeasuredUserDefinedUnitValueTypeLisd::~MeasuredUserDefinedUnitValueTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MeasuredUserDefinedUnitValueType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MeasuredUserDefinedUnitValueTypeLisd::printSelf(FILE * outFile)
{
  std::list<MeasuredUserDefinedUnitValueType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class NonNegativeDecimalType

*/

NonNegativeDecimalType::NonNegativeDecimalType() :
  XmlDecimal()
{
}

NonNegativeDecimalType::NonNegativeDecimalType(
 const char * valIn) :
  XmlDecimal(
    valIn)
{
  if (!bad)
    bad = ((val < 0));
}

NonNegativeDecimalType::~NonNegativeDecimalType() {}

bool NonNegativeDecimalType::NonNegativeDecimalTypeIsBad()
{
  if (XmlDecimalIsBad())
    return true;
  return ((val < 0));
}

void NonNegativeDecimalType::printName(FILE * outFile)
{
  fprintf(outFile, "NonNegativeDecimalType");
}

void NonNegativeDecimalType::printSelf(FILE * outFile)
{
  if (NonNegativeDecimalTypeIsBad())
    {
      fprintf(stderr, "bad NonNegativeDecimalType value, ");
      XmlDecimal::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDecimal::printSelf(outFile);
}

void NonNegativeDecimalType::oPrintSelf(FILE * outFile)
{
  if (NonNegativeDecimalTypeIsBad())
    {
      fprintf(stderr, "bad NonNegativeDecimalType value, ");
      XmlDecimal::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDecimal::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class OtherUnitsType

*/

OtherUnitsType::OtherUnitsType()
{
  n = 0;
  AreaUnit = 0;
  AngularUnit = 0;
  ForceUnit = 0;
  LinearUnit = 0;
  MassUnit = 0;
  PressureUnit = 0;
  SpeedUnit = 0;
  TemperatureUnit = 0;
  TimeUnit = 0;
}

OtherUnitsType::OtherUnitsType(
 AreaUnitTypeLisd * AreaUnitIn,
 AngularUnitTypeLisd * AngularUnitIn,
 ForceUnitTypeLisd * ForceUnitIn,
 LinearUnitTypeLisd * LinearUnitIn,
 MassUnitTypeLisd * MassUnitIn,
 PressureUnitTypeLisd * PressureUnitIn,
 SpeedUnitTypeLisd * SpeedUnitIn,
 TemperatureUnitTypeLisd * TemperatureUnitIn,
 TimeUnitTypeLisd * TimeUnitIn)
{
  n = 0;
  AreaUnit = AreaUnitIn;
  AngularUnit = AngularUnitIn;
  ForceUnit = ForceUnitIn;
  LinearUnit = LinearUnitIn;
  MassUnit = MassUnitIn;
  PressureUnit = PressureUnitIn;
  SpeedUnit = SpeedUnitIn;
  TemperatureUnit = TemperatureUnitIn;
  TimeUnit = TimeUnitIn;
}

OtherUnitsType::OtherUnitsType(
 NaturalType * nIn,
 AreaUnitTypeLisd * AreaUnitIn,
 AngularUnitTypeLisd * AngularUnitIn,
 ForceUnitTypeLisd * ForceUnitIn,
 LinearUnitTypeLisd * LinearUnitIn,
 MassUnitTypeLisd * MassUnitIn,
 PressureUnitTypeLisd * PressureUnitIn,
 SpeedUnitTypeLisd * SpeedUnitIn,
 TemperatureUnitTypeLisd * TemperatureUnitIn,
 TimeUnitTypeLisd * TimeUnitIn)
{
  n = nIn;
  AreaUnit = AreaUnitIn;
  AngularUnit = AngularUnitIn;
  ForceUnit = ForceUnitIn;
  LinearUnit = LinearUnitIn;
  MassUnit = MassUnitIn;
  PressureUnit = PressureUnitIn;
  SpeedUnit = SpeedUnitIn;
  TemperatureUnit = TemperatureUnitIn;
  TimeUnit = TimeUnitIn;
}

OtherUnitsType::~OtherUnitsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete AreaUnit;
  delete AngularUnit;
  delete ForceUnit;
  delete LinearUnit;
  delete MassUnit;
  delete PressureUnit;
  delete SpeedUnit;
  delete TemperatureUnit;
  delete TimeUnit;
  #endif
}

void OtherUnitsType::printSelf(FILE * outFile)
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
    if (!AreaUnit)
      {
        AreaUnit = new AreaUnitTypeLisd;
      }
    std::list<AreaUnitType *>::iterator iter;
    for (iter = AreaUnit->begin();
         iter != AreaUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<AreaUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</AreaUnit>\n");
      }
  }
  {
    if (!AngularUnit)
      {
        AngularUnit = new AngularUnitTypeLisd;
      }
    std::list<AngularUnitType *>::iterator iter;
    for (iter = AngularUnit->begin();
         iter != AngularUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<AngularUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</AngularUnit>\n");
      }
  }
  {
    if (!ForceUnit)
      {
        ForceUnit = new ForceUnitTypeLisd;
      }
    std::list<ForceUnitType *>::iterator iter;
    for (iter = ForceUnit->begin();
         iter != ForceUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ForceUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ForceUnit>\n");
      }
  }
  {
    if (!LinearUnit)
      {
        LinearUnit = new LinearUnitTypeLisd;
      }
    std::list<LinearUnitType *>::iterator iter;
    for (iter = LinearUnit->begin();
         iter != LinearUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<LinearUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</LinearUnit>\n");
      }
  }
  {
    if (!MassUnit)
      {
        MassUnit = new MassUnitTypeLisd;
      }
    std::list<MassUnitType *>::iterator iter;
    for (iter = MassUnit->begin();
         iter != MassUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<MassUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</MassUnit>\n");
      }
  }
  {
    if (!PressureUnit)
      {
        PressureUnit = new PressureUnitTypeLisd;
      }
    std::list<PressureUnitType *>::iterator iter;
    for (iter = PressureUnit->begin();
         iter != PressureUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<PressureUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</PressureUnit>\n");
      }
  }
  {
    if (!SpeedUnit)
      {
        SpeedUnit = new SpeedUnitTypeLisd;
      }
    std::list<SpeedUnitType *>::iterator iter;
    for (iter = SpeedUnit->begin();
         iter != SpeedUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SpeedUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SpeedUnit>\n");
      }
  }
  {
    if (!TemperatureUnit)
      {
        TemperatureUnit = new TemperatureUnitTypeLisd;
      }
    std::list<TemperatureUnitType *>::iterator iter;
    for (iter = TemperatureUnit->begin();
         iter != TemperatureUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<TemperatureUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</TemperatureUnit>\n");
      }
  }
  {
    if (!TimeUnit)
      {
        TimeUnit = new TimeUnitTypeLisd;
      }
    std::list<TimeUnitType *>::iterator iter;
    for (iter = TimeUnit->begin();
         iter != TimeUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<TimeUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</TimeUnit>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool OtherUnitsType::badAttributes(
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
              fprintf(stderr, "two values for n in OtherUnitsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in OtherUnitsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in OtherUnitsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in OtherUnitsType\n");
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

NaturalType * OtherUnitsType::getn()
{return n;}

void OtherUnitsType::setn(NaturalType * nIn)
{n = nIn;}

AreaUnitTypeLisd * OtherUnitsType::getAreaUnit()
{return AreaUnit;}

void OtherUnitsType::setAreaUnit(AreaUnitTypeLisd * AreaUnitIn)
{AreaUnit = AreaUnitIn;}

AngularUnitTypeLisd * OtherUnitsType::getAngularUnit()
{return AngularUnit;}

void OtherUnitsType::setAngularUnit(AngularUnitTypeLisd * AngularUnitIn)
{AngularUnit = AngularUnitIn;}

ForceUnitTypeLisd * OtherUnitsType::getForceUnit()
{return ForceUnit;}

void OtherUnitsType::setForceUnit(ForceUnitTypeLisd * ForceUnitIn)
{ForceUnit = ForceUnitIn;}

LinearUnitTypeLisd * OtherUnitsType::getLinearUnit()
{return LinearUnit;}

void OtherUnitsType::setLinearUnit(LinearUnitTypeLisd * LinearUnitIn)
{LinearUnit = LinearUnitIn;}

MassUnitTypeLisd * OtherUnitsType::getMassUnit()
{return MassUnit;}

void OtherUnitsType::setMassUnit(MassUnitTypeLisd * MassUnitIn)
{MassUnit = MassUnitIn;}

PressureUnitTypeLisd * OtherUnitsType::getPressureUnit()
{return PressureUnit;}

void OtherUnitsType::setPressureUnit(PressureUnitTypeLisd * PressureUnitIn)
{PressureUnit = PressureUnitIn;}

SpeedUnitTypeLisd * OtherUnitsType::getSpeedUnit()
{return SpeedUnit;}

void OtherUnitsType::setSpeedUnit(SpeedUnitTypeLisd * SpeedUnitIn)
{SpeedUnit = SpeedUnitIn;}

TemperatureUnitTypeLisd * OtherUnitsType::getTemperatureUnit()
{return TemperatureUnit;}

void OtherUnitsType::setTemperatureUnit(TemperatureUnitTypeLisd * TemperatureUnitIn)
{TemperatureUnit = TemperatureUnitIn;}

TimeUnitTypeLisd * OtherUnitsType::getTimeUnit()
{return TimeUnit;}

void OtherUnitsType::setTimeUnit(TimeUnitTypeLisd * TimeUnitIn)
{TimeUnit = TimeUnitIn;}

/* ***************************************************************** */

/* class PositiveDecimalType

*/

PositiveDecimalType::PositiveDecimalType() :
  XmlDecimal()
{
}

PositiveDecimalType::PositiveDecimalType(
 const char * valIn) :
  XmlDecimal(
    valIn)
{
  if (!bad)
    bad = ((val <= 0));
}

PositiveDecimalType::~PositiveDecimalType() {}

bool PositiveDecimalType::PositiveDecimalTypeIsBad()
{
  if (XmlDecimalIsBad())
    return true;
  return ((val <= 0));
}

void PositiveDecimalType::printName(FILE * outFile)
{
  fprintf(outFile, "PositiveDecimalType");
}

void PositiveDecimalType::printSelf(FILE * outFile)
{
  if (PositiveDecimalTypeIsBad())
    {
      fprintf(stderr, "bad PositiveDecimalType value, ");
      XmlDecimal::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDecimal::printSelf(outFile);
}

void PositiveDecimalType::oPrintSelf(FILE * outFile)
{
  if (PositiveDecimalTypeIsBad())
    {
      fprintf(stderr, "bad PositiveDecimalType value, ");
      XmlDecimal::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlDecimal::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class PressureUnitType

*/

PressureUnitType::PressureUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

PressureUnitType::PressureUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

PressureUnitType::~PressureUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void PressureUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * PressureUnitType::getSIUnitName()
{return SIUnitName;}

void PressureUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * PressureUnitType::getUnitName()
{return UnitName;}

void PressureUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * PressureUnitType::getUnitConversion()
{return UnitConversion;}

void PressureUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class PressureUnitTypeLisd

*/

PressureUnitTypeLisd::PressureUnitTypeLisd() {}

PressureUnitTypeLisd::PressureUnitTypeLisd(PressureUnitType * aPressureUnitType)
{
  push_back(aPressureUnitType);
}

PressureUnitTypeLisd::~PressureUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PressureUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PressureUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<PressureUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class PressureValueType

*/

PressureValueType::PressureValueType() :
  SpecifiedDecimalType()
{
  pressureUnit = 0;
  val = 0;
}

PressureValueType::PressureValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  pressureUnit = 0;
}

PressureValueType::PressureValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * pressureUnitIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  pressureUnit = pressureUnitIn;
  significantFigures = significantFiguresIn;
}

PressureValueType::~PressureValueType()
{
  #ifndef NODESTRUCT
  delete pressureUnit;
  #endif
}

void PressureValueType::printName(FILE * outFile)
{
  fprintf(outFile, "PressureValueType");
}

void PressureValueType::printSelf(FILE * outFile)
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
  if (pressureUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "pressureUnit=\"");
      pressureUnit->oPrintSelf(outFile);
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
  XmlDecimal::printSelf(outFile);
}

bool PressureValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in PressureValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in PressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "pressureUnit")
        {
          XmlToken * pressureUnitVal;
          if (this->pressureUnit)
            {
              fprintf(stderr, "two values for pressureUnit in PressureValueType\n");
              returnValue = true;
              break;
            }
          pressureUnitVal = new XmlToken(decl->val.c_str());
          if (pressureUnitVal->bad)
            {
              delete pressureUnitVal;
              fprintf(stderr, "bad value %s for pressureUnit in PressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->pressureUnit = pressureUnitVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in PressureValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in PressureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PressureValueType\n");
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
      delete this->pressureUnit;
      this->pressureUnit = 0;
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlToken * PressureValueType::getpressureUnit()
{return pressureUnit;}

void PressureValueType::setpressureUnit(XmlToken * pressureUnitIn)
{pressureUnit = pressureUnitIn;}

/* ***************************************************************** */

/* class PrimaryUnitsType

*/

PrimaryUnitsType::PrimaryUnitsType()
{
  AreaUnit = 0;
  PMIAreaUnit = 0;
  AngularUnit = 0;
  PMIAngularUnit = 0;
  ForceUnit = 0;
  LinearUnit = 0;
  PMILinearUnit = 0;
  MassUnit = 0;
  PressureUnit = 0;
  SpeedUnit = 0;
  TemperatureUnit = 0;
  TimeUnit = 0;
}

PrimaryUnitsType::PrimaryUnitsType(
 AreaUnitType * AreaUnitIn,
 AreaUnitType * PMIAreaUnitIn,
 AngularUnitType * AngularUnitIn,
 AngularUnitType * PMIAngularUnitIn,
 ForceUnitType * ForceUnitIn,
 LinearUnitType * LinearUnitIn,
 LinearUnitType * PMILinearUnitIn,
 MassUnitType * MassUnitIn,
 PressureUnitType * PressureUnitIn,
 SpeedUnitType * SpeedUnitIn,
 TemperatureUnitType * TemperatureUnitIn,
 TimeUnitType * TimeUnitIn)
{
  AreaUnit = AreaUnitIn;
  PMIAreaUnit = PMIAreaUnitIn;
  AngularUnit = AngularUnitIn;
  PMIAngularUnit = PMIAngularUnitIn;
  ForceUnit = ForceUnitIn;
  LinearUnit = LinearUnitIn;
  PMILinearUnit = PMILinearUnitIn;
  MassUnit = MassUnitIn;
  PressureUnit = PressureUnitIn;
  SpeedUnit = SpeedUnitIn;
  TemperatureUnit = TemperatureUnitIn;
  TimeUnit = TimeUnitIn;
}

PrimaryUnitsType::~PrimaryUnitsType()
{
  #ifndef NODESTRUCT
  delete AreaUnit;
  delete PMIAreaUnit;
  delete AngularUnit;
  delete PMIAngularUnit;
  delete ForceUnit;
  delete LinearUnit;
  delete PMILinearUnit;
  delete MassUnit;
  delete PressureUnit;
  delete SpeedUnit;
  delete TemperatureUnit;
  delete TimeUnit;
  #endif
}

void PrimaryUnitsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (AreaUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaUnit");
      AreaUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaUnit>\n");
    }
  if (PMIAreaUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PMIAreaUnit");
      PMIAreaUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PMIAreaUnit>\n");
    }
  if (AngularUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularUnit");
      AngularUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularUnit>\n");
    }
  if (PMIAngularUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PMIAngularUnit");
      PMIAngularUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PMIAngularUnit>\n");
    }
  if (ForceUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceUnit");
      ForceUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceUnit>\n");
    }
  if (LinearUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearUnit");
      LinearUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearUnit>\n");
    }
  if (PMILinearUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PMILinearUnit");
      PMILinearUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PMILinearUnit>\n");
    }
  if (MassUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassUnit");
      MassUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassUnit>\n");
    }
  if (PressureUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureUnit");
      PressureUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureUnit>\n");
    }
  if (SpeedUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedUnit");
      SpeedUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedUnit>\n");
    }
  if (TemperatureUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureUnit");
      TemperatureUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureUnit>\n");
    }
  if (TimeUnit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeUnit");
      TimeUnit->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeUnit>\n");
    }
  doSpaces(-INDENT, outFile);
}

AreaUnitType * PrimaryUnitsType::getAreaUnit()
{return AreaUnit;}

void PrimaryUnitsType::setAreaUnit(AreaUnitType * AreaUnitIn)
{AreaUnit = AreaUnitIn;}

AreaUnitType * PrimaryUnitsType::getPMIAreaUnit()
{return PMIAreaUnit;}

void PrimaryUnitsType::setPMIAreaUnit(AreaUnitType * PMIAreaUnitIn)
{PMIAreaUnit = PMIAreaUnitIn;}

AngularUnitType * PrimaryUnitsType::getAngularUnit()
{return AngularUnit;}

void PrimaryUnitsType::setAngularUnit(AngularUnitType * AngularUnitIn)
{AngularUnit = AngularUnitIn;}

AngularUnitType * PrimaryUnitsType::getPMIAngularUnit()
{return PMIAngularUnit;}

void PrimaryUnitsType::setPMIAngularUnit(AngularUnitType * PMIAngularUnitIn)
{PMIAngularUnit = PMIAngularUnitIn;}

ForceUnitType * PrimaryUnitsType::getForceUnit()
{return ForceUnit;}

void PrimaryUnitsType::setForceUnit(ForceUnitType * ForceUnitIn)
{ForceUnit = ForceUnitIn;}

LinearUnitType * PrimaryUnitsType::getLinearUnit()
{return LinearUnit;}

void PrimaryUnitsType::setLinearUnit(LinearUnitType * LinearUnitIn)
{LinearUnit = LinearUnitIn;}

LinearUnitType * PrimaryUnitsType::getPMILinearUnit()
{return PMILinearUnit;}

void PrimaryUnitsType::setPMILinearUnit(LinearUnitType * PMILinearUnitIn)
{PMILinearUnit = PMILinearUnitIn;}

MassUnitType * PrimaryUnitsType::getMassUnit()
{return MassUnit;}

void PrimaryUnitsType::setMassUnit(MassUnitType * MassUnitIn)
{MassUnit = MassUnitIn;}

PressureUnitType * PrimaryUnitsType::getPressureUnit()
{return PressureUnit;}

void PrimaryUnitsType::setPressureUnit(PressureUnitType * PressureUnitIn)
{PressureUnit = PressureUnitIn;}

SpeedUnitType * PrimaryUnitsType::getSpeedUnit()
{return SpeedUnit;}

void PrimaryUnitsType::setSpeedUnit(SpeedUnitType * SpeedUnitIn)
{SpeedUnit = SpeedUnitIn;}

TemperatureUnitType * PrimaryUnitsType::getTemperatureUnit()
{return TemperatureUnit;}

void PrimaryUnitsType::setTemperatureUnit(TemperatureUnitType * TemperatureUnitIn)
{TemperatureUnit = TemperatureUnitIn;}

TimeUnitType * PrimaryUnitsType::getTimeUnit()
{return TimeUnit;}

void PrimaryUnitsType::setTimeUnit(TimeUnitType * TimeUnitIn)
{TimeUnit = TimeUnitIn;}

/* ***************************************************************** */

/* class SpecifiedDecimalType

*/

SpecifiedDecimalType::SpecifiedDecimalType()
{
  decimalPlaces = 0;
  significantFigures = 0;
  val = 0;
}

SpecifiedDecimalType::SpecifiedDecimalType(
 const char * valStringIn) :
  XmlDecimal(valStringIn)
{
  decimalPlaces = 0;
  significantFigures = 0;
}

SpecifiedDecimalType::SpecifiedDecimalType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlNonNegativeInteger * significantFiguresIn,
 const char * valStringIn) :
  XmlDecimal(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  significantFigures = significantFiguresIn;
}

SpecifiedDecimalType::~SpecifiedDecimalType()
{
  #ifndef NODESTRUCT
  delete decimalPlaces;
  delete significantFigures;
  #endif
}

void SpecifiedDecimalType::printName(FILE * outFile)
{
  fprintf(outFile, "SpecifiedDecimalType");
}

void SpecifiedDecimalType::printSelf(FILE * outFile)
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
  XmlDecimal::printSelf(outFile);
}

bool SpecifiedDecimalType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in SpecifiedDecimalType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in SpecifiedDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in SpecifiedDecimalType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in SpecifiedDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SpecifiedDecimalType\n");
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
      delete this->significantFigures;
      this->significantFigures = 0;
    }
  return returnValue;
}

XmlNonNegativeInteger * SpecifiedDecimalType::getdecimalPlaces()
{return decimalPlaces;}

void SpecifiedDecimalType::setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn)
{decimalPlaces = decimalPlacesIn;}

XmlNonNegativeInteger * SpecifiedDecimalType::getsignificantFigures()
{return significantFigures;}

void SpecifiedDecimalType::setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn)
{significantFigures = significantFiguresIn;}

/* ***************************************************************** */

/* class SpeedUnitType

*/

SpeedUnitType::SpeedUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

SpeedUnitType::SpeedUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

SpeedUnitType::~SpeedUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void SpeedUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * SpeedUnitType::getSIUnitName()
{return SIUnitName;}

void SpeedUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * SpeedUnitType::getUnitName()
{return UnitName;}

void SpeedUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * SpeedUnitType::getUnitConversion()
{return UnitConversion;}

void SpeedUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class SpeedUnitTypeLisd

*/

SpeedUnitTypeLisd::SpeedUnitTypeLisd() {}

SpeedUnitTypeLisd::SpeedUnitTypeLisd(SpeedUnitType * aSpeedUnitType)
{
  push_back(aSpeedUnitType);
}

SpeedUnitTypeLisd::~SpeedUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SpeedUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SpeedUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<SpeedUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class SpeedValueType

*/

SpeedValueType::SpeedValueType() :
  SpecifiedDecimalType()
{
  speedUnit = 0;
  val = 0;
}

SpeedValueType::SpeedValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  speedUnit = 0;
}

SpeedValueType::SpeedValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * speedUnitIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  significantFigures = significantFiguresIn;
  speedUnit = speedUnitIn;
}

SpeedValueType::~SpeedValueType()
{
  #ifndef NODESTRUCT
  delete speedUnit;
  #endif
}

void SpeedValueType::printName(FILE * outFile)
{
  fprintf(outFile, "SpeedValueType");
}

void SpeedValueType::printSelf(FILE * outFile)
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
  if (speedUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "speedUnit=\"");
      speedUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlDecimal::printSelf(outFile);
}

bool SpeedValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in SpeedValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in SpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in SpeedValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in SpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "speedUnit")
        {
          XmlToken * speedUnitVal;
          if (this->speedUnit)
            {
              fprintf(stderr, "two values for speedUnit in SpeedValueType\n");
              returnValue = true;
              break;
            }
          speedUnitVal = new XmlToken(decl->val.c_str());
          if (speedUnitVal->bad)
            {
              delete speedUnitVal;
              fprintf(stderr, "bad value %s for speedUnit in SpeedValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->speedUnit = speedUnitVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SpeedValueType\n");
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
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->speedUnit;
      this->speedUnit = 0;
    }
  return returnValue;
}

XmlToken * SpeedValueType::getspeedUnit()
{return speedUnit;}

void SpeedValueType::setspeedUnit(XmlToken * speedUnitIn)
{speedUnit = speedUnitIn;}

/* ***************************************************************** */

/* class TemperatureUnitType

*/

TemperatureUnitType::TemperatureUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

TemperatureUnitType::TemperatureUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

TemperatureUnitType::~TemperatureUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void TemperatureUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * TemperatureUnitType::getSIUnitName()
{return SIUnitName;}

void TemperatureUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * TemperatureUnitType::getUnitName()
{return UnitName;}

void TemperatureUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * TemperatureUnitType::getUnitConversion()
{return UnitConversion;}

void TemperatureUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class TemperatureUnitTypeLisd

*/

TemperatureUnitTypeLisd::TemperatureUnitTypeLisd() {}

TemperatureUnitTypeLisd::TemperatureUnitTypeLisd(TemperatureUnitType * aTemperatureUnitType)
{
  push_back(aTemperatureUnitType);
}

TemperatureUnitTypeLisd::~TemperatureUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TemperatureUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TemperatureUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<TemperatureUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class TemperatureValueType

*/

TemperatureValueType::TemperatureValueType() :
  SpecifiedDecimalType()
{
  temperatureUnit = 0;
  val = 0;
}

TemperatureValueType::TemperatureValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  temperatureUnit = 0;
}

TemperatureValueType::TemperatureValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * temperatureUnitIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  significantFigures = significantFiguresIn;
  temperatureUnit = temperatureUnitIn;
}

TemperatureValueType::~TemperatureValueType()
{
  #ifndef NODESTRUCT
  delete temperatureUnit;
  #endif
}

void TemperatureValueType::printName(FILE * outFile)
{
  fprintf(outFile, "TemperatureValueType");
}

void TemperatureValueType::printSelf(FILE * outFile)
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
  if (temperatureUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "temperatureUnit=\"");
      temperatureUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlDecimal::printSelf(outFile);
}

bool TemperatureValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in TemperatureValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in TemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in TemperatureValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in TemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "temperatureUnit")
        {
          XmlToken * temperatureUnitVal;
          if (this->temperatureUnit)
            {
              fprintf(stderr, "two values for temperatureUnit in TemperatureValueType\n");
              returnValue = true;
              break;
            }
          temperatureUnitVal = new XmlToken(decl->val.c_str());
          if (temperatureUnitVal->bad)
            {
              delete temperatureUnitVal;
              fprintf(stderr, "bad value %s for temperatureUnit in TemperatureValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->temperatureUnit = temperatureUnitVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TemperatureValueType\n");
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
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->temperatureUnit;
      this->temperatureUnit = 0;
    }
  return returnValue;
}

XmlToken * TemperatureValueType::gettemperatureUnit()
{return temperatureUnit;}

void TemperatureValueType::settemperatureUnit(XmlToken * temperatureUnitIn)
{temperatureUnit = temperatureUnitIn;}

/* ***************************************************************** */

/* class TimeUnitType

*/

TimeUnitType::TimeUnitType()
{
  SIUnitName = 0;
  UnitName = 0;
  UnitConversion = 0;
}

TimeUnitType::TimeUnitType(
 XmlToken * SIUnitNameIn,
 XmlToken * UnitNameIn,
 UnitConversionType * UnitConversionIn)
{
  SIUnitName = SIUnitNameIn;
  UnitName = UnitNameIn;
  UnitConversion = UnitConversionIn;
}

TimeUnitType::~TimeUnitType()
{
  #ifndef NODESTRUCT
  delete SIUnitName;
  delete UnitName;
  delete UnitConversion;
  #endif
}

void TimeUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SIUnitName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SIUnitName");
      SIUnitName->printSelf(outFile);
      fprintf(outFile, "</SIUnitName>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (UnitConversion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UnitConversion");
      UnitConversion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UnitConversion>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlToken * TimeUnitType::getSIUnitName()
{return SIUnitName;}

void TimeUnitType::setSIUnitName(XmlToken * SIUnitNameIn)
{SIUnitName = SIUnitNameIn;}

XmlToken * TimeUnitType::getUnitName()
{return UnitName;}

void TimeUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

UnitConversionType * TimeUnitType::getUnitConversion()
{return UnitConversion;}

void TimeUnitType::setUnitConversion(UnitConversionType * UnitConversionIn)
{UnitConversion = UnitConversionIn;}

/* ***************************************************************** */

/* class TimeUnitTypeLisd

*/

TimeUnitTypeLisd::TimeUnitTypeLisd() {}

TimeUnitTypeLisd::TimeUnitTypeLisd(TimeUnitType * aTimeUnitType)
{
  push_back(aTimeUnitType);
}

TimeUnitTypeLisd::~TimeUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TimeUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TimeUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<TimeUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class TimeValueType

*/

TimeValueType::TimeValueType() :
  SpecifiedDecimalType()
{
  timeUnit = 0;
  val = 0;
}

TimeValueType::TimeValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  timeUnit = 0;
}

TimeValueType::TimeValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * timeUnitIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  significantFigures = significantFiguresIn;
  timeUnit = timeUnitIn;
}

TimeValueType::~TimeValueType()
{
  #ifndef NODESTRUCT
  delete timeUnit;
  #endif
}

void TimeValueType::printName(FILE * outFile)
{
  fprintf(outFile, "TimeValueType");
}

void TimeValueType::printSelf(FILE * outFile)
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
  if (timeUnit)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "timeUnit=\"");
      timeUnit->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  XmlDecimal::printSelf(outFile);
}

bool TimeValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in TimeValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in TimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in TimeValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in TimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "timeUnit")
        {
          XmlToken * timeUnitVal;
          if (this->timeUnit)
            {
              fprintf(stderr, "two values for timeUnit in TimeValueType\n");
              returnValue = true;
              break;
            }
          timeUnitVal = new XmlToken(decl->val.c_str());
          if (timeUnitVal->bad)
            {
              delete timeUnitVal;
              fprintf(stderr, "bad value %s for timeUnit in TimeValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->timeUnit = timeUnitVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TimeValueType\n");
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
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->timeUnit;
      this->timeUnit = 0;
    }
  return returnValue;
}

XmlToken * TimeValueType::gettimeUnit()
{return timeUnit;}

void TimeValueType::settimeUnit(XmlToken * timeUnitIn)
{timeUnit = timeUnitIn;}

/* ***************************************************************** */

/* class UnitConversionType

*/

UnitConversionType::UnitConversionType()
{
  Factor = 0;
  Offset = 0;
}

UnitConversionType::UnitConversionType(
 PositiveDecimalType * FactorIn,
 XmlDecimal * OffsetIn)
{
  Factor = FactorIn;
  Offset = OffsetIn;
}

UnitConversionType::~UnitConversionType()
{
  #ifndef NODESTRUCT
  delete Factor;
  delete Offset;
  #endif
}

void UnitConversionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Factor");
  Factor->printSelf(outFile);
  fprintf(outFile, "</Factor>\n");
  if (Offset)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Offset");
      Offset->printSelf(outFile);
      fprintf(outFile, "</Offset>\n");
    }
  doSpaces(-INDENT, outFile);
}

PositiveDecimalType * UnitConversionType::getFactor()
{return Factor;}

void UnitConversionType::setFactor(PositiveDecimalType * FactorIn)
{Factor = FactorIn;}

XmlDecimal * UnitConversionType::getOffset()
{return Offset;}

void UnitConversionType::setOffset(XmlDecimal * OffsetIn)
{Offset = OffsetIn;}

/* ***************************************************************** */

/* class UserDefinedUnitType

*/

UserDefinedUnitType::UserDefinedUnitType()
{
  WhatIsMeasured = 0;
  UnitName = 0;
  StandardName = 0;
}

UserDefinedUnitType::UserDefinedUnitType(
 XmlString * WhatIsMeasuredIn,
 XmlToken * UnitNameIn,
 XmlString * StandardNameIn)
{
  WhatIsMeasured = WhatIsMeasuredIn;
  UnitName = UnitNameIn;
  StandardName = StandardNameIn;
}

UserDefinedUnitType::~UserDefinedUnitType()
{
  #ifndef NODESTRUCT
  delete WhatIsMeasured;
  delete UnitName;
  delete StandardName;
  #endif
}

void UserDefinedUnitType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<WhatIsMeasured");
  WhatIsMeasured->printSelf(outFile);
  fprintf(outFile, "</WhatIsMeasured>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<UnitName");
  UnitName->printSelf(outFile);
  fprintf(outFile, "</UnitName>\n");
  if (StandardName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StandardName");
      StandardName->printSelf(outFile);
      fprintf(outFile, "</StandardName>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlString * UserDefinedUnitType::getWhatIsMeasured()
{return WhatIsMeasured;}

void UserDefinedUnitType::setWhatIsMeasured(XmlString * WhatIsMeasuredIn)
{WhatIsMeasured = WhatIsMeasuredIn;}

XmlToken * UserDefinedUnitType::getUnitName()
{return UnitName;}

void UserDefinedUnitType::setUnitName(XmlToken * UnitNameIn)
{UnitName = UnitNameIn;}

XmlString * UserDefinedUnitType::getStandardName()
{return StandardName;}

void UserDefinedUnitType::setStandardName(XmlString * StandardNameIn)
{StandardName = StandardNameIn;}

/* ***************************************************************** */

/* class UserDefinedUnitTypeLisd

*/

UserDefinedUnitTypeLisd::UserDefinedUnitTypeLisd() {}

UserDefinedUnitTypeLisd::UserDefinedUnitTypeLisd(UserDefinedUnitType * aUserDefinedUnitType)
{
  push_back(aUserDefinedUnitType);
}

UserDefinedUnitTypeLisd::~UserDefinedUnitTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<UserDefinedUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void UserDefinedUnitTypeLisd::printSelf(FILE * outFile)
{
  std::list<UserDefinedUnitType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class UserDefinedUnitValueType

*/

UserDefinedUnitValueType::UserDefinedUnitValueType() :
  SpecifiedDecimalType()
{
  unitName = 0;
  val = 0;
}

UserDefinedUnitValueType::UserDefinedUnitValueType(
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  unitName = 0;
}

UserDefinedUnitValueType::UserDefinedUnitValueType(
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlNonNegativeInteger * significantFiguresIn,
 XmlToken * unitNameIn,
 const char * valStringIn) :
  SpecifiedDecimalType(valStringIn)
{
  decimalPlaces = decimalPlacesIn;
  significantFigures = significantFiguresIn;
  unitName = unitNameIn;
}

UserDefinedUnitValueType::~UserDefinedUnitValueType()
{
  #ifndef NODESTRUCT
  delete unitName;
  #endif
}

void UserDefinedUnitValueType::printName(FILE * outFile)
{
  fprintf(outFile, "UserDefinedUnitValueType");
}

void UserDefinedUnitValueType::printSelf(FILE * outFile)
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
  if (unitName)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "unitName=\"");
      unitName->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"unitName\" missing\n");
      exit(1);
    }
  XmlDecimal::printSelf(outFile);
}

bool UserDefinedUnitValueType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (this->decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in UserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in UserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (this->significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in UserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in UserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->significantFigures = significantFiguresVal;
        }
      else if (decl->name == "unitName")
        {
          XmlToken * unitNameVal;
          if (this->unitName)
            {
              fprintf(stderr, "two values for unitName in UserDefinedUnitValueType\n");
              returnValue = true;
              break;
            }
          unitNameVal = new XmlToken(decl->val.c_str());
          if (unitNameVal->bad)
            {
              delete unitNameVal;
              fprintf(stderr, "bad value %s for unitName in UserDefinedUnitValueType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->unitName = unitNameVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in UserDefinedUnitValueType\n");
          returnValue = true;
          break;
        }
    }
  if (this->unitName == 0)
    {
      fprintf(stderr, "required attribute \"unitName\" missing in UserDefinedUnitValueType\n");
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
      delete this->significantFigures;
      this->significantFigures = 0;
      delete this->unitName;
      this->unitName = 0;
    }
  return returnValue;
}

XmlToken * UserDefinedUnitValueType::getunitName()
{return unitName;}

void UserDefinedUnitValueType::setunitName(XmlToken * unitNameIn)
{unitName = unitNameIn;}

/* ***************************************************************** */

/* class UserDefinedUnitValueTypeLisd

*/

UserDefinedUnitValueTypeLisd::UserDefinedUnitValueTypeLisd() {}

UserDefinedUnitValueTypeLisd::UserDefinedUnitValueTypeLisd(UserDefinedUnitValueType * aUserDefinedUnitValueType)
{
  push_back(aUserDefinedUnitValueType);
}

UserDefinedUnitValueTypeLisd::~UserDefinedUnitValueTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<UserDefinedUnitValueType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void UserDefinedUnitValueTypeLisd::printSelf(FILE * outFile)
{
  std::list<UserDefinedUnitValueType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class UserDefinedUnitsType

*/

UserDefinedUnitsType::UserDefinedUnitsType()
{
  n = 0;
  UserDefinedUnit = 0;
}

UserDefinedUnitsType::UserDefinedUnitsType(
 UserDefinedUnitTypeLisd * UserDefinedUnitIn)
{
  n = 0;
  UserDefinedUnit = UserDefinedUnitIn;
}

UserDefinedUnitsType::UserDefinedUnitsType(
 NaturalType * nIn,
 UserDefinedUnitTypeLisd * UserDefinedUnitIn)
{
  n = nIn;
  UserDefinedUnit = UserDefinedUnitIn;
}

UserDefinedUnitsType::~UserDefinedUnitsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete UserDefinedUnit;
  #endif
}

void UserDefinedUnitsType::printSelf(FILE * outFile)
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
    if (!UserDefinedUnit)
      {
        fprintf(stderr, "UserDefinedUnit list is missing\n");
        exit(1);
      }
    if (UserDefinedUnit->size() == 0)
      {
        fprintf(stderr, "UserDefinedUnit list is empty\n");
        exit(1);
      }
    if (UserDefinedUnit->size() < 1)
      {
        fprintf(stderr,
                "size of UserDefinedUnit list (%d) less than minimum required (1)\n",
                (int)UserDefinedUnit->size());
        exit(1);
      }
    std::list<UserDefinedUnitType *>::iterator iter;
    for (iter = UserDefinedUnit->begin();
         iter != UserDefinedUnit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<UserDefinedUnit");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</UserDefinedUnit>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool UserDefinedUnitsType::badAttributes(
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
              fprintf(stderr, "two values for n in UserDefinedUnitsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in UserDefinedUnitsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in UserDefinedUnitsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in UserDefinedUnitsType\n");
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

NaturalType * UserDefinedUnitsType::getn()
{return n;}

void UserDefinedUnitsType::setn(NaturalType * nIn)
{n = nIn;}

UserDefinedUnitTypeLisd * UserDefinedUnitsType::getUserDefinedUnit()
{return UserDefinedUnit;}

void UserDefinedUnitsType::setUserDefinedUnit(UserDefinedUnitTypeLisd * UserDefinedUnitIn)
{UserDefinedUnit = UserDefinedUnitIn;}

/* ***************************************************************** */

