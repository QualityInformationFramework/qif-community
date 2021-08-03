/*********************************************************************/

#ifndef EXPRESSIONS_HH
#define EXPRESSIONS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "GenericExpressionsClasses.hh"
#include "PrimitivesPMIClasses.hh"

/*********************************************************************/

class ArithmeticCharacteristicParameterType;
class ArithmeticComparisonEnumType;
class ArithmeticDMEParameterType;
class ArithmeticFeatureParameterType;
class ArithmeticParameterBaseType;
class ArithmeticParameterValueType;
class ArithmeticPartParameterType;
class CharacteristicIsType;
class CharacteristicToleranceType;
class CharacteristicTypeEnumType;
class ClosedCurvePointSamplingStrategyEnumType;
class ConePointSamplingStrategyEnumType;
class DMEClassNameEnumType;
class ElongatedCylinderPointSamplingStrategyEnumType;
class ExtrudedCrossSectionPointSamplingStrategyEnumType;
class FeatureAreaType;
class FeatureIsDatumType;
class FeatureIsInternalType;
class FeatureLengthType;
class FeatureSizeType;
class FeatureTypeEnumType;
class FeatureTypeIsType;
class OpenCurvePointSamplingStrategyEnumType;
class PlanePointSamplingStrategyEnumType;
class PointDefinedPointSamplingStrategyEnumType;
class PointPointSamplingStrategyEnumType;
class PointSamplingStrategyEnumBaseType;
class SamplingCategoryIsType;
class ShapeClassIsType;
class SpherePointSamplingStrategyEnumType;
class SurfaceOfRevolutionPointSamplingStrategyEnumType;
class VariableValueType;

/*********************************************************************/
/*********************************************************************/

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

/*********************************************************************/

class ArithmeticParameterBaseType :
  public ArithmeticExpressionBaseType
{
public:
  ArithmeticParameterBaseType();
  ArithmeticParameterBaseType(
    XmlToken * ParameterIn);
  ~ArithmeticParameterBaseType();
  void printSelf(FILE * outFile);

  XmlToken * getParameter();
  void setParameter(XmlToken * ParameterIn);

protected:
  XmlToken * Parameter;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class CharacteristicToleranceType :
  public ArithmeticExpressionBaseType
{
public:
  CharacteristicToleranceType();
  ~CharacteristicToleranceType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class FeatureAreaType :
  public ArithmeticExpressionBaseType
{
public:
  FeatureAreaType();
  ~FeatureAreaType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class FeatureIsDatumType :
  public BooleanExpressionBaseType
{
public:
  FeatureIsDatumType();
  ~FeatureIsDatumType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class FeatureIsInternalType :
  public BooleanExpressionBaseType
{
public:
  FeatureIsInternalType();
  ~FeatureIsInternalType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class FeatureLengthType :
  public ArithmeticExpressionBaseType
{
public:
  FeatureLengthType();
  ~FeatureLengthType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class FeatureSizeType :
  public ArithmeticExpressionBaseType
{
public:
  FeatureSizeType();
  ~FeatureSizeType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

#endif // EXPRESSIONS_HH
