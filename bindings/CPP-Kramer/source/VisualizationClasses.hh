/* ***************************************************************** */

#ifndef VISUALIZATION_HH
#define VISUALIZATION_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPDClasses.hh"
#include "CharacteristicsClasses.hh"

/* ***************************************************************** */

class AlignmentEnumType;
class AnnotationViewSetType;
class AnnotationViewType;
class AnnotationViewTypeLisd;
class Area2dType;
class Area2dTypeLisd;
class Area2dTypeChoicePair;
class Areas2dType;
class CameraFormEnumType;
class CameraSetType;
class CameraType;
class CameraTypeLisd;
class DisplayStyleFormEnumType;
class DisplayStyleGroupType;
class DisplayStyleGroupTypeLisd;
class DisplayStyleGroupsType;
class DisplayStyleModeType;
class DisplayStyleSetType;
class DisplayStyleType;
class DisplayStyleTypeLisd;
class ExplodedViewMoveGroupType;
class ExplodedViewMoveGroupTypeLisd;
class ExplodedViewMoveGroupsType;
class ExplodedViewRotateType;
class ExplodedViewSetType;
class ExplodedViewTranslateType;
class ExplodedViewType;
class ExplodedViewTypeLisd;
class FontType;
class FontTypeLisd;
class FontsType;
class FrameBaseType;
class FrameBaseTypeLisd;
class FrameCircularType;
class FrameFlagType;
class FrameHexagonalType;
class FrameIrregularFormType;
class FrameOctagonalType;
class FramePentagonalType;
class FrameRectangularType;
class FrameTriangleType;
class FrameWeldSymbolTailType;
class FrameWeldSymbolType;
class FramesType;
class GraphicsType;
class HatchPatternType;
class HatchPatternTypeLisd;
class HatchPatternsType;
class HatchStyleFormEnumType;
class HatchStyleSetType;
class HatchStyleType;
class HatchStyleTypeLisd;
class LeaderCircularType;
class LeaderDoubleHeadCircularType;
class LeaderDoubleHeadExtendType;
class LeaderDoubleHeadType;
class LeaderExtendType;
class LeaderHeadFormEnumType;
class LeaderHeadFormType;
class LeaderModifierEnumType;
class LeaderType;
class LeaderTypeLisd;
class LogicalOperationEnumType;
class LogicalOperationType;
class LogicalOperationTypeLisd;
class LogicalOperationsType;
class Loops2dType;
class OriginType;
class PMIDisplaySetType;
class PMIDisplayType;
class PMIDisplayTypeLisd;
class PlanePMIDisplayType;
class Polyline2dType;
class Polyline2dTypeLisd;
class Polylines2dType;
class SavedViewSetType;
class SavedViewType;
class SavedViewTypeLisd;
class SectionAreaType;
class SectionAreaTypeLisd;
class SectionAreasType;
class SectionEdgesType;
class SectionGroupType;
class SectionGroupTypeLisd;
class SectionGroupsType;
class SectionLoopsType;
class SectionPathType;
class SectionPathTypeLisd;
class SectionPathsType;
class SimplifiedRepresentationFormEnumType;
class SimplifiedRepresentationGroupType;
class SimplifiedRepresentationGroupTypeLisd;
class SimplifiedRepresentationGroupsType;
class SimplifiedRepresentationSetType;
class SimplifiedRepresentationType;
class SimplifiedRepresentationTypeLisd;
class TextType;
class TextTypeLisd;
class TextsType;
class TrailingZeroDimensionalCharacteristicDisplayGroupType;
class TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd;
class TrailingZeroDimensionalCharacteristicDisplayGroupsType;
class TrailingZeroDisplayType;
class TrailingZeroGeometricCharacteristicDisplayGroupType;
class TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd;
class TrailingZeroGeometricCharacteristicDisplayGroupsType;
class Triangulation2dType;
class ViewSetType;
class VisualizationSetType;
class WeldContourSymbolType;
class WeldMainSymbolEnumType;
class WeldMainSymbolType;
class WeldSupplementarySymbolType;
class WitnessLinesType;
class WitnessLinesTypeChoicePair;
class ZoneSectionPlaneType;
class ZoneSectionPlaneTypeLisd;
class ZoneSectionPlanesType;
class ZoneSectionSetType;
class ZoneSectionType;
class ZoneSectionTypeLisd;
class ExplodedViewMov_1231_Type;
class ExplodedViewMov_1231_TypeChoicePair;
class LogicalOperatio_1232_Type;
class LogicalOperatio_1232_TypeLisd;
class LogicalOperatio_1232_TypeChoicePair;
class LogicalOperatio_1232_TypeChoicePairLisd;
class Polyline2dType_1233_Type;
class Polyline2dType_1233_TypeChoicePair;
class Triangulation2d_1234_Type;
class Triangulation2d_1234_TypeChoicePair;
class Triangulation2d_1235_Type;
class Triangulation2d_1235_TypeChoicePair;
class WitnessLinesTyp_1236_Type;
class WitnessLinesTyp_1237_Type;

/* ***************************************************************** */
/* ***************************************************************** */

class AlignmentEnumType :
  public XmlString
{
public:
  AlignmentEnumType();
  AlignmentEnumType(
    const char * valIn);
  ~AlignmentEnumType();
  bool AlignmentEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class AnnotationViewSetType :
  public XmlTypeBase
{
public:
  AnnotationViewSetType();
  AnnotationViewSetType(
    AnnotationViewTypeLisd * AnnotationViewIn);
  AnnotationViewSetType(
    NaturalType * nIn,
    AnnotationViewTypeLisd * AnnotationViewIn);
  ~AnnotationViewSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AnnotationViewTypeLisd * getAnnotationView();
  void setAnnotationView(AnnotationViewTypeLisd *);

protected:
  NaturalType * n;
  AnnotationViewTypeLisd * AnnotationView;
};

/* ***************************************************************** */

class AnnotationViewType :
  public NodeWithIdBaseType
{
public:
  AnnotationViewType();
  AnnotationViewType(
    AttributesType * AttributesIn,
    UnitVectorType * NormalIn,
    UnitVectorType * DirectionIn);
  AnnotationViewType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    UnitVectorType * NormalIn,
    UnitVectorType * DirectionIn);
  ~AnnotationViewType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);

protected:
  UnitVectorType * Normal;
  UnitVectorType * Direction;
};

/* ***************************************************************** */

class AnnotationViewTypeLisd :
  public std::list<AnnotationViewType *>,
  public XmlSchemaInstanceBase
{
public:
  AnnotationViewTypeLisd();
  AnnotationViewTypeLisd(
    AnnotationViewType * aAnnotationViewType);
  ~AnnotationViewTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Area2dType :
  public XmlTypeBase
{
public:
  Area2dType();
  Area2dType(
    Area2dTypeChoicePair * Area2dTypePairIn);
  ~Area2dType();
  void printSelf(FILE * outFile);

  Area2dTypeChoicePair * getArea2dTypePair();
  void setArea2dTypePair(Area2dTypeChoicePair * Area2dTypePairIn);

protected:
  Area2dTypeChoicePair * Area2dTypePair;
};

/* ***************************************************************** */

union Area2dTypeVal
{
  Loops2dType * Loops;
  Triangulation2dType * Triangulation;
};

/* ***************************************************************** */

class Area2dTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LoopsE,
    TriangulationE };
  Area2dTypeChoicePair();
  Area2dTypeChoicePair(
    whichOne Area2dTypeTypeIn,
    Area2dTypeVal Area2dTypeValueIn);
  ~Area2dTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Area2dTypeType;
  Area2dTypeVal Area2dTypeValue;
};

/* ***************************************************************** */

class Area2dTypeLisd :
  public std::list<Area2dType *>,
  public XmlSchemaInstanceBase
{
public:
  Area2dTypeLisd();
  Area2dTypeLisd(
    Area2dType * aArea2dType);
  ~Area2dTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Areas2dType :
  public XmlTypeBase
{
public:
  Areas2dType();
  Areas2dType(
    Area2dTypeLisd * AreaIn);
  Areas2dType(
    NaturalType * nIn,
    Area2dTypeLisd * AreaIn);
  ~Areas2dType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  Area2dTypeLisd * getArea();
  void setArea(Area2dTypeLisd *);

protected:
  NaturalType * n;
  Area2dTypeLisd * Area;
};

/* ***************************************************************** */

class CameraFormEnumType :
  public XmlString
{
public:
  CameraFormEnumType();
  CameraFormEnumType(
    const char * valIn);
  ~CameraFormEnumType();
  bool CameraFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class CameraSetType :
  public XmlTypeBase
{
public:
  CameraSetType();
  CameraSetType(
    CameraTypeLisd * CameraIn);
  CameraSetType(
    NaturalType * nIn,
    CameraTypeLisd * CameraIn);
  ~CameraSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CameraTypeLisd * getCamera();
  void setCamera(CameraTypeLisd *);

protected:
  NaturalType * n;
  CameraTypeLisd * Camera;
};

/* ***************************************************************** */

class CameraType :
  public NodeWithIdBaseType
{
public:
  CameraType();
  CameraType(
    AttributesType * AttributesIn,
    PointSimpleType * ViewPlaneOriginIn,
    QuaternionType * OrientationIn,
    XmlDouble * RatioIn,
    LinearValueType * NearIn,
    LinearValueType * FarIn,
    XmlDouble * HeightIn);
  CameraType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    CameraFormEnumType * formIn,
    PointSimpleType * ViewPlaneOriginIn,
    QuaternionType * OrientationIn,
    XmlDouble * RatioIn,
    LinearValueType * NearIn,
    LinearValueType * FarIn,
    XmlDouble * HeightIn);
  ~CameraType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CameraFormEnumType * getform();
  void setform(CameraFormEnumType * formIn);

  PointSimpleType * getViewPlaneOrigin();
  void setViewPlaneOrigin(PointSimpleType * ViewPlaneOriginIn);
  QuaternionType * getOrientation();
  void setOrientation(QuaternionType * OrientationIn);
  XmlDouble * getRatio();
  void setRatio(XmlDouble * RatioIn);
  LinearValueType * getNear();
  void setNear(LinearValueType * NearIn);
  LinearValueType * getFar();
  void setFar(LinearValueType * FarIn);
  XmlDouble * getHeight();
  void setHeight(XmlDouble * HeightIn);

protected:
  CameraFormEnumType * form;
  PointSimpleType * ViewPlaneOrigin;
  QuaternionType * Orientation;
  XmlDouble * Ratio;
  LinearValueType * Near;
  LinearValueType * Far;
  XmlDouble * Height;
};

/* ***************************************************************** */

class CameraTypeLisd :
  public std::list<CameraType *>,
  public XmlSchemaInstanceBase
{
public:
  CameraTypeLisd();
  CameraTypeLisd(
    CameraType * aCameraType);
  ~CameraTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DisplayStyleFormEnumType :
  public XmlString
{
public:
  DisplayStyleFormEnumType();
  DisplayStyleFormEnumType(
    const char * valIn);
  ~DisplayStyleFormEnumType();
  bool DisplayStyleFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DisplayStyleGroupType :
  public XmlTypeBase
{
public:
  DisplayStyleGroupType();
  DisplayStyleGroupType(
    DisplayStyleModeType * ModeIn,
    ArrayReferenceFullType * ComponentIdsIn,
    ArrayReferenceFullType * BodyIdsIn);
  ~DisplayStyleGroupType();
  void printSelf(FILE * outFile);

  DisplayStyleModeType * getMode();
  void setMode(DisplayStyleModeType * ModeIn);
  ArrayReferenceFullType * getComponentIds();
  void setComponentIds(ArrayReferenceFullType * ComponentIdsIn);
  ArrayReferenceFullType * getBodyIds();
  void setBodyIds(ArrayReferenceFullType * BodyIdsIn);

protected:
  DisplayStyleModeType * Mode;
  ArrayReferenceFullType * ComponentIds;
  ArrayReferenceFullType * BodyIds;
};

/* ***************************************************************** */

class DisplayStyleGroupTypeLisd :
  public std::list<DisplayStyleGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  DisplayStyleGroupTypeLisd();
  DisplayStyleGroupTypeLisd(
    DisplayStyleGroupType * aDisplayStyleGroupType);
  ~DisplayStyleGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DisplayStyleGroupsType :
  public XmlTypeBase
{
public:
  DisplayStyleGroupsType();
  DisplayStyleGroupsType(
    DisplayStyleGroupTypeLisd * DisplayStyleGroupIn);
  DisplayStyleGroupsType(
    NaturalType * nIn,
    DisplayStyleGroupTypeLisd * DisplayStyleGroupIn);
  ~DisplayStyleGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DisplayStyleGroupTypeLisd * getDisplayStyleGroup();
  void setDisplayStyleGroup(DisplayStyleGroupTypeLisd *);

protected:
  NaturalType * n;
  DisplayStyleGroupTypeLisd * DisplayStyleGroup;
};

/* ***************************************************************** */

class DisplayStyleModeType :
  public XmlTypeBase
{
public:
  DisplayStyleModeType();
  DisplayStyleModeType(
    DisplayStyleFormEnumType * FormIn,
    ColorType * ColorIn,
    TransparencyType * TransparencyIn);
  ~DisplayStyleModeType();
  void printSelf(FILE * outFile);

  DisplayStyleFormEnumType * getForm();
  void setForm(DisplayStyleFormEnumType * FormIn);
  ColorType * getColor();
  void setColor(ColorType * ColorIn);
  TransparencyType * getTransparency();
  void setTransparency(TransparencyType * TransparencyIn);

protected:
  DisplayStyleFormEnumType * Form;
  ColorType * Color;
  TransparencyType * Transparency;
};

/* ***************************************************************** */

class DisplayStyleSetType :
  public XmlTypeBase
{
public:
  DisplayStyleSetType();
  DisplayStyleSetType(
    DisplayStyleTypeLisd * DisplayStyleIn);
  DisplayStyleSetType(
    NaturalType * nIn,
    DisplayStyleTypeLisd * DisplayStyleIn);
  ~DisplayStyleSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DisplayStyleTypeLisd * getDisplayStyle();
  void setDisplayStyle(DisplayStyleTypeLisd *);

protected:
  NaturalType * n;
  DisplayStyleTypeLisd * DisplayStyle;
};

/* ***************************************************************** */

class DisplayStyleType :
  public NodeWithIdBaseType
{
public:
  DisplayStyleType();
  DisplayStyleType(
    AttributesType * AttributesIn,
    DisplayStyleModeType * ModeIn,
    DisplayStyleGroupsType * DisplayStyleGroupsIn);
  DisplayStyleType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    DisplayStyleModeType * ModeIn,
    DisplayStyleGroupsType * DisplayStyleGroupsIn);
  ~DisplayStyleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DisplayStyleModeType * getMode();
  void setMode(DisplayStyleModeType * ModeIn);
  DisplayStyleGroupsType * getDisplayStyleGroups();
  void setDisplayStyleGroups(DisplayStyleGroupsType * DisplayStyleGroupsIn);

protected:
  DisplayStyleModeType * Mode;
  DisplayStyleGroupsType * DisplayStyleGroups;
};

/* ***************************************************************** */

class DisplayStyleTypeLisd :
  public std::list<DisplayStyleType *>,
  public XmlSchemaInstanceBase
{
public:
  DisplayStyleTypeLisd();
  DisplayStyleTypeLisd(
    DisplayStyleType * aDisplayStyleType);
  ~DisplayStyleTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ExplodedViewMoveGroupType :
  public XmlTypeBase
{
public:
  ExplodedViewMoveGroupType();
  ExplodedViewMoveGroupType(
    ExplodedViewMov_1231_Type * ExplodedViewMov_1231In,
    ArrayReferenceFullType * ComponentIdsIn,
    ArrayReferenceFullType * BodyIdsIn);
  ~ExplodedViewMoveGroupType();
  void printSelf(FILE * outFile);

  ExplodedViewMov_1231_Type * getExplodedViewMov_1231();
  void setExplodedViewMov_1231(ExplodedViewMov_1231_Type * ExplodedViewMov_1231In);
  ArrayReferenceFullType * getComponentIds();
  void setComponentIds(ArrayReferenceFullType * ComponentIdsIn);
  ArrayReferenceFullType * getBodyIds();
  void setBodyIds(ArrayReferenceFullType * BodyIdsIn);

protected:
  ExplodedViewMov_1231_Type * ExplodedViewMov_1231;
  ArrayReferenceFullType * ComponentIds;
  ArrayReferenceFullType * BodyIds;
};

/* ***************************************************************** */

class ExplodedViewMoveGroupTypeLisd :
  public std::list<ExplodedViewMoveGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  ExplodedViewMoveGroupTypeLisd();
  ExplodedViewMoveGroupTypeLisd(
    ExplodedViewMoveGroupType * aExplodedViewMoveGroupType);
  ~ExplodedViewMoveGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ExplodedViewMoveGroupsType :
  public XmlTypeBase
{
public:
  ExplodedViewMoveGroupsType();
  ExplodedViewMoveGroupsType(
    ExplodedViewMoveGroupTypeLisd * MoveGroupIn);
  ExplodedViewMoveGroupsType(
    NaturalType * nIn,
    ExplodedViewMoveGroupTypeLisd * MoveGroupIn);
  ~ExplodedViewMoveGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ExplodedViewMoveGroupTypeLisd * getMoveGroup();
  void setMoveGroup(ExplodedViewMoveGroupTypeLisd *);

protected:
  NaturalType * n;
  ExplodedViewMoveGroupTypeLisd * MoveGroup;
};

/* ***************************************************************** */

class ExplodedViewRotateType :
  public XmlTypeBase
{
public:
  ExplodedViewRotateType();
  ExplodedViewRotateType(
    AxisType * AxisIn,
    AngularValueType * AngleIn);
  ~ExplodedViewRotateType();
  void printSelf(FILE * outFile);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  AngularValueType * getAngle();
  void setAngle(AngularValueType * AngleIn);

protected:
  AxisType * Axis;
  AngularValueType * Angle;
};

/* ***************************************************************** */

class ExplodedViewSetType :
  public XmlTypeBase
{
public:
  ExplodedViewSetType();
  ExplodedViewSetType(
    ExplodedViewTypeLisd * ExplodedViewIn);
  ExplodedViewSetType(
    NaturalType * nIn,
    ExplodedViewTypeLisd * ExplodedViewIn);
  ~ExplodedViewSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ExplodedViewTypeLisd * getExplodedView();
  void setExplodedView(ExplodedViewTypeLisd *);

protected:
  NaturalType * n;
  ExplodedViewTypeLisd * ExplodedView;
};

/* ***************************************************************** */

class ExplodedViewTranslateType :
  public XmlTypeBase
{
public:
  ExplodedViewTranslateType();
  ExplodedViewTranslateType(
    UnitVectorType * DirectionIn,
    LinearValueType * ValueIn);
  ~ExplodedViewTranslateType();
  void printSelf(FILE * outFile);

  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);
  LinearValueType * getValue();
  void setValue(LinearValueType * ValueIn);

protected:
  UnitVectorType * Direction;
  LinearValueType * Value;
};

/* ***************************************************************** */

class ExplodedViewType :
  public NodeWithIdBaseType
{
public:
  ExplodedViewType();
  ExplodedViewType(
    AttributesType * AttributesIn,
    ExplodedViewMoveGroupsType * MoveGroupsIn);
  ExplodedViewType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ExplodedViewMoveGroupsType * MoveGroupsIn);
  ~ExplodedViewType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExplodedViewMoveGroupsType * getMoveGroups();
  void setMoveGroups(ExplodedViewMoveGroupsType * MoveGroupsIn);

protected:
  ExplodedViewMoveGroupsType * MoveGroups;
};

/* ***************************************************************** */

class ExplodedViewTypeLisd :
  public std::list<ExplodedViewType *>,
  public XmlSchemaInstanceBase
{
public:
  ExplodedViewTypeLisd();
  ExplodedViewTypeLisd(
    ExplodedViewType * aExplodedViewType);
  ~ExplodedViewTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FontType :
  public XmlTypeBase
{
public:
  FontType();
  FontType(
    AttributesType * AttributesIn,
    XmlString * NameIn,
    NaturalType * SizeIn,
    AlignmentEnumType * AlignmentIn);
  FontType(
    XmlBoolean * boldIn,
    XmlUnsignedInt * indexIn,
    XmlBoolean * italicIn,
    XmlBoolean * underlineIn,
    AttributesType * AttributesIn,
    XmlString * NameIn,
    NaturalType * SizeIn,
    AlignmentEnumType * AlignmentIn);
  ~FontType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getbold();
  void setbold(XmlBoolean * boldIn);
  XmlUnsignedInt * getindex();
  void setindex(XmlUnsignedInt * indexIn);
  XmlBoolean * getitalic();
  void setitalic(XmlBoolean * italicIn);
  XmlBoolean * getunderline();
  void setunderline(XmlBoolean * underlineIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlString * getName();
  void setName(XmlString * NameIn);
  NaturalType * getSize();
  void setSize(NaturalType * SizeIn);
  AlignmentEnumType * getAlignment();
  void setAlignment(AlignmentEnumType * AlignmentIn);

protected:
  XmlBoolean * bold;
  XmlUnsignedInt * index;
  XmlBoolean * italic;
  XmlBoolean * underline;
  AttributesType * Attributes;
  XmlString * Name;
  NaturalType * Size;
  AlignmentEnumType * Alignment;
};

/* ***************************************************************** */

class FontTypeLisd :
  public std::list<FontType *>,
  public XmlSchemaInstanceBase
{
public:
  FontTypeLisd();
  FontTypeLisd(
    FontType * aFontType);
  ~FontTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FontsType :
  public XmlTypeBase
{
public:
  FontsType();
  FontsType(
    FontTypeLisd * FontIn);
  FontsType(
    NaturalType * nIn,
    FontTypeLisd * FontIn);
  ~FontsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FontTypeLisd * getFont();
  void setFont(FontTypeLisd *);

protected:
  NaturalType * n;
  FontTypeLisd * Font;
};

/* ***************************************************************** */

class FrameBaseType :
  public XmlTypeBase
{
public:
  FrameBaseType();
  ~FrameBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FrameBaseTypeLisd :
  public std::list<FrameBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  FrameBaseTypeLisd();
  FrameBaseTypeLisd(
    FrameBaseType * aFrameBaseType);
  ~FrameBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FrameCircularType :
  public FrameBaseType
{
public:
  FrameCircularType();
  FrameCircularType(
    Point2dSimpleType * XYIn,
    XmlDouble * RadiusIn);
  FrameCircularType(
    XmlBoolean * crossedIn,
    Point2dSimpleType * XYIn,
    XmlDouble * RadiusIn);
  ~FrameCircularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getcrossed();
  void setcrossed(XmlBoolean * crossedIn);

  Point2dSimpleType * getXY();
  void setXY(Point2dSimpleType * XYIn);
  XmlDouble * getRadius();
  void setRadius(XmlDouble * RadiusIn);

protected:
  XmlBoolean * crossed;
  Point2dSimpleType * XY;
  XmlDouble * Radius;
};

/* ***************************************************************** */

class FrameHexagonalType :
  public FrameBaseType
{
public:
  FrameHexagonalType();
  FrameHexagonalType(
    Point2dSimpleTypeLisd * PointIn);
  ~FrameHexagonalType();
  void printSelf(FILE * outFile);

  Point2dSimpleTypeLisd * getPoint();
  void setPoint(Point2dSimpleTypeLisd *);

protected:
  Point2dSimpleTypeLisd * Point;
};

/* ***************************************************************** */

class FrameIrregularFormType :
  public FrameBaseType
{
public:
  FrameIrregularFormType();
  FrameIrregularFormType(
    ArrayPoint2dType * PointsIn);
  ~FrameIrregularFormType();
  void printSelf(FILE * outFile);

  ArrayPoint2dType * getPoints();
  void setPoints(ArrayPoint2dType * PointsIn);

protected:
  ArrayPoint2dType * Points;
};

/* ***************************************************************** */

class FrameOctagonalType :
  public FrameBaseType
{
public:
  FrameOctagonalType();
  FrameOctagonalType(
    Point2dSimpleTypeLisd * PointIn);
  ~FrameOctagonalType();
  void printSelf(FILE * outFile);

  Point2dSimpleTypeLisd * getPoint();
  void setPoint(Point2dSimpleTypeLisd *);

protected:
  Point2dSimpleTypeLisd * Point;
};

/* ***************************************************************** */

class FramePentagonalType :
  public FrameBaseType
{
public:
  FramePentagonalType();
  FramePentagonalType(
    Point2dSimpleTypeLisd * PointIn);
  ~FramePentagonalType();
  void printSelf(FILE * outFile);

  Point2dSimpleTypeLisd * getPoint();
  void setPoint(Point2dSimpleTypeLisd *);

protected:
  Point2dSimpleTypeLisd * Point;
};

/* ***************************************************************** */

class FrameRectangularType :
  public FrameBaseType
{
public:
  FrameRectangularType();
  FrameRectangularType(
    Point2dSimpleType * XYIn,
    XmlDouble * WidthIn,
    XmlDouble * HeightIn);
  ~FrameRectangularType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getXY();
  void setXY(Point2dSimpleType * XYIn);
  XmlDouble * getWidth();
  void setWidth(XmlDouble * WidthIn);
  XmlDouble * getHeight();
  void setHeight(XmlDouble * HeightIn);

protected:
  Point2dSimpleType * XY;
  XmlDouble * Width;
  XmlDouble * Height;
};

/* ***************************************************************** */

class FrameTriangleType :
  public FrameBaseType
{
public:
  FrameTriangleType();
  FrameTriangleType(
    Point2dSimpleTypeLisd * PointIn);
  ~FrameTriangleType();
  void printSelf(FILE * outFile);

  Point2dSimpleTypeLisd * getPoint();
  void setPoint(Point2dSimpleTypeLisd *);

protected:
  Point2dSimpleTypeLisd * Point;
};

/* ***************************************************************** */

class FrameWeldSymbolTailType :
  public XmlTypeBase
{
public:
  FrameWeldSymbolTailType();
  FrameWeldSymbolTailType(
    Point2dSimpleType * UpperPointIn,
    Point2dSimpleType * LowerPointIn);
  ~FrameWeldSymbolTailType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getUpperPoint();
  void setUpperPoint(Point2dSimpleType * UpperPointIn);
  Point2dSimpleType * getLowerPoint();
  void setLowerPoint(Point2dSimpleType * LowerPointIn);

protected:
  Point2dSimpleType * UpperPoint;
  Point2dSimpleType * LowerPoint;
};

/* ***************************************************************** */

class FrameWeldSymbolType :
  public FrameBaseType
{
public:
  FrameWeldSymbolType();
  FrameWeldSymbolType(
    Point2dSimpleType * ReferenceLineBeginPointIn,
    Point2dSimpleType * ReferenceLineEndPointIn,
    FrameWeldSymbolTailType * TailIn,
    WeldMainSymbolType * MainSymbolIn,
    WeldSupplementarySymbolType * SupplementarySymbolIn,
    WeldContourSymbolType * ArrowSideContourSymbolIn,
    WeldContourSymbolType * OtherSideContourSymbolIn);
  ~FrameWeldSymbolType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getReferenceLineBeginPoint();
  void setReferenceLineBeginPoint(Point2dSimpleType * ReferenceLineBeginPointIn);
  Point2dSimpleType * getReferenceLineEndPoint();
  void setReferenceLineEndPoint(Point2dSimpleType * ReferenceLineEndPointIn);
  FrameWeldSymbolTailType * getTail();
  void setTail(FrameWeldSymbolTailType * TailIn);
  WeldMainSymbolType * getMainSymbol();
  void setMainSymbol(WeldMainSymbolType * MainSymbolIn);
  WeldSupplementarySymbolType * getSupplementarySymbol();
  void setSupplementarySymbol(WeldSupplementarySymbolType * SupplementarySymbolIn);
  WeldContourSymbolType * getArrowSideContourSymbol();
  void setArrowSideContourSymbol(WeldContourSymbolType * ArrowSideContourSymbolIn);
  WeldContourSymbolType * getOtherSideContourSymbol();
  void setOtherSideContourSymbol(WeldContourSymbolType * OtherSideContourSymbolIn);

protected:
  Point2dSimpleType * ReferenceLineBeginPoint;
  Point2dSimpleType * ReferenceLineEndPoint;
  FrameWeldSymbolTailType * Tail;
  WeldMainSymbolType * MainSymbol;
  WeldSupplementarySymbolType * SupplementarySymbol;
  WeldContourSymbolType * ArrowSideContourSymbol;
  WeldContourSymbolType * OtherSideContourSymbol;
};

/* ***************************************************************** */

class FramesType :
  public XmlTypeBase
{
public:
  FramesType();
  FramesType(
    FrameBaseTypeLisd * FrameIn);
  FramesType(
    NaturalType * nIn,
    FrameBaseTypeLisd * FrameIn);
  ~FramesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FrameBaseTypeLisd * getFrame();
  void setFrame(FrameBaseTypeLisd *);

protected:
  NaturalType * n;
  FrameBaseTypeLisd * Frame;
};

/* ***************************************************************** */

class GraphicsType :
  public XmlTypeBase
{
public:
  GraphicsType();
  GraphicsType(
    Polylines2dType * PolylinesIn,
    Areas2dType * AreasIn);
  ~GraphicsType();
  void printSelf(FILE * outFile);

  Polylines2dType * getPolylines();
  void setPolylines(Polylines2dType * PolylinesIn);
  Areas2dType * getAreas();
  void setAreas(Areas2dType * AreasIn);

protected:
  Polylines2dType * Polylines;
  Areas2dType * Areas;
};

/* ***************************************************************** */

class HatchPatternType :
  public XmlTypeBase
{
public:
  HatchPatternType();
  HatchPatternType(
    LineStyleType * LineStyleIn,
    Point2dSimpleType * FirstLineOriginIn,
    Point2dSimpleType * SecondLineOriginIn,
    AngularValueType * AngleIn,
    ColorType * ColorIn);
  ~HatchPatternType();
  void printSelf(FILE * outFile);

  LineStyleType * getLineStyle();
  void setLineStyle(LineStyleType * LineStyleIn);
  Point2dSimpleType * getFirstLineOrigin();
  void setFirstLineOrigin(Point2dSimpleType * FirstLineOriginIn);
  Point2dSimpleType * getSecondLineOrigin();
  void setSecondLineOrigin(Point2dSimpleType * SecondLineOriginIn);
  AngularValueType * getAngle();
  void setAngle(AngularValueType * AngleIn);
  ColorType * getColor();
  void setColor(ColorType * ColorIn);

protected:
  LineStyleType * LineStyle;
  Point2dSimpleType * FirstLineOrigin;
  Point2dSimpleType * SecondLineOrigin;
  AngularValueType * Angle;
  ColorType * Color;
};

/* ***************************************************************** */

class HatchPatternTypeLisd :
  public std::list<HatchPatternType *>,
  public XmlSchemaInstanceBase
{
public:
  HatchPatternTypeLisd();
  HatchPatternTypeLisd(
    HatchPatternType * aHatchPatternType);
  ~HatchPatternTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class HatchPatternsType :
  public XmlTypeBase
{
public:
  HatchPatternsType();
  HatchPatternsType(
    HatchPatternTypeLisd * PatternIn);
  HatchPatternsType(
    NaturalType * nIn,
    HatchPatternTypeLisd * PatternIn);
  ~HatchPatternsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  HatchPatternTypeLisd * getPattern();
  void setPattern(HatchPatternTypeLisd *);

protected:
  NaturalType * n;
  HatchPatternTypeLisd * Pattern;
};

/* ***************************************************************** */

class HatchStyleFormEnumType :
  public XmlString
{
public:
  HatchStyleFormEnumType();
  HatchStyleFormEnumType(
    const char * valIn);
  ~HatchStyleFormEnumType();
  bool HatchStyleFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class HatchStyleSetType :
  public XmlTypeBase
{
public:
  HatchStyleSetType();
  HatchStyleSetType(
    HatchStyleTypeLisd * HatchStyleIn);
  HatchStyleSetType(
    NaturalType * nIn,
    HatchStyleTypeLisd * HatchStyleIn);
  ~HatchStyleSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  HatchStyleTypeLisd * getHatchStyle();
  void setHatchStyle(HatchStyleTypeLisd *);

protected:
  NaturalType * n;
  HatchStyleTypeLisd * HatchStyle;
};

/* ***************************************************************** */

class HatchStyleType :
  public NodeWithIdBaseType
{
public:
  HatchStyleType();
  HatchStyleType(
    AttributesType * AttributesIn,
    HatchStyleFormEnumType * FormIn,
    ColorType * ColorIn,
    HatchPatternsType * PatternsIn);
  HatchStyleType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    HatchStyleFormEnumType * FormIn,
    ColorType * ColorIn,
    HatchPatternsType * PatternsIn);
  ~HatchStyleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  HatchStyleFormEnumType * getForm();
  void setForm(HatchStyleFormEnumType * FormIn);
  ColorType * getColor();
  void setColor(ColorType * ColorIn);
  HatchPatternsType * getPatterns();
  void setPatterns(HatchPatternsType * PatternsIn);

protected:
  HatchStyleFormEnumType * Form;
  ColorType * Color;
  HatchPatternsType * Patterns;
};

/* ***************************************************************** */

class HatchStyleTypeLisd :
  public std::list<HatchStyleType *>,
  public XmlSchemaInstanceBase
{
public:
  HatchStyleTypeLisd();
  HatchStyleTypeLisd(
    HatchStyleType * aHatchStyleType);
  ~HatchStyleTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LeaderHeadFormEnumType :
  public XmlString
{
public:
  LeaderHeadFormEnumType();
  LeaderHeadFormEnumType(
    const char * valIn);
  ~LeaderHeadFormEnumType();
  bool LeaderHeadFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LeaderHeadFormType :
  public LeaderHeadFormEnumType
{
public:
  LeaderHeadFormType();
  LeaderHeadFormType(
    const char * valStringIn);
  LeaderHeadFormType(
    D3Type * normalIn,
    const char * valStringIn);
  ~LeaderHeadFormType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool LeaderHeadFormTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);

  D3Type * getnormal();
  void setnormal(D3Type * normalIn);

protected:
  D3Type * normal;
};

/* ***************************************************************** */

class LeaderModifierEnumType :
  public XmlString
{
public:
  LeaderModifierEnumType();
  LeaderModifierEnumType(
    const char * valIn);
  ~LeaderModifierEnumType();
  bool LeaderModifierEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LeaderType :
  public LineSegment2dType
{
public:
  LeaderType();
  LeaderType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn,
    LeaderHeadFormType * HeadFormIn,
    XmlDouble * HeadHeightIn);
  ~LeaderType();
  void printSelf(FILE * outFile);

  LeaderHeadFormType * getHeadForm();
  void setHeadForm(LeaderHeadFormType * HeadFormIn);
  XmlDouble * getHeadHeight();
  void setHeadHeight(XmlDouble * HeadHeightIn);

protected:
  LeaderHeadFormType * HeadForm;
  XmlDouble * HeadHeight;
};

/* ***************************************************************** */

class LeaderTypeLisd :
  public std::list<LeaderType *>,
  public XmlSchemaInstanceBase
{
public:
  LeaderTypeLisd();
  LeaderTypeLisd(
    LeaderType * aLeaderType);
  ~LeaderTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LogicalOperationEnumType :
  public XmlString
{
public:
  LogicalOperationEnumType();
  LogicalOperationEnumType(
    const char * valIn);
  ~LogicalOperationEnumType();
  bool LogicalOperationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LogicalOperationType :
  public XmlTypeBase
{
public:
  LogicalOperationType();
  LogicalOperationType(
    LogicalOperationEnumType * ActionIn,
    LogicalOperatio_1232_Type * LogicalOperatio_1232In);
  LogicalOperationType(
    XmlUnsignedInt * indexIn,
    LogicalOperationEnumType * ActionIn,
    LogicalOperatio_1232_Type * LogicalOperatio_1232In);
  ~LogicalOperationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlUnsignedInt * getindex();
  void setindex(XmlUnsignedInt * indexIn);

  LogicalOperationEnumType * getAction();
  void setAction(LogicalOperationEnumType * ActionIn);
  LogicalOperatio_1232_Type * getLogicalOperatio_1232();
  void setLogicalOperatio_1232(LogicalOperatio_1232_Type * LogicalOperatio_1232In);

protected:
  XmlUnsignedInt * index;
  LogicalOperationEnumType * Action;
  LogicalOperatio_1232_Type * LogicalOperatio_1232;
};

/* ***************************************************************** */

class LogicalOperationTypeLisd :
  public std::list<LogicalOperationType *>,
  public XmlSchemaInstanceBase
{
public:
  LogicalOperationTypeLisd();
  LogicalOperationTypeLisd(
    LogicalOperationType * aLogicalOperationType);
  ~LogicalOperationTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LogicalOperationsType :
  public XmlTypeBase
{
public:
  LogicalOperationsType();
  LogicalOperationsType(
    LogicalOperationTypeLisd * LogicalOperationIn);
  LogicalOperationsType(
    NaturalType * nIn,
    LogicalOperationTypeLisd * LogicalOperationIn);
  ~LogicalOperationsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  LogicalOperationTypeLisd * getLogicalOperation();
  void setLogicalOperation(LogicalOperationTypeLisd *);

protected:
  NaturalType * n;
  LogicalOperationTypeLisd * LogicalOperation;
};

/* ***************************************************************** */

class Loops2dType :
  public XmlTypeBase
{
public:
  Loops2dType();
  Loops2dType(
    Polyline2dTypeLisd * LoopIn);
  Loops2dType(
    NaturalType * nIn,
    Polyline2dTypeLisd * LoopIn);
  ~Loops2dType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  Polyline2dTypeLisd * getLoop();
  void setLoop(Polyline2dTypeLisd *);

protected:
  NaturalType * n;
  Polyline2dTypeLisd * Loop;
};

/* ***************************************************************** */

class OriginType :
  public XmlTypeBase
{
public:
  OriginType();
  OriginType(
    Point2dSimpleType * OriginIn);
  ~OriginType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getOrigin();
  void setOrigin(Point2dSimpleType * OriginIn);

protected:
  Point2dSimpleType * Origin;
};

/* ***************************************************************** */

class PMIDisplaySetType :
  public XmlTypeBase
{
public:
  PMIDisplaySetType();
  PMIDisplaySetType(
    PMIDisplayTypeLisd * PMIDisplayIn);
  PMIDisplaySetType(
    NaturalType * nIn,
    PMIDisplayTypeLisd * PMIDisplayIn);
  ~PMIDisplaySetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PMIDisplayTypeLisd * getPMIDisplay();
  void setPMIDisplay(PMIDisplayTypeLisd *);

protected:
  NaturalType * n;
  PMIDisplayTypeLisd * PMIDisplay;
};

/* ***************************************************************** */

class PMIDisplayType :
  public XmlTypeBase
{
public:
  PMIDisplayType();
  PMIDisplayType(
    AttributesType * AttributesIn,
    ColorType * ColorIn,
    PlanePMIDisplayType * PlaneIn,
    TextsType * TextsIn,
    LeaderTypeLisd * LeaderIn,
    WitnessLinesType * WitnessLinesIn,
    FramesType * FramesIn,
    GraphicsType * GraphicsIn,
    ElementReferenceFullType * ReferenceIn,
    I2Type * GroupIDIn);
  ~PMIDisplayType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  ColorType * getColor();
  void setColor(ColorType * ColorIn);
  PlanePMIDisplayType * getPlane();
  void setPlane(PlanePMIDisplayType * PlaneIn);
  TextsType * getTexts();
  void setTexts(TextsType * TextsIn);
  LeaderTypeLisd * getLeader();
  void setLeader(LeaderTypeLisd *);
  WitnessLinesType * getWitnessLines();
  void setWitnessLines(WitnessLinesType * WitnessLinesIn);
  FramesType * getFrames();
  void setFrames(FramesType * FramesIn);
  GraphicsType * getGraphics();
  void setGraphics(GraphicsType * GraphicsIn);
  ElementReferenceFullType * getReference();
  void setReference(ElementReferenceFullType * ReferenceIn);
  I2Type * getGroupID();
  void setGroupID(I2Type * GroupIDIn);

protected:
  AttributesType * Attributes;
  ColorType * Color;
  PlanePMIDisplayType * Plane;
  TextsType * Texts;
  LeaderTypeLisd * Leader;
  WitnessLinesType * WitnessLines;
  FramesType * Frames;
  GraphicsType * Graphics;
  ElementReferenceFullType * Reference;
  I2Type * GroupID;
};

/* ***************************************************************** */

class PMIDisplayTypeLisd :
  public std::list<PMIDisplayType *>,
  public XmlSchemaInstanceBase
{
public:
  PMIDisplayTypeLisd();
  PMIDisplayTypeLisd(
    PMIDisplayType * aPMIDisplayType);
  ~PMIDisplayTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PlanePMIDisplayType :
  public XmlTypeBase
{
public:
  PlanePMIDisplayType();
  PlanePMIDisplayType(
    ElementReferenceType * AnnotationViewIdIn,
    PointType * OriginIn,
    UnitVectorType * DirectionIn);
  ~PlanePMIDisplayType();
  void printSelf(FILE * outFile);

  ElementReferenceType * getAnnotationViewId();
  void setAnnotationViewId(ElementReferenceType * AnnotationViewIdIn);
  PointType * getOrigin();
  void setOrigin(PointType * OriginIn);
  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);

protected:
  ElementReferenceType * AnnotationViewId;
  PointType * Origin;
  UnitVectorType * Direction;
};

/* ***************************************************************** */

class Polyline2dType :
  public XmlTypeBase
{
public:
  Polyline2dType();
  Polyline2dType(
    Polyline2dType_1233_Type * Polyline2dType_1233In);
  Polyline2dType(
    ColorType * colorIn,
    Polyline2dType_1233_Type * Polyline2dType_1233In);
  ~Polyline2dType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ColorType * getcolor();
  void setcolor(ColorType * colorIn);

  Polyline2dType_1233_Type * getPolyline2dType_1233();
  void setPolyline2dType_1233(Polyline2dType_1233_Type * Polyline2dType_1233In);

protected:
  ColorType * color;
  Polyline2dType_1233_Type * Polyline2dType_1233;
};

/* ***************************************************************** */

class Polyline2dTypeLisd :
  public std::list<Polyline2dType *>,
  public XmlSchemaInstanceBase
{
public:
  Polyline2dTypeLisd();
  Polyline2dTypeLisd(
    Polyline2dType * aPolyline2dType);
  ~Polyline2dTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Polylines2dType :
  public XmlTypeBase
{
public:
  Polylines2dType();
  Polylines2dType(
    Polyline2dTypeLisd * PolylineIn);
  Polylines2dType(
    NaturalType * nIn,
    Polyline2dTypeLisd * PolylineIn);
  ~Polylines2dType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  Polyline2dTypeLisd * getPolyline();
  void setPolyline(Polyline2dTypeLisd *);

protected:
  NaturalType * n;
  Polyline2dTypeLisd * Polyline;
};

/* ***************************************************************** */

class SavedViewSetType :
  public XmlTypeBase
{
public:
  SavedViewSetType();
  SavedViewSetType(
    SavedViewTypeLisd * SavedViewIn);
  SavedViewSetType(
    NaturalType * nIn,
    SavedViewTypeLisd * SavedViewIn);
  ~SavedViewSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SavedViewTypeLisd * getSavedView();
  void setSavedView(SavedViewTypeLisd *);

protected:
  NaturalType * n;
  SavedViewTypeLisd * SavedView;
};

/* ***************************************************************** */

class SavedViewType :
  public NodeWithIdBaseType
{
public:
  SavedViewType();
  SavedViewType(
    AttributesType * AttributesIn,
    XmlBoolean * ActiveViewIn,
    ArrayReferenceFullType * AnnotationVisibleIdsIn,
    ArrayReferenceFullType * AnnotationHiddenIdsIn,
    ArrayReferenceFullType * BodyIdsIn,
    ArrayReferenceFullType * ComponentIdsIn,
    QIFReferenceActiveType * SimplifiedRepresentationIdIn,
    QIFReferenceActiveType * ExplodedViewIdIn,
    QIFReferenceActiveType * DisplayStyleIdIn,
    QIFReferenceActiveType * ZoneSectionIdIn,
    ArrayReferenceActiveType * CameraIdsIn);
  SavedViewType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * ActiveViewIn,
    ArrayReferenceFullType * AnnotationVisibleIdsIn,
    ArrayReferenceFullType * AnnotationHiddenIdsIn,
    ArrayReferenceFullType * BodyIdsIn,
    ArrayReferenceFullType * ComponentIdsIn,
    QIFReferenceActiveType * SimplifiedRepresentationIdIn,
    QIFReferenceActiveType * ExplodedViewIdIn,
    QIFReferenceActiveType * DisplayStyleIdIn,
    QIFReferenceActiveType * ZoneSectionIdIn,
    ArrayReferenceActiveType * CameraIdsIn);
  ~SavedViewType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getActiveView();
  void setActiveView(XmlBoolean * ActiveViewIn);
  ArrayReferenceFullType * getAnnotationVisibleIds();
  void setAnnotationVisibleIds(ArrayReferenceFullType * AnnotationVisibleIdsIn);
  ArrayReferenceFullType * getAnnotationHiddenIds();
  void setAnnotationHiddenIds(ArrayReferenceFullType * AnnotationHiddenIdsIn);
  ArrayReferenceFullType * getBodyIds();
  void setBodyIds(ArrayReferenceFullType * BodyIdsIn);
  ArrayReferenceFullType * getComponentIds();
  void setComponentIds(ArrayReferenceFullType * ComponentIdsIn);
  QIFReferenceActiveType * getSimplifiedRepresentationId();
  void setSimplifiedRepresentationId(QIFReferenceActiveType * SimplifiedRepresentationIdIn);
  QIFReferenceActiveType * getExplodedViewId();
  void setExplodedViewId(QIFReferenceActiveType * ExplodedViewIdIn);
  QIFReferenceActiveType * getDisplayStyleId();
  void setDisplayStyleId(QIFReferenceActiveType * DisplayStyleIdIn);
  QIFReferenceActiveType * getZoneSectionId();
  void setZoneSectionId(QIFReferenceActiveType * ZoneSectionIdIn);
  ArrayReferenceActiveType * getCameraIds();
  void setCameraIds(ArrayReferenceActiveType * CameraIdsIn);

protected:
  XmlBoolean * ActiveView;
  ArrayReferenceFullType * AnnotationVisibleIds;
  ArrayReferenceFullType * AnnotationHiddenIds;
  ArrayReferenceFullType * BodyIds;
  ArrayReferenceFullType * ComponentIds;
  QIFReferenceActiveType * SimplifiedRepresentationId;
  QIFReferenceActiveType * ExplodedViewId;
  QIFReferenceActiveType * DisplayStyleId;
  QIFReferenceActiveType * ZoneSectionId;
  ArrayReferenceActiveType * CameraIds;
};

/* ***************************************************************** */

class SavedViewTypeLisd :
  public std::list<SavedViewType *>,
  public XmlSchemaInstanceBase
{
public:
  SavedViewTypeLisd();
  SavedViewTypeLisd(
    SavedViewType * aSavedViewType);
  ~SavedViewTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SectionAreaType :
  public XmlTypeBase
{
public:
  SectionAreaType();
  SectionAreaType(
    QIFReferenceType * HatchStyleIdIn,
    SectionLoopsType * LoopsIn);
  ~SectionAreaType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getHatchStyleId();
  void setHatchStyleId(QIFReferenceType * HatchStyleIdIn);
  SectionLoopsType * getLoops();
  void setLoops(SectionLoopsType * LoopsIn);

protected:
  QIFReferenceType * HatchStyleId;
  SectionLoopsType * Loops;
};

/* ***************************************************************** */

class SectionAreaTypeLisd :
  public std::list<SectionAreaType *>,
  public XmlSchemaInstanceBase
{
public:
  SectionAreaTypeLisd();
  SectionAreaTypeLisd(
    SectionAreaType * aSectionAreaType);
  ~SectionAreaTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SectionAreasType :
  public XmlTypeBase
{
public:
  SectionAreasType();
  SectionAreasType(
    SectionAreaTypeLisd * AreaIn);
  SectionAreasType(
    NaturalType * nIn,
    SectionAreaTypeLisd * AreaIn);
  ~SectionAreasType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SectionAreaTypeLisd * getArea();
  void setArea(SectionAreaTypeLisd *);

protected:
  NaturalType * n;
  SectionAreaTypeLisd * Area;
};

/* ***************************************************************** */

class SectionEdgesType :
  public XmlTypeBase
{
public:
  SectionEdgesType();
  SectionEdgesType(
    EdgeOrientedTypeLisd * EdgeIn);
  SectionEdgesType(
    NaturalType * nIn,
    EdgeOrientedTypeLisd * EdgeIn);
  ~SectionEdgesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  EdgeOrientedTypeLisd * getEdge();
  void setEdge(EdgeOrientedTypeLisd *);

protected:
  NaturalType * n;
  EdgeOrientedTypeLisd * Edge;
};

/* ***************************************************************** */

class SectionGroupType :
  public XmlTypeBase
{
public:
  SectionGroupType();
  SectionGroupType(
    QIFReferenceFullType * BodyIdIn,
    SectionAreasType * AreasIn,
    SectionPathsType * PathsIn,
    ArrayReferenceType * VerticesIn);
  ~SectionGroupType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getBodyId();
  void setBodyId(QIFReferenceFullType * BodyIdIn);
  SectionAreasType * getAreas();
  void setAreas(SectionAreasType * AreasIn);
  SectionPathsType * getPaths();
  void setPaths(SectionPathsType * PathsIn);
  ArrayReferenceType * getVertices();
  void setVertices(ArrayReferenceType * VerticesIn);

protected:
  QIFReferenceFullType * BodyId;
  SectionAreasType * Areas;
  SectionPathsType * Paths;
  ArrayReferenceType * Vertices;
};

/* ***************************************************************** */

class SectionGroupTypeLisd :
  public std::list<SectionGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  SectionGroupTypeLisd();
  SectionGroupTypeLisd(
    SectionGroupType * aSectionGroupType);
  ~SectionGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SectionGroupsType :
  public XmlTypeBase
{
public:
  SectionGroupsType();
  SectionGroupsType(
    SectionGroupTypeLisd * SectionGroupIn);
  SectionGroupsType(
    NaturalType * nIn,
    SectionGroupTypeLisd * SectionGroupIn);
  ~SectionGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SectionGroupTypeLisd * getSectionGroup();
  void setSectionGroup(SectionGroupTypeLisd *);

protected:
  NaturalType * n;
  SectionGroupTypeLisd * SectionGroup;
};

/* ***************************************************************** */

class SectionLoopsType :
  public XmlTypeBase
{
public:
  SectionLoopsType();
  SectionLoopsType(
    SectionPathTypeLisd * LoopIn);
  SectionLoopsType(
    NaturalType * nIn,
    SectionPathTypeLisd * LoopIn);
  ~SectionLoopsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SectionPathTypeLisd * getLoop();
  void setLoop(SectionPathTypeLisd *);

protected:
  NaturalType * n;
  SectionPathTypeLisd * Loop;
};

/* ***************************************************************** */

class SectionPathType :
  public XmlTypeBase
{
public:
  SectionPathType();
  SectionPathType(
    SectionEdgesType * EdgesIn);
  ~SectionPathType();
  void printSelf(FILE * outFile);

  SectionEdgesType * getEdges();
  void setEdges(SectionEdgesType * EdgesIn);

protected:
  SectionEdgesType * Edges;
};

/* ***************************************************************** */

class SectionPathTypeLisd :
  public std::list<SectionPathType *>,
  public XmlSchemaInstanceBase
{
public:
  SectionPathTypeLisd();
  SectionPathTypeLisd(
    SectionPathType * aSectionPathType);
  ~SectionPathTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SectionPathsType :
  public XmlTypeBase
{
public:
  SectionPathsType();
  SectionPathsType(
    SectionPathTypeLisd * PathIn);
  SectionPathsType(
    NaturalType * nIn,
    SectionPathTypeLisd * PathIn);
  ~SectionPathsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SectionPathTypeLisd * getPath();
  void setPath(SectionPathTypeLisd *);

protected:
  NaturalType * n;
  SectionPathTypeLisd * Path;
};

/* ***************************************************************** */

class SimplifiedRepresentationFormEnumType :
  public XmlString
{
public:
  SimplifiedRepresentationFormEnumType();
  SimplifiedRepresentationFormEnumType(
    const char * valIn);
  ~SimplifiedRepresentationFormEnumType();
  bool SimplifiedRepresentationFormEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SimplifiedRepresentationGroupType :
  public XmlTypeBase
{
public:
  SimplifiedRepresentationGroupType();
  SimplifiedRepresentationGroupType(
    SimplifiedRepresentationFormEnumType * FormIn,
    ArrayReferenceFullType * ComponentIdsIn,
    ArrayReferenceFullType * BodyIdsIn);
  ~SimplifiedRepresentationGroupType();
  void printSelf(FILE * outFile);

  SimplifiedRepresentationFormEnumType * getForm();
  void setForm(SimplifiedRepresentationFormEnumType * FormIn);
  ArrayReferenceFullType * getComponentIds();
  void setComponentIds(ArrayReferenceFullType * ComponentIdsIn);
  ArrayReferenceFullType * getBodyIds();
  void setBodyIds(ArrayReferenceFullType * BodyIdsIn);

protected:
  SimplifiedRepresentationFormEnumType * Form;
  ArrayReferenceFullType * ComponentIds;
  ArrayReferenceFullType * BodyIds;
};

/* ***************************************************************** */

class SimplifiedRepresentationGroupTypeLisd :
  public std::list<SimplifiedRepresentationGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  SimplifiedRepresentationGroupTypeLisd();
  SimplifiedRepresentationGroupTypeLisd(
    SimplifiedRepresentationGroupType * aSimplifiedRepresentationGroupType);
  ~SimplifiedRepresentationGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SimplifiedRepresentationGroupsType :
  public XmlTypeBase
{
public:
  SimplifiedRepresentationGroupsType();
  SimplifiedRepresentationGroupsType(
    SimplifiedRepresentationGroupTypeLisd * SimplifiedRepresentationGroupIn);
  SimplifiedRepresentationGroupsType(
    NaturalType * nIn,
    SimplifiedRepresentationGroupTypeLisd * SimplifiedRepresentationGroupIn);
  ~SimplifiedRepresentationGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SimplifiedRepresentationGroupTypeLisd * getSimplifiedRepresentationGroup();
  void setSimplifiedRepresentationGroup(SimplifiedRepresentationGroupTypeLisd *);

protected:
  NaturalType * n;
  SimplifiedRepresentationGroupTypeLisd * SimplifiedRepresentationGroup;
};

/* ***************************************************************** */

class SimplifiedRepresentationSetType :
  public XmlTypeBase
{
public:
  SimplifiedRepresentationSetType();
  SimplifiedRepresentationSetType(
    SimplifiedRepresentationTypeLisd * SimplifiedRepresentationIn);
  SimplifiedRepresentationSetType(
    NaturalType * nIn,
    SimplifiedRepresentationTypeLisd * SimplifiedRepresentationIn);
  ~SimplifiedRepresentationSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SimplifiedRepresentationTypeLisd * getSimplifiedRepresentation();
  void setSimplifiedRepresentation(SimplifiedRepresentationTypeLisd *);

protected:
  NaturalType * n;
  SimplifiedRepresentationTypeLisd * SimplifiedRepresentation;
};

/* ***************************************************************** */

class SimplifiedRepresentationType :
  public NodeWithIdBaseType
{
public:
  SimplifiedRepresentationType();
  SimplifiedRepresentationType(
    AttributesType * AttributesIn,
    SimplifiedRepresentationFormEnumType * FormIn,
    SimplifiedRepresentationGroupsType * SimplifiedRepresentationGroupsIn);
  SimplifiedRepresentationType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    SimplifiedRepresentationFormEnumType * FormIn,
    SimplifiedRepresentationGroupsType * SimplifiedRepresentationGroupsIn);
  ~SimplifiedRepresentationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SimplifiedRepresentationFormEnumType * getForm();
  void setForm(SimplifiedRepresentationFormEnumType * FormIn);
  SimplifiedRepresentationGroupsType * getSimplifiedRepresentationGroups();
  void setSimplifiedRepresentationGroups(SimplifiedRepresentationGroupsType * SimplifiedRepresentationGroupsIn);

protected:
  SimplifiedRepresentationFormEnumType * Form;
  SimplifiedRepresentationGroupsType * SimplifiedRepresentationGroups;
};

/* ***************************************************************** */

class SimplifiedRepresentationTypeLisd :
  public std::list<SimplifiedRepresentationType *>,
  public XmlSchemaInstanceBase
{
public:
  SimplifiedRepresentationTypeLisd();
  SimplifiedRepresentationTypeLisd(
    SimplifiedRepresentationType * aSimplifiedRepresentationType);
  ~SimplifiedRepresentationTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TextType :
  public XmlTypeBase
{
public:
  TextType();
  TextType(
    XmlString * DataIn,
    Point2dSimpleType * XYIn);
  ~TextType();
  void printSelf(FILE * outFile);

  XmlString * getData();
  void setData(XmlString * DataIn);
  Point2dSimpleType * getXY();
  void setXY(Point2dSimpleType * XYIn);

protected:
  XmlString * Data;
  Point2dSimpleType * XY;
};

/* ***************************************************************** */

class TextTypeLisd :
  public std::list<TextType *>,
  public XmlSchemaInstanceBase
{
public:
  TextTypeLisd();
  TextTypeLisd(
    TextType * aTextType);
  ~TextTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TextsType :
  public XmlTypeBase
{
public:
  TextsType();
  TextsType(
    TextTypeLisd * TextIn);
  TextsType(
    XmlUnsignedInt * fontIndexIn,
    XmlDouble * lineHeightIn,
    NaturalType * nIn,
    TextTypeLisd * TextIn);
  ~TextsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlUnsignedInt * getfontIndex();
  void setfontIndex(XmlUnsignedInt * fontIndexIn);
  XmlDouble * getlineHeight();
  void setlineHeight(XmlDouble * lineHeightIn);
  NaturalType * getn();
  void setn(NaturalType * nIn);

  TextTypeLisd * getText();
  void setText(TextTypeLisd *);

protected:
  XmlUnsignedInt * fontIndex;
  XmlDouble * lineHeight;
  NaturalType * n;
  TextTypeLisd * Text;
};

/* ***************************************************************** */

class TrailingZeroDimensionalCharacteristicDisplayGroupType :
  public XmlTypeBase
{
public:
  TrailingZeroDimensionalCharacteristicDisplayGroupType();
  TrailingZeroDimensionalCharacteristicDisplayGroupType(
    XmlBoolean * DimensionalCharacteristicValueTargetIn,
    XmlBoolean * DimensionalCharacteristicValueLimitsIn,
    ArrayReferenceFullType * DimensionalCharacteristicIdsIn);
  ~TrailingZeroDimensionalCharacteristicDisplayGroupType();
  void printSelf(FILE * outFile);

  XmlBoolean * getDimensionalCharacteristicValueTarget();
  void setDimensionalCharacteristicValueTarget(XmlBoolean * DimensionalCharacteristicValueTargetIn);
  XmlBoolean * getDimensionalCharacteristicValueLimits();
  void setDimensionalCharacteristicValueLimits(XmlBoolean * DimensionalCharacteristicValueLimitsIn);
  ArrayReferenceFullType * getDimensionalCharacteristicIds();
  void setDimensionalCharacteristicIds(ArrayReferenceFullType * DimensionalCharacteristicIdsIn);

protected:
  XmlBoolean * DimensionalCharacteristicValueTarget;
  XmlBoolean * DimensionalCharacteristicValueLimits;
  ArrayReferenceFullType * DimensionalCharacteristicIds;
};

/* ***************************************************************** */

class TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd :
  public std::list<TrailingZeroDimensionalCharacteristicDisplayGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd();
  TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd(
    TrailingZeroDimensionalCharacteristicDisplayGroupType * aTrailingZeroDimensionalCharacteristicDisplayGroupType);
  ~TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TrailingZeroDimensionalCharacteristicDisplayGroupsType :
  public XmlTypeBase
{
public:
  TrailingZeroDimensionalCharacteristicDisplayGroupsType();
  TrailingZeroDimensionalCharacteristicDisplayGroupsType(
    TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * TrailingZeroDimensionalCharacteristicDisplayGroupIn);
  TrailingZeroDimensionalCharacteristicDisplayGroupsType(
    NaturalType * nIn,
    TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * TrailingZeroDimensionalCharacteristicDisplayGroupIn);
  ~TrailingZeroDimensionalCharacteristicDisplayGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * getTrailingZeroDimensionalCharacteristicDisplayGroup();
  void setTrailingZeroDimensionalCharacteristicDisplayGroup(TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd *);

protected:
  NaturalType * n;
  TrailingZeroDimensionalCharacteristicDisplayGroupTypeLisd * TrailingZeroDimensionalCharacteristicDisplayGroup;
};

/* ***************************************************************** */

class TrailingZeroDisplayType :
  public XmlTypeBase
{
public:
  TrailingZeroDisplayType();
  TrailingZeroDisplayType(
    XmlBoolean * DimensionalCharacteristicValueTargetIn,
    XmlBoolean * DimensionalCharacteristicValueLimitsIn,
    XmlBoolean * GeometricCharacteristicValueIn,
    TrailingZeroDimensionalCharacteristicDisplayGroupsType * TrailingZeroDimensionalCharacteristicDisplayGroupsIn,
    TrailingZeroGeometricCharacteristicDisplayGroupsType * TrailingZeroGeometricCharacteristicDisplayGroupsIn);
  ~TrailingZeroDisplayType();
  void printSelf(FILE * outFile);

  XmlBoolean * getDimensionalCharacteristicValueTarget();
  void setDimensionalCharacteristicValueTarget(XmlBoolean * DimensionalCharacteristicValueTargetIn);
  XmlBoolean * getDimensionalCharacteristicValueLimits();
  void setDimensionalCharacteristicValueLimits(XmlBoolean * DimensionalCharacteristicValueLimitsIn);
  XmlBoolean * getGeometricCharacteristicValue();
  void setGeometricCharacteristicValue(XmlBoolean * GeometricCharacteristicValueIn);
  TrailingZeroDimensionalCharacteristicDisplayGroupsType * getTrailingZeroDimensionalCharacteristicDisplayGroups();
  void setTrailingZeroDimensionalCharacteristicDisplayGroups(TrailingZeroDimensionalCharacteristicDisplayGroupsType * TrailingZeroDimensionalCharacteristicDisplayGroupsIn);
  TrailingZeroGeometricCharacteristicDisplayGroupsType * getTrailingZeroGeometricCharacteristicDisplayGroups();
  void setTrailingZeroGeometricCharacteristicDisplayGroups(TrailingZeroGeometricCharacteristicDisplayGroupsType * TrailingZeroGeometricCharacteristicDisplayGroupsIn);

protected:
  XmlBoolean * DimensionalCharacteristicValueTarget;
  XmlBoolean * DimensionalCharacteristicValueLimits;
  XmlBoolean * GeometricCharacteristicValue;
  TrailingZeroDimensionalCharacteristicDisplayGroupsType * TrailingZeroDimensionalCharacteristicDisplayGroups;
  TrailingZeroGeometricCharacteristicDisplayGroupsType * TrailingZeroGeometricCharacteristicDisplayGroups;
};

/* ***************************************************************** */

class TrailingZeroGeometricCharacteristicDisplayGroupType :
  public XmlTypeBase
{
public:
  TrailingZeroGeometricCharacteristicDisplayGroupType();
  TrailingZeroGeometricCharacteristicDisplayGroupType(
    XmlBoolean * GeometricCharacteristicValueIn,
    ArrayReferenceFullType * GeometricCharacteristicIdsIn);
  ~TrailingZeroGeometricCharacteristicDisplayGroupType();
  void printSelf(FILE * outFile);

  XmlBoolean * getGeometricCharacteristicValue();
  void setGeometricCharacteristicValue(XmlBoolean * GeometricCharacteristicValueIn);
  ArrayReferenceFullType * getGeometricCharacteristicIds();
  void setGeometricCharacteristicIds(ArrayReferenceFullType * GeometricCharacteristicIdsIn);

protected:
  XmlBoolean * GeometricCharacteristicValue;
  ArrayReferenceFullType * GeometricCharacteristicIds;
};

/* ***************************************************************** */

class TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd :
  public std::list<TrailingZeroGeometricCharacteristicDisplayGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd();
  TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd(
    TrailingZeroGeometricCharacteristicDisplayGroupType * aTrailingZeroGeometricCharacteristicDisplayGroupType);
  ~TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TrailingZeroGeometricCharacteristicDisplayGroupsType :
  public XmlTypeBase
{
public:
  TrailingZeroGeometricCharacteristicDisplayGroupsType();
  TrailingZeroGeometricCharacteristicDisplayGroupsType(
    TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * TrailingZeroGeometricCharacteristicDisplayGroupIn);
  TrailingZeroGeometricCharacteristicDisplayGroupsType(
    NaturalType * nIn,
    TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * TrailingZeroGeometricCharacteristicDisplayGroupIn);
  ~TrailingZeroGeometricCharacteristicDisplayGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * getTrailingZeroGeometricCharacteristicDisplayGroup();
  void setTrailingZeroGeometricCharacteristicDisplayGroup(TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd *);

protected:
  NaturalType * n;
  TrailingZeroGeometricCharacteristicDisplayGroupTypeLisd * TrailingZeroGeometricCharacteristicDisplayGroup;
};

/* ***************************************************************** */

class Triangulation2dType :
  public XmlTypeBase
{
public:
  Triangulation2dType();
  Triangulation2dType(
    Triangulation2d_1234_Type * Triangulation2d_1234In,
    Triangulation2d_1235_Type * Triangulation2d_1235In);
  ~Triangulation2dType();
  void printSelf(FILE * outFile);

  Triangulation2d_1234_Type * getTriangulation2d_1234();
  void setTriangulation2d_1234(Triangulation2d_1234_Type * Triangulation2d_1234In);
  Triangulation2d_1235_Type * getTriangulation2d_1235();
  void setTriangulation2d_1235(Triangulation2d_1235_Type * Triangulation2d_1235In);

protected:
  Triangulation2d_1234_Type * Triangulation2d_1234;
  Triangulation2d_1235_Type * Triangulation2d_1235;
};

/* ***************************************************************** */

class ViewSetType :
  public XmlTypeBase
{
public:
  ViewSetType();
  ViewSetType(
    CameraSetType * CameraSetIn,
    SavedViewSetType * SavedViewSetIn,
    AnnotationViewSetType * AnnotationViewSetIn,
    SimplifiedRepresentationSetType * SimplifiedRepresentationSetIn,
    ExplodedViewSetType * ExplodedViewSetIn,
    DisplayStyleSetType * DisplayStyleSetIn,
    ZoneSectionSetType * ZoneSectionSetIn,
    HatchStyleSetType * HatchStyleSetIn);
  ~ViewSetType();
  void printSelf(FILE * outFile);

  CameraSetType * getCameraSet();
  void setCameraSet(CameraSetType * CameraSetIn);
  SavedViewSetType * getSavedViewSet();
  void setSavedViewSet(SavedViewSetType * SavedViewSetIn);
  AnnotationViewSetType * getAnnotationViewSet();
  void setAnnotationViewSet(AnnotationViewSetType * AnnotationViewSetIn);
  SimplifiedRepresentationSetType * getSimplifiedRepresentationSet();
  void setSimplifiedRepresentationSet(SimplifiedRepresentationSetType * SimplifiedRepresentationSetIn);
  ExplodedViewSetType * getExplodedViewSet();
  void setExplodedViewSet(ExplodedViewSetType * ExplodedViewSetIn);
  DisplayStyleSetType * getDisplayStyleSet();
  void setDisplayStyleSet(DisplayStyleSetType * DisplayStyleSetIn);
  ZoneSectionSetType * getZoneSectionSet();
  void setZoneSectionSet(ZoneSectionSetType * ZoneSectionSetIn);
  HatchStyleSetType * getHatchStyleSet();
  void setHatchStyleSet(HatchStyleSetType * HatchStyleSetIn);

protected:
  CameraSetType * CameraSet;
  SavedViewSetType * SavedViewSet;
  AnnotationViewSetType * AnnotationViewSet;
  SimplifiedRepresentationSetType * SimplifiedRepresentationSet;
  ExplodedViewSetType * ExplodedViewSet;
  DisplayStyleSetType * DisplayStyleSet;
  ZoneSectionSetType * ZoneSectionSet;
  HatchStyleSetType * HatchStyleSet;
};

/* ***************************************************************** */

class VisualizationSetType :
  public XmlTypeBase
{
public:
  VisualizationSetType();
  VisualizationSetType(
    FontsType * FontsIn,
    TrailingZeroDisplayType * TrailingZeroDisplayIn,
    PMIDisplaySetType * PMIDisplaySetIn);
  ~VisualizationSetType();
  void printSelf(FILE * outFile);

  FontsType * getFonts();
  void setFonts(FontsType * FontsIn);
  TrailingZeroDisplayType * getTrailingZeroDisplay();
  void setTrailingZeroDisplay(TrailingZeroDisplayType * TrailingZeroDisplayIn);
  PMIDisplaySetType * getPMIDisplaySet();
  void setPMIDisplaySet(PMIDisplaySetType * PMIDisplaySetIn);

protected:
  FontsType * Fonts;
  TrailingZeroDisplayType * TrailingZeroDisplay;
  PMIDisplaySetType * PMIDisplaySet;
};

/* ***************************************************************** */

class WeldContourSymbolType :
  public OriginType
{
public:
  WeldContourSymbolType();
  WeldContourSymbolType(
    Point2dSimpleType * OriginIn,
    WeldContourSymbolEnumType * SymbolIn);
  ~WeldContourSymbolType();
  void printSelf(FILE * outFile);

  WeldContourSymbolEnumType * getSymbol();
  void setSymbol(WeldContourSymbolEnumType * SymbolIn);

protected:
  WeldContourSymbolEnumType * Symbol;
};

/* ***************************************************************** */

class WeldMainSymbolEnumType :
  public XmlString
{
public:
  WeldMainSymbolEnumType();
  WeldMainSymbolEnumType(
    const char * valIn);
  ~WeldMainSymbolEnumType();
  bool WeldMainSymbolEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class WeldMainSymbolType :
  public OriginType
{
public:
  WeldMainSymbolType();
  WeldMainSymbolType(
    Point2dSimpleType * OriginIn,
    WeldMainSymbolEnumType * SymbolIn);
  ~WeldMainSymbolType();
  void printSelf(FILE * outFile);

  WeldMainSymbolEnumType * getSymbol();
  void setSymbol(WeldMainSymbolEnumType * SymbolIn);

protected:
  WeldMainSymbolEnumType * Symbol;
};

/* ***************************************************************** */

class WeldSupplementarySymbolType :
  public OriginType
{
public:
  WeldSupplementarySymbolType();
  WeldSupplementarySymbolType(
    Point2dSimpleType * OriginIn,
    WeldSupplementarySymbolEnumType * SymbolIn);
  ~WeldSupplementarySymbolType();
  void printSelf(FILE * outFile);

  WeldSupplementarySymbolEnumType * getSymbol();
  void setSymbol(WeldSupplementarySymbolEnumType * SymbolIn);

protected:
  WeldSupplementarySymbolEnumType * Symbol;
};

/* ***************************************************************** */

class WitnessLinesType :
  public XmlTypeBase
{
public:
  WitnessLinesType();
  WitnessLinesType(
    WitnessLinesTypeChoicePair * WitnessLinesTypePairIn);
  WitnessLinesType(
    XmlDouble * widthIn,
    WitnessLinesTypeChoicePair * WitnessLinesTypePairIn);
  ~WitnessLinesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDouble * getwidth();
  void setwidth(XmlDouble * widthIn);

  WitnessLinesTypeChoicePair * getWitnessLinesTypePair();
  void setWitnessLinesTypePair(WitnessLinesTypeChoicePair * WitnessLinesTypePairIn);

protected:
  XmlDouble * width;
  WitnessLinesTypeChoicePair * WitnessLinesTypePair;
};

/* ***************************************************************** */

union WitnessLinesTypeVal
{
  WitnessLinesTyp_1236_Type * WitnessLinesTyp_1236;
  WitnessLinesTyp_1237_Type * WitnessLinesTyp_1237;
};

/* ***************************************************************** */

class WitnessLinesTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    WitnessLinesTyp_1236E,
    WitnessLinesTyp_1237E };
  WitnessLinesTypeChoicePair();
  WitnessLinesTypeChoicePair(
    whichOne WitnessLinesTypeTypeIn,
    WitnessLinesTypeVal WitnessLinesTypeValueIn);
  ~WitnessLinesTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WitnessLinesTypeType;
  WitnessLinesTypeVal WitnessLinesTypeValue;
};

/* ***************************************************************** */

class ZoneSectionPlaneType :
  public XmlTypeBase
{
public:
  ZoneSectionPlaneType();
  ZoneSectionPlaneType(
    PlaneXType * PlaneIn,
    SectionGroupsType * SectionGroupsIn);
  ZoneSectionPlaneType(
    XmlUnsignedInt * indexIn,
    PlaneXType * PlaneIn,
    SectionGroupsType * SectionGroupsIn);
  ~ZoneSectionPlaneType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlUnsignedInt * getindex();
  void setindex(XmlUnsignedInt * indexIn);

  PlaneXType * getPlane();
  void setPlane(PlaneXType * PlaneIn);
  SectionGroupsType * getSectionGroups();
  void setSectionGroups(SectionGroupsType * SectionGroupsIn);

protected:
  XmlUnsignedInt * index;
  PlaneXType * Plane;
  SectionGroupsType * SectionGroups;
};

/* ***************************************************************** */

class ZoneSectionPlaneTypeLisd :
  public std::list<ZoneSectionPlaneType *>,
  public XmlSchemaInstanceBase
{
public:
  ZoneSectionPlaneTypeLisd();
  ZoneSectionPlaneTypeLisd(
    ZoneSectionPlaneType * aZoneSectionPlaneType);
  ~ZoneSectionPlaneTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ZoneSectionPlanesType :
  public XmlTypeBase
{
public:
  ZoneSectionPlanesType();
  ZoneSectionPlanesType(
    ZoneSectionPlaneTypeLisd * SectionPlaneIn);
  ZoneSectionPlanesType(
    NaturalType * nIn,
    ZoneSectionPlaneTypeLisd * SectionPlaneIn);
  ~ZoneSectionPlanesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ZoneSectionPlaneTypeLisd * getSectionPlane();
  void setSectionPlane(ZoneSectionPlaneTypeLisd *);

protected:
  NaturalType * n;
  ZoneSectionPlaneTypeLisd * SectionPlane;
};

/* ***************************************************************** */

class ZoneSectionSetType :
  public XmlTypeBase
{
public:
  ZoneSectionSetType();
  ZoneSectionSetType(
    ZoneSectionTypeLisd * ZoneSectionIn);
  ZoneSectionSetType(
    NaturalType * nIn,
    ZoneSectionTypeLisd * ZoneSectionIn);
  ~ZoneSectionSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ZoneSectionTypeLisd * getZoneSection();
  void setZoneSection(ZoneSectionTypeLisd *);

protected:
  NaturalType * n;
  ZoneSectionTypeLisd * ZoneSection;
};

/* ***************************************************************** */

class ZoneSectionType :
  public NodeWithIdBaseType
{
public:
  ZoneSectionType();
  ZoneSectionType(
    AttributesType * AttributesIn,
    ZoneSectionPlanesType * SectionPlanesIn,
    LogicalOperationsType * LogicalOperationsIn);
  ZoneSectionType(
    XmlString * labelIn,
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * hatchingIn,
    ZoneSectionPlanesType * SectionPlanesIn,
    LogicalOperationsType * LogicalOperationsIn);
  ~ZoneSectionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * gethatching();
  void sethatching(XmlBoolean * hatchingIn);

  ZoneSectionPlanesType * getSectionPlanes();
  void setSectionPlanes(ZoneSectionPlanesType * SectionPlanesIn);
  LogicalOperationsType * getLogicalOperations();
  void setLogicalOperations(LogicalOperationsType * LogicalOperationsIn);

protected:
  XmlBoolean * hatching;
  ZoneSectionPlanesType * SectionPlanes;
  LogicalOperationsType * LogicalOperations;
};

/* ***************************************************************** */

class ZoneSectionTypeLisd :
  public std::list<ZoneSectionType *>,
  public XmlSchemaInstanceBase
{
public:
  ZoneSectionTypeLisd();
  ZoneSectionTypeLisd(
    ZoneSectionType * aZoneSectionType);
  ~ZoneSectionTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ExplodedViewMov_1231_Type :
  public XmlTypeBase
{
public:
  ExplodedViewMov_1231_Type();
  ExplodedViewMov_1231_Type(
    ExplodedViewMov_1231_TypeChoicePair * ExplodedViewMov_1231_TypePairIn);
  ~ExplodedViewMov_1231_Type();
  void printSelf(FILE * outFile);

  ExplodedViewMov_1231_TypeChoicePair * getExplodedViewMov_1231_TypePair();
  void setExplodedViewMov_1231_TypePair(ExplodedViewMov_1231_TypeChoicePair * ExplodedViewMov_1231_TypePairIn);

protected:
  ExplodedViewMov_1231_TypeChoicePair * ExplodedViewMov_1231_TypePair;
};

/* ***************************************************************** */

union ExplodedViewMov_1231_TypeVal
{
  ExplodedViewTranslateType * Translate;
  ExplodedViewRotateType * Rotate;
};

/* ***************************************************************** */

class ExplodedViewMov_1231_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TranslateE,
    RotateE };
  ExplodedViewMov_1231_TypeChoicePair();
  ExplodedViewMov_1231_TypeChoicePair(
    whichOne ExplodedViewMov_1231_TypeTypeIn,
    ExplodedViewMov_1231_TypeVal ExplodedViewMov_1231_TypeValueIn);
  ~ExplodedViewMov_1231_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExplodedViewMov_1231_TypeType;
  ExplodedViewMov_1231_TypeVal ExplodedViewMov_1231_TypeValue;
};

/* ***************************************************************** */

class LogicalOperatio_1232_Type :
  public XmlTypeBase
{
public:
  LogicalOperatio_1232_Type();
  LogicalOperatio_1232_Type(
    LogicalOperatio_1232_TypeChoicePairLisd * LogicalOperatio_1232_TypePairsIn);
  ~LogicalOperatio_1232_Type();
  void printSelf(FILE * outFile);

  LogicalOperatio_1232_TypeChoicePairLisd * getLogicalOperatio_1232_TypePairs();
  void setLogicalOperatio_1232_TypePairs(LogicalOperatio_1232_TypeChoicePairLisd * LogicalOperatio_1232_TypePairsIn);

protected:
  LogicalOperatio_1232_TypeChoicePairLisd * LogicalOperatio_1232_TypePairs;
};

/* ***************************************************************** */

union LogicalOperatio_1232_TypeVal
{
  XmlUnsignedInt * SectionPlane;
  XmlUnsignedInt * LogicalOperationResult;
};

/* ***************************************************************** */

class LogicalOperatio_1232_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SectionPlaneE,
    LogicalOperationResultE };
  LogicalOperatio_1232_TypeChoicePair();
  LogicalOperatio_1232_TypeChoicePair(
    whichOne LogicalOperatio_1232_TypeTypeIn,
    LogicalOperatio_1232_TypeVal LogicalOperatio_1232_TypeValueIn);
  ~LogicalOperatio_1232_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LogicalOperatio_1232_TypeType;
  LogicalOperatio_1232_TypeVal LogicalOperatio_1232_TypeValue;
};

/* ***************************************************************** */

class LogicalOperatio_1232_TypeChoicePairLisd :
  public std::list<LogicalOperatio_1232_TypeChoicePair *>,
  public XmlSchemaInstanceBase
{
public:
  LogicalOperatio_1232_TypeChoicePairLisd();
  LogicalOperatio_1232_TypeChoicePairLisd
    (LogicalOperatio_1232_TypeChoicePair * aLogicalOperatio_1232_TypeChoicePair);
  ~LogicalOperatio_1232_TypeChoicePairLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LogicalOperatio_1232_TypeLisd :
  public std::list<LogicalOperatio_1232_Type *>,
  public XmlSchemaInstanceBase
{
public:
  LogicalOperatio_1232_TypeLisd();
  LogicalOperatio_1232_TypeLisd(
    LogicalOperatio_1232_Type * aLogicalOperatio_1232_Type);
  ~LogicalOperatio_1232_TypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class Polyline2dType_1233_Type :
  public XmlTypeBase
{
public:
  Polyline2dType_1233_Type();
  Polyline2dType_1233_Type(
    Polyline2dType_1233_TypeChoicePair * Polyline2dType_1233_TypePairIn);
  ~Polyline2dType_1233_Type();
  void printSelf(FILE * outFile);

  Polyline2dType_1233_TypeChoicePair * getPolyline2dType_1233_TypePair();
  void setPolyline2dType_1233_TypePair(Polyline2dType_1233_TypeChoicePair * Polyline2dType_1233_TypePairIn);

protected:
  Polyline2dType_1233_TypeChoicePair * Polyline2dType_1233_TypePair;
};

/* ***************************************************************** */

union Polyline2dType_1233_TypeVal
{
  ArrayPoint2dType * Points;
  ArrayBinaryType * PointsBinary;
};

/* ***************************************************************** */

class Polyline2dType_1233_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsE,
    PointsBinaryE };
  Polyline2dType_1233_TypeChoicePair();
  Polyline2dType_1233_TypeChoicePair(
    whichOne Polyline2dType_1233_TypeTypeIn,
    Polyline2dType_1233_TypeVal Polyline2dType_1233_TypeValueIn);
  ~Polyline2dType_1233_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Polyline2dType_1233_TypeType;
  Polyline2dType_1233_TypeVal Polyline2dType_1233_TypeValue;
};

/* ***************************************************************** */

class Triangulation2d_1234_Type :
  public XmlTypeBase
{
public:
  Triangulation2d_1234_Type();
  Triangulation2d_1234_Type(
    Triangulation2d_1234_TypeChoicePair * Triangulation2d_1234_TypePairIn);
  ~Triangulation2d_1234_Type();
  void printSelf(FILE * outFile);

  Triangulation2d_1234_TypeChoicePair * getTriangulation2d_1234_TypePair();
  void setTriangulation2d_1234_TypePair(Triangulation2d_1234_TypeChoicePair * Triangulation2d_1234_TypePairIn);

protected:
  Triangulation2d_1234_TypeChoicePair * Triangulation2d_1234_TypePair;
};

/* ***************************************************************** */

union Triangulation2d_1234_TypeVal
{
  ArrayPoint2dType * Vertices;
  ArrayBinaryType * VerticesBinary;
};

/* ***************************************************************** */

class Triangulation2d_1234_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    VerticesE,
    VerticesBinaryE };
  Triangulation2d_1234_TypeChoicePair();
  Triangulation2d_1234_TypeChoicePair(
    whichOne Triangulation2d_1234_TypeTypeIn,
    Triangulation2d_1234_TypeVal Triangulation2d_1234_TypeValueIn);
  ~Triangulation2d_1234_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Triangulation2d_1234_TypeType;
  Triangulation2d_1234_TypeVal Triangulation2d_1234_TypeValue;
};

/* ***************************************************************** */

class Triangulation2d_1235_Type :
  public XmlTypeBase
{
public:
  Triangulation2d_1235_Type();
  Triangulation2d_1235_Type(
    Triangulation2d_1235_TypeChoicePair * Triangulation2d_1235_TypePairIn);
  ~Triangulation2d_1235_Type();
  void printSelf(FILE * outFile);

  Triangulation2d_1235_TypeChoicePair * getTriangulation2d_1235_TypePair();
  void setTriangulation2d_1235_TypePair(Triangulation2d_1235_TypeChoicePair * Triangulation2d_1235_TypePairIn);

protected:
  Triangulation2d_1235_TypeChoicePair * Triangulation2d_1235_TypePair;
};

/* ***************************************************************** */

union Triangulation2d_1235_TypeVal
{
  ArrayI3Type * Triangles;
  ArrayBinaryType * TrianglesBinary;
  ArrayUnsignedByteType * TrianglesColor;
  ArrayBinaryType * TrianglesColorBinary;
};

/* ***************************************************************** */

class Triangulation2d_1235_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TrianglesE,
    TrianglesBinaryE,
    TrianglesColorE,
    TrianglesColorBinaryE };
  Triangulation2d_1235_TypeChoicePair();
  Triangulation2d_1235_TypeChoicePair(
    whichOne Triangulation2d_1235_TypeTypeIn,
    Triangulation2d_1235_TypeVal Triangulation2d_1235_TypeValueIn);
  ~Triangulation2d_1235_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne Triangulation2d_1235_TypeType;
  Triangulation2d_1235_TypeVal Triangulation2d_1235_TypeValue;
};

/* ***************************************************************** */

class WitnessLinesTyp_1236_Type :
  public XmlTypeBase
{
public:
  WitnessLinesTyp_1236_Type();
  WitnessLinesTyp_1236_Type(
    LineSegment2dType * Segment1In,
    PointSimpleType * ZextensionPoint1In,
    LineSegment2dType * Segment2In,
    PointSimpleType * ZextensionPoint2In);
  ~WitnessLinesTyp_1236_Type();
  void printSelf(FILE * outFile);

  LineSegment2dType * getSegment1();
  void setSegment1(LineSegment2dType * Segment1In);
  PointSimpleType * getZextensionPoint1();
  void setZextensionPoint1(PointSimpleType * ZextensionPoint1In);
  LineSegment2dType * getSegment2();
  void setSegment2(LineSegment2dType * Segment2In);
  PointSimpleType * getZextensionPoint2();
  void setZextensionPoint2(PointSimpleType * ZextensionPoint2In);

protected:
  LineSegment2dType * Segment1;
  PointSimpleType * ZextensionPoint1;
  LineSegment2dType * Segment2;
  PointSimpleType * ZextensionPoint2;
};

/* ***************************************************************** */

class WitnessLinesTyp_1237_Type :
  public XmlTypeBase
{
public:
  WitnessLinesTyp_1237_Type();
  WitnessLinesTyp_1237_Type(
    Point2dSimpleType * BeginPointIn,
    Point2dSimpleType * EndPointIn,
    Point2dSimpleType * CircleCenterIn,
    DoublePositiveType * CircleRadiusIn);
  ~WitnessLinesTyp_1237_Type();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getBeginPoint();
  void setBeginPoint(Point2dSimpleType * BeginPointIn);
  Point2dSimpleType * getEndPoint();
  void setEndPoint(Point2dSimpleType * EndPointIn);
  Point2dSimpleType * getCircleCenter();
  void setCircleCenter(Point2dSimpleType * CircleCenterIn);
  DoublePositiveType * getCircleRadius();
  void setCircleRadius(DoublePositiveType * CircleRadiusIn);

protected:
  Point2dSimpleType * BeginPoint;
  Point2dSimpleType * EndPoint;
  Point2dSimpleType * CircleCenter;
  DoublePositiveType * CircleRadius;
};

/* ***************************************************************** */

class FrameFlagType :
  public FrameRectangularType
{
public:
  FrameFlagType();
  FrameFlagType(
    Point2dSimpleType * XYIn,
    XmlDouble * WidthIn,
    XmlDouble * HeightIn);
  FrameFlagType(
    Point2dSimpleType * XYIn,
    XmlDouble * WidthIn,
    XmlDouble * HeightIn,
    XmlBoolean * rightIn);
  ~FrameFlagType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getright();
  void setright(XmlBoolean * rightIn);

protected:
  XmlBoolean * right;
};

/* ***************************************************************** */

class LeaderCircularType :
  public LeaderType
{
public:
  LeaderCircularType();
  LeaderCircularType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn,
    LeaderHeadFormType * HeadFormIn,
    XmlDouble * HeadHeightIn,
    Point2dSimpleType * CenterIn);
  ~LeaderCircularType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getCenter();
  void setCenter(Point2dSimpleType * CenterIn);

protected:
  Point2dSimpleType * Center;
};

/* ***************************************************************** */

class LeaderDoubleHeadType :
  public LeaderType
{
public:
  LeaderDoubleHeadType();
  LeaderDoubleHeadType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn,
    LeaderHeadFormType * HeadFormIn,
    XmlDouble * HeadHeightIn,
    LeaderHeadFormEnumType * HeadForm2In,
    Point2dSimpleType * PointConnectionIn);
  ~LeaderDoubleHeadType();
  void printSelf(FILE * outFile);

  LeaderHeadFormEnumType * getHeadForm2();
  void setHeadForm2(LeaderHeadFormEnumType * HeadForm2In);
  Point2dSimpleType * getPointConnection();
  void setPointConnection(Point2dSimpleType * PointConnectionIn);

protected:
  LeaderHeadFormEnumType * HeadForm2;
  Point2dSimpleType * PointConnection;
};

/* ***************************************************************** */

class LeaderExtendType :
  public LeaderType
{
public:
  LeaderExtendType();
  LeaderExtendType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn,
    LeaderHeadFormType * HeadFormIn,
    XmlDouble * HeadHeightIn,
    Point2dSimpleType * PointExtensionIn,
    LeaderModifierEnumType * ModifierIn);
  ~LeaderExtendType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getPointExtension();
  void setPointExtension(Point2dSimpleType * PointExtensionIn);
  LeaderModifierEnumType * getModifier();
  void setModifier(LeaderModifierEnumType * ModifierIn);

protected:
  Point2dSimpleType * PointExtension;
  LeaderModifierEnumType * Modifier;
};

/* ***************************************************************** */

class LeaderDoubleHeadCircularType :
  public LeaderDoubleHeadType
{
public:
  LeaderDoubleHeadCircularType();
  LeaderDoubleHeadCircularType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn,
    LeaderHeadFormType * HeadFormIn,
    XmlDouble * HeadHeightIn,
    LeaderHeadFormEnumType * HeadForm2In,
    Point2dSimpleType * PointConnectionIn,
    Point2dSimpleType * CenterIn);
  ~LeaderDoubleHeadCircularType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getCenter();
  void setCenter(Point2dSimpleType * CenterIn);

protected:
  Point2dSimpleType * Center;
};

/* ***************************************************************** */

class LeaderDoubleHeadExtendType :
  public LeaderDoubleHeadType
{
public:
  LeaderDoubleHeadExtendType();
  LeaderDoubleHeadExtendType(
    Point2dSimpleType * StartPointIn,
    Point2dSimpleType * EndPointIn,
    LeaderHeadFormType * HeadFormIn,
    XmlDouble * HeadHeightIn,
    LeaderHeadFormEnumType * HeadForm2In,
    Point2dSimpleType * PointConnectionIn,
    Point2dSimpleType * PointExtensionIn);
  ~LeaderDoubleHeadExtendType();
  void printSelf(FILE * outFile);

  Point2dSimpleType * getPointExtension();
  void setPointExtension(Point2dSimpleType * PointExtensionIn);

protected:
  Point2dSimpleType * PointExtension;
};

/* ***************************************************************** */

#endif // VISUALIZATION_HH
