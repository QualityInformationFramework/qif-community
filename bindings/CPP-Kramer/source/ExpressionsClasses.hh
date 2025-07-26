/* ***************************************************************** */

#ifndef EXPRESSIONS_HH
#define EXPRESSIONS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPMIClasses.hh"

/* ***************************************************************** */

class AndType;
class ArithmeticCharacteristicParameterType;
class ArithmeticComparisonBaseType;
class ArithmeticComparisonEnumType;
class ArithmeticConstantType;
class ArithmeticDMEParameterType;
class ArithmeticEqualType;
class ArithmeticExpressionBaseType;
class ArithmeticExpressionBaseTypeLisd;
class ArithmeticFeatureParameterType;
class ArithmeticParameterBaseType;
class ArithmeticParameterValueType;
class ArithmeticPartParameterType;
class BinaryArithmeticExpressionBaseType;
class BinaryBooleanExpressionBaseType;
class BooleanConstantEnumType;
class BooleanEqualType;
class BooleanExpressionBaseType;
class BooleanExpressionBaseTypeLisd;
class CharacteristicIsType;
class CharacteristicToleranceType;
class CharacteristicTypeEnumType;
class ClosedCurvePointSamplingStrategyEnumType;
class ConePointSamplingStrategyEnumType;
class ConstantIsType;
class DMEClassNameEnumType;
class DividedByType;
class ElongatedCylinderPointSamplingStrategyEnumType;
class ExtrudedCrossSectionPointSamplingStrategyEnumType;
class FeatureAreaType;
class FeatureIsDatumType;
class FeatureIsInternalType;
class FeatureLengthType;
class FeatureSizeType;
class FeatureTypeEnumType;
class FeatureTypeIsType;
class GreaterOrEqualType;
class GreaterThanType;
class LessOrEqualType;
class LessThanType;
class MaxType;
class MinType;
class MinusType;
class NegateType;
class NotType;
class OpenCurvePointSamplingStrategyEnumType;
class OrType;
class PlanePointSamplingStrategyEnumType;
class PlusType;
class PointDefinedPointSamplingStrategyEnumType;
class PointPointSamplingStrategyEnumType;
class PointSamplingStrategyEnumBaseType;
class PolyadicArithmeticExpressionBaseType;
class SamplingCategoryIsType;
class ShapeClassIsType;
class SpherePointSamplingStrategyEnumType;
class SurfaceOfRevolutionPointSamplingStrategyEnumType;
class TimesType;
class TokenConstantType;
class TokenEqualType;
class TokenExpressionBaseType;
class TokenExpressionBaseTypeLisd;
class TokenParameterValueType;
class VariableValueType;

/* ***************************************************************** */
/* ***************************************************************** */

class ArithmeticComparisonEnumType :
  public XmlNMTOKEN
{
public:
  ArithmeticComparisonEnumType();
  ArithmeticComparisonEnumType(
    const char * valIn);
  ~ArithmeticComparisonEnumType();
  bool ArithmeticComparisonEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ArithmeticExpressionBaseType :
  public XmlTypeBase
{
public:
  ArithmeticExpressionBaseType();
  virtual ~ArithmeticExpressionBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ArithmeticExpressionBaseTypeLisd :
  public std::list<ArithmeticExpressionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  ArithmeticExpressionBaseTypeLisd();
  ArithmeticExpressionBaseTypeLisd(
    ArithmeticExpressionBaseType * aArithmeticExpressionBaseType);
  ~ArithmeticExpressionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ArithmeticParameterBaseType :
  public ArithmeticExpressionBaseType
{
public:
  ArithmeticParameterBaseType();
  ArithmeticParameterBaseType(
    XmlToken * ParameterIn);
  virtual ~ArithmeticParameterBaseType();
  void printSelf(FILE * outFile);

  XmlToken * getParameter();
  void setParameter(XmlToken * ParameterIn);

protected:
  XmlToken * Parameter;
};

/* ***************************************************************** */

class ArithmeticParameterValueType :
  public ArithmeticExpressionBaseType
{
public:
  ArithmeticParameterValueType();
  ArithmeticParameterValueType(
    XmlToken * ParameterIn,
    QIFReferenceFullType * ObjectIdIn);
  ~ArithmeticParameterValueType();
  void printSelf(FILE * outFile);

  XmlToken * getParameter();
  void setParameter(XmlToken * ParameterIn);
  QIFReferenceFullType * getObjectId();
  void setObjectId(QIFReferenceFullType * ObjectIdIn);

protected:
  XmlToken * Parameter;
  QIFReferenceFullType * ObjectId;
};

/* ***************************************************************** */

class ArithmeticPartParameterType :
  public ArithmeticParameterBaseType
{
public:
  ArithmeticPartParameterType();
  ArithmeticPartParameterType(
    XmlToken * ParameterIn);
  ~ArithmeticPartParameterType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class BinaryArithmeticExpressionBaseType :
  public ArithmeticExpressionBaseType
{
public:
  BinaryArithmeticExpressionBaseType();
  BinaryArithmeticExpressionBaseType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  virtual ~BinaryArithmeticExpressionBaseType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseTypeLisd * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseTypeLisd *);

protected:
  ArithmeticExpressionBaseTypeLisd * ArithmeticExpression;
};

/* ***************************************************************** */

class BooleanConstantEnumType :
  public XmlNMTOKEN
{
public:
  BooleanConstantEnumType();
  BooleanConstantEnumType(
    const char * valIn);
  ~BooleanConstantEnumType();
  bool BooleanConstantEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class BooleanExpressionBaseType :
  public XmlTypeBase
{
public:
  BooleanExpressionBaseType();
  virtual ~BooleanExpressionBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class BooleanExpressionBaseTypeLisd :
  public std::list<BooleanExpressionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  BooleanExpressionBaseTypeLisd();
  BooleanExpressionBaseTypeLisd(
    BooleanExpressionBaseType * aBooleanExpressionBaseType);
  ~BooleanExpressionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CharacteristicIsType :
  public BooleanExpressionBaseType
{
public:
  CharacteristicIsType();
  CharacteristicIsType(
    CharacteristicTypeEnumType * valIn);
  ~CharacteristicIsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CharacteristicTypeEnumType * getval();
  void setval(CharacteristicTypeEnumType * valIn);

protected:
  CharacteristicTypeEnumType * val;
};

/* ***************************************************************** */

class CharacteristicToleranceType :
  public ArithmeticExpressionBaseType
{
public:
  CharacteristicToleranceType();
  ~CharacteristicToleranceType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CharacteristicTypeEnumType :
  public XmlNMTOKEN
{
public:
  CharacteristicTypeEnumType();
  CharacteristicTypeEnumType(
    const char * valIn);
  ~CharacteristicTypeEnumType();
  bool CharacteristicTypeEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ClosedCurvePointSamplingStrategyEnumType :
  public XmlNMTOKEN
{
public:
  ClosedCurvePointSamplingStrategyEnumType();
  ClosedCurvePointSamplingStrategyEnumType(
    const char * valIn);
  ~ClosedCurvePointSamplingStrategyEnumType();
  bool ClosedCurvePointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ConstantIsType :
  public BooleanExpressionBaseType
{
public:
  ConstantIsType();
  ConstantIsType(
    BooleanConstantEnumType * valIn);
  ~ConstantIsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  BooleanConstantEnumType * getval();
  void setval(BooleanConstantEnumType * valIn);

protected:
  BooleanConstantEnumType * val;
};

/* ***************************************************************** */

class DMEClassNameEnumType :
  public XmlNMTOKEN
{
public:
  DMEClassNameEnumType();
  DMEClassNameEnumType(
    const char * valIn);
  ~DMEClassNameEnumType();
  bool DMEClassNameEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DividedByType :
  public BinaryArithmeticExpressionBaseType
{
public:
  DividedByType();
  DividedByType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~DividedByType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureAreaType :
  public ArithmeticExpressionBaseType
{
public:
  FeatureAreaType();
  ~FeatureAreaType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureIsDatumType :
  public BooleanExpressionBaseType
{
public:
  FeatureIsDatumType();
  ~FeatureIsDatumType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureIsInternalType :
  public BooleanExpressionBaseType
{
public:
  FeatureIsInternalType();
  ~FeatureIsInternalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureLengthType :
  public ArithmeticExpressionBaseType
{
public:
  FeatureLengthType();
  ~FeatureLengthType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureSizeType :
  public ArithmeticExpressionBaseType
{
public:
  FeatureSizeType();
  ~FeatureSizeType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureTypeEnumType :
  public XmlNMTOKEN
{
public:
  FeatureTypeEnumType();
  FeatureTypeEnumType(
    const char * valIn);
  ~FeatureTypeEnumType();
  bool FeatureTypeEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class FeatureTypeIsType :
  public BooleanExpressionBaseType
{
public:
  FeatureTypeIsType();
  FeatureTypeIsType(
    FeatureTypeEnumType * valIn);
  ~FeatureTypeIsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  FeatureTypeEnumType * getval();
  void setval(FeatureTypeEnumType * valIn);

protected:
  FeatureTypeEnumType * val;
};

/* ***************************************************************** */

class MinusType :
  public BinaryArithmeticExpressionBaseType
{
public:
  MinusType();
  MinusType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~MinusType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NegateType :
  public ArithmeticExpressionBaseType
{
public:
  NegateType();
  NegateType(
    ArithmeticExpressionBaseType * ArithmeticExpressionIn);
  ~NegateType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseType * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseType * ArithmeticExpressionIn);

protected:
  ArithmeticExpressionBaseType * ArithmeticExpression;
};

/* ***************************************************************** */

class NotType :
  public BooleanExpressionBaseType
{
public:
  NotType();
  NotType(
    BooleanExpressionBaseType * BooleanExpressionIn);
  ~NotType();
  void printSelf(FILE * outFile);

  BooleanExpressionBaseType * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn);

protected:
  BooleanExpressionBaseType * BooleanExpression;
};

/* ***************************************************************** */

class OrType :
  public BooleanExpressionBaseType
{
public:
  OrType();
  OrType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  OrType(
    NaturalType * nIn,
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  ~OrType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  BooleanExpressionBaseTypeLisd * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseTypeLisd *);

protected:
  NaturalType * n;
  BooleanExpressionBaseTypeLisd * BooleanExpression;
};

/* ***************************************************************** */

class PointDefinedPointSamplingStrategyEnumType :
  public XmlNMTOKEN
{
public:
  PointDefinedPointSamplingStrategyEnumType();
  PointDefinedPointSamplingStrategyEnumType(
    const char * valIn);
  ~PointDefinedPointSamplingStrategyEnumType();
  bool PointDefinedPointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class PointSamplingStrategyEnumBaseType :
  public XmlNMTOKEN
{
public:
  PointSamplingStrategyEnumBaseType();
  PointSamplingStrategyEnumBaseType(
    const char * valIn);
  ~PointSamplingStrategyEnumBaseType();
  bool PointSamplingStrategyEnumBaseTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class PolyadicArithmeticExpressionBaseType :
  public ArithmeticExpressionBaseType
{
public:
  PolyadicArithmeticExpressionBaseType();
  PolyadicArithmeticExpressionBaseType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  virtual ~PolyadicArithmeticExpressionBaseType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseTypeLisd * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseTypeLisd *);

protected:
  ArithmeticExpressionBaseTypeLisd * ArithmeticExpression;
};

/* ***************************************************************** */

class SamplingCategoryIsType :
  public BooleanExpressionBaseType
{
public:
  SamplingCategoryIsType();
  SamplingCategoryIsType(
    XmlUnsignedInt * valIn);
  ~SamplingCategoryIsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlUnsignedInt * getval();
  void setval(XmlUnsignedInt * valIn);

protected:
  XmlUnsignedInt * val;
};

/* ***************************************************************** */

class ShapeClassIsType :
  public BooleanExpressionBaseType
{
public:
  ShapeClassIsType();
  ShapeClassIsType(
    ShapeClassEnumType * valIn);
  ~ShapeClassIsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ShapeClassEnumType * getval();
  void setval(ShapeClassEnumType * valIn);

protected:
  ShapeClassEnumType * val;
};

/* ***************************************************************** */

class SpherePointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  SpherePointSamplingStrategyEnumType();
  SpherePointSamplingStrategyEnumType(
    const char * valIn);
  ~SpherePointSamplingStrategyEnumType();
  bool SpherePointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class SurfaceOfRevolutionPointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  SurfaceOfRevolutionPointSamplingStrategyEnumType();
  SurfaceOfRevolutionPointSamplingStrategyEnumType(
    const char * valIn);
  ~SurfaceOfRevolutionPointSamplingStrategyEnumType();
  bool SurfaceOfRevolutionPointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class TimesType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  TimesType();
  TimesType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~TimesType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TokenEqualType :
  public BooleanExpressionBaseType
{
public:
  TokenEqualType();
  TokenEqualType(
    TokenExpressionBaseTypeLisd * TokenExpressionIn);
  ~TokenEqualType();
  void printSelf(FILE * outFile);

  TokenExpressionBaseTypeLisd * getTokenExpression();
  void setTokenExpression(TokenExpressionBaseTypeLisd *);

protected:
  TokenExpressionBaseTypeLisd * TokenExpression;
};

/* ***************************************************************** */

class TokenExpressionBaseType :
  public XmlTypeBase
{
public:
  TokenExpressionBaseType();
  virtual ~TokenExpressionBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TokenExpressionBaseTypeLisd :
  public std::list<TokenExpressionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  TokenExpressionBaseTypeLisd();
  TokenExpressionBaseTypeLisd(
    TokenExpressionBaseType * aTokenExpressionBaseType);
  ~TokenExpressionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TokenParameterValueType :
  public TokenExpressionBaseType
{
public:
  TokenParameterValueType();
  TokenParameterValueType(
    XmlToken * ParameterIn,
    QIFReferenceFullType * ObjectIdIn);
  ~TokenParameterValueType();
  void printSelf(FILE * outFile);

  XmlToken * getParameter();
  void setParameter(XmlToken * ParameterIn);
  QIFReferenceFullType * getObjectId();
  void setObjectId(QIFReferenceFullType * ObjectIdIn);

protected:
  XmlToken * Parameter;
  QIFReferenceFullType * ObjectId;
};

/* ***************************************************************** */

class VariableValueType :
  public ArithmeticExpressionBaseType
{
public:
  VariableValueType();
  VariableValueType(
    XmlIDREF * VariableNameIn);
  ~VariableValueType();
  void printSelf(FILE * outFile);

  XmlIDREF * getVariableName();
  void setVariableName(XmlIDREF * VariableNameIn);

protected:
  XmlIDREF * VariableName;
};

/* ***************************************************************** */

class AndType :
  public BooleanExpressionBaseType
{
public:
  AndType();
  AndType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  AndType(
    NaturalType * nIn,
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  ~AndType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  BooleanExpressionBaseTypeLisd * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseTypeLisd *);

protected:
  NaturalType * n;
  BooleanExpressionBaseTypeLisd * BooleanExpression;
};

/* ***************************************************************** */

class ArithmeticCharacteristicParameterType :
  public ArithmeticParameterBaseType
{
public:
  ArithmeticCharacteristicParameterType();
  ArithmeticCharacteristicParameterType(
    XmlToken * ParameterIn,
    CharacteristicTypeEnumType * CharacteristicTypeEnumIn);
  ~ArithmeticCharacteristicParameterType();
  void printSelf(FILE * outFile);

  CharacteristicTypeEnumType * getCharacteristicTypeEnum();
  void setCharacteristicTypeEnum(CharacteristicTypeEnumType * CharacteristicTypeEnumIn);

protected:
  CharacteristicTypeEnumType * CharacteristicTypeEnum;
};

/* ***************************************************************** */

class ArithmeticComparisonBaseType :
  public BooleanExpressionBaseType
{
public:
  ArithmeticComparisonBaseType();
  ArithmeticComparisonBaseType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  virtual ~ArithmeticComparisonBaseType();
  void printSelf(FILE * outFile);

  ArithmeticExpressionBaseTypeLisd * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseTypeLisd *);

protected:
  ArithmeticExpressionBaseTypeLisd * ArithmeticExpression;
};

/* ***************************************************************** */

class ArithmeticConstantType :
  public ArithmeticExpressionBaseType
{
public:
  ArithmeticConstantType();
  ArithmeticConstantType(
    XmlDecimal * valIn);
  ~ArithmeticConstantType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getval();
  void setval(XmlDecimal * valIn);

protected:
  XmlDecimal * val;
};

/* ***************************************************************** */

class ArithmeticDMEParameterType :
  public ArithmeticParameterBaseType
{
public:
  ArithmeticDMEParameterType();
  ArithmeticDMEParameterType(
    XmlToken * ParameterIn,
    DMEClassNameEnumType * DMEClassNameEnumIn);
  ~ArithmeticDMEParameterType();
  void printSelf(FILE * outFile);

  DMEClassNameEnumType * getDMEClassNameEnum();
  void setDMEClassNameEnum(DMEClassNameEnumType * DMEClassNameEnumIn);

protected:
  DMEClassNameEnumType * DMEClassNameEnum;
};

/* ***************************************************************** */

class ArithmeticEqualType :
  public ArithmeticComparisonBaseType
{
public:
  ArithmeticEqualType();
  ArithmeticEqualType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~ArithmeticEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ArithmeticFeatureParameterType :
  public ArithmeticParameterBaseType
{
public:
  ArithmeticFeatureParameterType();
  ArithmeticFeatureParameterType(
    XmlToken * ParameterIn,
    FeatureTypeEnumType * FeatureTypeEnumIn);
  ~ArithmeticFeatureParameterType();
  void printSelf(FILE * outFile);

  FeatureTypeEnumType * getFeatureTypeEnum();
  void setFeatureTypeEnum(FeatureTypeEnumType * FeatureTypeEnumIn);

protected:
  FeatureTypeEnumType * FeatureTypeEnum;
};

/* ***************************************************************** */

class BinaryBooleanExpressionBaseType :
  public BooleanExpressionBaseType
{
public:
  BinaryBooleanExpressionBaseType();
  BinaryBooleanExpressionBaseType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  virtual ~BinaryBooleanExpressionBaseType();
  void printSelf(FILE * outFile);

  BooleanExpressionBaseTypeLisd * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseTypeLisd *);

protected:
  BooleanExpressionBaseTypeLisd * BooleanExpression;
};

/* ***************************************************************** */

class BooleanEqualType :
  public BinaryBooleanExpressionBaseType
{
public:
  BooleanEqualType();
  BooleanEqualType(
    BooleanExpressionBaseTypeLisd * BooleanExpressionIn);
  ~BooleanEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ConePointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  ConePointSamplingStrategyEnumType();
  ConePointSamplingStrategyEnumType(
    const char * valIn);
  ~ConePointSamplingStrategyEnumType();
  bool ConePointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class ElongatedCylinderPointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  ElongatedCylinderPointSamplingStrategyEnumType();
  ElongatedCylinderPointSamplingStrategyEnumType(
    const char * valIn);
  ~ElongatedCylinderPointSamplingStrategyEnumType();
  bool ElongatedCylinderPointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class ExtrudedCrossSectionPointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  ExtrudedCrossSectionPointSamplingStrategyEnumType();
  ExtrudedCrossSectionPointSamplingStrategyEnumType(
    const char * valIn);
  ~ExtrudedCrossSectionPointSamplingStrategyEnumType();
  bool ExtrudedCrossSectionPointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class GreaterOrEqualType :
  public ArithmeticComparisonBaseType
{
public:
  GreaterOrEqualType();
  GreaterOrEqualType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~GreaterOrEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class GreaterThanType :
  public ArithmeticComparisonBaseType
{
public:
  GreaterThanType();
  GreaterThanType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~GreaterThanType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LessOrEqualType :
  public ArithmeticComparisonBaseType
{
public:
  LessOrEqualType();
  LessOrEqualType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~LessOrEqualType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LessThanType :
  public ArithmeticComparisonBaseType
{
public:
  LessThanType();
  LessThanType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~LessThanType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MaxType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  MaxType();
  MaxType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~MaxType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MinType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  MinType();
  MinType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~MinType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class OpenCurvePointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  OpenCurvePointSamplingStrategyEnumType();
  OpenCurvePointSamplingStrategyEnumType(
    const char * valIn);
  ~OpenCurvePointSamplingStrategyEnumType();
  bool OpenCurvePointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class PlanePointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  PlanePointSamplingStrategyEnumType();
  PlanePointSamplingStrategyEnumType(
    const char * valIn);
  ~PlanePointSamplingStrategyEnumType();
  bool PlanePointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class PlusType :
  public PolyadicArithmeticExpressionBaseType
{
public:
  PlusType();
  PlusType(
    ArithmeticExpressionBaseTypeLisd * ArithmeticExpressionIn);
  ~PlusType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointPointSamplingStrategyEnumType :
  public PointSamplingStrategyEnumBaseType
{
public:
  PointPointSamplingStrategyEnumType();
  PointPointSamplingStrategyEnumType(
    const char * valIn);
  ~PointPointSamplingStrategyEnumType();
  bool PointPointSamplingStrategyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  void printName(FILE * outFile);
};

/* ***************************************************************** */

class TokenConstantType :
  public TokenExpressionBaseType
{
public:
  TokenConstantType();
  TokenConstantType(
    XmlToken * valIn);
  ~TokenConstantType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getval();
  void setval(XmlToken * valIn);

protected:
  XmlToken * val;
};

/* ***************************************************************** */

#endif // EXPRESSIONS_HH
