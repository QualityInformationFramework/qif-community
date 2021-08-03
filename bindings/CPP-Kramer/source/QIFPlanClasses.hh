/*********************************************************************/

#ifndef QIFPLAN_HH
#define QIFPLAN_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "IntermediatesPMIClasses.hh"
#include "ExpressionsClasses.hh"

/*********************************************************************/

class ActionBaseType;
class ActionGroupBaseType;
class ActionMethodBaseType;
class ActionMethodBaseTypeLisd;
class ActionMethodsType;
class AutocollimatorMeasureFeatureMethodType;
class CalibratedComparatorMeasureFeatureMethodType;
class ComputedTomographyMeasureFeatureMethodType;
class CoordinateMeasureFeatureMethodType;
class DocumentFileInstructionType;
class ElseDoType;
class EstablishDatumMeasurandType;
class EvaluateCharacteristicMeasurandType;
class EvaluateSpecifiedCharacteristicsActionType;
class ExternalReferenceMeasureFeatureMethodType;
class GageMeasureFeatureMethodType;
class HaltActionType;
class IfActionGroupType;
class ImageInstructionType;
class LaserRadarMeasureFeatureMethodType;
class LaserTrackerMeasureFeatureMethodType;
class LocalVariablesType;
class ManualMeasureFeatureMethodType;
class MeasurandBaseType;
class MeasurandBaseTypeLisd;
class MeasurandsType;
class MeasureActionGroupFunctionEnumType;
class MeasureActionGroupFunctionType;
class MeasureActionGroupFunctionTypeChoicePair;
class MeasureEvaluateAllActionType;
class MeasureEvaluateSpecifiedActionType;
class MeasureFeatureMethodBaseType;
class MeasureSpecifiedFeaturesActionType;
class MeasureSpecifiedMeasurandsActionType;
class MicroscopeMeasureFeatureMethodType;
class NumberedPlanElementType;
class NumberedPlanElementTypeLisd;
class NumberedPlanElementsType;
class OneOfActionGroupType;
class OrderedActionGroupType;
class OtherMeasureFeatureMethodType;
class PartiallyOrderedActionGroupType;
class PickSomeActionGroupType;
class PlanElementBaseType;
class PlanElementBaseTypeLisd;
class PlanType;
class PredecessorsType;
class ProfileProjectorMeasureFeatureMethodType;
class StepWithPredecessorsType;
class StepWithPredecessorsTypeLisd;
class StepsWithPredecessorsType;
class TestAndPlanElementType;
class TestAndPlanElementTypeLisd;
class TextInstructionType;
class TheodoliteMeasureFeatureMethodType;
class UniversalLengthMeasureFeatureMethodType;
class UnnumberedPlanElementsType;
class UnorderedActionGroupType;
class VariableDeclarationType;
class VariableDeclarationTypeLisd;
class VariableSetType;
class VideoInstructionType;
class WhileActionGroupType;
class WorkInstructionBaseType;
class WorkInstructionBaseTypeLisd;
class WorkInstructionsType;

/*********************************************************************/
/*********************************************************************/

class ActionMethodBaseType :
  public XmlTypeBase
{
public:
  ActionMethodBaseType();
  ActionMethodBaseType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ActionMethodBaseType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~ActionMethodBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  ArrayReferenceType * getChosenResourceIds();
  void setChosenResourceIds(ArrayReferenceType * ChosenResourceIdsIn);
  ArrayReferenceType * getWorkInstructionIds();
  void setWorkInstructionIds(ArrayReferenceType * WorkInstructionIdsIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFIdType * id;
  ArrayReferenceType * ChosenResourceIds;
  ArrayReferenceType * WorkInstructionIds;
  AttributesType * Attributes;
};

/*********************************************************************/

class ActionMethodBaseTypeLisd :
  public std::list<ActionMethodBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  ActionMethodBaseTypeLisd();
  ActionMethodBaseTypeLisd(
    ActionMethodBaseType * aActionMethodBaseType);
  ~ActionMethodBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class ActionMethodsType :
  public XmlTypeBase
{
public:
  ActionMethodsType();
  ActionMethodsType(
    ActionMethodBaseTypeLisd * ActionMethodIn);
  ActionMethodsType(
    NaturalType * nIn,
    ActionMethodBaseTypeLisd * ActionMethodIn);
  ~ActionMethodsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ActionMethodBaseTypeLisd * getActionMethod();
  void setActionMethod(ActionMethodBaseTypeLisd *);

protected:
  NaturalType * n;
  ActionMethodBaseTypeLisd * ActionMethod;
};

/*********************************************************************/

class ElseDoType :
  public XmlTypeBase
{
public:
  ElseDoType();
  ElseDoType(
    PlanElementBaseType * PlanElementIn);
  ~ElseDoType();
  void printSelf(FILE * outFile);

  PlanElementBaseType * getPlanElement();
  void setPlanElement(PlanElementBaseType * PlanElementIn);

protected:
  PlanElementBaseType * PlanElement;
};

/*********************************************************************/

class LocalVariablesType :
  public XmlTypeBase
{
public:
  LocalVariablesType();
  LocalVariablesType(
    VariableDeclarationTypeLisd * VariableIn);
  LocalVariablesType(
    NaturalType * nIn,
    VariableDeclarationTypeLisd * VariableIn);
  ~LocalVariablesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  VariableDeclarationTypeLisd * getVariable();
  void setVariable(VariableDeclarationTypeLisd *);

protected:
  NaturalType * n;
  VariableDeclarationTypeLisd * Variable;
};

/*********************************************************************/

class MeasurandBaseType :
  public XmlTypeBase
{
public:
  MeasurandBaseType();
  MeasurandBaseType(
    AttributesType * AttributesIn);
  MeasurandBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~MeasurandBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
};

/*********************************************************************/

class MeasurandBaseTypeLisd :
  public std::list<MeasurandBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasurandBaseTypeLisd();
  MeasurandBaseTypeLisd(
    MeasurandBaseType * aMeasurandBaseType);
  ~MeasurandBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class MeasurandsType :
  public XmlTypeBase
{
public:
  MeasurandsType();
  MeasurandsType(
    MeasurandBaseTypeLisd * MeasurandIn);
  MeasurandsType(
    NaturalType * nIn,
    MeasurandBaseTypeLisd * MeasurandIn);
  ~MeasurandsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeasurandBaseTypeLisd * getMeasurand();
  void setMeasurand(MeasurandBaseTypeLisd *);

protected:
  NaturalType * n;
  MeasurandBaseTypeLisd * Measurand;
};

/*********************************************************************/

class MeasureActionGroupFunctionEnumType :
  public XmlNMTOKEN
{
public:
  MeasureActionGroupFunctionEnumType();
  MeasureActionGroupFunctionEnumType(
    const char * valIn);
  ~MeasureActionGroupFunctionEnumType();
  bool MeasureActionGroupFunctionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class MeasureActionGroupFunctionType :
  public XmlTypeBase
{
public:
  MeasureActionGroupFunctionType();
  MeasureActionGroupFunctionType(
    MeasureActionGroupFunctionTypeChoicePair * MeasureActionGroupFunctionTypePairIn);
  ~MeasureActionGroupFunctionType();
  void printSelf(FILE * outFile);

  MeasureActionGroupFunctionTypeChoicePair * getMeasureActionGroupFunctionTypePair();
  void setMeasureActionGroupFunctionTypePair(MeasureActionGroupFunctionTypeChoicePair * MeasureActionGroupFunctionTypePairIn);

protected:
  MeasureActionGroupFunctionTypeChoicePair * MeasureActionGroupFunctionTypePair;
};

/*********************************************************************/

union MeasureActionGroupFunctionTypeVal
{
  MeasureActionGroupFunctionEnumType * MeasureActionGroupFunctionEnum;
  XmlString * OtherMeasureActionGroupFunction;
};

/*********************************************************************/

class MeasureActionGroupFunctionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasureActionGroupFunctionEnumE,
    OtherMeasureActionGroupFunctionE };
  MeasureActionGroupFunctionTypeChoicePair();
  MeasureActionGroupFunctionTypeChoicePair(
    whichOne MeasureActionGroupFunctionTypeTypeIn,
    MeasureActionGroupFunctionTypeVal MeasureActionGroupFunctionTypeValueIn);
  ~MeasureActionGroupFunctionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasureActionGroupFunctionTypeType;
  MeasureActionGroupFunctionTypeVal MeasureActionGroupFunctionTypeValue;
};

/*********************************************************************/

class MeasureFeatureMethodBaseType :
  public ActionMethodBaseType
{
public:
  MeasureFeatureMethodBaseType();
  MeasureFeatureMethodBaseType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  MeasureFeatureMethodBaseType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~MeasureFeatureMethodBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class MicroscopeMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  MicroscopeMeasureFeatureMethodType();
  MicroscopeMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  MicroscopeMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~MicroscopeMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class NumberedPlanElementType :
  public XmlTypeBase
{
public:
  NumberedPlanElementType();
  NumberedPlanElementType(
    XmlPositiveInteger * SequenceNumberIn,
    PlanElementBaseType * PlanElementIn);
  ~NumberedPlanElementType();
  void printSelf(FILE * outFile);

  XmlPositiveInteger * getSequenceNumber();
  void setSequenceNumber(XmlPositiveInteger * SequenceNumberIn);
  PlanElementBaseType * getPlanElement();
  void setPlanElement(PlanElementBaseType * PlanElementIn);

protected:
  XmlPositiveInteger * SequenceNumber;
  PlanElementBaseType * PlanElement;
};

/*********************************************************************/

class NumberedPlanElementTypeLisd :
  public std::list<NumberedPlanElementType *>,
  public XmlSchemaInstanceBase
{
public:
  NumberedPlanElementTypeLisd();
  NumberedPlanElementTypeLisd(
    NumberedPlanElementType * aNumberedPlanElementType);
  ~NumberedPlanElementTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class NumberedPlanElementsType :
  public XmlTypeBase
{
public:
  NumberedPlanElementsType();
  NumberedPlanElementsType(
    NumberedPlanElementTypeLisd * NumberedPlanElementIn);
  NumberedPlanElementsType(
    NaturalType * nIn,
    NumberedPlanElementTypeLisd * NumberedPlanElementIn);
  ~NumberedPlanElementsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  NumberedPlanElementTypeLisd * getNumberedPlanElement();
  void setNumberedPlanElement(NumberedPlanElementTypeLisd *);

protected:
  NaturalType * n;
  NumberedPlanElementTypeLisd * NumberedPlanElement;
};

/*********************************************************************/

class OtherMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  OtherMeasureFeatureMethodType();
  OtherMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  OtherMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~OtherMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PlanElementBaseType :
  public XmlTypeBase
{
public:
  PlanElementBaseType();
  PlanElementBaseType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~PlanElementBaseType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getWorkInstructionIds();
  void setWorkInstructionIds(ArrayReferenceType * WorkInstructionIdsIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  ArrayReferenceType * WorkInstructionIds;
  AttributesType * Attributes;
};

/*********************************************************************/

class PlanElementBaseTypeLisd :
  public std::list<PlanElementBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  PlanElementBaseTypeLisd();
  PlanElementBaseTypeLisd(
    PlanElementBaseType * aPlanElementBaseType);
  ~PlanElementBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class PlanType :
  public XmlTypeBase
{
public:
  PlanType();
  PlanType(
    VersionType * VersionIn,
    QPIdFullReferenceType * RulesUsedQPIdIn,
    QPIdFullReferenceType * RulesToUseQPIdIn,
    WorkInstructionsType * WorkInstructionsIn,
    ActionMethodsType * ActionMethodsIn,
    MeasurandsType * MeasurandsIn,
    LocalVariablesType * LocalVariablesIn,
    ActionGroupBaseType * PlanRootIn);
  ~PlanType();
  void printSelf(FILE * outFile);

  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);
  QPIdFullReferenceType * getRulesUsedQPId();
  void setRulesUsedQPId(QPIdFullReferenceType * RulesUsedQPIdIn);
  QPIdFullReferenceType * getRulesToUseQPId();
  void setRulesToUseQPId(QPIdFullReferenceType * RulesToUseQPIdIn);
  WorkInstructionsType * getWorkInstructions();
  void setWorkInstructions(WorkInstructionsType * WorkInstructionsIn);
  ActionMethodsType * getActionMethods();
  void setActionMethods(ActionMethodsType * ActionMethodsIn);
  MeasurandsType * getMeasurands();
  void setMeasurands(MeasurandsType * MeasurandsIn);
  LocalVariablesType * getLocalVariables();
  void setLocalVariables(LocalVariablesType * LocalVariablesIn);
  ActionGroupBaseType * getPlanRoot();
  void setPlanRoot(ActionGroupBaseType * PlanRootIn);

protected:
  VersionType * Version;
  QPIdFullReferenceType * RulesUsedQPId;
  QPIdFullReferenceType * RulesToUseQPId;
  WorkInstructionsType * WorkInstructions;
  ActionMethodsType * ActionMethods;
  MeasurandsType * Measurands;
  LocalVariablesType * LocalVariables;
  ActionGroupBaseType * PlanRoot;
};

/*********************************************************************/

class PredecessorsType :
  public XmlTypeBase
{
public:
  PredecessorsType();
  PredecessorsType(
    XmlPositiveIntegerLisd * PredecessorIn);
  PredecessorsType(
    NaturalType * nIn,
    XmlPositiveIntegerLisd * PredecessorIn);
  ~PredecessorsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  XmlPositiveIntegerLisd * getPredecessor();
  void setPredecessor(XmlPositiveIntegerLisd *);

protected:
  NaturalType * n;
  XmlPositiveIntegerLisd * Predecessor;
};

/*********************************************************************/

class ProfileProjectorMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  ProfileProjectorMeasureFeatureMethodType();
  ProfileProjectorMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ProfileProjectorMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~ProfileProjectorMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class StepWithPredecessorsType :
  public XmlTypeBase
{
public:
  StepWithPredecessorsType();
  StepWithPredecessorsType(
    PredecessorsType * PredecessorsIn,
    NumberedPlanElementType * StepIn);
  ~StepWithPredecessorsType();
  void printSelf(FILE * outFile);

  PredecessorsType * getPredecessors();
  void setPredecessors(PredecessorsType * PredecessorsIn);
  NumberedPlanElementType * getStep();
  void setStep(NumberedPlanElementType * StepIn);

protected:
  PredecessorsType * Predecessors;
  NumberedPlanElementType * Step;
};

/*********************************************************************/

class StepWithPredecessorsTypeLisd :
  public std::list<StepWithPredecessorsType *>,
  public XmlSchemaInstanceBase
{
public:
  StepWithPredecessorsTypeLisd();
  StepWithPredecessorsTypeLisd(
    StepWithPredecessorsType * aStepWithPredecessorsType);
  ~StepWithPredecessorsTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class StepsWithPredecessorsType :
  public XmlTypeBase
{
public:
  StepsWithPredecessorsType();
  StepsWithPredecessorsType(
    StepWithPredecessorsTypeLisd * StepWithPredecessorsIn);
  StepsWithPredecessorsType(
    NaturalType * nIn,
    StepWithPredecessorsTypeLisd * StepWithPredecessorsIn);
  ~StepsWithPredecessorsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  StepWithPredecessorsTypeLisd * getStepWithPredecessors();
  void setStepWithPredecessors(StepWithPredecessorsTypeLisd *);

protected:
  NaturalType * n;
  StepWithPredecessorsTypeLisd * StepWithPredecessors;
};

/*********************************************************************/

class TestAndPlanElementType :
  public XmlTypeBase
{
public:
  TestAndPlanElementType();
  TestAndPlanElementType(
    BooleanExpressionBaseType * BooleanExpressionIn,
    PlanElementBaseType * PlanElementIn);
  ~TestAndPlanElementType();
  void printSelf(FILE * outFile);

  BooleanExpressionBaseType * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn);
  PlanElementBaseType * getPlanElement();
  void setPlanElement(PlanElementBaseType * PlanElementIn);

protected:
  BooleanExpressionBaseType * BooleanExpression;
  PlanElementBaseType * PlanElement;
};

/*********************************************************************/

class TestAndPlanElementTypeLisd :
  public std::list<TestAndPlanElementType *>,
  public XmlSchemaInstanceBase
{
public:
  TestAndPlanElementTypeLisd();
  TestAndPlanElementTypeLisd(
    TestAndPlanElementType * aTestAndPlanElementType);
  ~TestAndPlanElementTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class TheodoliteMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  TheodoliteMeasureFeatureMethodType();
  TheodoliteMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  TheodoliteMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~TheodoliteMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UniversalLengthMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  UniversalLengthMeasureFeatureMethodType();
  UniversalLengthMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  UniversalLengthMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~UniversalLengthMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UnnumberedPlanElementsType :
  public XmlTypeBase
{
public:
  UnnumberedPlanElementsType();
  UnnumberedPlanElementsType(
    PlanElementBaseTypeLisd * PlanElementIn);
  UnnumberedPlanElementsType(
    NaturalType * nIn,
    PlanElementBaseTypeLisd * PlanElementIn);
  ~UnnumberedPlanElementsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PlanElementBaseTypeLisd * getPlanElement();
  void setPlanElement(PlanElementBaseTypeLisd *);

protected:
  NaturalType * n;
  PlanElementBaseTypeLisd * PlanElement;
};

/*********************************************************************/

class VariableDeclarationType :
  public XmlTypeBase
{
public:
  VariableDeclarationType();
  VariableDeclarationType(
    XmlID * NameIn,
    XmlDecimal * ValIn);
  ~VariableDeclarationType();
  void printSelf(FILE * outFile);

  XmlID * getName();
  void setName(XmlID * NameIn);
  XmlDecimal * getVal();
  void setVal(XmlDecimal * ValIn);

protected:
  XmlID * Name;
  XmlDecimal * Val;
};

/*********************************************************************/

class VariableDeclarationTypeLisd :
  public std::list<VariableDeclarationType *>,
  public XmlSchemaInstanceBase
{
public:
  VariableDeclarationTypeLisd();
  VariableDeclarationTypeLisd(
    VariableDeclarationType * aVariableDeclarationType);
  ~VariableDeclarationTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class VariableSetType :
  public PlanElementBaseType
{
public:
  VariableSetType();
  VariableSetType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    XmlIDREF * VariableNameIn,
    ArithmeticExpressionBaseType * ArithmeticExpressionIn);
  ~VariableSetType();
  void printSelf(FILE * outFile);

  XmlIDREF * getVariableName();
  void setVariableName(XmlIDREF * VariableNameIn);
  ArithmeticExpressionBaseType * getArithmeticExpression();
  void setArithmeticExpression(ArithmeticExpressionBaseType * ArithmeticExpressionIn);

protected:
  XmlIDREF * VariableName;
  ArithmeticExpressionBaseType * ArithmeticExpression;
};

/*********************************************************************/

class WorkInstructionBaseType :
  public XmlTypeBase
{
public:
  WorkInstructionBaseType();
  WorkInstructionBaseType(
    AttributesType * AttributesIn);
  WorkInstructionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~WorkInstructionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
};

/*********************************************************************/

class WorkInstructionBaseTypeLisd :
  public std::list<WorkInstructionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  WorkInstructionBaseTypeLisd();
  WorkInstructionBaseTypeLisd(
    WorkInstructionBaseType * aWorkInstructionBaseType);
  ~WorkInstructionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class WorkInstructionsType :
  public XmlTypeBase
{
public:
  WorkInstructionsType();
  WorkInstructionsType(
    WorkInstructionBaseTypeLisd * WorkInstructionIn);
  WorkInstructionsType(
    NaturalType * nIn,
    WorkInstructionBaseTypeLisd * WorkInstructionIn);
  ~WorkInstructionsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  WorkInstructionBaseTypeLisd * getWorkInstruction();
  void setWorkInstruction(WorkInstructionBaseTypeLisd *);

protected:
  NaturalType * n;
  WorkInstructionBaseTypeLisd * WorkInstruction;
};

/*********************************************************************/

class ActionBaseType :
  public PlanElementBaseType
{
public:
  ActionBaseType();
  ActionBaseType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    QIFReferenceType * PreferredActionMethodIdIn,
    ArrayReferenceType * AlternativeActionMethodIdsIn,
    ArrayReferenceType * PreferredResourceIdsIn);
  ~ActionBaseType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getPreferredActionMethodId();
  void setPreferredActionMethodId(QIFReferenceType * PreferredActionMethodIdIn);
  ArrayReferenceType * getAlternativeActionMethodIds();
  void setAlternativeActionMethodIds(ArrayReferenceType * AlternativeActionMethodIdsIn);
  ArrayReferenceType * getPreferredResourceIds();
  void setPreferredResourceIds(ArrayReferenceType * PreferredResourceIdsIn);

protected:
  QIFReferenceType * PreferredActionMethodId;
  ArrayReferenceType * AlternativeActionMethodIds;
  ArrayReferenceType * PreferredResourceIds;
};

/*********************************************************************/

class ActionGroupBaseType :
  public PlanElementBaseType
{
public:
  ActionGroupBaseType();
  ActionGroupBaseType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn);
  ~ActionGroupBaseType();
  void printSelf(FILE * outFile);

  MeasureActionGroupFunctionType * getMeasureActionGroupFunction();
  void setMeasureActionGroupFunction(MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn);

protected:
  MeasureActionGroupFunctionType * MeasureActionGroupFunction;
};

/*********************************************************************/

class AutocollimatorMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  AutocollimatorMeasureFeatureMethodType();
  AutocollimatorMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  AutocollimatorMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~AutocollimatorMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CalibratedComparatorMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  CalibratedComparatorMeasureFeatureMethodType();
  CalibratedComparatorMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  CalibratedComparatorMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~CalibratedComparatorMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ComputedTomographyMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  ComputedTomographyMeasureFeatureMethodType();
  ComputedTomographyMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ComputedTomographyMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~ComputedTomographyMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CoordinateMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  CoordinateMeasureFeatureMethodType();
  CoordinateMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    XmlPositiveInteger * NumberOfMeasurementPointsIn);
  CoordinateMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    XmlPositiveInteger * NumberOfMeasurementPointsIn);
  ~CoordinateMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getNumberOfMeasurementPoints();
  void setNumberOfMeasurementPoints(XmlPositiveInteger * NumberOfMeasurementPointsIn);

protected:
  XmlPositiveInteger * NumberOfMeasurementPoints;
};

/*********************************************************************/

class DocumentFileInstructionType :
  public WorkInstructionBaseType
{
public:
  DocumentFileInstructionType();
  DocumentFileInstructionType(
    AttributesType * AttributesIn,
    ExternalFileReferenceType * ExternalFileIn);
  DocumentFileInstructionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ExternalFileReferenceType * ExternalFileIn);
  ~DocumentFileInstructionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExternalFileReferenceType * getExternalFile();
  void setExternalFile(ExternalFileReferenceType * ExternalFileIn);

protected:
  ExternalFileReferenceType * ExternalFile;
};

/*********************************************************************/

class EstablishDatumMeasurandType :
  public MeasurandBaseType
{
public:
  EstablishDatumMeasurandType();
  EstablishDatumMeasurandType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * DatumDefinitionIdIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  EstablishDatumMeasurandType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * DatumDefinitionIdIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  ~EstablishDatumMeasurandType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceFullType * getDatumDefinitionId();
  void setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn);
  QIFReferenceFullType * getDatumReferenceFrameId();
  void setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn);

protected:
  QIFReferenceFullType * DatumDefinitionId;
  QIFReferenceFullType * DatumReferenceFrameId;
};

/*********************************************************************/

class EvaluateCharacteristicMeasurandType :
  public MeasurandBaseType
{
public:
  EvaluateCharacteristicMeasurandType();
  EvaluateCharacteristicMeasurandType(
    AttributesType * AttributesIn,
    QIFReferenceType * CharacteristicItemIdIn);
  EvaluateCharacteristicMeasurandType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * CharacteristicItemIdIn);
  ~EvaluateCharacteristicMeasurandType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getCharacteristicItemId();
  void setCharacteristicItemId(QIFReferenceType * CharacteristicItemIdIn);

protected:
  QIFReferenceType * CharacteristicItemId;
};

/*********************************************************************/

class EvaluateSpecifiedCharacteristicsActionType :
  public ActionBaseType
{
public:
  EvaluateSpecifiedCharacteristicsActionType();
  EvaluateSpecifiedCharacteristicsActionType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    QIFReferenceType * PreferredActionMethodIdIn,
    ArrayReferenceType * AlternativeActionMethodIdsIn,
    ArrayReferenceType * PreferredResourceIdsIn,
    ArrayReferenceType * CharacteristicItemIdsIn);
  ~EvaluateSpecifiedCharacteristicsActionType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getCharacteristicItemIds();
  void setCharacteristicItemIds(ArrayReferenceType * CharacteristicItemIdsIn);

protected:
  ArrayReferenceType * CharacteristicItemIds;
};

/*********************************************************************/

class ExternalReferenceMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  ExternalReferenceMeasureFeatureMethodType();
  ExternalReferenceMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    ExternalFileReferencesType * ExternalFileReferencesIn);
  ExternalReferenceMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    ExternalFileReferencesType * ExternalFileReferencesIn);
  ~ExternalReferenceMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExternalFileReferencesType * getExternalFileReferences();
  void setExternalFileReferences(ExternalFileReferencesType * ExternalFileReferencesIn);

protected:
  ExternalFileReferencesType * ExternalFileReferences;
};

/*********************************************************************/

class GageMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  GageMeasureFeatureMethodType();
  GageMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  GageMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~GageMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class HaltActionType :
  public ActionBaseType
{
public:
  HaltActionType();
  HaltActionType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    QIFReferenceType * PreferredActionMethodIdIn,
    ArrayReferenceType * AlternativeActionMethodIdsIn,
    ArrayReferenceType * PreferredResourceIdsIn);
  ~HaltActionType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class IfActionGroupType :
  public ActionGroupBaseType
{
public:
  IfActionGroupType();
  IfActionGroupType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
    TestAndPlanElementType * IfIn,
    TestAndPlanElementTypeLisd * ElseIfIn,
    ElseDoType * ElseDoIn);
  ~IfActionGroupType();
  void printSelf(FILE * outFile);

  TestAndPlanElementType * getIf();
  void setIf(TestAndPlanElementType * IfIn);
  TestAndPlanElementTypeLisd * getElseIf();
  void setElseIf(TestAndPlanElementTypeLisd *);
  ElseDoType * getElseDo();
  void setElseDo(ElseDoType * ElseDoIn);

protected:
  TestAndPlanElementType * If;
  TestAndPlanElementTypeLisd * ElseIf;
  ElseDoType * ElseDo;
};

/*********************************************************************/

class ImageInstructionType :
  public WorkInstructionBaseType
{
public:
  ImageInstructionType();
  ImageInstructionType(
    AttributesType * AttributesIn,
    ExternalFileReferenceType * ExternalFileIn);
  ImageInstructionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ExternalFileReferenceType * ExternalFileIn);
  ~ImageInstructionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExternalFileReferenceType * getExternalFile();
  void setExternalFile(ExternalFileReferenceType * ExternalFileIn);

protected:
  ExternalFileReferenceType * ExternalFile;
};

/*********************************************************************/

class LaserRadarMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  LaserRadarMeasureFeatureMethodType();
  LaserRadarMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  LaserRadarMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~LaserRadarMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LaserTrackerMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  LaserTrackerMeasureFeatureMethodType();
  LaserTrackerMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  LaserTrackerMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~LaserTrackerMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ManualMeasureFeatureMethodType :
  public MeasureFeatureMethodBaseType
{
public:
  ManualMeasureFeatureMethodType();
  ManualMeasureFeatureMethodType(
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ManualMeasureFeatureMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * ChosenResourceIdsIn,
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn);
  ~ManualMeasureFeatureMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class MeasureEvaluateAllActionType :
  public ActionBaseType
{
public:
  MeasureEvaluateAllActionType();
  MeasureEvaluateAllActionType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    QIFReferenceType * PreferredActionMethodIdIn,
    ArrayReferenceType * AlternativeActionMethodIdsIn,
    ArrayReferenceType * PreferredResourceIdsIn);
  ~MeasureEvaluateAllActionType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class MeasureEvaluateSpecifiedActionType :
  public ActionBaseType
{
public:
  MeasureEvaluateSpecifiedActionType();
  MeasureEvaluateSpecifiedActionType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    QIFReferenceType * PreferredActionMethodIdIn,
    ArrayReferenceType * AlternativeActionMethodIdsIn,
    ArrayReferenceType * PreferredResourceIdsIn,
    ArrayReferenceType * CharacteristicItemIdsIn);
  ~MeasureEvaluateSpecifiedActionType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getCharacteristicItemIds();
  void setCharacteristicItemIds(ArrayReferenceType * CharacteristicItemIdsIn);

protected:
  ArrayReferenceType * CharacteristicItemIds;
};

/*********************************************************************/

class MeasureSpecifiedFeaturesActionType :
  public ActionBaseType
{
public:
  MeasureSpecifiedFeaturesActionType();
  MeasureSpecifiedFeaturesActionType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    QIFReferenceType * PreferredActionMethodIdIn,
    ArrayReferenceType * AlternativeActionMethodIdsIn,
    ArrayReferenceType * PreferredResourceIdsIn,
    ArrayReferenceType * FeatureItemIdsIn);
  ~MeasureSpecifiedFeaturesActionType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getFeatureItemIds();
  void setFeatureItemIds(ArrayReferenceType * FeatureItemIdsIn);

protected:
  ArrayReferenceType * FeatureItemIds;
};

/*********************************************************************/

class MeasureSpecifiedMeasurandsActionType :
  public ActionBaseType
{
public:
  MeasureSpecifiedMeasurandsActionType();
  MeasureSpecifiedMeasurandsActionType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    QIFReferenceType * PreferredActionMethodIdIn,
    ArrayReferenceType * AlternativeActionMethodIdsIn,
    ArrayReferenceType * PreferredResourceIdsIn,
    ArrayReferenceType * MeasurandIdsIn);
  ~MeasureSpecifiedMeasurandsActionType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getMeasurandIds();
  void setMeasurandIds(ArrayReferenceType * MeasurandIdsIn);

protected:
  ArrayReferenceType * MeasurandIds;
};

/*********************************************************************/

class OneOfActionGroupType :
  public ActionGroupBaseType
{
public:
  OneOfActionGroupType();
  OneOfActionGroupType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
    NumberedPlanElementsType * StepsIn);
  ~OneOfActionGroupType();
  void printSelf(FILE * outFile);

  NumberedPlanElementsType * getSteps();
  void setSteps(NumberedPlanElementsType * StepsIn);

protected:
  NumberedPlanElementsType * Steps;
};

/*********************************************************************/

class OrderedActionGroupType :
  public ActionGroupBaseType
{
public:
  OrderedActionGroupType();
  OrderedActionGroupType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
    NumberedPlanElementsType * StepsIn);
  ~OrderedActionGroupType();
  void printSelf(FILE * outFile);

  NumberedPlanElementsType * getSteps();
  void setSteps(NumberedPlanElementsType * StepsIn);

protected:
  NumberedPlanElementsType * Steps;
};

/*********************************************************************/

class PartiallyOrderedActionGroupType :
  public ActionGroupBaseType
{
public:
  PartiallyOrderedActionGroupType();
  PartiallyOrderedActionGroupType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
    StepsWithPredecessorsType * StepsWithPredecessorsIn);
  ~PartiallyOrderedActionGroupType();
  void printSelf(FILE * outFile);

  StepsWithPredecessorsType * getStepsWithPredecessors();
  void setStepsWithPredecessors(StepsWithPredecessorsType * StepsWithPredecessorsIn);

protected:
  StepsWithPredecessorsType * StepsWithPredecessors;
};

/*********************************************************************/

class PickSomeActionGroupType :
  public ActionGroupBaseType
{
public:
  PickSomeActionGroupType();
  PickSomeActionGroupType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
    UnnumberedPlanElementsType * StepsIn,
    XmlPositiveInteger * NumberOfStepsIn);
  ~PickSomeActionGroupType();
  void printSelf(FILE * outFile);

  UnnumberedPlanElementsType * getSteps();
  void setSteps(UnnumberedPlanElementsType * StepsIn);
  XmlPositiveInteger * getNumberOfSteps();
  void setNumberOfSteps(XmlPositiveInteger * NumberOfStepsIn);

protected:
  UnnumberedPlanElementsType * Steps;
  XmlPositiveInteger * NumberOfSteps;
};

/*********************************************************************/

class TextInstructionType :
  public WorkInstructionBaseType
{
public:
  TextInstructionType();
  TextInstructionType(
    AttributesType * AttributesIn,
    XmlString * TextInstructionIn);
  TextInstructionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * TextInstructionIn);
  ~TextInstructionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getTextInstruction();
  void setTextInstruction(XmlString * TextInstructionIn);

protected:
  XmlString * TextInstruction;
};

/*********************************************************************/

class UnorderedActionGroupType :
  public ActionGroupBaseType
{
public:
  UnorderedActionGroupType();
  UnorderedActionGroupType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
    UnnumberedPlanElementsType * StepsIn);
  ~UnorderedActionGroupType();
  void printSelf(FILE * outFile);

  UnnumberedPlanElementsType * getSteps();
  void setSteps(UnnumberedPlanElementsType * StepsIn);

protected:
  UnnumberedPlanElementsType * Steps;
};

/*********************************************************************/

class VideoInstructionType :
  public WorkInstructionBaseType
{
public:
  VideoInstructionType();
  VideoInstructionType(
    AttributesType * AttributesIn,
    ExternalFileReferenceType * ExternalFileIn);
  VideoInstructionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    ExternalFileReferenceType * ExternalFileIn);
  ~VideoInstructionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExternalFileReferenceType * getExternalFile();
  void setExternalFile(ExternalFileReferenceType * ExternalFileIn);

protected:
  ExternalFileReferenceType * ExternalFile;
};

/*********************************************************************/

class WhileActionGroupType :
  public ActionGroupBaseType
{
public:
  WhileActionGroupType();
  WhileActionGroupType(
    ArrayReferenceType * WorkInstructionIdsIn,
    AttributesType * AttributesIn,
    MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
    BooleanExpressionBaseType * BooleanExpressionIn,
    PlanElementBaseType * PlanElementIn);
  ~WhileActionGroupType();
  void printSelf(FILE * outFile);

  BooleanExpressionBaseType * getBooleanExpression();
  void setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn);
  PlanElementBaseType * getPlanElement();
  void setPlanElement(PlanElementBaseType * PlanElementIn);

protected:
  BooleanExpressionBaseType * BooleanExpression;
  PlanElementBaseType * PlanElement;
};

/*********************************************************************/

#endif // QIFPLAN_HH
