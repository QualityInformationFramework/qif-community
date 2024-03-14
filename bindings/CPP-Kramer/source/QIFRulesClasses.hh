/* ***************************************************************** */

#ifndef QIFRULES_HH
#define QIFRULES_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "ExpressionsClasses.hh"
#include "IntermediatesPMIClasses.hh"

/* ***************************************************************** */

class ApplicabilityBaseType;
class CirclePointSamplingStrategyType;
class CirclePointSamplingStrategyTypeChoicePair;
class CircularArcPointSamplingStrategyType;
class CircularArcPointSamplingStrategyTypeChoicePair;
class ConePointSamplingStrategyType;
class ConePointSamplingStrategyTypeChoicePair;
class ConicalSegmentPointSamplingStrategyType;
class ConicalSegmentPointSamplingStrategyTypeChoicePair;
class CylinderPointSamplingStrategyType;
class CylinderPointSamplingStrategyTypeChoicePair;
class CylindricalSegmentPointSamplingStrategyType;
class CylindricalSegmentPointSamplingStrategyTypeChoicePair;
class DMEDecisionBaseType;
class DMEDecisionBaseTypeLisd;
class DMEDecisionClassType;
class DMEDecisionIdType;
class DMEDecisionMakeModelType;
class DMEParameterConstraintSetType;
class DMEParameterConstraintType;
class DMEParameterConstraintTypeLisd;
class DMESelectionRulesType;
class DMEThenType;
class EllipsePointSamplingStrategyType;
class EllipsePointSamplingStrategyTypeChoicePair;
class EllipticalArcPointSamplingStrategyType;
class EllipticalArcPointSamplingStrategyTypeChoicePair;
class ElongatedCirclePointSamplingStrategyType;
class ElongatedCirclePointSamplingStrategyTypeChoicePair;
class ElongatedCylinderPointSamplingStrategyType;
class ElongatedCylinderPointSamplingStrategyTypeChoicePair;
class ElseRuleType;
class ExtrudedCrossSectionPointSamplingStrategyType;
class ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair;
class FeatureRulesType;
class IfThenCircleRuleType;
class IfThenCircularArcRuleType;
class IfThenConeRuleType;
class IfThenConicalSegmentRuleType;
class IfThenCurveRuleType;
class IfThenCylinderRuleType;
class IfThenCylindricalSegmentRuleType;
class IfThenDMERuleType;
class IfThenDMERuleTypeLisd;
class IfThenEllipseRuleType;
class IfThenEllipticalArcRuleType;
class IfThenElongatedCircleRuleType;
class IfThenElongatedCylinderRuleType;
class IfThenElseFeatureRulesType;
class IfThenExtrudedCrossSectionRuleType;
class IfThenFeatureRuleType;
class IfThenFeatureRuleTypeLisd;
class IfThenLineRuleType;
class IfThenOppositeAngledLinesRuleType;
class IfThenOppositeAngledPlanesRuleType;
class IfThenOppositeParallelLinesRuleType;
class IfThenOppositeParallelPlanesRuleType;
class IfThenPlaneRuleType;
class IfThenPointDefinedCurveRuleType;
class IfThenPointDefinedSurfaceRuleType;
class IfThenPointRuleType;
class IfThenSphereRuleType;
class IfThenSphericalSegmentRuleType;
class IfThenSurfaceOfRevolutionRuleType;
class IfThenSurfaceRuleType;
class IfThenToroidalSegmentRuleType;
class IfThenTorusRuleType;
class LinePointSamplingStrategyType;
class LinePointSamplingStrategyTypeChoicePair;
class MaxFeatureRulesType;
class OppositeAngledLinesPointSamplingStrategyType;
class OppositeAngledLinesPointSamplingStrategyTypeChoicePair;
class OppositeAngledPlanesPointSamplingStrategyType;
class OppositeAngledPlanesPointSamplingStrategyTypeChoicePair;
class OppositeParallelLinesPointSamplingStrategyType;
class OppositeParallelLinesPointSamplingStrategyTypeChoicePair;
class OppositeParallelPlanesPointSamplingStrategyType;
class OppositeParallelPlanesPointSamplingStrategyTypeChoicePair;
class PlanePointSamplingStrategyType;
class PlanePointSamplingStrategyTypeChoicePair;
class PointDefinedCurvePointSamplingStrategyType;
class PointDefinedCurvePointSamplingStrategyTypeChoicePair;
class PointDefinedSurfacePointSamplingStrategyType;
class PointDefinedSurfacePointSamplingStrategyTypeChoicePair;
class PointPointSamplingStrategyType;
class PointPointSamplingStrategyTypeChoicePair;
class PointRuleBaseType;
class QIFMayType;
class QIFMustNotType;
class QIFMustType;
class QIFRuleBaseType;
class QIFRulesType;
class RulesUnitsType;
class SpherePointSamplingStrategyType;
class SpherePointSamplingStrategyTypeChoicePair;
class SphericalSegmentPointSamplingStrategyType;
class SphericalSegmentPointSamplingStrategyTypeChoicePair;
class SurfaceOfRevolutionPointSamplingStrategyType;
class SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair;
class ThenPointsType;
class ThenPointsTypeChoicePair;
class ToroidalSegmentPointSamplingStrategyType;
class ToroidalSegmentPointSamplingStrategyTypeChoicePair;
class TorusPointSamplingStrategyType;
class TorusPointSamplingStrategyTypeChoicePair;
class ZeroToOneType;

/* ***************************************************************** */
/* ***************************************************************** */

class ApplicabilityBaseType :
  public XmlTypeBase
{
public:
  ApplicabilityBaseType();
  ~ApplicabilityBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CirclePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  CirclePointSamplingStrategyType();
  CirclePointSamplingStrategyType(
    CirclePointSamplingStrategyTypeChoicePair * CirclePointSamplingStrategyTypePairIn);
  ~CirclePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  CirclePointSamplingStrategyTypeChoicePair * getCirclePointSamplingStrategyTypePair();
  void setCirclePointSamplingStrategyTypePair(CirclePointSamplingStrategyTypeChoicePair * CirclePointSamplingStrategyTypePairIn);

protected:
  CirclePointSamplingStrategyTypeChoicePair * CirclePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union CirclePointSamplingStrategyTypeVal
{
  ClosedCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class CirclePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  CirclePointSamplingStrategyTypeChoicePair();
  CirclePointSamplingStrategyTypeChoicePair(
    whichOne CirclePointSamplingStrategyTypeTypeIn,
    CirclePointSamplingStrategyTypeVal CirclePointSamplingStrategyTypeValueIn);
  ~CirclePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CirclePointSamplingStrategyTypeType;
  CirclePointSamplingStrategyTypeVal CirclePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class CircularArcPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  CircularArcPointSamplingStrategyType();
  CircularArcPointSamplingStrategyType(
    CircularArcPointSamplingStrategyTypeChoicePair * CircularArcPointSamplingStrategyTypePairIn);
  ~CircularArcPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  CircularArcPointSamplingStrategyTypeChoicePair * getCircularArcPointSamplingStrategyTypePair();
  void setCircularArcPointSamplingStrategyTypePair(CircularArcPointSamplingStrategyTypeChoicePair * CircularArcPointSamplingStrategyTypePairIn);

protected:
  CircularArcPointSamplingStrategyTypeChoicePair * CircularArcPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union CircularArcPointSamplingStrategyTypeVal
{
  OpenCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class CircularArcPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  CircularArcPointSamplingStrategyTypeChoicePair();
  CircularArcPointSamplingStrategyTypeChoicePair(
    whichOne CircularArcPointSamplingStrategyTypeTypeIn,
    CircularArcPointSamplingStrategyTypeVal CircularArcPointSamplingStrategyTypeValueIn);
  ~CircularArcPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularArcPointSamplingStrategyTypeType;
  CircularArcPointSamplingStrategyTypeVal CircularArcPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class ConePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  ConePointSamplingStrategyType();
  ConePointSamplingStrategyType(
    ConePointSamplingStrategyTypeChoicePair * ConePointSamplingStrategyTypePairIn);
  ~ConePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  ConePointSamplingStrategyTypeChoicePair * getConePointSamplingStrategyTypePair();
  void setConePointSamplingStrategyTypePair(ConePointSamplingStrategyTypeChoicePair * ConePointSamplingStrategyTypePairIn);

protected:
  ConePointSamplingStrategyTypeChoicePair * ConePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union ConePointSamplingStrategyTypeVal
{
  ConePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class ConePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  ConePointSamplingStrategyTypeChoicePair();
  ConePointSamplingStrategyTypeChoicePair(
    whichOne ConePointSamplingStrategyTypeTypeIn,
    ConePointSamplingStrategyTypeVal ConePointSamplingStrategyTypeValueIn);
  ~ConePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConePointSamplingStrategyTypeType;
  ConePointSamplingStrategyTypeVal ConePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class ConicalSegmentPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  ConicalSegmentPointSamplingStrategyType();
  ConicalSegmentPointSamplingStrategyType(
    ConicalSegmentPointSamplingStrategyTypeChoicePair * ConicalSegmentPointSamplingStrategyTypePairIn);
  ~ConicalSegmentPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  ConicalSegmentPointSamplingStrategyTypeChoicePair * getConicalSegmentPointSamplingStrategyTypePair();
  void setConicalSegmentPointSamplingStrategyTypePair(ConicalSegmentPointSamplingStrategyTypeChoicePair * ConicalSegmentPointSamplingStrategyTypePairIn);

protected:
  ConicalSegmentPointSamplingStrategyTypeChoicePair * ConicalSegmentPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union ConicalSegmentPointSamplingStrategyTypeVal
{
  ConePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class ConicalSegmentPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  ConicalSegmentPointSamplingStrategyTypeChoicePair();
  ConicalSegmentPointSamplingStrategyTypeChoicePair(
    whichOne ConicalSegmentPointSamplingStrategyTypeTypeIn,
    ConicalSegmentPointSamplingStrategyTypeVal ConicalSegmentPointSamplingStrategyTypeValueIn);
  ~ConicalSegmentPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConicalSegmentPointSamplingStrategyTypeType;
  ConicalSegmentPointSamplingStrategyTypeVal ConicalSegmentPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class CylinderPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  CylinderPointSamplingStrategyType();
  CylinderPointSamplingStrategyType(
    CylinderPointSamplingStrategyTypeChoicePair * CylinderPointSamplingStrategyTypePairIn);
  ~CylinderPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  CylinderPointSamplingStrategyTypeChoicePair * getCylinderPointSamplingStrategyTypePair();
  void setCylinderPointSamplingStrategyTypePair(CylinderPointSamplingStrategyTypeChoicePair * CylinderPointSamplingStrategyTypePairIn);

protected:
  CylinderPointSamplingStrategyTypeChoicePair * CylinderPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union CylinderPointSamplingStrategyTypeVal
{
  SurfaceOfRevolutionPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class CylinderPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  CylinderPointSamplingStrategyTypeChoicePair();
  CylinderPointSamplingStrategyTypeChoicePair(
    whichOne CylinderPointSamplingStrategyTypeTypeIn,
    CylinderPointSamplingStrategyTypeVal CylinderPointSamplingStrategyTypeValueIn);
  ~CylinderPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylinderPointSamplingStrategyTypeType;
  CylinderPointSamplingStrategyTypeVal CylinderPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class CylindricalSegmentPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  CylindricalSegmentPointSamplingStrategyType();
  CylindricalSegmentPointSamplingStrategyType(
    CylindricalSegmentPointSamplingStrategyTypeChoicePair * CylindricalSegmentPointSamplingStrategyTypePairIn);
  ~CylindricalSegmentPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  CylindricalSegmentPointSamplingStrategyTypeChoicePair * getCylindricalSegmentPointSamplingStrategyTypePair();
  void setCylindricalSegmentPointSamplingStrategyTypePair(CylindricalSegmentPointSamplingStrategyTypeChoicePair * CylindricalSegmentPointSamplingStrategyTypePairIn);

protected:
  CylindricalSegmentPointSamplingStrategyTypeChoicePair * CylindricalSegmentPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union CylindricalSegmentPointSamplingStrategyTypeVal
{
  SurfaceOfRevolutionPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class CylindricalSegmentPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  CylindricalSegmentPointSamplingStrategyTypeChoicePair();
  CylindricalSegmentPointSamplingStrategyTypeChoicePair(
    whichOne CylindricalSegmentPointSamplingStrategyTypeTypeIn,
    CylindricalSegmentPointSamplingStrategyTypeVal CylindricalSegmentPointSamplingStrategyTypeValueIn);
  ~CylindricalSegmentPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricalSegmentPointSamplingStrategyTypeType;
  CylindricalSegmentPointSamplingStrategyTypeVal CylindricalSegmentPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class DMEDecisionBaseType :
  public XmlTypeBase
{
public:
  DMEDecisionBaseType();
  DMEDecisionBaseType(
    ApplicabilityBaseType * ApplicabilityIn);
  ~DMEDecisionBaseType();
  void printSelf(FILE * outFile);

  ApplicabilityBaseType * getApplicability();
  void setApplicability(ApplicabilityBaseType * ApplicabilityIn);

protected:
  ApplicabilityBaseType * Applicability;
};

/* ***************************************************************** */

class DMEDecisionBaseTypeLisd :
  public std::list<DMEDecisionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  DMEDecisionBaseTypeLisd();
  DMEDecisionBaseTypeLisd(
    DMEDecisionBaseType * aDMEDecisionBaseType);
  ~DMEDecisionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DMEDecisionClassType :
  public DMEDecisionBaseType
{
public:
  DMEDecisionClassType();
  DMEDecisionClassType(
    ApplicabilityBaseType * ApplicabilityIn,
    DMEClassNameEnumType * DMEClassNameIn,
    DMEParameterConstraintSetType * ParameterConstraintsIn);
  ~DMEDecisionClassType();
  void printSelf(FILE * outFile);

  DMEClassNameEnumType * getDMEClassName();
  void setDMEClassName(DMEClassNameEnumType * DMEClassNameIn);
  DMEParameterConstraintSetType * getParameterConstraints();
  void setParameterConstraints(DMEParameterConstraintSetType * ParameterConstraintsIn);

protected:
  DMEClassNameEnumType * DMEClassName;
  DMEParameterConstraintSetType * ParameterConstraints;
};

/* ***************************************************************** */

class DMEDecisionIdType :
  public DMEDecisionBaseType
{
public:
  DMEDecisionIdType();
  DMEDecisionIdType(
    ApplicabilityBaseType * ApplicabilityIn,
    QIFReferenceType * DMEIdIn);
  ~DMEDecisionIdType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getDMEId();
  void setDMEId(QIFReferenceType * DMEIdIn);

protected:
  QIFReferenceType * DMEId;
};

/* ***************************************************************** */

class DMEDecisionMakeModelType :
  public DMEDecisionBaseType
{
public:
  DMEDecisionMakeModelType();
  DMEDecisionMakeModelType(
    ApplicabilityBaseType * ApplicabilityIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn);
  ~DMEDecisionMakeModelType();
  void printSelf(FILE * outFile);

  XmlString * getManufacturer();
  void setManufacturer(XmlString * ManufacturerIn);
  XmlString * getModelNumber();
  void setModelNumber(XmlString * ModelNumberIn);
  XmlString * getSerialNumber();
  void setSerialNumber(XmlString * SerialNumberIn);

protected:
  XmlString * Manufacturer;
  XmlString * ModelNumber;
  XmlString * SerialNumber;
};

/* ***************************************************************** */

class DMEParameterConstraintSetType :
  public XmlTypeBase
{
public:
  DMEParameterConstraintSetType();
  DMEParameterConstraintSetType(
    DMEParameterConstraintTypeLisd * DMEParameterConstraintIn);
  DMEParameterConstraintSetType(
    NaturalType * nIn,
    DMEParameterConstraintTypeLisd * DMEParameterConstraintIn);
  ~DMEParameterConstraintSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DMEParameterConstraintTypeLisd * getDMEParameterConstraint();
  void setDMEParameterConstraint(DMEParameterConstraintTypeLisd *);

protected:
  NaturalType * n;
  DMEParameterConstraintTypeLisd * DMEParameterConstraint;
};

/* ***************************************************************** */

class DMEParameterConstraintType :
  public XmlTypeBase
{
public:
  DMEParameterConstraintType();
  DMEParameterConstraintType(
    XmlToken * ParameterNameIn,
    ArithmeticComparisonEnumType * ComparisonIn,
    ArithmeticExpressionBaseType * ArithmeticExpressionIn);
  ~DMEParameterConstraintType();
  void printSelf(FILE * outFile);

  XmlToken * getParameterName();
  void setParameterName(XmlToken * ParameterNameIn);
  ArithmeticComparisonEnumType * getComparison();
  void setComparison(ArithmeticComparisonEnumType * ComparisonIn);
  ArithmeticExpressionBaseType * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseType * ArithmeticExpressionIn);

protected:
  XmlToken * ParameterName;
  ArithmeticComparisonEnumType * Comparison;
  ArithmeticExpressionBaseType * ArithmeticExpression;
};

/* ***************************************************************** */

class DMEParameterConstraintTypeLisd :
  public std::list<DMEParameterConstraintType *>,
  public XmlSchemaInstanceBase
{
public:
  DMEParameterConstraintTypeLisd();
  DMEParameterConstraintTypeLisd(
    DMEParameterConstraintType * aDMEParameterConstraintType);
  ~DMEParameterConstraintTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DMESelectionRulesType :
  public XmlTypeBase
{
public:
  DMESelectionRulesType();
  DMESelectionRulesType(
    IfThenDMERuleTypeLisd * DMEDecisionRuleIn);
  DMESelectionRulesType(
    ZeroToOneType * defaultDesirabilityIn,
    NaturalType * nIn,
    IfThenDMERuleTypeLisd * DMEDecisionRuleIn);
  ~DMESelectionRulesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ZeroToOneType * getdefaultDesirability();
  void setdefaultDesirability(ZeroToOneType * defaultDesirabilityIn);
  NaturalType * getn();
  void setn(NaturalType * nIn);

  IfThenDMERuleTypeLisd * getDMEDecisionRule();
  void setDMEDecisionRule(IfThenDMERuleTypeLisd *);

protected:
  ZeroToOneType * defaultDesirability;
  NaturalType * n;
  IfThenDMERuleTypeLisd * DMEDecisionRule;
};

/* ***************************************************************** */

class DMEThenType :
  public XmlTypeBase
{
public:
  DMEThenType();
  DMEThenType(
    DMEDecisionBaseTypeLisd * DMEDecisionIn);
  DMEThenType(
    NaturalType * nIn,
    DMEDecisionBaseTypeLisd * DMEDecisionIn);
  ~DMEThenType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DMEDecisionBaseTypeLisd * getDMEDecision();
  void setDMEDecision(DMEDecisionBaseTypeLisd *);

protected:
  NaturalType * n;
  DMEDecisionBaseTypeLisd * DMEDecision;
};

/* ***************************************************************** */

class EllipsePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  EllipsePointSamplingStrategyType();
  EllipsePointSamplingStrategyType(
    EllipsePointSamplingStrategyTypeChoicePair * EllipsePointSamplingStrategyTypePairIn);
  ~EllipsePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  EllipsePointSamplingStrategyTypeChoicePair * getEllipsePointSamplingStrategyTypePair();
  void setEllipsePointSamplingStrategyTypePair(EllipsePointSamplingStrategyTypeChoicePair * EllipsePointSamplingStrategyTypePairIn);

protected:
  EllipsePointSamplingStrategyTypeChoicePair * EllipsePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union EllipsePointSamplingStrategyTypeVal
{
  ClosedCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class EllipsePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  EllipsePointSamplingStrategyTypeChoicePair();
  EllipsePointSamplingStrategyTypeChoicePair(
    whichOne EllipsePointSamplingStrategyTypeTypeIn,
    EllipsePointSamplingStrategyTypeVal EllipsePointSamplingStrategyTypeValueIn);
  ~EllipsePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipsePointSamplingStrategyTypeType;
  EllipsePointSamplingStrategyTypeVal EllipsePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class EllipticalArcPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  EllipticalArcPointSamplingStrategyType();
  EllipticalArcPointSamplingStrategyType(
    EllipticalArcPointSamplingStrategyTypeChoicePair * EllipticalArcPointSamplingStrategyTypePairIn);
  ~EllipticalArcPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  EllipticalArcPointSamplingStrategyTypeChoicePair * getEllipticalArcPointSamplingStrategyTypePair();
  void setEllipticalArcPointSamplingStrategyTypePair(EllipticalArcPointSamplingStrategyTypeChoicePair * EllipticalArcPointSamplingStrategyTypePairIn);

protected:
  EllipticalArcPointSamplingStrategyTypeChoicePair * EllipticalArcPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union EllipticalArcPointSamplingStrategyTypeVal
{
  OpenCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class EllipticalArcPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  EllipticalArcPointSamplingStrategyTypeChoicePair();
  EllipticalArcPointSamplingStrategyTypeChoicePair(
    whichOne EllipticalArcPointSamplingStrategyTypeTypeIn,
    EllipticalArcPointSamplingStrategyTypeVal EllipticalArcPointSamplingStrategyTypeValueIn);
  ~EllipticalArcPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipticalArcPointSamplingStrategyTypeType;
  EllipticalArcPointSamplingStrategyTypeVal EllipticalArcPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class ElongatedCirclePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  ElongatedCirclePointSamplingStrategyType();
  ElongatedCirclePointSamplingStrategyType(
    ElongatedCirclePointSamplingStrategyTypeChoicePair * ElongatedCirclePointSamplingStrategyTypePairIn);
  ~ElongatedCirclePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  ElongatedCirclePointSamplingStrategyTypeChoicePair * getElongatedCirclePointSamplingStrategyTypePair();
  void setElongatedCirclePointSamplingStrategyTypePair(ElongatedCirclePointSamplingStrategyTypeChoicePair * ElongatedCirclePointSamplingStrategyTypePairIn);

protected:
  ElongatedCirclePointSamplingStrategyTypeChoicePair * ElongatedCirclePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union ElongatedCirclePointSamplingStrategyTypeVal
{
  OpenCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class ElongatedCirclePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  ElongatedCirclePointSamplingStrategyTypeChoicePair();
  ElongatedCirclePointSamplingStrategyTypeChoicePair(
    whichOne ElongatedCirclePointSamplingStrategyTypeTypeIn,
    ElongatedCirclePointSamplingStrategyTypeVal ElongatedCirclePointSamplingStrategyTypeValueIn);
  ~ElongatedCirclePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCirclePointSamplingStrategyTypeType;
  ElongatedCirclePointSamplingStrategyTypeVal ElongatedCirclePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class ElongatedCylinderPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  ElongatedCylinderPointSamplingStrategyType();
  ElongatedCylinderPointSamplingStrategyType(
    ElongatedCylinderPointSamplingStrategyTypeChoicePair * ElongatedCylinderPointSamplingStrategyTypePairIn);
  ~ElongatedCylinderPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  ElongatedCylinderPointSamplingStrategyTypeChoicePair * getElongatedCylinderPointSamplingStrategyTypePair();
  void setElongatedCylinderPointSamplingStrategyTypePair(ElongatedCylinderPointSamplingStrategyTypeChoicePair * ElongatedCylinderPointSamplingStrategyTypePairIn);

protected:
  ElongatedCylinderPointSamplingStrategyTypeChoicePair * ElongatedCylinderPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union ElongatedCylinderPointSamplingStrategyTypeVal
{
  ElongatedCylinderPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class ElongatedCylinderPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  ElongatedCylinderPointSamplingStrategyTypeChoicePair();
  ElongatedCylinderPointSamplingStrategyTypeChoicePair(
    whichOne ElongatedCylinderPointSamplingStrategyTypeTypeIn,
    ElongatedCylinderPointSamplingStrategyTypeVal ElongatedCylinderPointSamplingStrategyTypeValueIn);
  ~ElongatedCylinderPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCylinderPointSamplingStrategyTypeType;
  ElongatedCylinderPointSamplingStrategyTypeVal ElongatedCylinderPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class ExtrudedCrossSectionPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  ExtrudedCrossSectionPointSamplingStrategyType();
  ExtrudedCrossSectionPointSamplingStrategyType(
    ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair * ExtrudedCrossSectionPointSamplingStrategyTypePairIn);
  ~ExtrudedCrossSectionPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair * getExtrudedCrossSectionPointSamplingStrategyTypePair();
  void setExtrudedCrossSectionPointSamplingStrategyTypePair(ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair * ExtrudedCrossSectionPointSamplingStrategyTypePairIn);

protected:
  ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair * ExtrudedCrossSectionPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union ExtrudedCrossSectionPointSamplingStrategyTypeVal
{
  ExtrudedCrossSectionPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair();
  ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair(
    whichOne ExtrudedCrossSectionPointSamplingStrategyTypeTypeIn,
    ExtrudedCrossSectionPointSamplingStrategyTypeVal ExtrudedCrossSectionPointSamplingStrategyTypeValueIn);
  ~ExtrudedCrossSectionPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExtrudedCrossSectionPointSamplingStrategyTypeType;
  ExtrudedCrossSectionPointSamplingStrategyTypeVal ExtrudedCrossSectionPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class FeatureRulesType :
  public XmlTypeBase
{
public:
  FeatureRulesType();
  FeatureRulesType(
    IfThenElseFeatureRulesType * IfThenElseFeatureRulesIn,
    MaxFeatureRulesType * MaxFeatureRulesIn);
  ~FeatureRulesType();
  void printSelf(FILE * outFile);

  IfThenElseFeatureRulesType * getIfThenElseFeatureRules();
  void setIfThenElseFeatureRules(IfThenElseFeatureRulesType * IfThenElseFeatureRulesIn);
  MaxFeatureRulesType * getMaxFeatureRules();
  void setMaxFeatureRules(MaxFeatureRulesType * MaxFeatureRulesIn);

protected:
  IfThenElseFeatureRulesType * IfThenElseFeatureRules;
  MaxFeatureRulesType * MaxFeatureRules;
};

/* ***************************************************************** */

class IfThenElseFeatureRulesType :
  public XmlTypeBase
{
public:
  IfThenElseFeatureRulesType();
  IfThenElseFeatureRulesType(
    IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
    ElseRuleType * ElseIn);
  IfThenElseFeatureRulesType(
    NaturalType * nIn,
    IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
    ElseRuleType * ElseIn);
  ~IfThenElseFeatureRulesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  IfThenFeatureRuleTypeLisd * getIfThenFeatureRule();
  void setIfThenFeatureRule(IfThenFeatureRuleTypeLisd *);
  ElseRuleType * getElse();
  void setElse(ElseRuleType * ElseIn);

protected:
  NaturalType * n;
  IfThenFeatureRuleTypeLisd * IfThenFeatureRule;
  ElseRuleType * Else;
};

/* ***************************************************************** */

class LinePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  LinePointSamplingStrategyType();
  LinePointSamplingStrategyType(
    LinePointSamplingStrategyTypeChoicePair * LinePointSamplingStrategyTypePairIn);
  ~LinePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  LinePointSamplingStrategyTypeChoicePair * getLinePointSamplingStrategyTypePair();
  void setLinePointSamplingStrategyTypePair(LinePointSamplingStrategyTypeChoicePair * LinePointSamplingStrategyTypePairIn);

protected:
  LinePointSamplingStrategyTypeChoicePair * LinePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union LinePointSamplingStrategyTypeVal
{
  OpenCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class LinePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  LinePointSamplingStrategyTypeChoicePair();
  LinePointSamplingStrategyTypeChoicePair(
    whichOne LinePointSamplingStrategyTypeTypeIn,
    LinePointSamplingStrategyTypeVal LinePointSamplingStrategyTypeValueIn);
  ~LinePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinePointSamplingStrategyTypeType;
  LinePointSamplingStrategyTypeVal LinePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class MaxFeatureRulesType :
  public XmlTypeBase
{
public:
  MaxFeatureRulesType();
  MaxFeatureRulesType(
    IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
    ElseRuleType * ElseIn);
  MaxFeatureRulesType(
    NaturalType * nIn,
    IfThenFeatureRuleTypeLisd * IfThenFeatureRuleIn,
    ElseRuleType * ElseIn);
  ~MaxFeatureRulesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  IfThenFeatureRuleTypeLisd * getIfThenFeatureRule();
  void setIfThenFeatureRule(IfThenFeatureRuleTypeLisd *);
  ElseRuleType * getElse();
  void setElse(ElseRuleType * ElseIn);

protected:
  NaturalType * n;
  IfThenFeatureRuleTypeLisd * IfThenFeatureRule;
  ElseRuleType * Else;
};

/* ***************************************************************** */

class OppositeAngledLinesPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  OppositeAngledLinesPointSamplingStrategyType();
  OppositeAngledLinesPointSamplingStrategyType(
    OppositeAngledLinesPointSamplingStrategyTypeChoicePair * OppositeAngledLinesPointSamplingStrategyTypePairIn);
  ~OppositeAngledLinesPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  OppositeAngledLinesPointSamplingStrategyTypeChoicePair * getOppositeAngledLinesPointSamplingStrategyTypePair();
  void setOppositeAngledLinesPointSamplingStrategyTypePair(OppositeAngledLinesPointSamplingStrategyTypeChoicePair * OppositeAngledLinesPointSamplingStrategyTypePairIn);

protected:
  OppositeAngledLinesPointSamplingStrategyTypeChoicePair * OppositeAngledLinesPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union OppositeAngledLinesPointSamplingStrategyTypeVal
{
  OpenCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class OppositeAngledLinesPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  OppositeAngledLinesPointSamplingStrategyTypeChoicePair();
  OppositeAngledLinesPointSamplingStrategyTypeChoicePair(
    whichOne OppositeAngledLinesPointSamplingStrategyTypeTypeIn,
    OppositeAngledLinesPointSamplingStrategyTypeVal OppositeAngledLinesPointSamplingStrategyTypeValueIn);
  ~OppositeAngledLinesPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledLinesPointSamplingStrategyTypeType;
  OppositeAngledLinesPointSamplingStrategyTypeVal OppositeAngledLinesPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class OppositeAngledPlanesPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  OppositeAngledPlanesPointSamplingStrategyType();
  OppositeAngledPlanesPointSamplingStrategyType(
    OppositeAngledPlanesPointSamplingStrategyTypeChoicePair * OppositeAngledPlanesPointSamplingStrategyTypePairIn);
  ~OppositeAngledPlanesPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  OppositeAngledPlanesPointSamplingStrategyTypeChoicePair * getOppositeAngledPlanesPointSamplingStrategyTypePair();
  void setOppositeAngledPlanesPointSamplingStrategyTypePair(OppositeAngledPlanesPointSamplingStrategyTypeChoicePair * OppositeAngledPlanesPointSamplingStrategyTypePairIn);

protected:
  OppositeAngledPlanesPointSamplingStrategyTypeChoicePair * OppositeAngledPlanesPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union OppositeAngledPlanesPointSamplingStrategyTypeVal
{
  PlanePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class OppositeAngledPlanesPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  OppositeAngledPlanesPointSamplingStrategyTypeChoicePair();
  OppositeAngledPlanesPointSamplingStrategyTypeChoicePair(
    whichOne OppositeAngledPlanesPointSamplingStrategyTypeTypeIn,
    OppositeAngledPlanesPointSamplingStrategyTypeVal OppositeAngledPlanesPointSamplingStrategyTypeValueIn);
  ~OppositeAngledPlanesPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledPlanesPointSamplingStrategyTypeType;
  OppositeAngledPlanesPointSamplingStrategyTypeVal OppositeAngledPlanesPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class OppositeParallelLinesPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  OppositeParallelLinesPointSamplingStrategyType();
  OppositeParallelLinesPointSamplingStrategyType(
    OppositeParallelLinesPointSamplingStrategyTypeChoicePair * OppositeParallelLinesPointSamplingStrategyTypePairIn);
  ~OppositeParallelLinesPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  OppositeParallelLinesPointSamplingStrategyTypeChoicePair * getOppositeParallelLinesPointSamplingStrategyTypePair();
  void setOppositeParallelLinesPointSamplingStrategyTypePair(OppositeParallelLinesPointSamplingStrategyTypeChoicePair * OppositeParallelLinesPointSamplingStrategyTypePairIn);

protected:
  OppositeParallelLinesPointSamplingStrategyTypeChoicePair * OppositeParallelLinesPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union OppositeParallelLinesPointSamplingStrategyTypeVal
{
  OpenCurvePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class OppositeParallelLinesPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  OppositeParallelLinesPointSamplingStrategyTypeChoicePair();
  OppositeParallelLinesPointSamplingStrategyTypeChoicePair(
    whichOne OppositeParallelLinesPointSamplingStrategyTypeTypeIn,
    OppositeParallelLinesPointSamplingStrategyTypeVal OppositeParallelLinesPointSamplingStrategyTypeValueIn);
  ~OppositeParallelLinesPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelLinesPointSamplingStrategyTypeType;
  OppositeParallelLinesPointSamplingStrategyTypeVal OppositeParallelLinesPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class OppositeParallelPlanesPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  OppositeParallelPlanesPointSamplingStrategyType();
  OppositeParallelPlanesPointSamplingStrategyType(
    OppositeParallelPlanesPointSamplingStrategyTypeChoicePair * OppositeParallelPlanesPointSamplingStrategyTypePairIn);
  ~OppositeParallelPlanesPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  OppositeParallelPlanesPointSamplingStrategyTypeChoicePair * getOppositeParallelPlanesPointSamplingStrategyTypePair();
  void setOppositeParallelPlanesPointSamplingStrategyTypePair(OppositeParallelPlanesPointSamplingStrategyTypeChoicePair * OppositeParallelPlanesPointSamplingStrategyTypePairIn);

protected:
  OppositeParallelPlanesPointSamplingStrategyTypeChoicePair * OppositeParallelPlanesPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union OppositeParallelPlanesPointSamplingStrategyTypeVal
{
  PlanePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class OppositeParallelPlanesPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  OppositeParallelPlanesPointSamplingStrategyTypeChoicePair();
  OppositeParallelPlanesPointSamplingStrategyTypeChoicePair(
    whichOne OppositeParallelPlanesPointSamplingStrategyTypeTypeIn,
    OppositeParallelPlanesPointSamplingStrategyTypeVal OppositeParallelPlanesPointSamplingStrategyTypeValueIn);
  ~OppositeParallelPlanesPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelPlanesPointSamplingStrategyTypeType;
  OppositeParallelPlanesPointSamplingStrategyTypeVal OppositeParallelPlanesPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class PlanePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  PlanePointSamplingStrategyType();
  PlanePointSamplingStrategyType(
    PlanePointSamplingStrategyTypeChoicePair * PlanePointSamplingStrategyTypePairIn);
  ~PlanePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  PlanePointSamplingStrategyTypeChoicePair * getPlanePointSamplingStrategyTypePair();
  void setPlanePointSamplingStrategyTypePair(PlanePointSamplingStrategyTypeChoicePair * PlanePointSamplingStrategyTypePairIn);

protected:
  PlanePointSamplingStrategyTypeChoicePair * PlanePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union PlanePointSamplingStrategyTypeVal
{
  PlanePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class PlanePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  PlanePointSamplingStrategyTypeChoicePair();
  PlanePointSamplingStrategyTypeChoicePair(
    whichOne PlanePointSamplingStrategyTypeTypeIn,
    PlanePointSamplingStrategyTypeVal PlanePointSamplingStrategyTypeValueIn);
  ~PlanePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PlanePointSamplingStrategyTypeType;
  PlanePointSamplingStrategyTypeVal PlanePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class PointDefinedCurvePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  PointDefinedCurvePointSamplingStrategyType();
  PointDefinedCurvePointSamplingStrategyType(
    PointDefinedCurvePointSamplingStrategyTypeChoicePair * PointDefinedCurvePointSamplingStrategyTypePairIn);
  ~PointDefinedCurvePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  PointDefinedCurvePointSamplingStrategyTypeChoicePair * getPointDefinedCurvePointSamplingStrategyTypePair();
  void setPointDefinedCurvePointSamplingStrategyTypePair(PointDefinedCurvePointSamplingStrategyTypeChoicePair * PointDefinedCurvePointSamplingStrategyTypePairIn);

protected:
  PointDefinedCurvePointSamplingStrategyTypeChoicePair * PointDefinedCurvePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union PointDefinedCurvePointSamplingStrategyTypeVal
{
  PointDefinedPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class PointDefinedCurvePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  PointDefinedCurvePointSamplingStrategyTypeChoicePair();
  PointDefinedCurvePointSamplingStrategyTypeChoicePair(
    whichOne PointDefinedCurvePointSamplingStrategyTypeTypeIn,
    PointDefinedCurvePointSamplingStrategyTypeVal PointDefinedCurvePointSamplingStrategyTypeValueIn);
  ~PointDefinedCurvePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedCurvePointSamplingStrategyTypeType;
  PointDefinedCurvePointSamplingStrategyTypeVal PointDefinedCurvePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class PointDefinedSurfacePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  PointDefinedSurfacePointSamplingStrategyType();
  PointDefinedSurfacePointSamplingStrategyType(
    PointDefinedSurfacePointSamplingStrategyTypeChoicePair * PointDefinedSurfacePointSamplingStrategyTypePairIn);
  ~PointDefinedSurfacePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  PointDefinedSurfacePointSamplingStrategyTypeChoicePair * getPointDefinedSurfacePointSamplingStrategyTypePair();
  void setPointDefinedSurfacePointSamplingStrategyTypePair(PointDefinedSurfacePointSamplingStrategyTypeChoicePair * PointDefinedSurfacePointSamplingStrategyTypePairIn);

protected:
  PointDefinedSurfacePointSamplingStrategyTypeChoicePair * PointDefinedSurfacePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union PointDefinedSurfacePointSamplingStrategyTypeVal
{
  PointDefinedPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class PointDefinedSurfacePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  PointDefinedSurfacePointSamplingStrategyTypeChoicePair();
  PointDefinedSurfacePointSamplingStrategyTypeChoicePair(
    whichOne PointDefinedSurfacePointSamplingStrategyTypeTypeIn,
    PointDefinedSurfacePointSamplingStrategyTypeVal PointDefinedSurfacePointSamplingStrategyTypeValueIn);
  ~PointDefinedSurfacePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedSurfacePointSamplingStrategyTypeType;
  PointDefinedSurfacePointSamplingStrategyTypeVal PointDefinedSurfacePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class PointPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  PointPointSamplingStrategyType();
  PointPointSamplingStrategyType(
    PointPointSamplingStrategyTypeChoicePair * PointPointSamplingStrategyTypePairIn);
  ~PointPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  PointPointSamplingStrategyTypeChoicePair * getPointPointSamplingStrategyTypePair();
  void setPointPointSamplingStrategyTypePair(PointPointSamplingStrategyTypeChoicePair * PointPointSamplingStrategyTypePairIn);

protected:
  PointPointSamplingStrategyTypeChoicePair * PointPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union PointPointSamplingStrategyTypeVal
{
  PointPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class PointPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  PointPointSamplingStrategyTypeChoicePair();
  PointPointSamplingStrategyTypeChoicePair(
    whichOne PointPointSamplingStrategyTypeTypeIn,
    PointPointSamplingStrategyTypeVal PointPointSamplingStrategyTypeValueIn);
  ~PointPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointPointSamplingStrategyTypeType;
  PointPointSamplingStrategyTypeVal PointPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class QIFMayType :
  public ApplicabilityBaseType
{
public:
  QIFMayType();
  QIFMayType(
    ZeroToOneType * desirabilityIn);
  ~QIFMayType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ZeroToOneType * getdesirability();
  void setdesirability(ZeroToOneType * desirabilityIn);

protected:
  ZeroToOneType * desirability;
};

/* ***************************************************************** */

class QIFMustNotType :
  public ApplicabilityBaseType
{
public:
  QIFMustNotType();
  ~QIFMustNotType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QIFMustType :
  public ApplicabilityBaseType
{
public:
  QIFMustType();
  ~QIFMustType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QIFRuleBaseType :
  public XmlTypeBase
{
public:
  QIFRuleBaseType();
  QIFRuleBaseType(
    QPIdType * UUIDIn);
  QIFRuleBaseType(
    XmlToken * nameIn,
    QPIdType * UUIDIn);
  ~QIFRuleBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getname();
  void setname(XmlToken * nameIn);

  QPIdType * getUUID();
  void setUUID(QPIdType * UUIDIn);

protected:
  XmlToken * name;
  QPIdType * UUID;
};

/* ***************************************************************** */

class QIFRulesType :
  public XmlTypeBase
{
public:
  QIFRulesType();
  QIFRulesType(
    VersionType * VersionIn,
    RulesUnitsType * RulesUnitsIn,
    FeatureRulesType * FeatureRulesIn,
    DMESelectionRulesType * DMESelectionRulesIn);
  ~QIFRulesType();
  void printSelf(FILE * outFile);

  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);
  RulesUnitsType * getRulesUnits();
  void setRulesUnits(RulesUnitsType * RulesUnitsIn);
  FeatureRulesType * getFeatureRules();
  void setFeatureRules(FeatureRulesType * FeatureRulesIn);
  DMESelectionRulesType * getDMESelectionRules();
  void setDMESelectionRules(DMESelectionRulesType * DMESelectionRulesIn);

protected:
  VersionType * Version;
  RulesUnitsType * RulesUnits;
  FeatureRulesType * FeatureRules;
  DMESelectionRulesType * DMESelectionRules;
};

/* ***************************************************************** */

class RulesUnitsType :
  public XmlTypeBase
{
public:
  RulesUnitsType();
  RulesUnitsType(
    AreaUnitType * AreaUnitIn,
    AngularUnitType * AngularUnitIn,
    ForceUnitType * ForceUnitIn,
    LinearUnitType * LinearUnitIn,
    MassUnitType * MassUnitIn,
    PressureUnitType * PressureUnitIn,
    SpeedUnitType * SpeedUnitIn,
    TemperatureUnitType * TemperatureUnitIn,
    TimeUnitType * TimeUnitIn);
  RulesUnitsType(
    NaturalType * nIn,
    AreaUnitType * AreaUnitIn,
    AngularUnitType * AngularUnitIn,
    ForceUnitType * ForceUnitIn,
    LinearUnitType * LinearUnitIn,
    MassUnitType * MassUnitIn,
    PressureUnitType * PressureUnitIn,
    SpeedUnitType * SpeedUnitIn,
    TemperatureUnitType * TemperatureUnitIn,
    TimeUnitType * TimeUnitIn);
  ~RulesUnitsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AreaUnitType * getAreaUnit();
  void setAreaUnit(AreaUnitType * AreaUnitIn);
  AngularUnitType * getAngularUnit();
  void setAngularUnit(AngularUnitType * AngularUnitIn);
  ForceUnitType * getForceUnit();
  void setForceUnit(ForceUnitType * ForceUnitIn);
  LinearUnitType * getLinearUnit();
  void setLinearUnit(LinearUnitType * LinearUnitIn);
  MassUnitType * getMassUnit();
  void setMassUnit(MassUnitType * MassUnitIn);
  PressureUnitType * getPressureUnit();
  void setPressureUnit(PressureUnitType * PressureUnitIn);
  SpeedUnitType * getSpeedUnit();
  void setSpeedUnit(SpeedUnitType * SpeedUnitIn);
  TemperatureUnitType * getTemperatureUnit();
  void setTemperatureUnit(TemperatureUnitType * TemperatureUnitIn);
  TimeUnitType * getTimeUnit();
  void setTimeUnit(TimeUnitType * TimeUnitIn);

protected:
  NaturalType * n;
  AreaUnitType * AreaUnit;
  AngularUnitType * AngularUnit;
  ForceUnitType * ForceUnit;
  LinearUnitType * LinearUnit;
  MassUnitType * MassUnit;
  PressureUnitType * PressureUnit;
  SpeedUnitType * SpeedUnit;
  TemperatureUnitType * TemperatureUnit;
  TimeUnitType * TimeUnit;
};

/* ***************************************************************** */

class SpherePointSamplingStrategyType :
  public XmlTypeBase
{
public:
  SpherePointSamplingStrategyType();
  SpherePointSamplingStrategyType(
    SpherePointSamplingStrategyTypeChoicePair * SpherePointSamplingStrategyTypePairIn);
  ~SpherePointSamplingStrategyType();
  void printSelf(FILE * outFile);

  SpherePointSamplingStrategyTypeChoicePair * getSpherePointSamplingStrategyTypePair();
  void setSpherePointSamplingStrategyTypePair(SpherePointSamplingStrategyTypeChoicePair * SpherePointSamplingStrategyTypePairIn);

protected:
  SpherePointSamplingStrategyTypeChoicePair * SpherePointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union SpherePointSamplingStrategyTypeVal
{
  SpherePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class SpherePointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  SpherePointSamplingStrategyTypeChoicePair();
  SpherePointSamplingStrategyTypeChoicePair(
    whichOne SpherePointSamplingStrategyTypeTypeIn,
    SpherePointSamplingStrategyTypeVal SpherePointSamplingStrategyTypeValueIn);
  ~SpherePointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SpherePointSamplingStrategyTypeType;
  SpherePointSamplingStrategyTypeVal SpherePointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class SphericalSegmentPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  SphericalSegmentPointSamplingStrategyType();
  SphericalSegmentPointSamplingStrategyType(
    SphericalSegmentPointSamplingStrategyTypeChoicePair * SphericalSegmentPointSamplingStrategyTypePairIn);
  ~SphericalSegmentPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  SphericalSegmentPointSamplingStrategyTypeChoicePair * getSphericalSegmentPointSamplingStrategyTypePair();
  void setSphericalSegmentPointSamplingStrategyTypePair(SphericalSegmentPointSamplingStrategyTypeChoicePair * SphericalSegmentPointSamplingStrategyTypePairIn);

protected:
  SphericalSegmentPointSamplingStrategyTypeChoicePair * SphericalSegmentPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union SphericalSegmentPointSamplingStrategyTypeVal
{
  SpherePointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class SphericalSegmentPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  SphericalSegmentPointSamplingStrategyTypeChoicePair();
  SphericalSegmentPointSamplingStrategyTypeChoicePair(
    whichOne SphericalSegmentPointSamplingStrategyTypeTypeIn,
    SphericalSegmentPointSamplingStrategyTypeVal SphericalSegmentPointSamplingStrategyTypeValueIn);
  ~SphericalSegmentPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphericalSegmentPointSamplingStrategyTypeType;
  SphericalSegmentPointSamplingStrategyTypeVal SphericalSegmentPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class SurfaceOfRevolutionPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  SurfaceOfRevolutionPointSamplingStrategyType();
  SurfaceOfRevolutionPointSamplingStrategyType(
    SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair * SurfaceOfRevolutionPointSamplingStrategyTypePairIn);
  ~SurfaceOfRevolutionPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair * getSurfaceOfRevolutionPointSamplingStrategyTypePair();
  void setSurfaceOfRevolutionPointSamplingStrategyTypePair(SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair * SurfaceOfRevolutionPointSamplingStrategyTypePairIn);

protected:
  SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair * SurfaceOfRevolutionPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union SurfaceOfRevolutionPointSamplingStrategyTypeVal
{
  SurfaceOfRevolutionPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair();
  SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair(
    whichOne SurfaceOfRevolutionPointSamplingStrategyTypeTypeIn,
    SurfaceOfRevolutionPointSamplingStrategyTypeVal SurfaceOfRevolutionPointSamplingStrategyTypeValueIn);
  ~SurfaceOfRevolutionPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SurfaceOfRevolutionPointSamplingStrategyTypeType;
  SurfaceOfRevolutionPointSamplingStrategyTypeVal SurfaceOfRevolutionPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class ThenPointsType :
  public XmlTypeBase
{
public:
  ThenPointsType();
  ThenPointsType(
    ThenPointsTypeChoicePair * ThenPointsTypePairIn);
  ~ThenPointsType();
  void printSelf(FILE * outFile);

  ThenPointsTypeChoicePair * getThenPointsTypePair();
  void setThenPointsTypePair(ThenPointsTypeChoicePair * ThenPointsTypePairIn);

protected:
  ThenPointsTypeChoicePair * ThenPointsTypePair;
};

/* ***************************************************************** */

union ThenPointsTypeVal
{
  XmlUnsignedInt * NumberOfPoints;
  XmlUnsignedInt * MinPoints;
  PositiveDecimalType * PointDensity;
  PositiveDecimalType * MinPointDensity;
};

/* ***************************************************************** */

class ThenPointsTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NumberOfPointsE,
    MinPointsE,
    PointDensityE,
    MinPointDensityE };
  ThenPointsTypeChoicePair();
  ThenPointsTypeChoicePair(
    whichOne ThenPointsTypeTypeIn,
    ThenPointsTypeVal ThenPointsTypeValueIn);
  ~ThenPointsTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThenPointsTypeType;
  ThenPointsTypeVal ThenPointsTypeValue;
};

/* ***************************************************************** */

class ToroidalSegmentPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  ToroidalSegmentPointSamplingStrategyType();
  ToroidalSegmentPointSamplingStrategyType(
    ToroidalSegmentPointSamplingStrategyTypeChoicePair * ToroidalSegmentPointSamplingStrategyTypePairIn);
  ~ToroidalSegmentPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  ToroidalSegmentPointSamplingStrategyTypeChoicePair * getToroidalSegmentPointSamplingStrategyTypePair();
  void setToroidalSegmentPointSamplingStrategyTypePair(ToroidalSegmentPointSamplingStrategyTypeChoicePair * ToroidalSegmentPointSamplingStrategyTypePairIn);

protected:
  ToroidalSegmentPointSamplingStrategyTypeChoicePair * ToroidalSegmentPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union ToroidalSegmentPointSamplingStrategyTypeVal
{
  SurfaceOfRevolutionPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class ToroidalSegmentPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  ToroidalSegmentPointSamplingStrategyTypeChoicePair();
  ToroidalSegmentPointSamplingStrategyTypeChoicePair(
    whichOne ToroidalSegmentPointSamplingStrategyTypeTypeIn,
    ToroidalSegmentPointSamplingStrategyTypeVal ToroidalSegmentPointSamplingStrategyTypeValueIn);
  ~ToroidalSegmentPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToroidalSegmentPointSamplingStrategyTypeType;
  ToroidalSegmentPointSamplingStrategyTypeVal ToroidalSegmentPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class TorusPointSamplingStrategyType :
  public XmlTypeBase
{
public:
  TorusPointSamplingStrategyType();
  TorusPointSamplingStrategyType(
    TorusPointSamplingStrategyTypeChoicePair * TorusPointSamplingStrategyTypePairIn);
  ~TorusPointSamplingStrategyType();
  void printSelf(FILE * outFile);

  TorusPointSamplingStrategyTypeChoicePair * getTorusPointSamplingStrategyTypePair();
  void setTorusPointSamplingStrategyTypePair(TorusPointSamplingStrategyTypeChoicePair * TorusPointSamplingStrategyTypePairIn);

protected:
  TorusPointSamplingStrategyTypeChoicePair * TorusPointSamplingStrategyTypePair;
};

/* ***************************************************************** */

union TorusPointSamplingStrategyTypeVal
{
  SurfaceOfRevolutionPointSamplingStrategyEnumType * PointSamplingStrategyEnum;
  XmlToken * UserDefinedStrategy;
};

/* ***************************************************************** */

class TorusPointSamplingStrategyTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointSamplingStrategyEnumE,
    UserDefinedStrategyE };
  TorusPointSamplingStrategyTypeChoicePair();
  TorusPointSamplingStrategyTypeChoicePair(
    whichOne TorusPointSamplingStrategyTypeTypeIn,
    TorusPointSamplingStrategyTypeVal TorusPointSamplingStrategyTypeValueIn);
  ~TorusPointSamplingStrategyTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TorusPointSamplingStrategyTypeType;
  TorusPointSamplingStrategyTypeVal TorusPointSamplingStrategyTypeValue;
};

/* ***************************************************************** */

class ZeroToOneType :
  public XmlDouble
{
public:
  ZeroToOneType();
  ZeroToOneType(
    const char * valIn);
  ~ZeroToOneType();
  bool ZeroToOneTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class IfThenDMERuleType :
  public QIFRuleBaseType
{
public:
  IfThenDMERuleType();
  IfThenDMERuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    DMEThenType * DMEThenIn);
  IfThenDMERuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    DMEThenType * DMEThenIn);
  ~IfThenDMERuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  BooleanExpressionBaseType * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn);
  DMEThenType * getDMEThen();
  void setDMEThen(DMEThenType * DMEThenIn);

protected:
  BooleanExpressionBaseType * BooleanExpression;
  DMEThenType * DMEThen;
};

/* ***************************************************************** */

class IfThenDMERuleTypeLisd :
  public std::list<IfThenDMERuleType *>,
  public XmlSchemaInstanceBase
{
public:
  IfThenDMERuleTypeLisd();
  IfThenDMERuleTypeLisd(
    IfThenDMERuleType * aIfThenDMERuleType);
  ~IfThenDMERuleTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointRuleBaseType :
  public QIFRuleBaseType
{
public:
  PointRuleBaseType();
  PointRuleBaseType(
    QPIdType * UUIDIn);
  PointRuleBaseType(
    XmlToken * nameIn,
    QPIdType * UUIDIn);
  ~PointRuleBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class ElseRuleType :
  public PointRuleBaseType
{
public:
  ElseRuleType();
  ElseRuleType(
    QPIdType * UUIDIn,
    ThenPointsType * ThenPointsIn);
  ElseRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    ThenPointsType * ThenPointsIn);
  ~ElseRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ThenPointsType * getThenPoints();
  void setThenPoints(ThenPointsType * ThenPointsIn);

protected:
  ThenPointsType * ThenPoints;
};

/* ***************************************************************** */

class IfThenFeatureRuleType :
  public PointRuleBaseType
{
public:
  IfThenFeatureRuleType();
  IfThenFeatureRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn);
  IfThenFeatureRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn);
  ~IfThenFeatureRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  BooleanExpressionBaseType * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn);
  ThenPointsType * getThenPoints();
  void setThenPoints(ThenPointsType * ThenPointsIn);

protected:
  BooleanExpressionBaseType * BooleanExpression;
  ThenPointsType * ThenPoints;
};

/* ***************************************************************** */

class IfThenFeatureRuleTypeLisd :
  public std::list<IfThenFeatureRuleType *>,
  public XmlSchemaInstanceBase
{
public:
  IfThenFeatureRuleTypeLisd();
  IfThenFeatureRuleTypeLisd(
    IfThenFeatureRuleType * aIfThenFeatureRuleType);
  ~IfThenFeatureRuleTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class IfThenLineRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenLineRuleType();
  IfThenLineRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    LinePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenLineRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    LinePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenLineRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(LinePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  LinePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenOppositeAngledLinesRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenOppositeAngledLinesRuleType();
  IfThenOppositeAngledLinesRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeAngledLinesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenOppositeAngledLinesRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeAngledLinesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenOppositeAngledLinesRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeAngledLinesPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(OppositeAngledLinesPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  OppositeAngledLinesPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenOppositeAngledPlanesRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenOppositeAngledPlanesRuleType();
  IfThenOppositeAngledPlanesRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeAngledPlanesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenOppositeAngledPlanesRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeAngledPlanesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenOppositeAngledPlanesRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeAngledPlanesPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(OppositeAngledPlanesPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  OppositeAngledPlanesPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenOppositeParallelLinesRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenOppositeParallelLinesRuleType();
  IfThenOppositeParallelLinesRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeParallelLinesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenOppositeParallelLinesRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeParallelLinesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenOppositeParallelLinesRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeParallelLinesPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(OppositeParallelLinesPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  OppositeParallelLinesPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenOppositeParallelPlanesRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenOppositeParallelPlanesRuleType();
  IfThenOppositeParallelPlanesRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeParallelPlanesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenOppositeParallelPlanesRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    OppositeParallelPlanesPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenOppositeParallelPlanesRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeParallelPlanesPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(OppositeParallelPlanesPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  OppositeParallelPlanesPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenPlaneRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenPlaneRuleType();
  IfThenPlaneRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PlanePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenPlaneRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PlanePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenPlaneRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PlanePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(PlanePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  PlanePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenPointDefinedCurveRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenPointDefinedCurveRuleType();
  IfThenPointDefinedCurveRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PointDefinedCurvePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenPointDefinedCurveRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PointDefinedCurvePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenPointDefinedCurveRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointDefinedCurvePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(PointDefinedCurvePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  PointDefinedCurvePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenPointDefinedSurfaceRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenPointDefinedSurfaceRuleType();
  IfThenPointDefinedSurfaceRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PointDefinedSurfacePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenPointDefinedSurfaceRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PointDefinedSurfacePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenPointDefinedSurfaceRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointDefinedSurfacePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(PointDefinedSurfacePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  PointDefinedSurfacePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenPointRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenPointRuleType();
  IfThenPointRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PointPointSamplingStrategyType * ThenPointStrategyIn);
  IfThenPointRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    PointPointSamplingStrategyType * ThenPointStrategyIn);
  ~IfThenPointRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(PointPointSamplingStrategyType * ThenPointStrategyIn);

protected:
  PointPointSamplingStrategyType * ThenPointStrategy;
};

/* ***************************************************************** */

class IfThenSphereRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenSphereRuleType();
  IfThenSphereRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    SpherePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenSphereRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    SpherePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenSphereRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SpherePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(SpherePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  SpherePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenSphericalSegmentRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenSphericalSegmentRuleType();
  IfThenSphericalSegmentRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    SphericalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenSphericalSegmentRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    SphericalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenSphericalSegmentRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SphericalSegmentPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(SphericalSegmentPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  SphericalSegmentPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenSurfaceOfRevolutionRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenSurfaceOfRevolutionRuleType();
  IfThenSurfaceOfRevolutionRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    SurfaceOfRevolutionPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenSurfaceOfRevolutionRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    SurfaceOfRevolutionPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenSurfaceOfRevolutionRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SurfaceOfRevolutionPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(SurfaceOfRevolutionPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  SurfaceOfRevolutionPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenSurfaceRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenSurfaceRuleType();
  IfThenSurfaceRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn);
  IfThenSurfaceRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn);
  ~IfThenSurfaceRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class IfThenToroidalSegmentRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenToroidalSegmentRuleType();
  IfThenToroidalSegmentRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ToroidalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenToroidalSegmentRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ToroidalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenToroidalSegmentRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ToroidalSegmentPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(ToroidalSegmentPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  ToroidalSegmentPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenTorusRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenTorusRuleType();
  IfThenTorusRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    TorusPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenTorusRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    TorusPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenTorusRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TorusPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(TorusPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  TorusPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenCircleRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenCircleRuleType();
  IfThenCircleRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CirclePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenCircleRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CirclePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenCircleRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CirclePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(CirclePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  CirclePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenCircularArcRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenCircularArcRuleType();
  IfThenCircularArcRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CircularArcPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenCircularArcRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CircularArcPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenCircularArcRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CircularArcPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(CircularArcPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  CircularArcPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenConeRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenConeRuleType();
  IfThenConeRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ConePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenConeRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ConePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenConeRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ConePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(ConePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  ConePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenConicalSegmentRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenConicalSegmentRuleType();
  IfThenConicalSegmentRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ConicalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenConicalSegmentRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ConicalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenConicalSegmentRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ConicalSegmentPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(ConicalSegmentPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  ConicalSegmentPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenCurveRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenCurveRuleType();
  IfThenCurveRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn);
  IfThenCurveRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn);
  ~IfThenCurveRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class IfThenCylinderRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenCylinderRuleType();
  IfThenCylinderRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CylinderPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenCylinderRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CylinderPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenCylinderRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CylinderPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(CylinderPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  CylinderPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenCylindricalSegmentRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenCylindricalSegmentRuleType();
  IfThenCylindricalSegmentRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CylindricalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenCylindricalSegmentRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    CylindricalSegmentPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenCylindricalSegmentRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CylindricalSegmentPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(CylindricalSegmentPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  CylindricalSegmentPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenEllipseRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenEllipseRuleType();
  IfThenEllipseRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    EllipsePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenEllipseRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    EllipsePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenEllipseRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  EllipsePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(EllipsePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  EllipsePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenEllipticalArcRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenEllipticalArcRuleType();
  IfThenEllipticalArcRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    EllipticalArcPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenEllipticalArcRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    EllipticalArcPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenEllipticalArcRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  EllipticalArcPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(EllipticalArcPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  EllipticalArcPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenElongatedCircleRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenElongatedCircleRuleType();
  IfThenElongatedCircleRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ElongatedCirclePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenElongatedCircleRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ElongatedCirclePointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenElongatedCircleRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ElongatedCirclePointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(ElongatedCirclePointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  ElongatedCirclePointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenElongatedCylinderRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenElongatedCylinderRuleType();
  IfThenElongatedCylinderRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ElongatedCylinderPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenElongatedCylinderRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ElongatedCylinderPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenElongatedCylinderRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ElongatedCylinderPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(ElongatedCylinderPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  ElongatedCylinderPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

class IfThenExtrudedCrossSectionRuleType :
  public IfThenFeatureRuleType
{
public:
  IfThenExtrudedCrossSectionRuleType();
  IfThenExtrudedCrossSectionRuleType(
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ExtrudedCrossSectionPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  IfThenExtrudedCrossSectionRuleType(
    XmlToken * nameIn,
    QPIdType * UUIDIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    ThenPointsType * ThenPointsIn,
    ExtrudedCrossSectionPointSamplingStrategyType * ThenPointStrategyIn,
    SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);
  ~IfThenExtrudedCrossSectionRuleType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExtrudedCrossSectionPointSamplingStrategyType * getThenPointStrategy();
  void setThenPointStrategy(ExtrudedCrossSectionPointSamplingStrategyType * ThenPointStrategyIn);
  SubstituteFeatureAlgorithmType * getThenFittingAlgorithm();
  void setThenFittingAlgorithm(SubstituteFeatureAlgorithmType * ThenFittingAlgorithmIn);

protected:
  ExtrudedCrossSectionPointSamplingStrategyType * ThenPointStrategy;
  SubstituteFeatureAlgorithmType * ThenFittingAlgorithm;
};

/* ***************************************************************** */

#endif // QIFRULES_HH
