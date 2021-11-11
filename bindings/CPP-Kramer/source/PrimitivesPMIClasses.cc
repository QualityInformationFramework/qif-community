/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPMIClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class AxialDifferentialScaleType

*/

AxialDifferentialScaleType::AxialDifferentialScaleType()
{
  XScaleFactor = 0;
  XaxisDirection = 0;
  YScaleFactor = 0;
  YaxisDirection = 0;
  ZScaleFactor = 0;
  ZaxisDirection = 0;
}

AxialDifferentialScaleType::AxialDifferentialScaleType(
 XmlDecimal * XScaleFactorIn,
 UnitVectorType * XaxisDirectionIn,
 XmlDecimal * YScaleFactorIn,
 UnitVectorType * YaxisDirectionIn,
 XmlDecimal * ZScaleFactorIn,
 UnitVectorType * ZaxisDirectionIn)
{
  XScaleFactor = XScaleFactorIn;
  XaxisDirection = XaxisDirectionIn;
  YScaleFactor = YScaleFactorIn;
  YaxisDirection = YaxisDirectionIn;
  ZScaleFactor = ZScaleFactorIn;
  ZaxisDirection = ZaxisDirectionIn;
}

AxialDifferentialScaleType::~AxialDifferentialScaleType()
{
  #ifndef NODESTRUCT
  delete XScaleFactor;
  delete XaxisDirection;
  delete YScaleFactor;
  delete YaxisDirection;
  delete ZScaleFactor;
  delete ZaxisDirection;
  #endif
}

void AxialDifferentialScaleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<XScaleFactor");
  XScaleFactor->printSelf(outFile);
  fprintf(outFile, "</XScaleFactor>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<XaxisDirection");
  XaxisDirection->printSelf(outFile);
  fprintf(outFile, "</XaxisDirection>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<YScaleFactor");
  YScaleFactor->printSelf(outFile);
  fprintf(outFile, "</YScaleFactor>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<YaxisDirection");
  YaxisDirection->printSelf(outFile);
  fprintf(outFile, "</YaxisDirection>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ZScaleFactor");
  ZScaleFactor->printSelf(outFile);
  fprintf(outFile, "</ZScaleFactor>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ZaxisDirection");
  ZaxisDirection->printSelf(outFile);
  fprintf(outFile, "</ZaxisDirection>\n");
  doSpaces(-INDENT, outFile);
}

XmlDecimal * AxialDifferentialScaleType::getXScaleFactor()
{return XScaleFactor;}

void AxialDifferentialScaleType::setXScaleFactor(XmlDecimal * XScaleFactorIn)
{XScaleFactor = XScaleFactorIn;}

UnitVectorType * AxialDifferentialScaleType::getXaxisDirection()
{return XaxisDirection;}

void AxialDifferentialScaleType::setXaxisDirection(UnitVectorType * XaxisDirectionIn)
{XaxisDirection = XaxisDirectionIn;}

XmlDecimal * AxialDifferentialScaleType::getYScaleFactor()
{return YScaleFactor;}

void AxialDifferentialScaleType::setYScaleFactor(XmlDecimal * YScaleFactorIn)
{YScaleFactor = YScaleFactorIn;}

UnitVectorType * AxialDifferentialScaleType::getYaxisDirection()
{return YaxisDirection;}

void AxialDifferentialScaleType::setYaxisDirection(UnitVectorType * YaxisDirectionIn)
{YaxisDirection = YaxisDirectionIn;}

XmlDecimal * AxialDifferentialScaleType::getZScaleFactor()
{return ZScaleFactor;}

void AxialDifferentialScaleType::setZScaleFactor(XmlDecimal * ZScaleFactorIn)
{ZScaleFactor = ZScaleFactorIn;}

UnitVectorType * AxialDifferentialScaleType::getZaxisDirection()
{return ZaxisDirection;}

void AxialDifferentialScaleType::setZaxisDirection(UnitVectorType * ZaxisDirectionIn)
{ZaxisDirection = ZaxisDirectionIn;}

/* ***************************************************************** */

/* class BottomEnumType

*/

BottomEnumType::BottomEnumType() :
  XmlNMTOKEN()
{
}

BottomEnumType::BottomEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "BLIND") &&
           strcmp(val.c_str(), "THROUGH") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

BottomEnumType::~BottomEnumType() {}

bool BottomEnumType::BottomEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "BLIND") &&
          strcmp(val.c_str(), "THROUGH") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void BottomEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "BottomEnumType");
}

void BottomEnumType::printSelf(FILE * outFile)
{
  if (BottomEnumTypeIsBad())
    {
      fprintf(stderr, "bad BottomEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void BottomEnumType::oPrintSelf(FILE * outFile)
{
  if (BottomEnumTypeIsBad())
    {
      fprintf(stderr, "bad BottomEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class BottomType

*/

BottomType::BottomType()
{
  BottomTypePair = 0;
}

BottomType::BottomType(
 BottomTypeChoicePair * BottomTypePairIn)
{
  BottomTypePair = BottomTypePairIn;
}

BottomType::~BottomType()
{
  #ifndef NODESTRUCT
  delete BottomTypePair;
  #endif
}

void BottomType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  BottomTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

BottomTypeChoicePair * BottomType::getBottomTypePair()
{return BottomTypePair;}

void BottomType::setBottomTypePair(BottomTypeChoicePair * BottomTypePairIn)
{BottomTypePair = BottomTypePairIn;}

/* ***************************************************************** */

/* class BottomTypeChoicePair

*/

BottomTypeChoicePair::BottomTypeChoicePair() {}

BottomTypeChoicePair::BottomTypeChoicePair(
 whichOne BottomTypeTypeIn,
 BottomTypeVal BottomTypeValueIn)
{
  BottomTypeType = BottomTypeTypeIn;
  BottomTypeValue = BottomTypeValueIn;
}

BottomTypeChoicePair::~BottomTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (BottomTypeType == BottomEnumE)
    delete BottomTypeValue.BottomEnum;
  else if (BottomTypeType == OtherBottomE)
    delete BottomTypeValue.OtherBottom;
  #endif
}

void BottomTypeChoicePair::printSelf(FILE * outFile)
{
  if (BottomTypeType == BottomEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BottomEnum");
      BottomTypeValue.BottomEnum->printSelf(outFile);
      fprintf(outFile, "</BottomEnum>\n");
    }
  else if (BottomTypeType == OtherBottomE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherBottom");
      BottomTypeValue.OtherBottom->printSelf(outFile);
      fprintf(outFile, "</OtherBottom>\n");
    }
}

/* ***************************************************************** */

/* class BoundingBoxType

*/

BoundingBoxType::BoundingBoxType()
{
  Length = 0;
  Width = 0;
  Height = 0;
}

BoundingBoxType::BoundingBoxType(
 LinearValueType * LengthIn,
 LinearValueType * WidthIn,
 LinearValueType * HeightIn)
{
  Length = LengthIn;
  Width = WidthIn;
  Height = HeightIn;
}

BoundingBoxType::~BoundingBoxType()
{
  #ifndef NODESTRUCT
  delete Length;
  delete Width;
  delete Height;
  #endif
}

void BoundingBoxType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Length");
  Length->printSelf(outFile);
  fprintf(outFile, "</Length>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Width");
  Width->printSelf(outFile);
  fprintf(outFile, "</Width>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Height");
  Height->printSelf(outFile);
  fprintf(outFile, "</Height>\n");
  doSpaces(-INDENT, outFile);
}

LinearValueType * BoundingBoxType::getLength()
{return Length;}

void BoundingBoxType::setLength(LinearValueType * LengthIn)
{Length = LengthIn;}

LinearValueType * BoundingBoxType::getWidth()
{return Width;}

void BoundingBoxType::setWidth(LinearValueType * WidthIn)
{Width = WidthIn;}

LinearValueType * BoundingBoxType::getHeight()
{return Height;}

void BoundingBoxType::setHeight(LinearValueType * HeightIn)
{Height = HeightIn;}

/* ***************************************************************** */

/* class CircleType

*/

CircleType::CircleType()
{
  CenterPoint = 0;
  Diameter = 0;
  Normal = 0;
}

CircleType::CircleType(
 PointType * CenterPointIn,
 LinearValueType * DiameterIn,
 UnitVectorType * NormalIn)
{
  CenterPoint = CenterPointIn;
  Diameter = DiameterIn;
  Normal = NormalIn;
}

CircleType::~CircleType()
{
  #ifndef NODESTRUCT
  delete CenterPoint;
  delete Diameter;
  delete Normal;
  #endif
}

void CircleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<CenterPoint");
  CenterPoint->printSelf(outFile);
  fprintf(outFile, "</CenterPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Normal");
  Normal->printSelf(outFile);
  fprintf(outFile, "</Normal>\n");
  doSpaces(-INDENT, outFile);
}

PointType * CircleType::getCenterPoint()
{return CenterPoint;}

void CircleType::setCenterPoint(PointType * CenterPointIn)
{CenterPoint = CenterPointIn;}

LinearValueType * CircleType::getDiameter()
{return Diameter;}

void CircleType::setDiameter(LinearValueType * DiameterIn)
{Diameter = DiameterIn;}

UnitVectorType * CircleType::getNormal()
{return Normal;}

void CircleType::setNormal(UnitVectorType * NormalIn)
{Normal = NormalIn;}

/* ***************************************************************** */

/* class CircularUnitAreaType

*/

CircularUnitAreaType::CircularUnitAreaType()
{
  CircularUnitAreaDiameter = 0;
}

CircularUnitAreaType::CircularUnitAreaType(
 LinearValueType * CircularUnitAreaDiameterIn)
{
  CircularUnitAreaDiameter = CircularUnitAreaDiameterIn;
}

CircularUnitAreaType::~CircularUnitAreaType()
{
  #ifndef NODESTRUCT
  delete CircularUnitAreaDiameter;
  #endif
}

void CircularUnitAreaType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<CircularUnitAreaDiameter");
  CircularUnitAreaDiameter->printSelf(outFile);
  fprintf(outFile, "</CircularUnitAreaDiameter>\n");
  doSpaces(-INDENT, outFile);
}

LinearValueType * CircularUnitAreaType::getCircularUnitAreaDiameter()
{return CircularUnitAreaDiameter;}

void CircularUnitAreaType::setCircularUnitAreaDiameter(LinearValueType * CircularUnitAreaDiameterIn)
{CircularUnitAreaDiameter = CircularUnitAreaDiameterIn;}

/* ***************************************************************** */

/* class CoordinateEnumType

*/

CoordinateEnumType::CoordinateEnumType() :
  XmlNMTOKEN()
{
}

CoordinateEnumType::CoordinateEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "CARTESIAN_2D") &&
           strcmp(val.c_str(), "POLAR_2D") &&
           strcmp(val.c_str(), "CARTESIAN_3D") &&
           strcmp(val.c_str(), "CYLINDRICAL_3D") &&
           strcmp(val.c_str(), "SPHERICAL_3D") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

CoordinateEnumType::~CoordinateEnumType() {}

bool CoordinateEnumType::CoordinateEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "CARTESIAN_2D") &&
          strcmp(val.c_str(), "POLAR_2D") &&
          strcmp(val.c_str(), "CARTESIAN_3D") &&
          strcmp(val.c_str(), "CYLINDRICAL_3D") &&
          strcmp(val.c_str(), "SPHERICAL_3D") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void CoordinateEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "CoordinateEnumType");
}

void CoordinateEnumType::printSelf(FILE * outFile)
{
  if (CoordinateEnumTypeIsBad())
    {
      fprintf(stderr, "bad CoordinateEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void CoordinateEnumType::oPrintSelf(FILE * outFile)
{
  if (CoordinateEnumTypeIsBad())
    {
      fprintf(stderr, "bad CoordinateEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class CylinderType

*/

CylinderType::CylinderType()
{
  CenterPoint = 0;
  Diameter = 0;
  Axis = 0;
  Length = 0;
}

CylinderType::CylinderType(
 PointType * CenterPointIn,
 LinearValueType * DiameterIn,
 UnitVectorType * AxisIn,
 LinearValueType * LengthIn)
{
  CenterPoint = CenterPointIn;
  Diameter = DiameterIn;
  Axis = AxisIn;
  Length = LengthIn;
}

CylinderType::~CylinderType()
{
  #ifndef NODESTRUCT
  delete CenterPoint;
  delete Diameter;
  delete Axis;
  delete Length;
  #endif
}

void CylinderType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<CenterPoint");
  CenterPoint->printSelf(outFile);
  fprintf(outFile, "</CenterPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Axis");
  Axis->printSelf(outFile);
  fprintf(outFile, "</Axis>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Length");
  Length->printSelf(outFile);
  fprintf(outFile, "</Length>\n");
  doSpaces(-INDENT, outFile);
}

PointType * CylinderType::getCenterPoint()
{return CenterPoint;}

void CylinderType::setCenterPoint(PointType * CenterPointIn)
{CenterPoint = CenterPointIn;}

LinearValueType * CylinderType::getDiameter()
{return Diameter;}

void CylinderType::setDiameter(LinearValueType * DiameterIn)
{Diameter = DiameterIn;}

UnitVectorType * CylinderType::getAxis()
{return Axis;}

void CylinderType::setAxis(UnitVectorType * AxisIn)
{Axis = AxisIn;}

LinearValueType * CylinderType::getLength()
{return Length;}

void CylinderType::setLength(LinearValueType * LengthIn)
{Length = LengthIn;}

/* ***************************************************************** */

/* class DigitalModelFormatEnumType

*/

DigitalModelFormatEnumType::DigitalModelFormatEnumType() :
  XmlNMTOKEN()
{
}

DigitalModelFormatEnumType::DigitalModelFormatEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "STEPAP203") &&
           strcmp(val.c_str(), "STEPAP203E2") &&
           strcmp(val.c_str(), "STEPAP214") &&
           strcmp(val.c_str(), "STEPAP242") &&
           strcmp(val.c_str(), "JTOPEN") &&
           strcmp(val.c_str(), "RPC") &&
           strcmp(val.c_str(), "PDPMI") &&
           strcmp(val.c_str(), "ACIS") &&
           strcmp(val.c_str(), "PARASOLID") &&
           strcmp(val.c_str(), "AUTODESK") &&
           strcmp(val.c_str(), "PTC") &&
           strcmp(val.c_str(), "NX") &&
           strcmp(val.c_str(), "SOLIDWORKS") &&
           strcmp(val.c_str(), "CATIA") &&
           strcmp(val.c_str(), "NOTDEFINED"));
}

DigitalModelFormatEnumType::~DigitalModelFormatEnumType() {}

bool DigitalModelFormatEnumType::DigitalModelFormatEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "STEPAP203") &&
          strcmp(val.c_str(), "STEPAP203E2") &&
          strcmp(val.c_str(), "STEPAP214") &&
          strcmp(val.c_str(), "STEPAP242") &&
          strcmp(val.c_str(), "JTOPEN") &&
          strcmp(val.c_str(), "RPC") &&
          strcmp(val.c_str(), "PDPMI") &&
          strcmp(val.c_str(), "ACIS") &&
          strcmp(val.c_str(), "PARASOLID") &&
          strcmp(val.c_str(), "AUTODESK") &&
          strcmp(val.c_str(), "PTC") &&
          strcmp(val.c_str(), "NX") &&
          strcmp(val.c_str(), "SOLIDWORKS") &&
          strcmp(val.c_str(), "CATIA") &&
          strcmp(val.c_str(), "NOTDEFINED"));
}

void DigitalModelFormatEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DigitalModelFormatEnumType");
}

void DigitalModelFormatEnumType::printSelf(FILE * outFile)
{
  if (DigitalModelFormatEnumTypeIsBad())
    {
      fprintf(stderr, "bad DigitalModelFormatEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DigitalModelFormatEnumType::oPrintSelf(FILE * outFile)
{
  if (DigitalModelFormatEnumTypeIsBad())
    {
      fprintf(stderr, "bad DigitalModelFormatEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class DigitalModelFormatType

*/

DigitalModelFormatType::DigitalModelFormatType()
{
  DigitalModelFormatTypePair = 0;
}

DigitalModelFormatType::DigitalModelFormatType(
 DigitalModelFormatTypeChoicePair * DigitalModelFormatTypePairIn)
{
  DigitalModelFormatTypePair = DigitalModelFormatTypePairIn;
}

DigitalModelFormatType::~DigitalModelFormatType()
{
  #ifndef NODESTRUCT
  delete DigitalModelFormatTypePair;
  #endif
}

void DigitalModelFormatType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  DigitalModelFormatTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

DigitalModelFormatTypeChoicePair * DigitalModelFormatType::getDigitalModelFormatTypePair()
{return DigitalModelFormatTypePair;}

void DigitalModelFormatType::setDigitalModelFormatTypePair(DigitalModelFormatTypeChoicePair * DigitalModelFormatTypePairIn)
{DigitalModelFormatTypePair = DigitalModelFormatTypePairIn;}

/* ***************************************************************** */

/* class DigitalModelFormatTypeChoicePair

*/

DigitalModelFormatTypeChoicePair::DigitalModelFormatTypeChoicePair() {}

DigitalModelFormatTypeChoicePair::DigitalModelFormatTypeChoicePair(
 whichOne DigitalModelFormatTypeTypeIn,
 DigitalModelFormatTypeVal DigitalModelFormatTypeValueIn)
{
  DigitalModelFormatTypeType = DigitalModelFormatTypeTypeIn;
  DigitalModelFormatTypeValue = DigitalModelFormatTypeValueIn;
}

DigitalModelFormatTypeChoicePair::~DigitalModelFormatTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (DigitalModelFormatTypeType == DigitalModelFormatEnumE)
    delete DigitalModelFormatTypeValue.DigitalModelFormatEnum;
  else if (DigitalModelFormatTypeType == OtherDigitalModelFormatE)
    delete DigitalModelFormatTypeValue.OtherDigitalModelFormat;
  #endif
}

void DigitalModelFormatTypeChoicePair::printSelf(FILE * outFile)
{
  if (DigitalModelFormatTypeType == DigitalModelFormatEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DigitalModelFormatEnum");
      DigitalModelFormatTypeValue.DigitalModelFormatEnum->printSelf(outFile);
      fprintf(outFile, "</DigitalModelFormatEnum>\n");
    }
  else if (DigitalModelFormatTypeType == OtherDigitalModelFormatE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherDigitalModelFormat");
      DigitalModelFormatTypeValue.OtherDigitalModelFormat->printSelf(outFile);
      fprintf(outFile, "</OtherDigitalModelFormat>\n");
    }
}

/* ***************************************************************** */

/* class DimensionCountEnumType

*/

DimensionCountEnumType::DimensionCountEnumType() :
  XmlNMTOKEN()
{
}

DimensionCountEnumType::DimensionCountEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "TWODIMENSIONAL") &&
           strcmp(val.c_str(), "THREEDIMENSIONAL"));
}

DimensionCountEnumType::~DimensionCountEnumType() {}

bool DimensionCountEnumType::DimensionCountEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "TWODIMENSIONAL") &&
          strcmp(val.c_str(), "THREEDIMENSIONAL"));
}

void DimensionCountEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "DimensionCountEnumType");
}

void DimensionCountEnumType::printSelf(FILE * outFile)
{
  if (DimensionCountEnumTypeIsBad())
    {
      fprintf(stderr, "bad DimensionCountEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void DimensionCountEnumType::oPrintSelf(FILE * outFile)
{
  if (DimensionCountEnumTypeIsBad())
    {
      fprintf(stderr, "bad DimensionCountEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class EndRadiusType

*/

EndRadiusType::EndRadiusType()
{
  EndRadius = 0;
  Expanded = 0;
}

EndRadiusType::EndRadiusType(
 LinearValueType * EndRadiusIn,
 XmlBoolean * ExpandedIn)
{
  EndRadius = EndRadiusIn;
  Expanded = ExpandedIn;
}

EndRadiusType::~EndRadiusType()
{
  #ifndef NODESTRUCT
  delete EndRadius;
  delete Expanded;
  #endif
}

void EndRadiusType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<EndRadius");
  EndRadius->printSelf(outFile);
  fprintf(outFile, "</EndRadius>\n");
  if (Expanded)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Expanded");
      Expanded->printSelf(outFile);
      fprintf(outFile, "</Expanded>\n");
    }
  doSpaces(-INDENT, outFile);
}

LinearValueType * EndRadiusType::getEndRadius()
{return EndRadius;}

void EndRadiusType::setEndRadius(LinearValueType * EndRadiusIn)
{EndRadius = EndRadiusIn;}

XmlBoolean * EndRadiusType::getExpanded()
{return Expanded;}

void EndRadiusType::setExpanded(XmlBoolean * ExpandedIn)
{Expanded = ExpandedIn;}

/* ***************************************************************** */

/* class InternalExternalEnumType

*/

InternalExternalEnumType::InternalExternalEnumType() :
  XmlNMTOKEN()
{
}

InternalExternalEnumType::InternalExternalEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "INTERNAL") &&
           strcmp(val.c_str(), "EXTERNAL") &&
           strcmp(val.c_str(), "NOT_APPLICABLE"));
}

InternalExternalEnumType::~InternalExternalEnumType() {}

bool InternalExternalEnumType::InternalExternalEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "INTERNAL") &&
          strcmp(val.c_str(), "EXTERNAL") &&
          strcmp(val.c_str(), "NOT_APPLICABLE"));
}

void InternalExternalEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "InternalExternalEnumType");
}

void InternalExternalEnumType::printSelf(FILE * outFile)
{
  if (InternalExternalEnumTypeIsBad())
    {
      fprintf(stderr, "bad InternalExternalEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void InternalExternalEnumType::oPrintSelf(FILE * outFile)
{
  if (InternalExternalEnumTypeIsBad())
    {
      fprintf(stderr, "bad InternalExternalEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ListAccumulatedStatsValuesListType

*/

ListAccumulatedStatsValuesListType::ListAccumulatedStatsValuesListType()
{
}

ListAccumulatedStatsValuesListType::ListAccumulatedStatsValuesListType(
 StatsValuesEnumType * aStatsValuesEnumType)
{
  push_back(aStatsValuesEnumType);
}

ListAccumulatedStatsValuesListType::ListAccumulatedStatsValuesListType(
 const char * valueString)
{
  StatsValuesEnumType * val;
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
          fprintf(stderr, "%s is not a valid ListAccumulatedStatsValuesListType\n",
                  valueString);
          bad = true;
          break;
        }
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new StatsValuesEnumType(buffer);
      if (val->bad)
        {
          fprintf(stderr, "%s is not a valid ListAccumulatedStatsValuesListType\n",
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

ListAccumulatedStatsValuesListType::~ListAccumulatedStatsValuesListType()
{
  #ifndef NODESTRUCT
  std::list<StatsValuesEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ListAccumulatedStatsValuesListType::printName(FILE * outFile)
{
  fprintf(outFile, "ListAccumulatedStatsValuesListType");
}

void ListAccumulatedStatsValuesListType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">");
  oPrintSelf(outFile);
}

void ListAccumulatedStatsValuesListType::oPrintSelf(FILE * outFile)
{
  std::list<StatsValuesEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->oPrintSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    } 
}

/* ***************************************************************** */

/* class ListAccumulatedStatsValuesType

*/

ListAccumulatedStatsValuesType::ListAccumulatedStatsValuesType() :
  StatsWithReferenceBaseType()
{
  Stats = 0;
}

ListAccumulatedStatsValuesType::ListAccumulatedStatsValuesType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 ListAccumulatedStatsValuesListType * StatsIn) :
  StatsWithReferenceBaseType(
    StatsWithRefere_1007In)
{
  Stats = StatsIn;
}

ListAccumulatedStatsValuesType::~ListAccumulatedStatsValuesType()
{
  #ifndef NODESTRUCT
  delete Stats;
  #endif
}

void ListAccumulatedStatsValuesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Stats");
  Stats->printSelf(outFile);
  fprintf(outFile, "</Stats>\n");
  doSpaces(-INDENT, outFile);
}

ListAccumulatedStatsValuesListType * ListAccumulatedStatsValuesType::getStats()
{return Stats;}

void ListAccumulatedStatsValuesType::setStats(ListAccumulatedStatsValuesListType * StatsIn)
{Stats = StatsIn;}

/* ***************************************************************** */

/* class ListAccumulatedStatsValuesTypeLisd

*/

ListAccumulatedStatsValuesTypeLisd::ListAccumulatedStatsValuesTypeLisd() {}

ListAccumulatedStatsValuesTypeLisd::ListAccumulatedStatsValuesTypeLisd(ListAccumulatedStatsValuesType * aListAccumulatedStatsValuesType)
{
  push_back(aListAccumulatedStatsValuesType);
}

ListAccumulatedStatsValuesTypeLisd::~ListAccumulatedStatsValuesTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ListAccumulatedStatsValuesType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ListAccumulatedStatsValuesTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ListSubgroupStatsValuesListType

*/

ListSubgroupStatsValuesListType::ListSubgroupStatsValuesListType()
{
}

ListSubgroupStatsValuesListType::ListSubgroupStatsValuesListType(
 SubgroupStatsValuesEnumType * aSubgroupStatsValuesEnumType)
{
  push_back(aSubgroupStatsValuesEnumType);
}

ListSubgroupStatsValuesListType::ListSubgroupStatsValuesListType(
 const char * valueString)
{
  SubgroupStatsValuesEnumType * val;
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
          fprintf(stderr, "%s is not a valid ListSubgroupStatsValuesListType\n",
                  valueString);
          bad = true;
          break;
        }
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new SubgroupStatsValuesEnumType(buffer);
      if (val->bad)
        {
          fprintf(stderr, "%s is not a valid ListSubgroupStatsValuesListType\n",
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

ListSubgroupStatsValuesListType::~ListSubgroupStatsValuesListType()
{
  #ifndef NODESTRUCT
  std::list<SubgroupStatsValuesEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ListSubgroupStatsValuesListType::printName(FILE * outFile)
{
  fprintf(outFile, "ListSubgroupStatsValuesListType");
}

void ListSubgroupStatsValuesListType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">");
  oPrintSelf(outFile);
}

void ListSubgroupStatsValuesListType::oPrintSelf(FILE * outFile)
{
  std::list<SubgroupStatsValuesEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->oPrintSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    } 
}

/* ***************************************************************** */

/* class ListSubgroupStatsValuesType

*/

ListSubgroupStatsValuesType::ListSubgroupStatsValuesType() :
  StatsWithReferenceBaseType()
{
  Stats = 0;
}

ListSubgroupStatsValuesType::ListSubgroupStatsValuesType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 ListSubgroupStatsValuesListType * StatsIn) :
  StatsWithReferenceBaseType(
    StatsWithRefere_1007In)
{
  Stats = StatsIn;
}

ListSubgroupStatsValuesType::~ListSubgroupStatsValuesType()
{
  #ifndef NODESTRUCT
  delete Stats;
  #endif
}

void ListSubgroupStatsValuesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Stats");
  Stats->printSelf(outFile);
  fprintf(outFile, "</Stats>\n");
  doSpaces(-INDENT, outFile);
}

ListSubgroupStatsValuesListType * ListSubgroupStatsValuesType::getStats()
{return Stats;}

void ListSubgroupStatsValuesType::setStats(ListSubgroupStatsValuesListType * StatsIn)
{Stats = StatsIn;}

/* ***************************************************************** */

/* class ListSubgroupStatsValuesTypeLisd

*/

ListSubgroupStatsValuesTypeLisd::ListSubgroupStatsValuesTypeLisd() {}

ListSubgroupStatsValuesTypeLisd::ListSubgroupStatsValuesTypeLisd(ListSubgroupStatsValuesType * aListSubgroupStatsValuesType)
{
  push_back(aListSubgroupStatsValuesType);
}

ListSubgroupStatsValuesTypeLisd::~ListSubgroupStatsValuesTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ListSubgroupStatsValuesType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ListSubgroupStatsValuesTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ListSummaryStatsValuesListType

*/

ListSummaryStatsValuesListType::ListSummaryStatsValuesListType()
{
}

ListSummaryStatsValuesListType::ListSummaryStatsValuesListType(
 StatsValuesEnumType * aStatsValuesEnumType)
{
  push_back(aStatsValuesEnumType);
}

ListSummaryStatsValuesListType::ListSummaryStatsValuesListType(
 const char * valueString)
{
  StatsValuesEnumType * val;
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
          fprintf(stderr, "%s is not a valid ListSummaryStatsValuesListType\n",
                  valueString);
          bad = true;
          break;
        }
      strncpy(buffer, valueString + start, 199);
      buffer[n - start] = 0;
      val = new StatsValuesEnumType(buffer);
      if (val->bad)
        {
          fprintf(stderr, "%s is not a valid ListSummaryStatsValuesListType\n",
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

ListSummaryStatsValuesListType::~ListSummaryStatsValuesListType()
{
  #ifndef NODESTRUCT
  std::list<StatsValuesEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ListSummaryStatsValuesListType::printName(FILE * outFile)
{
  fprintf(outFile, "ListSummaryStatsValuesListType");
}

void ListSummaryStatsValuesListType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">");
  oPrintSelf(outFile);
}

void ListSummaryStatsValuesListType::oPrintSelf(FILE * outFile)
{
  std::list<StatsValuesEnumType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->oPrintSelf(outFile);
      if ((*iter) != back())
        fprintf(outFile, " ");
    } 
}

/* ***************************************************************** */

/* class ListSummaryStatsValuesType

*/

ListSummaryStatsValuesType::ListSummaryStatsValuesType() :
  StatsWithReferenceBaseType()
{
  Stats = 0;
}

ListSummaryStatsValuesType::ListSummaryStatsValuesType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 ListSummaryStatsValuesListType * StatsIn) :
  StatsWithReferenceBaseType(
    StatsWithRefere_1007In)
{
  Stats = StatsIn;
}

ListSummaryStatsValuesType::~ListSummaryStatsValuesType()
{
  #ifndef NODESTRUCT
  delete Stats;
  #endif
}

void ListSummaryStatsValuesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Stats");
  Stats->printSelf(outFile);
  fprintf(outFile, "</Stats>\n");
  doSpaces(-INDENT, outFile);
}

ListSummaryStatsValuesListType * ListSummaryStatsValuesType::getStats()
{return Stats;}

void ListSummaryStatsValuesType::setStats(ListSummaryStatsValuesListType * StatsIn)
{Stats = StatsIn;}

/* ***************************************************************** */

/* class ManufacturingMethodEnumType

*/

ManufacturingMethodEnumType::ManufacturingMethodEnumType() :
  XmlNMTOKEN()
{
}

ManufacturingMethodEnumType::ManufacturingMethodEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ADDITIVE") &&
           strcmp(val.c_str(), "CASTING") &&
           strcmp(val.c_str(), "COMPOSITE") &&
           strcmp(val.c_str(), "FABRICATION") &&
           strcmp(val.c_str(), "FORMING") &&
           strcmp(val.c_str(), "JOINING") &&
           strcmp(val.c_str(), "MACHINING") &&
           strcmp(val.c_str(), "MOLDING"));
}

ManufacturingMethodEnumType::~ManufacturingMethodEnumType() {}

bool ManufacturingMethodEnumType::ManufacturingMethodEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ADDITIVE") &&
          strcmp(val.c_str(), "CASTING") &&
          strcmp(val.c_str(), "COMPOSITE") &&
          strcmp(val.c_str(), "FABRICATION") &&
          strcmp(val.c_str(), "FORMING") &&
          strcmp(val.c_str(), "JOINING") &&
          strcmp(val.c_str(), "MACHINING") &&
          strcmp(val.c_str(), "MOLDING"));
}

void ManufacturingMethodEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ManufacturingMethodEnumType");
}

void ManufacturingMethodEnumType::printSelf(FILE * outFile)
{
  if (ManufacturingMethodEnumTypeIsBad())
    {
      fprintf(stderr, "bad ManufacturingMethodEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ManufacturingMethodEnumType::oPrintSelf(FILE * outFile)
{
  if (ManufacturingMethodEnumTypeIsBad())
    {
      fprintf(stderr, "bad ManufacturingMethodEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ManufacturingMethodType

*/

ManufacturingMethodType::ManufacturingMethodType()
{
  ManufacturingMethodTypePair = 0;
}

ManufacturingMethodType::ManufacturingMethodType(
 ManufacturingMethodTypeChoicePair * ManufacturingMethodTypePairIn)
{
  ManufacturingMethodTypePair = ManufacturingMethodTypePairIn;
}

ManufacturingMethodType::~ManufacturingMethodType()
{
  #ifndef NODESTRUCT
  delete ManufacturingMethodTypePair;
  #endif
}

void ManufacturingMethodType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ManufacturingMethodTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ManufacturingMethodTypeChoicePair * ManufacturingMethodType::getManufacturingMethodTypePair()
{return ManufacturingMethodTypePair;}

void ManufacturingMethodType::setManufacturingMethodTypePair(ManufacturingMethodTypeChoicePair * ManufacturingMethodTypePairIn)
{ManufacturingMethodTypePair = ManufacturingMethodTypePairIn;}

/* ***************************************************************** */

/* class ManufacturingMethodTypeChoicePair

*/

ManufacturingMethodTypeChoicePair::ManufacturingMethodTypeChoicePair() {}

ManufacturingMethodTypeChoicePair::ManufacturingMethodTypeChoicePair(
 whichOne ManufacturingMethodTypeTypeIn,
 ManufacturingMethodTypeVal ManufacturingMethodTypeValueIn)
{
  ManufacturingMethodTypeType = ManufacturingMethodTypeTypeIn;
  ManufacturingMethodTypeValue = ManufacturingMethodTypeValueIn;
}

ManufacturingMethodTypeChoicePair::~ManufacturingMethodTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ManufacturingMethodTypeType == ManufacturingMethodEnumE)
    delete ManufacturingMethodTypeValue.ManufacturingMethodEnum;
  else if (ManufacturingMethodTypeType == OtherManufacturingMethodE)
    delete ManufacturingMethodTypeValue.OtherManufacturingMethod;
  #endif
}

void ManufacturingMethodTypeChoicePair::printSelf(FILE * outFile)
{
  if (ManufacturingMethodTypeType == ManufacturingMethodEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ManufacturingMethodEnum");
      ManufacturingMethodTypeValue.ManufacturingMethodEnum->printSelf(outFile);
      fprintf(outFile, "</ManufacturingMethodEnum>\n");
    }
  else if (ManufacturingMethodTypeType == OtherManufacturingMethodE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherManufacturingMethod");
      ManufacturingMethodTypeValue.OtherManufacturingMethod->printSelf(outFile);
      fprintf(outFile, "</OtherManufacturingMethod>\n");
    }
}

/* ***************************************************************** */

/* class MeasuredAxisType

*/

MeasuredAxisType::MeasuredAxisType()
{
  AxisPoint = 0;
  Direction = 0;
}

MeasuredAxisType::MeasuredAxisType(
 MeasuredPointType * AxisPointIn,
 MeasuredUnitVectorType * DirectionIn)
{
  AxisPoint = AxisPointIn;
  Direction = DirectionIn;
}

MeasuredAxisType::~MeasuredAxisType()
{
  #ifndef NODESTRUCT
  delete AxisPoint;
  delete Direction;
  #endif
}

void MeasuredAxisType::printSelf(FILE * outFile)
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

MeasuredPointType * MeasuredAxisType::getAxisPoint()
{return AxisPoint;}

void MeasuredAxisType::setAxisPoint(MeasuredPointType * AxisPointIn)
{AxisPoint = AxisPointIn;}

MeasuredUnitVectorType * MeasuredAxisType::getDirection()
{return Direction;}

void MeasuredAxisType::setDirection(MeasuredUnitVectorType * DirectionIn)
{Direction = DirectionIn;}

/* ***************************************************************** */

/* class MeasuredEndRadiusType

*/

MeasuredEndRadiusType::MeasuredEndRadiusType()
{
  EndRadius = 0;
  Expanded = 0;
}

MeasuredEndRadiusType::MeasuredEndRadiusType(
 MeasuredLinearValueType * EndRadiusIn,
 XmlBoolean * ExpandedIn)
{
  EndRadius = EndRadiusIn;
  Expanded = ExpandedIn;
}

MeasuredEndRadiusType::~MeasuredEndRadiusType()
{
  #ifndef NODESTRUCT
  delete EndRadius;
  delete Expanded;
  #endif
}

void MeasuredEndRadiusType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<EndRadius");
  EndRadius->printSelf(outFile);
  fprintf(outFile, "</EndRadius>\n");
  if (Expanded)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Expanded");
      Expanded->printSelf(outFile);
      fprintf(outFile, "</Expanded>\n");
    }
  doSpaces(-INDENT, outFile);
}

MeasuredLinearValueType * MeasuredEndRadiusType::getEndRadius()
{return EndRadius;}

void MeasuredEndRadiusType::setEndRadius(MeasuredLinearValueType * EndRadiusIn)
{EndRadius = EndRadiusIn;}

XmlBoolean * MeasuredEndRadiusType::getExpanded()
{return Expanded;}

void MeasuredEndRadiusType::setExpanded(XmlBoolean * ExpandedIn)
{Expanded = ExpandedIn;}

/* ***************************************************************** */

/* class MeasuredPlaneType

*/

MeasuredPlaneType::MeasuredPlaneType()
{
  Point = 0;
  Normal = 0;
}

MeasuredPlaneType::MeasuredPlaneType(
 MeasuredPointType * PointIn,
 MeasuredUnitVectorType * NormalIn)
{
  Point = PointIn;
  Normal = NormalIn;
}

MeasuredPlaneType::~MeasuredPlaneType()
{
  #ifndef NODESTRUCT
  delete Point;
  delete Normal;
  #endif
}

void MeasuredPlaneType::printSelf(FILE * outFile)
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

MeasuredPointType * MeasuredPlaneType::getPoint()
{return Point;}

void MeasuredPlaneType::setPoint(MeasuredPointType * PointIn)
{Point = PointIn;}

MeasuredUnitVectorType * MeasuredPlaneType::getNormal()
{return Normal;}

void MeasuredPlaneType::setNormal(MeasuredUnitVectorType * NormalIn)
{Normal = NormalIn;}

/* ***************************************************************** */

/* class MeasuredPointAndVectorType

*/

MeasuredPointAndVectorType::MeasuredPointAndVectorType()
{
  StartPoint = 0;
  Vector = 0;
}

MeasuredPointAndVectorType::MeasuredPointAndVectorType(
 MeasuredPointType * StartPointIn,
 MeasuredUnitVectorType * VectorIn)
{
  StartPoint = StartPointIn;
  Vector = VectorIn;
}

MeasuredPointAndVectorType::~MeasuredPointAndVectorType()
{
  #ifndef NODESTRUCT
  delete StartPoint;
  delete Vector;
  #endif
}

void MeasuredPointAndVectorType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<StartPoint");
  StartPoint->printSelf(outFile);
  fprintf(outFile, "</StartPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Vector");
  Vector->printSelf(outFile);
  fprintf(outFile, "</Vector>\n");
  doSpaces(-INDENT, outFile);
}

MeasuredPointType * MeasuredPointAndVectorType::getStartPoint()
{return StartPoint;}

void MeasuredPointAndVectorType::setStartPoint(MeasuredPointType * StartPointIn)
{StartPoint = StartPointIn;}

MeasuredUnitVectorType * MeasuredPointAndVectorType::getVector()
{return Vector;}

void MeasuredPointAndVectorType::setVector(MeasuredUnitVectorType * VectorIn)
{Vector = VectorIn;}

/* ***************************************************************** */

/* class MeasuredPointType

*/

MeasuredPointType::MeasuredPointType() :
  PointType()
{
  combinedUncertainty = 0;
  meanError = 0;
  xCombinedUncertainty = 0;
  xMeanError = 0;
  yCombinedUncertainty = 0;
  yMeanError = 0;
  zCombinedUncertainty = 0;
  zMeanError = 0;
}

MeasuredPointType::MeasuredPointType(
 XmlDouble * aXmlDouble) :
  PointType(aXmlDouble)
{
  combinedUncertainty = 0;
  meanError = 0;
  xCombinedUncertainty = 0;
  xMeanError = 0;
  yCombinedUncertainty = 0;
  yMeanError = 0;
  zCombinedUncertainty = 0;
  zMeanError = 0;
}

MeasuredPointType::MeasuredPointType(
 XmlDecimal * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * linearUnitIn,
 XmlDecimal * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 ValidityEnumType * validityIn,
 XmlDecimal * xCombinedUncertaintyIn,
 XmlNonNegativeInteger * xDecimalPlacesIn,
 XmlDecimal * xMeanErrorIn,
 XmlNonNegativeInteger * xSignificantFiguresIn,
 ValidityEnumType * xValidityIn,
 XmlDecimal * yCombinedUncertaintyIn,
 XmlNonNegativeInteger * yDecimalPlacesIn,
 XmlDecimal * yMeanErrorIn,
 XmlNonNegativeInteger * ySignificantFiguresIn,
 ValidityEnumType * yValidityIn,
 XmlDecimal * zCombinedUncertaintyIn,
 XmlNonNegativeInteger * zDecimalPlacesIn,
 XmlDecimal * zMeanErrorIn,
 XmlNonNegativeInteger * zSignificantFiguresIn,
 ValidityEnumType * zValidityIn,
 XmlDouble * aXmlDouble) :
  PointType(aXmlDouble)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xCombinedUncertainty = xCombinedUncertaintyIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xMeanError = xMeanErrorIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yCombinedUncertainty = yCombinedUncertaintyIn;
  yDecimalPlaces = yDecimalPlacesIn;
  yMeanError = yMeanErrorIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zCombinedUncertainty = zCombinedUncertaintyIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zMeanError = zMeanErrorIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

MeasuredPointType::~MeasuredPointType()
{
  #ifndef NODESTRUCT
  delete combinedUncertainty;
  delete meanError;
  delete xCombinedUncertainty;
  delete xMeanError;
  delete yCombinedUncertainty;
  delete yMeanError;
  delete zCombinedUncertainty;
  delete zMeanError;
  #endif
}

void MeasuredPointType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredPointType");
}

void MeasuredPointType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  MeasuredPointTypeCheck();
  if (bad)
    {
      fprintf(stderr, "MeasuredPointTypeCheck failed\n");
      exit(1);
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
  if (xCombinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "xCombinedUncertainty=\"");
      xCombinedUncertainty->oPrintSelf(outFile);
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
  if (xMeanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "xMeanError=\"");
      xMeanError->oPrintSelf(outFile);
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
  if (yCombinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "yCombinedUncertainty=\"");
      yCombinedUncertainty->oPrintSelf(outFile);
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
  if (yMeanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "yMeanError=\"");
      yMeanError->oPrintSelf(outFile);
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
  if (zCombinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "zCombinedUncertainty=\"");
      zCombinedUncertainty->oPrintSelf(outFile);
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
  if (zMeanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "zMeanError=\"");
      zMeanError->oPrintSelf(outFile);
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

bool MeasuredPointType::MeasuredPointTypeCheck()
{
  PointTypeCheck();
  return bad;
}

bool MeasuredPointType::badAttributes(
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
          XmlDecimal * combinedUncertaintyVal;
          if (combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->val.c_str());
          if (linearUnitVal->bad)
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            linearUnit = linearUnitVal;
        }
      else if (decl->name == "meanError")
        {
          XmlDecimal * meanErrorVal;
          if (meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new XmlDecimal(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            significantFigures = significantFiguresVal;
        }
      else if (decl->name == "validity")
        {
          ValidityEnumType * validityVal;
          if (validity)
            {
              fprintf(stderr, "two values for validity in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->val.c_str());
          if (validityVal->bad)
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            validity = validityVal;
        }
      else if (decl->name == "xCombinedUncertainty")
        {
          XmlDecimal * xCombinedUncertaintyVal;
          if (xCombinedUncertainty)
            {
              fprintf(stderr, "two values for xCombinedUncertainty in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          xCombinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (xCombinedUncertaintyVal->bad)
            {
              delete xCombinedUncertaintyVal;
              fprintf(stderr, "bad value %s for xCombinedUncertainty in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xCombinedUncertainty = xCombinedUncertaintyVal;
        }
      else if (decl->name == "xDecimalPlaces")
        {
          XmlNonNegativeInteger * xDecimalPlacesVal;
          if (xDecimalPlaces)
            {
              fprintf(stderr, "two values for xDecimalPlaces in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (xDecimalPlacesVal->bad)
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xDecimalPlaces = xDecimalPlacesVal;
        }
      else if (decl->name == "xMeanError")
        {
          XmlDecimal * xMeanErrorVal;
          if (xMeanError)
            {
              fprintf(stderr, "two values for xMeanError in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          xMeanErrorVal = new XmlDecimal(decl->val.c_str());
          if (xMeanErrorVal->bad)
            {
              delete xMeanErrorVal;
              fprintf(stderr, "bad value %s for xMeanError in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xMeanError = xMeanErrorVal;
        }
      else if (decl->name == "xSignificantFigures")
        {
          XmlNonNegativeInteger * xSignificantFiguresVal;
          if (xSignificantFigures)
            {
              fprintf(stderr, "two values for xSignificantFigures in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (xSignificantFiguresVal->bad)
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xSignificantFigures = xSignificantFiguresVal;
        }
      else if (decl->name == "xValidity")
        {
          ValidityEnumType * xValidityVal;
          if (xValidity)
            {
              fprintf(stderr, "two values for xValidity in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->val.c_str());
          if (xValidityVal->bad)
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xValidity = xValidityVal;
        }
      else if (decl->name == "yCombinedUncertainty")
        {
          XmlDecimal * yCombinedUncertaintyVal;
          if (yCombinedUncertainty)
            {
              fprintf(stderr, "two values for yCombinedUncertainty in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          yCombinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (yCombinedUncertaintyVal->bad)
            {
              delete yCombinedUncertaintyVal;
              fprintf(stderr, "bad value %s for yCombinedUncertainty in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yCombinedUncertainty = yCombinedUncertaintyVal;
        }
      else if (decl->name == "yDecimalPlaces")
        {
          XmlNonNegativeInteger * yDecimalPlacesVal;
          if (yDecimalPlaces)
            {
              fprintf(stderr, "two values for yDecimalPlaces in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (yDecimalPlacesVal->bad)
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yDecimalPlaces = yDecimalPlacesVal;
        }
      else if (decl->name == "yMeanError")
        {
          XmlDecimal * yMeanErrorVal;
          if (yMeanError)
            {
              fprintf(stderr, "two values for yMeanError in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          yMeanErrorVal = new XmlDecimal(decl->val.c_str());
          if (yMeanErrorVal->bad)
            {
              delete yMeanErrorVal;
              fprintf(stderr, "bad value %s for yMeanError in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yMeanError = yMeanErrorVal;
        }
      else if (decl->name == "ySignificantFigures")
        {
          XmlNonNegativeInteger * ySignificantFiguresVal;
          if (ySignificantFigures)
            {
              fprintf(stderr, "two values for ySignificantFigures in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (ySignificantFiguresVal->bad)
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            ySignificantFigures = ySignificantFiguresVal;
        }
      else if (decl->name == "yValidity")
        {
          ValidityEnumType * yValidityVal;
          if (yValidity)
            {
              fprintf(stderr, "two values for yValidity in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->val.c_str());
          if (yValidityVal->bad)
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yValidity = yValidityVal;
        }
      else if (decl->name == "zCombinedUncertainty")
        {
          XmlDecimal * zCombinedUncertaintyVal;
          if (zCombinedUncertainty)
            {
              fprintf(stderr, "two values for zCombinedUncertainty in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          zCombinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (zCombinedUncertaintyVal->bad)
            {
              delete zCombinedUncertaintyVal;
              fprintf(stderr, "bad value %s for zCombinedUncertainty in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zCombinedUncertainty = zCombinedUncertaintyVal;
        }
      else if (decl->name == "zDecimalPlaces")
        {
          XmlNonNegativeInteger * zDecimalPlacesVal;
          if (zDecimalPlaces)
            {
              fprintf(stderr, "two values for zDecimalPlaces in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (zDecimalPlacesVal->bad)
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zDecimalPlaces = zDecimalPlacesVal;
        }
      else if (decl->name == "zMeanError")
        {
          XmlDecimal * zMeanErrorVal;
          if (zMeanError)
            {
              fprintf(stderr, "two values for zMeanError in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          zMeanErrorVal = new XmlDecimal(decl->val.c_str());
          if (zMeanErrorVal->bad)
            {
              delete zMeanErrorVal;
              fprintf(stderr, "bad value %s for zMeanError in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zMeanError = zMeanErrorVal;
        }
      else if (decl->name == "zSignificantFigures")
        {
          XmlNonNegativeInteger * zSignificantFiguresVal;
          if (zSignificantFigures)
            {
              fprintf(stderr, "two values for zSignificantFigures in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (zSignificantFiguresVal->bad)
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zSignificantFigures = zSignificantFiguresVal;
        }
      else if (decl->name == "zValidity")
        {
          ValidityEnumType * zValidityVal;
          if (zValidity)
            {
              fprintf(stderr, "two values for zValidity in MeasuredPointType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->val.c_str());
          if (zValidityVal->bad)
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in MeasuredPointType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredPointType\n");
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
      delete combinedUncertainty;
      combinedUncertainty = 0;
      delete decimalPlaces;
      decimalPlaces = 0;
      delete linearUnit;
      linearUnit = 0;
      delete meanError;
      meanError = 0;
      delete significantFigures;
      significantFigures = 0;
      delete validity;
      validity = 0;
      delete xCombinedUncertainty;
      xCombinedUncertainty = 0;
      delete xDecimalPlaces;
      xDecimalPlaces = 0;
      delete xMeanError;
      xMeanError = 0;
      delete xSignificantFigures;
      xSignificantFigures = 0;
      delete xValidity;
      xValidity = 0;
      delete yCombinedUncertainty;
      yCombinedUncertainty = 0;
      delete yDecimalPlaces;
      yDecimalPlaces = 0;
      delete yMeanError;
      yMeanError = 0;
      delete ySignificantFigures;
      ySignificantFigures = 0;
      delete yValidity;
      yValidity = 0;
      delete zCombinedUncertainty;
      zCombinedUncertainty = 0;
      delete zDecimalPlaces;
      zDecimalPlaces = 0;
      delete zMeanError;
      zMeanError = 0;
      delete zSignificantFigures;
      zSignificantFigures = 0;
      delete zValidity;
      zValidity = 0;
    }
  return returnValue;
}

XmlDecimal * MeasuredPointType::getcombinedUncertainty()
{return combinedUncertainty;}

void MeasuredPointType::setcombinedUncertainty(XmlDecimal * combinedUncertaintyIn)
{combinedUncertainty = combinedUncertaintyIn;}

XmlDecimal * MeasuredPointType::getmeanError()
{return meanError;}

void MeasuredPointType::setmeanError(XmlDecimal * meanErrorIn)
{meanError = meanErrorIn;}

XmlDecimal * MeasuredPointType::getxCombinedUncertainty()
{return xCombinedUncertainty;}

void MeasuredPointType::setxCombinedUncertainty(XmlDecimal * xCombinedUncertaintyIn)
{xCombinedUncertainty = xCombinedUncertaintyIn;}

XmlDecimal * MeasuredPointType::getxMeanError()
{return xMeanError;}

void MeasuredPointType::setxMeanError(XmlDecimal * xMeanErrorIn)
{xMeanError = xMeanErrorIn;}

XmlDecimal * MeasuredPointType::getyCombinedUncertainty()
{return yCombinedUncertainty;}

void MeasuredPointType::setyCombinedUncertainty(XmlDecimal * yCombinedUncertaintyIn)
{yCombinedUncertainty = yCombinedUncertaintyIn;}

XmlDecimal * MeasuredPointType::getyMeanError()
{return yMeanError;}

void MeasuredPointType::setyMeanError(XmlDecimal * yMeanErrorIn)
{yMeanError = yMeanErrorIn;}

XmlDecimal * MeasuredPointType::getzCombinedUncertainty()
{return zCombinedUncertainty;}

void MeasuredPointType::setzCombinedUncertainty(XmlDecimal * zCombinedUncertaintyIn)
{zCombinedUncertainty = zCombinedUncertaintyIn;}

XmlDecimal * MeasuredPointType::getzMeanError()
{return zMeanError;}

void MeasuredPointType::setzMeanError(XmlDecimal * zMeanErrorIn)
{zMeanError = zMeanErrorIn;}

/* ***************************************************************** */

/* class MeasuredUnitVectorType

*/

MeasuredUnitVectorType::MeasuredUnitVectorType() :
  UnitVectorType()
{
  combinedUncertainty = 0;
  meanError = 0;
  xCombinedUncertainty = 0;
  xMeanError = 0;
  yCombinedUncertainty = 0;
  yMeanError = 0;
  zCombinedUncertainty = 0;
  zMeanError = 0;
}

MeasuredUnitVectorType::MeasuredUnitVectorType(
 XmlDouble * aXmlDouble) :
  UnitVectorType(aXmlDouble)
{
  combinedUncertainty = 0;
  meanError = 0;
  xCombinedUncertainty = 0;
  xMeanError = 0;
  yCombinedUncertainty = 0;
  yMeanError = 0;
  zCombinedUncertainty = 0;
  zMeanError = 0;
}

MeasuredUnitVectorType::MeasuredUnitVectorType(
 XmlDecimal * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 XmlToken * linearUnitIn,
 XmlDecimal * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 ValidityEnumType * validityIn,
 XmlDecimal * xCombinedUncertaintyIn,
 XmlNonNegativeInteger * xDecimalPlacesIn,
 XmlDecimal * xMeanErrorIn,
 XmlNonNegativeInteger * xSignificantFiguresIn,
 ValidityEnumType * xValidityIn,
 XmlDecimal * yCombinedUncertaintyIn,
 XmlNonNegativeInteger * yDecimalPlacesIn,
 XmlDecimal * yMeanErrorIn,
 XmlNonNegativeInteger * ySignificantFiguresIn,
 ValidityEnumType * yValidityIn,
 XmlDecimal * zCombinedUncertaintyIn,
 XmlNonNegativeInteger * zDecimalPlacesIn,
 XmlDecimal * zMeanErrorIn,
 XmlNonNegativeInteger * zSignificantFiguresIn,
 ValidityEnumType * zValidityIn,
 XmlDouble * aXmlDouble) :
  UnitVectorType(aXmlDouble)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  linearUnit = linearUnitIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
  validity = validityIn;
  xCombinedUncertainty = xCombinedUncertaintyIn;
  xDecimalPlaces = xDecimalPlacesIn;
  xMeanError = xMeanErrorIn;
  xSignificantFigures = xSignificantFiguresIn;
  xValidity = xValidityIn;
  yCombinedUncertainty = yCombinedUncertaintyIn;
  yDecimalPlaces = yDecimalPlacesIn;
  yMeanError = yMeanErrorIn;
  ySignificantFigures = ySignificantFiguresIn;
  yValidity = yValidityIn;
  zCombinedUncertainty = zCombinedUncertaintyIn;
  zDecimalPlaces = zDecimalPlacesIn;
  zMeanError = zMeanErrorIn;
  zSignificantFigures = zSignificantFiguresIn;
  zValidity = zValidityIn;
}

MeasuredUnitVectorType::~MeasuredUnitVectorType()
{
  #ifndef NODESTRUCT
  delete combinedUncertainty;
  delete meanError;
  delete xCombinedUncertainty;
  delete xMeanError;
  delete yCombinedUncertainty;
  delete yMeanError;
  delete zCombinedUncertainty;
  delete zMeanError;
  #endif
}

void MeasuredUnitVectorType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasuredUnitVectorType");
}

void MeasuredUnitVectorType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  MeasuredUnitVectorTypeCheck();
  if (bad)
    {
      fprintf(stderr, "MeasuredUnitVectorTypeCheck failed\n");
      exit(1);
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
  if (xCombinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "xCombinedUncertainty=\"");
      xCombinedUncertainty->oPrintSelf(outFile);
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
  if (xMeanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "xMeanError=\"");
      xMeanError->oPrintSelf(outFile);
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
  if (yCombinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "yCombinedUncertainty=\"");
      yCombinedUncertainty->oPrintSelf(outFile);
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
  if (yMeanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "yMeanError=\"");
      yMeanError->oPrintSelf(outFile);
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
  if (zCombinedUncertainty)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "zCombinedUncertainty=\"");
      zCombinedUncertainty->oPrintSelf(outFile);
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
  if (zMeanError)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "zMeanError=\"");
      zMeanError->oPrintSelf(outFile);
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

bool MeasuredUnitVectorType::MeasuredUnitVectorTypeCheck()
{
  UnitVectorTypeCheck();
  return bad;
}

bool MeasuredUnitVectorType::badAttributes(
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
          XmlDecimal * combinedUncertaintyVal;
          if (combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "linearUnit")
        {
          XmlToken * linearUnitVal;
          if (linearUnit)
            {
              fprintf(stderr, "two values for linearUnit in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          linearUnitVal = new XmlToken(decl->val.c_str());
          if (linearUnitVal->bad)
            {
              delete linearUnitVal;
              fprintf(stderr, "bad value %s for linearUnit in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            linearUnit = linearUnitVal;
        }
      else if (decl->name == "meanError")
        {
          XmlDecimal * meanErrorVal;
          if (meanError)
            {
              fprintf(stderr, "two values for meanError in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new XmlDecimal(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            significantFigures = significantFiguresVal;
        }
      else if (decl->name == "validity")
        {
          ValidityEnumType * validityVal;
          if (validity)
            {
              fprintf(stderr, "two values for validity in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          validityVal = new ValidityEnumType(decl->val.c_str());
          if (validityVal->bad)
            {
              delete validityVal;
              fprintf(stderr, "bad value %s for validity in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            validity = validityVal;
        }
      else if (decl->name == "xCombinedUncertainty")
        {
          XmlDecimal * xCombinedUncertaintyVal;
          if (xCombinedUncertainty)
            {
              fprintf(stderr, "two values for xCombinedUncertainty in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          xCombinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (xCombinedUncertaintyVal->bad)
            {
              delete xCombinedUncertaintyVal;
              fprintf(stderr, "bad value %s for xCombinedUncertainty in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xCombinedUncertainty = xCombinedUncertaintyVal;
        }
      else if (decl->name == "xDecimalPlaces")
        {
          XmlNonNegativeInteger * xDecimalPlacesVal;
          if (xDecimalPlaces)
            {
              fprintf(stderr, "two values for xDecimalPlaces in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          xDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (xDecimalPlacesVal->bad)
            {
              delete xDecimalPlacesVal;
              fprintf(stderr, "bad value %s for xDecimalPlaces in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xDecimalPlaces = xDecimalPlacesVal;
        }
      else if (decl->name == "xMeanError")
        {
          XmlDecimal * xMeanErrorVal;
          if (xMeanError)
            {
              fprintf(stderr, "two values for xMeanError in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          xMeanErrorVal = new XmlDecimal(decl->val.c_str());
          if (xMeanErrorVal->bad)
            {
              delete xMeanErrorVal;
              fprintf(stderr, "bad value %s for xMeanError in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xMeanError = xMeanErrorVal;
        }
      else if (decl->name == "xSignificantFigures")
        {
          XmlNonNegativeInteger * xSignificantFiguresVal;
          if (xSignificantFigures)
            {
              fprintf(stderr, "two values for xSignificantFigures in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          xSignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (xSignificantFiguresVal->bad)
            {
              delete xSignificantFiguresVal;
              fprintf(stderr, "bad value %s for xSignificantFigures in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xSignificantFigures = xSignificantFiguresVal;
        }
      else if (decl->name == "xValidity")
        {
          ValidityEnumType * xValidityVal;
          if (xValidity)
            {
              fprintf(stderr, "two values for xValidity in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          xValidityVal = new ValidityEnumType(decl->val.c_str());
          if (xValidityVal->bad)
            {
              delete xValidityVal;
              fprintf(stderr, "bad value %s for xValidity in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            xValidity = xValidityVal;
        }
      else if (decl->name == "yCombinedUncertainty")
        {
          XmlDecimal * yCombinedUncertaintyVal;
          if (yCombinedUncertainty)
            {
              fprintf(stderr, "two values for yCombinedUncertainty in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          yCombinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (yCombinedUncertaintyVal->bad)
            {
              delete yCombinedUncertaintyVal;
              fprintf(stderr, "bad value %s for yCombinedUncertainty in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yCombinedUncertainty = yCombinedUncertaintyVal;
        }
      else if (decl->name == "yDecimalPlaces")
        {
          XmlNonNegativeInteger * yDecimalPlacesVal;
          if (yDecimalPlaces)
            {
              fprintf(stderr, "two values for yDecimalPlaces in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          yDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (yDecimalPlacesVal->bad)
            {
              delete yDecimalPlacesVal;
              fprintf(stderr, "bad value %s for yDecimalPlaces in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yDecimalPlaces = yDecimalPlacesVal;
        }
      else if (decl->name == "yMeanError")
        {
          XmlDecimal * yMeanErrorVal;
          if (yMeanError)
            {
              fprintf(stderr, "two values for yMeanError in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          yMeanErrorVal = new XmlDecimal(decl->val.c_str());
          if (yMeanErrorVal->bad)
            {
              delete yMeanErrorVal;
              fprintf(stderr, "bad value %s for yMeanError in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yMeanError = yMeanErrorVal;
        }
      else if (decl->name == "ySignificantFigures")
        {
          XmlNonNegativeInteger * ySignificantFiguresVal;
          if (ySignificantFigures)
            {
              fprintf(stderr, "two values for ySignificantFigures in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          ySignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (ySignificantFiguresVal->bad)
            {
              delete ySignificantFiguresVal;
              fprintf(stderr, "bad value %s for ySignificantFigures in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            ySignificantFigures = ySignificantFiguresVal;
        }
      else if (decl->name == "yValidity")
        {
          ValidityEnumType * yValidityVal;
          if (yValidity)
            {
              fprintf(stderr, "two values for yValidity in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          yValidityVal = new ValidityEnumType(decl->val.c_str());
          if (yValidityVal->bad)
            {
              delete yValidityVal;
              fprintf(stderr, "bad value %s for yValidity in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            yValidity = yValidityVal;
        }
      else if (decl->name == "zCombinedUncertainty")
        {
          XmlDecimal * zCombinedUncertaintyVal;
          if (zCombinedUncertainty)
            {
              fprintf(stderr, "two values for zCombinedUncertainty in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          zCombinedUncertaintyVal = new XmlDecimal(decl->val.c_str());
          if (zCombinedUncertaintyVal->bad)
            {
              delete zCombinedUncertaintyVal;
              fprintf(stderr, "bad value %s for zCombinedUncertainty in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zCombinedUncertainty = zCombinedUncertaintyVal;
        }
      else if (decl->name == "zDecimalPlaces")
        {
          XmlNonNegativeInteger * zDecimalPlacesVal;
          if (zDecimalPlaces)
            {
              fprintf(stderr, "two values for zDecimalPlaces in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          zDecimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (zDecimalPlacesVal->bad)
            {
              delete zDecimalPlacesVal;
              fprintf(stderr, "bad value %s for zDecimalPlaces in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zDecimalPlaces = zDecimalPlacesVal;
        }
      else if (decl->name == "zMeanError")
        {
          XmlDecimal * zMeanErrorVal;
          if (zMeanError)
            {
              fprintf(stderr, "two values for zMeanError in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          zMeanErrorVal = new XmlDecimal(decl->val.c_str());
          if (zMeanErrorVal->bad)
            {
              delete zMeanErrorVal;
              fprintf(stderr, "bad value %s for zMeanError in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zMeanError = zMeanErrorVal;
        }
      else if (decl->name == "zSignificantFigures")
        {
          XmlNonNegativeInteger * zSignificantFiguresVal;
          if (zSignificantFigures)
            {
              fprintf(stderr, "two values for zSignificantFigures in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          zSignificantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (zSignificantFiguresVal->bad)
            {
              delete zSignificantFiguresVal;
              fprintf(stderr, "bad value %s for zSignificantFigures in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zSignificantFigures = zSignificantFiguresVal;
        }
      else if (decl->name == "zValidity")
        {
          ValidityEnumType * zValidityVal;
          if (zValidity)
            {
              fprintf(stderr, "two values for zValidity in MeasuredUnitVectorType\n");
              returnValue = true;
              break;
            }
          zValidityVal = new ValidityEnumType(decl->val.c_str());
          if (zValidityVal->bad)
            {
              delete zValidityVal;
              fprintf(stderr, "bad value %s for zValidity in MeasuredUnitVectorType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            zValidity = zValidityVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasuredUnitVectorType\n");
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
      delete combinedUncertainty;
      combinedUncertainty = 0;
      delete decimalPlaces;
      decimalPlaces = 0;
      delete linearUnit;
      linearUnit = 0;
      delete meanError;
      meanError = 0;
      delete significantFigures;
      significantFigures = 0;
      delete validity;
      validity = 0;
      delete xCombinedUncertainty;
      xCombinedUncertainty = 0;
      delete xDecimalPlaces;
      xDecimalPlaces = 0;
      delete xMeanError;
      xMeanError = 0;
      delete xSignificantFigures;
      xSignificantFigures = 0;
      delete xValidity;
      xValidity = 0;
      delete yCombinedUncertainty;
      yCombinedUncertainty = 0;
      delete yDecimalPlaces;
      yDecimalPlaces = 0;
      delete yMeanError;
      yMeanError = 0;
      delete ySignificantFigures;
      ySignificantFigures = 0;
      delete yValidity;
      yValidity = 0;
      delete zCombinedUncertainty;
      zCombinedUncertainty = 0;
      delete zDecimalPlaces;
      zDecimalPlaces = 0;
      delete zMeanError;
      zMeanError = 0;
      delete zSignificantFigures;
      zSignificantFigures = 0;
      delete zValidity;
      zValidity = 0;
    }
  return returnValue;
}

XmlDecimal * MeasuredUnitVectorType::getcombinedUncertainty()
{return combinedUncertainty;}

void MeasuredUnitVectorType::setcombinedUncertainty(XmlDecimal * combinedUncertaintyIn)
{combinedUncertainty = combinedUncertaintyIn;}

XmlDecimal * MeasuredUnitVectorType::getmeanError()
{return meanError;}

void MeasuredUnitVectorType::setmeanError(XmlDecimal * meanErrorIn)
{meanError = meanErrorIn;}

XmlDecimal * MeasuredUnitVectorType::getxCombinedUncertainty()
{return xCombinedUncertainty;}

void MeasuredUnitVectorType::setxCombinedUncertainty(XmlDecimal * xCombinedUncertaintyIn)
{xCombinedUncertainty = xCombinedUncertaintyIn;}

XmlDecimal * MeasuredUnitVectorType::getxMeanError()
{return xMeanError;}

void MeasuredUnitVectorType::setxMeanError(XmlDecimal * xMeanErrorIn)
{xMeanError = xMeanErrorIn;}

XmlDecimal * MeasuredUnitVectorType::getyCombinedUncertainty()
{return yCombinedUncertainty;}

void MeasuredUnitVectorType::setyCombinedUncertainty(XmlDecimal * yCombinedUncertaintyIn)
{yCombinedUncertainty = yCombinedUncertaintyIn;}

XmlDecimal * MeasuredUnitVectorType::getyMeanError()
{return yMeanError;}

void MeasuredUnitVectorType::setyMeanError(XmlDecimal * yMeanErrorIn)
{yMeanError = yMeanErrorIn;}

XmlDecimal * MeasuredUnitVectorType::getzCombinedUncertainty()
{return zCombinedUncertainty;}

void MeasuredUnitVectorType::setzCombinedUncertainty(XmlDecimal * zCombinedUncertaintyIn)
{zCombinedUncertainty = zCombinedUncertaintyIn;}

XmlDecimal * MeasuredUnitVectorType::getzMeanError()
{return zMeanError;}

void MeasuredUnitVectorType::setzMeanError(XmlDecimal * zMeanErrorIn)
{zMeanError = zMeanErrorIn;}

/* ***************************************************************** */

/* class MeasuredZoneAxisType

*/

MeasuredZoneAxisType::MeasuredZoneAxisType() :
  MeasuredAxisType()
{
  Length = 0;
}

MeasuredZoneAxisType::MeasuredZoneAxisType(
 MeasuredPointType * AxisPointIn,
 MeasuredUnitVectorType * DirectionIn,
 MeasuredLinearValueType * LengthIn) :
  MeasuredAxisType(
    AxisPointIn,
    DirectionIn)
{
  Length = LengthIn;
}

MeasuredZoneAxisType::~MeasuredZoneAxisType()
{
  #ifndef NODESTRUCT
  delete Length;
  #endif
}

void MeasuredZoneAxisType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<Length");
  Length->printSelf(outFile);
  fprintf(outFile, "</Length>\n");
  doSpaces(-INDENT, outFile);
}

MeasuredLinearValueType * MeasuredZoneAxisType::getLength()
{return Length;}

void MeasuredZoneAxisType::setLength(MeasuredLinearValueType * LengthIn)
{Length = LengthIn;}

/* ***************************************************************** */

/* class PointAndVectorType

*/

PointAndVectorType::PointAndVectorType()
{
  StartPoint = 0;
  Vector = 0;
}

PointAndVectorType::PointAndVectorType(
 PointType * StartPointIn,
 UnitVectorType * VectorIn)
{
  StartPoint = StartPointIn;
  Vector = VectorIn;
}

PointAndVectorType::~PointAndVectorType()
{
  #ifndef NODESTRUCT
  delete StartPoint;
  delete Vector;
  #endif
}

void PointAndVectorType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<StartPoint");
  StartPoint->printSelf(outFile);
  fprintf(outFile, "</StartPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Vector");
  Vector->printSelf(outFile);
  fprintf(outFile, "</Vector>\n");
  doSpaces(-INDENT, outFile);
}

PointType * PointAndVectorType::getStartPoint()
{return StartPoint;}

void PointAndVectorType::setStartPoint(PointType * StartPointIn)
{StartPoint = StartPointIn;}

UnitVectorType * PointAndVectorType::getVector()
{return Vector;}

void PointAndVectorType::setVector(UnitVectorType * VectorIn)
{Vector = VectorIn;}

/* ***************************************************************** */

/* class RadialDifferentialScaleType

*/

RadialDifferentialScaleType::RadialDifferentialScaleType()
{
  PerpendicularScaleFactor = 0;
  ParallelScaleFactor = 0;
  Direction = 0;
}

RadialDifferentialScaleType::RadialDifferentialScaleType(
 XmlDecimal * PerpendicularScaleFactorIn,
 XmlDecimal * ParallelScaleFactorIn,
 UnitVectorType * DirectionIn)
{
  PerpendicularScaleFactor = PerpendicularScaleFactorIn;
  ParallelScaleFactor = ParallelScaleFactorIn;
  Direction = DirectionIn;
}

RadialDifferentialScaleType::~RadialDifferentialScaleType()
{
  #ifndef NODESTRUCT
  delete PerpendicularScaleFactor;
  delete ParallelScaleFactor;
  delete Direction;
  #endif
}

void RadialDifferentialScaleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<PerpendicularScaleFactor");
  PerpendicularScaleFactor->printSelf(outFile);
  fprintf(outFile, "</PerpendicularScaleFactor>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ParallelScaleFactor");
  ParallelScaleFactor->printSelf(outFile);
  fprintf(outFile, "</ParallelScaleFactor>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Direction");
  Direction->printSelf(outFile);
  fprintf(outFile, "</Direction>\n");
  doSpaces(-INDENT, outFile);
}

XmlDecimal * RadialDifferentialScaleType::getPerpendicularScaleFactor()
{return PerpendicularScaleFactor;}

void RadialDifferentialScaleType::setPerpendicularScaleFactor(XmlDecimal * PerpendicularScaleFactorIn)
{PerpendicularScaleFactor = PerpendicularScaleFactorIn;}

XmlDecimal * RadialDifferentialScaleType::getParallelScaleFactor()
{return ParallelScaleFactor;}

void RadialDifferentialScaleType::setParallelScaleFactor(XmlDecimal * ParallelScaleFactorIn)
{ParallelScaleFactor = ParallelScaleFactorIn;}

UnitVectorType * RadialDifferentialScaleType::getDirection()
{return Direction;}

void RadialDifferentialScaleType::setDirection(UnitVectorType * DirectionIn)
{Direction = DirectionIn;}

/* ***************************************************************** */

/* class RectangleType

*/

RectangleType::RectangleType()
{
  Length = 0;
  CornerPoint = 0;
  Width = 0;
  WidthDirection = 0;
  LengthDirection = 0;
}

RectangleType::RectangleType(
 LinearValueType * LengthIn,
 PointType * CornerPointIn,
 LinearValueType * WidthIn,
 UnitVectorType * WidthDirectionIn,
 UnitVectorType * LengthDirectionIn)
{
  Length = LengthIn;
  CornerPoint = CornerPointIn;
  Width = WidthIn;
  WidthDirection = WidthDirectionIn;
  LengthDirection = LengthDirectionIn;
}

RectangleType::~RectangleType()
{
  #ifndef NODESTRUCT
  delete Length;
  delete CornerPoint;
  delete Width;
  delete WidthDirection;
  delete LengthDirection;
  #endif
}

void RectangleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Length");
  Length->printSelf(outFile);
  fprintf(outFile, "</Length>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<CornerPoint");
  CornerPoint->printSelf(outFile);
  fprintf(outFile, "</CornerPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Width");
  Width->printSelf(outFile);
  fprintf(outFile, "</Width>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<WidthDirection");
  WidthDirection->printSelf(outFile);
  fprintf(outFile, "</WidthDirection>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<LengthDirection");
  LengthDirection->printSelf(outFile);
  fprintf(outFile, "</LengthDirection>\n");
  doSpaces(-INDENT, outFile);
}

LinearValueType * RectangleType::getLength()
{return Length;}

void RectangleType::setLength(LinearValueType * LengthIn)
{Length = LengthIn;}

PointType * RectangleType::getCornerPoint()
{return CornerPoint;}

void RectangleType::setCornerPoint(PointType * CornerPointIn)
{CornerPoint = CornerPointIn;}

LinearValueType * RectangleType::getWidth()
{return Width;}

void RectangleType::setWidth(LinearValueType * WidthIn)
{Width = WidthIn;}

UnitVectorType * RectangleType::getWidthDirection()
{return WidthDirection;}

void RectangleType::setWidthDirection(UnitVectorType * WidthDirectionIn)
{WidthDirection = WidthDirectionIn;}

UnitVectorType * RectangleType::getLengthDirection()
{return LengthDirection;}

void RectangleType::setLengthDirection(UnitVectorType * LengthDirectionIn)
{LengthDirection = LengthDirectionIn;}

/* ***************************************************************** */

/* class RectangularUnitAreaType

*/

RectangularUnitAreaType::RectangularUnitAreaType()
{
  RectangularUnitAreaLength = 0;
  RectangularUnitAreaWidth = 0;
  RectangularUnitAreaOrientation = 0;
}

RectangularUnitAreaType::RectangularUnitAreaType(
 LinearValueType * RectangularUnitAreaLengthIn,
 LinearValueType * RectangularUnitAreaWidthIn,
 UnitVectorType * RectangularUnitAreaOrientationIn)
{
  RectangularUnitAreaLength = RectangularUnitAreaLengthIn;
  RectangularUnitAreaWidth = RectangularUnitAreaWidthIn;
  RectangularUnitAreaOrientation = RectangularUnitAreaOrientationIn;
}

RectangularUnitAreaType::~RectangularUnitAreaType()
{
  #ifndef NODESTRUCT
  delete RectangularUnitAreaLength;
  delete RectangularUnitAreaWidth;
  delete RectangularUnitAreaOrientation;
  #endif
}

void RectangularUnitAreaType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<RectangularUnitAreaLength");
  RectangularUnitAreaLength->printSelf(outFile);
  fprintf(outFile, "</RectangularUnitAreaLength>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<RectangularUnitAreaWidth");
  RectangularUnitAreaWidth->printSelf(outFile);
  fprintf(outFile, "</RectangularUnitAreaWidth>\n");
  if (RectangularUnitAreaOrientation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RectangularUnitAreaOrientation");
      RectangularUnitAreaOrientation->printSelf(outFile);
      fprintf(outFile, "</RectangularUnitAreaOrientation>\n");
    }
  doSpaces(-INDENT, outFile);
}

LinearValueType * RectangularUnitAreaType::getRectangularUnitAreaLength()
{return RectangularUnitAreaLength;}

void RectangularUnitAreaType::setRectangularUnitAreaLength(LinearValueType * RectangularUnitAreaLengthIn)
{RectangularUnitAreaLength = RectangularUnitAreaLengthIn;}

LinearValueType * RectangularUnitAreaType::getRectangularUnitAreaWidth()
{return RectangularUnitAreaWidth;}

void RectangularUnitAreaType::setRectangularUnitAreaWidth(LinearValueType * RectangularUnitAreaWidthIn)
{RectangularUnitAreaWidth = RectangularUnitAreaWidthIn;}

UnitVectorType * RectangularUnitAreaType::getRectangularUnitAreaOrientation()
{return RectangularUnitAreaOrientation;}

void RectangularUnitAreaType::setRectangularUnitAreaOrientation(UnitVectorType * RectangularUnitAreaOrientationIn)
{RectangularUnitAreaOrientation = RectangularUnitAreaOrientationIn;}

/* ***************************************************************** */

/* class ScaleType

*/

ScaleType::ScaleType()
{
  Origin = 0;
  ScaleType_1006 = 0;
}

ScaleType::ScaleType(
 PointType * OriginIn,
 ScaleType_1006_Type * ScaleType_1006In)
{
  Origin = OriginIn;
  ScaleType_1006 = ScaleType_1006In;
}

ScaleType::~ScaleType()
{
  #ifndef NODESTRUCT
  delete Origin;
  delete ScaleType_1006;
  #endif
}

void ScaleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Origin");
  Origin->printSelf(outFile);
  fprintf(outFile, "</Origin>\n");
  ScaleType_1006->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

PointType * ScaleType::getOrigin()
{return Origin;}

void ScaleType::setOrigin(PointType * OriginIn)
{Origin = OriginIn;}

ScaleType_1006_Type * ScaleType::getScaleType_1006()
{return ScaleType_1006;}

void ScaleType::setScaleType_1006(ScaleType_1006_Type * ScaleType_1006In)
{ScaleType_1006 = ScaleType_1006In;}

/* ***************************************************************** */

/* class SecurityClassificationEnumType

*/

SecurityClassificationEnumType::SecurityClassificationEnumType() :
  XmlNMTOKEN()
{
}

SecurityClassificationEnumType::SecurityClassificationEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "NONE") &&
           strcmp(val.c_str(), "UNCLASSIFIED") &&
           strcmp(val.c_str(), "RESTRICTED") &&
           strcmp(val.c_str(), "EU_RESTRICTED") &&
           strcmp(val.c_str(), "WEU_RESTRICTED") &&
           strcmp(val.c_str(), "FOR_OFFICIAL_USE_ONLY") &&
           strcmp(val.c_str(), "PROTECTED") &&
           strcmp(val.c_str(), "PROTECTED_A") &&
           strcmp(val.c_str(), "PROTECTED_B") &&
           strcmp(val.c_str(), "PROTECTED_C") &&
           strcmp(val.c_str(), "CONFIDENTIAL") &&
           strcmp(val.c_str(), "EU_CONFIDENTIAL") &&
           strcmp(val.c_str(), "WEU_CONFIDENTIAL") &&
           strcmp(val.c_str(), "SECRET") &&
           strcmp(val.c_str(), "SECRET_NATIONAL_SECURITY_INFORMATION") &&
           strcmp(val.c_str(), "SECRET_FORMERLY_RESTRICTED_DATA") &&
           strcmp(val.c_str(), "SECRET_RESTRICTED_DATA") &&
           strcmp(val.c_str(), "SECRET") &&
           strcmp(val.c_str(), "EU_SECRET") &&
           strcmp(val.c_str(), "WEU_SECRET") &&
           strcmp(val.c_str(), "TOP_SECRET_NATIONAL_SECURITY_INFORMATION") &&
           strcmp(val.c_str(), "TOP_SECRET_FORMERLY_RESTRICTED_DATA") &&
           strcmp(val.c_str(), "TOP_SECRET_RESTRICTED_DATA") &&
           strcmp(val.c_str(), "EU_TOP_SECRET") &&
           strcmp(val.c_str(), "FOCAL_TOP_SECRET") &&
           strcmp(val.c_str(), "COMPANY_CONFIDENTIAL") &&
           strcmp(val.c_str(), "OFFICIAL_USE_ONLY") &&
           strcmp(val.c_str(), "TRADE_SECRET") &&
           strcmp(val.c_str(), "TRADEMARK") &&
           strcmp(val.c_str(), "REGISTERED_TRADEMARK") &&
           strcmp(val.c_str(), "PATENT") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

SecurityClassificationEnumType::~SecurityClassificationEnumType() {}

bool SecurityClassificationEnumType::SecurityClassificationEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "NONE") &&
          strcmp(val.c_str(), "UNCLASSIFIED") &&
          strcmp(val.c_str(), "RESTRICTED") &&
          strcmp(val.c_str(), "EU_RESTRICTED") &&
          strcmp(val.c_str(), "WEU_RESTRICTED") &&
          strcmp(val.c_str(), "FOR_OFFICIAL_USE_ONLY") &&
          strcmp(val.c_str(), "PROTECTED") &&
          strcmp(val.c_str(), "PROTECTED_A") &&
          strcmp(val.c_str(), "PROTECTED_B") &&
          strcmp(val.c_str(), "PROTECTED_C") &&
          strcmp(val.c_str(), "CONFIDENTIAL") &&
          strcmp(val.c_str(), "EU_CONFIDENTIAL") &&
          strcmp(val.c_str(), "WEU_CONFIDENTIAL") &&
          strcmp(val.c_str(), "SECRET") &&
          strcmp(val.c_str(), "SECRET_NATIONAL_SECURITY_INFORMATION") &&
          strcmp(val.c_str(), "SECRET_FORMERLY_RESTRICTED_DATA") &&
          strcmp(val.c_str(), "SECRET_RESTRICTED_DATA") &&
          strcmp(val.c_str(), "SECRET") &&
          strcmp(val.c_str(), "EU_SECRET") &&
          strcmp(val.c_str(), "WEU_SECRET") &&
          strcmp(val.c_str(), "TOP_SECRET_NATIONAL_SECURITY_INFORMATION") &&
          strcmp(val.c_str(), "TOP_SECRET_FORMERLY_RESTRICTED_DATA") &&
          strcmp(val.c_str(), "TOP_SECRET_RESTRICTED_DATA") &&
          strcmp(val.c_str(), "EU_TOP_SECRET") &&
          strcmp(val.c_str(), "FOCAL_TOP_SECRET") &&
          strcmp(val.c_str(), "COMPANY_CONFIDENTIAL") &&
          strcmp(val.c_str(), "OFFICIAL_USE_ONLY") &&
          strcmp(val.c_str(), "TRADE_SECRET") &&
          strcmp(val.c_str(), "TRADEMARK") &&
          strcmp(val.c_str(), "REGISTERED_TRADEMARK") &&
          strcmp(val.c_str(), "PATENT") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void SecurityClassificationEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SecurityClassificationEnumType");
}

void SecurityClassificationEnumType::printSelf(FILE * outFile)
{
  if (SecurityClassificationEnumTypeIsBad())
    {
      fprintf(stderr, "bad SecurityClassificationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SecurityClassificationEnumType::oPrintSelf(FILE * outFile)
{
  if (SecurityClassificationEnumTypeIsBad())
    {
      fprintf(stderr, "bad SecurityClassificationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SecurityClassificationType

*/

SecurityClassificationType::SecurityClassificationType()
{
  SecurityClassificationTypePair = 0;
}

SecurityClassificationType::SecurityClassificationType(
 SecurityClassificationTypeChoicePair * SecurityClassificationTypePairIn)
{
  SecurityClassificationTypePair = SecurityClassificationTypePairIn;
}

SecurityClassificationType::~SecurityClassificationType()
{
  #ifndef NODESTRUCT
  delete SecurityClassificationTypePair;
  #endif
}

void SecurityClassificationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  SecurityClassificationTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

SecurityClassificationTypeChoicePair * SecurityClassificationType::getSecurityClassificationTypePair()
{return SecurityClassificationTypePair;}

void SecurityClassificationType::setSecurityClassificationTypePair(SecurityClassificationTypeChoicePair * SecurityClassificationTypePairIn)
{SecurityClassificationTypePair = SecurityClassificationTypePairIn;}

/* ***************************************************************** */

/* class SecurityClassificationTypeChoicePair

*/

SecurityClassificationTypeChoicePair::SecurityClassificationTypeChoicePair() {}

SecurityClassificationTypeChoicePair::SecurityClassificationTypeChoicePair(
 whichOne SecurityClassificationTypeTypeIn,
 SecurityClassificationTypeVal SecurityClassificationTypeValueIn)
{
  SecurityClassificationTypeType = SecurityClassificationTypeTypeIn;
  SecurityClassificationTypeValue = SecurityClassificationTypeValueIn;
}

SecurityClassificationTypeChoicePair::~SecurityClassificationTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SecurityClassificationTypeType == SecurityClassificationEnumE)
    delete SecurityClassificationTypeValue.SecurityClassificationEnum;
  else if (SecurityClassificationTypeType == OtherSecurityClassificationE)
    delete SecurityClassificationTypeValue.OtherSecurityClassification;
  #endif
}

void SecurityClassificationTypeChoicePair::printSelf(FILE * outFile)
{
  if (SecurityClassificationTypeType == SecurityClassificationEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecurityClassificationEnum");
      SecurityClassificationTypeValue.SecurityClassificationEnum->printSelf(outFile);
      fprintf(outFile, "</SecurityClassificationEnum>\n");
    }
  else if (SecurityClassificationTypeType == OtherSecurityClassificationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherSecurityClassification");
      SecurityClassificationTypeValue.OtherSecurityClassification->printSelf(outFile);
      fprintf(outFile, "</OtherSecurityClassification>\n");
    }
}

/* ***************************************************************** */

/* class ShapeClassEnumType

*/

ShapeClassEnumType::ShapeClassEnumType() :
  XmlNMTOKEN()
{
}

ShapeClassEnumType::ShapeClassEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "GEAR") &&
           strcmp(val.c_str(), "FREEFORM") &&
           strcmp(val.c_str(), "PRISMATIC") &&
           strcmp(val.c_str(), "ROTATIONAL") &&
           strcmp(val.c_str(), "THINWALLED"));
}

ShapeClassEnumType::~ShapeClassEnumType() {}

bool ShapeClassEnumType::ShapeClassEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "GEAR") &&
          strcmp(val.c_str(), "FREEFORM") &&
          strcmp(val.c_str(), "PRISMATIC") &&
          strcmp(val.c_str(), "ROTATIONAL") &&
          strcmp(val.c_str(), "THINWALLED"));
}

void ShapeClassEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ShapeClassEnumType");
}

void ShapeClassEnumType::printSelf(FILE * outFile)
{
  if (ShapeClassEnumTypeIsBad())
    {
      fprintf(stderr, "bad ShapeClassEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ShapeClassEnumType::oPrintSelf(FILE * outFile)
{
  if (ShapeClassEnumTypeIsBad())
    {
      fprintf(stderr, "bad ShapeClassEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ShapeClassType

*/

ShapeClassType::ShapeClassType()
{
  ShapeClassTypePair = 0;
}

ShapeClassType::ShapeClassType(
 ShapeClassTypeChoicePair * ShapeClassTypePairIn)
{
  ShapeClassTypePair = ShapeClassTypePairIn;
}

ShapeClassType::~ShapeClassType()
{
  #ifndef NODESTRUCT
  delete ShapeClassTypePair;
  #endif
}

void ShapeClassType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ShapeClassTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ShapeClassTypeChoicePair * ShapeClassType::getShapeClassTypePair()
{return ShapeClassTypePair;}

void ShapeClassType::setShapeClassTypePair(ShapeClassTypeChoicePair * ShapeClassTypePairIn)
{ShapeClassTypePair = ShapeClassTypePairIn;}

/* ***************************************************************** */

/* class ShapeClassTypeChoicePair

*/

ShapeClassTypeChoicePair::ShapeClassTypeChoicePair() {}

ShapeClassTypeChoicePair::ShapeClassTypeChoicePair(
 whichOne ShapeClassTypeTypeIn,
 ShapeClassTypeVal ShapeClassTypeValueIn)
{
  ShapeClassTypeType = ShapeClassTypeTypeIn;
  ShapeClassTypeValue = ShapeClassTypeValueIn;
}

ShapeClassTypeChoicePair::~ShapeClassTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ShapeClassTypeType == ShapeClassEnumE)
    delete ShapeClassTypeValue.ShapeClassEnum;
  else if (ShapeClassTypeType == OtherShapeClassE)
    delete ShapeClassTypeValue.OtherShapeClass;
  #endif
}

void ShapeClassTypeChoicePair::printSelf(FILE * outFile)
{
  if (ShapeClassTypeType == ShapeClassEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ShapeClassEnum");
      ShapeClassTypeValue.ShapeClassEnum->printSelf(outFile);
      fprintf(outFile, "</ShapeClassEnum>\n");
    }
  else if (ShapeClassTypeType == OtherShapeClassE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherShapeClass");
      ShapeClassTypeValue.OtherShapeClass->printSelf(outFile);
      fprintf(outFile, "</OtherShapeClass>\n");
    }
}

/* ***************************************************************** */

/* class SlotEndEnumType

*/

SlotEndEnumType::SlotEndEnumType() :
  XmlNMTOKEN()
{
}

SlotEndEnumType::SlotEndEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ROUND") &&
           strcmp(val.c_str(), "FLAT") &&
           strcmp(val.c_str(), "OPEN") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

SlotEndEnumType::~SlotEndEnumType() {}

bool SlotEndEnumType::SlotEndEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ROUND") &&
          strcmp(val.c_str(), "FLAT") &&
          strcmp(val.c_str(), "OPEN") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void SlotEndEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SlotEndEnumType");
}

void SlotEndEnumType::printSelf(FILE * outFile)
{
  if (SlotEndEnumTypeIsBad())
    {
      fprintf(stderr, "bad SlotEndEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SlotEndEnumType::oPrintSelf(FILE * outFile)
{
  if (SlotEndEnumTypeIsBad())
    {
      fprintf(stderr, "bad SlotEndEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SlotEndType

*/

SlotEndType::SlotEndType()
{
  SlotEndTypePair = 0;
}

SlotEndType::SlotEndType(
 SlotEndTypeChoicePair * SlotEndTypePairIn)
{
  SlotEndTypePair = SlotEndTypePairIn;
}

SlotEndType::~SlotEndType()
{
  #ifndef NODESTRUCT
  delete SlotEndTypePair;
  #endif
}

void SlotEndType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  SlotEndTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

SlotEndTypeChoicePair * SlotEndType::getSlotEndTypePair()
{return SlotEndTypePair;}

void SlotEndType::setSlotEndTypePair(SlotEndTypeChoicePair * SlotEndTypePairIn)
{SlotEndTypePair = SlotEndTypePairIn;}

/* ***************************************************************** */

/* class SlotEndTypeChoicePair

*/

SlotEndTypeChoicePair::SlotEndTypeChoicePair() {}

SlotEndTypeChoicePair::SlotEndTypeChoicePair(
 whichOne SlotEndTypeTypeIn,
 SlotEndTypeVal SlotEndTypeValueIn)
{
  SlotEndTypeType = SlotEndTypeTypeIn;
  SlotEndTypeValue = SlotEndTypeValueIn;
}

SlotEndTypeChoicePair::~SlotEndTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (SlotEndTypeType == SlotEndEnumE)
    delete SlotEndTypeValue.SlotEndEnum;
  else if (SlotEndTypeType == OtherSlotEndE)
    delete SlotEndTypeValue.OtherSlotEnd;
  #endif
}

void SlotEndTypeChoicePair::printSelf(FILE * outFile)
{
  if (SlotEndTypeType == SlotEndEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SlotEndEnum");
      SlotEndTypeValue.SlotEndEnum->printSelf(outFile);
      fprintf(outFile, "</SlotEndEnum>\n");
    }
  else if (SlotEndTypeType == OtherSlotEndE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherSlotEnd");
      SlotEndTypeValue.OtherSlotEnd->printSelf(outFile);
      fprintf(outFile, "</OtherSlotEnd>\n");
    }
}

/* ***************************************************************** */

/* class SphereType

*/

SphereType::SphereType()
{
  CenterPoint = 0;
  Diameter = 0;
}

SphereType::SphereType(
 PointType * CenterPointIn,
 LinearValueType * DiameterIn)
{
  CenterPoint = CenterPointIn;
  Diameter = DiameterIn;
}

SphereType::~SphereType()
{
  #ifndef NODESTRUCT
  delete CenterPoint;
  delete Diameter;
  #endif
}

void SphereType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<CenterPoint");
  CenterPoint->printSelf(outFile);
  fprintf(outFile, "</CenterPoint>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Diameter");
  Diameter->printSelf(outFile);
  fprintf(outFile, "</Diameter>\n");
  doSpaces(-INDENT, outFile);
}

PointType * SphereType::getCenterPoint()
{return CenterPoint;}

void SphereType::setCenterPoint(PointType * CenterPointIn)
{CenterPoint = CenterPointIn;}

LinearValueType * SphereType::getDiameter()
{return Diameter;}

void SphereType::setDiameter(LinearValueType * DiameterIn)
{Diameter = DiameterIn;}

/* ***************************************************************** */

/* class StatsMeasuredDecimalType

*/

StatsMeasuredDecimalType::StatsMeasuredDecimalType() :
  StatsWithReferenceBaseType()
{
  Value = 0;
}

StatsMeasuredDecimalType::StatsMeasuredDecimalType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 MeasuredDecimalType * ValueIn) :
  StatsWithReferenceBaseType(
    StatsWithRefere_1007In)
{
  Value = ValueIn;
}

StatsMeasuredDecimalType::~StatsMeasuredDecimalType()
{
  #ifndef NODESTRUCT
  delete Value;
  #endif
}

void StatsMeasuredDecimalType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Value");
  Value->printSelf(outFile);
  fprintf(outFile, "</Value>\n");
  doSpaces(-INDENT, outFile);
}

MeasuredDecimalType * StatsMeasuredDecimalType::getValue()
{return Value;}

void StatsMeasuredDecimalType::setValue(MeasuredDecimalType * ValueIn)
{Value = ValueIn;}

/* ***************************************************************** */

/* class StatsMeasuredDecimalWithReferenceType

*/

StatsMeasuredDecimalWithReferenceType::StatsMeasuredDecimalWithReferenceType() :
  StatsMeasuredDecimalType()
{
  Id = 0;
}

StatsMeasuredDecimalWithReferenceType::StatsMeasuredDecimalWithReferenceType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 MeasuredDecimalType * ValueIn,
 QIFReferenceType * IdIn) :
  StatsMeasuredDecimalType(
    StatsWithRefere_1007In,
    ValueIn)
{
  Id = IdIn;
}

StatsMeasuredDecimalWithReferenceType::~StatsMeasuredDecimalWithReferenceType()
{
  #ifndef NODESTRUCT
  delete Id;
  #endif
}

void StatsMeasuredDecimalWithReferenceType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Value");
  Value->printSelf(outFile);
  fprintf(outFile, "</Value>\n");
  if (Id)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Id");
      Id->printSelf(outFile);
      fprintf(outFile, "</Id>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * StatsMeasuredDecimalWithReferenceType::getId()
{return Id;}

void StatsMeasuredDecimalWithReferenceType::setId(QIFReferenceType * IdIn)
{Id = IdIn;}

/* ***************************************************************** */

/* class StatsNonNegativeIntegerType

*/

StatsNonNegativeIntegerType::StatsNonNegativeIntegerType() :
  StatsWithReferenceBaseType()
{
  Value = 0;
}

StatsNonNegativeIntegerType::StatsNonNegativeIntegerType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 XmlNonNegativeInteger * ValueIn) :
  StatsWithReferenceBaseType(
    StatsWithRefere_1007In)
{
  Value = ValueIn;
}

StatsNonNegativeIntegerType::~StatsNonNegativeIntegerType()
{
  #ifndef NODESTRUCT
  delete Value;
  #endif
}

void StatsNonNegativeIntegerType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Value");
  Value->printSelf(outFile);
  fprintf(outFile, "</Value>\n");
  doSpaces(-INDENT, outFile);
}

XmlNonNegativeInteger * StatsNonNegativeIntegerType::getValue()
{return Value;}

void StatsNonNegativeIntegerType::setValue(XmlNonNegativeInteger * ValueIn)
{Value = ValueIn;}

/* ***************************************************************** */

/* class StatsNonNegativeIntegerWithReferencesType

*/

StatsNonNegativeIntegerWithReferencesType::StatsNonNegativeIntegerWithReferencesType() :
  StatsNonNegativeIntegerType()
{
  Ids = 0;
}

StatsNonNegativeIntegerWithReferencesType::StatsNonNegativeIntegerWithReferencesType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 XmlNonNegativeInteger * ValueIn,
 ArrayReferenceType * IdsIn) :
  StatsNonNegativeIntegerType(
    StatsWithRefere_1007In,
    ValueIn)
{
  Ids = IdsIn;
}

StatsNonNegativeIntegerWithReferencesType::~StatsNonNegativeIntegerWithReferencesType()
{
  #ifndef NODESTRUCT
  delete Ids;
  #endif
}

void StatsNonNegativeIntegerWithReferencesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Value");
  Value->printSelf(outFile);
  fprintf(outFile, "</Value>\n");
  if (Ids)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Ids");
      Ids->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Ids>\n");
    }
  doSpaces(-INDENT, outFile);
}

ArrayReferenceType * StatsNonNegativeIntegerWithReferencesType::getIds()
{return Ids;}

void StatsNonNegativeIntegerWithReferencesType::setIds(ArrayReferenceType * IdsIn)
{Ids = IdsIn;}

/* ***************************************************************** */

/* class StatsValuesEnumType

*/

StatsValuesEnumType::StatsValuesEnumType() :
  XmlNMTOKEN()
{
}

StatsValuesEnumType::StatsValuesEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "TOTNUM") &&
           strcmp(val.c_str(), "EFFNUM") &&
           strcmp(val.c_str(), "NUMSUB") &&
           strcmp(val.c_str(), "AVG") &&
           strcmp(val.c_str(), "DIFF") &&
           strcmp(val.c_str(), "RMS") &&
           strcmp(val.c_str(), "MAX") &&
           strcmp(val.c_str(), "MIN") &&
           strcmp(val.c_str(), "RANGE") &&
           strcmp(val.c_str(), "AVGRNG") &&
           strcmp(val.c_str(), "STDDEV") &&
           strcmp(val.c_str(), "SKEW") &&
           strcmp(val.c_str(), "KURT") &&
           strcmp(val.c_str(), "NORM") &&
           strcmp(val.c_str(), "PROVAR") &&
           strcmp(val.c_str(), "ESTSTDV") &&
           strcmp(val.c_str(), "UCL") &&
           strcmp(val.c_str(), "LCL") &&
           strcmp(val.c_str(), "UCLRNG") &&
           strcmp(val.c_str(), "LCLRNG") &&
           strcmp(val.c_str(), "NUMOOC") &&
           strcmp(val.c_str(), "NUMOOT") &&
           strcmp(val.c_str(), "NOOTHI") &&
           strcmp(val.c_str(), "NOOTLO") &&
           strcmp(val.c_str(), "CP") &&
           strcmp(val.c_str(), "CPK") &&
           strcmp(val.c_str(), "PP") &&
           strcmp(val.c_str(), "PPK") &&
           strcmp(val.c_str(), "CM") &&
           strcmp(val.c_str(), "CMK") &&
           strcmp(val.c_str(), "CPM") &&
           strcmp(val.c_str(), "AV") &&
           strcmp(val.c_str(), "REL_AV") &&
           strcmp(val.c_str(), "EV") &&
           strcmp(val.c_str(), "REL_EV") &&
           strcmp(val.c_str(), "INTERACTION") &&
           strcmp(val.c_str(), "REL_INTERACTION") &&
           strcmp(val.c_str(), "RANDR") &&
           strcmp(val.c_str(), "REL_RANDR") &&
           strcmp(val.c_str(), "PV") &&
           strcmp(val.c_str(), "REL_PV") &&
           strcmp(val.c_str(), "TV") &&
           strcmp(val.c_str(), "REL_TV") &&
           strcmp(val.c_str(), "LNRTY") &&
           strcmp(val.c_str(), "BIAS") &&
           strcmp(val.c_str(), "REL_LNRTY") &&
           strcmp(val.c_str(), "REL_BIAS") &&
           strcmp(val.c_str(), "R_SQR") &&
           strcmp(val.c_str(), "SLOPE") &&
           strcmp(val.c_str(), "INTCPT") &&
           strcmp(val.c_str(), "UPRCONFLIM") &&
           strcmp(val.c_str(), "LWRCONFLIM") &&
           strcmp(val.c_str(), "TDIST"));
}

StatsValuesEnumType::~StatsValuesEnumType() {}

bool StatsValuesEnumType::StatsValuesEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "TOTNUM") &&
          strcmp(val.c_str(), "EFFNUM") &&
          strcmp(val.c_str(), "NUMSUB") &&
          strcmp(val.c_str(), "AVG") &&
          strcmp(val.c_str(), "DIFF") &&
          strcmp(val.c_str(), "RMS") &&
          strcmp(val.c_str(), "MAX") &&
          strcmp(val.c_str(), "MIN") &&
          strcmp(val.c_str(), "RANGE") &&
          strcmp(val.c_str(), "AVGRNG") &&
          strcmp(val.c_str(), "STDDEV") &&
          strcmp(val.c_str(), "SKEW") &&
          strcmp(val.c_str(), "KURT") &&
          strcmp(val.c_str(), "NORM") &&
          strcmp(val.c_str(), "PROVAR") &&
          strcmp(val.c_str(), "ESTSTDV") &&
          strcmp(val.c_str(), "UCL") &&
          strcmp(val.c_str(), "LCL") &&
          strcmp(val.c_str(), "UCLRNG") &&
          strcmp(val.c_str(), "LCLRNG") &&
          strcmp(val.c_str(), "NUMOOC") &&
          strcmp(val.c_str(), "NUMOOT") &&
          strcmp(val.c_str(), "NOOTHI") &&
          strcmp(val.c_str(), "NOOTLO") &&
          strcmp(val.c_str(), "CP") &&
          strcmp(val.c_str(), "CPK") &&
          strcmp(val.c_str(), "PP") &&
          strcmp(val.c_str(), "PPK") &&
          strcmp(val.c_str(), "CM") &&
          strcmp(val.c_str(), "CMK") &&
          strcmp(val.c_str(), "CPM") &&
          strcmp(val.c_str(), "AV") &&
          strcmp(val.c_str(), "REL_AV") &&
          strcmp(val.c_str(), "EV") &&
          strcmp(val.c_str(), "REL_EV") &&
          strcmp(val.c_str(), "INTERACTION") &&
          strcmp(val.c_str(), "REL_INTERACTION") &&
          strcmp(val.c_str(), "RANDR") &&
          strcmp(val.c_str(), "REL_RANDR") &&
          strcmp(val.c_str(), "PV") &&
          strcmp(val.c_str(), "REL_PV") &&
          strcmp(val.c_str(), "TV") &&
          strcmp(val.c_str(), "REL_TV") &&
          strcmp(val.c_str(), "LNRTY") &&
          strcmp(val.c_str(), "BIAS") &&
          strcmp(val.c_str(), "REL_LNRTY") &&
          strcmp(val.c_str(), "REL_BIAS") &&
          strcmp(val.c_str(), "R_SQR") &&
          strcmp(val.c_str(), "SLOPE") &&
          strcmp(val.c_str(), "INTCPT") &&
          strcmp(val.c_str(), "UPRCONFLIM") &&
          strcmp(val.c_str(), "LWRCONFLIM") &&
          strcmp(val.c_str(), "TDIST"));
}

void StatsValuesEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "StatsValuesEnumType");
}

void StatsValuesEnumType::printSelf(FILE * outFile)
{
  if (StatsValuesEnumTypeIsBad())
    {
      fprintf(stderr, "bad StatsValuesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void StatsValuesEnumType::oPrintSelf(FILE * outFile)
{
  if (StatsValuesEnumTypeIsBad())
    {
      fprintf(stderr, "bad StatsValuesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class StatsWithReferenceBaseType

*/

StatsWithReferenceBaseType::StatsWithReferenceBaseType()
{
  StatsWithRefere_1007 = 0;
}

StatsWithReferenceBaseType::StatsWithReferenceBaseType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In)
{
  StatsWithRefere_1007 = StatsWithRefere_1007In;
}

StatsWithReferenceBaseType::~StatsWithReferenceBaseType()
{
  #ifndef NODESTRUCT
  delete StatsWithRefere_1007;
  #endif
}

void StatsWithReferenceBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

StatsWithRefere_1007_Type * StatsWithReferenceBaseType::getStatsWithRefere_1007()
{return StatsWithRefere_1007;}

void StatsWithReferenceBaseType::setStatsWithRefere_1007(StatsWithRefere_1007_Type * StatsWithRefere_1007In)
{StatsWithRefere_1007 = StatsWithRefere_1007In;}

/* ***************************************************************** */

/* class StatsWithReferenceBaseTypeLisd

*/

StatsWithReferenceBaseTypeLisd::StatsWithReferenceBaseTypeLisd() {}

StatsWithReferenceBaseTypeLisd::StatsWithReferenceBaseTypeLisd(StatsWithReferenceBaseType * aStatsWithReferenceBaseType)
{
  push_back(aStatsWithReferenceBaseType);
}

StatsWithReferenceBaseTypeLisd::~StatsWithReferenceBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<StatsWithReferenceBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void StatsWithReferenceBaseTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SubgroupDecimalArrayType

*/

SubgroupDecimalArrayType::SubgroupDecimalArrayType()
{
  n = 0;
  SubgroupDecimal = 0;
}

SubgroupDecimalArrayType::SubgroupDecimalArrayType(
 SubgroupDecimalTypeLisd * SubgroupDecimalIn)
{
  n = 0;
  SubgroupDecimal = SubgroupDecimalIn;
}

SubgroupDecimalArrayType::SubgroupDecimalArrayType(
 NaturalType * nIn,
 SubgroupDecimalTypeLisd * SubgroupDecimalIn)
{
  n = nIn;
  SubgroupDecimal = SubgroupDecimalIn;
}

SubgroupDecimalArrayType::~SubgroupDecimalArrayType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SubgroupDecimal;
  #endif
}

void SubgroupDecimalArrayType::printSelf(FILE * outFile)
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
    if (!SubgroupDecimal)
      {
        fprintf(stderr, "SubgroupDecimal list is missing\n");
        exit(1);
      }
    if (SubgroupDecimal->size() == 0)
      {
        fprintf(stderr, "SubgroupDecimal list is empty\n");
        exit(1);
      }
    std::list<SubgroupDecimalType *>::iterator iter;
    for (iter = SubgroupDecimal->begin();
         iter != SubgroupDecimal->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SubgroupDecimal");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</SubgroupDecimal>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SubgroupDecimalArrayType::badAttributes(
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
              fprintf(stderr, "two values for n in SubgroupDecimalArrayType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SubgroupDecimalArrayType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SubgroupDecimalArrayType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SubgroupDecimalArrayType\n");
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

NaturalType * SubgroupDecimalArrayType::getn()
{return n;}

void SubgroupDecimalArrayType::setn(NaturalType * nIn)
{n = nIn;}

SubgroupDecimalTypeLisd * SubgroupDecimalArrayType::getSubgroupDecimal()
{return SubgroupDecimal;}

void SubgroupDecimalArrayType::setSubgroupDecimal(SubgroupDecimalTypeLisd * SubgroupDecimalIn)
{SubgroupDecimal = SubgroupDecimalIn;}

/* ***************************************************************** */

/* class SubgroupDecimalType

*/

SubgroupDecimalType::SubgroupDecimalType() :
  MeasuredDecimalType()
{
  subgroupId = 0;
  val = 0;
}

SubgroupDecimalType::SubgroupDecimalType(
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  subgroupId = 0;
}

SubgroupDecimalType::SubgroupDecimalType(
 NonNegativeDecimalType * combinedUncertaintyIn,
 XmlNonNegativeInteger * decimalPlacesIn,
 NonNegativeDecimalType * meanErrorIn,
 XmlNonNegativeInteger * significantFiguresIn,
 QIFIdType * subgroupIdIn,
 const char * valStringIn) :
  MeasuredDecimalType(valStringIn)
{
  combinedUncertainty = combinedUncertaintyIn;
  decimalPlaces = decimalPlacesIn;
  meanError = meanErrorIn;
  significantFigures = significantFiguresIn;
  subgroupId = subgroupIdIn;
}

SubgroupDecimalType::~SubgroupDecimalType()
{
  #ifndef NODESTRUCT
  delete subgroupId;
  #endif
}

void SubgroupDecimalType::printName(FILE * outFile)
{
  fprintf(outFile, "SubgroupDecimalType");
}

void SubgroupDecimalType::printSelf(FILE * outFile)
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
  if (subgroupId)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "subgroupId=\"");
      subgroupId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"subgroupId\" missing\n");
      exit(1);
    }
  XmlDecimal::printSelf(outFile);
}

bool SubgroupDecimalType::badAttributes(
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
          if (combinedUncertainty)
            {
              fprintf(stderr, "two values for combinedUncertainty in SubgroupDecimalType\n");
              returnValue = true;
              break;
            }
          combinedUncertaintyVal = new NonNegativeDecimalType(decl->val.c_str());
          if (combinedUncertaintyVal->bad)
            {
              delete combinedUncertaintyVal;
              fprintf(stderr, "bad value %s for combinedUncertainty in SubgroupDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            combinedUncertainty = combinedUncertaintyVal;
        }
      else if (decl->name == "decimalPlaces")
        {
          XmlNonNegativeInteger * decimalPlacesVal;
          if (decimalPlaces)
            {
              fprintf(stderr, "two values for decimalPlaces in SubgroupDecimalType\n");
              returnValue = true;
              break;
            }
          decimalPlacesVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (decimalPlacesVal->bad)
            {
              delete decimalPlacesVal;
              fprintf(stderr, "bad value %s for decimalPlaces in SubgroupDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            decimalPlaces = decimalPlacesVal;
        }
      else if (decl->name == "meanError")
        {
          NonNegativeDecimalType * meanErrorVal;
          if (meanError)
            {
              fprintf(stderr, "two values for meanError in SubgroupDecimalType\n");
              returnValue = true;
              break;
            }
          meanErrorVal = new NonNegativeDecimalType(decl->val.c_str());
          if (meanErrorVal->bad)
            {
              delete meanErrorVal;
              fprintf(stderr, "bad value %s for meanError in SubgroupDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            meanError = meanErrorVal;
        }
      else if (decl->name == "significantFigures")
        {
          XmlNonNegativeInteger * significantFiguresVal;
          if (significantFigures)
            {
              fprintf(stderr, "two values for significantFigures in SubgroupDecimalType\n");
              returnValue = true;
              break;
            }
          significantFiguresVal = new XmlNonNegativeInteger(decl->val.c_str());
          if (significantFiguresVal->bad)
            {
              delete significantFiguresVal;
              fprintf(stderr, "bad value %s for significantFigures in SubgroupDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            significantFigures = significantFiguresVal;
        }
      else if (decl->name == "subgroupId")
        {
          QIFIdType * subgroupIdVal;
          if (subgroupId)
            {
              fprintf(stderr, "two values for subgroupId in SubgroupDecimalType\n");
              returnValue = true;
              break;
            }
          subgroupIdVal = new QIFIdType(decl->val.c_str());
          if (subgroupIdVal->bad)
            {
              delete subgroupIdVal;
              fprintf(stderr, "bad value %s for subgroupId in SubgroupDecimalType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            subgroupId = subgroupIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SubgroupDecimalType\n");
          returnValue = true;
          break;
        }
    }
  if (subgroupId == 0)
    {
      fprintf(stderr, "required attribute \"subgroupId\" missing in SubgroupDecimalType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete combinedUncertainty;
      combinedUncertainty = 0;
      delete decimalPlaces;
      decimalPlaces = 0;
      delete meanError;
      meanError = 0;
      delete significantFigures;
      significantFigures = 0;
      delete subgroupId;
      subgroupId = 0;
    }
  return returnValue;
}

QIFIdType * SubgroupDecimalType::getsubgroupId()
{return subgroupId;}

void SubgroupDecimalType::setsubgroupId(QIFIdType * subgroupIdIn)
{subgroupId = subgroupIdIn;}

/* ***************************************************************** */

/* class SubgroupDecimalTypeLisd

*/

SubgroupDecimalTypeLisd::SubgroupDecimalTypeLisd() {}

SubgroupDecimalTypeLisd::SubgroupDecimalTypeLisd(SubgroupDecimalType * aSubgroupDecimalType)
{
  push_back(aSubgroupDecimalType);
}

SubgroupDecimalTypeLisd::~SubgroupDecimalTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SubgroupDecimalType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SubgroupDecimalTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SubgroupDecimalsType

*/

SubgroupDecimalsType::SubgroupDecimalsType() :
  StatsWithReferenceBaseType()
{
  Values = 0;
}

SubgroupDecimalsType::SubgroupDecimalsType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 SubgroupDecimalArrayType * ValuesIn) :
  StatsWithReferenceBaseType(
    StatsWithRefere_1007In)
{
  Values = ValuesIn;
}

SubgroupDecimalsType::~SubgroupDecimalsType()
{
  #ifndef NODESTRUCT
  delete Values;
  #endif
}

void SubgroupDecimalsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Values");
  Values->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Values>\n");
  doSpaces(-INDENT, outFile);
}

SubgroupDecimalArrayType * SubgroupDecimalsType::getValues()
{return Values;}

void SubgroupDecimalsType::setValues(SubgroupDecimalArrayType * ValuesIn)
{Values = ValuesIn;}

/* ***************************************************************** */

/* class SubgroupIntegerArrayType

*/

SubgroupIntegerArrayType::SubgroupIntegerArrayType()
{
  n = 0;
  SubgroupInteger = 0;
}

SubgroupIntegerArrayType::SubgroupIntegerArrayType(
 SubgroupIntegerTypeLisd * SubgroupIntegerIn)
{
  n = 0;
  SubgroupInteger = SubgroupIntegerIn;
}

SubgroupIntegerArrayType::SubgroupIntegerArrayType(
 NaturalType * nIn,
 SubgroupIntegerTypeLisd * SubgroupIntegerIn)
{
  n = nIn;
  SubgroupInteger = SubgroupIntegerIn;
}

SubgroupIntegerArrayType::~SubgroupIntegerArrayType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SubgroupInteger;
  #endif
}

void SubgroupIntegerArrayType::printSelf(FILE * outFile)
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
    if (!SubgroupInteger)
      {
        fprintf(stderr, "SubgroupInteger list is missing\n");
        exit(1);
      }
    if (SubgroupInteger->size() == 0)
      {
        fprintf(stderr, "SubgroupInteger list is empty\n");
        exit(1);
      }
    std::list<SubgroupIntegerType *>::iterator iter;
    for (iter = SubgroupInteger->begin();
         iter != SubgroupInteger->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SubgroupInteger");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</SubgroupInteger>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SubgroupIntegerArrayType::badAttributes(
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
              fprintf(stderr, "two values for n in SubgroupIntegerArrayType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SubgroupIntegerArrayType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SubgroupIntegerArrayType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SubgroupIntegerArrayType\n");
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

NaturalType * SubgroupIntegerArrayType::getn()
{return n;}

void SubgroupIntegerArrayType::setn(NaturalType * nIn)
{n = nIn;}

SubgroupIntegerTypeLisd * SubgroupIntegerArrayType::getSubgroupInteger()
{return SubgroupInteger;}

void SubgroupIntegerArrayType::setSubgroupInteger(SubgroupIntegerTypeLisd * SubgroupIntegerIn)
{SubgroupInteger = SubgroupIntegerIn;}

/* ***************************************************************** */

/* class SubgroupIntegerType

*/

SubgroupIntegerType::SubgroupIntegerType()
{
  subgroupId = 0;
  val = 0;
}

SubgroupIntegerType::SubgroupIntegerType(
 const char * valStringIn) :
  XmlNonNegativeInteger(valStringIn)
{
  subgroupId = 0;
}

SubgroupIntegerType::SubgroupIntegerType(
 QIFIdType * subgroupIdIn,
 const char * valStringIn) :
  XmlNonNegativeInteger(valStringIn)
{
  subgroupId = subgroupIdIn;
}

SubgroupIntegerType::~SubgroupIntegerType()
{
  #ifndef NODESTRUCT
  delete subgroupId;
  #endif
}

void SubgroupIntegerType::printName(FILE * outFile)
{
  fprintf(outFile, "SubgroupIntegerType");
}

void SubgroupIntegerType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (subgroupId)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "subgroupId=\"");
      subgroupId->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"subgroupId\" missing\n");
      exit(1);
    }
  XmlNonNegativeInteger::printSelf(outFile);
}

bool SubgroupIntegerType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "subgroupId")
        {
          QIFIdType * subgroupIdVal;
          if (subgroupId)
            {
              fprintf(stderr, "two values for subgroupId in SubgroupIntegerType\n");
              returnValue = true;
              break;
            }
          subgroupIdVal = new QIFIdType(decl->val.c_str());
          if (subgroupIdVal->bad)
            {
              delete subgroupIdVal;
              fprintf(stderr, "bad value %s for subgroupId in SubgroupIntegerType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            subgroupId = subgroupIdVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SubgroupIntegerType\n");
          returnValue = true;
          break;
        }
    }
  if (subgroupId == 0)
    {
      fprintf(stderr, "required attribute \"subgroupId\" missing in SubgroupIntegerType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete subgroupId;
      subgroupId = 0;
    }
  return returnValue;
}

QIFIdType * SubgroupIntegerType::getsubgroupId()
{return subgroupId;}

void SubgroupIntegerType::setsubgroupId(QIFIdType * subgroupIdIn)
{subgroupId = subgroupIdIn;}

/* ***************************************************************** */

/* class SubgroupIntegerTypeLisd

*/

SubgroupIntegerTypeLisd::SubgroupIntegerTypeLisd() {}

SubgroupIntegerTypeLisd::SubgroupIntegerTypeLisd(SubgroupIntegerType * aSubgroupIntegerType)
{
  push_back(aSubgroupIntegerType);
}

SubgroupIntegerTypeLisd::~SubgroupIntegerTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SubgroupIntegerType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SubgroupIntegerTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SubgroupIntegersType

*/

SubgroupIntegersType::SubgroupIntegersType() :
  StatsWithReferenceBaseType()
{
  Values = 0;
}

SubgroupIntegersType::SubgroupIntegersType(
 StatsWithRefere_1007_Type * StatsWithRefere_1007In,
 SubgroupIntegerArrayType * ValuesIn) :
  StatsWithReferenceBaseType(
    StatsWithRefere_1007In)
{
  Values = ValuesIn;
}

SubgroupIntegersType::~SubgroupIntegersType()
{
  #ifndef NODESTRUCT
  delete Values;
  #endif
}

void SubgroupIntegersType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatsWithRefere_1007)
    {
      StatsWithRefere_1007->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Values");
  Values->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Values>\n");
  doSpaces(-INDENT, outFile);
}

SubgroupIntegerArrayType * SubgroupIntegersType::getValues()
{return Values;}

void SubgroupIntegersType::setValues(SubgroupIntegerArrayType * ValuesIn)
{Values = ValuesIn;}

/* ***************************************************************** */

/* class SubgroupStatsValuesEnumType

*/

SubgroupStatsValuesEnumType::SubgroupStatsValuesEnumType() :
  XmlNMTOKEN()
{
}

SubgroupStatsValuesEnumType::SubgroupStatsValuesEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "TOTNUM") &&
           strcmp(val.c_str(), "EFFNUM") &&
           strcmp(val.c_str(), "AVG") &&
           strcmp(val.c_str(), "DIFF") &&
           strcmp(val.c_str(), "MAX") &&
           strcmp(val.c_str(), "MIN") &&
           strcmp(val.c_str(), "RANGE") &&
           strcmp(val.c_str(), "NUMOOT") &&
           strcmp(val.c_str(), "NOOTHI") &&
           strcmp(val.c_str(), "NOOTLO"));
}

SubgroupStatsValuesEnumType::~SubgroupStatsValuesEnumType() {}

bool SubgroupStatsValuesEnumType::SubgroupStatsValuesEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "TOTNUM") &&
          strcmp(val.c_str(), "EFFNUM") &&
          strcmp(val.c_str(), "AVG") &&
          strcmp(val.c_str(), "DIFF") &&
          strcmp(val.c_str(), "MAX") &&
          strcmp(val.c_str(), "MIN") &&
          strcmp(val.c_str(), "RANGE") &&
          strcmp(val.c_str(), "NUMOOT") &&
          strcmp(val.c_str(), "NOOTHI") &&
          strcmp(val.c_str(), "NOOTLO"));
}

void SubgroupStatsValuesEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SubgroupStatsValuesEnumType");
}

void SubgroupStatsValuesEnumType::printSelf(FILE * outFile)
{
  if (SubgroupStatsValuesEnumTypeIsBad())
    {
      fprintf(stderr, "bad SubgroupStatsValuesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SubgroupStatsValuesEnumType::oPrintSelf(FILE * outFile)
{
  if (SubgroupStatsValuesEnumTypeIsBad())
    {
      fprintf(stderr, "bad SubgroupStatsValuesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SummaryStatsValuesEnumType

*/

SummaryStatsValuesEnumType::SummaryStatsValuesEnumType() :
  XmlNMTOKEN()
{
}

SummaryStatsValuesEnumType::SummaryStatsValuesEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "AVG") &&
           strcmp(val.c_str(), "MAX") &&
           strcmp(val.c_str(), "MIN") &&
           strcmp(val.c_str(), "RANGE") &&
           strcmp(val.c_str(), "STDDEV"));
}

SummaryStatsValuesEnumType::~SummaryStatsValuesEnumType() {}

bool SummaryStatsValuesEnumType::SummaryStatsValuesEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "AVG") &&
          strcmp(val.c_str(), "MAX") &&
          strcmp(val.c_str(), "MIN") &&
          strcmp(val.c_str(), "RANGE") &&
          strcmp(val.c_str(), "STDDEV"));
}

void SummaryStatsValuesEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "SummaryStatsValuesEnumType");
}

void SummaryStatsValuesEnumType::printSelf(FILE * outFile)
{
  if (SummaryStatsValuesEnumTypeIsBad())
    {
      fprintf(stderr, "bad SummaryStatsValuesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void SummaryStatsValuesEnumType::oPrintSelf(FILE * outFile)
{
  if (SummaryStatsValuesEnumTypeIsBad())
    {
      fprintf(stderr, "bad SummaryStatsValuesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class SummaryStatsValuesListType

*/

SummaryStatsValuesListType::SummaryStatsValuesListType()
{
  n = 0;
  SummaryStatsValues = 0;
}

SummaryStatsValuesListType::SummaryStatsValuesListType(
 SummaryStatsValuesTypeLisd * SummaryStatsValuesIn)
{
  n = 0;
  SummaryStatsValues = SummaryStatsValuesIn;
}

SummaryStatsValuesListType::SummaryStatsValuesListType(
 NaturalType * nIn,
 SummaryStatsValuesTypeLisd * SummaryStatsValuesIn)
{
  n = nIn;
  SummaryStatsValues = SummaryStatsValuesIn;
}

SummaryStatsValuesListType::~SummaryStatsValuesListType()
{
  #ifndef NODESTRUCT
  delete n;
  delete SummaryStatsValues;
  #endif
}

void SummaryStatsValuesListType::printSelf(FILE * outFile)
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
    if (!SummaryStatsValues)
      {
        fprintf(stderr, "SummaryStatsValues list is missing\n");
        exit(1);
      }
    if (SummaryStatsValues->size() == 0)
      {
        fprintf(stderr, "SummaryStatsValues list is empty\n");
        exit(1);
      }
    std::list<SummaryStatsValuesType *>::iterator iter;
    for (iter = SummaryStatsValues->begin();
         iter != SummaryStatsValues->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<SummaryStatsValues");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</SummaryStatsValues>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool SummaryStatsValuesListType::badAttributes(
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
              fprintf(stderr, "two values for n in SummaryStatsValuesListType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in SummaryStatsValuesListType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SummaryStatsValuesListType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in SummaryStatsValuesListType\n");
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

NaturalType * SummaryStatsValuesListType::getn()
{return n;}

void SummaryStatsValuesListType::setn(NaturalType * nIn)
{n = nIn;}

SummaryStatsValuesTypeLisd * SummaryStatsValuesListType::getSummaryStatsValues()
{return SummaryStatsValues;}

void SummaryStatsValuesListType::setSummaryStatsValues(SummaryStatsValuesTypeLisd * SummaryStatsValuesIn)
{SummaryStatsValues = SummaryStatsValuesIn;}

/* ***************************************************************** */

/* class SummaryStatsValuesListTypeLisd

*/

SummaryStatsValuesListTypeLisd::SummaryStatsValuesListTypeLisd() {}

SummaryStatsValuesListTypeLisd::SummaryStatsValuesListTypeLisd(SummaryStatsValuesListType * aSummaryStatsValuesListType)
{
  push_back(aSummaryStatsValuesListType);
}

SummaryStatsValuesListTypeLisd::~SummaryStatsValuesListTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SummaryStatsValuesListType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SummaryStatsValuesListTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class SummaryStatsValuesType

*/

SummaryStatsValuesType::SummaryStatsValuesType()
{
  SummaryType = 0;
  SummaryStats = 0;
}

SummaryStatsValuesType::SummaryStatsValuesType(
 SummaryStatsValuesEnumType * SummaryTypeIn,
 ListSummaryStatsValuesType * SummaryStatsIn)
{
  SummaryType = SummaryTypeIn;
  SummaryStats = SummaryStatsIn;
}

SummaryStatsValuesType::~SummaryStatsValuesType()
{
  #ifndef NODESTRUCT
  delete SummaryType;
  delete SummaryStats;
  #endif
}

void SummaryStatsValuesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SummaryType");
  SummaryType->printSelf(outFile);
  fprintf(outFile, "</SummaryType>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SummaryStats");
  SummaryStats->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</SummaryStats>\n");
  doSpaces(-INDENT, outFile);
}

SummaryStatsValuesEnumType * SummaryStatsValuesType::getSummaryType()
{return SummaryType;}

void SummaryStatsValuesType::setSummaryType(SummaryStatsValuesEnumType * SummaryTypeIn)
{SummaryType = SummaryTypeIn;}

ListSummaryStatsValuesType * SummaryStatsValuesType::getSummaryStats()
{return SummaryStats;}

void SummaryStatsValuesType::setSummaryStats(ListSummaryStatsValuesType * SummaryStatsIn)
{SummaryStats = SummaryStatsIn;}

/* ***************************************************************** */

/* class SummaryStatsValuesTypeLisd

*/

SummaryStatsValuesTypeLisd::SummaryStatsValuesTypeLisd() {}

SummaryStatsValuesTypeLisd::SummaryStatsValuesTypeLisd(SummaryStatsValuesType * aSummaryStatsValuesType)
{
  push_back(aSummaryStatsValuesType);
}

SummaryStatsValuesTypeLisd::~SummaryStatsValuesTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<SummaryStatsValuesType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void SummaryStatsValuesTypeLisd::printSelf(FILE * outFile){}

/* ***************************************************************** */

/* class ThreadClassEnumType

*/

ThreadClassEnumType::ThreadClassEnumType() :
  XmlNMTOKEN()
{
}

ThreadClassEnumType::ThreadClassEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "1A") &&
           strcmp(val.c_str(), "1B") &&
           strcmp(val.c_str(), "2A") &&
           strcmp(val.c_str(), "2AG") &&
           strcmp(val.c_str(), "2B") &&
           strcmp(val.c_str(), "3A") &&
           strcmp(val.c_str(), "3B") &&
           strcmp(val.c_str(), "EXT_3E") &&
           strcmp(val.c_str(), "EXT_3F") &&
           strcmp(val.c_str(), "EXT_3G") &&
           strcmp(val.c_str(), "EXT_3H") &&
           strcmp(val.c_str(), "EXT_4E") &&
           strcmp(val.c_str(), "EXT_4F") &&
           strcmp(val.c_str(), "EXT_4G") &&
           strcmp(val.c_str(), "EXT_4H") &&
           strcmp(val.c_str(), "4G") &&
           strcmp(val.c_str(), "4H") &&
           strcmp(val.c_str(), "EXT_5E") &&
           strcmp(val.c_str(), "EXT_5F") &&
           strcmp(val.c_str(), "EXT_5G") &&
           strcmp(val.c_str(), "EXT_5H") &&
           strcmp(val.c_str(), "5G") &&
           strcmp(val.c_str(), "5H") &&
           strcmp(val.c_str(), "EXT_6E") &&
           strcmp(val.c_str(), "EXT_6F") &&
           strcmp(val.c_str(), "EXT_6G") &&
           strcmp(val.c_str(), "EXT_6H") &&
           strcmp(val.c_str(), "6G") &&
           strcmp(val.c_str(), "6H") &&
           strcmp(val.c_str(), "EXT_7E") &&
           strcmp(val.c_str(), "EXT_7F") &&
           strcmp(val.c_str(), "EXT_7G") &&
           strcmp(val.c_str(), "EXT_7H") &&
           strcmp(val.c_str(), "7G") &&
           strcmp(val.c_str(), "7H") &&
           strcmp(val.c_str(), "EXT_8E") &&
           strcmp(val.c_str(), "EXT_8F") &&
           strcmp(val.c_str(), "EXT_8G") &&
           strcmp(val.c_str(), "EXT_8H") &&
           strcmp(val.c_str(), "8G") &&
           strcmp(val.c_str(), "8H") &&
           strcmp(val.c_str(), "EXT_9E") &&
           strcmp(val.c_str(), "EXT_9F") &&
           strcmp(val.c_str(), "EXT_9G") &&
           strcmp(val.c_str(), "EXT_9H") &&
           strcmp(val.c_str(), "INT") &&
           strcmp(val.c_str(), "EXT") &&
           strcmp(val.c_str(), "SE") &&
           strcmp(val.c_str(), "G") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

ThreadClassEnumType::~ThreadClassEnumType() {}

bool ThreadClassEnumType::ThreadClassEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "1A") &&
          strcmp(val.c_str(), "1B") &&
          strcmp(val.c_str(), "2A") &&
          strcmp(val.c_str(), "2AG") &&
          strcmp(val.c_str(), "2B") &&
          strcmp(val.c_str(), "3A") &&
          strcmp(val.c_str(), "3B") &&
          strcmp(val.c_str(), "EXT_3E") &&
          strcmp(val.c_str(), "EXT_3F") &&
          strcmp(val.c_str(), "EXT_3G") &&
          strcmp(val.c_str(), "EXT_3H") &&
          strcmp(val.c_str(), "EXT_4E") &&
          strcmp(val.c_str(), "EXT_4F") &&
          strcmp(val.c_str(), "EXT_4G") &&
          strcmp(val.c_str(), "EXT_4H") &&
          strcmp(val.c_str(), "4G") &&
          strcmp(val.c_str(), "4H") &&
          strcmp(val.c_str(), "EXT_5E") &&
          strcmp(val.c_str(), "EXT_5F") &&
          strcmp(val.c_str(), "EXT_5G") &&
          strcmp(val.c_str(), "EXT_5H") &&
          strcmp(val.c_str(), "5G") &&
          strcmp(val.c_str(), "5H") &&
          strcmp(val.c_str(), "EXT_6E") &&
          strcmp(val.c_str(), "EXT_6F") &&
          strcmp(val.c_str(), "EXT_6G") &&
          strcmp(val.c_str(), "EXT_6H") &&
          strcmp(val.c_str(), "6G") &&
          strcmp(val.c_str(), "6H") &&
          strcmp(val.c_str(), "EXT_7E") &&
          strcmp(val.c_str(), "EXT_7F") &&
          strcmp(val.c_str(), "EXT_7G") &&
          strcmp(val.c_str(), "EXT_7H") &&
          strcmp(val.c_str(), "7G") &&
          strcmp(val.c_str(), "7H") &&
          strcmp(val.c_str(), "EXT_8E") &&
          strcmp(val.c_str(), "EXT_8F") &&
          strcmp(val.c_str(), "EXT_8G") &&
          strcmp(val.c_str(), "EXT_8H") &&
          strcmp(val.c_str(), "8G") &&
          strcmp(val.c_str(), "8H") &&
          strcmp(val.c_str(), "EXT_9E") &&
          strcmp(val.c_str(), "EXT_9F") &&
          strcmp(val.c_str(), "EXT_9G") &&
          strcmp(val.c_str(), "EXT_9H") &&
          strcmp(val.c_str(), "INT") &&
          strcmp(val.c_str(), "EXT") &&
          strcmp(val.c_str(), "SE") &&
          strcmp(val.c_str(), "G") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void ThreadClassEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ThreadClassEnumType");
}

void ThreadClassEnumType::printSelf(FILE * outFile)
{
  if (ThreadClassEnumTypeIsBad())
    {
      fprintf(stderr, "bad ThreadClassEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ThreadClassEnumType::oPrintSelf(FILE * outFile)
{
  if (ThreadClassEnumTypeIsBad())
    {
      fprintf(stderr, "bad ThreadClassEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ThreadClassType

*/

ThreadClassType::ThreadClassType()
{
  ThreadClassTypePair = 0;
}

ThreadClassType::ThreadClassType(
 ThreadClassTypeChoicePair * ThreadClassTypePairIn)
{
  ThreadClassTypePair = ThreadClassTypePairIn;
}

ThreadClassType::~ThreadClassType()
{
  #ifndef NODESTRUCT
  delete ThreadClassTypePair;
  #endif
}

void ThreadClassType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ThreadClassTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ThreadClassTypeChoicePair * ThreadClassType::getThreadClassTypePair()
{return ThreadClassTypePair;}

void ThreadClassType::setThreadClassTypePair(ThreadClassTypeChoicePair * ThreadClassTypePairIn)
{ThreadClassTypePair = ThreadClassTypePairIn;}

/* ***************************************************************** */

/* class ThreadClassTypeChoicePair

*/

ThreadClassTypeChoicePair::ThreadClassTypeChoicePair() {}

ThreadClassTypeChoicePair::ThreadClassTypeChoicePair(
 whichOne ThreadClassTypeTypeIn,
 ThreadClassTypeVal ThreadClassTypeValueIn)
{
  ThreadClassTypeType = ThreadClassTypeTypeIn;
  ThreadClassTypeValue = ThreadClassTypeValueIn;
}

ThreadClassTypeChoicePair::~ThreadClassTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ThreadClassTypeType == ThreadClassEnumE)
    delete ThreadClassTypeValue.ThreadClassEnum;
  else if (ThreadClassTypeType == OtherThreadClassE)
    delete ThreadClassTypeValue.OtherThreadClass;
  #endif
}

void ThreadClassTypeChoicePair::printSelf(FILE * outFile)
{
  if (ThreadClassTypeType == ThreadClassEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThreadClassEnum");
      ThreadClassTypeValue.ThreadClassEnum->printSelf(outFile);
      fprintf(outFile, "</ThreadClassEnum>\n");
    }
  else if (ThreadClassTypeType == OtherThreadClassE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherThreadClass");
      ThreadClassTypeValue.OtherThreadClass->printSelf(outFile);
      fprintf(outFile, "</OtherThreadClass>\n");
    }
}

/* ***************************************************************** */

/* class ThreadSeriesEnumType

*/

ThreadSeriesEnumType::ThreadSeriesEnumType() :
  XmlNMTOKEN()
{
}

ThreadSeriesEnumType::ThreadSeriesEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ACME") &&
           strcmp(val.c_str(), "ACME_C") &&
           strcmp(val.c_str(), "ACME_G") &&
           strcmp(val.c_str(), "AMO") &&
           strcmp(val.c_str(), "ANPT") &&
           strcmp(val.c_str(), "BUTT") &&
           strcmp(val.c_str(), "PUSH_BUTT") &&
           strcmp(val.c_str(), "F_PTF") &&
           strcmp(val.c_str(), "M") &&
           strcmp(val.c_str(), "MJ") &&
           strcmp(val.c_str(), "MJS") &&
           strcmp(val.c_str(), "NC5_HF") &&
           strcmp(val.c_str(), "NC5_CSF") &&
           strcmp(val.c_str(), "NC5_ONF") &&
           strcmp(val.c_str(), "NC5_IF") &&
           strcmp(val.c_str(), "NC5_INF") &&
           strcmp(val.c_str(), "NGO") &&
           strcmp(val.c_str(), "NGS") &&
           strcmp(val.c_str(), "NGT") &&
           strcmp(val.c_str(), "NH") &&
           strcmp(val.c_str(), "NHR") &&
           strcmp(val.c_str(), "NPSC") &&
           strcmp(val.c_str(), "NPSF") &&
           strcmp(val.c_str(), "NPSH") &&
           strcmp(val.c_str(), "NPSI") &&
           strcmp(val.c_str(), "NPSL") &&
           strcmp(val.c_str(), "NPSM") &&
           strcmp(val.c_str(), "NPT") &&
           strcmp(val.c_str(), "NPTF") &&
           strcmp(val.c_str(), "PTF_SAE_SHORT") &&
           strcmp(val.c_str(), "PTF_SPL_SHORT") &&
           strcmp(val.c_str(), "PTF_SPL_EXTRA_SHORT") &&
           strcmp(val.c_str(), "SGT") &&
           strcmp(val.c_str(), "SPL_PTF") &&
           strcmp(val.c_str(), "STUB_ACME") &&
           strcmp(val.c_str(), "UN") &&
           strcmp(val.c_str(), "UNC") &&
           strcmp(val.c_str(), "UNF") &&
           strcmp(val.c_str(), "UNEF") &&
           strcmp(val.c_str(), "UNJ") &&
           strcmp(val.c_str(), "UNJC") &&
           strcmp(val.c_str(), "UNJF") &&
           strcmp(val.c_str(), "UNJEF") &&
           strcmp(val.c_str(), "UNR") &&
           strcmp(val.c_str(), "UNRC") &&
           strcmp(val.c_str(), "UNRF") &&
           strcmp(val.c_str(), "UNREF") &&
           strcmp(val.c_str(), "UNM") &&
           strcmp(val.c_str(), "UNS") &&
           strcmp(val.c_str(), "G") &&
           strcmp(val.c_str(), "R") &&
           strcmp(val.c_str(), "RC") &&
           strcmp(val.c_str(), "RP") &&
           strcmp(val.c_str(), "S") &&
           strcmp(val.c_str(), "TR") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

ThreadSeriesEnumType::~ThreadSeriesEnumType() {}

bool ThreadSeriesEnumType::ThreadSeriesEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ACME") &&
          strcmp(val.c_str(), "ACME_C") &&
          strcmp(val.c_str(), "ACME_G") &&
          strcmp(val.c_str(), "AMO") &&
          strcmp(val.c_str(), "ANPT") &&
          strcmp(val.c_str(), "BUTT") &&
          strcmp(val.c_str(), "PUSH_BUTT") &&
          strcmp(val.c_str(), "F_PTF") &&
          strcmp(val.c_str(), "M") &&
          strcmp(val.c_str(), "MJ") &&
          strcmp(val.c_str(), "MJS") &&
          strcmp(val.c_str(), "NC5_HF") &&
          strcmp(val.c_str(), "NC5_CSF") &&
          strcmp(val.c_str(), "NC5_ONF") &&
          strcmp(val.c_str(), "NC5_IF") &&
          strcmp(val.c_str(), "NC5_INF") &&
          strcmp(val.c_str(), "NGO") &&
          strcmp(val.c_str(), "NGS") &&
          strcmp(val.c_str(), "NGT") &&
          strcmp(val.c_str(), "NH") &&
          strcmp(val.c_str(), "NHR") &&
          strcmp(val.c_str(), "NPSC") &&
          strcmp(val.c_str(), "NPSF") &&
          strcmp(val.c_str(), "NPSH") &&
          strcmp(val.c_str(), "NPSI") &&
          strcmp(val.c_str(), "NPSL") &&
          strcmp(val.c_str(), "NPSM") &&
          strcmp(val.c_str(), "NPT") &&
          strcmp(val.c_str(), "NPTF") &&
          strcmp(val.c_str(), "PTF_SAE_SHORT") &&
          strcmp(val.c_str(), "PTF_SPL_SHORT") &&
          strcmp(val.c_str(), "PTF_SPL_EXTRA_SHORT") &&
          strcmp(val.c_str(), "SGT") &&
          strcmp(val.c_str(), "SPL_PTF") &&
          strcmp(val.c_str(), "STUB_ACME") &&
          strcmp(val.c_str(), "UN") &&
          strcmp(val.c_str(), "UNC") &&
          strcmp(val.c_str(), "UNF") &&
          strcmp(val.c_str(), "UNEF") &&
          strcmp(val.c_str(), "UNJ") &&
          strcmp(val.c_str(), "UNJC") &&
          strcmp(val.c_str(), "UNJF") &&
          strcmp(val.c_str(), "UNJEF") &&
          strcmp(val.c_str(), "UNR") &&
          strcmp(val.c_str(), "UNRC") &&
          strcmp(val.c_str(), "UNRF") &&
          strcmp(val.c_str(), "UNREF") &&
          strcmp(val.c_str(), "UNM") &&
          strcmp(val.c_str(), "UNS") &&
          strcmp(val.c_str(), "G") &&
          strcmp(val.c_str(), "R") &&
          strcmp(val.c_str(), "RC") &&
          strcmp(val.c_str(), "RP") &&
          strcmp(val.c_str(), "S") &&
          strcmp(val.c_str(), "TR") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void ThreadSeriesEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ThreadSeriesEnumType");
}

void ThreadSeriesEnumType::printSelf(FILE * outFile)
{
  if (ThreadSeriesEnumTypeIsBad())
    {
      fprintf(stderr, "bad ThreadSeriesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ThreadSeriesEnumType::oPrintSelf(FILE * outFile)
{
  if (ThreadSeriesEnumTypeIsBad())
    {
      fprintf(stderr, "bad ThreadSeriesEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ThreadSeriesType

*/

ThreadSeriesType::ThreadSeriesType()
{
  ThreadSeriesTypePair = 0;
}

ThreadSeriesType::ThreadSeriesType(
 ThreadSeriesTypeChoicePair * ThreadSeriesTypePairIn)
{
  ThreadSeriesTypePair = ThreadSeriesTypePairIn;
}

ThreadSeriesType::~ThreadSeriesType()
{
  #ifndef NODESTRUCT
  delete ThreadSeriesTypePair;
  #endif
}

void ThreadSeriesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ThreadSeriesTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ThreadSeriesTypeChoicePair * ThreadSeriesType::getThreadSeriesTypePair()
{return ThreadSeriesTypePair;}

void ThreadSeriesType::setThreadSeriesTypePair(ThreadSeriesTypeChoicePair * ThreadSeriesTypePairIn)
{ThreadSeriesTypePair = ThreadSeriesTypePairIn;}

/* ***************************************************************** */

/* class ThreadSeriesTypeChoicePair

*/

ThreadSeriesTypeChoicePair::ThreadSeriesTypeChoicePair() {}

ThreadSeriesTypeChoicePair::ThreadSeriesTypeChoicePair(
 whichOne ThreadSeriesTypeTypeIn,
 ThreadSeriesTypeVal ThreadSeriesTypeValueIn)
{
  ThreadSeriesTypeType = ThreadSeriesTypeTypeIn;
  ThreadSeriesTypeValue = ThreadSeriesTypeValueIn;
}

ThreadSeriesTypeChoicePair::~ThreadSeriesTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ThreadSeriesTypeType == ThreadSeriesEnumE)
    delete ThreadSeriesTypeValue.ThreadSeriesEnum;
  else if (ThreadSeriesTypeType == OtherThreadSeriesE)
    delete ThreadSeriesTypeValue.OtherThreadSeries;
  #endif
}

void ThreadSeriesTypeChoicePair::printSelf(FILE * outFile)
{
  if (ThreadSeriesTypeType == ThreadSeriesEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThreadSeriesEnum");
      ThreadSeriesTypeValue.ThreadSeriesEnum->printSelf(outFile);
      fprintf(outFile, "</ThreadSeriesEnum>\n");
    }
  else if (ThreadSeriesTypeType == OtherThreadSeriesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherThreadSeries");
      ThreadSeriesTypeValue.OtherThreadSeries->printSelf(outFile);
      fprintf(outFile, "</OtherThreadSeries>\n");
    }
}

/* ***************************************************************** */

/* class TypeOfCoordinatesType

*/

TypeOfCoordinatesType::TypeOfCoordinatesType()
{
  TypeOfCoordinatesTypePair = 0;
}

TypeOfCoordinatesType::TypeOfCoordinatesType(
 TypeOfCoordinatesTypeChoicePair * TypeOfCoordinatesTypePairIn)
{
  TypeOfCoordinatesTypePair = TypeOfCoordinatesTypePairIn;
}

TypeOfCoordinatesType::~TypeOfCoordinatesType()
{
  #ifndef NODESTRUCT
  delete TypeOfCoordinatesTypePair;
  #endif
}

void TypeOfCoordinatesType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  TypeOfCoordinatesTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

TypeOfCoordinatesTypeChoicePair * TypeOfCoordinatesType::getTypeOfCoordinatesTypePair()
{return TypeOfCoordinatesTypePair;}

void TypeOfCoordinatesType::setTypeOfCoordinatesTypePair(TypeOfCoordinatesTypeChoicePair * TypeOfCoordinatesTypePairIn)
{TypeOfCoordinatesTypePair = TypeOfCoordinatesTypePairIn;}

/* ***************************************************************** */

/* class TypeOfCoordinatesTypeChoicePair

*/

TypeOfCoordinatesTypeChoicePair::TypeOfCoordinatesTypeChoicePair() {}

TypeOfCoordinatesTypeChoicePair::TypeOfCoordinatesTypeChoicePair(
 whichOne TypeOfCoordinatesTypeTypeIn,
 TypeOfCoordinatesTypeVal TypeOfCoordinatesTypeValueIn)
{
  TypeOfCoordinatesTypeType = TypeOfCoordinatesTypeTypeIn;
  TypeOfCoordinatesTypeValue = TypeOfCoordinatesTypeValueIn;
}

TypeOfCoordinatesTypeChoicePair::~TypeOfCoordinatesTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (TypeOfCoordinatesTypeType == CoordinateEnumE)
    delete TypeOfCoordinatesTypeValue.CoordinateEnum;
  else if (TypeOfCoordinatesTypeType == OtherCoordinateE)
    delete TypeOfCoordinatesTypeValue.OtherCoordinate;
  #endif
}

void TypeOfCoordinatesTypeChoicePair::printSelf(FILE * outFile)
{
  if (TypeOfCoordinatesTypeType == CoordinateEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateEnum");
      TypeOfCoordinatesTypeValue.CoordinateEnum->printSelf(outFile);
      fprintf(outFile, "</CoordinateEnum>\n");
    }
  else if (TypeOfCoordinatesTypeType == OtherCoordinateE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherCoordinate");
      TypeOfCoordinatesTypeValue.OtherCoordinate->printSelf(outFile);
      fprintf(outFile, "</OtherCoordinate>\n");
    }
}

/* ***************************************************************** */

/* class UniformScaleType

*/

UniformScaleType::UniformScaleType()
{
  ScaleFactor = 0;
}

UniformScaleType::UniformScaleType(
 XmlDecimal * ScaleFactorIn)
{
  ScaleFactor = ScaleFactorIn;
}

UniformScaleType::~UniformScaleType()
{
  #ifndef NODESTRUCT
  delete ScaleFactor;
  #endif
}

void UniformScaleType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ScaleFactor");
  ScaleFactor->printSelf(outFile);
  fprintf(outFile, "</ScaleFactor>\n");
  doSpaces(-INDENT, outFile);
}

XmlDecimal * UniformScaleType::getScaleFactor()
{return ScaleFactor;}

void UniformScaleType::setScaleFactor(XmlDecimal * ScaleFactorIn)
{ScaleFactor = ScaleFactorIn;}

/* ***************************************************************** */

/* class ZoneOrientationEnumType

*/

ZoneOrientationEnumType::ZoneOrientationEnumType() :
  XmlNMTOKEN()
{
}

ZoneOrientationEnumType::ZoneOrientationEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "LENGTH") &&
           strcmp(val.c_str(), "WIDTH") &&
           strcmp(val.c_str(), "RADIAL") &&
           strcmp(val.c_str(), "ANGULAR"));
}

ZoneOrientationEnumType::~ZoneOrientationEnumType() {}

bool ZoneOrientationEnumType::ZoneOrientationEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "LENGTH") &&
          strcmp(val.c_str(), "WIDTH") &&
          strcmp(val.c_str(), "RADIAL") &&
          strcmp(val.c_str(), "ANGULAR"));
}

void ZoneOrientationEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ZoneOrientationEnumType");
}

void ZoneOrientationEnumType::printSelf(FILE * outFile)
{
  if (ZoneOrientationEnumTypeIsBad())
    {
      fprintf(stderr, "bad ZoneOrientationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ZoneOrientationEnumType::oPrintSelf(FILE * outFile)
{
  if (ZoneOrientationEnumTypeIsBad())
    {
      fprintf(stderr, "bad ZoneOrientationEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ScaleType_1006_Type

*/

ScaleType_1006_Type::ScaleType_1006_Type()
{
  ScaleType_1006_TypePair = 0;
}

ScaleType_1006_Type::ScaleType_1006_Type(
 ScaleType_1006_TypeChoicePair * ScaleType_1006_TypePairIn)
{
  ScaleType_1006_TypePair = ScaleType_1006_TypePairIn;
}

ScaleType_1006_Type::~ScaleType_1006_Type()
{
  #ifndef NODESTRUCT
  delete ScaleType_1006_TypePair;
  #endif
}

void ScaleType_1006_Type::printSelf(FILE * outFile)
{
  ScaleType_1006_TypePair->printSelf(outFile);
}

ScaleType_1006_TypeChoicePair * ScaleType_1006_Type::getScaleType_1006_TypePair()
{return ScaleType_1006_TypePair;}

void ScaleType_1006_Type::setScaleType_1006_TypePair(ScaleType_1006_TypeChoicePair * ScaleType_1006_TypePairIn)
{ScaleType_1006_TypePair = ScaleType_1006_TypePairIn;}

/* ***************************************************************** */

/* class ScaleType_1006_TypeChoicePair

*/

ScaleType_1006_TypeChoicePair::ScaleType_1006_TypeChoicePair() {}

ScaleType_1006_TypeChoicePair::ScaleType_1006_TypeChoicePair(
 whichOne ScaleType_1006_TypeTypeIn,
 ScaleType_1006_TypeVal ScaleType_1006_TypeValueIn)
{
  ScaleType_1006_TypeType = ScaleType_1006_TypeTypeIn;
  ScaleType_1006_TypeValue = ScaleType_1006_TypeValueIn;
}

ScaleType_1006_TypeChoicePair::~ScaleType_1006_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ScaleType_1006_TypeType == UniformScaleE)
    delete ScaleType_1006_TypeValue.UniformScale;
  else if (ScaleType_1006_TypeType == RadialDifferentialScaleE)
    delete ScaleType_1006_TypeValue.RadialDifferentialScale;
  else if (ScaleType_1006_TypeType == AxialDifferentialScaleE)
    delete ScaleType_1006_TypeValue.AxialDifferentialScale;
  #endif
}

void ScaleType_1006_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ScaleType_1006_TypeType == UniformScaleE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UniformScale");
      ScaleType_1006_TypeValue.UniformScale->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UniformScale>\n");
    }
  else if (ScaleType_1006_TypeType == RadialDifferentialScaleE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RadialDifferentialScale");
      ScaleType_1006_TypeValue.RadialDifferentialScale->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RadialDifferentialScale>\n");
    }
  else if (ScaleType_1006_TypeType == AxialDifferentialScaleE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AxialDifferentialScale");
      ScaleType_1006_TypeValue.AxialDifferentialScale->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AxialDifferentialScale>\n");
    }
}

/* ***************************************************************** */

/* class StatsWithRefere_1007_Type

*/

StatsWithRefere_1007_Type::StatsWithRefere_1007_Type()
{
  StatsWithRefere_1007_TypePair = 0;
}

StatsWithRefere_1007_Type::StatsWithRefere_1007_Type(
 StatsWithRefere_1007_TypeChoicePair * StatsWithRefere_1007_TypePairIn)
{
  StatsWithRefere_1007_TypePair = StatsWithRefere_1007_TypePairIn;
}

StatsWithRefere_1007_Type::~StatsWithRefere_1007_Type()
{
  #ifndef NODESTRUCT
  delete StatsWithRefere_1007_TypePair;
  #endif
}

void StatsWithRefere_1007_Type::printSelf(FILE * outFile)
{
  if (StatsWithRefere_1007_TypePair)
    {
      StatsWithRefere_1007_TypePair->printSelf(outFile);
    }
}

StatsWithRefere_1007_TypeChoicePair * StatsWithRefere_1007_Type::getStatsWithRefere_1007_TypePair()
{return StatsWithRefere_1007_TypePair;}

void StatsWithRefere_1007_Type::setStatsWithRefere_1007_TypePair(StatsWithRefere_1007_TypeChoicePair * StatsWithRefere_1007_TypePairIn)
{StatsWithRefere_1007_TypePair = StatsWithRefere_1007_TypePairIn;}

/* ***************************************************************** */

/* class StatsWithRefere_1007_TypeChoicePair

*/

StatsWithRefere_1007_TypeChoicePair::StatsWithRefere_1007_TypeChoicePair() {}

StatsWithRefere_1007_TypeChoicePair::StatsWithRefere_1007_TypeChoicePair(
 whichOne StatsWithRefere_1007_TypeTypeIn,
 StatsWithRefere_1007_TypeVal StatsWithRefere_1007_TypeValueIn)
{
  StatsWithRefere_1007_TypeType = StatsWithRefere_1007_TypeTypeIn;
  StatsWithRefere_1007_TypeValue = StatsWithRefere_1007_TypeValueIn;
}

StatsWithRefere_1007_TypeChoicePair::~StatsWithRefere_1007_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (StatsWithRefere_1007_TypeType == SoftwareIdE)
    delete StatsWithRefere_1007_TypeValue.SoftwareId;
  else if (StatsWithRefere_1007_TypeType == StandardIdE)
    delete StatsWithRefere_1007_TypeValue.StandardId;
  else if (StatsWithRefere_1007_TypeType == AlgorithmIdE)
    delete StatsWithRefere_1007_TypeValue.AlgorithmId;
  #endif
}

void StatsWithRefere_1007_TypeChoicePair::printSelf(FILE * outFile)
{
  if (StatsWithRefere_1007_TypeType == SoftwareIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SoftwareId");
      StatsWithRefere_1007_TypeValue.SoftwareId->printSelf(outFile);
      fprintf(outFile, "</SoftwareId>\n");
    }
  else if (StatsWithRefere_1007_TypeType == StandardIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StandardId");
      StatsWithRefere_1007_TypeValue.StandardId->printSelf(outFile);
      fprintf(outFile, "</StandardId>\n");
    }
  else if (StatsWithRefere_1007_TypeType == AlgorithmIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlgorithmId");
      StatsWithRefere_1007_TypeValue.AlgorithmId->printSelf(outFile);
      fprintf(outFile, "</AlgorithmId>\n");
    }
}

/* ***************************************************************** */

