/* ***************************************************************** */

#ifndef AUXILIARY_HH
#define AUXILIARY_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPDClasses.hh"

/* ***************************************************************** */

class AuxiliaryBaseType;
class AuxiliaryBaseTypeLisd;
class AuxiliaryPlaneBaseType;
class AuxiliarySetType;
class CADCoordinateSystemType;
class CADCoordinateSystemTypeLisd;
class CoordinateSystemSetType;
class LineAuxiliaryType;
class PlaneReferenceType;
class PointAuxiliaryType;

/* ***************************************************************** */
/* ***************************************************************** */

class AuxiliaryBaseType :
  public DrawableBaseType
{
public:
  AuxiliaryBaseType();
  AuxiliaryBaseType(
    AttributesType * AttributesIn);
  AuxiliaryBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn);
  ~AuxiliaryBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class AuxiliaryBaseTypeLisd :
  public std::list<AuxiliaryBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  AuxiliaryBaseTypeLisd();
  AuxiliaryBaseTypeLisd(
    AuxiliaryBaseType * aAuxiliaryBaseType);
  ~AuxiliaryBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AuxiliaryPlaneBaseType :
  public AuxiliaryBaseType
{
public:
  AuxiliaryPlaneBaseType();
  AuxiliaryPlaneBaseType(
    AttributesType * AttributesIn,
    PlaneType * PlaneIn);
  AuxiliaryPlaneBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    PlaneType * PlaneIn);
  ~AuxiliaryPlaneBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PlaneType * getPlane();
  void setPlane(PlaneType * PlaneIn);

protected:
  PlaneType * Plane;
};

/* ***************************************************************** */

class AuxiliarySetType :
  public XmlTypeBase
{
public:
  AuxiliarySetType();
  AuxiliarySetType(
    AuxiliaryBaseTypeLisd * AuxiliaryIn);
  AuxiliarySetType(
    NaturalType * nIn,
    AuxiliaryBaseTypeLisd * AuxiliaryIn);
  ~AuxiliarySetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AuxiliaryBaseTypeLisd * getAuxiliary();
  void setAuxiliary(AuxiliaryBaseTypeLisd *);

protected:
  NaturalType * n;
  AuxiliaryBaseTypeLisd * Auxiliary;
};

/* ***************************************************************** */

class CADCoordinateSystemType :
  public DrawableBaseType
{
public:
  CADCoordinateSystemType();
  CADCoordinateSystemType(
    AttributesType * AttributesIn,
    CoordinateSystemCoreType * CoordinateSystemCoreIn);
  CADCoordinateSystemType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    CoordinateSystemCoreType * CoordinateSystemCoreIn);
  ~CADCoordinateSystemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CoordinateSystemCoreType * getCoordinateSystemCore();
  void setCoordinateSystemCore(CoordinateSystemCoreType * CoordinateSystemCoreIn);

protected:
  CoordinateSystemCoreType * CoordinateSystemCore;
};

/* ***************************************************************** */

class CADCoordinateSystemTypeLisd :
  public std::list<CADCoordinateSystemType *>,
  public XmlSchemaInstanceBase
{
public:
  CADCoordinateSystemTypeLisd();
  CADCoordinateSystemTypeLisd(
    CADCoordinateSystemType * aCADCoordinateSystemType);
  ~CADCoordinateSystemTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CoordinateSystemSetType :
  public XmlTypeBase
{
public:
  CoordinateSystemSetType();
  CoordinateSystemSetType(
    CADCoordinateSystemTypeLisd * CoordinateSystemIn);
  CoordinateSystemSetType(
    NaturalType * nIn,
    CADCoordinateSystemTypeLisd * CoordinateSystemIn);
  ~CoordinateSystemSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CADCoordinateSystemTypeLisd * getCoordinateSystem();
  void setCoordinateSystem(CADCoordinateSystemTypeLisd *);

protected:
  NaturalType * n;
  CADCoordinateSystemTypeLisd * CoordinateSystem;
};

/* ***************************************************************** */

class LineAuxiliaryType :
  public AuxiliaryBaseType
{
public:
  LineAuxiliaryType();
  LineAuxiliaryType(
    AttributesType * AttributesIn,
    PointSimpleType * StartPointIn,
    PointSimpleType * EndPointIn,
    LineStyleType * LineStyleIn);
  LineAuxiliaryType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    PointSimpleType * StartPointIn,
    PointSimpleType * EndPointIn,
    LineStyleType * LineStyleIn);
  ~LineAuxiliaryType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointSimpleType * getStartPoint();
  void setStartPoint(PointSimpleType * StartPointIn);
  PointSimpleType * getEndPoint();
  void setEndPoint(PointSimpleType * EndPointIn);
  LineStyleType * getLineStyle();
  void setLineStyle(LineStyleType * LineStyleIn);

protected:
  PointSimpleType * StartPoint;
  PointSimpleType * EndPoint;
  LineStyleType * LineStyle;
};

/* ***************************************************************** */

class PlaneReferenceType :
  public AuxiliaryPlaneBaseType
{
public:
  PlaneReferenceType();
  PlaneReferenceType(
    AttributesType * AttributesIn,
    PlaneType * PlaneIn);
  PlaneReferenceType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    PlaneType * PlaneIn);
  ~PlaneReferenceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointAuxiliaryType :
  public AuxiliaryBaseType
{
public:
  PointAuxiliaryType();
  PointAuxiliaryType(
    AttributesType * AttributesIn,
    PointType * XYZIn);
  PointAuxiliaryType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    PointType * XYZIn);
  ~PointAuxiliaryType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getXYZ();
  void setXYZ(PointType * XYZIn);

protected:
  PointType * XYZ;
};

/* ***************************************************************** */

#endif // AUXILIARY_HH
