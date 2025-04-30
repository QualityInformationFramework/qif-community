/* ***************************************************************** */

#ifndef PRIMITIVES_HH
#define PRIMITIVES_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>

/* ***************************************************************** */

class AngleRangeType;
class ArrayBinaryQIFReferenceFullType;
class ArrayBinaryQIFReferenceType;
class ArrayBinaryQIFReferenceTypeChoicePair;
class ArrayBinaryType;
class ArrayDoubleType;
class ArrayI2Type;
class ArrayI3Type;
class ArrayIntType;
class ArrayNaturalType;
class ArrayPairReferenceFullType;
class ArrayPoint2dType;
class ArrayPointType;
class ArrayQPIdFullReferenceType;
class ArrayQPIdFullReferenceTypeLisd;
class ArrayReferenceActiveType;
class ArrayReferenceFullType;
class ArrayReferenceType;
class ArrayUnitVectorType;
class ArrayUnsignedByteType;
class AttributeBaseType;
class AttributeBaseTypeLisd;
class AttributeBoolType;
class AttributeD1Type;
class AttributeD2Type;
class AttributeD3Type;
class AttributeI1Type;
class AttributeI2Type;
class AttributeI3Type;
class AttributeQPIdType;
class AttributeStrType;
class AttributeTimeType;
class AttributeUserType;
class AttributeUserTypeChoicePair;
class AttributesType;
class AxisType;
class BinaryDataType;
class BoundingBoxAxisAlignedType;
class CoordinateSystemCoreType;
class D2Type;
class D3Type;
class D4Type;
class DoublePositiveType;
class ElementReferenceFullType;
class ElementReferenceType;
class FractionType;
class I2Type;
class I3Type;
class LatitudeLongitudeSweepType;
class LineSegment2dType;
class LineSegmentType;
class ListBooleanType;
class ListDateTimeType;
class ListDoubleType;
class ListIntType;
class ListNaturalType;
class ListQIFReferenceFullType;
class ListQIFReferenceSimpleType;
class ListQIFReferenceType;
class ListQIFReferenceTypeChoicePair;
class ListTokenType;
class ListUnsignedByteType;
class Natural2Type;
class NaturalType;
class OrientedLatitudeLongitudeSweepType;
class ParameterRangeType;
class PlaneType;
class PlaneXType;
class Point2dSimpleType;
class Point2dSimpleTypeLisd;
class PointSimpleType;
class PointType;
class PolyLineType;
class QIFFeaturePairType;
class QIFFeaturePairTypeLisd;
class QIFIdAndReferenceBaseType;
class QIFIdType;
class QIFReferenceActiveType;
class QIFReferenceActiveTypeLisd;
class QIFReferenceBaseType;
class QIFReferenceFullType;
class QIFReferenceFullTypeLisd;
class QIFReferenceSimpleType;
class QIFReferenceType;
class QIFReferenceTypeLisd;
class QPIdFullReferenceType;
class QPIdFullReferenceTypeLisd;
class QPIdReferenceType;
class QPIdReferenceTypeLisd;
class QPIdType;
class SweepType;
class TransformMatrixType;
class TransformRotationType;
class UnitVector2dSimpleType;
class UnitVectorSimpleType;
class UnitVectorType;
class UserDataXMLType;
class ValidationPointsType;
class ValidityEnumType;
class VectorSimpleType;
class VectorType;
class ArrayBinaryQIFR_1001_Type;
class ListQIFReferenc_1002_Type;
class ValidationPoint_1003_Type;
class ValidationPoint_1003_TypeChoicePair;
class ValidationPoint_1004_Type;
class ValidationPoint_1004_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class ArrayBinaryQIFReferenceType :
  public XmlTypeBase
{
public:
  ArrayBinaryQIFReferenceType();
  ArrayBinaryQIFReferenceType(
    ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn);
  ~ArrayBinaryQIFReferenceType();
  void printSelf(FILE * outFile);

  ArrayBinaryQIFReferenceTypeChoicePair * getArrayBinaryQIFReferenceTypePair();
  void setArrayBinaryQIFReferenceTypePair(ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn);

protected:
  ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePair;
};

/* ***************************************************************** */

union ArrayBinaryQIFReferenceTypeVal
{
  ArrayBinaryType * Ids;
  ArrayBinaryQIFR_1001_Type * ArrayBinaryQIFR_1001;
};

/* ***************************************************************** */

class ArrayBinaryQIFReferenceTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    IdsE,
    ArrayBinaryQIFR_1001E };
  ArrayBinaryQIFReferenceTypeChoicePair();
  ArrayBinaryQIFReferenceTypeChoicePair(
    whichOne ArrayBinaryQIFReferenceTypeTypeIn,
    ArrayBinaryQIFReferenceTypeVal ArrayBinaryQIFReferenceTypeValueIn);
  ~ArrayBinaryQIFReferenceTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ArrayBinaryQIFReferenceTypeType;
  ArrayBinaryQIFReferenceTypeVal ArrayBinaryQIFReferenceTypeValue;
};

/* ***************************************************************** */

class ArrayBinaryType :
  public XmlBase64Binary
{
public:
  ArrayBinaryType();
  ArrayBinaryType(
    const char * valStringIn);
  ArrayBinaryType(
    NaturalType * countIn,
    XmlUnsignedInt * sizeElementIn,
    const char * valStringIn);
  ~ArrayBinaryType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);
  XmlUnsignedInt * getsizeElement();
  void setsizeElement(XmlUnsignedInt * sizeElementIn);

protected:
  NaturalType * count;
  XmlUnsignedInt * sizeElement;
};

/* ***************************************************************** */

class ArrayPairReferenceFullType :
  public XmlTypeBase
{
public:
  ArrayPairReferenceFullType();
  ArrayPairReferenceFullType(
    QIFFeaturePairTypeLisd * FeaturePairIn);
  ArrayPairReferenceFullType(
    NaturalType * nIn,
    QIFFeaturePairTypeLisd * FeaturePairIn);
  ~ArrayPairReferenceFullType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  QIFFeaturePairTypeLisd * getFeaturePair();
  void setFeaturePair(QIFFeaturePairTypeLisd *);

protected:
  NaturalType * n;
  QIFFeaturePairTypeLisd * FeaturePair;
};

/* ***************************************************************** */

class ArrayQPIdFullReferenceType :
  public XmlTypeBase
{
public:
  ArrayQPIdFullReferenceType();
  ArrayQPIdFullReferenceType(
    QPIdFullReferenceTypeLisd * QPIdIn);
  ArrayQPIdFullReferenceType(
    NaturalType * nIn,
    QPIdFullReferenceTypeLisd * QPIdIn);
  ~ArrayQPIdFullReferenceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  QPIdFullReferenceTypeLisd * getQPId();
  void setQPId(QPIdFullReferenceTypeLisd *);

protected:
  NaturalType * n;
  QPIdFullReferenceTypeLisd * QPId;
};

/* ***************************************************************** */

class ArrayQPIdFullReferenceTypeLisd :
  public std::list<ArrayQPIdFullReferenceType *>,
  public XmlSchemaInstanceBase
{
public:
  ArrayQPIdFullReferenceTypeLisd();
  ArrayQPIdFullReferenceTypeLisd(
    ArrayQPIdFullReferenceType * aArrayQPIdFullReferenceType);
  ~ArrayQPIdFullReferenceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ArrayReferenceActiveType :
  public XmlTypeBase
{
public:
  ArrayReferenceActiveType();
  ArrayReferenceActiveType(
    QIFReferenceActiveTypeLisd * IdIn);
  ArrayReferenceActiveType(
    NaturalType * nIn,
    QIFReferenceActiveTypeLisd * IdIn);
  ~ArrayReferenceActiveType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  QIFReferenceActiveTypeLisd * getId();
  void setId(QIFReferenceActiveTypeLisd *);

protected:
  NaturalType * n;
  QIFReferenceActiveTypeLisd * Id;
};

/* ***************************************************************** */

class ArrayReferenceFullType :
  public XmlTypeBase
{
public:
  ArrayReferenceFullType();
  ArrayReferenceFullType(
    QIFReferenceFullTypeLisd * IdIn);
  ArrayReferenceFullType(
    NaturalType * nIn,
    QIFReferenceFullTypeLisd * IdIn);
  ~ArrayReferenceFullType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  QIFReferenceFullTypeLisd * getId();
  void setId(QIFReferenceFullTypeLisd *);

protected:
  NaturalType * n;
  QIFReferenceFullTypeLisd * Id;
};

/* ***************************************************************** */

class ArrayReferenceType :
  public XmlTypeBase
{
public:
  ArrayReferenceType();
  ArrayReferenceType(
    QIFReferenceTypeLisd * IdIn);
  ArrayReferenceType(
    NaturalType * nIn,
    QIFReferenceTypeLisd * IdIn);
  ~ArrayReferenceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  QIFReferenceTypeLisd * getId();
  void setId(QIFReferenceTypeLisd *);

protected:
  NaturalType * n;
  QIFReferenceTypeLisd * Id;
};

/* ***************************************************************** */

class AttributeBaseType :
  public XmlTypeBase
{
public:
  AttributeBaseType();
  AttributeBaseType(
    XmlString * nameIn);
  ~AttributeBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getname();
  void setname(XmlString * nameIn);

protected:
  XmlString * name;
};

/* ***************************************************************** */

class AttributeBaseTypeLisd :
  public std::list<AttributeBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  AttributeBaseTypeLisd();
  AttributeBaseTypeLisd(
    AttributeBaseType * aAttributeBaseType);
  ~AttributeBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AttributeBoolType :
  public AttributeBaseType
{
public:
  AttributeBoolType();
  AttributeBoolType(
    XmlString * nameIn,
    XmlBoolean * valueIn);
  ~AttributeBoolType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getvalue();
  void setvalue(XmlBoolean * valueIn);

protected:
  XmlBoolean * value;
};

/* ***************************************************************** */

class AttributeD1Type :
  public AttributeBaseType
{
public:
  AttributeD1Type();
  AttributeD1Type(
    XmlString * nameIn,
    XmlDouble * valueIn);
  ~AttributeD1Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDouble * getvalue();
  void setvalue(XmlDouble * valueIn);

protected:
  XmlDouble * value;
};

/* ***************************************************************** */

class AttributeD2Type :
  public AttributeBaseType
{
public:
  AttributeD2Type();
  AttributeD2Type(
    XmlString * nameIn,
    D2Type * valueIn);
  ~AttributeD2Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  D2Type * getvalue();
  void setvalue(D2Type * valueIn);

protected:
  D2Type * value;
};

/* ***************************************************************** */

class AttributeD3Type :
  public AttributeBaseType
{
public:
  AttributeD3Type();
  AttributeD3Type(
    XmlString * nameIn,
    D3Type * valueIn);
  ~AttributeD3Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  D3Type * getvalue();
  void setvalue(D3Type * valueIn);

protected:
  D3Type * value;
};

/* ***************************************************************** */

class AttributeI1Type :
  public AttributeBaseType
{
public:
  AttributeI1Type();
  AttributeI1Type(
    XmlString * nameIn,
    XmlInteger * valueIn);
  ~AttributeI1Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlInteger * getvalue();
  void setvalue(XmlInteger * valueIn);

protected:
  XmlInteger * value;
};

/* ***************************************************************** */

class AttributeI2Type :
  public AttributeBaseType
{
public:
  AttributeI2Type();
  AttributeI2Type(
    XmlString * nameIn,
    I2Type * valueIn);
  ~AttributeI2Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  I2Type * getvalue();
  void setvalue(I2Type * valueIn);

protected:
  I2Type * value;
};

/* ***************************************************************** */

class AttributeI3Type :
  public AttributeBaseType
{
public:
  AttributeI3Type();
  AttributeI3Type(
    XmlString * nameIn,
    I3Type * valueIn);
  ~AttributeI3Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  I3Type * getvalue();
  void setvalue(I3Type * valueIn);

protected:
  I3Type * value;
};

/* ***************************************************************** */

class AttributeQPIdType :
  public AttributeBaseType
{
public:
  AttributeQPIdType();
  AttributeQPIdType(
    QPIdType * ValueIn);
  AttributeQPIdType(
    XmlString * nameIn,
    QPIdType * ValueIn);
  ~AttributeQPIdType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QPIdType * getValue();
  void setValue(QPIdType * ValueIn);

protected:
  QPIdType * Value;
};

/* ***************************************************************** */

class AttributeStrType :
  public AttributeBaseType
{
public:
  AttributeStrType();
  AttributeStrType(
    XmlString * nameIn,
    XmlString * valueIn);
  ~AttributeStrType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getvalue();
  void setvalue(XmlString * valueIn);

protected:
  XmlString * value;
};

/* ***************************************************************** */

class AttributeTimeType :
  public AttributeBaseType
{
public:
  AttributeTimeType();
  AttributeTimeType(
    XmlString * nameIn,
    XmlDateTime * valueIn);
  ~AttributeTimeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDateTime * getvalue();
  void setvalue(XmlDateTime * valueIn);

protected:
  XmlDateTime * value;
};

/* ***************************************************************** */

class AttributeUserType :
  public AttributeBaseType
{
public:
  AttributeUserType();
  AttributeUserType(
    AttributeUserTypeChoicePair * AttributeUserTypePairIn);
  AttributeUserType(
    XmlString * nameIn,
    XmlString * nameUserAttributeIn,
    AttributeUserTypeChoicePair * AttributeUserTypePairIn);
  ~AttributeUserType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getnameUserAttribute();
  void setnameUserAttribute(XmlString * nameUserAttributeIn);
  AttributeUserTypeChoicePair * getAttributeUserTypeChoicePair();
  void setAttributeUserTypeChoicePair(AttributeUserTypeChoicePair * AttributeUserTypePairIn);

protected:
  XmlString * nameUserAttribute;
  AttributeUserTypeChoicePair * AttributeUserTypePair;
};

/* ***************************************************************** */

union AttributeUserTypeVal
{
  UserDataXMLType * UserDataXML;
  BinaryDataType * UserDataBinary;
};

/* ***************************************************************** */

class AttributeUserTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDataXMLE,
    UserDataBinaryE };
  AttributeUserTypeChoicePair();
  AttributeUserTypeChoicePair(
    whichOne AttributeUserTypeTypeIn,
    AttributeUserTypeVal AttributeUserTypeValueIn);
  ~AttributeUserTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AttributeUserTypeType;
  AttributeUserTypeVal AttributeUserTypeValue;
};

/* ***************************************************************** */

class AttributesType :
  public XmlTypeBase
{
public:
  AttributesType();
  AttributesType(
    AttributeBaseTypeLisd * AttributeIn);
  AttributesType(
    NaturalType * nIn,
    AttributeBaseTypeLisd * AttributeIn);
  ~AttributesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AttributeBaseTypeLisd * getAttribute();
  void setAttribute(AttributeBaseTypeLisd *);

protected:
  NaturalType * n;
  AttributeBaseTypeLisd * Attribute;
};

/* ***************************************************************** */

class AxisType :
  public XmlTypeBase
{
public:
  AxisType();
  AxisType(
    PointType * AxisPointIn,
    UnitVectorType * DirectionIn);
  ~AxisType();
  void printSelf(FILE * outFile);

  PointType * getAxisPoint();
  void setAxisPoint(PointType * AxisPointIn);
  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);

protected:
  PointType * AxisPoint;
  UnitVectorType * Direction;
};

/* ***************************************************************** */

class BinaryDataType :
  public XmlBase64Binary
{
public:
  BinaryDataType();
  BinaryDataType(
    const char * valStringIn);
  BinaryDataType(
    NaturalType * countIn,
    const char * valStringIn);
  ~BinaryDataType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class BoundingBoxAxisAlignedType :
  public XmlTypeBase
{
public:
  BoundingBoxAxisAlignedType();
  BoundingBoxAxisAlignedType(
    PointSimpleType * PointMinIn,
    PointSimpleType * PointMaxIn);
  ~BoundingBoxAxisAlignedType();
  void printSelf(FILE * outFile);

  PointSimpleType * getPointMin();
  void setPointMin(PointSimpleType * PointMinIn);
  PointSimpleType * getPointMax();
  void setPointMax(PointSimpleType * PointMaxIn);

protected:
  PointSimpleType * PointMin;
  PointSimpleType * PointMax;
};

/* ***************************************************************** */

class CoordinateSystemCoreType :
  public XmlTypeBase
{
public:
  CoordinateSystemCoreType();
  CoordinateSystemCoreType(
    TransformRotationType * RotationIn,
    PointSimpleType * OriginIn);
  ~CoordinateSystemCoreType();
  void printSelf(FILE * outFile);

  TransformRotationType * getRotation();
  void setRotation(TransformRotationType * RotationIn);
  PointSimpleType * getOrigin();
  void setOrigin(PointSimpleType * OriginIn);

protected:
  TransformRotationType * Rotation;
  PointSimpleType * Origin;
};

/* ***************************************************************** */

class DoublePositiveType :
  public XmlDouble
{
public:
  DoublePositiveType();
  DoublePositiveType(
    const char * valIn);
  ~DoublePositiveType();
  bool DoublePositiveTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ElementReferenceFullType :
  public XmlTypeBase
{
public:
  ElementReferenceFullType();
  ElementReferenceFullType(
    QIFReferenceFullType * IdIn);
  ~ElementReferenceFullType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getId();
  void setId(QIFReferenceFullType * IdIn);

protected:
  QIFReferenceFullType * Id;
};

/* ***************************************************************** */

class ElementReferenceType :
  public XmlTypeBase
{
public:
  ElementReferenceType();
  ElementReferenceType(
    QIFReferenceType * IdIn);
  ~ElementReferenceType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getId();
  void setId(QIFReferenceType * IdIn);

protected:
  QIFReferenceType * Id;
};

/* ***************************************************************** */

class FractionType :
  public XmlTypeBase
{
public:
  FractionType();
  FractionType(
    NaturalType * NumeratorIn,
    NaturalType * DenominatorIn);
  ~FractionType();
  void printSelf(FILE * outFile);

  NaturalType * getNumerator();
  void setNumerator(NaturalType * NumeratorIn);
  NaturalType * getDenominator();
  void setDenominator(NaturalType * DenominatorIn);

protected:
  NaturalType * Numerator;
  NaturalType * Denominator;
};

/* ***************************************************************** */

class LatitudeLongitudeSweepType :
  public XmlTypeBase
{
public:
  LatitudeLongitudeSweepType();
  LatitudeLongitudeSweepType(
    UnitVectorType * DirMeridianPrimeIn,
    AngleRangeType * DomainLatitudeIn,
    AngleRangeType * DomainLongitudeIn);
  ~LatitudeLongitudeSweepType();
  void printSelf(FILE * outFile);

  UnitVectorType * getDirMeridianPrime();
  void setDirMeridianPrime(UnitVectorType * DirMeridianPrimeIn);
  AngleRangeType * getDomainLatitude();
  void setDomainLatitude(AngleRangeType * DomainLatitudeIn);
  AngleRangeType * getDomainLongitude();
  void setDomainLongitude(AngleRangeType * DomainLongitudeIn);

protected:
  UnitVectorType * DirMeridianPrime;
  AngleRangeType * DomainLatitude;
  AngleRangeType * DomainLongitude;
};

/* ***************************************************************** */

class LineSegment2dType :
  public XmlTypeBase
{
public:
  LineSegment2dType();
  LineSegment2dType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn);
  ~LineSegment2dType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getStartPoint();
  void setStartPoint(Point2dSimpleType * StartPointIn);
  Point2dSimpleType * getEndPoint();
  void setEndPoint(Point2dSimpleType * EndPointIn);

protected:
  Point2dSimpleType * StartPoint;
  Point2dSimpleType * EndPoint;
};

/* ***************************************************************** */

class LineSegmentType :
  public XmlTypeBase
{
public:
  LineSegmentType();
  LineSegmentType(
    PointSimpleType * StartPointIn,
    PointSimpleType * EndPointIn);
  LineSegmentType(
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
    PointSimpleType * EndPointIn);
  ~LineSegmentType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

  PointSimpleType * getStartPoint();
  void setStartPoint(PointSimpleType * StartPointIn);
  PointSimpleType * getEndPoint();
  void setEndPoint(PointSimpleType * EndPointIn);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
  PointSimpleType * StartPoint;
  PointSimpleType * EndPoint;
};

/* ***************************************************************** */

class ListBooleanType :
  public XmlBooleanLisd
{
public:
  ListBooleanType();
  ListBooleanType(
    XmlBoolean * aXmlBoolean);
  ListBooleanType(
    const char * valueString);
  ~ListBooleanType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
};

/* ***************************************************************** */

class ListDateTimeType :
  public XmlDateTimeLisd
{
public:
  ListDateTimeType();
  ListDateTimeType(
    XmlDateTime * aXmlDateTime);
  ListDateTimeType(
    const char * valueString);
  ~ListDateTimeType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
};

/* ***************************************************************** */

class ListDoubleType :
  public XmlDoubleLisd
{
public:
  ListDoubleType();
  ListDoubleType(
    XmlDouble * aXmlDouble);
  ListDoubleType(
    const char * valueString);
  ~ListDoubleType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
};

/* ***************************************************************** */

class ListIntType :
  public XmlIntegerLisd
{
public:
  ListIntType();
  ListIntType(
    XmlInteger * aXmlInteger);
  ListIntType(
    const char * valueString);
  ~ListIntType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
};

/* ***************************************************************** */

class ListNaturalType :
  public std::list<NaturalType *>,
  public XmlTypeBase
{
public:
  ListNaturalType();
  ListNaturalType(
    NaturalType * aNaturalType);
  ListNaturalType(
    const char * valueString);
  ~ListNaturalType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);

  bool getbad();
  void setbad(bool badIn);

protected:
  bool bad;
};

/* ***************************************************************** */

class ListQIFReferenceSimpleType :
  public std::list<QIFReferenceSimpleType *>,
  public XmlTypeBase
{
public:
  ListQIFReferenceSimpleType();
  ListQIFReferenceSimpleType(
    QIFReferenceSimpleType * aQIFReferenceSimpleType);
  ListQIFReferenceSimpleType(
    const char * valueString);
  ~ListQIFReferenceSimpleType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);

  bool getbad();
  void setbad(bool badIn);

protected:
  bool bad;
};

/* ***************************************************************** */

class ListQIFReferenceType :
  public XmlTypeBase
{
public:
  ListQIFReferenceType();
  ListQIFReferenceType(
    ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn);
  ListQIFReferenceType(
    NaturalType * nIn,
    ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn);
  ~ListQIFReferenceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ListQIFReferenceTypeChoicePair * getListQIFReferenceTypePair();
  void setListQIFReferenceTypePair(ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn);

protected:
  NaturalType * n;
  ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePair;
};

/* ***************************************************************** */

union ListQIFReferenceTypeVal
{
  ListQIFReferenceSimpleType * Ids;
  ListQIFReferenc_1002_Type * ListQIFReferenc_1002;
};

/* ***************************************************************** */

class ListQIFReferenceTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    IdsE,
    ListQIFReferenc_1002E };
  ListQIFReferenceTypeChoicePair();
  ListQIFReferenceTypeChoicePair(
    whichOne ListQIFReferenceTypeTypeIn,
    ListQIFReferenceTypeVal ListQIFReferenceTypeValueIn);
  ~ListQIFReferenceTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ListQIFReferenceTypeType;
  ListQIFReferenceTypeVal ListQIFReferenceTypeValue;
};

/* ***************************************************************** */

class ListTokenType :
  public XmlNMTOKENLisd
{
public:
  ListTokenType();
  ListTokenType(
    XmlNMTOKEN * aXmlNMTOKEN);
  ListTokenType(
    const char * valueString);
  ~ListTokenType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
};

/* ***************************************************************** */

class ListUnsignedByteType :
  public XmlUnsignedByteLisd
{
public:
  ListUnsignedByteType();
  ListUnsignedByteType(
    XmlUnsignedByte * aXmlUnsignedByte);
  ListUnsignedByteType(
    const char * valueString);
  ~ListUnsignedByteType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
};

/* ***************************************************************** */

class Natural2Type :
  public ListNaturalType
{
public:
  Natural2Type();
  Natural2Type(
    NaturalType * aNaturalType);
  Natural2Type(
    const char * valueString);
  ~Natural2Type();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool Natural2TypeCheck();
};

/* ***************************************************************** */

class NaturalType :
  public XmlUnsignedInt
{
public:
  NaturalType();
  NaturalType(
    const char * valIn);
  ~NaturalType();
  bool NaturalTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class OrientedLatitudeLongitudeSweepType :
  public LatitudeLongitudeSweepType
{
public:
  OrientedLatitudeLongitudeSweepType();
  OrientedLatitudeLongitudeSweepType(
    UnitVectorType * DirMeridianPrimeIn,
    AngleRangeType * DomainLatitudeIn,
    AngleRangeType * DomainLongitudeIn,
    UnitVectorType * DirNorthPoleIn);
  ~OrientedLatitudeLongitudeSweepType();
  void printSelf(FILE * outFile);

  UnitVectorType * getDirNorthPole();
  void setDirNorthPole(UnitVectorType * DirNorthPoleIn);

protected:
  UnitVectorType * DirNorthPole;
};

/* ***************************************************************** */

class ParameterRangeType :
  public ListDoubleType
{
public:
  ParameterRangeType();
  ParameterRangeType(
    XmlDouble * aXmlDouble);
  ParameterRangeType(
    const char * valueString);
  ~ParameterRangeType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool ParameterRangeTypeCheck();
};

/* ***************************************************************** */

class PlaneType :
  public XmlTypeBase
{
public:
  PlaneType();
  PlaneType(
    PointType * PointIn,
    UnitVectorType * NormalIn);
  ~PlaneType();
  void printSelf(FILE * outFile);

  PointType * getPoint();
  void setPoint(PointType * PointIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);

protected:
  PointType * Point;
  UnitVectorType * Normal;
};

/* ***************************************************************** */

class PlaneXType :
  public PlaneType
{
public:
  PlaneXType();
  PlaneXType(
    PointType * PointIn,
    UnitVectorType * NormalIn,
    UnitVectorType * DirectionIn);
  ~PlaneXType();
  void printSelf(FILE * outFile);

  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);

protected:
  UnitVectorType * Direction;
};

/* ***************************************************************** */

class Point2dSimpleType :
  public ListDoubleType
{
public:
  Point2dSimpleType();
  Point2dSimpleType(
    XmlDouble * aXmlDouble);
  Point2dSimpleType(
    const char * valueString);
  ~Point2dSimpleType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool Point2dSimpleTypeCheck();
};

/* ***************************************************************** */

class Point2dSimpleTypeLisd :
  public std::list<Point2dSimpleType *>,
  public XmlTypeBase
{
public:
  Point2dSimpleTypeLisd();
  Point2dSimpleTypeLisd(
    Point2dSimpleType * aPoint2dSimpleType);
  Point2dSimpleTypeLisd(
    Point2dSimpleTypeLisd * aPoint2dSimpleTypeLisd);
  ~Point2dSimpleTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointSimpleType :
  public ListDoubleType
{
public:
  PointSimpleType();
  PointSimpleType(
    XmlDouble * aXmlDouble);
  PointSimpleType(
    const char * valueString);
  ~PointSimpleType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool PointSimpleTypeCheck();
};

/* ***************************************************************** */

class PointType :
  public PointSimpleType
{
public:
  PointType();
  PointType(
    XmlDouble * aXmlDouble);
  PointType(
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
    XmlDouble * aXmlDouble);
  ~PointType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool PointTypeCheck();
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
};

/* ***************************************************************** */

class QIFFeaturePairType :
  public XmlTypeBase
{
public:
  QIFFeaturePairType();
  QIFFeaturePairType(
    QIFReferenceFullType * FirstFeatureIn,
    QIFReferenceFullType * SecondFeatureIn,
    QIFReferenceFullType * FirstFeatureZoneIn,
    QIFReferenceFullType * SecondFeatureZoneIn);
  ~QIFFeaturePairType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getFirstFeature();
  void setFirstFeature(QIFReferenceFullType * FirstFeatureIn);
  QIFReferenceFullType * getSecondFeature();
  void setSecondFeature(QIFReferenceFullType * SecondFeatureIn);
  QIFReferenceFullType * getFirstFeatureZone();
  void setFirstFeatureZone(QIFReferenceFullType * FirstFeatureZoneIn);
  QIFReferenceFullType * getSecondFeatureZone();
  void setSecondFeatureZone(QIFReferenceFullType * SecondFeatureZoneIn);

protected:
  QIFReferenceFullType * FirstFeature;
  QIFReferenceFullType * SecondFeature;
  QIFReferenceFullType * FirstFeatureZone;
  QIFReferenceFullType * SecondFeatureZone;
};

/* ***************************************************************** */

class QIFFeaturePairTypeLisd :
  public std::list<QIFFeaturePairType *>,
  public XmlSchemaInstanceBase
{
public:
  QIFFeaturePairTypeLisd();
  QIFFeaturePairTypeLisd(
    QIFFeaturePairType * aQIFFeaturePairType);
  ~QIFFeaturePairTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QIFIdAndReferenceBaseType :
  public XmlUnsignedInt
{
public:
  QIFIdAndReferenceBaseType();
  QIFIdAndReferenceBaseType(
    const char * valIn);
  ~QIFIdAndReferenceBaseType();
  bool QIFIdAndReferenceBaseTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class QIFIdType :
  public QIFIdAndReferenceBaseType
{
public:
  QIFIdType();
  QIFIdType(
    const char * valIn);
  ~QIFIdType();
  bool QIFIdTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class QIFReferenceBaseType :
  public QIFIdAndReferenceBaseType
{
public:
  QIFReferenceBaseType();
  QIFReferenceBaseType(
    const char * valIn);
  ~QIFReferenceBaseType();
  bool QIFReferenceBaseTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class QIFReferenceSimpleType :
  public QIFReferenceBaseType
{
public:
  QIFReferenceSimpleType();
  QIFReferenceSimpleType(
    const char * valIn);
  ~QIFReferenceSimpleType();
  bool QIFReferenceSimpleTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class QIFReferenceType :
  public QIFReferenceBaseType
{
public:
  QIFReferenceType();
  QIFReferenceType(
    const char * valStringIn);
  QIFReferenceType(
    QIFReferenceSimpleType * xIdIn,
    const char * valStringIn);
  ~QIFReferenceType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool QIFReferenceTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceSimpleType * getxId();
  void setxId(QIFReferenceSimpleType * xIdIn);

protected:
  QIFReferenceSimpleType * xId;
};

/* ***************************************************************** */

class QIFReferenceTypeLisd :
  public std::list<QIFReferenceType *>,
  public XmlSchemaInstanceBase
{
public:
  QIFReferenceTypeLisd();
  QIFReferenceTypeLisd(
    QIFReferenceType * aQIFReferenceType);
  ~QIFReferenceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QPIdFullReferenceType :
  public XmlTypeBase
{
public:
  QPIdFullReferenceType();
  QPIdFullReferenceType(
    QPIdReferenceType * ItemQPIdIn,
    QPIdReferenceTypeLisd * DocumentQPIdIn);
  ~QPIdFullReferenceType();
  void printSelf(FILE * outFile);

  QPIdReferenceType * getItemQPId();
  void setItemQPId(QPIdReferenceType * ItemQPIdIn);
  QPIdReferenceTypeLisd * getDocumentQPId();
  void setDocumentQPId(QPIdReferenceTypeLisd *);

protected:
  QPIdReferenceType * ItemQPId;
  QPIdReferenceTypeLisd * DocumentQPId;
};

/* ***************************************************************** */

class QPIdFullReferenceTypeLisd :
  public std::list<QPIdFullReferenceType *>,
  public XmlSchemaInstanceBase
{
public:
  QPIdFullReferenceTypeLisd();
  QPIdFullReferenceTypeLisd(
    QPIdFullReferenceType * aQPIdFullReferenceType);
  ~QPIdFullReferenceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QPIdReferenceType :
  public XmlToken
{
public:
  QPIdReferenceType();
  QPIdReferenceType(
    const char * valIn);
  ~QPIdReferenceType();
  bool QPIdReferenceTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class QPIdReferenceTypeLisd :
  public std::list<QPIdReferenceType *>,
  public XmlTypeBase
{
public:
  QPIdReferenceTypeLisd();
  QPIdReferenceTypeLisd(
    QPIdReferenceType * aQPIdReferenceType);
  QPIdReferenceTypeLisd(
    QPIdReferenceTypeLisd * aQPIdReferenceTypeLisd);
  ~QPIdReferenceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QPIdType :
  public XmlToken
{
public:
  QPIdType();
  QPIdType(
    const char * valIn);
  ~QPIdType();
  bool QPIdTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SweepType :
  public XmlTypeBase
{
public:
  SweepType();
  SweepType(
    UnitVectorType * DirBegIn,
    AngleRangeType * DomainAngleIn);
  ~SweepType();
  void printSelf(FILE * outFile);

  UnitVectorType * getDirBeg();
  void setDirBeg(UnitVectorType * DirBegIn);
  AngleRangeType * getDomainAngle();
  void setDomainAngle(AngleRangeType * DomainAngleIn);

protected:
  UnitVectorType * DirBeg;
  AngleRangeType * DomainAngle;
};

/* ***************************************************************** */

class TransformMatrixType :
  public CoordinateSystemCoreType
{
public:
  TransformMatrixType();
  TransformMatrixType(
    TransformRotationType * RotationIn,
    PointSimpleType * OriginIn);
  TransformMatrixType(
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
    ValidityEnumType * zValidityIn);
  ~TransformMatrixType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
};

/* ***************************************************************** */

class TransformRotationType :
  public XmlTypeBase
{
public:
  TransformRotationType();
  TransformRotationType(
    UnitVectorSimpleType * XDirectionIn,
    UnitVectorSimpleType * YDirectionIn,
    UnitVectorSimpleType * ZDirectionIn);
  ~TransformRotationType();
  void printSelf(FILE * outFile);

  UnitVectorSimpleType * getXDirection();
  void setXDirection(UnitVectorSimpleType * XDirectionIn);
  UnitVectorSimpleType * getYDirection();
  void setYDirection(UnitVectorSimpleType * YDirectionIn);
  UnitVectorSimpleType * getZDirection();
  void setZDirection(UnitVectorSimpleType * ZDirectionIn);

protected:
  UnitVectorSimpleType * XDirection;
  UnitVectorSimpleType * YDirection;
  UnitVectorSimpleType * ZDirection;
};

/* ***************************************************************** */

class UnitVector2dSimpleType :
  public ListDoubleType
{
public:
  UnitVector2dSimpleType();
  UnitVector2dSimpleType(
    XmlDouble * aXmlDouble);
  UnitVector2dSimpleType(
    const char * valueString);
  ~UnitVector2dSimpleType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool UnitVector2dSimpleTypeCheck();
};

/* ***************************************************************** */

class UnitVectorSimpleType :
  public ListDoubleType
{
public:
  UnitVectorSimpleType();
  UnitVectorSimpleType(
    XmlDouble * aXmlDouble);
  UnitVectorSimpleType(
    const char * valueString);
  ~UnitVectorSimpleType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool UnitVectorSimpleTypeCheck();
};

/* ***************************************************************** */

class UnitVectorType :
  public UnitVectorSimpleType
{
public:
  UnitVectorType();
  UnitVectorType(
    XmlDouble * aXmlDouble);
  UnitVectorType(
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
    XmlDouble * aXmlDouble);
  ~UnitVectorType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool UnitVectorTypeCheck();
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
};

/* ***************************************************************** */

class UserDataXMLType :
  public XmlTypeBase
{
public:
  UserDataXMLType();
  UserDataXMLType(
    XmlAnyString * XmlAnyElementIn);
  ~UserDataXMLType();
  void printSelf(FILE * outFile);

  XmlAnyString * getXmlAnyElement();
  void setXmlAnyElement(XmlAnyString * XmlAnyElementIn);

protected:
  XmlAnyString * XmlAnyElement;
};

/* ***************************************************************** */

class ValidationPointsType :
  public XmlTypeBase
{
public:
  ValidationPointsType();
  ValidationPointsType(
    ValidationPoint_1003_Type * ValidationPoint_1003In,
    ValidationPoint_1004_Type * ValidationPoint_1004In);
  ~ValidationPointsType();
  void printSelf(FILE * outFile);

  ValidationPoint_1003_Type * getValidationPoint_1003();
  void setValidationPoint_1003(ValidationPoint_1003_Type * ValidationPoint_1003In);
  ValidationPoint_1004_Type * getValidationPoint_1004();
  void setValidationPoint_1004(ValidationPoint_1004_Type * ValidationPoint_1004In);

protected:
  ValidationPoint_1003_Type * ValidationPoint_1003;
  ValidationPoint_1004_Type * ValidationPoint_1004;
};

/* ***************************************************************** */

class ValidityEnumType :
  public XmlNMTOKEN
{
public:
  ValidityEnumType();
  ValidityEnumType(
    const char * valIn);
  ~ValidityEnumType();
  bool ValidityEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class VectorSimpleType :
  public ListDoubleType
{
public:
  VectorSimpleType();
  VectorSimpleType(
    XmlDouble * aXmlDouble);
  VectorSimpleType(
    const char * valueString);
  ~VectorSimpleType();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool VectorSimpleTypeCheck();
};

/* ***************************************************************** */

class VectorType :
  public VectorSimpleType
{
public:
  VectorType();
  VectorType(
    XmlDouble * aXmlDouble);
  VectorType(
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
    XmlDouble * aXmlDouble);
  ~VectorType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool VectorTypeCheck();
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
};

/* ***************************************************************** */

class ArrayBinaryQIFR_1001_Type :
  public XmlTypeBase
{
public:
  ArrayBinaryQIFR_1001_Type();
  ArrayBinaryQIFR_1001_Type(
    QIFReferenceSimpleType * IdIn,
    ArrayBinaryType * XIdsIn);
  ~ArrayBinaryQIFR_1001_Type();
  void printSelf(FILE * outFile);

  QIFReferenceSimpleType * getId();
  void setId(QIFReferenceSimpleType * IdIn);
  ArrayBinaryType * getXIds();
  void setXIds(ArrayBinaryType * XIdsIn);

protected:
  QIFReferenceSimpleType * Id;
  ArrayBinaryType * XIds;
};

/* ***************************************************************** */

class ListQIFReferenc_1002_Type :
  public XmlTypeBase
{
public:
  ListQIFReferenc_1002_Type();
  ListQIFReferenc_1002_Type(
    QIFReferenceSimpleType * IdIn,
    ListQIFReferenceSimpleType * XIdsIn);
  ~ListQIFReferenc_1002_Type();
  void printSelf(FILE * outFile);

  QIFReferenceSimpleType * getId();
  void setId(QIFReferenceSimpleType * IdIn);
  ListQIFReferenceSimpleType * getXIds();
  void setXIds(ListQIFReferenceSimpleType * XIdsIn);

protected:
  QIFReferenceSimpleType * Id;
  ListQIFReferenceSimpleType * XIds;
};

/* ***************************************************************** */

class ValidationPoint_1003_Type :
  public XmlTypeBase
{
public:
  ValidationPoint_1003_Type();
  ValidationPoint_1003_Type(
    ValidationPoint_1003_TypeChoicePair * ValidationPoint_1003_TypePairIn);
  ~ValidationPoint_1003_Type();
  void printSelf(FILE * outFile);

  ValidationPoint_1003_TypeChoicePair * getValidationPoint_1003_TypePair();
  void setValidationPoint_1003_TypePair(ValidationPoint_1003_TypeChoicePair * ValidationPoint_1003_TypePairIn);

protected:
  ValidationPoint_1003_TypeChoicePair * ValidationPoint_1003_TypePair;
};

/* ***************************************************************** */

union ValidationPoint_1003_TypeVal
{
  ArrayPointType * Points;
  ArrayBinaryType * PointsBinary;
};

/* ***************************************************************** */

class ValidationPoint_1003_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsE,
    PointsBinaryE };
  ValidationPoint_1003_TypeChoicePair();
  ValidationPoint_1003_TypeChoicePair(
    whichOne ValidationPoint_1003_TypeTypeIn,
    ValidationPoint_1003_TypeVal ValidationPoint_1003_TypeValueIn);
  ~ValidationPoint_1003_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ValidationPoint_1003_TypeType;
  ValidationPoint_1003_TypeVal ValidationPoint_1003_TypeValue;
};

/* ***************************************************************** */

class ValidationPoint_1004_Type :
  public XmlTypeBase
{
public:
  ValidationPoint_1004_Type();
  ValidationPoint_1004_Type(
    ValidationPoint_1004_TypeChoicePair * ValidationPoint_1004_TypePairIn);
  ~ValidationPoint_1004_Type();
  void printSelf(FILE * outFile);

  ValidationPoint_1004_TypeChoicePair * getValidationPoint_1004_TypePair();
  void setValidationPoint_1004_TypePair(ValidationPoint_1004_TypeChoicePair * ValidationPoint_1004_TypePairIn);

protected:
  ValidationPoint_1004_TypeChoicePair * ValidationPoint_1004_TypePair;
};

/* ***************************************************************** */

union ValidationPoint_1004_TypeVal
{
  ArrayUnitVectorType * Directions;
  ArrayBinaryType * DirectionsBinary;
};

/* ***************************************************************** */

class ValidationPoint_1004_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DirectionsE,
    DirectionsBinaryE };
  ValidationPoint_1004_TypeChoicePair();
  ValidationPoint_1004_TypeChoicePair(
    whichOne ValidationPoint_1004_TypeTypeIn,
    ValidationPoint_1004_TypeVal ValidationPoint_1004_TypeValueIn);
  ~ValidationPoint_1004_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ValidationPoint_1004_TypeType;
  ValidationPoint_1004_TypeVal ValidationPoint_1004_TypeValue;
};

/* ***************************************************************** */

class ArrayBinaryQIFReferenceFullType :
  public ArrayBinaryQIFReferenceType
{
public:
  ArrayBinaryQIFReferenceFullType();
  ArrayBinaryQIFReferenceFullType(
    ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn);
  ArrayBinaryQIFReferenceFullType(
    ArrayBinaryQIFReferenceTypeChoicePair * ArrayBinaryQIFReferenceTypePairIn,
    QIFReferenceSimpleType * asmPathIdIn,
    QIFReferenceSimpleType * asmPathXIdIn);
  ~ArrayBinaryQIFReferenceFullType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceSimpleType * getasmPathId();
  void setasmPathId(QIFReferenceSimpleType * asmPathIdIn);
  QIFReferenceSimpleType * getasmPathXId();
  void setasmPathXId(QIFReferenceSimpleType * asmPathXIdIn);

protected:
  QIFReferenceSimpleType * asmPathId;
  QIFReferenceSimpleType * asmPathXId;
};

/* ***************************************************************** */

class ArrayDoubleType :
  public ListDoubleType
{
public:
  ArrayDoubleType();
  ArrayDoubleType(
    XmlDouble * aXmlDouble);
  ArrayDoubleType(
    NaturalType * countIn,
    XmlDouble * aXmlDouble);
  ~ArrayDoubleType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class ArrayI2Type :
  public ListIntType
{
public:
  ArrayI2Type();
  ArrayI2Type(
    XmlInteger * aXmlInteger);
  ArrayI2Type(
    NaturalType * countIn,
    XmlInteger * aXmlInteger);
  ~ArrayI2Type();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class ArrayI3Type :
  public ListIntType
{
public:
  ArrayI3Type();
  ArrayI3Type(
    XmlInteger * aXmlInteger);
  ArrayI3Type(
    NaturalType * countIn,
    XmlInteger * aXmlInteger);
  ~ArrayI3Type();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class ArrayIntType :
  public ListIntType
{
public:
  ArrayIntType();
  ArrayIntType(
    XmlInteger * aXmlInteger);
  ArrayIntType(
    NaturalType * countIn,
    XmlInteger * aXmlInteger);
  ~ArrayIntType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class ArrayNaturalType :
  public ListNaturalType
{
public:
  ArrayNaturalType();
  ArrayNaturalType(
    NaturalType * aNaturalType);
  ArrayNaturalType(
    NaturalType * countIn,
    NaturalType * aNaturalType);
  ~ArrayNaturalType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class ArrayPoint2dType :
  public ListDoubleType
{
public:
  ArrayPoint2dType();
  ArrayPoint2dType(
    XmlDouble * aXmlDouble);
  ArrayPoint2dType(
    NaturalType * countIn,
    XmlDouble * aXmlDouble);
  ~ArrayPoint2dType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class ArrayPointType :
  public ListDoubleType
{
public:
  ArrayPointType();
  ArrayPointType(
    XmlDouble * aXmlDouble);
  ArrayPointType(
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
    XmlDouble * aXmlDouble);
  ~ArrayPointType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);
  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

protected:
  NaturalType * count;
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
};

/* ***************************************************************** */

class ArrayUnitVectorType :
  public ListDoubleType
{
public:
  ArrayUnitVectorType();
  ArrayUnitVectorType(
    XmlDouble * aXmlDouble);
  ArrayUnitVectorType(
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
    XmlDouble * aXmlDouble);
  ~ArrayUnitVectorType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);
  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

protected:
  NaturalType * count;
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
};

/* ***************************************************************** */

class ArrayUnsignedByteType :
  public ListUnsignedByteType
{
public:
  ArrayUnsignedByteType();
  ArrayUnsignedByteType(
    XmlUnsignedByte * aXmlUnsignedByte);
  ArrayUnsignedByteType(
    NaturalType * countIn,
    XmlUnsignedByte * aXmlUnsignedByte);
  ~ArrayUnsignedByteType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getcount();
  void setcount(NaturalType * countIn);

protected:
  NaturalType * count;
};

/* ***************************************************************** */

class D2Type :
  public ListDoubleType
{
public:
  D2Type();
  D2Type(
    XmlDouble * aXmlDouble);
  D2Type(
    const char * valueString);
  ~D2Type();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool D2TypeCheck();
};

/* ***************************************************************** */

class D3Type :
  public ListDoubleType
{
public:
  D3Type();
  D3Type(
    XmlDouble * aXmlDouble);
  D3Type(
    const char * valueString);
  ~D3Type();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool D3TypeCheck();
};

/* ***************************************************************** */

class D4Type :
  public ListDoubleType
{
public:
  D4Type();
  D4Type(
    XmlDouble * aXmlDouble);
  D4Type(
    const char * valueString);
  ~D4Type();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool D4TypeCheck();
};

/* ***************************************************************** */

class I2Type :
  public ListIntType
{
public:
  I2Type();
  I2Type(
    XmlInteger * aXmlInteger);
  I2Type(
    const char * valueString);
  ~I2Type();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool I2TypeCheck();
};

/* ***************************************************************** */

class I3Type :
  public ListIntType
{
public:
  I3Type();
  I3Type(
    XmlInteger * aXmlInteger);
  I3Type(
    const char * valueString);
  ~I3Type();
  void printName(FILE * outFile);
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  bool I3TypeCheck();
};

/* ***************************************************************** */

class ListQIFReferenceFullType :
  public ListQIFReferenceType
{
public:
  ListQIFReferenceFullType();
  ListQIFReferenceFullType(
    ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn);
  ListQIFReferenceFullType(
    NaturalType * nIn,
    ListQIFReferenceTypeChoicePair * ListQIFReferenceTypePairIn,
    QIFReferenceSimpleType * asmPathIdIn,
    QIFReferenceSimpleType * asmPathXIdIn);
  ~ListQIFReferenceFullType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceSimpleType * getasmPathId();
  void setasmPathId(QIFReferenceSimpleType * asmPathIdIn);
  QIFReferenceSimpleType * getasmPathXId();
  void setasmPathXId(QIFReferenceSimpleType * asmPathXIdIn);

protected:
  QIFReferenceSimpleType * asmPathId;
  QIFReferenceSimpleType * asmPathXId;
};

/* ***************************************************************** */

class PolyLineType :
  public ArrayPointType
{
public:
  PolyLineType();
  PolyLineType(
    XmlDouble * aXmlDouble);
  PolyLineType(
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
    XmlDouble * aXmlDouble);
  ~PolyLineType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class QIFReferenceActiveType :
  public QIFReferenceType
{
public:
  QIFReferenceActiveType();
  QIFReferenceActiveType(
    const char * valStringIn);
  QIFReferenceActiveType(
    XmlBoolean * activeIn,
    QIFReferenceSimpleType * xIdIn,
    const char * valStringIn);
  ~QIFReferenceActiveType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool QIFReferenceActiveTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getactive();
  void setactive(XmlBoolean * activeIn);

protected:
  XmlBoolean * active;
};

/* ***************************************************************** */

class QIFReferenceActiveTypeLisd :
  public std::list<QIFReferenceActiveType *>,
  public XmlSchemaInstanceBase
{
public:
  QIFReferenceActiveTypeLisd();
  QIFReferenceActiveTypeLisd(
    QIFReferenceActiveType * aQIFReferenceActiveType);
  ~QIFReferenceActiveTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QIFReferenceFullType :
  public QIFReferenceType
{
public:
  QIFReferenceFullType();
  QIFReferenceFullType(
    const char * valStringIn);
  QIFReferenceFullType(
    QIFReferenceSimpleType * asmPathIdIn,
    QIFReferenceSimpleType * asmPathXIdIn,
    QIFReferenceSimpleType * xIdIn,
    const char * valStringIn);
  ~QIFReferenceFullType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool QIFReferenceFullTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceSimpleType * getasmPathId();
  void setasmPathId(QIFReferenceSimpleType * asmPathIdIn);
  QIFReferenceSimpleType * getasmPathXId();
  void setasmPathXId(QIFReferenceSimpleType * asmPathXIdIn);

protected:
  QIFReferenceSimpleType * asmPathId;
  QIFReferenceSimpleType * asmPathXId;
};

/* ***************************************************************** */

class QIFReferenceFullTypeLisd :
  public std::list<QIFReferenceFullType *>,
  public XmlSchemaInstanceBase
{
public:
  QIFReferenceFullTypeLisd();
  QIFReferenceFullTypeLisd(
    QIFReferenceFullType * aQIFReferenceFullType);
  ~QIFReferenceFullTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AngleRangeType :
  public D2Type
{
public:
  AngleRangeType();
  AngleRangeType(
    XmlDouble * aXmlDouble);
  AngleRangeType(
    XmlToken * angularUnitIn,
    XmlDouble * aXmlDouble);
  ~AngleRangeType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool AngleRangeTypeCheck();
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getangularUnit();
  void setangularUnit(XmlToken * angularUnitIn);

protected:
  XmlToken * angularUnit;
};

/* ***************************************************************** */

#endif // PRIMITIVES_HH
