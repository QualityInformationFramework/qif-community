/* ***************************************************************** */

#ifndef TOPOLOGY_HH
#define TOPOLOGY_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPDClasses.hh"

/* ***************************************************************** */

class BodyFormEnumType;
class BodySetType;
class BodyType;
class BodyTypeLisd;
class CoEdgeMeshType;
class CoEdgeMeshTypeLisd;
class CoEdgeType;
class CoEdgeTypeLisd;
class CoEdgesMeshType;
class CoEdgesType;
class EdgeSetType;
class EdgeType;
class EdgeTypeLisd;
class FaceBaseType;
class FaceBaseTypeLisd;
class FaceMeshType;
class FaceSetType;
class FaceType;
class LoopBaseType;
class LoopBaseTypeLisd;
class LoopFormEnumType;
class LoopMeshType;
class LoopSetType;
class LoopType;
class PointCloudSetType;
class PointCloudType;
class PointCloudTypeLisd;
class ShellFormEnumType;
class ShellSetType;
class ShellType;
class ShellTypeLisd;
class TopologyBaseType;
class TopologySetType;
class ValidationBodyType;
class ValidationEdgeType;
class ValidationFaceType;
class VertexSetType;
class VertexType;
class VertexTypeLisd;
class FaceMeshType_1180_Type;
class FaceMeshType_1180_TypeChoicePair;
class FaceMeshType_1181_Type;
class FaceMeshType_1181_TypeChoicePair;
class FaceMeshType_1182_Type;
class FaceMeshType_1182_TypeChoicePair;
class PointCloudType_1183_Type;
class PointCloudType_1183_TypeChoicePair;
class PointCloudType_1184_Type;
class PointCloudType_1184_TypeChoicePair;
class PointCloudType_1185_Type;
class PointCloudType_1185_TypeChoicePair;
class PointCloudType_1186_Type;
class PointCloudType_1186_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class BodyFormEnumType :
  public XmlNMTOKEN
{
public:
  BodyFormEnumType();
  BodyFormEnumType(
    const char * valIn);
  ~BodyFormEnumType();
  bool BodyFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class BodySetType :
  public XmlTypeBase
{
public:
  BodySetType();
  BodySetType(
    BodyTypeLisd * BodyIn);
  BodySetType(
    NaturalType * nIn,
    BodyTypeLisd * BodyIn);
  ~BodySetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  BodyTypeLisd * getBody();
  void setBody(BodyTypeLisd *);

protected:
  NaturalType * n;
  BodyTypeLisd * Body;
};

/* ***************************************************************** */

class CoEdgeMeshType :
  public XmlTypeBase
{
public:
  CoEdgeMeshType();
  CoEdgeMeshType(
    EdgeOrientedType * EdgeOrientedIn,
    ElementReferenceType * CurveMeshIn);
  ~CoEdgeMeshType();
  void printSelf(FILE * outFile);

  EdgeOrientedType * getEdgeOriented();
  void setEdgeOriented(EdgeOrientedType * EdgeOrientedIn);
  ElementReferenceType * getCurveMesh();
  void setCurveMesh(ElementReferenceType * CurveMeshIn);

protected:
  EdgeOrientedType * EdgeOriented;
  ElementReferenceType * CurveMesh;
};

/* ***************************************************************** */

class CoEdgeMeshTypeLisd :
  public std::list<CoEdgeMeshType *>,
  public XmlSchemaInstanceBase
{
public:
  CoEdgeMeshTypeLisd();
  CoEdgeMeshTypeLisd(
    CoEdgeMeshType * aCoEdgeMeshType);
  ~CoEdgeMeshTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CoEdgeType :
  public XmlTypeBase
{
public:
  CoEdgeType();
  CoEdgeType(
    EdgeOrientedType * EdgeOrientedIn,
    ElementReferenceType * Curve12In);
  ~CoEdgeType();
  void printSelf(FILE * outFile);

  EdgeOrientedType * getEdgeOriented();
  void setEdgeOriented(EdgeOrientedType * EdgeOrientedIn);
  ElementReferenceType * getCurve12();
  void setCurve12(ElementReferenceType * Curve12In);

protected:
  EdgeOrientedType * EdgeOriented;
  ElementReferenceType * Curve12;
};

/* ***************************************************************** */

class CoEdgeTypeLisd :
  public std::list<CoEdgeType *>,
  public XmlSchemaInstanceBase
{
public:
  CoEdgeTypeLisd();
  CoEdgeTypeLisd(
    CoEdgeType * aCoEdgeType);
  ~CoEdgeTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CoEdgesMeshType :
  public XmlTypeBase
{
public:
  CoEdgesMeshType();
  CoEdgesMeshType(
    CoEdgeMeshTypeLisd * CoEdgeMeshIn);
  CoEdgesMeshType(
    NaturalType * nIn,
    CoEdgeMeshTypeLisd * CoEdgeMeshIn);
  ~CoEdgesMeshType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CoEdgeMeshTypeLisd * getCoEdgeMesh();
  void setCoEdgeMesh(CoEdgeMeshTypeLisd *);

protected:
  NaturalType * n;
  CoEdgeMeshTypeLisd * CoEdgeMesh;
};

/* ***************************************************************** */

class CoEdgesType :
  public XmlTypeBase
{
public:
  CoEdgesType();
  CoEdgesType(
    CoEdgeTypeLisd * CoEdgeIn);
  CoEdgesType(
    NaturalType * nIn,
    CoEdgeTypeLisd * CoEdgeIn);
  ~CoEdgesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CoEdgeTypeLisd * getCoEdge();
  void setCoEdge(CoEdgeTypeLisd *);

protected:
  NaturalType * n;
  CoEdgeTypeLisd * CoEdge;
};

/* ***************************************************************** */

class EdgeSetType :
  public XmlTypeBase
{
public:
  EdgeSetType();
  EdgeSetType(
    EdgeTypeLisd * EdgeIn);
  EdgeSetType(
    NaturalType * nIn,
    EdgeTypeLisd * EdgeIn);
  ~EdgeSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  EdgeTypeLisd * getEdge();
  void setEdge(EdgeTypeLisd *);

protected:
  NaturalType * n;
  EdgeTypeLisd * Edge;
};

/* ***************************************************************** */

class FaceSetType :
  public XmlTypeBase
{
public:
  FaceSetType();
  FaceSetType(
    FaceBaseTypeLisd * FaceBaseIn);
  FaceSetType(
    NaturalType * nIn,
    FaceBaseTypeLisd * FaceBaseIn);
  ~FaceSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FaceBaseTypeLisd * getFaceBase();
  void setFaceBase(FaceBaseTypeLisd *);

protected:
  NaturalType * n;
  FaceBaseTypeLisd * FaceBase;
};

/* ***************************************************************** */

class LoopFormEnumType :
  public XmlString
{
public:
  LoopFormEnumType();
  LoopFormEnumType(
    const char * valIn);
  ~LoopFormEnumType();
  bool LoopFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LoopSetType :
  public XmlTypeBase
{
public:
  LoopSetType();
  LoopSetType(
    LoopBaseTypeLisd * LoopBaseIn);
  LoopSetType(
    NaturalType * nIn,
    LoopBaseTypeLisd * LoopBaseIn);
  ~LoopSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  LoopBaseTypeLisd * getLoopBase();
  void setLoopBase(LoopBaseTypeLisd *);

protected:
  NaturalType * n;
  LoopBaseTypeLisd * LoopBase;
};

/* ***************************************************************** */

class PointCloudSetType :
  public XmlTypeBase
{
public:
  PointCloudSetType();
  PointCloudSetType(
    PointCloudTypeLisd * PointCloudIn);
  PointCloudSetType(
    NaturalType * nIn,
    PointCloudTypeLisd * PointCloudIn);
  ~PointCloudSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PointCloudTypeLisd * getPointCloud();
  void setPointCloud(PointCloudTypeLisd *);

protected:
  NaturalType * n;
  PointCloudTypeLisd * PointCloud;
};

/* ***************************************************************** */

class ShellFormEnumType :
  public XmlString
{
public:
  ShellFormEnumType();
  ShellFormEnumType(
    const char * valIn);
  ~ShellFormEnumType();
  bool ShellFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ShellSetType :
  public XmlTypeBase
{
public:
  ShellSetType();
  ShellSetType(
    ShellTypeLisd * ShellIn);
  ShellSetType(
    NaturalType * nIn,
    ShellTypeLisd * ShellIn);
  ~ShellSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ShellTypeLisd * getShell();
  void setShell(ShellTypeLisd *);

protected:
  NaturalType * n;
  ShellTypeLisd * Shell;
};

/* ***************************************************************** */

class TopologyBaseType :
  public DrawableBaseType
{
public:
  TopologyBaseType();
  TopologyBaseType(
    AttributesType * AttributesIn);
  TopologyBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn);
  virtual ~TopologyBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class TopologySetType :
  public XmlTypeBase
{
public:
  TopologySetType();
  TopologySetType(
    VertexSetType * VertexSetIn,
    EdgeSetType * EdgeSetIn,
    LoopSetType * LoopSetIn,
    FaceSetType * FaceSetIn,
    ShellSetType * ShellSetIn,
    BodySetType * BodySetIn,
    PointCloudSetType * PointCloudSetIn);
  ~TopologySetType();
  void printSelf(FILE * outFile);

  VertexSetType * getVertexSet();
  void setVertexSet(VertexSetType * VertexSetIn);
  EdgeSetType * getEdgeSet();
  void setEdgeSet(EdgeSetType * EdgeSetIn);
  LoopSetType * getLoopSet();
  void setLoopSet(LoopSetType * LoopSetIn);
  FaceSetType * getFaceSet();
  void setFaceSet(FaceSetType * FaceSetIn);
  ShellSetType * getShellSet();
  void setShellSet(ShellSetType * ShellSetIn);
  BodySetType * getBodySet();
  void setBodySet(BodySetType * BodySetIn);
  PointCloudSetType * getPointCloudSet();
  void setPointCloudSet(PointCloudSetType * PointCloudSetIn);

protected:
  VertexSetType * VertexSet;
  EdgeSetType * EdgeSet;
  LoopSetType * LoopSet;
  FaceSetType * FaceSet;
  ShellSetType * ShellSet;
  BodySetType * BodySet;
  PointCloudSetType * PointCloudSet;
};

/* ***************************************************************** */

class ValidationBodyType :
  public XmlTypeBase
{
public:
  ValidationBodyType();
  ValidationBodyType(
    XmlDouble * AreaIn,
    PointSimpleType * CentroidIn,
    XmlDouble * VolumeIn,
    BoundingBoxAxisAlignedType * BoxIn,
    ValidationPointsType * FacePointsIn,
    ValidationPointsType * EdgePointsIn);
  ~ValidationBodyType();
  void printSelf(FILE * outFile);

  XmlDouble * getArea();
  void setArea(XmlDouble * AreaIn);
  PointSimpleType * getCentroid();
  void setCentroid(PointSimpleType * CentroidIn);
  XmlDouble * getVolume();
  void setVolume(XmlDouble * VolumeIn);
  BoundingBoxAxisAlignedType * getBox();
  void setBox(BoundingBoxAxisAlignedType * BoxIn);
  ValidationPointsType * getFacePoints();
  void setFacePoints(ValidationPointsType * FacePointsIn);
  ValidationPointsType * getEdgePoints();
  void setEdgePoints(ValidationPointsType * EdgePointsIn);

protected:
  XmlDouble * Area;
  PointSimpleType * Centroid;
  XmlDouble * Volume;
  BoundingBoxAxisAlignedType * Box;
  ValidationPointsType * FacePoints;
  ValidationPointsType * EdgePoints;
};

/* ***************************************************************** */

class ValidationEdgeType :
  public XmlTypeBase
{
public:
  ValidationEdgeType();
  ValidationEdgeType(
    XmlDouble * LengthIn,
    PointSimpleType * CentroidIn,
    BoundingBoxAxisAlignedType * BoxIn,
    ValidationPointsType * PointsIn);
  ~ValidationEdgeType();
  void printSelf(FILE * outFile);

  XmlDouble * getLength();
  void setLength(XmlDouble * LengthIn);
  PointSimpleType * getCentroid();
  void setCentroid(PointSimpleType * CentroidIn);
  BoundingBoxAxisAlignedType * getBox();
  void setBox(BoundingBoxAxisAlignedType * BoxIn);
  ValidationPointsType * getPoints();
  void setPoints(ValidationPointsType * PointsIn);

protected:
  XmlDouble * Length;
  PointSimpleType * Centroid;
  BoundingBoxAxisAlignedType * Box;
  ValidationPointsType * Points;
};

/* ***************************************************************** */

class ValidationFaceType :
  public XmlTypeBase
{
public:
  ValidationFaceType();
  ValidationFaceType(
    XmlDouble * AreaIn,
    PointSimpleType * CentroidIn,
    BoundingBoxAxisAlignedType * BoxIn,
    ValidationPointsType * PointsIn);
  ~ValidationFaceType();
  void printSelf(FILE * outFile);

  XmlDouble * getArea();
  void setArea(XmlDouble * AreaIn);
  PointSimpleType * getCentroid();
  void setCentroid(PointSimpleType * CentroidIn);
  BoundingBoxAxisAlignedType * getBox();
  void setBox(BoundingBoxAxisAlignedType * BoxIn);
  ValidationPointsType * getPoints();
  void setPoints(ValidationPointsType * PointsIn);

protected:
  XmlDouble * Area;
  PointSimpleType * Centroid;
  BoundingBoxAxisAlignedType * Box;
  ValidationPointsType * Points;
};

/* ***************************************************************** */

class VertexSetType :
  public XmlTypeBase
{
public:
  VertexSetType();
  VertexSetType(
    VertexTypeLisd * VertexIn);
  VertexSetType(
    NaturalType * nIn,
    VertexTypeLisd * VertexIn);
  ~VertexSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  VertexTypeLisd * getVertex();
  void setVertex(VertexTypeLisd *);

protected:
  NaturalType * n;
  VertexTypeLisd * Vertex;
};

/* ***************************************************************** */

class VertexType :
  public TopologyBaseType
{
public:
  VertexType();
  VertexType(
    AttributesType * AttributesIn,
    ElementReferenceType * PointIn);
  VertexType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlDouble * toleranceIn,
    ElementReferenceType * PointIn);
  ~VertexType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDouble * gettolerance();
  void settolerance(XmlDouble * toleranceIn);

  ElementReferenceType * getPoint();
  void setPoint(ElementReferenceType * PointIn);

protected:
  XmlDouble * tolerance;
  ElementReferenceType * Point;
};

/* ***************************************************************** */

class VertexTypeLisd :
  public std::list<VertexType *>,
  public XmlSchemaInstanceBase
{
public:
  VertexTypeLisd();
  VertexTypeLisd(
    VertexType * aVertexType);
  ~VertexTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FaceMeshType_1180_Type :
  public XmlTypeBase
{
public:
  FaceMeshType_1180_Type();
  FaceMeshType_1180_Type(
    FaceMeshType_1180_TypeChoicePair * FaceMeshType_1180_TypePairIn);
  ~FaceMeshType_1180_Type();
  void printSelf(FILE * outFile);

  FaceMeshType_1180_TypeChoicePair * getFaceMeshType_1180_TypePair();
  void setFaceMeshType_1180_TypePair(FaceMeshType_1180_TypeChoicePair * FaceMeshType_1180_TypePairIn);

protected:
  FaceMeshType_1180_TypeChoicePair * FaceMeshType_1180_TypePair;
};

/* ***************************************************************** */

union FaceMeshType_1180_TypeVal
{
  ArrayIntType * Triangles;
  ArrayBinaryType * TrianglesBinary;
};

/* ***************************************************************** */

class FaceMeshType_1180_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TrianglesE,
    TrianglesBinaryE };
  FaceMeshType_1180_TypeChoicePair();
  FaceMeshType_1180_TypeChoicePair(
    whichOne FaceMeshType_1180_TypeTypeIn,
    FaceMeshType_1180_TypeVal * FaceMeshType_1180_TypeValueIn);
  ~FaceMeshType_1180_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FaceMeshType_1180_TypeType;
  FaceMeshType_1180_TypeVal * FaceMeshType_1180_TypeValue;
};

/* ***************************************************************** */

class FaceMeshType_1181_Type :
  public XmlTypeBase
{
public:
  FaceMeshType_1181_Type();
  FaceMeshType_1181_Type(
    FaceMeshType_1181_TypeChoicePair * FaceMeshType_1181_TypePairIn);
  ~FaceMeshType_1181_Type();
  void printSelf(FILE * outFile);

  FaceMeshType_1181_TypeChoicePair * getFaceMeshType_1181_TypePair();
  void setFaceMeshType_1181_TypePair(FaceMeshType_1181_TypeChoicePair * FaceMeshType_1181_TypePairIn);

protected:
  FaceMeshType_1181_TypeChoicePair * FaceMeshType_1181_TypePair;
};

/* ***************************************************************** */

union FaceMeshType_1181_TypeVal
{
  ArrayIntType * TrianglesVisible;
  ArrayBinaryType * TrianglesVisibleBinary;
  ArrayIntType * TrianglesHidden;
  ArrayBinaryType * TrianglesHiddenBinary;
};

/* ***************************************************************** */

class FaceMeshType_1181_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TrianglesVisibleE,
    TrianglesVisibleBinaryE,
    TrianglesHiddenE,
    TrianglesHiddenBinaryE };
  FaceMeshType_1181_TypeChoicePair();
  FaceMeshType_1181_TypeChoicePair(
    whichOne FaceMeshType_1181_TypeTypeIn,
    FaceMeshType_1181_TypeVal * FaceMeshType_1181_TypeValueIn);
  ~FaceMeshType_1181_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FaceMeshType_1181_TypeType;
  FaceMeshType_1181_TypeVal * FaceMeshType_1181_TypeValue;
};

/* ***************************************************************** */

class FaceMeshType_1182_Type :
  public XmlTypeBase
{
public:
  FaceMeshType_1182_Type();
  FaceMeshType_1182_Type(
    FaceMeshType_1182_TypeChoicePair * FaceMeshType_1182_TypePairIn);
  ~FaceMeshType_1182_Type();
  void printSelf(FILE * outFile);

  FaceMeshType_1182_TypeChoicePair * getFaceMeshType_1182_TypePair();
  void setFaceMeshType_1182_TypePair(FaceMeshType_1182_TypeChoicePair * FaceMeshType_1182_TypePairIn);

protected:
  FaceMeshType_1182_TypeChoicePair * FaceMeshType_1182_TypePair;
};

/* ***************************************************************** */

union FaceMeshType_1182_TypeVal
{
  ArrayUnsignedByteType * TrianglesColor;
  ArrayBinaryType * TrianglesColorBinary;
};

/* ***************************************************************** */

class FaceMeshType_1182_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TrianglesColorE,
    TrianglesColorBinaryE };
  FaceMeshType_1182_TypeChoicePair();
  FaceMeshType_1182_TypeChoicePair(
    whichOne FaceMeshType_1182_TypeTypeIn,
    FaceMeshType_1182_TypeVal * FaceMeshType_1182_TypeValueIn);
  ~FaceMeshType_1182_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FaceMeshType_1182_TypeType;
  FaceMeshType_1182_TypeVal * FaceMeshType_1182_TypeValue;
};

/* ***************************************************************** */

class PointCloudType_1183_Type :
  public XmlTypeBase
{
public:
  PointCloudType_1183_Type();
  PointCloudType_1183_Type(
    PointCloudType_1183_TypeChoicePair * PointCloudType_1183_TypePairIn);
  ~PointCloudType_1183_Type();
  void printSelf(FILE * outFile);

  PointCloudType_1183_TypeChoicePair * getPointCloudType_1183_TypePair();
  void setPointCloudType_1183_TypePair(PointCloudType_1183_TypeChoicePair * PointCloudType_1183_TypePairIn);

protected:
  PointCloudType_1183_TypeChoicePair * PointCloudType_1183_TypePair;
};

/* ***************************************************************** */

union PointCloudType_1183_TypeVal
{
  ArrayPointType * Points;
  ArrayBinaryType * PointsBinary;
};

/* ***************************************************************** */

class PointCloudType_1183_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsE,
    PointsBinaryE };
  PointCloudType_1183_TypeChoicePair();
  PointCloudType_1183_TypeChoicePair(
    whichOne PointCloudType_1183_TypeTypeIn,
    PointCloudType_1183_TypeVal * PointCloudType_1183_TypeValueIn);
  ~PointCloudType_1183_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointCloudType_1183_TypeType;
  PointCloudType_1183_TypeVal * PointCloudType_1183_TypeValue;
};

/* ***************************************************************** */

class PointCloudType_1184_Type :
  public XmlTypeBase
{
public:
  PointCloudType_1184_Type();
  PointCloudType_1184_Type(
    PointCloudType_1184_TypeChoicePair * PointCloudType_1184_TypePairIn);
  ~PointCloudType_1184_Type();
  void printSelf(FILE * outFile);

  PointCloudType_1184_TypeChoicePair * getPointCloudType_1184_TypePair();
  void setPointCloudType_1184_TypePair(PointCloudType_1184_TypeChoicePair * PointCloudType_1184_TypePairIn);

protected:
  PointCloudType_1184_TypeChoicePair * PointCloudType_1184_TypePair;
};

/* ***************************************************************** */

union PointCloudType_1184_TypeVal
{
  ArrayUnitVectorType * Normals;
  ArrayBinaryType * NormalsBinary;
};

/* ***************************************************************** */

class PointCloudType_1184_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NormalsE,
    NormalsBinaryE };
  PointCloudType_1184_TypeChoicePair();
  PointCloudType_1184_TypeChoicePair(
    whichOne PointCloudType_1184_TypeTypeIn,
    PointCloudType_1184_TypeVal * PointCloudType_1184_TypeValueIn);
  ~PointCloudType_1184_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointCloudType_1184_TypeType;
  PointCloudType_1184_TypeVal * PointCloudType_1184_TypeValue;
};

/* ***************************************************************** */

class PointCloudType_1185_Type :
  public XmlTypeBase
{
public:
  PointCloudType_1185_Type();
  PointCloudType_1185_Type(
    PointCloudType_1185_TypeChoicePair * PointCloudType_1185_TypePairIn);
  ~PointCloudType_1185_Type();
  void printSelf(FILE * outFile);

  PointCloudType_1185_TypeChoicePair * getPointCloudType_1185_TypePair();
  void setPointCloudType_1185_TypePair(PointCloudType_1185_TypeChoicePair * PointCloudType_1185_TypePairIn);

protected:
  PointCloudType_1185_TypeChoicePair * PointCloudType_1185_TypePair;
};

/* ***************************************************************** */

union PointCloudType_1185_TypeVal
{
  ArrayIntType * PointsVisible;
  ArrayBinaryType * PointsVisibleBinary;
  ArrayIntType * PointsHidden;
  ArrayBinaryType * PointsHiddenBinary;
};

/* ***************************************************************** */

class PointCloudType_1185_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsVisibleE,
    PointsVisibleBinaryE,
    PointsHiddenE,
    PointsHiddenBinaryE };
  PointCloudType_1185_TypeChoicePair();
  PointCloudType_1185_TypeChoicePair(
    whichOne PointCloudType_1185_TypeTypeIn,
    PointCloudType_1185_TypeVal * PointCloudType_1185_TypeValueIn);
  ~PointCloudType_1185_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointCloudType_1185_TypeType;
  PointCloudType_1185_TypeVal * PointCloudType_1185_TypeValue;
};

/* ***************************************************************** */

class PointCloudType_1186_Type :
  public XmlTypeBase
{
public:
  PointCloudType_1186_Type();
  PointCloudType_1186_Type(
    PointCloudType_1186_TypeChoicePair * PointCloudType_1186_TypePairIn);
  ~PointCloudType_1186_Type();
  void printSelf(FILE * outFile);

  PointCloudType_1186_TypeChoicePair * getPointCloudType_1186_TypePair();
  void setPointCloudType_1186_TypePair(PointCloudType_1186_TypeChoicePair * PointCloudType_1186_TypePairIn);

protected:
  PointCloudType_1186_TypeChoicePair * PointCloudType_1186_TypePair;
};

/* ***************************************************************** */

union PointCloudType_1186_TypeVal
{
  ArrayUnsignedByteType * PointsColor;
  ArrayBinaryType * PointsColorBinary;
};

/* ***************************************************************** */

class PointCloudType_1186_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsColorE,
    PointsColorBinaryE };
  PointCloudType_1186_TypeChoicePair();
  PointCloudType_1186_TypeChoicePair(
    whichOne PointCloudType_1186_TypeTypeIn,
    PointCloudType_1186_TypeVal * PointCloudType_1186_TypeValueIn);
  ~PointCloudType_1186_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointCloudType_1186_TypeType;
  PointCloudType_1186_TypeVal * PointCloudType_1186_TypeValue;
};

/* ***************************************************************** */

class BodyType :
  public TopologyBaseType
{
public:
  BodyType();
  BodyType(
    AttributesType * AttributesIn,
    ValidationBodyType * ValidationIn,
    ElementReferenceType * TransformIn,
    ArrayReferenceType * ShellIdsIn,
    ArrayReferenceType * FaceIdsIn,
    ArrayReferenceType * LoopIdsIn,
    ArrayReferenceType * EdgeIdsIn,
    ArrayReferenceType * VertexIdsIn);
  BodyType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    BodyFormEnumType * formIn,
    NaturalType * materialIndexIn,
    ValidationBodyType * ValidationIn,
    ElementReferenceType * TransformIn,
    ArrayReferenceType * ShellIdsIn,
    ArrayReferenceType * FaceIdsIn,
    ArrayReferenceType * LoopIdsIn,
    ArrayReferenceType * EdgeIdsIn,
    ArrayReferenceType * VertexIdsIn);
  ~BodyType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  BodyFormEnumType * getform();
  void setform(BodyFormEnumType * formIn);
  NaturalType * getmaterialIndex();
  void setmaterialIndex(NaturalType * materialIndexIn);

  ValidationBodyType * getValidation();
  void setValidation(ValidationBodyType * ValidationIn);
  ElementReferenceType * getTransform();
  void setTransform(ElementReferenceType * TransformIn);
  ArrayReferenceType * getShellIds();
  void setShellIds(ArrayReferenceType * ShellIdsIn);
  ArrayReferenceType * getFaceIds();
  void setFaceIds(ArrayReferenceType * FaceIdsIn);
  ArrayReferenceType * getLoopIds();
  void setLoopIds(ArrayReferenceType * LoopIdsIn);
  ArrayReferenceType * getEdgeIds();
  void setEdgeIds(ArrayReferenceType * EdgeIdsIn);
  ArrayReferenceType * getVertexIds();
  void setVertexIds(ArrayReferenceType * VertexIdsIn);

protected:
  BodyFormEnumType * form;
  NaturalType * materialIndex;
  ValidationBodyType * Validation;
  ElementReferenceType * Transform;
  ArrayReferenceType * ShellIds;
  ArrayReferenceType * FaceIds;
  ArrayReferenceType * LoopIds;
  ArrayReferenceType * EdgeIds;
  ArrayReferenceType * VertexIds;
};

/* ***************************************************************** */

class BodyTypeLisd :
  public std::list<BodyType *>,
  public XmlSchemaInstanceBase
{
public:
  BodyTypeLisd();
  BodyTypeLisd(
    BodyType * aBodyType);
  ~BodyTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class EdgeType :
  public TopologyBaseType
{
public:
  EdgeType();
  EdgeType(
    AttributesType * AttributesIn,
    ValidationEdgeType * ValidationIn,
    ElementReferenceType * CurveIn,
    ElementReferenceType * VertexBegIn,
    ElementReferenceType * VertexEndIn);
  EdgeType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlDouble * toleranceIn,
    ValidationEdgeType * ValidationIn,
    ElementReferenceType * CurveIn,
    ElementReferenceType * VertexBegIn,
    ElementReferenceType * VertexEndIn);
  ~EdgeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDouble * gettolerance();
  void settolerance(XmlDouble * toleranceIn);

  ValidationEdgeType * getValidation();
  void setValidation(ValidationEdgeType * ValidationIn);
  ElementReferenceType * getCurve();
  void setCurve(ElementReferenceType * CurveIn);
  ElementReferenceType * getVertexBeg();
  void setVertexBeg(ElementReferenceType * VertexBegIn);
  ElementReferenceType * getVertexEnd();
  void setVertexEnd(ElementReferenceType * VertexEndIn);

protected:
  XmlDouble * tolerance;
  ValidationEdgeType * Validation;
  ElementReferenceType * Curve;
  ElementReferenceType * VertexBeg;
  ElementReferenceType * VertexEnd;
};

/* ***************************************************************** */

class EdgeTypeLisd :
  public std::list<EdgeType *>,
  public XmlSchemaInstanceBase
{
public:
  EdgeTypeLisd();
  EdgeTypeLisd(
    EdgeType * aEdgeType);
  ~EdgeTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FaceBaseType :
  public TopologyBaseType
{
public:
  FaceBaseType();
  FaceBaseType(
    AttributesType * AttributesIn,
    ValidationFaceType * ValidationIn);
  FaceBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlBoolean * turnedIn,
    ValidationFaceType * ValidationIn);
  virtual ~FaceBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getturned();
  void setturned(XmlBoolean * turnedIn);

  ValidationFaceType * getValidation();
  void setValidation(ValidationFaceType * ValidationIn);

protected:
  XmlBoolean * turned;
  ValidationFaceType * Validation;
};

/* ***************************************************************** */

class FaceBaseTypeLisd :
  public std::list<FaceBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  FaceBaseTypeLisd();
  FaceBaseTypeLisd(
    FaceBaseType * aFaceBaseType);
  ~FaceBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FaceMeshType :
  public FaceBaseType
{
public:
  FaceMeshType();
  FaceMeshType(
    AttributesType * AttributesIn,
    ValidationFaceType * ValidationIn,
    ElementReferenceType * MeshIn,
    ArrayReferenceType * LoopIdsIn,
    FaceMeshType_1180_Type * FaceMeshType_1180In,
    FaceMeshType_1181_Type * FaceMeshType_1181In,
    FaceMeshType_1182_Type * FaceMeshType_1182In);
  FaceMeshType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlBoolean * turnedIn,
    ValidationFaceType * ValidationIn,
    ElementReferenceType * MeshIn,
    ArrayReferenceType * LoopIdsIn,
    FaceMeshType_1180_Type * FaceMeshType_1180In,
    FaceMeshType_1181_Type * FaceMeshType_1181In,
    FaceMeshType_1182_Type * FaceMeshType_1182In);
  ~FaceMeshType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ElementReferenceType * getMesh();
  void setMesh(ElementReferenceType * MeshIn);
  ArrayReferenceType * getLoopIds();
  void setLoopIds(ArrayReferenceType * LoopIdsIn);
  FaceMeshType_1180_Type * getFaceMeshType_1180();
  void setFaceMeshType_1180(FaceMeshType_1180_Type * FaceMeshType_1180In);
  FaceMeshType_1181_Type * getFaceMeshType_1181();
  void setFaceMeshType_1181(FaceMeshType_1181_Type * FaceMeshType_1181In);
  FaceMeshType_1182_Type * getFaceMeshType_1182();
  void setFaceMeshType_1182(FaceMeshType_1182_Type * FaceMeshType_1182In);

protected:
  ElementReferenceType * Mesh;
  ArrayReferenceType * LoopIds;
  FaceMeshType_1180_Type * FaceMeshType_1180;
  FaceMeshType_1181_Type * FaceMeshType_1181;
  FaceMeshType_1182_Type * FaceMeshType_1182;
};

/* ***************************************************************** */

class FaceType :
  public FaceBaseType
{
public:
  FaceType();
  FaceType(
    AttributesType * AttributesIn,
    ValidationFaceType * ValidationIn,
    ElementReferenceType * SurfaceIn,
    ArrayReferenceType * LoopIdsIn);
  FaceType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlBoolean * turnedIn,
    ValidationFaceType * ValidationIn,
    XmlBoolean * hasOuterIn,
    ElementReferenceType * SurfaceIn,
    ArrayReferenceType * LoopIdsIn);
  ~FaceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * gethasOuter();
  void sethasOuter(XmlBoolean * hasOuterIn);

  ElementReferenceType * getSurface();
  void setSurface(ElementReferenceType * SurfaceIn);
  ArrayReferenceType * getLoopIds();
  void setLoopIds(ArrayReferenceType * LoopIdsIn);

protected:
  XmlBoolean * hasOuter;
  ElementReferenceType * Surface;
  ArrayReferenceType * LoopIds;
};

/* ***************************************************************** */

class LoopBaseType :
  public TopologyBaseType
{
public:
  LoopBaseType();
  LoopBaseType(
    AttributesType * AttributesIn);
  LoopBaseType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn);
  virtual ~LoopBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class LoopBaseTypeLisd :
  public std::list<LoopBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  LoopBaseTypeLisd();
  LoopBaseTypeLisd(
    LoopBaseType * aLoopBaseType);
  ~LoopBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LoopMeshType :
  public LoopBaseType
{
public:
  LoopMeshType();
  LoopMeshType(
    AttributesType * AttributesIn,
    CoEdgesMeshType * CoEdgesMeshIn);
  LoopMeshType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    CoEdgesMeshType * CoEdgesMeshIn);
  ~LoopMeshType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CoEdgesMeshType * getCoEdgesMesh();
  void setCoEdgesMesh(CoEdgesMeshType * CoEdgesMeshIn);

protected:
  CoEdgesMeshType * CoEdgesMesh;
};

/* ***************************************************************** */

class LoopType :
  public LoopBaseType
{
public:
  LoopType();
  LoopType(
    AttributesType * AttributesIn,
    CoEdgesType * CoEdgesIn);
  LoopType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    LoopFormEnumType * formIn,
    CoEdgesType * CoEdgesIn);
  ~LoopType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LoopFormEnumType * getform();
  void setform(LoopFormEnumType * formIn);

  CoEdgesType * getCoEdges();
  void setCoEdges(CoEdgesType * CoEdgesIn);

protected:
  LoopFormEnumType * form;
  CoEdgesType * CoEdges;
};

/* ***************************************************************** */

class PointCloudType :
  public TopologyBaseType
{
public:
  PointCloudType();
  PointCloudType(
    AttributesType * AttributesIn,
    PointCloudType_1183_Type * PointCloudType_1183In,
    PointCloudType_1184_Type * PointCloudType_1184In,
    PointCloudType_1185_Type * PointCloudType_1185In,
    PointCloudType_1186_Type * PointCloudType_1186In);
  PointCloudType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    PointCloudType_1183_Type * PointCloudType_1183In,
    PointCloudType_1184_Type * PointCloudType_1184In,
    PointCloudType_1185_Type * PointCloudType_1185In,
    PointCloudType_1186_Type * PointCloudType_1186In);
  ~PointCloudType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointCloudType_1183_Type * getPointCloudType_1183();
  void setPointCloudType_1183(PointCloudType_1183_Type * PointCloudType_1183In);
  PointCloudType_1184_Type * getPointCloudType_1184();
  void setPointCloudType_1184(PointCloudType_1184_Type * PointCloudType_1184In);
  PointCloudType_1185_Type * getPointCloudType_1185();
  void setPointCloudType_1185(PointCloudType_1185_Type * PointCloudType_1185In);
  PointCloudType_1186_Type * getPointCloudType_1186();
  void setPointCloudType_1186(PointCloudType_1186_Type * PointCloudType_1186In);

protected:
  PointCloudType_1183_Type * PointCloudType_1183;
  PointCloudType_1184_Type * PointCloudType_1184;
  PointCloudType_1185_Type * PointCloudType_1185;
  PointCloudType_1186_Type * PointCloudType_1186;
};

/* ***************************************************************** */

class PointCloudTypeLisd :
  public std::list<PointCloudType *>,
  public XmlSchemaInstanceBase
{
public:
  PointCloudTypeLisd();
  PointCloudTypeLisd(
    PointCloudType * aPointCloudType);
  ~PointCloudTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ShellType :
  public TopologyBaseType
{
public:
  ShellType();
  ShellType(
    AttributesType * AttributesIn,
    ArrayReferenceType * FaceIdsIn);
  ShellType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ColorType * colorIn,
    XmlBoolean * hiddenIn,
    DoublePositiveType * sizeIn,
    TransparencyType * transparencyIn,
    XmlBoolean * closedIn,
    ShellFormEnumType * formIn,
    XmlBoolean * turnedIn,
    ArrayReferenceType * FaceIdsIn);
  ~ShellType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getclosed();
  void setclosed(XmlBoolean * closedIn);
  ShellFormEnumType * getform();
  void setform(ShellFormEnumType * formIn);
  XmlBoolean * getturned();
  void setturned(XmlBoolean * turnedIn);

  ArrayReferenceType * getFaceIds();
  void setFaceIds(ArrayReferenceType * FaceIdsIn);

protected:
  XmlBoolean * closed;
  ShellFormEnumType * form;
  XmlBoolean * turned;
  ArrayReferenceType * FaceIds;
};

/* ***************************************************************** */

class ShellTypeLisd :
  public std::list<ShellType *>,
  public XmlSchemaInstanceBase
{
public:
  ShellTypeLisd();
  ShellTypeLisd(
    ShellType * aShellType);
  ~ShellTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

#endif // TOPOLOGY_HH
