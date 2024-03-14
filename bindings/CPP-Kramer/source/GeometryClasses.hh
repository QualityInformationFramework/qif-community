/* ***************************************************************** */

#ifndef GEOMETRY_HH
#define GEOMETRY_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPDClasses.hh"

/* ***************************************************************** */

class Aggregate12CoreType;
class Aggregate12Type;
class Aggregate13CoreType;
class Aggregate13Type;
class ArcCircular12CoreType;
class ArcCircular12Type;
class ArcCircular13CoreType;
class ArcCircular13Type;
class ArcConic12CoreType;
class ArcConic12Type;
class ArcConic13CoreType;
class ArcConic13Type;
class ArcConicFormEnumType;
class ArraySubCurve12Type;
class ArraySubCurve13Type;
class ArrayTriangleVertexNormalType;
class Attr23CoreEnumType;
class Cone23CoreType;
class Cone23Type;
class Curve12BaseType;
class Curve12BaseTypeLisd;
class Curve12OrientedType;
class Curve12OrientedTypeLisd;
class Curve12SetType;
class Curve13BaseType;
class Curve13BaseTypeLisd;
class Curve13CoreType;
class Curve13CoreTypeLisd;
class Curve13OrientedType;
class Curve13OrientedTypeLisd;
class Curve13SetType;
class CurveCoreBaseType;
class CurveMeshSetType;
class Cylinder23CoreType;
class Cylinder23Type;
class Extrude23CoreType;
class Extrude23Type;
class GeometryBaseType;
class GeometrySetType;
class MeshTriangleCoreType;
class MeshTriangleType;
class MeshTriangleTypeLisd;
class Nurbs12CoreType;
class Nurbs12Type;
class Nurbs13CoreType;
class Nurbs13Type;
class Nurbs23CoreType;
class Nurbs23Type;
class Offset23CoreType;
class Offset23Type;
class PathTriangulationCoreType;
class PathTriangulationCoreTypeChoicePair;
class PathTriangulationType;
class PathTriangulationTypeLisd;
class Plane23CoreType;
class Plane23Type;
class PointEntityType;
class PointEntityTypeLisd;
class PointSetType;
class Polyline12CoreType;
class Polyline12CoreTypeChoicePair;
class Polyline12Type;
class Polyline13CoreType;
class Polyline13CoreTypeChoicePair;
class Polyline13Type;
class Revolution23CoreType;
class Revolution23Type;
class Ruled23CoreType;
class Ruled23Type;
class Segment12CoreType;
class Segment12Type;
class Segment13CoreType;
class Segment13Type;
class Sphere23CoreType;
class Sphere23Type;
class Spline12CoreType;
class Spline12Type;
class Spline13CoreType;
class Spline13Type;
class Spline23CoreType;
class Spline23Type;
class SurfaceBaseType;
class SurfaceBaseTypeLisd;
class SurfaceCoreBaseType;
class SurfaceCoreType;
class SurfaceMeshSetType;
class SurfaceSetType;
class Torus23CoreType;
class Torus23Type;
class TriangleVertexNormalType;
class TriangleVertexNormalTypeLisd;
class MeshTriangleCor_1172_Type;
class MeshTriangleCor_1172_TypeChoicePair;
class MeshTriangleCor_1173_Type;
class MeshTriangleCor_1173_TypeChoicePair;
class MeshTriangleCor_1174_Type;
class MeshTriangleCor_1174_TypeChoicePair;
class MeshTriangleCor_1175_Type;
class MeshTriangleCor_1175_TypeChoicePair;
class MeshTriangleTyp_1176_Type;
class MeshTriangleTyp_1176_TypeChoicePair;
class Nurbs12CoreType_1177_Type;
class Nurbs12CoreType_1177_TypeChoicePair;
class Nurbs13CoreType_1178_Type;
class Nurbs13CoreType_1178_TypeChoicePair;
class Nurbs23CoreType_1179_Type;
class Nurbs23CoreType_1179_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class ArcConicFormEnumType :
  public XmlString
{
public:
  ArcConicFormEnumType();
  ArcConicFormEnumType(
    const char * valIn);
  ~ArcConicFormEnumType();
  bool ArcConicFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ArraySubCurve12Type :
  public XmlTypeBase
{
public:
  ArraySubCurve12Type();
  ArraySubCurve12Type(
    Curve12OrientedTypeLisd * SubCurveIn);
  ArraySubCurve12Type(
    NaturalType * nIn,
    Curve12OrientedTypeLisd * SubCurveIn);
  ~ArraySubCurve12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  Curve12OrientedTypeLisd * getSubCurve();
  void setSubCurve(Curve12OrientedTypeLisd *);

protected:
  NaturalType * n;
  Curve12OrientedTypeLisd * SubCurve;
};

/* ***************************************************************** */

class ArraySubCurve13Type :
  public XmlTypeBase
{
public:
  ArraySubCurve13Type();
  ArraySubCurve13Type(
    Curve13OrientedTypeLisd * SubCurveIn);
  ArraySubCurve13Type(
    NaturalType * nIn,
    Curve13OrientedTypeLisd * SubCurveIn);
  ~ArraySubCurve13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  Curve13OrientedTypeLisd * getSubCurve();
  void setSubCurve(Curve13OrientedTypeLisd *);

protected:
  NaturalType * n;
  Curve13OrientedTypeLisd * SubCurve;
};

/* ***************************************************************** */

class ArrayTriangleVertexNormalType :
  public XmlTypeBase
{
public:
  ArrayTriangleVertexNormalType();
  ArrayTriangleVertexNormalType(
    TriangleVertexNormalTypeLisd * NormalSpecialIn);
  ArrayTriangleVertexNormalType(
    NaturalType * nIn,
    TriangleVertexNormalTypeLisd * NormalSpecialIn);
  ~ArrayTriangleVertexNormalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  TriangleVertexNormalTypeLisd * getNormalSpecial();
  void setNormalSpecial(TriangleVertexNormalTypeLisd *);

protected:
  NaturalType * n;
  TriangleVertexNormalTypeLisd * NormalSpecial;
};

/* ***************************************************************** */

class Attr23CoreEnumType :
  public XmlString
{
public:
  Attr23CoreEnumType();
  Attr23CoreEnumType(
    const char * valIn);
  ~Attr23CoreEnumType();
  bool Attr23CoreEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class Curve12OrientedType :
  public XmlTypeBase
{
public:
  Curve12OrientedType();
  Curve12OrientedType(
    CurveCoreBaseType * Curve12CoreIn);
  Curve12OrientedType(
    XmlBoolean * turnedIn,
    CurveCoreBaseType * Curve12CoreIn);
  ~Curve12OrientedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getturned();
  void setturned(XmlBoolean * turnedIn);

  CurveCoreBaseType * getCurve12Core();
  void setCurve12Core(CurveCoreBaseType * Curve12CoreIn);

protected:
  XmlBoolean * turned;
  CurveCoreBaseType * Curve12Core;
};

/* ***************************************************************** */

class Curve12OrientedTypeLisd :
  public std::list<Curve12OrientedType *>,
  public XmlSchemaInstanceBase
{
public:
  Curve12OrientedTypeLisd();
  Curve12OrientedTypeLisd(
    Curve12OrientedType * aCurve12OrientedType);
  ~Curve12OrientedTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Curve12SetType :
  public XmlTypeBase
{
public:
  Curve12SetType();
  Curve12SetType(
    Curve12BaseTypeLisd * Curve12In);
  Curve12SetType(
    NaturalType * nIn,
    Curve12BaseTypeLisd * Curve12In);
  ~Curve12SetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  Curve12BaseTypeLisd * getCurve12();
  void setCurve12(Curve12BaseTypeLisd *);

protected:
  NaturalType * n;
  Curve12BaseTypeLisd * Curve12;
};

/* ***************************************************************** */

class Curve13CoreType :
  public XmlTypeBase
{
public:
  Curve13CoreType();
  Curve13CoreType(
    CurveCoreBaseType * Curve13CoreIn);
  ~Curve13CoreType();
  void printSelf(FILE * outFile);

  CurveCoreBaseType * getCurve13Core();
  void setCurve13Core(CurveCoreBaseType * Curve13CoreIn);

protected:
  CurveCoreBaseType * Curve13Core;
};

/* ***************************************************************** */

class Curve13CoreTypeLisd :
  public std::list<Curve13CoreType *>,
  public XmlSchemaInstanceBase
{
public:
  Curve13CoreTypeLisd();
  Curve13CoreTypeLisd(
    Curve13CoreType * aCurve13CoreType);
  ~Curve13CoreTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Curve13OrientedType :
  public XmlTypeBase
{
public:
  Curve13OrientedType();
  Curve13OrientedType(
    CurveCoreBaseType * Curve13CoreIn);
  Curve13OrientedType(
    XmlBoolean * turnedIn,
    CurveCoreBaseType * Curve13CoreIn);
  ~Curve13OrientedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getturned();
  void setturned(XmlBoolean * turnedIn);

  CurveCoreBaseType * getCurve13Core();
  void setCurve13Core(CurveCoreBaseType * Curve13CoreIn);

protected:
  XmlBoolean * turned;
  CurveCoreBaseType * Curve13Core;
};

/* ***************************************************************** */

class Curve13OrientedTypeLisd :
  public std::list<Curve13OrientedType *>,
  public XmlSchemaInstanceBase
{
public:
  Curve13OrientedTypeLisd();
  Curve13OrientedTypeLisd(
    Curve13OrientedType * aCurve13OrientedType);
  ~Curve13OrientedTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Curve13SetType :
  public XmlTypeBase
{
public:
  Curve13SetType();
  Curve13SetType(
    Curve13BaseTypeLisd * Curve13In);
  Curve13SetType(
    NaturalType * nIn,
    Curve13BaseTypeLisd * Curve13In);
  ~Curve13SetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  Curve13BaseTypeLisd * getCurve13();
  void setCurve13(Curve13BaseTypeLisd *);

protected:
  NaturalType * n;
  Curve13BaseTypeLisd * Curve13;
};

/* ***************************************************************** */

class CurveCoreBaseType :
  public XmlTypeBase
{
public:
  CurveCoreBaseType();
  CurveCoreBaseType(
    ParameterRangeType * domainIn);
  ~CurveCoreBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ParameterRangeType * getdomain();
  void setdomain(ParameterRangeType * domainIn);

protected:
  ParameterRangeType * domain;
};

/* ***************************************************************** */

class CurveMeshSetType :
  public XmlTypeBase
{
public:
  CurveMeshSetType();
  CurveMeshSetType(
    PathTriangulationTypeLisd * PathTriangulationIn);
  CurveMeshSetType(
    NaturalType * nIn,
    PathTriangulationTypeLisd * PathTriangulationIn);
  ~CurveMeshSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PathTriangulationTypeLisd * getPathTriangulation();
  void setPathTriangulation(PathTriangulationTypeLisd *);

protected:
  NaturalType * n;
  PathTriangulationTypeLisd * PathTriangulation;
};

/* ***************************************************************** */

class GeometryBaseType :
  public NodeWithIdBaseType
{
public:
  GeometryBaseType();
  GeometryBaseType(
    AttributesType * AttributesIn);
  GeometryBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~GeometryBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class GeometrySetType :
  public XmlTypeBase
{
public:
  GeometrySetType();
  GeometrySetType(
    PointSetType * PointSetIn,
    Curve12SetType * Curve12SetIn,
    Curve13SetType * Curve13SetIn,
    SurfaceSetType * SurfaceSetIn,
    CurveMeshSetType * CurveMeshSetIn,
    SurfaceMeshSetType * SurfaceMeshSetIn);
  ~GeometrySetType();
  void printSelf(FILE * outFile);

  PointSetType * getPointSet();
  void setPointSet(PointSetType * PointSetIn);
  Curve12SetType * getCurve12Set();
  void setCurve12Set(Curve12SetType * Curve12SetIn);
  Curve13SetType * getCurve13Set();
  void setCurve13Set(Curve13SetType * Curve13SetIn);
  SurfaceSetType * getSurfaceSet();
  void setSurfaceSet(SurfaceSetType * SurfaceSetIn);
  CurveMeshSetType * getCurveMeshSet();
  void setCurveMeshSet(CurveMeshSetType * CurveMeshSetIn);
  SurfaceMeshSetType * getSurfaceMeshSet();
  void setSurfaceMeshSet(SurfaceMeshSetType * SurfaceMeshSetIn);

protected:
  PointSetType * PointSet;
  Curve12SetType * Curve12Set;
  Curve13SetType * Curve13Set;
  SurfaceSetType * SurfaceSet;
  CurveMeshSetType * CurveMeshSet;
  SurfaceMeshSetType * SurfaceMeshSet;
};

/* ***************************************************************** */

class MeshTriangleCoreType :
  public XmlTypeBase
{
public:
  MeshTriangleCoreType();
  MeshTriangleCoreType(
    MeshTriangleCor_1172_Type * MeshTriangleCor_1172In,
    MeshTriangleCor_1173_Type * MeshTriangleCor_1173In,
    MeshTriangleCor_1174_Type * MeshTriangleCor_1174In,
    MeshTriangleCor_1175_Type * MeshTriangleCor_1175In);
  ~MeshTriangleCoreType();
  void printSelf(FILE * outFile);

  MeshTriangleCor_1172_Type * getMeshTriangleCor_1172();
  void setMeshTriangleCor_1172(MeshTriangleCor_1172_Type * MeshTriangleCor_1172In);
  MeshTriangleCor_1173_Type * getMeshTriangleCor_1173();
  void setMeshTriangleCor_1173(MeshTriangleCor_1173_Type * MeshTriangleCor_1173In);
  MeshTriangleCor_1174_Type * getMeshTriangleCor_1174();
  void setMeshTriangleCor_1174(MeshTriangleCor_1174_Type * MeshTriangleCor_1174In);
  MeshTriangleCor_1175_Type * getMeshTriangleCor_1175();
  void setMeshTriangleCor_1175(MeshTriangleCor_1175_Type * MeshTriangleCor_1175In);

protected:
  MeshTriangleCor_1172_Type * MeshTriangleCor_1172;
  MeshTriangleCor_1173_Type * MeshTriangleCor_1173;
  MeshTriangleCor_1174_Type * MeshTriangleCor_1174;
  MeshTriangleCor_1175_Type * MeshTriangleCor_1175;
};

/* ***************************************************************** */

class MeshTriangleType :
  public GeometryBaseType
{
public:
  MeshTriangleType();
  MeshTriangleType(
    AttributesType * AttributesIn,
    MeshTriangleCoreType * MeshTriangleCoreIn,
    MeshTriangleTyp_1176_Type * MeshTriangleTyp_1176In);
  MeshTriangleType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    MeshTriangleCoreType * MeshTriangleCoreIn,
    MeshTriangleTyp_1176_Type * MeshTriangleTyp_1176In);
  ~MeshTriangleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeshTriangleCoreType * getMeshTriangleCore();
  void setMeshTriangleCore(MeshTriangleCoreType * MeshTriangleCoreIn);
  MeshTriangleTyp_1176_Type * getMeshTriangleTyp_1176();
  void setMeshTriangleTyp_1176(MeshTriangleTyp_1176_Type * MeshTriangleTyp_1176In);

protected:
  MeshTriangleCoreType * MeshTriangleCore;
  MeshTriangleTyp_1176_Type * MeshTriangleTyp_1176;
};

/* ***************************************************************** */

class MeshTriangleTypeLisd :
  public std::list<MeshTriangleType *>,
  public XmlSchemaInstanceBase
{
public:
  MeshTriangleTypeLisd();
  MeshTriangleTypeLisd(
    MeshTriangleType * aMeshTriangleType);
  ~MeshTriangleTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Nurbs12CoreType :
  public CurveCoreBaseType
{
public:
  Nurbs12CoreType();
  Nurbs12CoreType(
    NaturalType * OrderIn,
    ArrayDoubleType * KnotsIn,
    Nurbs12CoreType_1177_Type * Nurbs12CoreType_1177In,
    ArrayDoubleType * WeightsIn);
  Nurbs12CoreType(
    ParameterRangeType * domainIn,
    NaturalType * OrderIn,
    ArrayDoubleType * KnotsIn,
    Nurbs12CoreType_1177_Type * Nurbs12CoreType_1177In,
    ArrayDoubleType * WeightsIn);
  ~Nurbs12CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getOrder();
  void setOrder(NaturalType * OrderIn);
  ArrayDoubleType * getKnots();
  void setKnots(ArrayDoubleType * KnotsIn);
  Nurbs12CoreType_1177_Type * getNurbs12CoreType_1177();
  void setNurbs12CoreType_1177(Nurbs12CoreType_1177_Type * Nurbs12CoreType_1177In);
  ArrayDoubleType * getWeights();
  void setWeights(ArrayDoubleType * WeightsIn);

protected:
  NaturalType * Order;
  ArrayDoubleType * Knots;
  Nurbs12CoreType_1177_Type * Nurbs12CoreType_1177;
  ArrayDoubleType * Weights;
};

/* ***************************************************************** */

class Nurbs13CoreType :
  public CurveCoreBaseType
{
public:
  Nurbs13CoreType();
  Nurbs13CoreType(
    NaturalType * OrderIn,
    ArrayDoubleType * KnotsIn,
    Nurbs13CoreType_1178_Type * Nurbs13CoreType_1178In,
    ArrayDoubleType * WeightsIn);
  Nurbs13CoreType(
    ParameterRangeType * domainIn,
    NaturalType * OrderIn,
    ArrayDoubleType * KnotsIn,
    Nurbs13CoreType_1178_Type * Nurbs13CoreType_1178In,
    ArrayDoubleType * WeightsIn);
  ~Nurbs13CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getOrder();
  void setOrder(NaturalType * OrderIn);
  ArrayDoubleType * getKnots();
  void setKnots(ArrayDoubleType * KnotsIn);
  Nurbs13CoreType_1178_Type * getNurbs13CoreType_1178();
  void setNurbs13CoreType_1178(Nurbs13CoreType_1178_Type * Nurbs13CoreType_1178In);
  ArrayDoubleType * getWeights();
  void setWeights(ArrayDoubleType * WeightsIn);

protected:
  NaturalType * Order;
  ArrayDoubleType * Knots;
  Nurbs13CoreType_1178_Type * Nurbs13CoreType_1178;
  ArrayDoubleType * Weights;
};

/* ***************************************************************** */

class PathTriangulationCoreType :
  public XmlTypeBase
{
public:
  PathTriangulationCoreType();
  PathTriangulationCoreType(
    PathTriangulationCoreTypeChoicePair * PathTriangulationCoreTypePairIn);
  ~PathTriangulationCoreType();
  void printSelf(FILE * outFile);

  PathTriangulationCoreTypeChoicePair * getPathTriangulationCoreTypePair();
  void setPathTriangulationCoreTypePair(PathTriangulationCoreTypeChoicePair * PathTriangulationCoreTypePairIn);

protected:
  PathTriangulationCoreTypeChoicePair * PathTriangulationCoreTypePair;
};

/* ***************************************************************** */

union PathTriangulationCoreTypeVal
{
  ArrayI2Type * Edges;
  ArrayBinaryType * EdgesBinary;
};

/* ***************************************************************** */

class PathTriangulationCoreTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    EdgesE,
    EdgesBinaryE };
  PathTriangulationCoreTypeChoicePair();
  PathTriangulationCoreTypeChoicePair(
    whichOne PathTriangulationCoreTypeTypeIn,
    PathTriangulationCoreTypeVal PathTriangulationCoreTypeValueIn);
  ~PathTriangulationCoreTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PathTriangulationCoreTypeType;
  PathTriangulationCoreTypeVal PathTriangulationCoreTypeValue;
};

/* ***************************************************************** */

class PathTriangulationType :
  public GeometryBaseType
{
public:
  PathTriangulationType();
  PathTriangulationType(
    AttributesType * AttributesIn,
    PathTriangulationCoreType * PathTriangulationCoreIn,
    ElementReferenceType * MeshTriangleIn);
  PathTriangulationType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    PathTriangulationCoreType * PathTriangulationCoreIn,
    ElementReferenceType * MeshTriangleIn);
  ~PathTriangulationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PathTriangulationCoreType * getPathTriangulationCore();
  void setPathTriangulationCore(PathTriangulationCoreType * PathTriangulationCoreIn);
  ElementReferenceType * getMeshTriangle();
  void setMeshTriangle(ElementReferenceType * MeshTriangleIn);

protected:
  PathTriangulationCoreType * PathTriangulationCore;
  ElementReferenceType * MeshTriangle;
};

/* ***************************************************************** */

class PathTriangulationTypeLisd :
  public std::list<PathTriangulationType *>,
  public XmlSchemaInstanceBase
{
public:
  PathTriangulationTypeLisd();
  PathTriangulationTypeLisd(
    PathTriangulationType * aPathTriangulationType);
  ~PathTriangulationTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointEntityType :
  public GeometryBaseType
{
public:
  PointEntityType();
  PointEntityType(
    AttributesType * AttributesIn,
    PointSimpleType * XYZIn);
  PointEntityType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    PointSimpleType * XYZIn);
  ~PointEntityType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointSimpleType * getXYZ();
  void setXYZ(PointSimpleType * XYZIn);

protected:
  PointSimpleType * XYZ;
};

/* ***************************************************************** */

class PointEntityTypeLisd :
  public std::list<PointEntityType *>,
  public XmlSchemaInstanceBase
{
public:
  PointEntityTypeLisd();
  PointEntityTypeLisd(
    PointEntityType * aPointEntityType);
  ~PointEntityTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointSetType :
  public XmlTypeBase
{
public:
  PointSetType();
  PointSetType(
    PointEntityTypeLisd * PointIn);
  PointSetType(
    NaturalType * nIn,
    PointEntityTypeLisd * PointIn);
  ~PointSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PointEntityTypeLisd * getPoint();
  void setPoint(PointEntityTypeLisd *);

protected:
  NaturalType * n;
  PointEntityTypeLisd * Point;
};

/* ***************************************************************** */

class Polyline12CoreType :
  public CurveCoreBaseType
{
public:
  Polyline12CoreType();
  Polyline12CoreType(
    Polyline12CoreTypeChoicePair * Polyline12CoreTypePairIn);
  Polyline12CoreType(
    ParameterRangeType * domainIn,
    Polyline12CoreTypeChoicePair * Polyline12CoreTypePairIn);
  ~Polyline12CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  Polyline12CoreTypeChoicePair * getPolyline12CoreTypeChoicePair();
  void setPolyline12CoreTypeChoicePair(Polyline12CoreTypeChoicePair * Polyline12CoreTypePairIn);

protected:
  Polyline12CoreTypeChoicePair * Polyline12CoreTypePair;
};

/* ***************************************************************** */

union Polyline12CoreTypeVal
{
  ArrayPoint2dType * Points;
  ArrayBinaryType * PointsBinary;
};

/* ***************************************************************** */

class Polyline12CoreTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsE,
    PointsBinaryE };
  Polyline12CoreTypeChoicePair();
  Polyline12CoreTypeChoicePair(
    whichOne Polyline12CoreTypeTypeIn,
    Polyline12CoreTypeVal Polyline12CoreTypeValueIn);
  ~Polyline12CoreTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Polyline12CoreTypeType;
  Polyline12CoreTypeVal Polyline12CoreTypeValue;
};

/* ***************************************************************** */

class Polyline13CoreType :
  public CurveCoreBaseType
{
public:
  Polyline13CoreType();
  Polyline13CoreType(
    Polyline13CoreTypeChoicePair * Polyline13CoreTypePairIn);
  Polyline13CoreType(
    ParameterRangeType * domainIn,
    Polyline13CoreTypeChoicePair * Polyline13CoreTypePairIn);
  ~Polyline13CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  Polyline13CoreTypeChoicePair * getPolyline13CoreTypeChoicePair();
  void setPolyline13CoreTypeChoicePair(Polyline13CoreTypeChoicePair * Polyline13CoreTypePairIn);

protected:
  Polyline13CoreTypeChoicePair * Polyline13CoreTypePair;
};

/* ***************************************************************** */

union Polyline13CoreTypeVal
{
  ArrayPointType * Points;
  ArrayBinaryType * PointsBinary;
};

/* ***************************************************************** */

class Polyline13CoreTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsE,
    PointsBinaryE };
  Polyline13CoreTypeChoicePair();
  Polyline13CoreTypeChoicePair(
    whichOne Polyline13CoreTypeTypeIn,
    Polyline13CoreTypeVal Polyline13CoreTypeValueIn);
  ~Polyline13CoreTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Polyline13CoreTypeType;
  Polyline13CoreTypeVal Polyline13CoreTypeValue;
};

/* ***************************************************************** */

class Segment12CoreType :
  public CurveCoreBaseType
{
public:
  Segment12CoreType();
  Segment12CoreType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn);
  Segment12CoreType(
    ParameterRangeType * domainIn,
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn);
  ~Segment12CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Point2dSimpleType * getStartPoint();
  void setStartPoint(Point2dSimpleType * StartPointIn);
  Point2dSimpleType * getEndPoint();
  void setEndPoint(Point2dSimpleType * EndPointIn);

protected:
  Point2dSimpleType * StartPoint;
  Point2dSimpleType * EndPoint;
};

/* ***************************************************************** */

class Segment13CoreType :
  public CurveCoreBaseType
{
public:
  Segment13CoreType();
  Segment13CoreType(
    PointSimpleType * StartPointIn,
    PointSimpleType * EndPointIn);
  Segment13CoreType(
    ParameterRangeType * domainIn,
    PointSimpleType * StartPointIn,
    PointSimpleType * EndPointIn);
  ~Segment13CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointSimpleType * getStartPoint();
  void setStartPoint(PointSimpleType * StartPointIn);
  PointSimpleType * getEndPoint();
  void setEndPoint(PointSimpleType * EndPointIn);

protected:
  PointSimpleType * StartPoint;
  PointSimpleType * EndPoint;
};

/* ***************************************************************** */

class Spline12CoreType :
  public CurveCoreBaseType
{
public:
  Spline12CoreType();
  Spline12CoreType(
    ArrayDoubleType * KnotsIn,
    ArrayNaturalType * OrdersIn,
    ArrayPoint2dType * CoefficientsIn);
  Spline12CoreType(
    ParameterRangeType * domainIn,
    XmlBoolean * normalizedIn,
    ArrayDoubleType * KnotsIn,
    ArrayNaturalType * OrdersIn,
    ArrayPoint2dType * CoefficientsIn);
  ~Spline12CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getnormalized();
  void setnormalized(XmlBoolean * normalizedIn);

  ArrayDoubleType * getKnots();
  void setKnots(ArrayDoubleType * KnotsIn);
  ArrayNaturalType * getOrders();
  void setOrders(ArrayNaturalType * OrdersIn);
  ArrayPoint2dType * getCoefficients();
  void setCoefficients(ArrayPoint2dType * CoefficientsIn);

protected:
  XmlBoolean * normalized;
  ArrayDoubleType * Knots;
  ArrayNaturalType * Orders;
  ArrayPoint2dType * Coefficients;
};

/* ***************************************************************** */

class Spline13CoreType :
  public CurveCoreBaseType
{
public:
  Spline13CoreType();
  Spline13CoreType(
    ArrayDoubleType * KnotsIn,
    ArrayNaturalType * OrdersIn,
    ArrayPointType * CoefficientsIn);
  Spline13CoreType(
    ParameterRangeType * domainIn,
    XmlBoolean * normalizedIn,
    ArrayDoubleType * KnotsIn,
    ArrayNaturalType * OrdersIn,
    ArrayPointType * CoefficientsIn);
  ~Spline13CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getnormalized();
  void setnormalized(XmlBoolean * normalizedIn);

  ArrayDoubleType * getKnots();
  void setKnots(ArrayDoubleType * KnotsIn);
  ArrayNaturalType * getOrders();
  void setOrders(ArrayNaturalType * OrdersIn);
  ArrayPointType * getCoefficients();
  void setCoefficients(ArrayPointType * CoefficientsIn);

protected:
  XmlBoolean * normalized;
  ArrayDoubleType * Knots;
  ArrayNaturalType * Orders;
  ArrayPointType * Coefficients;
};

/* ***************************************************************** */

class SurfaceBaseType :
  public GeometryBaseType
{
public:
  SurfaceBaseType();
  SurfaceBaseType(
    AttributesType * AttributesIn);
  SurfaceBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~SurfaceBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SurfaceBaseTypeLisd :
  public std::list<SurfaceBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  SurfaceBaseTypeLisd();
  SurfaceBaseTypeLisd(
    SurfaceBaseType * aSurfaceBaseType);
  ~SurfaceBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SurfaceCoreBaseType :
  public XmlTypeBase
{
public:
  SurfaceCoreBaseType();
  SurfaceCoreBaseType(
    Attr23CoreEnumType * formIn);
  ~SurfaceCoreBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Attr23CoreEnumType * getform();
  void setform(Attr23CoreEnumType * formIn);

protected:
  Attr23CoreEnumType * form;
};

/* ***************************************************************** */

class SurfaceCoreType :
  public XmlTypeBase
{
public:
  SurfaceCoreType();
  SurfaceCoreType(
    SurfaceCoreBaseType * SurfaceCoreIn);
  ~SurfaceCoreType();
  void printSelf(FILE * outFile);

  SurfaceCoreBaseType * getSurfaceCore();
  void setSurfaceCore(SurfaceCoreBaseType * SurfaceCoreIn);

protected:
  SurfaceCoreBaseType * SurfaceCore;
};

/* ***************************************************************** */

class SurfaceMeshSetType :
  public XmlTypeBase
{
public:
  SurfaceMeshSetType();
  SurfaceMeshSetType(
    MeshTriangleTypeLisd * MeshTriangleIn);
  SurfaceMeshSetType(
    NaturalType * nIn,
    MeshTriangleTypeLisd * MeshTriangleIn);
  ~SurfaceMeshSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeshTriangleTypeLisd * getMeshTriangle();
  void setMeshTriangle(MeshTriangleTypeLisd *);

protected:
  NaturalType * n;
  MeshTriangleTypeLisd * MeshTriangle;
};

/* ***************************************************************** */

class SurfaceSetType :
  public XmlTypeBase
{
public:
  SurfaceSetType();
  SurfaceSetType(
    SurfaceBaseTypeLisd * SurfaceIn);
  SurfaceSetType(
    NaturalType * nIn,
    SurfaceBaseTypeLisd * SurfaceIn);
  ~SurfaceSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SurfaceBaseTypeLisd * getSurface();
  void setSurface(SurfaceBaseTypeLisd *);

protected:
  NaturalType * n;
  SurfaceBaseTypeLisd * Surface;
};

/* ***************************************************************** */

class Torus23CoreType :
  public SurfaceCoreBaseType
{
public:
  Torus23CoreType();
  Torus23CoreType(
    XmlDouble * DiameterMinorIn,
    XmlDouble * DiameterMajorIn,
    AxisType * AxisIn,
    LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  Torus23CoreType(
    Attr23CoreEnumType * formIn,
    XmlDouble * offsetVIn,
    DoublePositiveType * scaleUIn,
    DoublePositiveType * scaleVIn,
    XmlBoolean * turnedVIn,
    XmlDouble * DiameterMinorIn,
    XmlDouble * DiameterMajorIn,
    AxisType * AxisIn,
    LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  ~Torus23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDouble * getoffsetV();
  void setoffsetV(XmlDouble * offsetVIn);
  DoublePositiveType * getscaleU();
  void setscaleU(DoublePositiveType * scaleUIn);
  DoublePositiveType * getscaleV();
  void setscaleV(DoublePositiveType * scaleVIn);
  XmlBoolean * getturnedV();
  void setturnedV(XmlBoolean * turnedVIn);

  XmlDouble * getDiameterMinor();
  void setDiameterMinor(XmlDouble * DiameterMinorIn);
  XmlDouble * getDiameterMajor();
  void setDiameterMajor(XmlDouble * DiameterMajorIn);
  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  LatitudeLongitudeSweepType * getLatitudeLongitudeSweep();
  void setLatitudeLongitudeSweep(LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);

protected:
  XmlDouble * offsetV;
  DoublePositiveType * scaleU;
  DoublePositiveType * scaleV;
  XmlBoolean * turnedV;
  XmlDouble * DiameterMinor;
  XmlDouble * DiameterMajor;
  AxisType * Axis;
  LatitudeLongitudeSweepType * LatitudeLongitudeSweep;
};

/* ***************************************************************** */

class Torus23Type :
  public SurfaceBaseType
{
public:
  Torus23Type();
  Torus23Type(
    AttributesType * AttributesIn,
    Torus23CoreType * Torus23CoreIn,
    ElementReferenceType * TransformIn);
  Torus23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Torus23CoreType * Torus23CoreIn,
    ElementReferenceType * TransformIn);
  ~Torus23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Torus23CoreType * getTorus23Core();
  void setTorus23Core(Torus23CoreType * Torus23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Torus23CoreType * Torus23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class TriangleVertexNormalType :
  public UnitVectorType
{
public:
  TriangleVertexNormalType();
  TriangleVertexNormalType(
    XmlDouble * aXmlDouble);
  TriangleVertexNormalType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * linearUnitIn,
    XmlNonNegativeInteger * significantFiguresIn,
    ValidityEnumType * validityIn,
    I2Type * vertexIn,
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
  ~TriangleVertexNormalType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool TriangleVertexNormalTypeCheck();
  bool badAttributes(AttributePairLisd * attributes);

  I2Type * getvertex();
  void setvertex(I2Type * vertexIn);

protected:
  I2Type * vertex;
};

/* ***************************************************************** */

class TriangleVertexNormalTypeLisd :
  public std::list<TriangleVertexNormalType *>,
  public XmlSchemaInstanceBase
{
public:
  TriangleVertexNormalTypeLisd();
  TriangleVertexNormalTypeLisd(
    TriangleVertexNormalType * aTriangleVertexNormalType);
  ~TriangleVertexNormalTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MeshTriangleCor_1172_Type :
  public XmlTypeBase
{
public:
  MeshTriangleCor_1172_Type();
  MeshTriangleCor_1172_Type(
    MeshTriangleCor_1172_TypeChoicePair * MeshTriangleCor_1172_TypePairIn);
  ~MeshTriangleCor_1172_Type();
  void printSelf(FILE * outFile);

  MeshTriangleCor_1172_TypeChoicePair * getMeshTriangleCor_1172_TypePair();
  void setMeshTriangleCor_1172_TypePair(MeshTriangleCor_1172_TypeChoicePair * MeshTriangleCor_1172_TypePairIn);

protected:
  MeshTriangleCor_1172_TypeChoicePair * MeshTriangleCor_1172_TypePair;
};

/* ***************************************************************** */

union MeshTriangleCor_1172_TypeVal
{
  ArrayI3Type * Triangles;
  ArrayBinaryType * TrianglesBinary;
};

/* ***************************************************************** */

class MeshTriangleCor_1172_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TrianglesE,
    TrianglesBinaryE };
  MeshTriangleCor_1172_TypeChoicePair();
  MeshTriangleCor_1172_TypeChoicePair(
    whichOne MeshTriangleCor_1172_TypeTypeIn,
    MeshTriangleCor_1172_TypeVal MeshTriangleCor_1172_TypeValueIn);
  ~MeshTriangleCor_1172_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeshTriangleCor_1172_TypeType;
  MeshTriangleCor_1172_TypeVal MeshTriangleCor_1172_TypeValue;
};

/* ***************************************************************** */

class MeshTriangleCor_1173_Type :
  public XmlTypeBase
{
public:
  MeshTriangleCor_1173_Type();
  MeshTriangleCor_1173_Type(
    MeshTriangleCor_1173_TypeChoicePair * MeshTriangleCor_1173_TypePairIn);
  ~MeshTriangleCor_1173_Type();
  void printSelf(FILE * outFile);

  MeshTriangleCor_1173_TypeChoicePair * getMeshTriangleCor_1173_TypePair();
  void setMeshTriangleCor_1173_TypePair(MeshTriangleCor_1173_TypeChoicePair * MeshTriangleCor_1173_TypePairIn);

protected:
  MeshTriangleCor_1173_TypeChoicePair * MeshTriangleCor_1173_TypePair;
};

/* ***************************************************************** */

union MeshTriangleCor_1173_TypeVal
{
  ArrayI3Type * Neighbours;
  ArrayBinaryType * NeighboursBinary;
};

/* ***************************************************************** */

class MeshTriangleCor_1173_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NeighboursE,
    NeighboursBinaryE };
  MeshTriangleCor_1173_TypeChoicePair();
  MeshTriangleCor_1173_TypeChoicePair(
    whichOne MeshTriangleCor_1173_TypeTypeIn,
    MeshTriangleCor_1173_TypeVal MeshTriangleCor_1173_TypeValueIn);
  ~MeshTriangleCor_1173_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeshTriangleCor_1173_TypeType;
  MeshTriangleCor_1173_TypeVal MeshTriangleCor_1173_TypeValue;
};

/* ***************************************************************** */

class MeshTriangleCor_1174_Type :
  public XmlTypeBase
{
public:
  MeshTriangleCor_1174_Type();
  MeshTriangleCor_1174_Type(
    MeshTriangleCor_1174_TypeChoicePair * MeshTriangleCor_1174_TypePairIn);
  ~MeshTriangleCor_1174_Type();
  void printSelf(FILE * outFile);

  MeshTriangleCor_1174_TypeChoicePair * getMeshTriangleCor_1174_TypePair();
  void setMeshTriangleCor_1174_TypePair(MeshTriangleCor_1174_TypeChoicePair * MeshTriangleCor_1174_TypePairIn);

protected:
  MeshTriangleCor_1174_TypeChoicePair * MeshTriangleCor_1174_TypePair;
};

/* ***************************************************************** */

union MeshTriangleCor_1174_TypeVal
{
  ArrayPointType * Vertices;
  ArrayBinaryType * VerticesBinary;
};

/* ***************************************************************** */

class MeshTriangleCor_1174_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    VerticesE,
    VerticesBinaryE };
  MeshTriangleCor_1174_TypeChoicePair();
  MeshTriangleCor_1174_TypeChoicePair(
    whichOne MeshTriangleCor_1174_TypeTypeIn,
    MeshTriangleCor_1174_TypeVal MeshTriangleCor_1174_TypeValueIn);
  ~MeshTriangleCor_1174_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeshTriangleCor_1174_TypeType;
  MeshTriangleCor_1174_TypeVal MeshTriangleCor_1174_TypeValue;
};

/* ***************************************************************** */

class MeshTriangleCor_1175_Type :
  public XmlTypeBase
{
public:
  MeshTriangleCor_1175_Type();
  MeshTriangleCor_1175_Type(
    MeshTriangleCor_1175_TypeChoicePair * MeshTriangleCor_1175_TypePairIn);
  ~MeshTriangleCor_1175_Type();
  void printSelf(FILE * outFile);

  MeshTriangleCor_1175_TypeChoicePair * getMeshTriangleCor_1175_TypePair();
  void setMeshTriangleCor_1175_TypePair(MeshTriangleCor_1175_TypeChoicePair * MeshTriangleCor_1175_TypePairIn);

protected:
  MeshTriangleCor_1175_TypeChoicePair * MeshTriangleCor_1175_TypePair;
};

/* ***************************************************************** */

union MeshTriangleCor_1175_TypeVal
{
  ArrayUnitVectorType * Normals;
  ArrayBinaryType * NormalsBinary;
};

/* ***************************************************************** */

class MeshTriangleCor_1175_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NormalsE,
    NormalsBinaryE };
  MeshTriangleCor_1175_TypeChoicePair();
  MeshTriangleCor_1175_TypeChoicePair(
    whichOne MeshTriangleCor_1175_TypeTypeIn,
    MeshTriangleCor_1175_TypeVal MeshTriangleCor_1175_TypeValueIn);
  ~MeshTriangleCor_1175_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeshTriangleCor_1175_TypeType;
  MeshTriangleCor_1175_TypeVal MeshTriangleCor_1175_TypeValue;
};

/* ***************************************************************** */

class MeshTriangleTyp_1176_Type :
  public XmlTypeBase
{
public:
  MeshTriangleTyp_1176_Type();
  MeshTriangleTyp_1176_Type(
    MeshTriangleTyp_1176_TypeChoicePair * MeshTriangleTyp_1176_TypePairIn);
  ~MeshTriangleTyp_1176_Type();
  void printSelf(FILE * outFile);

  MeshTriangleTyp_1176_TypeChoicePair * getMeshTriangleTyp_1176_TypePair();
  void setMeshTriangleTyp_1176_TypePair(MeshTriangleTyp_1176_TypeChoicePair * MeshTriangleTyp_1176_TypePairIn);

protected:
  MeshTriangleTyp_1176_TypeChoicePair * MeshTriangleTyp_1176_TypePair;
};

/* ***************************************************************** */

union MeshTriangleTyp_1176_TypeVal
{
  ArrayTriangleVertexNormalType * NormalsSpecial;
  ArrayBinaryType * NormalsSpecialBinary;
};

/* ***************************************************************** */

class MeshTriangleTyp_1176_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NormalsSpecialE,
    NormalsSpecialBinaryE };
  MeshTriangleTyp_1176_TypeChoicePair();
  MeshTriangleTyp_1176_TypeChoicePair(
    whichOne MeshTriangleTyp_1176_TypeTypeIn,
    MeshTriangleTyp_1176_TypeVal MeshTriangleTyp_1176_TypeValueIn);
  ~MeshTriangleTyp_1176_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeshTriangleTyp_1176_TypeType;
  MeshTriangleTyp_1176_TypeVal MeshTriangleTyp_1176_TypeValue;
};

/* ***************************************************************** */

class Nurbs12CoreType_1177_Type :
  public XmlTypeBase
{
public:
  Nurbs12CoreType_1177_Type();
  Nurbs12CoreType_1177_Type(
    Nurbs12CoreType_1177_TypeChoicePair * Nurbs12CoreType_1177_TypePairIn);
  ~Nurbs12CoreType_1177_Type();
  void printSelf(FILE * outFile);

  Nurbs12CoreType_1177_TypeChoicePair * getNurbs12CoreType_1177_TypePair();
  void setNurbs12CoreType_1177_TypePair(Nurbs12CoreType_1177_TypeChoicePair * Nurbs12CoreType_1177_TypePairIn);

protected:
  Nurbs12CoreType_1177_TypeChoicePair * Nurbs12CoreType_1177_TypePair;
};

/* ***************************************************************** */

union Nurbs12CoreType_1177_TypeVal
{
  ArrayPoint2dType * CPs;
  ArrayBinaryType * CPsBinary;
};

/* ***************************************************************** */

class Nurbs12CoreType_1177_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CPsE,
    CPsBinaryE };
  Nurbs12CoreType_1177_TypeChoicePair();
  Nurbs12CoreType_1177_TypeChoicePair(
    whichOne Nurbs12CoreType_1177_TypeTypeIn,
    Nurbs12CoreType_1177_TypeVal Nurbs12CoreType_1177_TypeValueIn);
  ~Nurbs12CoreType_1177_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Nurbs12CoreType_1177_TypeType;
  Nurbs12CoreType_1177_TypeVal Nurbs12CoreType_1177_TypeValue;
};

/* ***************************************************************** */

class Nurbs13CoreType_1178_Type :
  public XmlTypeBase
{
public:
  Nurbs13CoreType_1178_Type();
  Nurbs13CoreType_1178_Type(
    Nurbs13CoreType_1178_TypeChoicePair * Nurbs13CoreType_1178_TypePairIn);
  ~Nurbs13CoreType_1178_Type();
  void printSelf(FILE * outFile);

  Nurbs13CoreType_1178_TypeChoicePair * getNurbs13CoreType_1178_TypePair();
  void setNurbs13CoreType_1178_TypePair(Nurbs13CoreType_1178_TypeChoicePair * Nurbs13CoreType_1178_TypePairIn);

protected:
  Nurbs13CoreType_1178_TypeChoicePair * Nurbs13CoreType_1178_TypePair;
};

/* ***************************************************************** */

union Nurbs13CoreType_1178_TypeVal
{
  ArrayPointType * CPs;
  ArrayBinaryType * CPsBinary;
};

/* ***************************************************************** */

class Nurbs13CoreType_1178_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CPsE,
    CPsBinaryE };
  Nurbs13CoreType_1178_TypeChoicePair();
  Nurbs13CoreType_1178_TypeChoicePair(
    whichOne Nurbs13CoreType_1178_TypeTypeIn,
    Nurbs13CoreType_1178_TypeVal Nurbs13CoreType_1178_TypeValueIn);
  ~Nurbs13CoreType_1178_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Nurbs13CoreType_1178_TypeType;
  Nurbs13CoreType_1178_TypeVal Nurbs13CoreType_1178_TypeValue;
};

/* ***************************************************************** */

class Nurbs23CoreType_1179_Type :
  public XmlTypeBase
{
public:
  Nurbs23CoreType_1179_Type();
  Nurbs23CoreType_1179_Type(
    Nurbs23CoreType_1179_TypeChoicePair * Nurbs23CoreType_1179_TypePairIn);
  ~Nurbs23CoreType_1179_Type();
  void printSelf(FILE * outFile);

  Nurbs23CoreType_1179_TypeChoicePair * getNurbs23CoreType_1179_TypePair();
  void setNurbs23CoreType_1179_TypePair(Nurbs23CoreType_1179_TypeChoicePair * Nurbs23CoreType_1179_TypePairIn);

protected:
  Nurbs23CoreType_1179_TypeChoicePair * Nurbs23CoreType_1179_TypePair;
};

/* ***************************************************************** */

union Nurbs23CoreType_1179_TypeVal
{
  ArrayPointType * CPs;
  ArrayBinaryType * CPsBinary;
};

/* ***************************************************************** */

class Nurbs23CoreType_1179_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CPsE,
    CPsBinaryE };
  Nurbs23CoreType_1179_TypeChoicePair();
  Nurbs23CoreType_1179_TypeChoicePair(
    whichOne Nurbs23CoreType_1179_TypeTypeIn,
    Nurbs23CoreType_1179_TypeVal Nurbs23CoreType_1179_TypeValueIn);
  ~Nurbs23CoreType_1179_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Nurbs23CoreType_1179_TypeType;
  Nurbs23CoreType_1179_TypeVal Nurbs23CoreType_1179_TypeValue;
};

/* ***************************************************************** */

class Aggregate12CoreType :
  public CurveCoreBaseType
{
public:
  Aggregate12CoreType();
  Aggregate12CoreType(
    ArraySubCurve12Type * SubCurvesIn);
  Aggregate12CoreType(
    ParameterRangeType * domainIn,
    ArraySubCurve12Type * SubCurvesIn);
  ~Aggregate12CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArraySubCurve12Type * getSubCurves();
  void setSubCurves(ArraySubCurve12Type * SubCurvesIn);

protected:
  ArraySubCurve12Type * SubCurves;
};

/* ***************************************************************** */

class Aggregate13CoreType :
  public CurveCoreBaseType
{
public:
  Aggregate13CoreType();
  Aggregate13CoreType(
    ArraySubCurve13Type * SubCurvesIn);
  Aggregate13CoreType(
    ParameterRangeType * domainIn,
    ArraySubCurve13Type * SubCurvesIn);
  ~Aggregate13CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArraySubCurve13Type * getSubCurves();
  void setSubCurves(ArraySubCurve13Type * SubCurvesIn);

protected:
  ArraySubCurve13Type * SubCurves;
};

/* ***************************************************************** */

class ArcCircular12CoreType :
  public CurveCoreBaseType
{
public:
  ArcCircular12CoreType();
  ArcCircular12CoreType(
    XmlDouble * RadiusIn,
    Point2dSimpleType * CenterIn,
    UnitVector2dSimpleType * DirBegIn);
  ArcCircular12CoreType(
    ParameterRangeType * domainIn,
    XmlBoolean * turnedIn,
    XmlDouble * RadiusIn,
    Point2dSimpleType * CenterIn,
    UnitVector2dSimpleType * DirBegIn);
  ~ArcCircular12CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getturned();
  void setturned(XmlBoolean * turnedIn);

  XmlDouble * getRadius();
  void setRadius(XmlDouble * RadiusIn);
  Point2dSimpleType * getCenter();
  void setCenter(Point2dSimpleType * CenterIn);
  UnitVector2dSimpleType * getDirBeg();
  void setDirBeg(UnitVector2dSimpleType * DirBegIn);

protected:
  XmlBoolean * turned;
  XmlDouble * Radius;
  Point2dSimpleType * Center;
  UnitVector2dSimpleType * DirBeg;
};

/* ***************************************************************** */

class ArcCircular13CoreType :
  public CurveCoreBaseType
{
public:
  ArcCircular13CoreType();
  ArcCircular13CoreType(
    XmlDouble * RadiusIn,
    PointSimpleType * CenterIn,
    UnitVectorSimpleType * DirBegIn,
    UnitVectorSimpleType * NormalIn);
  ArcCircular13CoreType(
    ParameterRangeType * domainIn,
    XmlDouble * RadiusIn,
    PointSimpleType * CenterIn,
    UnitVectorSimpleType * DirBegIn,
    UnitVectorSimpleType * NormalIn);
  ~ArcCircular13CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDouble * getRadius();
  void setRadius(XmlDouble * RadiusIn);
  PointSimpleType * getCenter();
  void setCenter(PointSimpleType * CenterIn);
  UnitVectorSimpleType * getDirBeg();
  void setDirBeg(UnitVectorSimpleType * DirBegIn);
  UnitVectorSimpleType * getNormal();
  void setNormal(UnitVectorSimpleType * NormalIn);

protected:
  XmlDouble * Radius;
  PointSimpleType * Center;
  UnitVectorSimpleType * DirBeg;
  UnitVectorSimpleType * Normal;
};

/* ***************************************************************** */

class ArcConic12CoreType :
  public CurveCoreBaseType
{
public:
  ArcConic12CoreType();
  ArcConic12CoreType(
    XmlDouble * AIn,
    XmlDouble * BIn,
    Point2dSimpleType * CenterIn,
    UnitVector2dSimpleType * DirBegIn);
  ArcConic12CoreType(
    ParameterRangeType * domainIn,
    ArcConicFormEnumType * formIn,
    XmlBoolean * turnedIn,
    XmlDouble * AIn,
    XmlDouble * BIn,
    Point2dSimpleType * CenterIn,
    UnitVector2dSimpleType * DirBegIn);
  ~ArcConic12CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArcConicFormEnumType * getform();
  void setform(ArcConicFormEnumType * formIn);
  XmlBoolean * getturned();
  void setturned(XmlBoolean * turnedIn);

  XmlDouble * getA();
  void setA(XmlDouble * AIn);
  XmlDouble * getB();
  void setB(XmlDouble * BIn);
  Point2dSimpleType * getCenter();
  void setCenter(Point2dSimpleType * CenterIn);
  UnitVector2dSimpleType * getDirBeg();
  void setDirBeg(UnitVector2dSimpleType * DirBegIn);

protected:
  ArcConicFormEnumType * form;
  XmlBoolean * turned;
  XmlDouble * A;
  XmlDouble * B;
  Point2dSimpleType * Center;
  UnitVector2dSimpleType * DirBeg;
};

/* ***************************************************************** */

class ArcConic13CoreType :
  public CurveCoreBaseType
{
public:
  ArcConic13CoreType();
  ArcConic13CoreType(
    XmlDouble * AIn,
    XmlDouble * BIn,
    PointSimpleType * CenterIn,
    UnitVectorSimpleType * DirBegIn,
    UnitVectorSimpleType * NormalIn);
  ArcConic13CoreType(
    ParameterRangeType * domainIn,
    ArcConicFormEnumType * formIn,
    XmlDouble * AIn,
    XmlDouble * BIn,
    PointSimpleType * CenterIn,
    UnitVectorSimpleType * DirBegIn,
    UnitVectorSimpleType * NormalIn);
  ~ArcConic13CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArcConicFormEnumType * getform();
  void setform(ArcConicFormEnumType * formIn);

  XmlDouble * getA();
  void setA(XmlDouble * AIn);
  XmlDouble * getB();
  void setB(XmlDouble * BIn);
  PointSimpleType * getCenter();
  void setCenter(PointSimpleType * CenterIn);
  UnitVectorSimpleType * getDirBeg();
  void setDirBeg(UnitVectorSimpleType * DirBegIn);
  UnitVectorSimpleType * getNormal();
  void setNormal(UnitVectorSimpleType * NormalIn);

protected:
  ArcConicFormEnumType * form;
  XmlDouble * A;
  XmlDouble * B;
  PointSimpleType * Center;
  UnitVectorSimpleType * DirBeg;
  UnitVectorSimpleType * Normal;
};

/* ***************************************************************** */

class Cone23CoreType :
  public SurfaceCoreBaseType
{
public:
  Cone23CoreType();
  Cone23CoreType(
    XmlDouble * DiameterBottomIn,
    XmlDouble * DiameterTopIn,
    XmlDouble * LengthIn,
    AxisType * AxisIn,
    SweepType * SweepIn);
  Cone23CoreType(
    Attr23CoreEnumType * formIn,
    DoublePositiveType * scaleUIn,
    DoublePositiveType * scaleVIn,
    XmlBoolean * turnedVIn,
    XmlDouble * DiameterBottomIn,
    XmlDouble * DiameterTopIn,
    XmlDouble * LengthIn,
    AxisType * AxisIn,
    SweepType * SweepIn);
  ~Cone23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DoublePositiveType * getscaleU();
  void setscaleU(DoublePositiveType * scaleUIn);
  DoublePositiveType * getscaleV();
  void setscaleV(DoublePositiveType * scaleVIn);
  XmlBoolean * getturnedV();
  void setturnedV(XmlBoolean * turnedVIn);

  XmlDouble * getDiameterBottom();
  void setDiameterBottom(XmlDouble * DiameterBottomIn);
  XmlDouble * getDiameterTop();
  void setDiameterTop(XmlDouble * DiameterTopIn);
  XmlDouble * getLength();
  void setLength(XmlDouble * LengthIn);
  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);

protected:
  DoublePositiveType * scaleU;
  DoublePositiveType * scaleV;
  XmlBoolean * turnedV;
  XmlDouble * DiameterBottom;
  XmlDouble * DiameterTop;
  XmlDouble * Length;
  AxisType * Axis;
  SweepType * Sweep;
};

/* ***************************************************************** */

class Cone23Type :
  public SurfaceBaseType
{
public:
  Cone23Type();
  Cone23Type(
    AttributesType * AttributesIn,
    Cone23CoreType * Cone23CoreIn,
    ElementReferenceType * TransformIn);
  Cone23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Cone23CoreType * Cone23CoreIn,
    ElementReferenceType * TransformIn);
  ~Cone23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Cone23CoreType * getCone23Core();
  void setCone23Core(Cone23CoreType * Cone23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Cone23CoreType * Cone23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Curve12BaseType :
  public GeometryBaseType
{
public:
  Curve12BaseType();
  Curve12BaseType(
    AttributesType * AttributesIn);
  Curve12BaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~Curve12BaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class Curve12BaseTypeLisd :
  public std::list<Curve12BaseType *>,
  public XmlSchemaInstanceBase
{
public:
  Curve12BaseTypeLisd();
  Curve12BaseTypeLisd(
    Curve12BaseType * aCurve12BaseType);
  ~Curve12BaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Curve13BaseType :
  public GeometryBaseType
{
public:
  Curve13BaseType();
  Curve13BaseType(
    AttributesType * AttributesIn);
  Curve13BaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~Curve13BaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class Curve13BaseTypeLisd :
  public std::list<Curve13BaseType *>,
  public XmlSchemaInstanceBase
{
public:
  Curve13BaseTypeLisd();
  Curve13BaseTypeLisd(
    Curve13BaseType * aCurve13BaseType);
  ~Curve13BaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Cylinder23CoreType :
  public SurfaceCoreBaseType
{
public:
  Cylinder23CoreType();
  Cylinder23CoreType(
    XmlDouble * DiameterIn,
    XmlDouble * LengthIn,
    AxisType * AxisIn,
    SweepType * SweepIn);
  Cylinder23CoreType(
    Attr23CoreEnumType * formIn,
    DoublePositiveType * scaleUIn,
    DoublePositiveType * scaleVIn,
    XmlBoolean * turnedVIn,
    XmlDouble * DiameterIn,
    XmlDouble * LengthIn,
    AxisType * AxisIn,
    SweepType * SweepIn);
  ~Cylinder23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DoublePositiveType * getscaleU();
  void setscaleU(DoublePositiveType * scaleUIn);
  DoublePositiveType * getscaleV();
  void setscaleV(DoublePositiveType * scaleVIn);
  XmlBoolean * getturnedV();
  void setturnedV(XmlBoolean * turnedVIn);

  XmlDouble * getDiameter();
  void setDiameter(XmlDouble * DiameterIn);
  XmlDouble * getLength();
  void setLength(XmlDouble * LengthIn);
  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);

protected:
  DoublePositiveType * scaleU;
  DoublePositiveType * scaleV;
  XmlBoolean * turnedV;
  XmlDouble * Diameter;
  XmlDouble * Length;
  AxisType * Axis;
  SweepType * Sweep;
};

/* ***************************************************************** */

class Cylinder23Type :
  public SurfaceBaseType
{
public:
  Cylinder23Type();
  Cylinder23Type(
    AttributesType * AttributesIn,
    Cylinder23CoreType * Cylinder23CoreIn,
    ElementReferenceType * TransformIn);
  Cylinder23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Cylinder23CoreType * Cylinder23CoreIn,
    ElementReferenceType * TransformIn);
  ~Cylinder23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Cylinder23CoreType * getCylinder23Core();
  void setCylinder23Core(Cylinder23CoreType * Cylinder23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Cylinder23CoreType * Cylinder23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Extrude23CoreType :
  public SurfaceCoreBaseType
{
public:
  Extrude23CoreType();
  Extrude23CoreType(
    PointSimpleType * TerminationPointIn,
    Curve13CoreType * CurveIn);
  Extrude23CoreType(
    Attr23CoreEnumType * formIn,
    PointSimpleType * TerminationPointIn,
    Curve13CoreType * CurveIn);
  ~Extrude23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointSimpleType * getTerminationPoint();
  void setTerminationPoint(PointSimpleType * TerminationPointIn);
  Curve13CoreType * getCurve();
  void setCurve(Curve13CoreType * CurveIn);

protected:
  PointSimpleType * TerminationPoint;
  Curve13CoreType * Curve;
};

/* ***************************************************************** */

class Extrude23Type :
  public SurfaceBaseType
{
public:
  Extrude23Type();
  Extrude23Type(
    AttributesType * AttributesIn,
    Extrude23CoreType * Extrude23CoreIn,
    ElementReferenceType * TransformIn);
  Extrude23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Extrude23CoreType * Extrude23CoreIn,
    ElementReferenceType * TransformIn);
  ~Extrude23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Extrude23CoreType * getExtrude23Core();
  void setExtrude23Core(Extrude23CoreType * Extrude23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Extrude23CoreType * Extrude23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Nurbs12Type :
  public Curve12BaseType
{
public:
  Nurbs12Type();
  Nurbs12Type(
    AttributesType * AttributesIn,
    Nurbs12CoreType * Nurbs12CoreIn);
  Nurbs12Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Nurbs12CoreType * Nurbs12CoreIn);
  ~Nurbs12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Nurbs12CoreType * getNurbs12Core();
  void setNurbs12Core(Nurbs12CoreType * Nurbs12CoreIn);

protected:
  Nurbs12CoreType * Nurbs12Core;
};

/* ***************************************************************** */

class Nurbs13Type :
  public Curve13BaseType
{
public:
  Nurbs13Type();
  Nurbs13Type(
    AttributesType * AttributesIn,
    Nurbs13CoreType * Nurbs13CoreIn,
    ElementReferenceType * TransformIn);
  Nurbs13Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Nurbs13CoreType * Nurbs13CoreIn,
    ElementReferenceType * TransformIn);
  ~Nurbs13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Nurbs13CoreType * getNurbs13Core();
  void setNurbs13Core(Nurbs13CoreType * Nurbs13CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Nurbs13CoreType * Nurbs13Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Nurbs23CoreType :
  public SurfaceCoreBaseType
{
public:
  Nurbs23CoreType();
  Nurbs23CoreType(
    NaturalType * OrderUIn,
    NaturalType * OrderVIn,
    ArrayDoubleType * KnotsUIn,
    ArrayDoubleType * KnotsVIn,
    Nurbs23CoreType_1179_Type * Nurbs23CoreType_1179In,
    ArrayDoubleType * WeightsIn);
  Nurbs23CoreType(
    Attr23CoreEnumType * formIn,
    NaturalType * OrderUIn,
    NaturalType * OrderVIn,
    ArrayDoubleType * KnotsUIn,
    ArrayDoubleType * KnotsVIn,
    Nurbs23CoreType_1179_Type * Nurbs23CoreType_1179In,
    ArrayDoubleType * WeightsIn);
  ~Nurbs23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getOrderU();
  void setOrderU(NaturalType * OrderUIn);
  NaturalType * getOrderV();
  void setOrderV(NaturalType * OrderVIn);
  ArrayDoubleType * getKnotsU();
  void setKnotsU(ArrayDoubleType * KnotsUIn);
  ArrayDoubleType * getKnotsV();
  void setKnotsV(ArrayDoubleType * KnotsVIn);
  Nurbs23CoreType_1179_Type * getNurbs23CoreType_1179();
  void setNurbs23CoreType_1179(Nurbs23CoreType_1179_Type * Nurbs23CoreType_1179In);
  ArrayDoubleType * getWeights();
  void setWeights(ArrayDoubleType * WeightsIn);

protected:
  NaturalType * OrderU;
  NaturalType * OrderV;
  ArrayDoubleType * KnotsU;
  ArrayDoubleType * KnotsV;
  Nurbs23CoreType_1179_Type * Nurbs23CoreType_1179;
  ArrayDoubleType * Weights;
};

/* ***************************************************************** */

class Nurbs23Type :
  public SurfaceBaseType
{
public:
  Nurbs23Type();
  Nurbs23Type(
    AttributesType * AttributesIn,
    Nurbs23CoreType * Nurbs23CoreIn,
    ElementReferenceType * TransformIn);
  Nurbs23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Nurbs23CoreType * Nurbs23CoreIn,
    ElementReferenceType * TransformIn);
  ~Nurbs23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Nurbs23CoreType * getNurbs23Core();
  void setNurbs23Core(Nurbs23CoreType * Nurbs23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Nurbs23CoreType * Nurbs23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Offset23CoreType :
  public SurfaceCoreBaseType
{
public:
  Offset23CoreType();
  Offset23CoreType(
    XmlDouble * DistanceIn,
    SurfaceCoreType * SurfaceIn);
  Offset23CoreType(
    Attr23CoreEnumType * formIn,
    XmlDouble * DistanceIn,
    SurfaceCoreType * SurfaceIn);
  ~Offset23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDouble * getDistance();
  void setDistance(XmlDouble * DistanceIn);
  SurfaceCoreType * getSurface();
  void setSurface(SurfaceCoreType * SurfaceIn);

protected:
  XmlDouble * Distance;
  SurfaceCoreType * Surface;
};

/* ***************************************************************** */

class Offset23Type :
  public SurfaceBaseType
{
public:
  Offset23Type();
  Offset23Type(
    AttributesType * AttributesIn,
    Offset23CoreType * Offset23CoreIn,
    ElementReferenceType * TransformIn);
  Offset23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Offset23CoreType * Offset23CoreIn,
    ElementReferenceType * TransformIn);
  ~Offset23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Offset23CoreType * getOffset23Core();
  void setOffset23Core(Offset23CoreType * Offset23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Offset23CoreType * Offset23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Plane23CoreType :
  public SurfaceCoreBaseType
{
public:
  Plane23CoreType();
  Plane23CoreType(
    PointSimpleType * OriginIn,
    VectorSimpleType * DirUIn,
    VectorSimpleType * DirVIn);
  Plane23CoreType(
    Attr23CoreEnumType * formIn,
    ParameterRangeType * domainUIn,
    ParameterRangeType * domainVIn,
    PointSimpleType * OriginIn,
    VectorSimpleType * DirUIn,
    VectorSimpleType * DirVIn);
  ~Plane23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ParameterRangeType * getdomainU();
  void setdomainU(ParameterRangeType * domainUIn);
  ParameterRangeType * getdomainV();
  void setdomainV(ParameterRangeType * domainVIn);

  PointSimpleType * getOrigin();
  void setOrigin(PointSimpleType * OriginIn);
  VectorSimpleType * getDirU();
  void setDirU(VectorSimpleType * DirUIn);
  VectorSimpleType * getDirV();
  void setDirV(VectorSimpleType * DirVIn);

protected:
  ParameterRangeType * domainU;
  ParameterRangeType * domainV;
  PointSimpleType * Origin;
  VectorSimpleType * DirU;
  VectorSimpleType * DirV;
};

/* ***************************************************************** */

class Plane23Type :
  public SurfaceBaseType
{
public:
  Plane23Type();
  Plane23Type(
    AttributesType * AttributesIn,
    Plane23CoreType * Plane23CoreIn,
    ElementReferenceType * TransformIn);
  Plane23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Plane23CoreType * Plane23CoreIn,
    ElementReferenceType * TransformIn);
  ~Plane23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Plane23CoreType * getPlane23Core();
  void setPlane23Core(Plane23CoreType * Plane23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Plane23CoreType * Plane23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Polyline12Type :
  public Curve12BaseType
{
public:
  Polyline12Type();
  Polyline12Type(
    AttributesType * AttributesIn,
    Polyline12CoreType * Polyline12CoreIn);
  Polyline12Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Polyline12CoreType * Polyline12CoreIn);
  ~Polyline12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Polyline12CoreType * getPolyline12Core();
  void setPolyline12Core(Polyline12CoreType * Polyline12CoreIn);

protected:
  Polyline12CoreType * Polyline12Core;
};

/* ***************************************************************** */

class Polyline13Type :
  public Curve13BaseType
{
public:
  Polyline13Type();
  Polyline13Type(
    AttributesType * AttributesIn,
    Polyline13CoreType * Polyline13CoreIn,
    ElementReferenceType * TransformIn);
  Polyline13Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Polyline13CoreType * Polyline13CoreIn,
    ElementReferenceType * TransformIn);
  ~Polyline13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Polyline13CoreType * getPolyline13Core();
  void setPolyline13Core(Polyline13CoreType * Polyline13CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Polyline13CoreType * Polyline13Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Revolution23CoreType :
  public SurfaceCoreBaseType
{
public:
  Revolution23CoreType();
  Revolution23CoreType(
    AxisType * AxisIn,
    Curve13CoreType * GeneratrixIn);
  Revolution23CoreType(
    Attr23CoreEnumType * formIn,
    ParameterRangeType * angleIn,
    AxisType * AxisIn,
    Curve13CoreType * GeneratrixIn);
  ~Revolution23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ParameterRangeType * getangle();
  void setangle(ParameterRangeType * angleIn);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  Curve13CoreType * getGeneratrix();
  void setGeneratrix(Curve13CoreType * GeneratrixIn);

protected:
  ParameterRangeType * angle;
  AxisType * Axis;
  Curve13CoreType * Generatrix;
};

/* ***************************************************************** */

class Revolution23Type :
  public SurfaceBaseType
{
public:
  Revolution23Type();
  Revolution23Type(
    AttributesType * AttributesIn,
    Revolution23CoreType * Revolution23CoreIn,
    ElementReferenceType * TransformIn);
  Revolution23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Revolution23CoreType * Revolution23CoreIn,
    ElementReferenceType * TransformIn);
  ~Revolution23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Revolution23CoreType * getRevolution23Core();
  void setRevolution23Core(Revolution23CoreType * Revolution23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Revolution23CoreType * Revolution23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Ruled23CoreType :
  public SurfaceCoreBaseType
{
public:
  Ruled23CoreType();
  Ruled23CoreType(
    Curve13CoreTypeLisd * CurveIn);
  Ruled23CoreType(
    Attr23CoreEnumType * formIn,
    XmlBoolean * turnedSecondCurveIn,
    Curve13CoreTypeLisd * CurveIn);
  ~Ruled23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getturnedSecondCurve();
  void setturnedSecondCurve(XmlBoolean * turnedSecondCurveIn);

  Curve13CoreTypeLisd * getCurve();
  void setCurve(Curve13CoreTypeLisd *);

protected:
  XmlBoolean * turnedSecondCurve;
  Curve13CoreTypeLisd * Curve;
};

/* ***************************************************************** */

class Ruled23Type :
  public SurfaceBaseType
{
public:
  Ruled23Type();
  Ruled23Type(
    AttributesType * AttributesIn,
    Ruled23CoreType * Ruled23CoreIn,
    ElementReferenceType * TransformIn);
  Ruled23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Ruled23CoreType * Ruled23CoreIn,
    ElementReferenceType * TransformIn);
  ~Ruled23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Ruled23CoreType * getRuled23Core();
  void setRuled23Core(Ruled23CoreType * Ruled23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Ruled23CoreType * Ruled23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Segment12Type :
  public Curve12BaseType
{
public:
  Segment12Type();
  Segment12Type(
    AttributesType * AttributesIn,
    Segment12CoreType * Segment12CoreIn);
  Segment12Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Segment12CoreType * Segment12CoreIn);
  ~Segment12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Segment12CoreType * getSegment12Core();
  void setSegment12Core(Segment12CoreType * Segment12CoreIn);

protected:
  Segment12CoreType * Segment12Core;
};

/* ***************************************************************** */

class Segment13Type :
  public Curve13BaseType
{
public:
  Segment13Type();
  Segment13Type(
    AttributesType * AttributesIn,
    Segment13CoreType * Segment13CoreIn,
    ElementReferenceType * TransformIn);
  Segment13Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Segment13CoreType * Segment13CoreIn,
    ElementReferenceType * TransformIn);
  ~Segment13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Segment13CoreType * getSegment13Core();
  void setSegment13Core(Segment13CoreType * Segment13CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Segment13CoreType * Segment13Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Sphere23CoreType :
  public SurfaceCoreBaseType
{
public:
  Sphere23CoreType();
  Sphere23CoreType(
    XmlDouble * DiameterIn,
    PointSimpleType * LocationIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  Sphere23CoreType(
    Attr23CoreEnumType * formIn,
    DoublePositiveType * scaleUIn,
    DoublePositiveType * scaleVIn,
    XmlBoolean * turnedVIn,
    XmlDouble * DiameterIn,
    PointSimpleType * LocationIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  ~Sphere23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DoublePositiveType * getscaleU();
  void setscaleU(DoublePositiveType * scaleUIn);
  DoublePositiveType * getscaleV();
  void setscaleV(DoublePositiveType * scaleVIn);
  XmlBoolean * getturnedV();
  void setturnedV(XmlBoolean * turnedVIn);

  XmlDouble * getDiameter();
  void setDiameter(XmlDouble * DiameterIn);
  PointSimpleType * getLocation();
  void setLocation(PointSimpleType * LocationIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweep();
  void setLatitudeLongitudeSweep(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);

protected:
  DoublePositiveType * scaleU;
  DoublePositiveType * scaleV;
  XmlBoolean * turnedV;
  XmlDouble * Diameter;
  PointSimpleType * Location;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweep;
};

/* ***************************************************************** */

class Sphere23Type :
  public SurfaceBaseType
{
public:
  Sphere23Type();
  Sphere23Type(
    AttributesType * AttributesIn,
    Sphere23CoreType * Sphere23CoreIn,
    ElementReferenceType * TransformIn);
  Sphere23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Sphere23CoreType * Sphere23CoreIn,
    ElementReferenceType * TransformIn);
  ~Sphere23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Sphere23CoreType * getSphere23Core();
  void setSphere23Core(Sphere23CoreType * Sphere23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Sphere23CoreType * Sphere23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Spline12Type :
  public Curve12BaseType
{
public:
  Spline12Type();
  Spline12Type(
    AttributesType * AttributesIn,
    Spline12CoreType * Spline12CoreIn);
  Spline12Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Spline12CoreType * Spline12CoreIn);
  ~Spline12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Spline12CoreType * getSpline12Core();
  void setSpline12Core(Spline12CoreType * Spline12CoreIn);

protected:
  Spline12CoreType * Spline12Core;
};

/* ***************************************************************** */

class Spline13Type :
  public Curve13BaseType
{
public:
  Spline13Type();
  Spline13Type(
    AttributesType * AttributesIn,
    Spline13CoreType * Spline13CoreIn,
    ElementReferenceType * TransformIn);
  Spline13Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Spline13CoreType * Spline13CoreIn,
    ElementReferenceType * TransformIn);
  ~Spline13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Spline13CoreType * getSpline13Core();
  void setSpline13Core(Spline13CoreType * Spline13CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Spline13CoreType * Spline13Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Spline23CoreType :
  public SurfaceCoreBaseType
{
public:
  Spline23CoreType();
  Spline23CoreType(
    ArrayDoubleType * KnotsUIn,
    ArrayDoubleType * KnotsVIn,
    ArrayNaturalType * OrdersUIn,
    ArrayNaturalType * OrdersVIn,
    ArrayPointType * CoefficientsIn);
  Spline23CoreType(
    Attr23CoreEnumType * formIn,
    XmlBoolean * normalizedIn,
    ArrayDoubleType * KnotsUIn,
    ArrayDoubleType * KnotsVIn,
    ArrayNaturalType * OrdersUIn,
    ArrayNaturalType * OrdersVIn,
    ArrayPointType * CoefficientsIn);
  ~Spline23CoreType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getnormalized();
  void setnormalized(XmlBoolean * normalizedIn);

  ArrayDoubleType * getKnotsU();
  void setKnotsU(ArrayDoubleType * KnotsUIn);
  ArrayDoubleType * getKnotsV();
  void setKnotsV(ArrayDoubleType * KnotsVIn);
  ArrayNaturalType * getOrdersU();
  void setOrdersU(ArrayNaturalType * OrdersUIn);
  ArrayNaturalType * getOrdersV();
  void setOrdersV(ArrayNaturalType * OrdersVIn);
  ArrayPointType * getCoefficients();
  void setCoefficients(ArrayPointType * CoefficientsIn);

protected:
  XmlBoolean * normalized;
  ArrayDoubleType * KnotsU;
  ArrayDoubleType * KnotsV;
  ArrayNaturalType * OrdersU;
  ArrayNaturalType * OrdersV;
  ArrayPointType * Coefficients;
};

/* ***************************************************************** */

class Spline23Type :
  public SurfaceBaseType
{
public:
  Spline23Type();
  Spline23Type(
    AttributesType * AttributesIn,
    Spline23CoreType * Spline23CoreIn,
    ElementReferenceType * TransformIn);
  Spline23Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Spline23CoreType * Spline23CoreIn,
    ElementReferenceType * TransformIn);
  ~Spline23Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Spline23CoreType * getSpline23Core();
  void setSpline23Core(Spline23CoreType * Spline23CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Spline23CoreType * Spline23Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class Aggregate12Type :
  public Curve12BaseType
{
public:
  Aggregate12Type();
  Aggregate12Type(
    AttributesType * AttributesIn,
    Aggregate12CoreType * Aggregate12CoreIn);
  Aggregate12Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Aggregate12CoreType * Aggregate12CoreIn);
  ~Aggregate12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Aggregate12CoreType * getAggregate12Core();
  void setAggregate12Core(Aggregate12CoreType * Aggregate12CoreIn);

protected:
  Aggregate12CoreType * Aggregate12Core;
};

/* ***************************************************************** */

class Aggregate13Type :
  public Curve13BaseType
{
public:
  Aggregate13Type();
  Aggregate13Type(
    AttributesType * AttributesIn,
    Aggregate13CoreType * Aggregate13CoreIn,
    ElementReferenceType * TransformIn);
  Aggregate13Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    Aggregate13CoreType * Aggregate13CoreIn,
    ElementReferenceType * TransformIn);
  ~Aggregate13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  Aggregate13CoreType * getAggregate13Core();
  void setAggregate13Core(Aggregate13CoreType * Aggregate13CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  Aggregate13CoreType * Aggregate13Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class ArcCircular12Type :
  public Curve12BaseType
{
public:
  ArcCircular12Type();
  ArcCircular12Type(
    AttributesType * AttributesIn,
    ArcCircular12CoreType * ArcCircular12CoreIn);
  ArcCircular12Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ArcCircular12CoreType * ArcCircular12CoreIn);
  ~ArcCircular12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArcCircular12CoreType * getArcCircular12Core();
  void setArcCircular12Core(ArcCircular12CoreType * ArcCircular12CoreIn);

protected:
  ArcCircular12CoreType * ArcCircular12Core;
};

/* ***************************************************************** */

class ArcCircular13Type :
  public Curve13BaseType
{
public:
  ArcCircular13Type();
  ArcCircular13Type(
    AttributesType * AttributesIn,
    ArcCircular13CoreType * ArcCircular13CoreIn,
    ElementReferenceType * TransformIn);
  ArcCircular13Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ArcCircular13CoreType * ArcCircular13CoreIn,
    ElementReferenceType * TransformIn);
  ~ArcCircular13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArcCircular13CoreType * getArcCircular13Core();
  void setArcCircular13Core(ArcCircular13CoreType * ArcCircular13CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  ArcCircular13CoreType * ArcCircular13Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

class ArcConic12Type :
  public Curve12BaseType
{
public:
  ArcConic12Type();
  ArcConic12Type(
    AttributesType * AttributesIn,
    ArcConic12CoreType * ArcConic12CoreIn);
  ArcConic12Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ArcConic12CoreType * ArcConic12CoreIn);
  ~ArcConic12Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArcConic12CoreType * getArcConic12Core();
  void setArcConic12Core(ArcConic12CoreType * ArcConic12CoreIn);

protected:
  ArcConic12CoreType * ArcConic12Core;
};

/* ***************************************************************** */

class ArcConic13Type :
  public Curve13BaseType
{
public:
  ArcConic13Type();
  ArcConic13Type(
    AttributesType * AttributesIn,
    ArcConic13CoreType * ArcConic13CoreIn,
    ElementReferenceType * TransformIn);
  ArcConic13Type(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ArcConic13CoreType * ArcConic13CoreIn,
    ElementReferenceType * TransformIn);
  ~ArcConic13Type();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArcConic13CoreType * getArcConic13Core();
  void setArcConic13Core(ArcConic13CoreType * ArcConic13CoreIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);

protected:
  ArcConic13CoreType * ArcConic13Core;
  ElementReferenceType * Transform;
};

/* ***************************************************************** */

#endif // GEOMETRY_HH
