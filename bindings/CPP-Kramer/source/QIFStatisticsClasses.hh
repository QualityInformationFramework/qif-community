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
class CapabilityStudyPlanTypeChoicePair;
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
class ControlMethodTy_1159_Type;
class ControlMethodTy_1159_TypeChoicePair;
class FirstArticleStu_1160_Type;
class FirstArticleStu_1160_TypeChoicePair;
class GageRandRStudyP_1161_Type;
class GageRandRStudyP_1161_TypeChoicePair;
class GageRandRStudyP_1162_Type;
class GageRandRStudyP_1162_TypeChoicePair;
class GageRandRStudyP_1163_Type;
class GageRandRStudyP_1163_TypeChoicePair;
class LinearityStudyP_1164_Type;
class LinearityStudyP_1164_TypeChoicePair;
class LinearityStudyR_1165_Type;
class LinearityStudyR_1165_TypeChoicePair;
class ProcessDifferen_1166_Type;
class ProcessDifferen_1166_TypeChoicePair;
class StatisticalStud_1167_Type;
class StatisticalStud_1168_Type;
class StatisticalStud_1169_Type;
class StatisticalStud_1169_TypeChoicePair;
class StatisticalStud_1170_Type;
class StatisticalStud_1170_TypeChoicePair;
class StatisticalStud_1171_Type;
class StatisticalStud_1171_TypeChoicePair;

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
    ControlMethodTy_1159_Type * ControlMethodTy_1159In);
  ControlMethodType(
    QIFIdType * idIn,
    ArrayReferenceType * AssignableCauseIdsIn,
    AttributesType * AttributesIn,
    ControlMethodTy_1159_Type * ControlMethodTy_1159In);
  ~ControlMethodType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  ArrayReferenceType * getAssignableCauseIds();
  void setAssignableCauseIds(ArrayReferenceType * AssignableCauseIdsIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  ControlMethodTy_1159_Type * getControlMethodTy_1159();
  void setControlMethodTy_1159(ControlMethodTy_1159_Type * ControlMethodTy_1159In);

protected:
  QIFIdType * id;
  ArrayReferenceType * AssignableCauseIds;
  AttributesType * Attributes;
  ControlMethodTy_1159_Type * ControlMethodTy_1159;
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn);
  StatisticalStudyPlanBaseType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn);
  virtual ~StatisticalStudyPlanBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StatisticalStud_1167_Type * getStatisticalStud_1167();
  void setStatisticalStud_1167(StatisticalStud_1167_Type * StatisticalStud_1167In);
  StatisticalStud_1168_Type * getStatisticalStud_1168();
  void setStatisticalStud_1168(StatisticalStud_1168_Type * StatisticalStud_1168In);
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
  StatisticalStud_1169_Type * getStatisticalStud_1169();
  void setStatisticalStud_1169(StatisticalStud_1169_Type * StatisticalStud_1169In);
  QIFReferenceType * getCorrectiveActionPlanId();
  void setCorrectiveActionPlanId(QIFReferenceType * CorrectiveActionPlanIdIn);

protected:
  QIFIdType * id;
  VersionType * Version;
  AttributesType * Attributes;
  StatisticalStud_1167_Type * StatisticalStud_1167;
  StatisticalStud_1168_Type * StatisticalStud_1168;
  SummaryStatsValuesListTypeLisd * StatsValuesSummarys;
  PreInspectionTraceabilityType * PreInspectionTraceability;
  XmlToken * Name;
  XmlString * Description;
  QIFReferenceType * PlanId;
  StatisticalStud_1169_Type * StatisticalStud_1169;
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
  virtual ~StatisticalStudyResultsBaseType();
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
  StatisticalStud_1170_Type * getStatisticalStud_1170();
  void setStatisticalStud_1170(StatisticalStud_1170_Type * StatisticalStud_1170In);
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
  StatisticalStud_1171_Type * getStatisticalStud_1171();
  void setStatisticalStud_1171(StatisticalStud_1171_Type * StatisticalStud_1171In);
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
  StatisticalStud_1170_Type * StatisticalStud_1170;
  StudyIssuesType * StudyIssues;
  InspectionTraceabilityType * InspectionTraceability;
  XmlToken * Name;
  XmlString * Description;
  QIFReferenceType * StudyId;
  StatisticalStud_1171_Type * StatisticalStud_1171;
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

class ControlMethodTy_1159_Type :
  public XmlTypeBase
{
public:
  ControlMethodTy_1159_Type();
  ControlMethodTy_1159_Type(
    ControlMethodTy_1159_TypeChoicePair * ControlMethodTy_1159_TypePairIn);
  ~ControlMethodTy_1159_Type();
  void printSelf(FILE * outFile);

  ControlMethodTy_1159_TypeChoicePair * getControlMethodTy_1159_TypePair();
  void setControlMethodTy_1159_TypePair(ControlMethodTy_1159_TypeChoicePair * ControlMethodTy_1159_TypePairIn);

protected:
  ControlMethodTy_1159_TypeChoicePair * ControlMethodTy_1159_TypePair;
};

/* ***************************************************************** */

union ControlMethodTy_1159_TypeVal
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

class ControlMethodTy_1159_TypeChoicePair :
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
  ControlMethodTy_1159_TypeChoicePair();
  ControlMethodTy_1159_TypeChoicePair(
    whichOne ControlMethodTy_1159_TypeTypeIn,
    ControlMethodTy_1159_TypeVal * ControlMethodTy_1159_TypeValueIn);
  ~ControlMethodTy_1159_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ControlMethodTy_1159_TypeType;
  ControlMethodTy_1159_TypeVal * ControlMethodTy_1159_TypeValue;
};

/* ***************************************************************** */

class FirstArticleStu_1160_Type :
  public XmlTypeBase
{
public:
  FirstArticleStu_1160_Type();
  FirstArticleStu_1160_Type(
    FirstArticleStu_1160_TypeChoicePair * FirstArticleStu_1160_TypePairIn);
  ~FirstArticleStu_1160_Type();
  void printSelf(FILE * outFile);

  FirstArticleStu_1160_TypeChoicePair * getFirstArticleStu_1160_TypePair();
  void setFirstArticleStu_1160_TypePair(FirstArticleStu_1160_TypeChoicePair * FirstArticleStu_1160_TypePairIn);

protected:
  FirstArticleStu_1160_TypeChoicePair * FirstArticleStu_1160_TypePair;
};

/* ***************************************************************** */

union FirstArticleStu_1160_TypeVal
{
  AbsoluteLimitsByUnitType * AbsoluteMaximums;
  XmlDecimal * RelativeMaximum;
};

/* ***************************************************************** */

class FirstArticleStu_1160_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AbsoluteMaximumsE,
    RelativeMaximumE };
  FirstArticleStu_1160_TypeChoicePair();
  FirstArticleStu_1160_TypeChoicePair(
    whichOne FirstArticleStu_1160_TypeTypeIn,
    FirstArticleStu_1160_TypeVal * FirstArticleStu_1160_TypeValueIn);
  ~FirstArticleStu_1160_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FirstArticleStu_1160_TypeType;
  FirstArticleStu_1160_TypeVal * FirstArticleStu_1160_TypeValue;
};

/* ***************************************************************** */

class GageRandRStudyP_1161_Type :
  public XmlTypeBase
{
public:
  GageRandRStudyP_1161_Type();
  GageRandRStudyP_1161_Type(
    GageRandRStudyP_1161_TypeChoicePair * GageRandRStudyP_1161_TypePairIn);
  ~GageRandRStudyP_1161_Type();
  void printSelf(FILE * outFile);

  GageRandRStudyP_1161_TypeChoicePair * getGageRandRStudyP_1161_TypePair();
  void setGageRandRStudyP_1161_TypePair(GageRandRStudyP_1161_TypeChoicePair * GageRandRStudyP_1161_TypePairIn);

protected:
  GageRandRStudyP_1161_TypeChoicePair * GageRandRStudyP_1161_TypePair;
};

/* ***************************************************************** */

union GageRandRStudyP_1161_TypeVal
{
  CriterionDecimalType * MaximumRelativeAppraiserVariation;
  CriteriaByUnitType * MaximumAbsoluteAppraiserVariation;
};

/* ***************************************************************** */

class GageRandRStudyP_1161_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaximumRelativeAppraiserVariationE,
    MaximumAbsoluteAppraiserVariationE };
  GageRandRStudyP_1161_TypeChoicePair();
  GageRandRStudyP_1161_TypeChoicePair(
    whichOne GageRandRStudyP_1161_TypeTypeIn,
    GageRandRStudyP_1161_TypeVal * GageRandRStudyP_1161_TypeValueIn);
  ~GageRandRStudyP_1161_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GageRandRStudyP_1161_TypeType;
  GageRandRStudyP_1161_TypeVal * GageRandRStudyP_1161_TypeValue;
};

/* ***************************************************************** */

class GageRandRStudyP_1162_Type :
  public XmlTypeBase
{
public:
  GageRandRStudyP_1162_Type();
  GageRandRStudyP_1162_Type(
    GageRandRStudyP_1162_TypeChoicePair * GageRandRStudyP_1162_TypePairIn);
  ~GageRandRStudyP_1162_Type();
  void printSelf(FILE * outFile);

  GageRandRStudyP_1162_TypeChoicePair * getGageRandRStudyP_1162_TypePair();
  void setGageRandRStudyP_1162_TypePair(GageRandRStudyP_1162_TypeChoicePair * GageRandRStudyP_1162_TypePairIn);

protected:
  GageRandRStudyP_1162_TypeChoicePair * GageRandRStudyP_1162_TypePair;
};

/* ***************************************************************** */

union GageRandRStudyP_1162_TypeVal
{
  CriterionDecimalType * MaximumRelativeEquipmentVariation;
  CriteriaByUnitType * MaximumAbsoluteEquipmentVariation;
};

/* ***************************************************************** */

class GageRandRStudyP_1162_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaximumRelativeEquipmentVariationE,
    MaximumAbsoluteEquipmentVariationE };
  GageRandRStudyP_1162_TypeChoicePair();
  GageRandRStudyP_1162_TypeChoicePair(
    whichOne GageRandRStudyP_1162_TypeTypeIn,
    GageRandRStudyP_1162_TypeVal * GageRandRStudyP_1162_TypeValueIn);
  ~GageRandRStudyP_1162_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GageRandRStudyP_1162_TypeType;
  GageRandRStudyP_1162_TypeVal * GageRandRStudyP_1162_TypeValue;
};

/* ***************************************************************** */

class GageRandRStudyP_1163_Type :
  public XmlTypeBase
{
public:
  GageRandRStudyP_1163_Type();
  GageRandRStudyP_1163_Type(
    GageRandRStudyP_1163_TypeChoicePair * GageRandRStudyP_1163_TypePairIn);
  ~GageRandRStudyP_1163_Type();
  void printSelf(FILE * outFile);

  GageRandRStudyP_1163_TypeChoicePair * getGageRandRStudyP_1163_TypePair();
  void setGageRandRStudyP_1163_TypePair(GageRandRStudyP_1163_TypeChoicePair * GageRandRStudyP_1163_TypePairIn);

protected:
  GageRandRStudyP_1163_TypeChoicePair * GageRandRStudyP_1163_TypePair;
};

/* ***************************************************************** */

union GageRandRStudyP_1163_TypeVal
{
  CriterionDecimalType * MaximumRelativeTotalRandR;
  CriteriaByUnitType * MaximumAbsoluteTotalRandR;
};

/* ***************************************************************** */

class GageRandRStudyP_1163_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaximumRelativeTotalRandRE,
    MaximumAbsoluteTotalRandRE };
  GageRandRStudyP_1163_TypeChoicePair();
  GageRandRStudyP_1163_TypeChoicePair(
    whichOne GageRandRStudyP_1163_TypeTypeIn,
    GageRandRStudyP_1163_TypeVal * GageRandRStudyP_1163_TypeValueIn);
  ~GageRandRStudyP_1163_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GageRandRStudyP_1163_TypeType;
  GageRandRStudyP_1163_TypeVal * GageRandRStudyP_1163_TypeValue;
};

/* ***************************************************************** */

class LinearityStudyP_1164_Type :
  public XmlTypeBase
{
public:
  LinearityStudyP_1164_Type();
  LinearityStudyP_1164_Type(
    LinearityStudyP_1164_TypeChoicePair * LinearityStudyP_1164_TypePairIn);
  ~LinearityStudyP_1164_Type();
  void printSelf(FILE * outFile);

  LinearityStudyP_1164_TypeChoicePair * getLinearityStudyP_1164_TypePair();
  void setLinearityStudyP_1164_TypePair(LinearityStudyP_1164_TypeChoicePair * LinearityStudyP_1164_TypePairIn);

protected:
  LinearityStudyP_1164_TypeChoicePair * LinearityStudyP_1164_TypePair;
};

/* ***************************************************************** */

union LinearityStudyP_1164_TypeVal
{
  AbsoluteLimitsByUnitType * AbsoluteMinimums;
  XmlDecimal * RelativeLinearityMinimum;
};

/* ***************************************************************** */

class LinearityStudyP_1164_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AbsoluteMinimumsE,
    RelativeLinearityMinimumE };
  LinearityStudyP_1164_TypeChoicePair();
  LinearityStudyP_1164_TypeChoicePair(
    whichOne LinearityStudyP_1164_TypeTypeIn,
    LinearityStudyP_1164_TypeVal * LinearityStudyP_1164_TypeValueIn);
  ~LinearityStudyP_1164_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearityStudyP_1164_TypeType;
  LinearityStudyP_1164_TypeVal * LinearityStudyP_1164_TypeValue;
};

/* ***************************************************************** */

class LinearityStudyR_1165_Type :
  public XmlTypeBase
{
public:
  LinearityStudyR_1165_Type();
  LinearityStudyR_1165_Type(
    LinearityStudyR_1165_TypeChoicePair * LinearityStudyR_1165_TypePairIn);
  ~LinearityStudyR_1165_Type();
  void printSelf(FILE * outFile);

  LinearityStudyR_1165_TypeChoicePair * getLinearityStudyR_1165_TypePair();
  void setLinearityStudyR_1165_TypePair(LinearityStudyR_1165_TypeChoicePair * LinearityStudyR_1165_TypePairIn);

protected:
  LinearityStudyR_1165_TypeChoicePair * LinearityStudyR_1165_TypePair;
};

/* ***************************************************************** */

union LinearityStudyR_1165_TypeVal
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

class LinearityStudyR_1165_TypeChoicePair :
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
  LinearityStudyR_1165_TypeChoicePair();
  LinearityStudyR_1165_TypeChoicePair(
    whichOne LinearityStudyR_1165_TypeTypeIn,
    LinearityStudyR_1165_TypeVal * LinearityStudyR_1165_TypeValueIn);
  ~LinearityStudyR_1165_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearityStudyR_1165_TypeType;
  LinearityStudyR_1165_TypeVal * LinearityStudyR_1165_TypeValue;
};

/* ***************************************************************** */

class ProcessDifferen_1166_Type :
  public XmlTypeBase
{
public:
  ProcessDifferen_1166_Type();
  ProcessDifferen_1166_Type(
    ProcessDifferen_1166_TypeChoicePair * ProcessDifferen_1166_TypePairIn);
  ~ProcessDifferen_1166_Type();
  void printSelf(FILE * outFile);

  ProcessDifferen_1166_TypeChoicePair * getProcessDifferen_1166_TypePair();
  void setProcessDifferen_1166_TypePair(ProcessDifferen_1166_TypeChoicePair * ProcessDifferen_1166_TypePairIn);

protected:
  ProcessDifferen_1166_TypeChoicePair * ProcessDifferen_1166_TypePair;
};

/* ***************************************************************** */

union ProcessDifferen_1166_TypeVal
{
  AbsoluteLimitsByUnitType * AbsoluteDifferences;
  XmlDecimal * RelativeDifference;
};

/* ***************************************************************** */

class ProcessDifferen_1166_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AbsoluteDifferencesE,
    RelativeDifferenceE };
  ProcessDifferen_1166_TypeChoicePair();
  ProcessDifferen_1166_TypeChoicePair(
    whichOne ProcessDifferen_1166_TypeTypeIn,
    ProcessDifferen_1166_TypeVal * ProcessDifferen_1166_TypeValueIn);
  ~ProcessDifferen_1166_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ProcessDifferen_1166_TypeType;
  ProcessDifferen_1166_TypeVal * ProcessDifferen_1166_TypeValue;
};

/* ***************************************************************** */

class StatisticalStud_1167_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1167_Type();
  StatisticalStud_1167_Type(
    ArrayReferenceType * FeatureItemIdsIn,
    XmlBoolean * CalculateAverageFeaturesIn);
  ~StatisticalStud_1167_Type();
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

class StatisticalStud_1168_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1168_Type();
  StatisticalStud_1168_Type(
    ArrayReferenceType * CharacteristicItemIdsIn,
    ListAccumulatedStatsValuesTypeLisd * StatsValuesPerCharIn,
    ListSubgroupStatsValuesTypeLisd * StatsValuesPerSubgroupIn);
  ~StatisticalStud_1168_Type();
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

class StatisticalStud_1169_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1169_Type();
  StatisticalStud_1169_Type(
    StatisticalStud_1169_TypeChoicePair * StatisticalStud_1169_TypePairIn);
  ~StatisticalStud_1169_Type();
  void printSelf(FILE * outFile);

  StatisticalStud_1169_TypeChoicePair * getStatisticalStud_1169_TypePair();
  void setStatisticalStud_1169_TypePair(StatisticalStud_1169_TypeChoicePair * StatisticalStud_1169_TypePairIn);

protected:
  StatisticalStud_1169_TypeChoicePair * StatisticalStud_1169_TypePair;
};

/* ***************************************************************** */

union StatisticalStud_1169_TypeVal
{
  QIFReferenceType * SoftwareId;
  QIFReferenceType * StandardId;
};

/* ***************************************************************** */

class StatisticalStud_1169_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SoftwareIdE,
    StandardIdE };
  StatisticalStud_1169_TypeChoicePair();
  StatisticalStud_1169_TypeChoicePair(
    whichOne StatisticalStud_1169_TypeTypeIn,
    StatisticalStud_1169_TypeVal * StatisticalStud_1169_TypeValueIn);
  ~StatisticalStud_1169_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatisticalStud_1169_TypeType;
  StatisticalStud_1169_TypeVal * StatisticalStud_1169_TypeValue;
};

/* ***************************************************************** */

class StatisticalStud_1170_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1170_Type();
  StatisticalStud_1170_Type(
    StatisticalStud_1170_TypeChoicePair * StatisticalStud_1170_TypePairIn);
  ~StatisticalStud_1170_Type();
  void printSelf(FILE * outFile);

  StatisticalStud_1170_TypeChoicePair * getStatisticalStud_1170_TypePair();
  void setStatisticalStud_1170_TypePair(StatisticalStud_1170_TypeChoicePair * StatisticalStud_1170_TypePairIn);

protected:
  StatisticalStud_1170_TypeChoicePair * StatisticalStud_1170_TypePair;
};

/* ***************************************************************** */

union StatisticalStud_1170_TypeVal
{
  QIFReferenceType * SoftwareId;
  QIFReferenceType * StandardId;
};

/* ***************************************************************** */

class StatisticalStud_1170_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SoftwareIdE,
    StandardIdE };
  StatisticalStud_1170_TypeChoicePair();
  StatisticalStud_1170_TypeChoicePair(
    whichOne StatisticalStud_1170_TypeTypeIn,
    StatisticalStud_1170_TypeVal * StatisticalStud_1170_TypeValueIn);
  ~StatisticalStud_1170_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatisticalStud_1170_TypeType;
  StatisticalStud_1170_TypeVal * StatisticalStud_1170_TypeValue;
};

/* ***************************************************************** */

class StatisticalStud_1171_Type :
  public XmlTypeBase
{
public:
  StatisticalStud_1171_Type();
  StatisticalStud_1171_Type(
    StatisticalStud_1171_TypeChoicePair * StatisticalStud_1171_TypePairIn);
  ~StatisticalStud_1171_Type();
  void printSelf(FILE * outFile);

  StatisticalStud_1171_TypeChoicePair * getStatisticalStud_1171_TypePair();
  void setStatisticalStud_1171_TypePair(StatisticalStud_1171_TypeChoicePair * StatisticalStud_1171_TypePairIn);

protected:
  StatisticalStud_1171_TypeChoicePair * StatisticalStud_1171_TypePair;
};

/* ***************************************************************** */

union StatisticalStud_1171_TypeVal
{
  ArrayReferenceType * ResultsIds;
  ArrayQPIdFullReferenceTypeLisd * ResultsQPIds;
  ExternalFileReferencesType * ResultsFiles;
};

/* ***************************************************************** */

class StatisticalStud_1171_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ResultsIdsE,
    ResultsQPIdsE,
    ResultsFilesE };
  StatisticalStud_1171_TypeChoicePair();
  StatisticalStud_1171_TypeChoicePair(
    whichOne StatisticalStud_1171_TypeTypeIn,
    StatisticalStud_1171_TypeVal * StatisticalStud_1171_TypeValueIn);
  ~StatisticalStud_1171_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatisticalStud_1171_TypeType;
  StatisticalStud_1171_TypeVal * StatisticalStud_1171_TypeValue;
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlDecimal * InSpecRatioIn,
    FirstArticleStu_1160_Type * FirstArticleStu_1160In);
  FirstArticleStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlDecimal * InSpecRatioIn,
    FirstArticleStu_1160_Type * FirstArticleStu_1160In);
  ~FirstArticleStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getInSpecRatio();
  void setInSpecRatio(XmlDecimal * InSpecRatioIn);
  FirstArticleStu_1160_Type * getFirstArticleStu_1160();
  void setFirstArticleStu_1160(FirstArticleStu_1160_Type * FirstArticleStu_1160In);

protected:
  XmlDecimal * InSpecRatio;
  FirstArticleStu_1160_Type * FirstArticleStu_1160;
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    GageRandRStudyEnumType * RandRStudyTypeIn,
    XmlPositiveInteger * NumberOfAppraisersIn,
    XmlPositiveInteger * NumberOfPartsIn,
    XmlPositiveInteger * NumberOfTrialsIn,
    GageRandRStudyP_1161_Type * GageRandRStudyP_1161In,
    GageRandRStudyP_1162_Type * GageRandRStudyP_1162In,
    GageRandRStudyP_1163_Type * GageRandRStudyP_1163In);
  GageRandRStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    GageRandRStudyEnumType * RandRStudyTypeIn,
    XmlPositiveInteger * NumberOfAppraisersIn,
    XmlPositiveInteger * NumberOfPartsIn,
    XmlPositiveInteger * NumberOfTrialsIn,
    GageRandRStudyP_1161_Type * GageRandRStudyP_1161In,
    GageRandRStudyP_1162_Type * GageRandRStudyP_1162In,
    GageRandRStudyP_1163_Type * GageRandRStudyP_1163In);
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
  GageRandRStudyP_1161_Type * getGageRandRStudyP_1161();
  void setGageRandRStudyP_1161(GageRandRStudyP_1161_Type * GageRandRStudyP_1161In);
  GageRandRStudyP_1162_Type * getGageRandRStudyP_1162();
  void setGageRandRStudyP_1162(GageRandRStudyP_1162_Type * GageRandRStudyP_1162In);
  GageRandRStudyP_1163_Type * getGageRandRStudyP_1163();
  void setGageRandRStudyP_1163(GageRandRStudyP_1163_Type * GageRandRStudyP_1163In);

protected:
  ArrayReferenceType * MeasurementDeviceIds;
  GageRandRStudyEnumType * RandRStudyType;
  XmlPositiveInteger * NumberOfAppraisers;
  XmlPositiveInteger * NumberOfParts;
  XmlPositiveInteger * NumberOfTrials;
  GageRandRStudyP_1161_Type * GageRandRStudyP_1161;
  GageRandRStudyP_1162_Type * GageRandRStudyP_1162;
  GageRandRStudyP_1163_Type * GageRandRStudyP_1163;
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlDecimal * GoodnessOfFitThresholdIn,
    LinearityStudyP_1164_Type * LinearityStudyP_1164In);
  LinearityStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlDecimal * GoodnessOfFitThresholdIn,
    LinearityStudyP_1164_Type * LinearityStudyP_1164In);
  ~LinearityStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  XmlDecimal * getGoodnessOfFitThreshold();
  void setGoodnessOfFitThreshold(XmlDecimal * GoodnessOfFitThresholdIn);
  LinearityStudyP_1164_Type * getLinearityStudyP_1164();
  void setLinearityStudyP_1164(LinearityStudyP_1164_Type * LinearityStudyP_1164In);

protected:
  ArrayReferenceType * MeasurementDeviceIds;
  XmlDecimal * GoodnessOfFitThreshold;
  LinearityStudyP_1164_Type * LinearityStudyP_1164;
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    LinearityStudyR_1165_Type * LinearityStudyR_1165In,
    MeasuredDecimalType * RelativeLinearityIn);
  LinearityStudyResultsType(
    QIFIdType * idIn,
    QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesType * AttributesIn,
    StatsEvalStatusType * StatusIn,
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    LinearityStudyR_1165_Type * LinearityStudyR_1165In,
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
  LinearityStudyR_1165_Type * getLinearityStudyR_1165();
  void setLinearityStudyR_1165(LinearityStudyR_1165_Type * LinearityStudyR_1165In);
  MeasuredDecimalType * getRelativeLinearity();
  void setRelativeLinearity(MeasuredDecimalType * RelativeLinearityIn);

protected:
  XmlPositiveInteger * SampleSize;
  ArrayReferenceType * MeasurementDeviceIds;
  MeasuredDecimalType * GoodnessOfFit;
  LinearityStudyR_1165_Type * LinearityStudyR_1165;
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  MultipleProductInstanceStudyPlanBaseType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  virtual ~MultipleProductInstanceStudyPlanBaseType();
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
  virtual ~MultipleProductInstanceStudyResultsBaseType();
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ProcessDifferen_1166_Type * ProcessDifferen_1166In);
  ProcessDifferenceStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ProcessDifferen_1166_Type * ProcessDifferen_1166In);
  ~ProcessDifferenceStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlPositiveInteger * getNumberOfSamples();
  void setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn);
  XmlPositiveInteger * getSubgroupSize();
  void setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn);
  QIFReferenceType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn);
  ProcessDifferen_1166_Type * getProcessDifferen_1166();
  void setProcessDifferen_1166(ProcessDifferen_1166_Type * ProcessDifferen_1166In);

protected:
  XmlPositiveInteger * NumberOfSamples;
  XmlPositiveInteger * SubgroupSize;
  QIFReferenceType * ManufacturingProcessId;
  ProcessDifferen_1166_Type * ProcessDifferen_1166;
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    SamplingMethodType * SamplingMethodIn,
    ControlMethodsType * ControlMethodsIn);
  ProductionStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn);
  SimpleStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    XmlPositiveInteger * SampleSizeIn,
    XmlPositiveInteger * SampleFrequencyIn,
    SamplingIntervalType * SamplingIntervalIn);
  StabilityStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    ArrayReferenceType * MeasurementDeviceIdsIn);
  BiasStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
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
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanTypePairIn);
  CapabilityStudyPlanType(
    QIFIdType * idIn,
    VersionType * VersionIn,
    AttributesType * AttributesIn,
    StatisticalStud_1167_Type * StatisticalStud_1167In,
    StatisticalStud_1168_Type * StatisticalStud_1168In,
    SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn,
    PreInspectionTraceabilityType * PreInspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * PlanIdIn,
    StatisticalStud_1169_Type * StatisticalStud_1169In,
    QIFReferenceType * CorrectiveActionPlanIdIn,
    XmlPositiveInteger * NumberOfSamplesIn,
    XmlPositiveInteger * SubgroupSizeIn,
    CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanTypePairIn);
  ~CapabilityStudyPlanType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  CapabilityStudyPlanTypeChoicePair * getCapabilityStudyPlanTypeChoicePair();
  void setCapabilityStudyPlanTypeChoicePair(CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanTypePairIn);

protected:
  CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanTypePair;
};

/* ***************************************************************** */

union CapabilityStudyPlanTypeVal
{
  CriterionDecimalType * CpkThreshold;
  CriterionDecimalType * PpkThreshold;
};

/* ***************************************************************** */

class CapabilityStudyPlanTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CpkThresholdE,
    PpkThresholdE };
  CapabilityStudyPlanTypeChoicePair();
  CapabilityStudyPlanTypeChoicePair(
    whichOne CapabilityStudyPlanTypeTypeIn,
    CapabilityStudyPlanTypeVal * CapabilityStudyPlanTypeValueIn);
  ~CapabilityStudyPlanTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CapabilityStudyPlanTypeType;
  CapabilityStudyPlanTypeVal * CapabilityStudyPlanTypeValue;
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
    StatisticalStud_1170_Type * StatisticalStud_1170In,
    StudyIssuesType * StudyIssuesIn,
    InspectionTraceabilityType * InspectionTraceabilityIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceType * StudyIdIn,
    StatisticalStud_1171_Type * StatisticalStud_1171In,
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
