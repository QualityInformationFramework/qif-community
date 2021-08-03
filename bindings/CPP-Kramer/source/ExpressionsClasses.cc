/*********************************************************************/

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "ExpressionsClasses.hh"

#define INDENT 2

/*********************************************************************/
/*********************************************************************/

/* class ArithmeticCharacteristicParameterType

*/

ArithmeticCharacteristicParameterType::ArithmeticCharacteristicParameterType() :
  ArithmeticParameterBaseType()
{
  CharacteristicTypeEnum = 0;
}

ArithmeticCharacteristicParameterType::ArithmeticCharacteristicParameterType(
 XmlToken * ParameterIn,
 CharacteristicTypeEnumType * CharacteristicTypeEnumIn) :
  ArithmeticParameterBaseType(
    ParameterIn)
{
  CharacteristicTypeEnum = CharacteristicTypeEnumIn;
}

ArithmeticCharacteristicParameterType::~ArithmeticCharacteristicParameterType()
{
  #ifndef NODESTRUCT
  delete CharacteristicTypeEnum;
  #endif
}

void ArithmeticCharacteristicParameterType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Parameter");
  Parameter->printSelf(outFile);
  fprintf(outFile, "</Parameter>\n");
  if (CharacteristicTypeEnum)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicTypeEnum");
      CharacteristicTypeEnum->printSelf(outFile);
      fprintf(outFile, "</CharacteristicTypeEnum>\n");
    }
  doSpaces(-INDENT, outFile);
}

CharacteristicTypeEnumType * ArithmeticCharacteristicParameterType::getCharacteristicTypeEnum()
{return CharacteristicTypeEnum;}

void ArithmeticCharacteristicParameterType::setCharacteristicTypeEnum(CharacteristicTypeEnumType * CharacteristicTypeEnumIn)
{CharacteristicTypeEnum = CharacteristicTypeEnumIn;}

/*********************************************************************/

/* class ArithmeticComparisonEnumType

*/

ArithmeticComparisonEnumType::ArithmeticComparisonEnumType() :
  XmlNMTOKEN()
{
}

ArithmeticComparisonEnumType::ArithmeticComparisonEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "EQUAL") &&
           strcmp(val.c_str(), "GREATER") &&
           strcmp(val.c_str(), "GREATEROREQUAL") &&
           strcmp(val.c_str(), "LESS") &&
           strcmp(val.c_str(), "LESSOREQUAL"));
}

ArithmeticComparisonEnumType::~ArithmeticComparisonEnumType() {}

bool ArithmeticComparisonEnumType::ArithmeticComparisonEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "EQUAL") &&
          strcmp(val.c_str(), "GREATER") &&
          strcmp(val.c_str(), "GREATEROREQUAL") &&
          strcmp(val.c_str(), "LESS") &&
          strcmp(val.c_str(), "LESSOREQUAL"));
}

void ArithmeticComparisonEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ArithmeticComparisonEnumType");
}

void ArithmeticComparisonEnumType::printSelf(FILE * outFile)
{
  if (ArithmeticComparisonEnumTypeIsBad())
    {
      fprintf(stderr, "bad ArithmeticComparisonEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ArithmeticComparisonEnumType::oPrintSelf(FILE * outFile)
{
  if (ArithmeticComparisonEnumTypeIsBad())
    {
      fprintf(stderr, "bad ArithmeticComparisonEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class ArithmeticDMEParameterType

*/

ArithmeticDMEParameterType::ArithmeticDMEParameterType() :
  ArithmeticParameterBaseType()
{
  DMEClassNameEnum = 0;
}

ArithmeticDMEParameterType::ArithmeticDMEParameterType(
 XmlToken * ParameterIn,
 DMEClassNameEnumType * DMEClassNameEnumIn) :
  ArithmeticParameterBaseType(
    ParameterIn)
{
  DMEClassNameEnum = DMEClassNameEnumIn;
}

ArithmeticDMEParameterType::~ArithmeticDMEParameterType()
{
  #ifndef NODESTRUCT
  delete DMEClassNameEnum;
  #endif
}

void ArithmeticDMEParameterType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Parameter");
  Parameter->printSelf(outFile);
  fprintf(outFile, "</Parameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DMEClassNameEnum");
  DMEClassNameEnum->printSelf(outFile);
  fprintf(outFile, "</DMEClassNameEnum>\n");
  doSpaces(-INDENT, outFile);
}

DMEClassNameEnumType * ArithmeticDMEParameterType::getDMEClassNameEnum()
{return DMEClassNameEnum;}

void ArithmeticDMEParameterType::setDMEClassNameEnum(DMEClassNameEnumType * DMEClassNameEnumIn)
{DMEClassNameEnum = DMEClassNameEnumIn;}

/*********************************************************************/

/* class ArithmeticFeatureParameterType

*/

ArithmeticFeatureParameterType::ArithmeticFeatureParameterType() :
  ArithmeticParameterBaseType()
{
  FeatureTypeEnum = 0;
}

ArithmeticFeatureParameterType::ArithmeticFeatureParameterType(
 XmlToken * ParameterIn,
 FeatureTypeEnumType * FeatureTypeEnumIn) :
  ArithmeticParameterBaseType(
    ParameterIn)
{
  FeatureTypeEnum = FeatureTypeEnumIn;
}

ArithmeticFeatureParameterType::~ArithmeticFeatureParameterType()
{
  #ifndef NODESTRUCT
  delete FeatureTypeEnum;
  #endif
}

void ArithmeticFeatureParameterType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Parameter");
  Parameter->printSelf(outFile);
  fprintf(outFile, "</Parameter>\n");
  if (FeatureTypeEnum)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureTypeEnum");
      FeatureTypeEnum->printSelf(outFile);
      fprintf(outFile, "</FeatureTypeEnum>\n");
    }
  doSpaces(-INDENT, outFile);
}

FeatureTypeEnumType * ArithmeticFeatureParameterType::getFeatureTypeEnum()
{return FeatureTypeEnum;}

void ArithmeticFeatureParameterType::setFeatureTypeEnum(FeatureTypeEnumType * FeatureTypeEnumIn)
{FeatureTypeEnum = FeatureTypeEnumIn;}

/*********************************************************************/

/* class ArithmeticParameterBaseType

*/

ArithmeticParameterBaseType::ArithmeticParameterBaseType() :
  ArithmeticExpressionBaseType()
{
  Parameter = 0;
}

ArithmeticParameterBaseType::ArithmeticParameterBaseType(
 XmlToken * ParameterIn) :
  ArithmeticExpressionBaseType()
{
  Parameter = ParameterIn;
}

ArithmeticParameterBaseType::~ArithmeticParameterBaseType()
{
  #ifndef NODESTRUCT
  delete Parameter;
  #endif
}

void ArithmeticParameterBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Parameter");
  Parameter->printSelf(outFile);
  fprintf(outFile, "</Parameter>\n");
  doSpaces(-INDENT, outFile);
}

XmlToken * ArithmeticParameterBaseType::getParameter()
{return Parameter;}

void ArithmeticParameterBaseType::setParameter(XmlToken * ParameterIn)
{Parameter = ParameterIn;}

/*********************************************************************/

/* class ArithmeticParameterValueType

*/

ArithmeticParameterValueType::ArithmeticParameterValueType() :
  ArithmeticExpressionBaseType()
{
  Parameter = 0;
  ObjectId = 0;
}

ArithmeticParameterValueType::ArithmeticParameterValueType(
 XmlToken * ParameterIn,
 QIFReferenceFullType * ObjectIdIn) :
  ArithmeticExpressionBaseType()
{
  Parameter = ParameterIn;
  ObjectId = ObjectIdIn;
}

ArithmeticParameterValueType::~ArithmeticParameterValueType()
{
  #ifndef NODESTRUCT
  delete Parameter;
  delete ObjectId;
  #endif
}

void ArithmeticParameterValueType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Parameter");
  Parameter->printSelf(outFile);
  fprintf(outFile, "</Parameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ObjectId");
  ObjectId->printSelf(outFile);
  fprintf(outFile, "</ObjectId>\n");
  doSpaces(-INDENT, outFile);
}

XmlToken * ArithmeticParameterValueType::getParameter()
{return Parameter;}

void ArithmeticParameterValueType::setParameter(XmlToken * ParameterIn)
{Parameter = ParameterIn;}

QIFReferenceFullType * ArithmeticParameterValueType::getObjectId()
{return ObjectId;}

void ArithmeticParameterValueType::setObjectId(QIFReferenceFullType * ObjectIdIn)
{ObjectId = ObjectIdIn;}

/*********************************************************************/

/* class ArithmeticPartParameterType

*/

ArithmeticPartParameterType::ArithmeticPartParameterType() :
  ArithmeticParameterBaseType() {}

ArithmeticPartParameterType::ArithmeticPartParameterType(
 XmlToken * ParameterIn) :
  ArithmeticParameterBaseType(
    ParameterIn)
{
}

ArithmeticPartParameterType::~ArithmeticPartParameterType() {}

void ArithmeticPartParameterType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Parameter");
  Parameter->printSelf(outFile);
  fprintf(outFile, "</Parameter>\n");
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class CharacteristicIsType

*/

CharacteristicIsType::CharacteristicIsType() :
  BooleanExpressionBaseType()
{
  val = 0;
}

CharacteristicIsType::CharacteristicIsType(
 CharacteristicTypeEnumType * valIn) :
  BooleanExpressionBaseType()
{
  val = valIn;
}

CharacteristicIsType::~CharacteristicIsType()
{
  #ifndef NODESTRUCT
  delete val;
  #endif
}

void CharacteristicIsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (val)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "val=\"");
      val->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"val\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool CharacteristicIsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "val")
        {
          CharacteristicTypeEnumType * valVal;
          if (val)
            {
              fprintf(stderr, "two values for val in CharacteristicIsType\n");
              returnValue = true;
              break;
            }
          valVal = new CharacteristicTypeEnumType(decl->val.c_str());
          if (valVal->bad)
            {
              delete valVal;
              fprintf(stderr, "bad value %s for val in CharacteristicIsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            val = valVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CharacteristicIsType\n");
          returnValue = true;
          break;
        }
    }
  if (val == 0)
    {
      fprintf(stderr, "required attribute \"val\" missing in CharacteristicIsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete val;
      val = 0;
    }
  return returnValue;
}

CharacteristicTypeEnumType * CharacteristicIsType::getval()
{return val;}

void CharacteristicIsType::setval(CharacteristicTypeEnumType * valIn)
{val = valIn;}

/*********************************************************************/

/* class CharacteristicToleranceType

*/

CharacteristicToleranceType::CharacteristicToleranceType() :
  ArithmeticExpressionBaseType() {}

CharacteristicToleranceType::~CharacteristicToleranceType() {}

void CharacteristicToleranceType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class CharacteristicTypeEnumType

*/

CharacteristicTypeEnumType::CharacteristicTypeEnumType() :
  XmlNMTOKEN()
{
}

CharacteristicTypeEnumType::CharacteristicTypeEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ANGLE") &&
           strcmp(val.c_str(), "ANGLEBETWEEN") &&
           strcmp(val.c_str(), "ANGLECOORDINATE") &&
           strcmp(val.c_str(), "ANGLEFROM") &&
           strcmp(val.c_str(), "ANGULARITY") &&
           strcmp(val.c_str(), "CHORD") &&
           strcmp(val.c_str(), "CIRCULARITY") &&
           strcmp(val.c_str(), "CIRCULARRUNOUT") &&
           strcmp(val.c_str(), "CONCENTRICITY") &&
           strcmp(val.c_str(), "CONICALTAPER") &&
           strcmp(val.c_str(), "CONICITY") &&
           strcmp(val.c_str(), "CURVELENGTH") &&
           strcmp(val.c_str(), "CYLINDRICITY") &&
           strcmp(val.c_str(), "DEPTH") &&
           strcmp(val.c_str(), "DIAMETER") &&
           strcmp(val.c_str(), "DISTANCE") &&
           strcmp(val.c_str(), "DISTANCEFROM") &&
           strcmp(val.c_str(), "ELLIPTICITY") &&
           strcmp(val.c_str(), "FLATTAPER") &&
           strcmp(val.c_str(), "FLATNESS") &&
           strcmp(val.c_str(), "HEIGHT") &&
           strcmp(val.c_str(), "LENGTH") &&
           strcmp(val.c_str(), "LENGTHCOORDINATE") &&
           strcmp(val.c_str(), "LINEPROFILE") &&
           strcmp(val.c_str(), "OTHERFORM") &&
           strcmp(val.c_str(), "PERPENDICULARITY") &&
           strcmp(val.c_str(), "PARALLELISM") &&
           strcmp(val.c_str(), "POINTPROFILE") &&
           strcmp(val.c_str(), "POSITION") &&
           strcmp(val.c_str(), "RADIUS") &&
           strcmp(val.c_str(), "SPHERICALDIAMTER") &&
           strcmp(val.c_str(), "SPHERICALRADIUS") &&
           strcmp(val.c_str(), "SPHERICITY") &&
           strcmp(val.c_str(), "SQUARE") &&
           strcmp(val.c_str(), "STRAIGHTNESS") &&
           strcmp(val.c_str(), "SURFACEPROFILE") &&
           strcmp(val.c_str(), "SURFACEPROFILENONUNIFORM") &&
           strcmp(val.c_str(), "SYMMETRY") &&
           strcmp(val.c_str(), "THICKNESS") &&
           strcmp(val.c_str(), "THREAD") &&
           strcmp(val.c_str(), "TOROIDICITY") &&
           strcmp(val.c_str(), "TOTALRUNOUT") &&
           strcmp(val.c_str(), "WELDBEVEL") &&
           strcmp(val.c_str(), "WELDEDGE") &&
           strcmp(val.c_str(), "WELDFILLET") &&
           strcmp(val.c_str(), "WELDFLAREBEVEL") &&
           strcmp(val.c_str(), "WELDFLAREV") &&
           strcmp(val.c_str(), "WELDJ") &&
           strcmp(val.c_str(), "WELDPLUG") &&
           strcmp(val.c_str(), "WELDSCARF") &&
           strcmp(val.c_str(), "WELDSEAM") &&
           strcmp(val.c_str(), "WELDSLOT") &&
           strcmp(val.c_str(), "WELDSPOT") &&
           strcmp(val.c_str(), "WELDSQUARE") &&
           strcmp(val.c_str(), "WELDSTUD") &&
           strcmp(val.c_str(), "WELDSURFACING") &&
           strcmp(val.c_str(), "WELDU") &&
           strcmp(val.c_str(), "WELDV") &&
           strcmp(val.c_str(), "WIDTH"));
}

CharacteristicTypeEnumType::~CharacteristicTypeEnumType() {}

bool CharacteristicTypeEnumType::CharacteristicTypeEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ANGLE") &&
          strcmp(val.c_str(), "ANGLEBETWEEN") &&
          strcmp(val.c_str(), "ANGLECOORDINATE") &&
          strcmp(val.c_str(), "ANGLEFROM") &&
          strcmp(val.c_str(), "ANGULARITY") &&
          strcmp(val.c_str(), "CHORD") &&
          strcmp(val.c_str(), "CIRCULARITY") &&
          strcmp(val.c_str(), "CIRCULARRUNOUT") &&
          strcmp(val.c_str(), "CONCENTRICITY") &&
          strcmp(val.c_str(), "CONICALTAPER") &&
          strcmp(val.c_str(), "CONICITY") &&
          strcmp(val.c_str(), "CURVELENGTH") &&
          strcmp(val.c_str(), "CYLINDRICITY") &&
          strcmp(val.c_str(), "DEPTH") &&
          strcmp(val.c_str(), "DIAMETER") &&
          strcmp(val.c_str(), "DISTANCE") &&
          strcmp(val.c_str(), "DISTANCEFROM") &&
          strcmp(val.c_str(), "ELLIPTICITY") &&
          strcmp(val.c_str(), "FLATTAPER") &&
          strcmp(val.c_str(), "FLATNESS") &&
          strcmp(val.c_str(), "HEIGHT") &&
          strcmp(val.c_str(), "LENGTH") &&
          strcmp(val.c_str(), "LENGTHCOORDINATE") &&
          strcmp(val.c_str(), "LINEPROFILE") &&
          strcmp(val.c_str(), "OTHERFORM") &&
          strcmp(val.c_str(), "PERPENDICULARITY") &&
          strcmp(val.c_str(), "PARALLELISM") &&
          strcmp(val.c_str(), "POINTPROFILE") &&
          strcmp(val.c_str(), "POSITION") &&
          strcmp(val.c_str(), "RADIUS") &&
          strcmp(val.c_str(), "SPHERICALDIAMTER") &&
          strcmp(val.c_str(), "SPHERICALRADIUS") &&
          strcmp(val.c_str(), "SPHERICITY") &&
          strcmp(val.c_str(), "SQUARE") &&
          strcmp(val.c_str(), "STRAIGHTNESS") &&
          strcmp(val.c_str(), "SURFACEPROFILE") &&
          strcmp(val.c_str(), "SURFACEPROFILENONUNIFORM") &&
          strcmp(val.c_str(), "SYMMETRY") &&
          strcmp(val.c_str(), "THICKNESS") &&
          strcmp(val.c_str(), "THREAD") &&
          strcmp(val.c_str(), "TOROIDICITY") &&
          strcmp(val.c_str(), "TOTALRUNOUT") &&
          strcmp(val.c_str(), "WELDBEVEL") &&
          strcmp(val.c_str(), "WELDEDGE") &&
          strcmp(val.c_str(), "WELDFILLET") &&
          strcmp(val.c_str(), "WELDFLAREBEVEL") &&
          strcmp(val.c_str(), "WELDFLAREV") &&
          strcmp(val.c_str(), "WELDJ") &&
          strcmp(val.c_str(), "WELDPLUG") &&
          strcmp(val.c_str(), "WELDSCARF") &&
          strcmp(val.c_str(), "WELDSEAM") &&
          strcmp(val.c_str(), "WELDSLOT") &&
          strcmp(val.c_str(), "WELDSPOT") &&
          strcmp(val.c_str(), "WELDSQUARE") &&
          strcmp(val.c_str(), "WELDSTUD") &&
          strcmp(val.c_str(), "WELDSURFACING") &&
          strcmp(val.c_str(), "WELDU") &&
          strcmp(val.c_str(), "WELDV") &&
          strcmp(val.c_str(), "WIDTH"));
}

void CharacteristicTypeEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "CharacteristicTypeEnumType");
}

void CharacteristicTypeEnumType::printSelf(FILE * outFile)
{
  if (CharacteristicTypeEnumTypeIsBad())
    {
      fprintf(stderr, "bad CharacteristicTypeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void CharacteristicTypeEnumType::oPrintSelf(FILE * outFile)
{
  if (CharacteristicTypeEnumTypeIsBad())
    {
      fprintf(stderr, "bad CharacteristicTypeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class ClosedCurvePointSamplingStrategyEnumType

*/

ClosedCurvePointSamplingStrategyEnumType::ClosedCurvePointSamplingStrategyEnumType() :
  XmlNMTOKEN()
{
}

ClosedCurvePointSamplingStrategyEnumType::ClosedCurvePointSamplingStrategyEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "POINTS") &&
           strcmp(val.c_str(), "EQUIDISTANT"));
}

ClosedCurvePointSamplingStrategyEnumType::~ClosedCurvePointSamplingStrategyEnumType() {}

bool ClosedCurvePointSamplingStrategyEnumType::ClosedCurvePointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "POINTS") &&
          strcmp(val.c_str(), "EQUIDISTANT"));
}

void ClosedCurvePointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ClosedCurvePointSamplingStrategyEnumType");
}

void ClosedCurvePointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (ClosedCurvePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ClosedCurvePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ClosedCurvePointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (ClosedCurvePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ClosedCurvePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class ConePointSamplingStrategyEnumType

*/

ConePointSamplingStrategyEnumType::ConePointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

ConePointSamplingStrategyEnumType::ConePointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "POLARGRID") &&
           strcmp(val.c_str(), "STRATIFIED") &&
           strcmp(val.c_str(), "SPIRAL") &&
           strcmp(val.c_str(), "SPIDERWEB") &&
           strcmp(val.c_str(), "POINTS"));
}

ConePointSamplingStrategyEnumType::~ConePointSamplingStrategyEnumType() {}

bool ConePointSamplingStrategyEnumType::ConePointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "POLARGRID") &&
          strcmp(val.c_str(), "STRATIFIED") &&
          strcmp(val.c_str(), "SPIRAL") &&
          strcmp(val.c_str(), "SPIDERWEB") &&
          strcmp(val.c_str(), "POINTS"));
}

void ConePointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ConePointSamplingStrategyEnumType");
}

void ConePointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (ConePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ConePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ConePointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (ConePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ConePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class DMEClassNameEnumType

*/

DMEClassNameEnumType::DMEClassNameEnumType() :
  XmlNMTOKEN()
{
}

DMEClassNameEnumType::DMEClassNameEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "AACMM") &&
           strcmp(val.c_str(), "ALLDMES") &&
           strcmp(val.c_str(), "ANALOG_MICROMETER") &&
           strcmp(val.c_str(), "AUTOCOLLIMATOR") &&
           strcmp(val.c_str(), "CALIPER") &&
           strcmp(val.c_str(), "CAPACITIVE_SENSOR") &&
           strcmp(val.c_str(), "CARTESIAN_CMM") &&
           strcmp(val.c_str(), "CHARGE_COUPLED_DEVICE_CAMERA_SENSOR") &&
           strcmp(val.c_str(), "CMM") &&
           strcmp(val.c_str(), "COMPLEX_TACTILE_PROBE_SENSOR") &&
           strcmp(val.c_str(), "COMPUTED_TOMOGRAPHY") &&
           strcmp(val.c_str(), "CONFOCAL_CHROMATIC_SENSOR") &&
           strcmp(val.c_str(), "DIAL_CALIPER") &&
           strcmp(val.c_str(), "DIGITAL_CALIPER") &&
           strcmp(val.c_str(), "DIGITAL_MICROMETER") &&
           strcmp(val.c_str(), "DRAW_WIRE_SENSOR") &&
           strcmp(val.c_str(), "DVRT_SENSOR") &&
           strcmp(val.c_str(), "EDDY_CURRENT_SENSOR") &&
           strcmp(val.c_str(), "GAGE") &&
           strcmp(val.c_str(), "LASER_RADAR") &&
           strcmp(val.c_str(), "LASER_TRACKER") &&
           strcmp(val.c_str(), "LASER_TRIANGULATION_SENSOR") &&
           strcmp(val.c_str(), "LIGHT_PEN_CMM") &&
           strcmp(val.c_str(), "LVDT_SENSOR") &&
           strcmp(val.c_str(), "MAGNETO_INDUCTIVE_SENSOR") &&
           strcmp(val.c_str(), "MEASUREMENT_ROOM") &&
           strcmp(val.c_str(), "MICROMETER") &&
           strcmp(val.c_str(), "MICROSCOPE") &&
           strcmp(val.c_str(), "MULTIPLE_CARRIAGE_CARTESIAN_CMM") &&
           strcmp(val.c_str(), "OPTICAL_COMPARATOR") &&
           strcmp(val.c_str(), "PARALLEL_LINK_CMM") &&
           strcmp(val.c_str(), "PROBE_TIP") &&
           strcmp(val.c_str(), "SIMPLE_TACTILE_PROBE_SENSOR") &&
           strcmp(val.c_str(), "SINE_BAR") &&
           strcmp(val.c_str(), "STRUCTURED_LIGHT_SENSOR") &&
           strcmp(val.c_str(), "TACTILE_PROBE_SENSOR") &&
           strcmp(val.c_str(), "THEODOLITE") &&
           strcmp(val.c_str(), "TOOL_WITH_CCD_CAMERA_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_CAPACITIVE_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_COMPLEX_TACTILE_PROBE_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_CONFOCAL_CHROMATIC_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_DETACHABLE_SENSORS") &&
           strcmp(val.c_str(), "TOOL_WITH_DVRT_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_DRAW_WIRE_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_EDDY_CURRENT_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_INTEGRATED_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_LVDT_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_LASER_TRIANGULATION_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_MAGNETOINDUCTIVE_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_SIMPLE_TACTILE_PROBE_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_STRUCTURED_LIGHT_SENSOR") &&
           strcmp(val.c_str(), "TOOL_WITH_ULTRASONIC_SENSOR") &&
           strcmp(val.c_str(), "ULTRASONIC_SENSOR") &&
           strcmp(val.c_str(), "UNIVERSAL_DEVICE") &&
           strcmp(val.c_str(), "UNIVERSAL_LENGTH_MEASURING"));
}

DMEClassNameEnumType::~DMEClassNameEnumType() {}

bool DMEClassNameEnumType::DMEClassNameEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "AACMM") &&
          strcmp(val.c_str(), "ALLDMES") &&
          strcmp(val.c_str(), "ANALOG_MICROMETER") &&
          strcmp(val.c_str(), "AUTOCOLLIMATOR") &&
          strcmp(val.c_str(), "CALIPER") &&
          strcmp(val.c_str(), "CAPACITIVE_SENSOR") &&
          strcmp(val.c_str(), "CARTESIAN_CMM") &&
          strcmp(val.c_str(), "CHARGE_COUPLED_DEVICE_CAMERA_SENSOR") &&
          strcmp(val.c_str(), "CMM") &&
          strcmp(val.c_str(), "COMPLEX_TACTILE_PROBE_SENSOR") &&
          strcmp(val.c_str(), "COMPUTED_TOMOGRAPHY") &&
          strcmp(val.c_str(), "CONFOCAL_CHROMATIC_SENSOR") &&
          strcmp(val.c_str(), "DIAL_CALIPER") &&
          strcmp(val.c_str(), "DIGITAL_CALIPER") &&
          strcmp(val.c_str(), "DIGITAL_MICROMETER") &&
          strcmp(val.c_str(), "DRAW_WIRE_SENSOR") &&
          strcmp(val.c_str(), "DVRT_SENSOR") &&
          strcmp(val.c_str(), "EDDY_CURRENT_SENSOR") &&
          strcmp(val.c_str(), "GAGE") &&
          strcmp(val.c_str(), "LASER_RADAR") &&
          strcmp(val.c_str(), "LASER_TRACKER") &&
          strcmp(val.c_str(), "LASER_TRIANGULATION_SENSOR") &&
          strcmp(val.c_str(), "LIGHT_PEN_CMM") &&
          strcmp(val.c_str(), "LVDT_SENSOR") &&
          strcmp(val.c_str(), "MAGNETO_INDUCTIVE_SENSOR") &&
          strcmp(val.c_str(), "MEASUREMENT_ROOM") &&
          strcmp(val.c_str(), "MICROMETER") &&
          strcmp(val.c_str(), "MICROSCOPE") &&
          strcmp(val.c_str(), "MULTIPLE_CARRIAGE_CARTESIAN_CMM") &&
          strcmp(val.c_str(), "OPTICAL_COMPARATOR") &&
          strcmp(val.c_str(), "PARALLEL_LINK_CMM") &&
          strcmp(val.c_str(), "PROBE_TIP") &&
          strcmp(val.c_str(), "SIMPLE_TACTILE_PROBE_SENSOR") &&
          strcmp(val.c_str(), "SINE_BAR") &&
          strcmp(val.c_str(), "STRUCTURED_LIGHT_SENSOR") &&
          strcmp(val.c_str(), "TACTILE_PROBE_SENSOR") &&
          strcmp(val.c_str(), "THEODOLITE") &&
          strcmp(val.c_str(), "TOOL_WITH_CCD_CAMERA_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_CAPACITIVE_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_COMPLEX_TACTILE_PROBE_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_CONFOCAL_CHROMATIC_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_DETACHABLE_SENSORS") &&
          strcmp(val.c_str(), "TOOL_WITH_DVRT_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_DRAW_WIRE_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_EDDY_CURRENT_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_INTEGRATED_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_LVDT_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_LASER_TRIANGULATION_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_MAGNETOINDUCTIVE_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_SIMPLE_TACTILE_PROBE_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_STRUCTURED_LIGHT_SENSOR") &&
          strcmp(val.c_str(), "TOOL_WITH_ULTRASONIC_SENSOR") &&
          strcmp(val.c_str(), "ULTRASONIC_SENSOR") &&
          strcmp(val.c_str(), "UNIVERSAL_DEVICE") &&
          strcmp(val.c_str(), "UNIVERSAL_LENGTH_MEASURING"));
}

void DMEClassNameEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DMEClassNameEnumType");
}

void DMEClassNameEnumType::printSelf(FILE * outFile)
{
  if (DMEClassNameEnumTypeIsBad())
    {
      fprintf(stderr, "bad DMEClassNameEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DMEClassNameEnumType::oPrintSelf(FILE * outFile)
{
  if (DMEClassNameEnumTypeIsBad())
    {
      fprintf(stderr, "bad DMEClassNameEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class ElongatedCylinderPointSamplingStrategyEnumType

*/

ElongatedCylinderPointSamplingStrategyEnumType::ElongatedCylinderPointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

ElongatedCylinderPointSamplingStrategyEnumType::ElongatedCylinderPointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ORTHOGONALGRID") &&
           strcmp(val.c_str(), "BIRDCAGE") &&
           strcmp(val.c_str(), "SPECIFIEDGRID") &&
           strcmp(val.c_str(), "STRATIFIED") &&
           strcmp(val.c_str(), "HELIX") &&
           strcmp(val.c_str(), "POINTS"));
}

ElongatedCylinderPointSamplingStrategyEnumType::~ElongatedCylinderPointSamplingStrategyEnumType() {}

bool ElongatedCylinderPointSamplingStrategyEnumType::ElongatedCylinderPointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ORTHOGONALGRID") &&
          strcmp(val.c_str(), "BIRDCAGE") &&
          strcmp(val.c_str(), "SPECIFIEDGRID") &&
          strcmp(val.c_str(), "STRATIFIED") &&
          strcmp(val.c_str(), "HELIX") &&
          strcmp(val.c_str(), "POINTS"));
}

void ElongatedCylinderPointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ElongatedCylinderPointSamplingStrategyEnumType");
}

void ElongatedCylinderPointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (ElongatedCylinderPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ElongatedCylinderPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ElongatedCylinderPointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (ElongatedCylinderPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ElongatedCylinderPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class ExtrudedCrossSectionPointSamplingStrategyEnumType

*/

ExtrudedCrossSectionPointSamplingStrategyEnumType::ExtrudedCrossSectionPointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

ExtrudedCrossSectionPointSamplingStrategyEnumType::ExtrudedCrossSectionPointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "BIRDCAGE") &&
           strcmp(val.c_str(), "STRATIFIED") &&
           strcmp(val.c_str(), "POINTS"));
}

ExtrudedCrossSectionPointSamplingStrategyEnumType::~ExtrudedCrossSectionPointSamplingStrategyEnumType() {}

bool ExtrudedCrossSectionPointSamplingStrategyEnumType::ExtrudedCrossSectionPointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "BIRDCAGE") &&
          strcmp(val.c_str(), "STRATIFIED") &&
          strcmp(val.c_str(), "POINTS"));
}

void ExtrudedCrossSectionPointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ExtrudedCrossSectionPointSamplingStrategyEnumType");
}

void ExtrudedCrossSectionPointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (ExtrudedCrossSectionPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ExtrudedCrossSectionPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ExtrudedCrossSectionPointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (ExtrudedCrossSectionPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad ExtrudedCrossSectionPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class FeatureAreaType

*/

FeatureAreaType::FeatureAreaType() :
  ArithmeticExpressionBaseType() {}

FeatureAreaType::~FeatureAreaType() {}

void FeatureAreaType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class FeatureIsDatumType

*/

FeatureIsDatumType::FeatureIsDatumType() :
  BooleanExpressionBaseType() {}

FeatureIsDatumType::~FeatureIsDatumType() {}

void FeatureIsDatumType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class FeatureIsInternalType

*/

FeatureIsInternalType::FeatureIsInternalType() :
  BooleanExpressionBaseType() {}

FeatureIsInternalType::~FeatureIsInternalType() {}

void FeatureIsInternalType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class FeatureLengthType

*/

FeatureLengthType::FeatureLengthType() :
  ArithmeticExpressionBaseType() {}

FeatureLengthType::~FeatureLengthType() {}

void FeatureLengthType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class FeatureSizeType

*/

FeatureSizeType::FeatureSizeType() :
  ArithmeticExpressionBaseType() {}

FeatureSizeType::~FeatureSizeType() {}

void FeatureSizeType::printSelf(FILE * outFile)
{
  fprintf(outFile, "/>\n");
}

/*********************************************************************/

/* class FeatureTypeEnumType

*/

FeatureTypeEnumType::FeatureTypeEnumType() :
  XmlNMTOKEN()
{
}

FeatureTypeEnumType::FeatureTypeEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "CIRCLE") &&
           strcmp(val.c_str(), "CIRCULARARC") &&
           strcmp(val.c_str(), "CONE") &&
           strcmp(val.c_str(), "CONICALSEGMENT") &&
           strcmp(val.c_str(), "CYLINDER") &&
           strcmp(val.c_str(), "CYLINDRICALSEGMENT") &&
           strcmp(val.c_str(), "EDGEPOINT") &&
           strcmp(val.c_str(), "ELLIPSE") &&
           strcmp(val.c_str(), "ELLIPTICALARC") &&
           strcmp(val.c_str(), "ELONGATEDCIRCLE") &&
           strcmp(val.c_str(), "ELONGATEDCYLINDER") &&
           strcmp(val.c_str(), "EXTRUDEDCROSSSECTION") &&
           strcmp(val.c_str(), "GROUP") &&
           strcmp(val.c_str(), "LINE") &&
           strcmp(val.c_str(), "MARKING") &&
           strcmp(val.c_str(), "OPPOSITEANGLEDLINES") &&
           strcmp(val.c_str(), "OPPOSITEPARALLELLINES") &&
           strcmp(val.c_str(), "OPPOSITEANGLEDPLANES") &&
           strcmp(val.c_str(), "OPPOSITEPARALLELPLANES") &&
           strcmp(val.c_str(), "OTHERCURVE") &&
           strcmp(val.c_str(), "OTHERNONSHAPE") &&
           strcmp(val.c_str(), "OTHERSHAPE") &&
           strcmp(val.c_str(), "OTHERSURFACE") &&
           strcmp(val.c_str(), "PATTERN") &&
           strcmp(val.c_str(), "PATTERNCIRCLE") &&
           strcmp(val.c_str(), "PATTERNCIRCULARARC") &&
           strcmp(val.c_str(), "PATTERNLINEAR") &&
           strcmp(val.c_str(), "PATTERNPARALLELOGRAM") &&
           strcmp(val.c_str(), "PLANE") &&
           strcmp(val.c_str(), "POINT") &&
           strcmp(val.c_str(), "POINTDEFINEDCURVE") &&
           strcmp(val.c_str(), "POINTDEFINEDSURFACE") &&
           strcmp(val.c_str(), "SPHERE") &&
           strcmp(val.c_str(), "SPHERICALSEGMENT") &&
           strcmp(val.c_str(), "SURFACEOFREVOLUTION") &&
           strcmp(val.c_str(), "THREADED") &&
           strcmp(val.c_str(), "TOROIDALSEGMENT") &&
           strcmp(val.c_str(), "TORUS"));
}

FeatureTypeEnumType::~FeatureTypeEnumType() {}

bool FeatureTypeEnumType::FeatureTypeEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "CIRCLE") &&
          strcmp(val.c_str(), "CIRCULARARC") &&
          strcmp(val.c_str(), "CONE") &&
          strcmp(val.c_str(), "CONICALSEGMENT") &&
          strcmp(val.c_str(), "CYLINDER") &&
          strcmp(val.c_str(), "CYLINDRICALSEGMENT") &&
          strcmp(val.c_str(), "EDGEPOINT") &&
          strcmp(val.c_str(), "ELLIPSE") &&
          strcmp(val.c_str(), "ELLIPTICALARC") &&
          strcmp(val.c_str(), "ELONGATEDCIRCLE") &&
          strcmp(val.c_str(), "ELONGATEDCYLINDER") &&
          strcmp(val.c_str(), "EXTRUDEDCROSSSECTION") &&
          strcmp(val.c_str(), "GROUP") &&
          strcmp(val.c_str(), "LINE") &&
          strcmp(val.c_str(), "MARKING") &&
          strcmp(val.c_str(), "OPPOSITEANGLEDLINES") &&
          strcmp(val.c_str(), "OPPOSITEPARALLELLINES") &&
          strcmp(val.c_str(), "OPPOSITEANGLEDPLANES") &&
          strcmp(val.c_str(), "OPPOSITEPARALLELPLANES") &&
          strcmp(val.c_str(), "OTHERCURVE") &&
          strcmp(val.c_str(), "OTHERNONSHAPE") &&
          strcmp(val.c_str(), "OTHERSHAPE") &&
          strcmp(val.c_str(), "OTHERSURFACE") &&
          strcmp(val.c_str(), "PATTERN") &&
          strcmp(val.c_str(), "PATTERNCIRCLE") &&
          strcmp(val.c_str(), "PATTERNCIRCULARARC") &&
          strcmp(val.c_str(), "PATTERNLINEAR") &&
          strcmp(val.c_str(), "PATTERNPARALLELOGRAM") &&
          strcmp(val.c_str(), "PLANE") &&
          strcmp(val.c_str(), "POINT") &&
          strcmp(val.c_str(), "POINTDEFINEDCURVE") &&
          strcmp(val.c_str(), "POINTDEFINEDSURFACE") &&
          strcmp(val.c_str(), "SPHERE") &&
          strcmp(val.c_str(), "SPHERICALSEGMENT") &&
          strcmp(val.c_str(), "SURFACEOFREVOLUTION") &&
          strcmp(val.c_str(), "THREADED") &&
          strcmp(val.c_str(), "TOROIDALSEGMENT") &&
          strcmp(val.c_str(), "TORUS"));
}

void FeatureTypeEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "FeatureTypeEnumType");
}

void FeatureTypeEnumType::printSelf(FILE * outFile)
{
  if (FeatureTypeEnumTypeIsBad())
    {
      fprintf(stderr, "bad FeatureTypeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void FeatureTypeEnumType::oPrintSelf(FILE * outFile)
{
  if (FeatureTypeEnumTypeIsBad())
    {
      fprintf(stderr, "bad FeatureTypeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class FeatureTypeIsType

*/

FeatureTypeIsType::FeatureTypeIsType() :
  BooleanExpressionBaseType()
{
  val = 0;
}

FeatureTypeIsType::FeatureTypeIsType(
 FeatureTypeEnumType * valIn) :
  BooleanExpressionBaseType()
{
  val = valIn;
}

FeatureTypeIsType::~FeatureTypeIsType()
{
  #ifndef NODESTRUCT
  delete val;
  #endif
}

void FeatureTypeIsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (val)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "val=\"");
      val->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"val\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool FeatureTypeIsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "val")
        {
          FeatureTypeEnumType * valVal;
          if (val)
            {
              fprintf(stderr, "two values for val in FeatureTypeIsType\n");
              returnValue = true;
              break;
            }
          valVal = new FeatureTypeEnumType(decl->val.c_str());
          if (valVal->bad)
            {
              delete valVal;
              fprintf(stderr, "bad value %s for val in FeatureTypeIsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            val = valVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FeatureTypeIsType\n");
          returnValue = true;
          break;
        }
    }
  if (val == 0)
    {
      fprintf(stderr, "required attribute \"val\" missing in FeatureTypeIsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete val;
      val = 0;
    }
  return returnValue;
}

FeatureTypeEnumType * FeatureTypeIsType::getval()
{return val;}

void FeatureTypeIsType::setval(FeatureTypeEnumType * valIn)
{val = valIn;}

/*********************************************************************/

/* class OpenCurvePointSamplingStrategyEnumType

*/

OpenCurvePointSamplingStrategyEnumType::OpenCurvePointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

OpenCurvePointSamplingStrategyEnumType::OpenCurvePointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "POINTS"));
}

OpenCurvePointSamplingStrategyEnumType::~OpenCurvePointSamplingStrategyEnumType() {}

bool OpenCurvePointSamplingStrategyEnumType::OpenCurvePointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "POINTS"));
}

void OpenCurvePointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "OpenCurvePointSamplingStrategyEnumType");
}

void OpenCurvePointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (OpenCurvePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad OpenCurvePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void OpenCurvePointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (OpenCurvePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad OpenCurvePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class PlanePointSamplingStrategyEnumType

*/

PlanePointSamplingStrategyEnumType::PlanePointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

PlanePointSamplingStrategyEnumType::PlanePointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ORTHOGONALGRID") &&
           strcmp(val.c_str(), "POLARGRID") &&
           strcmp(val.c_str(), "SPECIFIEDGRID") &&
           strcmp(val.c_str(), "STRATIFIED") &&
           strcmp(val.c_str(), "SPIRAL") &&
           strcmp(val.c_str(), "SPIDERWEB") &&
           strcmp(val.c_str(), "POINTS"));
}

PlanePointSamplingStrategyEnumType::~PlanePointSamplingStrategyEnumType() {}

bool PlanePointSamplingStrategyEnumType::PlanePointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ORTHOGONALGRID") &&
          strcmp(val.c_str(), "POLARGRID") &&
          strcmp(val.c_str(), "SPECIFIEDGRID") &&
          strcmp(val.c_str(), "STRATIFIED") &&
          strcmp(val.c_str(), "SPIRAL") &&
          strcmp(val.c_str(), "SPIDERWEB") &&
          strcmp(val.c_str(), "POINTS"));
}

void PlanePointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "PlanePointSamplingStrategyEnumType");
}

void PlanePointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (PlanePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad PlanePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void PlanePointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (PlanePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad PlanePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class PointDefinedPointSamplingStrategyEnumType

*/

PointDefinedPointSamplingStrategyEnumType::PointDefinedPointSamplingStrategyEnumType() :
  XmlNMTOKEN()
{
}

PointDefinedPointSamplingStrategyEnumType::PointDefinedPointSamplingStrategyEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "GIVENPOINTS") &&
           strcmp(val.c_str(), "POINTS"));
}

PointDefinedPointSamplingStrategyEnumType::~PointDefinedPointSamplingStrategyEnumType() {}

bool PointDefinedPointSamplingStrategyEnumType::PointDefinedPointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "GIVENPOINTS") &&
          strcmp(val.c_str(), "POINTS"));
}

void PointDefinedPointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "PointDefinedPointSamplingStrategyEnumType");
}

void PointDefinedPointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (PointDefinedPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad PointDefinedPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void PointDefinedPointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (PointDefinedPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad PointDefinedPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class PointPointSamplingStrategyEnumType

*/

PointPointSamplingStrategyEnumType::PointPointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

PointPointSamplingStrategyEnumType::PointPointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "POINTS"));
}

PointPointSamplingStrategyEnumType::~PointPointSamplingStrategyEnumType() {}

bool PointPointSamplingStrategyEnumType::PointPointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "POINTS"));
}

void PointPointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "PointPointSamplingStrategyEnumType");
}

void PointPointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (PointPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad PointPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void PointPointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (PointPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad PointPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class PointSamplingStrategyEnumBaseType

*/

PointSamplingStrategyEnumBaseType::PointSamplingStrategyEnumBaseType() :
  XmlNMTOKEN()
{
}

PointSamplingStrategyEnumBaseType::PointSamplingStrategyEnumBaseType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ORTHOGONALGRID") &&
           strcmp(val.c_str(), "BIRDCAGE") &&
           strcmp(val.c_str(), "POLARGRID") &&
           strcmp(val.c_str(), "SPECIFIEDGRID") &&
           strcmp(val.c_str(), "STRATIFIED") &&
           strcmp(val.c_str(), "HELIX") &&
           strcmp(val.c_str(), "SPIRAL") &&
           strcmp(val.c_str(), "SPIDERWEB") &&
           strcmp(val.c_str(), "POINTS"));
}

PointSamplingStrategyEnumBaseType::~PointSamplingStrategyEnumBaseType() {}

bool PointSamplingStrategyEnumBaseType::PointSamplingStrategyEnumBaseTypeIsBad()
{
  return (strcmp(val.c_str(), "ORTHOGONALGRID") &&
          strcmp(val.c_str(), "BIRDCAGE") &&
          strcmp(val.c_str(), "POLARGRID") &&
          strcmp(val.c_str(), "SPECIFIEDGRID") &&
          strcmp(val.c_str(), "STRATIFIED") &&
          strcmp(val.c_str(), "HELIX") &&
          strcmp(val.c_str(), "SPIRAL") &&
          strcmp(val.c_str(), "SPIDERWEB") &&
          strcmp(val.c_str(), "POINTS"));
}

void PointSamplingStrategyEnumBaseType::printName(FILE * outFile)
{
  fprintf(outFile, "PointSamplingStrategyEnumBaseType");
}

void PointSamplingStrategyEnumBaseType::printSelf(FILE * outFile)
{
  if (PointSamplingStrategyEnumBaseTypeIsBad())
    {
      fprintf(stderr, "bad PointSamplingStrategyEnumBaseType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void PointSamplingStrategyEnumBaseType::oPrintSelf(FILE * outFile)
{
  if (PointSamplingStrategyEnumBaseTypeIsBad())
    {
      fprintf(stderr, "bad PointSamplingStrategyEnumBaseType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class SamplingCategoryIsType

*/

SamplingCategoryIsType::SamplingCategoryIsType() :
  BooleanExpressionBaseType()
{
  val = 0;
}

SamplingCategoryIsType::SamplingCategoryIsType(
 XmlUnsignedInt * valIn) :
  BooleanExpressionBaseType()
{
  val = valIn;
}

SamplingCategoryIsType::~SamplingCategoryIsType()
{
  #ifndef NODESTRUCT
  delete val;
  #endif
}

void SamplingCategoryIsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (val)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "val=\"");
      val->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"val\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool SamplingCategoryIsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "val")
        {
          XmlUnsignedInt * valVal;
          if (val)
            {
              fprintf(stderr, "two values for val in SamplingCategoryIsType\n");
              returnValue = true;
              break;
            }
          valVal = new XmlUnsignedInt(decl->val.c_str());
          if (valVal->bad)
            {
              delete valVal;
              fprintf(stderr, "bad value %s for val in SamplingCategoryIsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            val = valVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SamplingCategoryIsType\n");
          returnValue = true;
          break;
        }
    }
  if (val == 0)
    {
      fprintf(stderr, "required attribute \"val\" missing in SamplingCategoryIsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete val;
      val = 0;
    }
  return returnValue;
}

XmlUnsignedInt * SamplingCategoryIsType::getval()
{return val;}

void SamplingCategoryIsType::setval(XmlUnsignedInt * valIn)
{val = valIn;}

/*********************************************************************/

/* class ShapeClassIsType

*/

ShapeClassIsType::ShapeClassIsType() :
  BooleanExpressionBaseType()
{
  val = 0;
}

ShapeClassIsType::ShapeClassIsType(
 ShapeClassEnumType * valIn) :
  BooleanExpressionBaseType()
{
  val = valIn;
}

ShapeClassIsType::~ShapeClassIsType()
{
  #ifndef NODESTRUCT
  delete val;
  #endif
}

void ShapeClassIsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (val)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "val=\"");
      val->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"val\" missing\n");
      exit(1);
    }
  fprintf(outFile, "/>\n");
}

bool ShapeClassIsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "val")
        {
          ShapeClassEnumType * valVal;
          if (val)
            {
              fprintf(stderr, "two values for val in ShapeClassIsType\n");
              returnValue = true;
              break;
            }
          valVal = new ShapeClassEnumType(decl->val.c_str());
          if (valVal->bad)
            {
              delete valVal;
              fprintf(stderr, "bad value %s for val in ShapeClassIsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            val = valVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ShapeClassIsType\n");
          returnValue = true;
          break;
        }
    }
  if (val == 0)
    {
      fprintf(stderr, "required attribute \"val\" missing in ShapeClassIsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete val;
      val = 0;
    }
  return returnValue;
}

ShapeClassEnumType * ShapeClassIsType::getval()
{return val;}

void ShapeClassIsType::setval(ShapeClassEnumType * valIn)
{val = valIn;}

/*********************************************************************/

/* class SpherePointSamplingStrategyEnumType

*/

SpherePointSamplingStrategyEnumType::SpherePointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

SpherePointSamplingStrategyEnumType::SpherePointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ORTHOGONALGRID") &&
           strcmp(val.c_str(), "SPECIFIEDGRID") &&
           strcmp(val.c_str(), "STRATIFIED") &&
           strcmp(val.c_str(), "HELIX") &&
           strcmp(val.c_str(), "POINTS"));
}

SpherePointSamplingStrategyEnumType::~SpherePointSamplingStrategyEnumType() {}

bool SpherePointSamplingStrategyEnumType::SpherePointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ORTHOGONALGRID") &&
          strcmp(val.c_str(), "SPECIFIEDGRID") &&
          strcmp(val.c_str(), "STRATIFIED") &&
          strcmp(val.c_str(), "HELIX") &&
          strcmp(val.c_str(), "POINTS"));
}

void SpherePointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SpherePointSamplingStrategyEnumType");
}

void SpherePointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (SpherePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad SpherePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SpherePointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (SpherePointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad SpherePointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class SurfaceOfRevolutionPointSamplingStrategyEnumType

*/

SurfaceOfRevolutionPointSamplingStrategyEnumType::SurfaceOfRevolutionPointSamplingStrategyEnumType() :
  PointSamplingStrategyEnumBaseType() {}

SurfaceOfRevolutionPointSamplingStrategyEnumType::SurfaceOfRevolutionPointSamplingStrategyEnumType(
 const char * valIn) :
  PointSamplingStrategyEnumBaseType(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ORTHOGONALGRID") &&
           strcmp(val.c_str(), "BIRDCAGE") &&
           strcmp(val.c_str(), "SPECIFIEDGRID") &&
           strcmp(val.c_str(), "STRATIFIED") &&
           strcmp(val.c_str(), "HELIX") &&
           strcmp(val.c_str(), "POINTS"));
}

SurfaceOfRevolutionPointSamplingStrategyEnumType::~SurfaceOfRevolutionPointSamplingStrategyEnumType() {}

bool SurfaceOfRevolutionPointSamplingStrategyEnumType::SurfaceOfRevolutionPointSamplingStrategyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ORTHOGONALGRID") &&
          strcmp(val.c_str(), "BIRDCAGE") &&
          strcmp(val.c_str(), "SPECIFIEDGRID") &&
          strcmp(val.c_str(), "STRATIFIED") &&
          strcmp(val.c_str(), "HELIX") &&
          strcmp(val.c_str(), "POINTS"));
}

void SurfaceOfRevolutionPointSamplingStrategyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SurfaceOfRevolutionPointSamplingStrategyEnumType");
}

void SurfaceOfRevolutionPointSamplingStrategyEnumType::printSelf(FILE * outFile)
{
  if (SurfaceOfRevolutionPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad SurfaceOfRevolutionPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SurfaceOfRevolutionPointSamplingStrategyEnumType::oPrintSelf(FILE * outFile)
{
  if (SurfaceOfRevolutionPointSamplingStrategyEnumTypeIsBad())
    {
      fprintf(stderr, "bad SurfaceOfRevolutionPointSamplingStrategyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class VariableValueType

*/

VariableValueType::VariableValueType() :
  ArithmeticExpressionBaseType()
{
  VariableName = 0;
}

VariableValueType::VariableValueType(
 XmlIDREF * VariableNameIn) :
  ArithmeticExpressionBaseType()
{
  VariableName = VariableNameIn;
}

VariableValueType::~VariableValueType()
{
  #ifndef NODESTRUCT
  delete VariableName;
  #endif
}

void VariableValueType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<VariableName");
  VariableName->printSelf(outFile);
  fprintf(outFile, "</VariableName>\n");
  doSpaces(-INDENT, outFile);
}

XmlIDREF * VariableValueType::getVariableName()
{return VariableName;}

void VariableValueType::setVariableName(XmlIDREF * VariableNameIn)
{VariableName = VariableNameIn;}

/*********************************************************************/

