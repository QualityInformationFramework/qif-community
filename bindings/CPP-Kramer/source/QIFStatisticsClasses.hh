/* ***************************************************************** */

#ifndef QIFSTATISTICS_HH
#define QIFSTATISTICS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "StatisticsClasses.hh"

/* ***************************************************************** */

class AbsoluteLimitsByUnitType;
class AbsoluteMeasurementsByUnitType;
class BiasStudyPlanType;
class BiasStudyResultsType;
class CapabilityStudyPlanType;
class CapabilityStudyResultsType;
class ControlMethodType;
class ControlMethodTypeLisd;
class ControlMethodsType;
class CorrectiveActionPlanType;
class CorrectiveActionPlanTypeLisd;
class CorrectiveActionPlansType;
class CriteriaByUnitType;
class FirstArticleStudyPlanType;
class FirstArticleStudyResultsType;
class GageRandRStudyEnumType;
class GageRandRStudyPlanType;
class GageRandRStudyResultsType;
class LinearityStudyPlanType;
class LinearityStudyResultsType;
class MultipleProductInstanceStudyPlanBaseType;
class MultipleProductInstanceStudyResultsBaseType;
class ProcessDifferenceStudyPlanType;
class ProcessDifferenceStudyResultsType;
class ProductionStudyPlanType;
class ProductionStudyResultsType;
class SimpleStudyPlanType;
class SimpleStudyResultsType;
class StabilityStudyPlanType;
class StabilityStudyResultsType;
class StatisticalStudiesResultsType;
class StatisticalStudyPlanBaseType;
class StatisticalStudyPlanBaseTypeLisd;
class StatisticalStudyPlansType;
class StatisticalStudyResultsBaseType;
class StatisticalStudyResultsBaseTypeLisd;
class StatisticsType;
class CapabilityStudy_1199_Type;
class CapabilityStudy_1199_TypeChoicePair;
class ControlMethodTy_1200_Type;
class ControlMethodTy_1200_TypeChoicePair;
class FirstArticleStu_1201_Type;
class FirstArticleStu_1201_TypeChoicePair;
class GageRandRStudyP_1202_Type;
class GageRandRStudyP_1202_TypeChoicePair;
class GageRandRStudyP_1203_Type;
class GageRandRStudyP_1203_TypeChoicePair;
class GageRandRStudyP_1204_Type;
class GageRandRStudyP_1204_TypeChoicePair;
class LinearityStudyP_1205_Type;
class LinearityStudyP_1205_TypeChoicePair;
class LinearityStudyR_1206_Type;
class LinearityStudyR_1206_TypeChoicePair;
class ProcessDifferen_1207_Type;
class ProcessDifferen_1207_TypeChoicePair;
class StatisticalStud_1208_Type;
class StatisticalStud_1209_Type;
class StatisticalStud_1210_Type;
class StatisticalStud_1210_TypeChoicePair;
class StatisticalStud_1211_Type;
class StatisticalStud_1211_TypeChoicePair;
class StatisticalStud_1212_Type;
class StatisticalStud_1212_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class AbsoluteLimitsByUnitType :
  public XmlTypeBase
{
public:
  AbsoluteLimitsByUnitType();
  AbsoluteLimitsByUnitType(
    LinearValueType * LinearLimitIn,
    AngularValueType * AngularLimitIn,
    AreaValueType * AreaLimitIn,
    ForceValueType * ForceLimitIn,
    MassValueType * MassLimitIn,
    PressureValueType * PressureLimitIn,
    SpeedValueType * SpeedLimitIn,
    TemperatureValueType * TemperatureLimitIn,
    TimeValueType * TimeLimitIn,
    UserDefinedUnitValueTypeLisd * UserDefinedUnitLimitIn);
  AbsoluteLimitsByUnitType(
    NaturalType * nIn,
    LinearValueType * LinearLimitIn,
    AngularValueType * AngularLimitIn,
    AreaValueType * AreaLimitIn,
    ForceValueType * ForceLimitIn,
    MassValueType * MassLimitIn,
    PressureValueType * PressureLimitIn,
    SpeedValueType * SpeedLimitIn,
    TemperatureValueType * TemperatureLimitIn,
    TimeValueType * TimeLimitIn,
    UserDefinedUnitValueTypeLisd * UserDefinedUnitLimitIn);
  ~AbsoluteLimitsByUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  LinearValueType * getLinearLimit();
  void setLinearLimit(LinearValueType * LinearLimitIn);
  AngularValueType * getAngularLimit();
  void setAngularLimit(AngularValueType * AngularLimitIn);
  AreaValueType * getAreaLimit();
  void setAreaLimit(AreaValueType * AreaLimitIn);
  ForceValueType * getForceLimit();
  void setForceLimit(ForceValueType * ForceLimitIn);
  MassValueType * getMassLimit();
  void setMassLimit(MassValueType * MassLimitIn);
  PressureValueType * getPressureLimit();
  void setPressureLimit(PressureValueType * PressureLimitIn);
  SpeedValueType * getSpeedLimit();
  void setSpeedLimit(SpeedValueType * SpeedLimitIn);
  TemperatureValueType * getTemperatureLimit();
  void setTemperatureLimit(TemperatureValueType * TemperatureLimitIn);
  TimeValueType * getTimeLimit();
  void setTimeLimit(TimeValueType * TimeLimitIn);
  UserDefinedUnitValueTypeLisd * getUserDefinedUnitLimit();
  void setUserDefinedUnitLimit(UserDefinedUnitValueTypeLisd *);

protected:
  NaturalType * n;
  LinearValueType * LinearLimit;
  AngularValueType * AngularLimit;
  AreaValueType * AreaLimit;
  ForceValueType * ForceLimit;
  MassValueType * MassLimit;
  PressureValueType * PressureLimit;
  SpeedValueType * SpeedLimit;
  TemperatureValueType * TemperatureLimit;
  TimeValueType * TimeLimit;
  UserDefinedUnitValueTypeLisd * UserDefinedUnitLimit;
};

/* ***************************************************************** */

class AbsoluteMeasurementsByUnitType :
  public XmlTypeBase
{
public:
  AbsoluteMeasurementsByUnitType();
  AbsoluteMeasurementsByUnitType(
    MeasuredLinearValueType * LinearMeasurementIn,
    MeasuredAngularValueType * AngularMeasurementIn,
    MeasuredAreaValueType * AreaMeasurementIn,
    MeasuredForceValueType * ForceMeasurementIn,
    MeasuredMassValueType * MassMeasurementIn,
    MeasuredPressureValueType * PressureMeasurementIn,
    MeasuredSpeedValueType * SpeedMeasurementIn,
    MeasuredTemperatureValueType * TemperatureMeasurementIn,
    MeasuredTimeValueType * TimeMeasurementIn,
    MeasuredUserDefinedUnitValueTypeLisd * UserDefinedUnitMeasurementIn);
  AbsoluteMeasurementsByUnitType(
    NaturalType * nIn,
    MeasuredLinearValueType * LinearMeasurementIn,
    MeasuredAngularValueType * AngularMeasurementIn,
    MeasuredAreaValueType * AreaMeasurementIn,
    MeasuredForceValueType * ForceMeasurementIn,
    MeasuredMassValueType * MassMeasurementIn,
    MeasuredPressureValueType * PressureMeasurementIn,
    MeasuredSpeedValueType * SpeedMeasurementIn,
    MeasuredTemperatureValueType * TemperatureMeasurementIn,
    MeasuredTimeValueType * TimeMeasurementIn,
    MeasuredUserDefinedUnitValueTypeLisd * UserDefinedUnitMeasurementIn);
  ~AbsoluteMeasurementsByUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeasuredLinearValueType * getLinearMeasurement();
  void setLinearMeasurement(MeasuredLinearValueType * LinearMeasurementIn);
  MeasuredAngularValueType * getAngularMeasurement();
  void setAngularMeasurement(MeasuredAngularValueType * AngularMeasurementIn);
  MeasuredAreaValueType * getAreaMeasurement();
  void setAreaMeasurement(MeasuredAreaValueType * AreaMeasurementIn);
  MeasuredForceValueType * getForceMeasurement();
  void setForceMeasurement(MeasuredForceValueType * ForceMeasurementIn);
  MeasuredMassValueType * getMassMeasurement();
  void setMassMeasurement(MeasuredMassValueType * MassMeasurementIn);
  MeasuredPressureValueType * getPressureMeasurement();
  void setPressureMeasurement(MeasuredPressureValueType * PressureMeasurementIn);
  MeasuredSpeedValueType * getSpeedMeasurement();
  void setSpeedMeasurement(MeasuredSpeedValueType * SpeedMeasurementIn);
  MeasuredTemperatureValueType * getTemperatureMeasurement();
  void setTemperatureMeasurement(MeasuredTemperatureValueType * TemperatureMeasurementIn);
  MeasuredTimeValueType * getTimeMeasurement();
  void setTimeMeasurement(MeasuredTimeValueType * TimeMeasurementIn);
  MeasuredUserDefinedUnitValueTypeLisd * getUserDefinedUnitMeasurement();
  void setUserDefinedUnitMeasurement(MeasuredUserDefinedUnitValueTypeLisd *);

protected:
  NaturalType * n;
  MeasuredLinearValueType * LinearMeasurement;
  MeasuredAngularValueType * AngularMeasurement;
  MeasuredAreaValueType * AreaMeasurement;
  MeasuredForceValueType * ForceMeasurement;
  MeasuredMassValueType * MassMeasurement;
  MeasuredPressureValueType * PressureMeasurement;
  MeasuredSpeedValueType * SpeedMeasurement;
  MeasuredTemperatureValueType * TemperatureMeasurement;
  MeasuredTimeValueType * TimeMeasurement;
  MeasuredUserDefinedUnitValueTypeLisd * UserDefinedUnitMeasurement;
};

/* ***************************************************************** */

class ControlMethodType :
  public XmlTypeBase
{
public:
  ControlMethodType();
  ControlMethodType(
    ArrayReferenceType * AssignableCauseIdsIn,
    AttributesType * AttributesIn,
    ControlMethodTy_1200_Type * ControlMethodTy_1200In);
  ControlMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * AssignableCauseIdsIn,
    AttributesType * AttributesIn,
    ControlMethodTy_1200_Type * ControlMethodTy_1200In);
  ~ControlMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  ArrayReferenceType * getAssignableCauseIds();
  void setAssignableCauseIds(ArrayReferenceType * AssignableCauseIdsIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  ControlMethodTy_1200_Type * getControlMethodTy_1200();
  void setControlMethodTy_1200(ControlMethodTy_1200_Type * ControlMethodTy_1200In);

protected:
  QIFIdType * id;
  ArrayReferenceType * AssignableCauseIds;
  AttributesType * Attributes;
  ControlMethodTy_1200_Type * ControlMethodTy_1200;
};

/* ***************************************************************** */

class ControlMethodTypeLisd :
  public std::list<ControlMethodType *>,
  public XmlSchemaInstanceBase
{
public:
  ControlMethodTypeLisd();
  ControlMethodTypeLisd(
    ControlMethodType * aControlMethodType);
  ~ControlMethodTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ControlMethodsType :
  public XmlTypeBase
{
public:
  ControlMethodsType();
  ControlMethodsType(
    ControlMethodTypeLisd * ControlMethodIn);
  ControlMethodsType(
    NaturalType * nIn,
    ControlMethodTypeLisd * ControlMethodIn);
  ~ControlMethodsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ControlMethodTypeLisd * getControlMethod();
  void setControlMethod(ControlMethodTypeLisd *);

protected:
  NaturalType * n;
  ControlMethodTypeLisd * ControlMethod;
};

/* ***************************************************************** */

class CorrectiveActionPlanType :
  public XmlTypeBase
{
public:
  CorrectiveActionPlanType();
  CorrectiveActionPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    AssignableCausesType * AssignableCausesIn,
    CorrectiveActionsType * CorrectiveActionsIn);
  CorrectiveActionPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    AssignableCausesType * AssignableCausesIn,
    CorrectiveActionsType * CorrectiveActionsIn);
  ~CorrectiveActionPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  AssignableCausesType * getAssignableCauses();
  void setAssignableCauses(AssignableCausesType * AssignableCausesIn);
  CorrectiveActionsType * getCorrectiveActions();
  void setCorrectiveActions(CorrectiveActionsType * CorrectiveActionsIn);

protected:
  QIFIdType * id;
  VersionType * Version;
  AttributesType * Attributes;
  AssignableCausesType * AssignableCauses;
  CorrectiveActionsType * CorrectiveActions;
};

/* ***************************************************************** */

class CorrectiveActionPlanTypeLisd :
  public std::list<CorrectiveActionPlanType *>,
  public XmlSchemaInstanceBase
{
public:
  CorrectiveActionPlanTypeLisd();
  CorrectiveActionPlanTypeLisd(
    CorrectiveActionPlanType * aCorrectiveActionPlanType);
  ~CorrectiveActionPlanTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CorrectiveActionPlansType :
  public XmlTypeBase
{
public:
  CorrectiveActionPlansType();
  CorrectiveActionPlansType(
    CorrectiveActionPlanTypeLisd * CorrectiveActionPlanIn);
  CorrectiveActionPlansType(
    NaturalType * nIn,
    CorrectiveActionPlanTypeLisd * CorrectiveActionPlanIn);
  ~CorrectiveActionPlansType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CorrectiveActionPlanTypeLisd * getCorrectiveActionPlan();
  void setCorrectiveActionPlan(CorrectiveActionPlanTypeLisd *);

protected:
  NaturalType * n;
  CorrectiveActionPlanTypeLisd * CorrectiveActionPlan;
};

/* ***************************************************************** */

class CriteriaByUnitType :
  public XmlTypeBase
{
public:
  CriteriaByUnitType();
  CriteriaByUnitType(
    CriterionLinearType * LinearCriterionIn,
    CriterionAngularType * AngularCriterionIn,
    CriterionAreaType * AreaCriterionIn,
    CriterionForceType * ForceCriterionIn,
    CriterionMassType * MassCriterionIn,
    CriterionPressureType * PressureCriterionIn,
    CriterionSpeedType * SpeedCriterionIn,
    CriterionTemperatureType * TemperatureCriterionIn,
    CriterionTimeType * TimeCriterionIn,
    CriterionUserDefinedUnitTypeLisd * UserDefinedUnitCriterionIn);
  CriteriaByUnitType(
    NaturalType * nIn,
    CriterionLinearType * LinearCriterionIn,
    CriterionAngularType * AngularCriterionIn,
    CriterionAreaType * AreaCriterionIn,
    CriterionForceType * ForceCriterionIn,
    CriterionMassType * MassCriterionIn,
    CriterionPressureType * PressureCriterionIn,
    CriterionSpeedType * SpeedCriterionIn,
    CriterionTemperatureType * TemperatureCriterionIn,
    CriterionTimeType * TimeCriterionIn,
    CriterionUserDefinedUnitTypeLisd * UserDefinedUnitCriterionIn);
  ~CriteriaByUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CriterionLinearType * getLinearCriterion();
  void setLinearCriterion(CriterionLinearType * LinearCriterionIn);
  CriterionAngularType * getAngularCriterion();
  void setAngularCriterion(CriterionAngularType * AngularCriterionIn);
  CriterionAreaType * getAreaCriterion();
  void setAreaCriterion(CriterionAreaType * AreaCriterionIn);
  CriterionForceType * getForceCriterion();
  void setForceCriterion(CriterionForceType * ForceCriterionIn);
  CriterionMassType * getMassCriterion();
  void setMassCriterion(CriterionMassType * MassCriterionIn);
  CriterionPressureType * getPressureCriterion();
  void setPressureCriterion(CriterionPressureType * PressureCriterionIn);
  CriterionSpeedType * getSpeedCriterion();
  void setSpeedCriterion(CriterionSpeedType * SpeedCriterionIn);
  CriterionTemperatureType * getTemperatureCriterion();
  void setTemperatureCriterion(CriterionTemperatureType * TemperatureCriterionIn);
  CriterionTimeType * getTimeCriterion();
  void setTimeCriterion(CriterionTimeType * TimeCriterionIn);
  CriterionUserDefinedUnitTypeLisd * getUserDefinedUnitCriterion();
  void setUserDefinedUnitCriterion(CriterionUserDefinedUnitTypeLisd *);

protected:
  NaturalType * n;
  CriterionLinearType * LinearCriterion;
  CriterionAngularType * AngularCriterion;
  CriterionAreaType * AreaCriterion;
  CriterionForceType * ForceCriterion;
  CriterionMassType * MassCriterion;
  CriterionPressureType * PressureCriterion;
  CriterionSpeedType * SpeedCriterion;
  CriterionTemperatureType * TemperatureCriterion;
  CriterionTimeType * TimeCriterion;
  CriterionUserDefinedUnitTypeLisd * UserDefinedUnitCriterion;
};

/* ***************************************************************** */

class GageRandRStudyEnumType :
  public XmlNMTOKEN
{
public:
  GageRandRStudyEnumType();
  GageRandRStudyEnumType(
    const char * valIn);
  ~GageRandRStudyEnumType();
  bool GageRandRStudyEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class StatisticalStudiesResultsType :
  public XmlTypeBase
{
public:
  StatisticalStudiesResultsType();
  StatisticalStudiesResultsType(
    StatisticalStudyResultsBaseTypeLisd * StatisticalStudyResultsIn);
  StatisticalStudiesResultsType(
    NaturalType * nIn,
    StatisticalStudyResultsBaseTypeLisd * StatisticalStudyResultsIn);
  ~StatisticalStudiesResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  StatisticalStudyResultsBaseTypeLisd * getStatisticalStudyResults();
  void setStatisticalStudyResults(StatisticalStudyResultsBaseTypeLisd *);

protected:
  NaturalType * n;
  StatisticalStudyResultsBaseTypeLisd * StatisticalStudyResults;
};

/* ***************************************************************** */

class StatisticalStudyPlanBaseType :
  public XmlTypeBase
{
public:
  StatisticalStudyPlanBaseType();
  StatisticalStudyPlanBaseType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn);
  StatisticalStudyPlanBaseType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn);
  ~StatisticalStudyPlanBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StatisticalStud_1208_Type * getStatisticalStud_1208();
  void setStatisticalStud_1208(StatisticalStud_1208_Type * StatisticalStud_1208In);
  StatisticalStud_1209_Type * getStatisticalStud_1209();
  void setStatisticalStud_1209(StatisticalStud_1209_Type * StatisticalStud_1209In);
  SummaryStatsValuesListTypeLisd * getStatsValuesSummarys();
  void setStatsValuesSummarys(SummaryStatsValuesListTypeLisd *);
  PreInspectionTraceabilityType * getPreInspectionTraceability();
  void setPreInspectionTraceability(PreInspectionTraceabilityType * PreInspectionTraceabilityIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  QIFReferenceType * getPlanId();
  void setPlanId(QIFReferenceType * PlanIdIn);
  StatisticalStud_1210_Type * getStatisticalStud_1210();
  void setStatisticalStud_1210(StatisticalStud_1210_Type * StatisticalStud_1210In);
  QIFReferenceType * getCorrectiveActionPlanId();
  void setCorrectiveActionPlanId(QIFReferenceType * CorrectiveActionPlanIdIn);

protected:
  QIFIdType * id;
  VersionType * Version;
  AttributesType * Attributes;
  StatisticalStud_1208_Type * StatisticalStud_1208;
  StatisticalStud_1209_Type * StatisticalStud_1209;
  SummaryStatsValuesListTypeLisd * StatsValuesSummarys;
  PreInspectionTraceabilityType * PreInspectionTraceability;
  XmlToken * Name;
  XmlString * Description;
  QIFReferenceType * PlanId;
  StatisticalStud_1210_Type * StatisticalStud_1210;
  QIFReferenceType * CorrectiveActionPlanId;
};

/* ***************************************************************** */

class StatisticalStudyPlanBaseTypeLisd :
  public std::list<StatisticalStudyPlanBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  StatisticalStudyPlanBaseTypeLisd();
  StatisticalStudyPlanBaseTypeLisd(
    StatisticalStudyPlanBaseType * aStatisticalStudyPlanBaseType);
  ~StatisticalStudyPlanBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class StatisticalStudyPlansType :
  public XmlTypeBase
{
public:
  StatisticalStudyPlansType();
  StatisticalStudyPlansType(
    StatisticalStudyPlanBaseTypeLisd * StatisticalStudyPlanIn);
  StatisticalStudyPlansType(
    NaturalType * nIn,
    StatisticalStudyPlanBaseTypeLisd * StatisticalStudyPlanIn);
  ~StatisticalStudyPlansType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  StatisticalStudyPlanBaseTypeLisd * getStatisticalStudyPlan();
  void setStatisticalStudyPlan(StatisticalStudyPlanBaseTypeLisd *);

protected:
  NaturalType * n;
  StatisticalStudyPlanBaseTypeLisd * StatisticalStudyPlan;
};

/* ***************************************************************** */

class StatisticalStudyResultsBaseType :
  public XmlTypeBase
{
public:
  StatisticalStudyResultsBaseType();
  StatisticalStudyResultsBaseType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn);
  StatisticalStudyResultsBaseType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn);
  ~StatisticalStudyResultsBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  QPIdType * getThisStatisticalStudyResultsInstanceQPId();
  void setThisStatisticalStudyResultsInstanceQPId(QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StatsEvalStatusType * getStatus();
  void setStatus(StatsEvalStatusType * StatusIn);
  StatisticalStud_1211_Type * getStatisticalStud_1211();
  void setStatisticalStud_1211(StatisticalStud_1211_Type * StatisticalStud_1211In);
  StudyIssuesType * getStudyIssues();
  void setStudyIssues(StudyIssuesType * StudyIssuesIn);
  InspectionTraceabilityType * getInspectionTraceability();
  void setInspectionTraceability(InspectionTraceabilityType * InspectionTraceabilityIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  QIFReferenceType * getStudyId();
  void setStudyId(QIFReferenceType * StudyIdIn);
  StatisticalStud_1212_Type * getStatisticalStud_1212();
  void setStatisticalStud_1212(StatisticalStud_1212_Type * StatisticalStud_1212In);
  AverageFeaturesType * getAverageFeatures();
  void setAverageFeatures(AverageFeaturesType * AverageFeaturesIn);
  CharacteristicsStatsType * getCharacteristicsStats();
  void setCharacteristicsStats(CharacteristicsStatsType * CharacteristicsStatsIn);
  SummariesStatisticsLinearType * getLinearStatsSummaries();
  void setLinearStatsSummaries(SummariesStatisticsLinearType * LinearStatsSummariesIn);
  SummariesStatisticsAngularType * getAngularStatsSummaries();
  void setAngularStatsSummaries(SummariesStatisticsAngularType * AngularStatsSummariesIn);
  SummariesStatisticsAreaType * getAreaStatsSummaries();
  void setAreaStatsSummaries(SummariesStatisticsAreaType * AreaStatsSummariesIn);
  SummariesStatisticsForceType * getForceStatsSummaries();
  void setForceStatsSummaries(SummariesStatisticsForceType * ForceStatsSummariesIn);
  SummariesStatisticsMassType * getMassStatsSummaries();
  void setMassStatsSummaries(SummariesStatisticsMassType * MassStatsSummariesIn);
  SummariesStatisticsPressureType * getPressureStatsSummaries();
  void setPressureStatsSummaries(SummariesStatisticsPressureType * PressureStatsSummariesIn);
  SummariesStatisticsSpeedType * getSpeedStatsSummaries();
  void setSpeedStatsSummaries(SummariesStatisticsSpeedType * SpeedStatsSummariesIn);
  SummariesStatisticsTemperatureType * getTemperatureStatsSummaries();
  void setTemperatureStatsSummaries(SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn);
  SummariesStatisticsTimeType * getTimeStatsSummaries();
  void setTimeStatsSummaries(SummariesStatisticsTimeType * TimeStatsSummariesIn);
  SummariesStatisticsUserDefinedUnitType * getUserDefinedUnitStatsSummaries();
  void setUserDefinedUnitStatsSummaries(SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn);
  SummariesStatisticsType * getStatsSummaries();
  void setStatsSummaries(SummariesStatisticsType * StatsSummariesIn);

protected:
  QIFIdType * id;
  QPIdType * ThisStatisticalStudyResultsInstanceQPId;
  AttributesType * Attributes;
  StatsEvalStatusType * Status;
  StatisticalStud_1211_Type * StatisticalStud_1211;
  StudyIssuesType * StudyIssues;
  InspectionTraceabilityType * InspectionTraceability;
  XmlToken * Name;
  XmlString * Description;
  QIFReferenceType * StudyId;
  StatisticalStud_1212_Type * StatisticalStud_1212;
  AverageFeaturesType * AverageFeatures;
  CharacteristicsStatsType * CharacteristicsStats;
  SummariesStatisticsLinearType * LinearStatsSummaries;
  SummariesStatisticsAngularType * AngularStatsSummaries;
  SummariesStatisticsAreaType * AreaStatsSummaries;
  SummariesStatisticsForceType * ForceStatsSummaries;
  SummariesStatisticsMassType * MassStatsSummaries;
  SummariesStatisticsPressureType * PressureStatsSummaries;
  SummariesStatisticsSpeedType * SpeedStatsSummaries;
  SummariesStatisticsTemperatureType * TemperatureStatsSummaries;
  SummariesStatisticsTimeType * TimeStatsSummaries;
  SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummaries;
  SummariesStatisticsType * StatsSummaries;
};

/* ***************************************************************** */

class StatisticalStudyResultsBaseTypeLisd :
  public std::list<StatisticalStudyResultsBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  StatisticalStudyResultsBaseTypeLisd();
  StatisticalStudyResultsBaseTypeLisd(
    StatisticalStudyResultsBaseType * aStatisticalStudyResultsBaseType);
  ~StatisticalStudyResultsBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class StatisticsType :
  public XmlTypeBase
{
public:
  StatisticsType();
  StatisticsType(
    StatisticalStudyPlansType * StatisticalStudyPlansIn,
    StatisticalStudiesResultsType * StatisticalStudiesResultsIn,
    CorrectiveActionPlansType * CorrectiveActionPlansIn);
  ~StatisticsType();
  void printSelf(FILE * outFile);

  StatisticalStudyPlansType * getStatisticalStudyPlans();
  void setStatisticalStudyPlans(StatisticalStudyPlansType * StatisticalStudyPlansIn);
  StatisticalStudiesResultsType * getStatisticalStudiesResults();
  void setStatisticalStudiesResults(StatisticalStudiesResultsType * StatisticalStudiesResultsIn);
  CorrectiveActionPlansType * getCorrectiveActionPlans();
  void setCorrectiveActionPlans(CorrectiveActionPlansType * CorrectiveActionPlansIn);

protected:
  StatisticalStudyPlansType * StatisticalStudyPlans;
  StatisticalStudiesResultsType * StatisticalStudiesResults;
  CorrectiveActionPlansType * CorrectiveActionPlans;
};

/* ***************************************************************** */

class CapabilityStudy_1199_Type :
  public XmlTypeBase
{
public:
  CapabilityStudy_1199_Type();
  CapabilityStudy_1199_Type(
    CapabilityStudy_1199_TypeChoicePair * CapabilityStudy_1199_TypePairIn);
  ~CapabilityStudy_1199_Type();
  void printSelf(FILE * outFile);

  CapabilityStudy_1199_TypeChoicePair * getCapabilityStudy_1199_TypePair();
  void setCapabilityStudy_1199_TypePair(CapabilityStudy_1199_TypeChoicePair * CapabilityStudy_1199_TypePairIn);

protected:
  CapabilityStudy_1199_TypeChoicePair * CapabilityStudy_1199_TypePair;
};

/* ***************************************************************** */

union CapabilityStudy_1199_TypeVal
{
  CriterionDecimalType * CpkThreshold;
  CriterionDecimalType * PpkThreshold;
};

/* ***************************************************************** */

class CapabilityStudy_1199_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CpkThresholdE,
    PpkThresholdE };
  CapabilityStudy_1199_TypeChoicePair();
  CapabilityStudy_1199_TypeChoicePair(
    whichOne CapabilityStudy_1199_TypeTypeIn,
    CapabilityStudy_1199_TypeVal CapabilityStudy_1199_TypeValueIn);
  ~CapabilityStudy_1199_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CapabilityStudy_1199_TypeType;
  CapabilityStudy_1199_TypeVal CapabilityStudy_1199_TypeValue;
};

/* ***************************************************************** */

class ControlMethodTy_1200_Type :
  public XmlTypeBase
{
public:
  ControlMethodTy_1200_Type();
  ControlMethodTy_1200_Type(
    ControlMethodTy_1200_TypeChoicePair * ControlMethodTy_1200_TypePairIn);
  ~ControlMethodTy_1200_Type();
  void printSelf(FILE * outFile);

  ControlMethodTy_1200_TypeChoicePair * getControlMethodTy_1200_TypePair();
  void setControlMethodTy_1200_TypePair(ControlMethodTy_1200_TypeChoicePair * ControlMethodTy_1200_TypePairIn);

protected:
  ControlMethodTy_1200_TypeChoicePair * ControlMethodTy_1200_TypePair;
};

/* ***************************************************************** */

union ControlMethodTy_1200_TypeVal
{
  CriterionIntegerType * NumOutOfTolerance;
  CriterionDecimalType * CpThreshold;
  CriterionDecimalType * CpkThreshold;
  CriterionDecimalType * PpThreshold;
  CriterionDecimalType * PpkThreshold;
  CriterionIntegerType * NumOutOfControl;
  CriterionIntegerType * TrendGrouping;
  CriterionIntegerType * SkewGrouping;
  CriterionOutOfType * OneThirdGrouping;
  CriterionOutOfType * TwoThirdsGrouping;
  CriterionOutOfType * Oscillation;
  CriterionOutOfType * Stratification;
  CriterionIntegerType * NumOutOfControlRng;
};

/* ***************************************************************** */

class ControlMethodTy_1200_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NumOutOfToleranceE,
    CpThresholdE,
    CpkThresholdE,
    PpThresholdE,
    PpkThresholdE,
    NumOutOfControlE,
    TrendGroupingE,
    SkewGroupingE,
    OneThirdGroupingE,
    TwoThirdsGroupingE,
    OscillationE,
    StratificationE,
    NumOutOfControlRngE };
  ControlMethodTy_1200_TypeChoicePair();
  ControlMethodTy_1200_TypeChoicePair(
    whichOne ControlMethodTy_1200_TypeTypeIn,
    ControlMethodTy_1200_TypeVal ControlMethodTy_1200_TypeValueIn);
  ~ControlMethodTy_1200_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ControlMethodTy_1200_TypeType;
  ControlMethodTy_1200_TypeVal ControlMethodTy_1200_TypeValue;
};

/* ***************************************************************** */

class FirstArticleStu_1201_Type :
  public XmlTypeBase
{
public:
  FirstArticleStu_1201_Type();
  FirstArticleStu_1201_Type(
    FirstArticleStu_1201_TypeChoicePair * FirstArticleStu_1201_TypePairIn);
  ~FirstArticleStu_1201_Type();
  void printSelf(FILE * outFile);

  FirstArticleStu_1201_TypeChoicePair * getFirstArticleStu_1201_TypePair();
  void setFirstArticleStu_1201_TypePair(FirstArticleStu_1201_TypeChoicePair * FirstArticleStu_1201_TypePairIn);

protected:
  FirstArticleStu_1201_TypeChoicePair * FirstArticleStu_1201_TypePair;
};

/* ***************************************************************** */

union FirstArticleStu_1201_TypeVal
{
  AbsoluteLimitsByUnitType * AbsoluteMaximums;
  XmlDecimal * RelativeMaximum;
};

/* ***************************************************************** */

class FirstArticleStu_1201_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AbsoluteMaximumsE,
    RelativeMaximumE };
  FirstArticleStu_1201_TypeChoicePair();
  FirstArticleStu_1201_TypeChoicePair(
    whichOne FirstArticleStu_1201_TypeTypeIn,
    FirstArticleStu_1201_TypeVal FirstArticleStu_1201_TypeValueIn);
  ~FirstArticleStu_1201_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FirstArticleStu_1201_TypeType;
  FirstArticleStu_1201_TypeVal FirstArticleStu_1201_TypeValue;
};

/* ***************************************************************** */

class GageRandRStudyP_1202_Type :
  public XmlTypeBase
{
public:
  GageRandRStudyP_1202_Type();
  GageRandRStudyP_1202_Type(
    GageRandRStudyP_1202_TypeChoicePair * GageRandRStudyP_1202_TypePairIn);
  ~GageRandRStudyP_1202_Type();
  void printSelf(FILE * outFile);

  GageRandRStudyP_1202_TypeChoicePair * getGageRandRStudyP_1202_TypePair();
  void setGageRandRStudyP_1202_TypePair(GageRandRStudyP_1202_TypeChoicePair * GageRandRStudyP_1202_TypePairIn);

protected:
  GageRandRStudyP_1202_TypeChoicePair * GageRandRStudyP_1202_TypePair;
};

/* ***************************************************************** */

union GageRandRStudyP_1202_TypeVal
{
  CriterionDecimalType * MaximumRelativeAppraiserVariation;
  CriteriaByUnitType * MaximumAbsoluteAppraiserVariation;
};

/* ***************************************************************** */

class GageRandRStudyP_1202_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaximumRelativeAppraiserVariationE,
    MaximumAbsoluteAppraiserVariationE };
  GageRandRStudyP_1202_TypeChoicePair();
  GageRandRStudyP_1202_TypeChoicePair(
    whichOne GageRandRStudyP_1202_TypeTypeIn,
    GageRandRStudyP_1202_TypeVal GageRandRStudyP_1202_TypeValueIn);
  ~GageRandRStudyP_1202_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GageRandRStudyP_1202_TypeType;
  GageRandRStudyP_1202_TypeVal GageRandRStudyP_1202_TypeValue;
};

/* ***************************************************************** */

class GageRandRStudyP_1203_Type :
  public XmlTypeBase
{
public:
  GageRandRStudyP_1203_Type();
  GageRandRStudyP_1203_Type(
    GageRandRStudyP_1203_TypeChoicePair * GageRandRStudyP_1203_TypePairIn);
  ~GageRandRStudyP_1203_Type();
  void printSelf(FILE * outFile);

  GageRandRStudyP_1203_TypeChoicePair * getGageRandRStudyP_1203_TypePair();
  void setGageRandRStudyP_1203_TypePair(GageRandRStudyP_1203_TypeChoicePair * GageRandRStudyP_1203_TypePairIn);

protected:
  GageRandRStudyP_1203_TypeChoicePair * GageRandRStudyP_1203_TypePair;
};

/* ***************************************************************** */

union GageRandRStudyP_1203_TypeVal
{
  CriterionDecimalType * MaximumRelativeEquipmentVariation;
  CriteriaByUnitType * MaximumAbsoluteEquipmentVariation;
};

/* ***************************************************************** */

class GageRandRStudyP_1203_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaximumRelativeEquipmentVariationE,
    MaximumAbsoluteEquipmentVariationE };
  GageRandRStudyP_1203_TypeChoicePair();
  GageRandRStudyP_1203_TypeChoicePair(
    whichOne GageRandRStudyP_1203_TypeTypeIn,
    GageRandRStudyP_1203_TypeVal GageRandRStudyP_1203_TypeValueIn);
  ~GageRandRStudyP_1203_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GageRandRStudyP_1203_TypeType;
  GageRandRStudyP_1203_TypeVal GageRandRStudyP_1203_TypeValue;
};

/* ***************************************************************** */

class GageRandRStudyP_1204_Type :
  public XmlTypeBase
{
public:
  GageRandRStudyP_1204_Type();
  GageRandRStudyP_1204_Type(
    GageRandRStudyP_1204_TypeChoicePair * GageRandRStudyP_1204_TypePairIn);
  ~GageRandRStudyP_1204_Type();
  void printSelf(FILE * outFile);

  GageRandRStudyP_1204_TypeChoicePair * getGageRandRStudyP_1204_TypePair();
  void setGageRandRStudyP_1204_TypePair(GageRandRStudyP_1204_TypeChoicePair * GageRandRStudyP_1204_TypePairIn);

protected:
  GageRandRStudyP_1204_TypeChoicePair * GageRandRStudyP_1204_TypePair;
};

/* ***************************************************************** */

union GageRandRStudyP_1204_TypeVal
{
  CriterionDecimalType * MaximumRelativeTotalRandR;
  CriteriaByUnitType * MaximumAbsoluteTotalRandR;
};

/* ***************************************************************** */

class GageRandRStudyP_1204_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaximumRelativeTotalRandRE,
    MaximumAbsoluteTotalRandRE };
  GageRandRStudyP_1204_TypeChoicePair();
  GageRandRStudyP_1204_TypeChoicePair(
    whichOne GageRandRStudyP_1204_TypeTypeIn,
    GageRandRStudyP_1204_TypeVal GageRandRStudyP_1204_TypeValueIn);
  ~GageRandRStudyP_1204_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GageRandRStudyP_1204_TypeType;
  GageRandRStudyP_1204_TypeVal GageRandRStudyP_1204_TypeValue;
};

/* ***************************************************************** */

class LinearityStudyP_1205_Type :
  public XmlTypeBase
{
public:
  LinearityStudyP_1205_Type();
  LinearityStudyP_1205_Type(
    LinearityStudyP_1205_TypeChoicePair * LinearityStudyP_1205_TypePairIn);
  ~LinearityStudyP_1205_Type();
  void printSelf(FILE * outFile);

  LinearityStudyP_1205_TypeChoicePair * getLinearityStudyP_1205_TypePair();
  void setLinearityStudyP_1205_TypePair(LinearityStudyP_1205_TypeChoicePair * LinearityStudyP_1205_TypePairIn);

protected:
  LinearityStudyP_1205_TypeChoicePair * LinearityStudyP_1205_TypePair;
};

/* ***************************************************************** */

union LinearityStudyP_1205_TypeVal
{
  AbsoluteLimitsByUnitType * AbsoluteMinimums;
  XmlDecimal * RelativeLinearityMinimum;
};

/* ***************************************************************** */

class LinearityStudyP_1205_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AbsoluteMinimumsE,
    RelativeLinearityMinimumE };
  LinearityStudyP_1205_TypeChoicePair();
  LinearityStudyP_1205_TypeChoicePair(
    whichOne LinearityStudyP_1205_TypeTypeIn,
    LinearityStudyP_1205_TypeVal LinearityStudyP_1205_TypeValueIn);
  ~LinearityStudyP_1205_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearityStudyP_1205_TypeType;
  LinearityStudyP_1205_TypeVal LinearityStudyP_1205_TypeValue;
};

/* ***************************************************************** */

class LinearityStudyR_1206_Type :
  public XmlTypeBase
{
public:
  LinearityStudyR_1206_Type();
  LinearityStudyR_1206_Type(
    LinearityStudyR_1206_TypeChoicePair * LinearityStudyR_1206_TypePairIn);
  ~LinearityStudyR_1206_Type();
  void printSelf(FILE * outFile);

  LinearityStudyR_1206_TypeChoicePair * getLinearityStudyR_1206_TypePair();
  void setLinearityStudyR_1206_TypePair(LinearityStudyR_1206_TypeChoicePair * LinearityStudyR_1206_TypePairIn);

protected:
  LinearityStudyR_1206_TypeChoicePair * LinearityStudyR_1206_TypePair;
};

/* ***************************************************************** */

union LinearityStudyR_1206_TypeVal
{
  MeasuredLinearValueType * LinearAbsoluteLinearity;
  MeasuredAngularValueType * AngularAbsoluteLinearity;
  MeasuredAreaValueType * AreaAbsoluteLinearity;
  MeasuredForceValueType * ForceAbsoluteLinearity;
  MeasuredMassValueType * MassAbsoluteLinearity;
  MeasuredPressureValueType * PressureAbsoluteLinearity;
  MeasuredSpeedValueType * SpeedAbsoluteLinearity;
  MeasuredTemperatureValueType * TemperatureAbsoluteLinearity;
  MeasuredTimeValueType * TimeAbsoluteLinearity;
  MeasuredUserDefinedUnitValueType * UserDefinedUnitAbsoluteLinearity;
};

/* ***************************************************************** */

class LinearityStudyR_1206_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearAbsoluteLinearityE,
    AngularAbsoluteLinearityE,
    AreaAbsoluteLinearityE,
    ForceAbsoluteLinearityE,
    MassAbsoluteLinearityE,
    PressureAbsoluteLinearityE,
    SpeedAbsoluteLinearityE,
    TemperatureAbsoluteLinearityE,
    TimeAbsoluteLinearityE,
    UserDefinedUnitAbsoluteLinearityE };
  LinearityStudyR_1206_TypeChoicePair();
  LinearityStudyR_1206_TypeChoicePair(
    whichOne LinearityStudyR_1206_TypeTypeIn,
    LinearityStudyR_1206_TypeVal LinearityStudyR_1206_TypeValueIn);
  ~LinearityStudyR_1206_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearityStudyR_1206_TypeType;
  LinearityStudyR_1206_TypeVal LinearityStudyR_1206_TypeValue;
};

/* ***************************************************************** */

class ProcessDifferen_1207_Type :
  public XmlTypeBase
{
public:
  ProcessDifferen_1207_Type();
  ProcessDifferen_1207_Type(
    ProcessDifferen_1207_TypeChoicePair * ProcessDifferen_1207_TypePairIn);
  ~ProcessDifferen_1207_Type();
  void printSelf(FILE * outFile);

  ProcessDifferen_1207_TypeChoicePair * getProcessDifferen_1207_TypePair();
  void setProcessDifferen_1207_TypePair(ProcessDifferen_1207_TypeChoicePair * ProcessDifferen_1207_TypePairIn);

protected:
  ProcessDifferen_1207_TypeChoicePair * ProcessDifferen_1207_TypePair;
};

/* ***************************************************************** */

union ProcessDifferen_1207_TypeVal
{
  AbsoluteLimitsByUnitType * AbsoluteDifferences;
  XmlDecimal * RelativeDifference;
};

/* ***************************************************************** */

class ProcessDifferen_1207_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AbsoluteDifferencesE,
    RelativeDifferenceE };
  ProcessDifferen_1207_TypeChoicePair();
  ProcessDifferen_1207_TypeChoicePair(
    whichOne ProcessDifferen_1207_TypeTypeIn,
    ProcessDifferen_1207_TypeVal ProcessDifferen_1207_TypeValueIn);
  ~ProcessDifferen_1207_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ProcessDifferen_1207_TypeType;
  ProcessDifferen_1207_TypeVal ProcessDifferen_1207_TypeValue;
};

/* ***************************************************************** */

class StatisticalStud_1208_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1208_Type();
  StatisticalStud_1208_Type(
    ArrayReferenceType * FeatureItemIdsIn,
    XmlBoolean * CalculateAverageFeaturesIn);
  ~StatisticalStud_1208_Type();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getFeatureItemIds();
  void setFeatureItemIds(ArrayReferenceType * FeatureItemIdsIn);
  XmlBoolean * getCalculateAverageFeatures();
  void setCalculateAverageFeatures(XmlBoolean * CalculateAverageFeaturesIn);

protected:
  ArrayReferenceType * FeatureItemIds;
  XmlBoolean * CalculateAverageFeatures;
};

/* ***************************************************************** */

class StatisticalStud_1209_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1209_Type();
  StatisticalStud_1209_Type(
    ArrayReferenceType * CharacteristicItemIdsIn,
    ListAccumulatedStatsValuesTypeLisd * StatsValuesPerCharIn,
    ListSubgroupStatsValuesTypeLisd * StatsValuesPerSubgroupIn);
  ~StatisticalStud_1209_Type();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getCharacteristicItemIds();
  void setCharacteristicItemIds(ArrayReferenceType * CharacteristicItemIdsIn);
  ListAccumulatedStatsValuesTypeLisd * getStatsValuesPerChar();
  void setStatsValuesPerChar(ListAccumulatedStatsValuesTypeLisd *);
  ListSubgroupStatsValuesTypeLisd * getStatsValuesPerSubgroup();
  void setStatsValuesPerSubgroup(ListSubgroupStatsValuesTypeLisd *);

protected:
  ArrayReferenceType * CharacteristicItemIds;
  ListAccumulatedStatsValuesTypeLisd * StatsValuesPerChar;
  ListSubgroupStatsValuesTypeLisd * StatsValuesPerSubgroup;
};

/* ***************************************************************** */

class StatisticalStud_1210_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1210_Type();
  StatisticalStud_1210_Type(
    StatisticalStud_1210_TypeChoicePair * StatisticalStud_1210_TypePairIn);
  ~StatisticalStud_1210_Type();
  void printSelf(FILE * outFile);

  StatisticalStud_1210_TypeChoicePair * getStatisticalStud_1210_TypePair();
  void setStatisticalStud_1210_TypePair(StatisticalStud_1210_TypeChoicePair * StatisticalStud_1210_TypePairIn);

protected:
  StatisticalStud_1210_TypeChoicePair * StatisticalStud_1210_TypePair;
};

/* ***************************************************************** */

union StatisticalStud_1210_TypeVal
{
  QIFReferenceType * SoftwareId;
  QIFReferenceType * StandardId;
};

/* ***************************************************************** */

class StatisticalStud_1210_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SoftwareIdE,
    StandardIdE };
  StatisticalStud_1210_TypeChoicePair();
  StatisticalStud_1210_TypeChoicePair(
    whichOne StatisticalStud_1210_TypeTypeIn,
    StatisticalStud_1210_TypeVal StatisticalStud_1210_TypeValueIn);
  ~StatisticalStud_1210_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatisticalStud_1210_TypeType;
  StatisticalStud_1210_TypeVal StatisticalStud_1210_TypeValue;
};

/* ***************************************************************** */

class StatisticalStud_1211_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1211_Type();
  StatisticalStud_1211_Type(
    StatisticalStud_1211_TypeChoicePair * StatisticalStud_1211_TypePairIn);
  ~StatisticalStud_1211_Type();
  void printSelf(FILE * outFile);

  StatisticalStud_1211_TypeChoicePair * getStatisticalStud_1211_TypePair();
  void setStatisticalStud_1211_TypePair(StatisticalStud_1211_TypeChoicePair * StatisticalStud_1211_TypePairIn);

protected:
  StatisticalStud_1211_TypeChoicePair * StatisticalStud_1211_TypePair;
};

/* ***************************************************************** */

union StatisticalStud_1211_TypeVal
{
  QIFReferenceType * SoftwareId;
  QIFReferenceType * StandardId;
};

/* ***************************************************************** */

class StatisticalStud_1211_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SoftwareIdE,
    StandardIdE };
  StatisticalStud_1211_TypeChoicePair();
  StatisticalStud_1211_TypeChoicePair(
    whichOne StatisticalStud_1211_TypeTypeIn,
    StatisticalStud_1211_TypeVal StatisticalStud_1211_TypeValueIn);
  ~StatisticalStud_1211_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatisticalStud_1211_TypeType;
  StatisticalStud_1211_TypeVal StatisticalStud_1211_TypeValue;
};

/* ***************************************************************** */

class StatisticalStud_1212_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1212_Type();
  StatisticalStud_1212_Type(
    StatisticalStud_1212_TypeChoicePair * StatisticalStud_1212_TypePairIn);
  ~StatisticalStud_1212_Type();
  void printSelf(FILE * outFile);

  StatisticalStud_1212_TypeChoicePair * getStatisticalStud_1212_TypePair();
  void setStatisticalStud_1212_TypePair(StatisticalStud_1212_TypeChoicePair * StatisticalStud_1212_TypePairIn);

protected:
  StatisticalStud_1212_TypeChoicePair * StatisticalStud_1212_TypePair;
};

/* ***************************************************************** */

union StatisticalStud_1212_TypeVal
{
  ArrayReferenceType * ResultsIds;
  ArrayQPIdFullReferenceTypeLisd * ResultsQPIds;
  ExternalFileReferencesType * ResultsFiles;
};

/* ***************************************************************** */

class StatisticalStud_1212_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ResultsIdsE,
    ResultsQPIdsE,
    ResultsFilesE };
  StatisticalStud_1212_TypeChoicePair();
  StatisticalStud_1212_TypeChoicePair(
    whichOne StatisticalStud_1212_TypeTypeIn,
    StatisticalStud_1212_TypeVal StatisticalStud_1212_TypeValueIn);
  ~StatisticalStud_1212_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatisticalStud_1212_TypeType;
  StatisticalStud_1212_TypeVal StatisticalStud_1212_TypeValue;
};

/* ***************************************************************** */

class BiasStudyResultsType :
  public StatisticalStudyResultsBaseType
{
public:
  BiasStudyResultsType();
  BiasStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * SampleSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn);
  BiasStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * SampleSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn);
  ~BiasStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getSampleSize();
  void setSampleSize(XmlPositiveInteger * SampleSizeIn);
  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);

protected:
  XmlPositiveInteger * SampleSize;
  ArrayReferenceType * MeasurementDeviceIds;
};

/* ***************************************************************** */

class FirstArticleStudyPlanType :
  public StatisticalStudyPlanBaseType
{
public:
  FirstArticleStudyPlanType();
  FirstArticleStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlDecimal * InSpecRatioIn,
    FirstArticleStu_1201_Type * FirstArticleStu_1201In);
  FirstArticleStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlDecimal * InSpecRatioIn,
    FirstArticleStu_1201_Type * FirstArticleStu_1201In);
  ~FirstArticleStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getInSpecRatio();
  void setInSpecRatio(XmlDecimal * InSpecRatioIn);
  FirstArticleStu_1201_Type * getFirstArticleStu_1201();
  void setFirstArticleStu_1201(FirstArticleStu_1201_Type * FirstArticleStu_1201In);

protected:
  XmlDecimal * InSpecRatio;
  FirstArticleStu_1201_Type * FirstArticleStu_1201;
};

/* ***************************************************************** */

class FirstArticleStudyResultsType :
  public StatisticalStudyResultsBaseType
{
public:
  FirstArticleStudyResultsType();
  FirstArticleStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlDecimal * InSpecRatioIn,
    AbsoluteMeasurementsByUnitType * AbsoluteMaximumsIn,
    MeasuredDecimalType * RelativeMaximumIn);
  FirstArticleStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlDecimal * InSpecRatioIn,
    AbsoluteMeasurementsByUnitType * AbsoluteMaximumsIn,
    MeasuredDecimalType * RelativeMaximumIn);
  ~FirstArticleStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getInSpecRatio();
  void setInSpecRatio(XmlDecimal * InSpecRatioIn);
  AbsoluteMeasurementsByUnitType * getAbsoluteMaximums();
  void setAbsoluteMaximums(AbsoluteMeasurementsByUnitType * AbsoluteMaximumsIn);
  MeasuredDecimalType * getRelativeMaximum();
  void setRelativeMaximum(MeasuredDecimalType * RelativeMaximumIn);

protected:
  XmlDecimal * InSpecRatio;
  AbsoluteMeasurementsByUnitType * AbsoluteMaximums;
  MeasuredDecimalType * RelativeMaximum;
};

/* ***************************************************************** */

class GageRandRStudyPlanType :
  public StatisticalStudyPlanBaseType
{
public:
  GageRandRStudyPlanType();
  GageRandRStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    GageRandRStudyEnumType * RandRStudyTypeIn,
    XmlPositiveInteger * NumberOfAppraisersIn,
    XmlPositiveInteger * NumberOfPartsIn,
    XmlPositiveInteger * NumberOfTrialsIn,
    GageRandRStudyP_1202_Type * GageRandRStudyP_1202In,
    GageRandRStudyP_1203_Type * GageRandRStudyP_1203In,
    GageRandRStudyP_1204_Type * GageRandRStudyP_1204In);
  GageRandRStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    GageRandRStudyEnumType * RandRStudyTypeIn,
    XmlPositiveInteger * NumberOfAppraisersIn,
    XmlPositiveInteger * NumberOfPartsIn,
    XmlPositiveInteger * NumberOfTrialsIn,
    GageRandRStudyP_1202_Type * GageRandRStudyP_1202In,
    GageRandRStudyP_1203_Type * GageRandRStudyP_1203In,
    GageRandRStudyP_1204_Type * GageRandRStudyP_1204In);
  ~GageRandRStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  GageRandRStudyEnumType * getRandRStudyType();
  void setRandRStudyType(GageRandRStudyEnumType * RandRStudyTypeIn);
  XmlPositiveInteger * getNumberOfAppraisers();
  void setNumberOfAppraisers(XmlPositiveInteger * NumberOfAppraisersIn);
  XmlPositiveInteger * getNumberOfParts();
  void setNumberOfParts(XmlPositiveInteger * NumberOfPartsIn);
  XmlPositiveInteger * getNumberOfTrials();
  void setNumberOfTrials(XmlPositiveInteger * NumberOfTrialsIn);
  GageRandRStudyP_1202_Type * getGageRandRStudyP_1202();
  void setGageRandRStudyP_1202(GageRandRStudyP_1202_Type * GageRandRStudyP_1202In);
  GageRandRStudyP_1203_Type * getGageRandRStudyP_1203();
  void setGageRandRStudyP_1203(GageRandRStudyP_1203_Type * GageRandRStudyP_1203In);
  GageRandRStudyP_1204_Type * getGageRandRStudyP_1204();
  void setGageRandRStudyP_1204(GageRandRStudyP_1204_Type * GageRandRStudyP_1204In);

protected:
  ArrayReferenceType * MeasurementDeviceIds;
  GageRandRStudyEnumType * RandRStudyType;
  XmlPositiveInteger * NumberOfAppraisers;
  XmlPositiveInteger * NumberOfParts;
  XmlPositiveInteger * NumberOfTrials;
  GageRandRStudyP_1202_Type * GageRandRStudyP_1202;
  GageRandRStudyP_1203_Type * GageRandRStudyP_1203;
  GageRandRStudyP_1204_Type * GageRandRStudyP_1204;
};

/* ***************************************************************** */

class GageRandRStudyResultsType :
  public StatisticalStudyResultsBaseType
{
public:
  GageRandRStudyResultsType();
  GageRandRStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlPositiveInteger * NumberOfAppraisersIn,
    XmlPositiveInteger * NumberOfPartsIn,
    XmlPositiveInteger * NumberOfTrialsIn);
  GageRandRStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlPositiveInteger * NumberOfAppraisersIn,
    XmlPositiveInteger * NumberOfPartsIn,
    XmlPositiveInteger * NumberOfTrialsIn);
  ~GageRandRStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  XmlPositiveInteger * getNumberOfAppraisers();
  void setNumberOfAppraisers(XmlPositiveInteger * NumberOfAppraisersIn);
  XmlPositiveInteger * getNumberOfParts();
  void setNumberOfParts(XmlPositiveInteger * NumberOfPartsIn);
  XmlPositiveInteger * getNumberOfTrials();
  void setNumberOfTrials(XmlPositiveInteger * NumberOfTrialsIn);

protected:
  ArrayReferenceType * MeasurementDeviceIds;
  XmlPositiveInteger * NumberOfAppraisers;
  XmlPositiveInteger * NumberOfParts;
  XmlPositiveInteger * NumberOfTrials;
};

/* ***************************************************************** */

class LinearityStudyPlanType :
  public StatisticalStudyPlanBaseType
{
public:
  LinearityStudyPlanType();
  LinearityStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlDecimal * GoodnessOfFitThresholdIn,
    LinearityStudyP_1205_Type * LinearityStudyP_1205In);
  LinearityStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlDecimal * GoodnessOfFitThresholdIn,
    LinearityStudyP_1205_Type * LinearityStudyP_1205In);
  ~LinearityStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  XmlDecimal * getGoodnessOfFitThreshold();
  void setGoodnessOfFitThreshold(XmlDecimal * GoodnessOfFitThresholdIn);
  LinearityStudyP_1205_Type * getLinearityStudyP_1205();
  void setLinearityStudyP_1205(LinearityStudyP_1205_Type * LinearityStudyP_1205In);

protected:
  ArrayReferenceType * MeasurementDeviceIds;
  XmlDecimal * GoodnessOfFitThreshold;
  LinearityStudyP_1205_Type * LinearityStudyP_1205;
};

/* ***************************************************************** */

class LinearityStudyResultsType :
  public StatisticalStudyResultsBaseType
{
public:
  LinearityStudyResultsType();
  LinearityStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * SampleSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    MeasuredDecimalType * GoodnessOfFitIn,
    LinearityStudyR_1206_Type * LinearityStudyR_1206In,
    MeasuredDecimalType * RelativeLinearityIn);
  LinearityStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * SampleSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    MeasuredDecimalType * GoodnessOfFitIn,
    LinearityStudyR_1206_Type * LinearityStudyR_1206In,
    MeasuredDecimalType * RelativeLinearityIn);
  ~LinearityStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getSampleSize();
  void setSampleSize(XmlPositiveInteger * SampleSizeIn);
  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  MeasuredDecimalType * getGoodnessOfFit();
  void setGoodnessOfFit(MeasuredDecimalType * GoodnessOfFitIn);
  LinearityStudyR_1206_Type * getLinearityStudyR_1206();
  void setLinearityStudyR_1206(LinearityStudyR_1206_Type * LinearityStudyR_1206In);
  MeasuredDecimalType * getRelativeLinearity();
  void setRelativeLinearity(MeasuredDecimalType * RelativeLinearityIn);

protected:
  XmlPositiveInteger * SampleSize;
  ArrayReferenceType * MeasurementDeviceIds;
  MeasuredDecimalType * GoodnessOfFit;
  LinearityStudyR_1206_Type * LinearityStudyR_1206;
  MeasuredDecimalType * RelativeLinearity;
};

/* ***************************************************************** */

class MultipleProductInstanceStudyPlanBaseType :
  public StatisticalStudyPlanBaseType
{
public:
  MultipleProductInstanceStudyPlanBaseType();
  MultipleProductInstanceStudyPlanBaseType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  MultipleProductInstanceStudyPlanBaseType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  ~MultipleProductInstanceStudyPlanBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getNumberOfSamples();
  void setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn);
  XmlPositiveInteger * getSubgroupSize();
  void setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn);

protected:
  XmlPositiveInteger * NumberOfSamples;
  XmlPositiveInteger * SubgroupSize;
};

/* ***************************************************************** */

class MultipleProductInstanceStudyResultsBaseType :
  public StatisticalStudyResultsBaseType
{
public:
  MultipleProductInstanceStudyResultsBaseType();
  MultipleProductInstanceStudyResultsBaseType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  MultipleProductInstanceStudyResultsBaseType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  ~MultipleProductInstanceStudyResultsBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getNumberOfSamples();
  void setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn);
  XmlPositiveInteger * getSubgroupSize();
  void setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn);

protected:
  XmlPositiveInteger * NumberOfSamples;
  XmlPositiveInteger * SubgroupSize;
};

/* ***************************************************************** */

class ProcessDifferenceStudyPlanType :
  public StatisticalStudyPlanBaseType
{
public:
  ProcessDifferenceStudyPlanType();
  ProcessDifferenceStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ProcessDifferen_1207_Type * ProcessDifferen_1207In);
  ProcessDifferenceStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ProcessDifferen_1207_Type * ProcessDifferen_1207In);
  ~ProcessDifferenceStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getNumberOfSamples();
  void setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn);
  XmlPositiveInteger * getSubgroupSize();
  void setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn);
  QIFReferenceType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn);
  ProcessDifferen_1207_Type * getProcessDifferen_1207();
  void setProcessDifferen_1207(ProcessDifferen_1207_Type * ProcessDifferen_1207In);

protected:
  XmlPositiveInteger * NumberOfSamples;
  XmlPositiveInteger * SubgroupSize;
  QIFReferenceType * ManufacturingProcessId;
  ProcessDifferen_1207_Type * ProcessDifferen_1207;
};

/* ***************************************************************** */

class ProcessDifferenceStudyResultsType :
  public StatisticalStudyResultsBaseType
{
public:
  ProcessDifferenceStudyResultsType();
  ProcessDifferenceStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    AbsoluteMeasurementsByUnitType * AbsoluteDifferencesIn,
    MeasuredDecimalType * RelativeDifferenceIn);
  ProcessDifferenceStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    AbsoluteMeasurementsByUnitType * AbsoluteDifferencesIn,
    MeasuredDecimalType * RelativeDifferenceIn);
  ~ProcessDifferenceStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getNumberOfSamples();
  void setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn);
  XmlPositiveInteger * getSubgroupSize();
  void setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn);
  QIFReferenceType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn);
  AbsoluteMeasurementsByUnitType * getAbsoluteDifferences();
  void setAbsoluteDifferences(AbsoluteMeasurementsByUnitType * AbsoluteDifferencesIn);
  MeasuredDecimalType * getRelativeDifference();
  void setRelativeDifference(MeasuredDecimalType * RelativeDifferenceIn);

protected:
  XmlPositiveInteger * NumberOfSamples;
  XmlPositiveInteger * SubgroupSize;
  QIFReferenceType * ManufacturingProcessId;
  AbsoluteMeasurementsByUnitType * AbsoluteDifferences;
  MeasuredDecimalType * RelativeDifference;
};

/* ***************************************************************** */

class ProductionStudyPlanType :
  public MultipleProductInstanceStudyPlanBaseType
{
public:
  ProductionStudyPlanType();
  ProductionStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    SamplingMethodType * SamplingMethodIn,
    ControlMethodsType * ControlMethodsIn);
  ProductionStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    SamplingMethodType * SamplingMethodIn,
    ControlMethodsType * ControlMethodsIn);
  ~ProductionStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SamplingMethodType * getSamplingMethod();
  void setSamplingMethod(SamplingMethodType * SamplingMethodIn);
  ControlMethodsType * getControlMethods();
  void setControlMethods(ControlMethodsType * ControlMethodsIn);

protected:
  SamplingMethodType * SamplingMethod;
  ControlMethodsType * ControlMethods;
};

/* ***************************************************************** */

class ProductionStudyResultsType :
  public MultipleProductInstanceStudyResultsBaseType
{
public:
  ProductionStudyResultsType();
  ProductionStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    ControlIssueDetailsListTypeLisd * ControlIssueDetailsListIn);
  ProductionStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    ControlIssueDetailsListTypeLisd * ControlIssueDetailsListIn);
  ~ProductionStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ControlIssueDetailsListTypeLisd * getControlIssueDetailsList();
  void setControlIssueDetailsList(ControlIssueDetailsListTypeLisd *);

protected:
  ControlIssueDetailsListTypeLisd * ControlIssueDetailsList;
};

/* ***************************************************************** */

class SimpleStudyPlanType :
  public MultipleProductInstanceStudyPlanBaseType
{
public:
  SimpleStudyPlanType();
  SimpleStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  SimpleStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  ~SimpleStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SimpleStudyResultsType :
  public MultipleProductInstanceStudyResultsBaseType
{
public:
  SimpleStudyResultsType();
  SimpleStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  SimpleStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  ~SimpleStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class StabilityStudyPlanType :
  public StatisticalStudyPlanBaseType
{
public:
  StabilityStudyPlanType();
  StabilityStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlPositiveInteger * SampleSizeIn,
    XmlPositiveInteger * SampleFrequencyIn,
    SamplingIntervalType * SamplingIntervalIn);
  StabilityStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlPositiveInteger * SampleSizeIn,
    XmlPositiveInteger * SampleFrequencyIn,
    SamplingIntervalType * SamplingIntervalIn);
  ~StabilityStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  XmlPositiveInteger * getSampleSize();
  void setSampleSize(XmlPositiveInteger * SampleSizeIn);
  XmlPositiveInteger * getSampleFrequency();
  void setSampleFrequency(XmlPositiveInteger * SampleFrequencyIn);
  SamplingIntervalType * getSamplingInterval();
  void setSamplingInterval(SamplingIntervalType * SamplingIntervalIn);

protected:
  ArrayReferenceType * MeasurementDeviceIds;
  XmlPositiveInteger * SampleSize;
  XmlPositiveInteger * SampleFrequency;
  SamplingIntervalType * SamplingInterval;
};

/* ***************************************************************** */

class StabilityStudyResultsType :
  public StatisticalStudyResultsBaseType
{
public:
  StabilityStudyResultsType();
  StabilityStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * SampleSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn);
  StabilityStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * SampleSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn);
  ~StabilityStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getSampleSize();
  void setSampleSize(XmlPositiveInteger * SampleSizeIn);
  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);

protected:
  XmlPositiveInteger * SampleSize;
  ArrayReferenceType * MeasurementDeviceIds;
};

/* ***************************************************************** */

class BiasStudyPlanType :
  public MultipleProductInstanceStudyPlanBaseType
{
public:
  BiasStudyPlanType();
  BiasStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn);
  BiasStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn);
  ~BiasStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);

protected:
  ArrayReferenceType * MeasurementDeviceIds;
};

/* ***************************************************************** */

class CapabilityStudyPlanType :
  public MultipleProductInstanceStudyPlanBaseType
{
public:
  CapabilityStudyPlanType();
  CapabilityStudyPlanType(
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    CapabilityStudy_1199_Type * CapabilityStudy_1199In);
  CapabilityStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1208_Type * StatisticalStud_1208In,
    StatisticalStud_1209_Type * StatisticalStud_1209In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1210_Type * StatisticalStud_1210In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    CapabilityStudy_1199_Type * CapabilityStudy_1199In);
  ~CapabilityStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CapabilityStudy_1199_Type * getCapabilityStudy_1199();
  void setCapabilityStudy_1199(CapabilityStudy_1199_Type * CapabilityStudy_1199In);

protected:
  CapabilityStudy_1199_Type * CapabilityStudy_1199;
};

/* ***************************************************************** */

class CapabilityStudyResultsType :
  public MultipleProductInstanceStudyResultsBaseType
{
public:
  CapabilityStudyResultsType();
  CapabilityStudyResultsType(
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  CapabilityStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1211_Type * StatisticalStud_1211In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1212_Type * StatisticalStud_1212In,
    AverageFeaturesType * AverageFeaturesIn,
    CharacteristicsStatsType * CharacteristicsStatsIn,
    SummariesStatisticsLinearType * LinearStatsSummariesIn,
    SummariesStatisticsAngularType * AngularStatsSummariesIn,
    SummariesStatisticsAreaType * AreaStatsSummariesIn,
    SummariesStatisticsForceType * ForceStatsSummariesIn,
    SummariesStatisticsMassType * MassStatsSummariesIn,
    SummariesStatisticsPressureType * PressureStatsSummariesIn,
    SummariesStatisticsSpeedType * SpeedStatsSummariesIn,
    SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn,
    SummariesStatisticsTimeType * TimeStatsSummariesIn,
    SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn,
    SummariesStatisticsType * StatsSummariesIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  ~CapabilityStudyResultsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

#endif // QIFSTATISTICS_HH
