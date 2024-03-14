/* ***************************************************************** */

#ifndef PRIMITIVESPMI_HH
#define PRIMITIVESPMI_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "UnitsClasses.hh"

/* ***************************************************************** */

class AxialDifferentialScaleType;
class BottomEnumType;
class BottomType;
class BottomTypeChoicePair;
class BoundingBoxType;
class CircleType;
class CircularUnitAreaType;
class CoordinateEnumType;
class CylinderType;
class DigitalModelFormatEnumType;
class DigitalModelFormatType;
class DigitalModelFormatTypeChoicePair;
class DimensionCountEnumType;
class EndRadiusType;
class InternalExternalEnumType;
class ListAccumulatedStatsValuesListType;
class ListAccumulatedStatsValuesType;
class ListAccumulatedStatsValuesTypeLisd;
class ListSubgroupStatsValuesListType;
class ListSubgroupStatsValuesType;
class ListSubgroupStatsValuesTypeLisd;
class ListSummaryStatsValuesListType;
class ListSummaryStatsValuesType;
class ManufacturingMethodEnumType;
class ManufacturingMethodType;
class ManufacturingMethodTypeChoicePair;
class MeasuredAxisType;
class MeasuredEndRadiusType;
class MeasuredPlaneType;
class MeasuredPointAndVectorType;
class MeasuredPointType;
class MeasuredUnitVectorType;
class MeasuredZoneAxisType;
class PointAndVectorType;
class RadialDifferentialScaleType;
class RectangleType;
class RectangularUnitAreaType;
class ScaleType;
class SecurityClassificationEnumType;
class SecurityClassificationType;
class SecurityClassificationTypeChoicePair;
class ShapeClassEnumType;
class ShapeClassType;
class ShapeClassTypeChoicePair;
class SlotEndEnumType;
class SlotEndType;
class SlotEndTypeChoicePair;
class SphereType;
class StatsMeasuredDecimalType;
class StatsMeasuredDecimalWithReferenceType;
class StatsNonNegativeIntegerType;
class StatsNonNegativeIntegerWithReferencesType;
class StatsValuesEnumType;
class StatsWithReferenceBaseType;
class StatsWithReferenceBaseTypeLisd;
class StatsWithReferenceBaseTypeChoicePair;
class SubgroupDecimalArrayType;
class SubgroupDecimalType;
class SubgroupDecimalTypeLisd;
class SubgroupDecimalsType;
class SubgroupIntegerArrayType;
class SubgroupIntegerType;
class SubgroupIntegerTypeLisd;
class SubgroupIntegersType;
class SubgroupStatsValuesEnumType;
class SummaryStatsValuesEnumType;
class SummaryStatsValuesListType;
class SummaryStatsValuesListTypeLisd;
class SummaryStatsValuesType;
class SummaryStatsValuesTypeLisd;
class ThreadClassEnumType;
class ThreadClassType;
class ThreadClassTypeChoicePair;
class ThreadSeriesEnumType;
class ThreadSeriesType;
class ThreadSeriesTypeChoicePair;
class TypeOfCoordinatesType;
class TypeOfCoordinatesTypeChoicePair;
class UniformScaleType;
class ZoneOrientationEnumType;
class ScaleType_1005_Type;
class ScaleType_1005_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class AxialDifferentialScaleType :
  public XmlTypeBase
{
public:
  AxialDifferentialScaleType();
  AxialDifferentialScaleType(
    XmlDecimal * XScaleFactorIn,
    UnitVectorType * XaxisDirectionIn,
    XmlDecimal * YScaleFactorIn,
    UnitVectorType * YaxisDirectionIn,
    XmlDecimal * ZScaleFactorIn,
    UnitVectorType * ZaxisDirectionIn);
  ~AxialDifferentialScaleType();
  void printSelf(FILE * outFile);

  XmlDecimal * getXScaleFactor();
  void setXScaleFactor(XmlDecimal * XScaleFactorIn);
  UnitVectorType * getXaxisDirection();
  void setXaxisDirection(UnitVectorType * XaxisDirectionIn);
  XmlDecimal * getYScaleFactor();
  void setYScaleFactor(XmlDecimal * YScaleFactorIn);
  UnitVectorType * getYaxisDirection();
  void setYaxisDirection(UnitVectorType * YaxisDirectionIn);
  XmlDecimal * getZScaleFactor();
  void setZScaleFactor(XmlDecimal * ZScaleFactorIn);
  UnitVectorType * getZaxisDirection();
  void setZaxisDirection(UnitVectorType * ZaxisDirectionIn);

protected:
  XmlDecimal * XScaleFactor;
  UnitVectorType * XaxisDirection;
  XmlDecimal * YScaleFactor;
  UnitVectorType * YaxisDirection;
  XmlDecimal * ZScaleFactor;
  UnitVectorType * ZaxisDirection;
};

/* ***************************************************************** */

class BottomEnumType :
  public XmlNMTOKEN
{
public:
  BottomEnumType();
  BottomEnumType(
    const char * valIn);
  ~BottomEnumType();
  bool BottomEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class BottomType :
  public XmlTypeBase
{
public:
  BottomType();
  BottomType(
    BottomTypeChoicePair * BottomTypePairIn);
  ~BottomType();
  void printSelf(FILE * outFile);

  BottomTypeChoicePair * getBottomTypePair();
  void setBottomTypePair(BottomTypeChoicePair * BottomTypePairIn);

protected:
  BottomTypeChoicePair * BottomTypePair;
};

/* ***************************************************************** */

union BottomTypeVal
{
  BottomEnumType * BottomEnum;
  XmlString * OtherBottom;
};

/* ***************************************************************** */

class BottomTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BottomEnumE,
    OtherBottomE };
  BottomTypeChoicePair();
  BottomTypeChoicePair(
    whichOne BottomTypeTypeIn,
    BottomTypeVal BottomTypeValueIn);
  ~BottomTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne BottomTypeType;
  BottomTypeVal BottomTypeValue;
};

/* ***************************************************************** */

class BoundingBoxType :
  public XmlTypeBase
{
public:
  BoundingBoxType();
  BoundingBoxType(
    LinearValueType * LengthIn,
    LinearValueType * WidthIn,
    LinearValueType * HeightIn);
  ~BoundingBoxType();
  void printSelf(FILE * outFile);

  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  LinearValueType * getWidth();
  void setWidth(LinearValueType * WidthIn);
  LinearValueType * getHeight();
  void setHeight(LinearValueType * HeightIn);

protected:
  LinearValueType * Length;
  LinearValueType * Width;
  LinearValueType * Height;
};

/* ***************************************************************** */

class CircleType :
  public XmlTypeBase
{
public:
  CircleType();
  CircleType(
    PointType * CenterPointIn,
    LinearValueType * DiameterIn,
    UnitVectorType * NormalIn);
  ~CircleType();
  void printSelf(FILE * outFile);

  PointType * getCenterPoint();
  void setCenterPoint(PointType * CenterPointIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);

protected:
  PointType * CenterPoint;
  LinearValueType * Diameter;
  UnitVectorType * Normal;
};

/* ***************************************************************** */

class CircularUnitAreaType :
  public XmlTypeBase
{
public:
  CircularUnitAreaType();
  CircularUnitAreaType(
    LinearValueType * CircularUnitAreaDiameterIn);
  ~CircularUnitAreaType();
  void printSelf(FILE * outFile);

  LinearValueType * getCircularUnitAreaDiameter();
  void setCircularUnitAreaDiameter(LinearValueType * CircularUnitAreaDiameterIn);

protected:
  LinearValueType * CircularUnitAreaDiameter;
};

/* ***************************************************************** */

class CoordinateEnumType :
  public XmlNMTOKEN
{
public:
  CoordinateEnumType();
  CoordinateEnumType(
    const char * valIn);
  ~CoordinateEnumType();
  bool CoordinateEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class CylinderType :
  public XmlTypeBase
{
public:
  CylinderType();
  CylinderType(
    PointType * CenterPointIn,
    LinearValueType * DiameterIn,
    UnitVectorType * AxisIn,
    LinearValueType * LengthIn);
  ~CylinderType();
  void printSelf(FILE * outFile);

  PointType * getCenterPoint();
  void setCenterPoint(PointType * CenterPointIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  UnitVectorType * getAxis();
  void setAxis(UnitVectorType * AxisIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);

protected:
  PointType * CenterPoint;
  LinearValueType * Diameter;
  UnitVectorType * Axis;
  LinearValueType * Length;
};

/* ***************************************************************** */

class DigitalModelFormatEnumType :
  public XmlNMTOKEN
{
public:
  DigitalModelFormatEnumType();
  DigitalModelFormatEnumType(
    const char * valIn);
  ~DigitalModelFormatEnumType();
  bool DigitalModelFormatEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DigitalModelFormatType :
  public XmlTypeBase
{
public:
  DigitalModelFormatType();
  DigitalModelFormatType(
    DigitalModelFormatTypeChoicePair * DigitalModelFormatTypePairIn);
  ~DigitalModelFormatType();
  void printSelf(FILE * outFile);

  DigitalModelFormatTypeChoicePair * getDigitalModelFormatTypePair();
  void setDigitalModelFormatTypePair(DigitalModelFormatTypeChoicePair * DigitalModelFormatTypePairIn);

protected:
  DigitalModelFormatTypeChoicePair * DigitalModelFormatTypePair;
};

/* ***************************************************************** */

union DigitalModelFormatTypeVal
{
  DigitalModelFormatEnumType * DigitalModelFormatEnum;
  XmlString * OtherDigitalModelFormat;
};

/* ***************************************************************** */

class DigitalModelFormatTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DigitalModelFormatEnumE,
    OtherDigitalModelFormatE };
  DigitalModelFormatTypeChoicePair();
  DigitalModelFormatTypeChoicePair(
    whichOne DigitalModelFormatTypeTypeIn,
    DigitalModelFormatTypeVal DigitalModelFormatTypeValueIn);
  ~DigitalModelFormatTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DigitalModelFormatTypeType;
  DigitalModelFormatTypeVal DigitalModelFormatTypeValue;
};

/* ***************************************************************** */

class DimensionCountEnumType :
  public XmlNMTOKEN
{
public:
  DimensionCountEnumType();
  DimensionCountEnumType(
    const char * valIn);
  ~DimensionCountEnumType();
  bool DimensionCountEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class EndRadiusType :
  public XmlTypeBase
{
public:
  EndRadiusType();
  EndRadiusType(
    LinearValueType * EndRadiusIn,
    XmlBoolean * ExpandedIn);
  ~EndRadiusType();
  void printSelf(FILE * outFile);

  LinearValueType * getEndRadius();
  void setEndRadius(LinearValueType * EndRadiusIn);
  XmlBoolean * getExpanded();
  void setExpanded(XmlBoolean * ExpandedIn);

protected:
  LinearValueType * EndRadius;
  XmlBoolean * Expanded;
};

/* ***************************************************************** */

class InternalExternalEnumType :
  public XmlNMTOKEN
{
public:
  InternalExternalEnumType();
  InternalExternalEnumType(
    const char * valIn);
  ~InternalExternalEnumType();
  bool InternalExternalEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ListAccumulatedStatsValuesListType :
  public std::list<StatsValuesEnumType *>,
  public XmlTypeBase
{
public:
  ListAccumulatedStatsValuesListType();
  ListAccumulatedStatsValuesListType(
    StatsValuesEnumType * aStatsValuesEnumType);
  ListAccumulatedStatsValuesListType(
    const char * valueString);
  ~ListAccumulatedStatsValuesListType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);

  bool bad;
};

/* ***************************************************************** */

class ListSubgroupStatsValuesListType :
  public std::list<SubgroupStatsValuesEnumType *>,
  public XmlTypeBase
{
public:
  ListSubgroupStatsValuesListType();
  ListSubgroupStatsValuesListType(
    SubgroupStatsValuesEnumType * aSubgroupStatsValuesEnumType);
  ListSubgroupStatsValuesListType(
    const char * valueString);
  ~ListSubgroupStatsValuesListType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);

  bool bad;
};

/* ***************************************************************** */

class ListSummaryStatsValuesListType :
  public std::list<StatsValuesEnumType *>,
  public XmlTypeBase
{
public:
  ListSummaryStatsValuesListType();
  ListSummaryStatsValuesListType(
    StatsValuesEnumType * aStatsValuesEnumType);
  ListSummaryStatsValuesListType(
    const char * valueString);
  ~ListSummaryStatsValuesListType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);

  bool bad;
};

/* ***************************************************************** */

class ManufacturingMethodEnumType :
  public XmlNMTOKEN
{
public:
  ManufacturingMethodEnumType();
  ManufacturingMethodEnumType(
    const char * valIn);
  ~ManufacturingMethodEnumType();
  bool ManufacturingMethodEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ManufacturingMethodType :
  public XmlTypeBase
{
public:
  ManufacturingMethodType();
  ManufacturingMethodType(
    ManufacturingMethodTypeChoicePair * ManufacturingMethodTypePairIn);
  ~ManufacturingMethodType();
  void printSelf(FILE * outFile);

  ManufacturingMethodTypeChoicePair * getManufacturingMethodTypePair();
  void setManufacturingMethodTypePair(ManufacturingMethodTypeChoicePair * ManufacturingMethodTypePairIn);

protected:
  ManufacturingMethodTypeChoicePair * ManufacturingMethodTypePair;
};

/* ***************************************************************** */

union ManufacturingMethodTypeVal
{
  ManufacturingMethodEnumType * ManufacturingMethodEnum;
  XmlString * OtherManufacturingMethod;
};

/* ***************************************************************** */

class ManufacturingMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ManufacturingMethodEnumE,
    OtherManufacturingMethodE };
  ManufacturingMethodTypeChoicePair();
  ManufacturingMethodTypeChoicePair(
    whichOne ManufacturingMethodTypeTypeIn,
    ManufacturingMethodTypeVal ManufacturingMethodTypeValueIn);
  ~ManufacturingMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ManufacturingMethodTypeType;
  ManufacturingMethodTypeVal ManufacturingMethodTypeValue;
};

/* ***************************************************************** */

class MeasuredAxisType :
  public XmlTypeBase
{
public:
  MeasuredAxisType();
  MeasuredAxisType(
    MeasuredPointType * AxisPointIn,
    MeasuredUnitVectorType * DirectionIn);
  ~MeasuredAxisType();
  void printSelf(FILE * outFile);

  MeasuredPointType * getAxisPoint();
  void setAxisPoint(MeasuredPointType * AxisPointIn);
  MeasuredUnitVectorType * getDirection();
  void setDirection(MeasuredUnitVectorType * DirectionIn);

protected:
  MeasuredPointType * AxisPoint;
  MeasuredUnitVectorType * Direction;
};

/* ***************************************************************** */

class MeasuredEndRadiusType :
  public XmlTypeBase
{
public:
  MeasuredEndRadiusType();
  MeasuredEndRadiusType(
    MeasuredLinearValueType * EndRadiusIn,
    XmlBoolean * ExpandedIn);
  ~MeasuredEndRadiusType();
  void printSelf(FILE * outFile);

  MeasuredLinearValueType * getEndRadius();
  void setEndRadius(MeasuredLinearValueType * EndRadiusIn);
  XmlBoolean * getExpanded();
  void setExpanded(XmlBoolean * ExpandedIn);

protected:
  MeasuredLinearValueType * EndRadius;
  XmlBoolean * Expanded;
};

/* ***************************************************************** */

class MeasuredPlaneType :
  public XmlTypeBase
{
public:
  MeasuredPlaneType();
  MeasuredPlaneType(
    MeasuredPointType * PointIn,
    MeasuredUnitVectorType * NormalIn);
  ~MeasuredPlaneType();
  void printSelf(FILE * outFile);

  MeasuredPointType * getPoint();
  void setPoint(MeasuredPointType * PointIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);

protected:
  MeasuredPointType * Point;
  MeasuredUnitVectorType * Normal;
};

/* ***************************************************************** */

class MeasuredPointAndVectorType :
  public XmlTypeBase
{
public:
  MeasuredPointAndVectorType();
  MeasuredPointAndVectorType(
    MeasuredPointType * StartPointIn,
    MeasuredUnitVectorType * VectorIn);
  ~MeasuredPointAndVectorType();
  void printSelf(FILE * outFile);

  MeasuredPointType * getStartPoint();
  void setStartPoint(MeasuredPointType * StartPointIn);
  MeasuredUnitVectorType * getVector();
  void setVector(MeasuredUnitVectorType * VectorIn);

protected:
  MeasuredPointType * StartPoint;
  MeasuredUnitVectorType * Vector;
};

/* ***************************************************************** */

class MeasuredPointType :
  public PointType
{
public:
  MeasuredPointType();
  MeasuredPointType(
    XmlDouble * aXmlDouble);
  MeasuredPointType(
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
    XmlDouble * aXmlDouble);
  ~MeasuredPointType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool MeasuredPointTypeCheck();
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getcombinedUncertainty();
  void setcombinedUncertainty(XmlDecimal * combinedUncertaintyIn);
  XmlDecimal * getmeanError();
  void setmeanError(XmlDecimal * meanErrorIn);
  XmlDecimal * getxCombinedUncertainty();
  void setxCombinedUncertainty(XmlDecimal * xCombinedUncertaintyIn);
  XmlDecimal * getxMeanError();
  void setxMeanError(XmlDecimal * xMeanErrorIn);
  XmlDecimal * getyCombinedUncertainty();
  void setyCombinedUncertainty(XmlDecimal * yCombinedUncertaintyIn);
  XmlDecimal * getyMeanError();
  void setyMeanError(XmlDecimal * yMeanErrorIn);
  XmlDecimal * getzCombinedUncertainty();
  void setzCombinedUncertainty(XmlDecimal * zCombinedUncertaintyIn);
  XmlDecimal * getzMeanError();
  void setzMeanError(XmlDecimal * zMeanErrorIn);

protected:
  XmlDecimal * combinedUncertainty;
  XmlDecimal * meanError;
  XmlDecimal * xCombinedUncertainty;
  XmlDecimal * xMeanError;
  XmlDecimal * yCombinedUncertainty;
  XmlDecimal * yMeanError;
  XmlDecimal * zCombinedUncertainty;
  XmlDecimal * zMeanError;
};

/* ***************************************************************** */

class MeasuredUnitVectorType :
  public UnitVectorType
{
public:
  MeasuredUnitVectorType();
  MeasuredUnitVectorType(
    XmlDouble * aXmlDouble);
  MeasuredUnitVectorType(
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
    XmlDouble * aXmlDouble);
  ~MeasuredUnitVectorType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool MeasuredUnitVectorTypeCheck();
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getcombinedUncertainty();
  void setcombinedUncertainty(XmlDecimal * combinedUncertaintyIn);
  XmlDecimal * getmeanError();
  void setmeanError(XmlDecimal * meanErrorIn);
  XmlDecimal * getxCombinedUncertainty();
  void setxCombinedUncertainty(XmlDecimal * xCombinedUncertaintyIn);
  XmlDecimal * getxMeanError();
  void setxMeanError(XmlDecimal * xMeanErrorIn);
  XmlDecimal * getyCombinedUncertainty();
  void setyCombinedUncertainty(XmlDecimal * yCombinedUncertaintyIn);
  XmlDecimal * getyMeanError();
  void setyMeanError(XmlDecimal * yMeanErrorIn);
  XmlDecimal * getzCombinedUncertainty();
  void setzCombinedUncertainty(XmlDecimal * zCombinedUncertaintyIn);
  XmlDecimal * getzMeanError();
  void setzMeanError(XmlDecimal * zMeanErrorIn);

protected:
  XmlDecimal * combinedUncertainty;
  XmlDecimal * meanError;
  XmlDecimal * xCombinedUncertainty;
  XmlDecimal * xMeanError;
  XmlDecimal * yCombinedUncertainty;
  XmlDecimal * yMeanError;
  XmlDecimal * zCombinedUncertainty;
  XmlDecimal * zMeanError;
};

/* ***************************************************************** */

class MeasuredZoneAxisType :
  public MeasuredAxisType
{
public:
  MeasuredZoneAxisType();
  MeasuredZoneAxisType(
    MeasuredPointType * AxisPointIn,
    MeasuredUnitVectorType * DirectionIn,
    MeasuredLinearValueType * LengthIn);
  ~MeasuredZoneAxisType();
  void printSelf(FILE * outFile);

  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);

protected:
  MeasuredLinearValueType * Length;
};

/* ***************************************************************** */

class PointAndVectorType :
  public XmlTypeBase
{
public:
  PointAndVectorType();
  PointAndVectorType(
    PointType * StartPointIn,
    UnitVectorType * VectorIn);
  ~PointAndVectorType();
  void printSelf(FILE * outFile);

  PointType * getStartPoint();
  void setStartPoint(PointType * StartPointIn);
  UnitVectorType * getVector();
  void setVector(UnitVectorType * VectorIn);

protected:
  PointType * StartPoint;
  UnitVectorType * Vector;
};

/* ***************************************************************** */

class RadialDifferentialScaleType :
  public XmlTypeBase
{
public:
  RadialDifferentialScaleType();
  RadialDifferentialScaleType(
    XmlDecimal * PerpendicularScaleFactorIn,
    XmlDecimal * ParallelScaleFactorIn,
    UnitVectorType * DirectionIn);
  ~RadialDifferentialScaleType();
  void printSelf(FILE * outFile);

  XmlDecimal * getPerpendicularScaleFactor();
  void setPerpendicularScaleFactor(XmlDecimal * PerpendicularScaleFactorIn);
  XmlDecimal * getParallelScaleFactor();
  void setParallelScaleFactor(XmlDecimal * ParallelScaleFactorIn);
  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);

protected:
  XmlDecimal * PerpendicularScaleFactor;
  XmlDecimal * ParallelScaleFactor;
  UnitVectorType * Direction;
};

/* ***************************************************************** */

class RectangleType :
  public XmlTypeBase
{
public:
  RectangleType();
  RectangleType(
    LinearValueType * LengthIn,
    PointType * CornerPointIn,
    LinearValueType * WidthIn,
    UnitVectorType * WidthDirectionIn,
    UnitVectorType * LengthDirectionIn);
  ~RectangleType();
  void printSelf(FILE * outFile);

  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  PointType * getCornerPoint();
  void setCornerPoint(PointType * CornerPointIn);
  LinearValueType * getWidth();
  void setWidth(LinearValueType * WidthIn);
  UnitVectorType * getWidthDirection();
  void setWidthDirection(UnitVectorType * WidthDirectionIn);
  UnitVectorType * getLengthDirection();
  void setLengthDirection(UnitVectorType * LengthDirectionIn);

protected:
  LinearValueType * Length;
  PointType * CornerPoint;
  LinearValueType * Width;
  UnitVectorType * WidthDirection;
  UnitVectorType * LengthDirection;
};

/* ***************************************************************** */

class RectangularUnitAreaType :
  public XmlTypeBase
{
public:
  RectangularUnitAreaType();
  RectangularUnitAreaType(
    LinearValueType * RectangularUnitAreaLengthIn,
    LinearValueType * RectangularUnitAreaWidthIn,
    UnitVectorType * RectangularUnitAreaOrientationIn);
  ~RectangularUnitAreaType();
  void printSelf(FILE * outFile);

  LinearValueType * getRectangularUnitAreaLength();
  void setRectangularUnitAreaLength(LinearValueType * RectangularUnitAreaLengthIn);
  LinearValueType * getRectangularUnitAreaWidth();
  void setRectangularUnitAreaWidth(LinearValueType * RectangularUnitAreaWidthIn);
  UnitVectorType * getRectangularUnitAreaOrientation();
  void setRectangularUnitAreaOrientation(UnitVectorType * RectangularUnitAreaOrientationIn);

protected:
  LinearValueType * RectangularUnitAreaLength;
  LinearValueType * RectangularUnitAreaWidth;
  UnitVectorType * RectangularUnitAreaOrientation;
};

/* ***************************************************************** */

class ScaleType :
  public XmlTypeBase
{
public:
  ScaleType();
  ScaleType(
    PointType * OriginIn,
    ScaleType_1005_Type * ScaleType_1005In);
  ~ScaleType();
  void printSelf(FILE * outFile);

  PointType * getOrigin();
  void setOrigin(PointType * OriginIn);
  ScaleType_1005_Type * getScaleType_1005();
  void setScaleType_1005(ScaleType_1005_Type * ScaleType_1005In);

protected:
  PointType * Origin;
  ScaleType_1005_Type * ScaleType_1005;
};

/* ***************************************************************** */

class SecurityClassificationEnumType :
  public XmlNMTOKEN
{
public:
  SecurityClassificationEnumType();
  SecurityClassificationEnumType(
    const char * valIn);
  ~SecurityClassificationEnumType();
  bool SecurityClassificationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SecurityClassificationType :
  public XmlTypeBase
{
public:
  SecurityClassificationType();
  SecurityClassificationType(
    SecurityClassificationTypeChoicePair * SecurityClassificationTypePairIn);
  ~SecurityClassificationType();
  void printSelf(FILE * outFile);

  SecurityClassificationTypeChoicePair * getSecurityClassificationTypePair();
  void setSecurityClassificationTypePair(SecurityClassificationTypeChoicePair * SecurityClassificationTypePairIn);

protected:
  SecurityClassificationTypeChoicePair * SecurityClassificationTypePair;
};

/* ***************************************************************** */

union SecurityClassificationTypeVal
{
  SecurityClassificationEnumType * SecurityClassificationEnum;
  XmlString * OtherSecurityClassification;
};

/* ***************************************************************** */

class SecurityClassificationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SecurityClassificationEnumE,
    OtherSecurityClassificationE };
  SecurityClassificationTypeChoicePair();
  SecurityClassificationTypeChoicePair(
    whichOne SecurityClassificationTypeTypeIn,
    SecurityClassificationTypeVal SecurityClassificationTypeValueIn);
  ~SecurityClassificationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SecurityClassificationTypeType;
  SecurityClassificationTypeVal SecurityClassificationTypeValue;
};

/* ***************************************************************** */

class ShapeClassEnumType :
  public XmlNMTOKEN
{
public:
  ShapeClassEnumType();
  ShapeClassEnumType(
    const char * valIn);
  ~ShapeClassEnumType();
  bool ShapeClassEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ShapeClassType :
  public XmlTypeBase
{
public:
  ShapeClassType();
  ShapeClassType(
    ShapeClassTypeChoicePair * ShapeClassTypePairIn);
  ~ShapeClassType();
  void printSelf(FILE * outFile);

  ShapeClassTypeChoicePair * getShapeClassTypePair();
  void setShapeClassTypePair(ShapeClassTypeChoicePair * ShapeClassTypePairIn);

protected:
  ShapeClassTypeChoicePair * ShapeClassTypePair;
};

/* ***************************************************************** */

union ShapeClassTypeVal
{
  ShapeClassEnumType * ShapeClassEnum;
  XmlString * OtherShapeClass;
};

/* ***************************************************************** */

class ShapeClassTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ShapeClassEnumE,
    OtherShapeClassE };
  ShapeClassTypeChoicePair();
  ShapeClassTypeChoicePair(
    whichOne ShapeClassTypeTypeIn,
    ShapeClassTypeVal ShapeClassTypeValueIn);
  ~ShapeClassTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ShapeClassTypeType;
  ShapeClassTypeVal ShapeClassTypeValue;
};

/* ***************************************************************** */

class SlotEndEnumType :
  public XmlNMTOKEN
{
public:
  SlotEndEnumType();
  SlotEndEnumType(
    const char * valIn);
  ~SlotEndEnumType();
  bool SlotEndEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SlotEndType :
  public XmlTypeBase
{
public:
  SlotEndType();
  SlotEndType(
    SlotEndTypeChoicePair * SlotEndTypePairIn);
  ~SlotEndType();
  void printSelf(FILE * outFile);

  SlotEndTypeChoicePair * getSlotEndTypePair();
  void setSlotEndTypePair(SlotEndTypeChoicePair * SlotEndTypePairIn);

protected:
  SlotEndTypeChoicePair * SlotEndTypePair;
};

/* ***************************************************************** */

union SlotEndTypeVal
{
  SlotEndEnumType * SlotEndEnum;
  XmlString * OtherSlotEnd;
};

/* ***************************************************************** */

class SlotEndTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SlotEndEnumE,
    OtherSlotEndE };
  SlotEndTypeChoicePair();
  SlotEndTypeChoicePair(
    whichOne SlotEndTypeTypeIn,
    SlotEndTypeVal SlotEndTypeValueIn);
  ~SlotEndTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SlotEndTypeType;
  SlotEndTypeVal SlotEndTypeValue;
};

/* ***************************************************************** */

class SphereType :
  public XmlTypeBase
{
public:
  SphereType();
  SphereType(
    PointType * CenterPointIn,
    LinearValueType * DiameterIn);
  ~SphereType();
  void printSelf(FILE * outFile);

  PointType * getCenterPoint();
  void setCenterPoint(PointType * CenterPointIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);

protected:
  PointType * CenterPoint;
  LinearValueType * Diameter;
};

/* ***************************************************************** */

class StatsValuesEnumType :
  public XmlNMTOKEN
{
public:
  StatsValuesEnumType();
  StatsValuesEnumType(
    const char * valIn);
  ~StatsValuesEnumType();
  bool StatsValuesEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class StatsWithReferenceBaseType :
  public XmlTypeBase
{
public:
  StatsWithReferenceBaseType();
  StatsWithReferenceBaseType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn);
  ~StatsWithReferenceBaseType();
  void printSelf(FILE * outFile);

  StatsWithReferenceBaseTypeChoicePair * getStatsWithReferenceBaseTypePair();
  void setStatsWithReferenceBaseTypePair(StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn);

protected:
  StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePair;
};

/* ***************************************************************** */

union StatsWithReferenceBaseTypeVal
{
  QIFReferenceType * SoftwareId;
  QIFReferenceType * StandardId;
  QIFReferenceType * AlgorithmId;
};

/* ***************************************************************** */

class StatsWithReferenceBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SoftwareIdE,
    StandardIdE,
    AlgorithmIdE };
  StatsWithReferenceBaseTypeChoicePair();
  StatsWithReferenceBaseTypeChoicePair(
    whichOne StatsWithReferenceBaseTypeTypeIn,
    StatsWithReferenceBaseTypeVal StatsWithReferenceBaseTypeValueIn);
  ~StatsWithReferenceBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatsWithReferenceBaseTypeType;
  StatsWithReferenceBaseTypeVal StatsWithReferenceBaseTypeValue;
};

/* ***************************************************************** */

class StatsWithReferenceBaseTypeLisd :
  public std::list<StatsWithReferenceBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  StatsWithReferenceBaseTypeLisd();
  StatsWithReferenceBaseTypeLisd(
    StatsWithReferenceBaseType * aStatsWithReferenceBaseType);
  ~StatsWithReferenceBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SubgroupDecimalArrayType :
  public XmlTypeBase
{
public:
  SubgroupDecimalArrayType();
  SubgroupDecimalArrayType(
    SubgroupDecimalTypeLisd * SubgroupDecimalIn);
  SubgroupDecimalArrayType(
    NaturalType * nIn,
    SubgroupDecimalTypeLisd * SubgroupDecimalIn);
  ~SubgroupDecimalArrayType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SubgroupDecimalTypeLisd * getSubgroupDecimal();
  void setSubgroupDecimal(SubgroupDecimalTypeLisd *);

protected:
  NaturalType * n;
  SubgroupDecimalTypeLisd * SubgroupDecimal;
};

/* ***************************************************************** */

class SubgroupDecimalType :
  public MeasuredDecimalType
{
public:
  SubgroupDecimalType();
  SubgroupDecimalType(
    const char * valStringIn);
  SubgroupDecimalType(
    NonNegativeDecimalType * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    NonNegativeDecimalType * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    QIFIdType * subgroupIdIn,
    const char * valStringIn);
  ~SubgroupDecimalType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getsubgroupId();
  void setsubgroupId(QIFIdType * subgroupIdIn);

protected:
  QIFIdType * subgroupId;
};

/* ***************************************************************** */

class SubgroupDecimalTypeLisd :
  public std::list<SubgroupDecimalType *>,
  public XmlSchemaInstanceBase
{
public:
  SubgroupDecimalTypeLisd();
  SubgroupDecimalTypeLisd(
    SubgroupDecimalType * aSubgroupDecimalType);
  ~SubgroupDecimalTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SubgroupDecimalsType :
  public StatsWithReferenceBaseType
{
public:
  SubgroupDecimalsType();
  SubgroupDecimalsType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    SubgroupDecimalArrayType * ValuesIn);
  ~SubgroupDecimalsType();
  void printSelf(FILE * outFile);

  SubgroupDecimalArrayType * getValues();
  void setValues(SubgroupDecimalArrayType * ValuesIn);

protected:
  SubgroupDecimalArrayType * Values;
};

/* ***************************************************************** */

class SubgroupIntegerArrayType :
  public XmlTypeBase
{
public:
  SubgroupIntegerArrayType();
  SubgroupIntegerArrayType(
    SubgroupIntegerTypeLisd * SubgroupIntegerIn);
  SubgroupIntegerArrayType(
    NaturalType * nIn,
    SubgroupIntegerTypeLisd * SubgroupIntegerIn);
  ~SubgroupIntegerArrayType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SubgroupIntegerTypeLisd * getSubgroupInteger();
  void setSubgroupInteger(SubgroupIntegerTypeLisd *);

protected:
  NaturalType * n;
  SubgroupIntegerTypeLisd * SubgroupInteger;
};

/* ***************************************************************** */

class SubgroupIntegerType :
  public XmlNonNegativeInteger
{
public:
  SubgroupIntegerType();
  SubgroupIntegerType(
    const char * valStringIn);
  SubgroupIntegerType(
    QIFIdType * subgroupIdIn,
    const char * valStringIn);
  ~SubgroupIntegerType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getsubgroupId();
  void setsubgroupId(QIFIdType * subgroupIdIn);

protected:
  QIFIdType * subgroupId;
};

/* ***************************************************************** */

class SubgroupIntegerTypeLisd :
  public std::list<SubgroupIntegerType *>,
  public XmlSchemaInstanceBase
{
public:
  SubgroupIntegerTypeLisd();
  SubgroupIntegerTypeLisd(
    SubgroupIntegerType * aSubgroupIntegerType);
  ~SubgroupIntegerTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SubgroupIntegersType :
  public StatsWithReferenceBaseType
{
public:
  SubgroupIntegersType();
  SubgroupIntegersType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    SubgroupIntegerArrayType * ValuesIn);
  ~SubgroupIntegersType();
  void printSelf(FILE * outFile);

  SubgroupIntegerArrayType * getValues();
  void setValues(SubgroupIntegerArrayType * ValuesIn);

protected:
  SubgroupIntegerArrayType * Values;
};

/* ***************************************************************** */

class SubgroupStatsValuesEnumType :
  public XmlNMTOKEN
{
public:
  SubgroupStatsValuesEnumType();
  SubgroupStatsValuesEnumType(
    const char * valIn);
  ~SubgroupStatsValuesEnumType();
  bool SubgroupStatsValuesEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatsValuesEnumType :
  public XmlNMTOKEN
{
public:
  SummaryStatsValuesEnumType();
  SummaryStatsValuesEnumType(
    const char * valIn);
  ~SummaryStatsValuesEnumType();
  bool SummaryStatsValuesEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatsValuesListType :
  public XmlTypeBase
{
public:
  SummaryStatsValuesListType();
  SummaryStatsValuesListType(
    SummaryStatsValuesTypeLisd * SummaryStatsValuesIn);
  SummaryStatsValuesListType(
    NaturalType * nIn,
    SummaryStatsValuesTypeLisd * SummaryStatsValuesIn);
  ~SummaryStatsValuesListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatsValuesTypeLisd * getSummaryStatsValues();
  void setSummaryStatsValues(SummaryStatsValuesTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatsValuesTypeLisd * SummaryStatsValues;
};

/* ***************************************************************** */

class SummaryStatsValuesListTypeLisd :
  public std::list<SummaryStatsValuesListType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatsValuesListTypeLisd();
  SummaryStatsValuesListTypeLisd(
    SummaryStatsValuesListType * aSummaryStatsValuesListType);
  ~SummaryStatsValuesListTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatsValuesType :
  public XmlTypeBase
{
public:
  SummaryStatsValuesType();
  SummaryStatsValuesType(
    SummaryStatsValuesEnumType * SummaryTypeIn,
    ListSummaryStatsValuesType * SummaryStatsIn);
  ~SummaryStatsValuesType();
  void printSelf(FILE * outFile);

  SummaryStatsValuesEnumType * getSummaryType();
  void setSummaryType(SummaryStatsValuesEnumType * SummaryTypeIn);
  ListSummaryStatsValuesType * getSummaryStats();
  void setSummaryStats(ListSummaryStatsValuesType * SummaryStatsIn);

protected:
  SummaryStatsValuesEnumType * SummaryType;
  ListSummaryStatsValuesType * SummaryStats;
};

/* ***************************************************************** */

class SummaryStatsValuesTypeLisd :
  public std::list<SummaryStatsValuesType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatsValuesTypeLisd();
  SummaryStatsValuesTypeLisd(
    SummaryStatsValuesType * aSummaryStatsValuesType);
  ~SummaryStatsValuesTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ThreadClassEnumType :
  public XmlNMTOKEN
{
public:
  ThreadClassEnumType();
  ThreadClassEnumType(
    const char * valIn);
  ~ThreadClassEnumType();
  bool ThreadClassEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ThreadClassType :
  public XmlTypeBase
{
public:
  ThreadClassType();
  ThreadClassType(
    ThreadClassTypeChoicePair * ThreadClassTypePairIn);
  ~ThreadClassType();
  void printSelf(FILE * outFile);

  ThreadClassTypeChoicePair * getThreadClassTypePair();
  void setThreadClassTypePair(ThreadClassTypeChoicePair * ThreadClassTypePairIn);

protected:
  ThreadClassTypeChoicePair * ThreadClassTypePair;
};

/* ***************************************************************** */

union ThreadClassTypeVal
{
  ThreadClassEnumType * ThreadClassEnum;
  XmlString * OtherThreadClass;
};

/* ***************************************************************** */

class ThreadClassTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ThreadClassEnumE,
    OtherThreadClassE };
  ThreadClassTypeChoicePair();
  ThreadClassTypeChoicePair(
    whichOne ThreadClassTypeTypeIn,
    ThreadClassTypeVal ThreadClassTypeValueIn);
  ~ThreadClassTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThreadClassTypeType;
  ThreadClassTypeVal ThreadClassTypeValue;
};

/* ***************************************************************** */

class ThreadSeriesEnumType :
  public XmlNMTOKEN
{
public:
  ThreadSeriesEnumType();
  ThreadSeriesEnumType(
    const char * valIn);
  ~ThreadSeriesEnumType();
  bool ThreadSeriesEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ThreadSeriesType :
  public XmlTypeBase
{
public:
  ThreadSeriesType();
  ThreadSeriesType(
    ThreadSeriesTypeChoicePair * ThreadSeriesTypePairIn);
  ~ThreadSeriesType();
  void printSelf(FILE * outFile);

  ThreadSeriesTypeChoicePair * getThreadSeriesTypePair();
  void setThreadSeriesTypePair(ThreadSeriesTypeChoicePair * ThreadSeriesTypePairIn);

protected:
  ThreadSeriesTypeChoicePair * ThreadSeriesTypePair;
};

/* ***************************************************************** */

union ThreadSeriesTypeVal
{
  ThreadSeriesEnumType * ThreadSeriesEnum;
  XmlString * OtherThreadSeries;
};

/* ***************************************************************** */

class ThreadSeriesTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ThreadSeriesEnumE,
    OtherThreadSeriesE };
  ThreadSeriesTypeChoicePair();
  ThreadSeriesTypeChoicePair(
    whichOne ThreadSeriesTypeTypeIn,
    ThreadSeriesTypeVal ThreadSeriesTypeValueIn);
  ~ThreadSeriesTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThreadSeriesTypeType;
  ThreadSeriesTypeVal ThreadSeriesTypeValue;
};

/* ***************************************************************** */

class TypeOfCoordinatesType :
  public XmlTypeBase
{
public:
  TypeOfCoordinatesType();
  TypeOfCoordinatesType(
    TypeOfCoordinatesTypeChoicePair * TypeOfCoordinatesTypePairIn);
  ~TypeOfCoordinatesType();
  void printSelf(FILE * outFile);

  TypeOfCoordinatesTypeChoicePair * getTypeOfCoordinatesTypePair();
  void setTypeOfCoordinatesTypePair(TypeOfCoordinatesTypeChoicePair * TypeOfCoordinatesTypePairIn);

protected:
  TypeOfCoordinatesTypeChoicePair * TypeOfCoordinatesTypePair;
};

/* ***************************************************************** */

union TypeOfCoordinatesTypeVal
{
  CoordinateEnumType * CoordinateEnum;
  XmlString * OtherCoordinate;
};

/* ***************************************************************** */

class TypeOfCoordinatesTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CoordinateEnumE,
    OtherCoordinateE };
  TypeOfCoordinatesTypeChoicePair();
  TypeOfCoordinatesTypeChoicePair(
    whichOne TypeOfCoordinatesTypeTypeIn,
    TypeOfCoordinatesTypeVal TypeOfCoordinatesTypeValueIn);
  ~TypeOfCoordinatesTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TypeOfCoordinatesTypeType;
  TypeOfCoordinatesTypeVal TypeOfCoordinatesTypeValue;
};

/* ***************************************************************** */

class UniformScaleType :
  public XmlTypeBase
{
public:
  UniformScaleType();
  UniformScaleType(
    XmlDecimal * ScaleFactorIn);
  ~UniformScaleType();
  void printSelf(FILE * outFile);

  XmlDecimal * getScaleFactor();
  void setScaleFactor(XmlDecimal * ScaleFactorIn);

protected:
  XmlDecimal * ScaleFactor;
};

/* ***************************************************************** */

class ZoneOrientationEnumType :
  public XmlNMTOKEN
{
public:
  ZoneOrientationEnumType();
  ZoneOrientationEnumType(
    const char * valIn);
  ~ZoneOrientationEnumType();
  bool ZoneOrientationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ScaleType_1005_Type :
  public XmlTypeBase
{
public:
  ScaleType_1005_Type();
  ScaleType_1005_Type(
    ScaleType_1005_TypeChoicePair * ScaleType_1005_TypePairIn);
  ~ScaleType_1005_Type();
  void printSelf(FILE * outFile);

  ScaleType_1005_TypeChoicePair * getScaleType_1005_TypePair();
  void setScaleType_1005_TypePair(ScaleType_1005_TypeChoicePair * ScaleType_1005_TypePairIn);

protected:
  ScaleType_1005_TypeChoicePair * ScaleType_1005_TypePair;
};

/* ***************************************************************** */

union ScaleType_1005_TypeVal
{
  UniformScaleType * UniformScale;
  RadialDifferentialScaleType * RadialDifferentialScale;
  AxialDifferentialScaleType * AxialDifferentialScale;
};

/* ***************************************************************** */

class ScaleType_1005_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UniformScaleE,
    RadialDifferentialScaleE,
    AxialDifferentialScaleE };
  ScaleType_1005_TypeChoicePair();
  ScaleType_1005_TypeChoicePair(
    whichOne ScaleType_1005_TypeTypeIn,
    ScaleType_1005_TypeVal ScaleType_1005_TypeValueIn);
  ~ScaleType_1005_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ScaleType_1005_TypeType;
  ScaleType_1005_TypeVal ScaleType_1005_TypeValue;
};

/* ***************************************************************** */

class ListAccumulatedStatsValuesType :
  public StatsWithReferenceBaseType
{
public:
  ListAccumulatedStatsValuesType();
  ListAccumulatedStatsValuesType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    ListAccumulatedStatsValuesListType * StatsIn);
  ~ListAccumulatedStatsValuesType();
  void printSelf(FILE * outFile);

  ListAccumulatedStatsValuesListType * getStats();
  void setStats(ListAccumulatedStatsValuesListType * StatsIn);

protected:
  ListAccumulatedStatsValuesListType * Stats;
};

/* ***************************************************************** */

class ListAccumulatedStatsValuesTypeLisd :
  public std::list<ListAccumulatedStatsValuesType *>,
  public XmlSchemaInstanceBase
{
public:
  ListAccumulatedStatsValuesTypeLisd();
  ListAccumulatedStatsValuesTypeLisd(
    ListAccumulatedStatsValuesType * aListAccumulatedStatsValuesType);
  ~ListAccumulatedStatsValuesTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ListSubgroupStatsValuesType :
  public StatsWithReferenceBaseType
{
public:
  ListSubgroupStatsValuesType();
  ListSubgroupStatsValuesType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    ListSubgroupStatsValuesListType * StatsIn);
  ~ListSubgroupStatsValuesType();
  void printSelf(FILE * outFile);

  ListSubgroupStatsValuesListType * getStats();
  void setStats(ListSubgroupStatsValuesListType * StatsIn);

protected:
  ListSubgroupStatsValuesListType * Stats;
};

/* ***************************************************************** */

class ListSubgroupStatsValuesTypeLisd :
  public std::list<ListSubgroupStatsValuesType *>,
  public XmlSchemaInstanceBase
{
public:
  ListSubgroupStatsValuesTypeLisd();
  ListSubgroupStatsValuesTypeLisd(
    ListSubgroupStatsValuesType * aListSubgroupStatsValuesType);
  ~ListSubgroupStatsValuesTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ListSummaryStatsValuesType :
  public StatsWithReferenceBaseType
{
public:
  ListSummaryStatsValuesType();
  ListSummaryStatsValuesType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    ListSummaryStatsValuesListType * StatsIn);
  ~ListSummaryStatsValuesType();
  void printSelf(FILE * outFile);

  ListSummaryStatsValuesListType * getStats();
  void setStats(ListSummaryStatsValuesListType * StatsIn);

protected:
  ListSummaryStatsValuesListType * Stats;
};

/* ***************************************************************** */

class StatsMeasuredDecimalType :
  public StatsWithReferenceBaseType
{
public:
  StatsMeasuredDecimalType();
  StatsMeasuredDecimalType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    MeasuredDecimalType * ValueIn);
  ~StatsMeasuredDecimalType();
  void printSelf(FILE * outFile);

  MeasuredDecimalType * getValue();
  void setValue(MeasuredDecimalType * ValueIn);

protected:
  MeasuredDecimalType * Value;
};

/* ***************************************************************** */

class StatsMeasuredDecimalWithReferenceType :
  public StatsMeasuredDecimalType
{
public:
  StatsMeasuredDecimalWithReferenceType();
  StatsMeasuredDecimalWithReferenceType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    MeasuredDecimalType * ValueIn,
    QIFReferenceType * IdIn);
  ~StatsMeasuredDecimalWithReferenceType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getId();
  void setId(QIFReferenceType * IdIn);

protected:
  QIFReferenceType * Id;
};

/* ***************************************************************** */

class StatsNonNegativeIntegerType :
  public StatsWithReferenceBaseType
{
public:
  StatsNonNegativeIntegerType();
  StatsNonNegativeIntegerType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    XmlNonNegativeInteger * ValueIn);
  ~StatsNonNegativeIntegerType();
  void printSelf(FILE * outFile);

  XmlNonNegativeInteger * getValue();
  void setValue(XmlNonNegativeInteger * ValueIn);

protected:
  XmlNonNegativeInteger * Value;
};

/* ***************************************************************** */

class StatsNonNegativeIntegerWithReferencesType :
  public StatsNonNegativeIntegerType
{
public:
  StatsNonNegativeIntegerWithReferencesType();
  StatsNonNegativeIntegerWithReferencesType(
    StatsWithReferenceBaseTypeChoicePair * StatsWithReferenceBaseTypePairIn,
    XmlNonNegativeInteger * ValueIn,
    ArrayReferenceType * IdsIn);
  ~StatsNonNegativeIntegerWithReferencesType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getIds();
  void setIds(ArrayReferenceType * IdsIn);

protected:
  ArrayReferenceType * Ids;
};

/* ***************************************************************** */

#endif // PRIMITIVESPMI_HH
