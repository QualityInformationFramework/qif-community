/* ***************************************************************** */

#ifndef STATISTICS_HH
#define STATISTICS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "FeaturesClasses.hh"
#include "TraceabilityClasses.hh"

/* ***************************************************************** */

class ActionToTakeEnumType;
class AngleBetweenCharacteristicStatsEvalType;
class AngleCharacteristicStatsEvalType;
class AngleFromCharacteristicStatsEvalType;
class AngularCharacteristicStatsEvalType;
class AngularCharacteristicStatsEvalTypeChoicePair;
class AngularCoordinateCharacteristicStatsEvalType;
class AngularityCharacteristicStatsEvalType;
class AssignableCauseEnumType;
class AssignableCauseType;
class AssignableCauseTypeLisd;
class AssignableCausesType;
class AverageFeatureType;
class AverageFeatureTypeLisd;
class AverageFeaturesType;
class CharacteristicStatsEvalBaseType;
class CharacteristicStatsEvalBaseTypeLisd;
class CharacteristicsStatsType;
class ChordCharacteristicStatsEvalType;
class CircularRunoutCharacteristicStatsEvalType;
class CircularityCharacteristicStatsEvalType;
class CoaxialityCharacteristicStatsEvalType;
class CompositeSegmentPositionStatsEvalType;
class CompositeSegmentProfileStatsEvalType;
class CompositeSegmentStatsEvalBaseType;
class CompositeSegmentSymmetryStatsEvalType;
class CompositeSegmentsPositionStatsEvalType;
class CompositeSegmentsProfileStatsEvalType;
class CompositeSegmentsSymmetryStatsEvalType;
class ConcentricityCharacteristicStatsEvalType;
class ConicalTaperCharacteristicStatsEvalType;
class ConicityCharacteristicStatsEvalType;
class ControlIssueDetailsListType;
class ControlIssueDetailsListTypeLisd;
class ControlIssueDetailsType;
class ControlIssueDetailsTypeLisd;
class ControlIssueEnumType;
class ControlIssueType;
class ControlIssueTypeChoicePair;
class CorrectiveActionType;
class CorrectiveActionTypeLisd;
class CorrectiveActionsType;
class CriterionAngularType;
class CriterionAreaType;
class CriterionDecimalType;
class CriterionForceType;
class CriterionIntegerType;
class CriterionLinearType;
class CriterionMassType;
class CriterionOutOfType;
class CriterionPressureType;
class CriterionSpeedType;
class CriterionTemperatureType;
class CriterionTimeType;
class CriterionUserDefinedUnitType;
class CriterionUserDefinedUnitTypeLisd;
class CurveLengthCharacteristicStatsEvalType;
class CylindricityCharacteristicStatsEvalType;
class DepthCharacteristicStatsEvalType;
class DiameterCharacteristicStatsEvalType;
class DistanceBetweenCharacteristicStatsEvalType;
class DistanceFromCharacteristicStatsEvalType;
class DistributionTransformationEnumType;
class DistributionTransformationType;
class DistributionTransformationTypeChoicePair;
class EllipticityCharacteristicStatsEvalType;
class ExclusionEnumType;
class ExclusionIdType;
class ExclusionIdTypeLisd;
class ExclusionIndexType;
class ExclusionIndexTypeLisd;
class ExclusionReasonType;
class ExclusionReasonTypeChoicePair;
class ExclusionsIdType;
class ExclusionsIndexType;
class FlatTaperCharacteristicStatsEvalType;
class FlatnessCharacteristicStatsEvalType;
class FormCharacteristicStatsEvalBaseType;
class GeometricCharacteristicStatsEvalType;
class HeightCharacteristicStatsEvalType;
class LengthCharacteristicStatsEvalType;
class LimitingNumberType;
class LimitingNumberTypeChoicePair;
class LineProfileCharacteristicStatsEvalType;
class LinearCharacteristicStatsEvalType;
class LinearCharacteristicStatsEvalTypeChoicePair;
class LinearCoordinateCharacteristicStatsEvalType;
class LocationCharacteristicStatsEvalType;
class OneSidedCapabilityCalculationEnumType;
class OrientationCharacteristicStatsEvalType;
class OtherFormCharacteristicStatsEvalType;
class ParallelismCharacteristicStatsEvalType;
class PerpendicularityCharacteristicStatsEvalType;
class PointDeviationStatsEvalType;
class PointDeviationStatsEvalTypeLisd;
class PointDeviationsStatsEvalType;
class PointProfileCharacteristicStatsEvalType;
class PositionCapabilityCalculationEnumType;
class PositionCharacteristicStatsEvalType;
class ProfileCharacteristicStatsEvalBaseType;
class RadiusCharacteristicStatsEvalType;
class RunoutCharacteristicStatsEvalBaseType;
class SamplingIntervalEnumType;
class SamplingIntervalType;
class SamplingIntervalTypeChoicePair;
class SamplingMethodType;
class SphericalDiameterCharacteristicStatsEvalType;
class SphericalRadiusCharacteristicStatsEvalType;
class SphericityCharacteristicStatsEvalType;
class SquareCharacteristicStatsEvalType;
class StatsAngularType;
class StatsAreaType;
class StatsArrayIdType;
class StatsBaseType;
class StatsEvalStatusEnumType;
class StatsEvalStatusType;
class StatsEvalStatusTypeChoicePair;
class StatsForceType;
class StatsLinearType;
class StatsMassType;
class StatsNumericalBaseType;
class StatsPassFailType;
class StatsPressureType;
class StatsSpeedType;
class StatsTemperatureType;
class StatsTimeType;
class StatsUserDefinedUnitType;
class StatsValuesType;
class StatsValuesTypeLisd;
class StatsWithTolAngularType;
class StatsWithTolAreaType;
class StatsWithTolForceType;
class StatsWithTolLinearType;
class StatsWithTolMassType;
class StatsWithTolNumericalBaseType;
class StatsWithTolPressureType;
class StatsWithTolSpeedType;
class StatsWithTolTemperatureType;
class StatsWithTolTimeType;
class StatsWithTolUserDefinedUnitType;
class StraightnessCharacteristicStatsEvalType;
class StudyIssueType;
class StudyIssueTypeLisd;
class StudyIssuesType;
class SubgroupType;
class SubgroupTypeLisd;
class SubgroupValuesType;
class SubgroupsType;
class SummariesStatisticsAngularType;
class SummariesStatisticsAreaType;
class SummariesStatisticsForceType;
class SummariesStatisticsLinearType;
class SummariesStatisticsMassType;
class SummariesStatisticsPressureType;
class SummariesStatisticsSpeedType;
class SummariesStatisticsTemperatureType;
class SummariesStatisticsTimeType;
class SummariesStatisticsType;
class SummariesStatisticsUserDefinedUnitType;
class SummaryStatisticsAngularType;
class SummaryStatisticsAngularTypeLisd;
class SummaryStatisticsAreaType;
class SummaryStatisticsAreaTypeLisd;
class SummaryStatisticsForceType;
class SummaryStatisticsForceTypeLisd;
class SummaryStatisticsLinearType;
class SummaryStatisticsLinearTypeLisd;
class SummaryStatisticsMassType;
class SummaryStatisticsMassTypeLisd;
class SummaryStatisticsPressureType;
class SummaryStatisticsPressureTypeLisd;
class SummaryStatisticsSpeedType;
class SummaryStatisticsSpeedTypeLisd;
class SummaryStatisticsTemperatureType;
class SummaryStatisticsTemperatureTypeLisd;
class SummaryStatisticsTimeType;
class SummaryStatisticsTimeTypeLisd;
class SummaryStatisticsType;
class SummaryStatisticsTypeLisd;
class SummaryStatisticsUserDefinedUnitType;
class SummaryStatisticsUserDefinedUnitTypeLisd;
class SurfaceProfileCharacteristicStatsEvalType;
class SurfaceProfileNonUniformCharacteristicStatsEvalType;
class SurfaceTextureCharacteristicStatsEvalType;
class SymmetryCharacteristicStatsEvalType;
class ThicknessCharacteristicStatsEvalType;
class ThreadCharacteristicStatsEvalType;
class ToroidicityCharacteristicStatsEvalType;
class TotalRunoutCharacteristicStatsEvalType;
class UserDefinedAngularCharacteristicStatsEvalType;
class UserDefinedAngularCharacteristicStatsEvalTypeChoicePair;
class UserDefinedAreaCharacteristicStatsEvalType;
class UserDefinedAreaCharacteristicStatsEvalTypeChoicePair;
class UserDefinedAttributeCharacteristicStatsEvalType;
class UserDefinedForceCharacteristicStatsEvalType;
class UserDefinedForceCharacteristicStatsEvalTypeChoicePair;
class UserDefinedLinearCharacteristicStatsEvalType;
class UserDefinedLinearCharacteristicStatsEvalTypeChoicePair;
class UserDefinedMassCharacteristicStatsEvalType;
class UserDefinedMassCharacteristicStatsEvalTypeChoicePair;
class UserDefinedPressureCharacteristicStatsEvalType;
class UserDefinedPressureCharacteristicStatsEvalTypeChoicePair;
class UserDefinedSpeedCharacteristicStatsEvalType;
class UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair;
class UserDefinedTemperatureCharacteristicStatsEvalType;
class UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair;
class UserDefinedTimeCharacteristicStatsEvalType;
class UserDefinedTimeCharacteristicStatsEvalTypeChoicePair;
class UserDefinedUnitCharacteristicStatsEvalType;
class UserDefinedUnitCharacteristicStatsEvalTypeChoicePair;
class WeldBevelCharacteristicStatsEvalType;
class WeldCharacteristicStatsEvalBaseType;
class WeldCompoundCharacteristicStatsEvalType;
class WeldEdgeCharacteristicStatsEvalType;
class WeldFilletCharacteristicStatsEvalType;
class WeldFlareBevelCharacteristicStatsEvalType;
class WeldFlareVCharacteristicStatsEvalType;
class WeldJCharacteristicStatsEvalType;
class WeldPlugCharacteristicStatsEvalType;
class WeldScarfCharacteristicStatsEvalType;
class WeldSeamCharacteristicStatsEvalType;
class WeldSlotCharacteristicStatsEvalType;
class WeldSpotCharacteristicStatsEvalType;
class WeldSquareCharacteristicStatsEvalType;
class WeldStudCharacteristicStatsEvalType;
class WeldSurfacingCharacteristicStatsEvalType;
class WeldUCharacteristicStatsEvalType;
class WeldVCharacteristicStatsEvalType;
class WidthCharacteristicStatsEvalType;
class AngularCharacte_1100_Type;
class AngularCharacte_1101_Type;
class AngularCharacte_1102_Type;
class AngularCharacte_1103_Type;
class AssignableCause_1104_Type;
class AssignableCause_1104_TypeChoicePair;
class CharacteristicS_1105_Type;
class CharacteristicS_1105_TypeChoicePair;
class CharacteristicS_1106_Type;
class CharacteristicS_1106_TypeChoicePair;
class CorrectiveActio_1107_Type;
class CorrectiveActio_1107_TypeChoicePair;
class CriterionDecima_1108_Type;
class CriterionIntege_1109_Type;
class LinearCharacter_1110_Type;
class LinearCharacter_1111_Type;
class LinearCharacter_1112_Type;
class LinearCharacter_1113_Type;
class SamplingMethodT_1114_Type;
class SamplingMethodT_1114_TypeChoicePair;
class StudyIssueType_1115_Type;
class StudyIssueType_1115_TypeChoicePair;
class UserDefinedAngu_1116_Type;
class UserDefinedAngu_1117_Type;
class UserDefinedAngu_1118_Type;
class UserDefinedAngu_1119_Type;
class UserDefinedArea_1120_Type;
class UserDefinedArea_1121_Type;
class UserDefinedArea_1122_Type;
class UserDefinedArea_1123_Type;
class UserDefinedForc_1124_Type;
class UserDefinedForc_1125_Type;
class UserDefinedForc_1126_Type;
class UserDefinedForc_1127_Type;
class UserDefinedLine_1128_Type;
class UserDefinedLine_1129_Type;
class UserDefinedLine_1130_Type;
class UserDefinedLine_1131_Type;
class UserDefinedMass_1132_Type;
class UserDefinedMass_1133_Type;
class UserDefinedMass_1134_Type;
class UserDefinedMass_1135_Type;
class UserDefinedPres_1136_Type;
class UserDefinedPres_1137_Type;
class UserDefinedPres_1138_Type;
class UserDefinedPres_1139_Type;
class UserDefinedSpee_1140_Type;
class UserDefinedSpee_1141_Type;
class UserDefinedSpee_1142_Type;
class UserDefinedSpee_1143_Type;
class UserDefinedTemp_1144_Type;
class UserDefinedTemp_1145_Type;
class UserDefinedTemp_1146_Type;
class UserDefinedTemp_1147_Type;
class UserDefinedTime_1148_Type;
class UserDefinedTime_1149_Type;
class UserDefinedTime_1150_Type;
class UserDefinedTime_1151_Type;
class UserDefinedUnit_1152_Type;
class UserDefinedUnit_1153_Type;
class UserDefinedUnit_1154_Type;
class UserDefinedUnit_1155_Type;
class CharacteristicS_1156_Type;
class CharacteristicS_1156_TypeChoicePair;
class CharacteristicS_1157_Type;
class CharacteristicS_1157_TypeChoicePair;
class SamplingMethodT_1158_Type;

/* ***************************************************************** */
/* ***************************************************************** */

class ActionToTakeEnumType :
  public XmlNMTOKEN
{
public:
  ActionToTakeEnumType();
  ActionToTakeEnumType(
    const char * valIn);
  ~ActionToTakeEnumType();
  bool ActionToTakeEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class AssignableCauseEnumType :
  public XmlNMTOKEN
{
public:
  AssignableCauseEnumType();
  AssignableCauseEnumType(
    const char * valIn);
  ~AssignableCauseEnumType();
  bool AssignableCauseEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class AssignableCauseType :
  public XmlTypeBase
{
public:
  AssignableCauseType();
  AssignableCauseType(
    AttributesType * AttributesIn,
    AssignableCause_1104_Type * AssignableCause_1104In,
    ArrayReferenceType * CorrectiveActionIdsIn);
  AssignableCauseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    AssignableCause_1104_Type * AssignableCause_1104In,
    ArrayReferenceType * CorrectiveActionIdsIn);
  ~AssignableCauseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  AssignableCause_1104_Type * getAssignableCause_1104();
  void setAssignableCause_1104(AssignableCause_1104_Type * AssignableCause_1104In);
  ArrayReferenceType * getCorrectiveActionIds();
  void setCorrectiveActionIds(ArrayReferenceType * CorrectiveActionIdsIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  AssignableCause_1104_Type * AssignableCause_1104;
  ArrayReferenceType * CorrectiveActionIds;
};

/* ***************************************************************** */

class AssignableCauseTypeLisd :
  public std::list<AssignableCauseType *>,
  public XmlSchemaInstanceBase
{
public:
  AssignableCauseTypeLisd();
  AssignableCauseTypeLisd(
    AssignableCauseType * aAssignableCauseType);
  ~AssignableCauseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AssignableCausesType :
  public XmlTypeBase
{
public:
  AssignableCausesType();
  AssignableCausesType(
    AssignableCauseTypeLisd * AssignableCauseIn);
  AssignableCausesType(
    NaturalType * nIn,
    AssignableCauseTypeLisd * AssignableCauseIn);
  ~AssignableCausesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AssignableCauseTypeLisd * getAssignableCause();
  void setAssignableCause(AssignableCauseTypeLisd *);

protected:
  NaturalType * n;
  AssignableCauseTypeLisd * AssignableCause;
};

/* ***************************************************************** */

class AverageFeatureType :
  public XmlTypeBase
{
public:
  AverageFeatureType();
  AverageFeatureType(
    FeatureMeasurementBaseType * FeatureMeasurementIn,
    StatsArrayIdType * MeasuredIdsIn);
  ~AverageFeatureType();
  void printSelf(FILE * outFile);

  FeatureMeasurementBaseType * getFeatureMeasurement();
  void setFeatureMeasurement(FeatureMeasurementBaseType * FeatureMeasurementIn);
  StatsArrayIdType * getMeasuredIds();
  void setMeasuredIds(StatsArrayIdType * MeasuredIdsIn);

protected:
  FeatureMeasurementBaseType * FeatureMeasurement;
  StatsArrayIdType * MeasuredIds;
};

/* ***************************************************************** */

class AverageFeatureTypeLisd :
  public std::list<AverageFeatureType *>,
  public XmlSchemaInstanceBase
{
public:
  AverageFeatureTypeLisd();
  AverageFeatureTypeLisd(
    AverageFeatureType * aAverageFeatureType);
  ~AverageFeatureTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AverageFeaturesType :
  public XmlTypeBase
{
public:
  AverageFeaturesType();
  AverageFeaturesType(
    AverageFeatureTypeLisd * AverageFeatureIn);
  AverageFeaturesType(
    NaturalType * nIn,
    AverageFeatureTypeLisd * AverageFeatureIn);
  ~AverageFeaturesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AverageFeatureTypeLisd * getAverageFeature();
  void setAverageFeature(AverageFeatureTypeLisd *);

protected:
  NaturalType * n;
  AverageFeatureTypeLisd * AverageFeature;
};

/* ***************************************************************** */

class CharacteristicStatsEvalBaseType :
  public XmlTypeBase
{
public:
  CharacteristicStatsEvalBaseType();
  CharacteristicStatsEvalBaseType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn);
  virtual ~CharacteristicStatsEvalBaseType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  CharacteristicS_1105_Type * getCharacteristicS_1105();
  void setCharacteristicS_1105(CharacteristicS_1105_Type * CharacteristicS_1105In);
  CharacteristicS_1106_Type * getCharacteristicS_1106();
  void setCharacteristicS_1106(CharacteristicS_1106_Type * CharacteristicS_1106In);
  StatsEvalStatusType * getStatus();
  void setStatus(StatsEvalStatusType * StatusIn);
  StudyIssuesType * getStudyIssues();
  void setStudyIssues(StudyIssuesType * StudyIssuesIn);
  DistributionTransformationType * getDistributionTransformation();
  void setDistributionTransformation(DistributionTransformationType * DistributionTransformationIn);

protected:
  AttributesType * Attributes;
  CharacteristicS_1105_Type * CharacteristicS_1105;
  CharacteristicS_1106_Type * CharacteristicS_1106;
  StatsEvalStatusType * Status;
  StudyIssuesType * StudyIssues;
  DistributionTransformationType * DistributionTransformation;
};

/* ***************************************************************** */

class CharacteristicStatsEvalBaseTypeLisd :
  public std::list<CharacteristicStatsEvalBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  CharacteristicStatsEvalBaseTypeLisd();
  CharacteristicStatsEvalBaseTypeLisd(
    CharacteristicStatsEvalBaseType * aCharacteristicStatsEvalBaseType);
  ~CharacteristicStatsEvalBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CharacteristicsStatsType :
  public XmlTypeBase
{
public:
  CharacteristicsStatsType();
  CharacteristicsStatsType(
    CharacteristicStatsEvalBaseTypeLisd * CharacteristicStatsIn);
  CharacteristicsStatsType(
    NaturalType * nIn,
    CharacteristicStatsEvalBaseTypeLisd * CharacteristicStatsIn);
  ~CharacteristicsStatsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CharacteristicStatsEvalBaseTypeLisd * getCharacteristicStats();
  void setCharacteristicStats(CharacteristicStatsEvalBaseTypeLisd *);

protected:
  NaturalType * n;
  CharacteristicStatsEvalBaseTypeLisd * CharacteristicStats;
};

/* ***************************************************************** */

class CompositeSegmentStatsEvalBaseType :
  public XmlTypeBase
{
public:
  CompositeSegmentStatsEvalBaseType();
  CompositeSegmentStatsEvalBaseType(
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  virtual ~CompositeSegmentStatsEvalBaseType();
  void printSelf(FILE * outFile);

  StatsWithTolLinearType * getValueStats();
  void setValueStats(StatsWithTolLinearType * ValueStatsIn);
  StatsLinearType * getMaxValueStats();
  void setMaxValueStats(StatsLinearType * MaxValueStatsIn);
  StatsLinearType * getMinValueStats();
  void setMinValueStats(StatsLinearType * MinValueStatsIn);

protected:
  StatsWithTolLinearType * ValueStats;
  StatsLinearType * MaxValueStats;
  StatsLinearType * MinValueStats;
};

/* ***************************************************************** */

class CompositeSegmentSymmetryStatsEvalType :
  public CompositeSegmentStatsEvalBaseType
{
public:
  CompositeSegmentSymmetryStatsEvalType();
  CompositeSegmentSymmetryStatsEvalType(
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~CompositeSegmentSymmetryStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CompositeSegmentsPositionStatsEvalType :
  public XmlTypeBase
{
public:
  CompositeSegmentsPositionStatsEvalType();
  CompositeSegmentsPositionStatsEvalType(
    CompositeSegmentPositionStatsEvalType * SecondCompositeSegmentPositionStatsIn,
    CompositeSegmentPositionStatsEvalType * ThirdCompositeSegmentPositionStatsIn,
    CompositeSegmentPositionStatsEvalType * FourthCompositeSegmentPositionStatsIn);
  ~CompositeSegmentsPositionStatsEvalType();
  void printSelf(FILE * outFile);

  CompositeSegmentPositionStatsEvalType * getSecondCompositeSegmentPositionStats();
  void setSecondCompositeSegmentPositionStats(CompositeSegmentPositionStatsEvalType * SecondCompositeSegmentPositionStatsIn);
  CompositeSegmentPositionStatsEvalType * getThirdCompositeSegmentPositionStats();
  void setThirdCompositeSegmentPositionStats(CompositeSegmentPositionStatsEvalType * ThirdCompositeSegmentPositionStatsIn);
  CompositeSegmentPositionStatsEvalType * getFourthCompositeSegmentPositionStats();
  void setFourthCompositeSegmentPositionStats(CompositeSegmentPositionStatsEvalType * FourthCompositeSegmentPositionStatsIn);

protected:
  CompositeSegmentPositionStatsEvalType * SecondCompositeSegmentPositionStats;
  CompositeSegmentPositionStatsEvalType * ThirdCompositeSegmentPositionStats;
  CompositeSegmentPositionStatsEvalType * FourthCompositeSegmentPositionStats;
};

/* ***************************************************************** */

class CompositeSegmentsProfileStatsEvalType :
  public XmlTypeBase
{
public:
  CompositeSegmentsProfileStatsEvalType();
  CompositeSegmentsProfileStatsEvalType(
    CompositeSegmentProfileStatsEvalType * SecondCompositeSegmentProfileStatsIn,
    CompositeSegmentProfileStatsEvalType * ThirdCompositeSegmentProfileStatsIn,
    CompositeSegmentProfileStatsEvalType * FourthCompositeSegmentProfileStatsIn);
  ~CompositeSegmentsProfileStatsEvalType();
  void printSelf(FILE * outFile);

  CompositeSegmentProfileStatsEvalType * getSecondCompositeSegmentProfileStats();
  void setSecondCompositeSegmentProfileStats(CompositeSegmentProfileStatsEvalType * SecondCompositeSegmentProfileStatsIn);
  CompositeSegmentProfileStatsEvalType * getThirdCompositeSegmentProfileStats();
  void setThirdCompositeSegmentProfileStats(CompositeSegmentProfileStatsEvalType * ThirdCompositeSegmentProfileStatsIn);
  CompositeSegmentProfileStatsEvalType * getFourthCompositeSegmentProfileStats();
  void setFourthCompositeSegmentProfileStats(CompositeSegmentProfileStatsEvalType * FourthCompositeSegmentProfileStatsIn);

protected:
  CompositeSegmentProfileStatsEvalType * SecondCompositeSegmentProfileStats;
  CompositeSegmentProfileStatsEvalType * ThirdCompositeSegmentProfileStats;
  CompositeSegmentProfileStatsEvalType * FourthCompositeSegmentProfileStats;
};

/* ***************************************************************** */

class CompositeSegmentsSymmetryStatsEvalType :
  public XmlTypeBase
{
public:
  CompositeSegmentsSymmetryStatsEvalType();
  CompositeSegmentsSymmetryStatsEvalType(
    CompositeSegmentSymmetryStatsEvalType * SecondCompositeSegmentSymmetryStatsIn,
    CompositeSegmentSymmetryStatsEvalType * ThirdCompositeSegmentSymmetryStatsIn);
  ~CompositeSegmentsSymmetryStatsEvalType();
  void printSelf(FILE * outFile);

  CompositeSegmentSymmetryStatsEvalType * getSecondCompositeSegmentSymmetryStats();
  void setSecondCompositeSegmentSymmetryStats(CompositeSegmentSymmetryStatsEvalType * SecondCompositeSegmentSymmetryStatsIn);
  CompositeSegmentSymmetryStatsEvalType * getThirdCompositeSegmentSymmetryStats();
  void setThirdCompositeSegmentSymmetryStats(CompositeSegmentSymmetryStatsEvalType * ThirdCompositeSegmentSymmetryStatsIn);

protected:
  CompositeSegmentSymmetryStatsEvalType * SecondCompositeSegmentSymmetryStats;
  CompositeSegmentSymmetryStatsEvalType * ThirdCompositeSegmentSymmetryStats;
};

/* ***************************************************************** */

class ControlIssueDetailsListType :
  public XmlTypeBase
{
public:
  ControlIssueDetailsListType();
  ControlIssueDetailsListType(
    ControlIssueDetailsTypeLisd * ControlIssueDetailsIn);
  ControlIssueDetailsListType(
    NaturalType * nIn,
    ControlIssueDetailsTypeLisd * ControlIssueDetailsIn);
  ~ControlIssueDetailsListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ControlIssueDetailsTypeLisd * getControlIssueDetails();
  void setControlIssueDetails(ControlIssueDetailsTypeLisd *);

protected:
  NaturalType * n;
  ControlIssueDetailsTypeLisd * ControlIssueDetails;
};

/* ***************************************************************** */

class ControlIssueDetailsListTypeLisd :
  public std::list<ControlIssueDetailsListType *>,
  public XmlSchemaInstanceBase
{
public:
  ControlIssueDetailsListTypeLisd();
  ControlIssueDetailsListTypeLisd(
    ControlIssueDetailsListType * aControlIssueDetailsListType);
  ~ControlIssueDetailsListTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ControlIssueDetailsType :
  public XmlTypeBase
{
public:
  ControlIssueDetailsType();
  ControlIssueDetailsType(
    ControlIssueType * ControlIssueIn,
    QIFReferenceType * ControlMethodIdIn,
    QIFReferenceType * StudyIssueIdIn);
  ~ControlIssueDetailsType();
  void printSelf(FILE * outFile);

  ControlIssueType * getControlIssue();
  void setControlIssue(ControlIssueType * ControlIssueIn);
  QIFReferenceType * getControlMethodId();
  void setControlMethodId(QIFReferenceType * ControlMethodIdIn);
  QIFReferenceType * getStudyIssueId();
  void setStudyIssueId(QIFReferenceType * StudyIssueIdIn);

protected:
  ControlIssueType * ControlIssue;
  QIFReferenceType * ControlMethodId;
  QIFReferenceType * StudyIssueId;
};

/* ***************************************************************** */

class ControlIssueDetailsTypeLisd :
  public std::list<ControlIssueDetailsType *>,
  public XmlSchemaInstanceBase
{
public:
  ControlIssueDetailsTypeLisd();
  ControlIssueDetailsTypeLisd(
    ControlIssueDetailsType * aControlIssueDetailsType);
  ~ControlIssueDetailsTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ControlIssueEnumType :
  public XmlNMTOKEN
{
public:
  ControlIssueEnumType();
  ControlIssueEnumType(
    const char * valIn);
  ~ControlIssueEnumType();
  bool ControlIssueEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ControlIssueType :
  public XmlTypeBase
{
public:
  ControlIssueType();
  ControlIssueType(
    ControlIssueTypeChoicePair * ControlIssueTypePairIn);
  ~ControlIssueType();
  void printSelf(FILE * outFile);

  ControlIssueTypeChoicePair * getControlIssueTypePair();
  void setControlIssueTypePair(ControlIssueTypeChoicePair * ControlIssueTypePairIn);

protected:
  ControlIssueTypeChoicePair * ControlIssueTypePair;
};

/* ***************************************************************** */

union ControlIssueTypeVal
{
  ControlIssueEnumType * ControlIssueEnum;
  XmlString * OtherControlIssue;
};

/* ***************************************************************** */

class ControlIssueTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ControlIssueEnumE,
    OtherControlIssueE };
  ControlIssueTypeChoicePair();
  ControlIssueTypeChoicePair(
    whichOne ControlIssueTypeTypeIn,
    ControlIssueTypeVal * ControlIssueTypeValueIn);
  ~ControlIssueTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ControlIssueTypeType;
  ControlIssueTypeVal * ControlIssueTypeValue;
};

/* ***************************************************************** */

class CorrectiveActionType :
  public XmlTypeBase
{
public:
  CorrectiveActionType();
  CorrectiveActionType(
    AttributesType * AttributesIn,
    CorrectiveActio_1107_Type * CorrectiveActio_1107In);
  CorrectiveActionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    CorrectiveActio_1107_Type * CorrectiveActio_1107In);
  ~CorrectiveActionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  CorrectiveActio_1107_Type * getCorrectiveActio_1107();
  void setCorrectiveActio_1107(CorrectiveActio_1107_Type * CorrectiveActio_1107In);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  CorrectiveActio_1107_Type * CorrectiveActio_1107;
};

/* ***************************************************************** */

class CorrectiveActionTypeLisd :
  public std::list<CorrectiveActionType *>,
  public XmlSchemaInstanceBase
{
public:
  CorrectiveActionTypeLisd();
  CorrectiveActionTypeLisd(
    CorrectiveActionType * aCorrectiveActionType);
  ~CorrectiveActionTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CorrectiveActionsType :
  public XmlTypeBase
{
public:
  CorrectiveActionsType();
  CorrectiveActionsType(
    CorrectiveActionTypeLisd * CorrectiveActionIn);
  CorrectiveActionsType(
    NaturalType * nIn,
    CorrectiveActionTypeLisd * CorrectiveActionIn);
  ~CorrectiveActionsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CorrectiveActionTypeLisd * getCorrectiveAction();
  void setCorrectiveAction(CorrectiveActionTypeLisd *);

protected:
  NaturalType * n;
  CorrectiveActionTypeLisd * CorrectiveAction;
};

/* ***************************************************************** */

class CriterionDecimalType :
  public XmlTypeBase
{
public:
  CriterionDecimalType();
  CriterionDecimalType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  ~CriterionDecimalType();
  void printSelf(FILE * outFile);

  XmlDecimal * getLimit();
  void setLimit(XmlDecimal * LimitIn);
  CriterionDecima_1108_Type * getCriterionDecima_1108();
  void setCriterionDecima_1108(CriterionDecima_1108_Type * CriterionDecima_1108In);

protected:
  XmlDecimal * Limit;
  CriterionDecima_1108_Type * CriterionDecima_1108;
};

/* ***************************************************************** */

class CriterionForceType :
  public CriterionDecimalType
{
public:
  CriterionForceType();
  CriterionForceType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionForceType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * forceUnitIn);
  ~CriterionForceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getforceUnit();
  void setforceUnit(XmlToken * forceUnitIn);

protected:
  XmlToken * forceUnit;
};

/* ***************************************************************** */

class CriterionIntegerType :
  public XmlTypeBase
{
public:
  CriterionIntegerType();
  CriterionIntegerType(
    XmlPositiveInteger * LimitIn,
    CriterionIntege_1109_Type * CriterionIntege_1109In);
  ~CriterionIntegerType();
  void printSelf(FILE * outFile);

  XmlPositiveInteger * getLimit();
  void setLimit(XmlPositiveInteger * LimitIn);
  CriterionIntege_1109_Type * getCriterionIntege_1109();
  void setCriterionIntege_1109(CriterionIntege_1109_Type * CriterionIntege_1109In);

protected:
  XmlPositiveInteger * Limit;
  CriterionIntege_1109_Type * CriterionIntege_1109;
};

/* ***************************************************************** */

class CriterionLinearType :
  public CriterionDecimalType
{
public:
  CriterionLinearType();
  CriterionLinearType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionLinearType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * linearUnitIn);
  ~CriterionLinearType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);

protected:
  XmlToken * linearUnit;
};

/* ***************************************************************** */

class CriterionMassType :
  public CriterionDecimalType
{
public:
  CriterionMassType();
  CriterionMassType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionMassType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * massUnitIn);
  ~CriterionMassType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getmassUnit();
  void setmassUnit(XmlToken * massUnitIn);

protected:
  XmlToken * massUnit;
};

/* ***************************************************************** */

class CriterionOutOfType :
  public XmlTypeBase
{
public:
  CriterionOutOfType();
  CriterionOutOfType(
    XmlPositiveInteger * NumeratorIn,
    XmlPositiveInteger * DenominatorIn,
    LimitingNumberType * NumberAllowedExceptionsIn);
  ~CriterionOutOfType();
  void printSelf(FILE * outFile);

  XmlPositiveInteger * getNumerator();
  void setNumerator(XmlPositiveInteger * NumeratorIn);
  XmlPositiveInteger * getDenominator();
  void setDenominator(XmlPositiveInteger * DenominatorIn);
  LimitingNumberType * getNumberAllowedExceptions();
  void setNumberAllowedExceptions(LimitingNumberType * NumberAllowedExceptionsIn);

protected:
  XmlPositiveInteger * Numerator;
  XmlPositiveInteger * Denominator;
  LimitingNumberType * NumberAllowedExceptions;
};

/* ***************************************************************** */

class CriterionPressureType :
  public CriterionDecimalType
{
public:
  CriterionPressureType();
  CriterionPressureType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionPressureType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * pressureUnitIn);
  ~CriterionPressureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getpressureUnit();
  void setpressureUnit(XmlToken * pressureUnitIn);

protected:
  XmlToken * pressureUnit;
};

/* ***************************************************************** */

class CriterionSpeedType :
  public CriterionDecimalType
{
public:
  CriterionSpeedType();
  CriterionSpeedType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionSpeedType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * speedUnitIn);
  ~CriterionSpeedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getspeedUnit();
  void setspeedUnit(XmlToken * speedUnitIn);

protected:
  XmlToken * speedUnit;
};

/* ***************************************************************** */

class CriterionTemperatureType :
  public CriterionDecimalType
{
public:
  CriterionTemperatureType();
  CriterionTemperatureType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionTemperatureType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * temperatureUnitIn);
  ~CriterionTemperatureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettemperatureUnit();
  void settemperatureUnit(XmlToken * temperatureUnitIn);

protected:
  XmlToken * temperatureUnit;
};

/* ***************************************************************** */

class CriterionTimeType :
  public CriterionDecimalType
{
public:
  CriterionTimeType();
  CriterionTimeType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionTimeType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * timeUnitIn);
  ~CriterionTimeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettimeUnit();
  void settimeUnit(XmlToken * timeUnitIn);

protected:
  XmlToken * timeUnit;
};

/* ***************************************************************** */

class CriterionUserDefinedUnitType :
  public CriterionDecimalType
{
public:
  CriterionUserDefinedUnitType();
  CriterionUserDefinedUnitType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionUserDefinedUnitType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * unitNameIn);
  ~CriterionUserDefinedUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getunitName();
  void setunitName(XmlToken * unitNameIn);

protected:
  XmlToken * unitName;
};

/* ***************************************************************** */

class CriterionUserDefinedUnitTypeLisd :
  public std::list<CriterionUserDefinedUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  CriterionUserDefinedUnitTypeLisd();
  CriterionUserDefinedUnitTypeLisd(
    CriterionUserDefinedUnitType * aCriterionUserDefinedUnitType);
  ~CriterionUserDefinedUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DistributionTransformationEnumType :
  public XmlNMTOKEN
{
public:
  DistributionTransformationEnumType();
  DistributionTransformationEnumType(
    const char * valIn);
  ~DistributionTransformationEnumType();
  bool DistributionTransformationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DistributionTransformationType :
  public XmlTypeBase
{
public:
  DistributionTransformationType();
  DistributionTransformationType(
    DistributionTransformationTypeChoicePair * DistributionTransformationTypePairIn);
  ~DistributionTransformationType();
  void printSelf(FILE * outFile);

  DistributionTransformationTypeChoicePair * getDistributionTransformationTypePair();
  void setDistributionTransformationTypePair(DistributionTransformationTypeChoicePair * DistributionTransformationTypePairIn);

protected:
  DistributionTransformationTypeChoicePair * DistributionTransformationTypePair;
};

/* ***************************************************************** */

union DistributionTransformationTypeVal
{
  DistributionTransformationEnumType * DistributionTransformationEnum;
  XmlDecimal * BoxCoxTransformation;
  XmlString * OtherDistributionTransformation;
};

/* ***************************************************************** */

class DistributionTransformationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DistributionTransformationEnumE,
    BoxCoxTransformationE,
    OtherDistributionTransformationE };
  DistributionTransformationTypeChoicePair();
  DistributionTransformationTypeChoicePair(
    whichOne DistributionTransformationTypeTypeIn,
    DistributionTransformationTypeVal * DistributionTransformationTypeValueIn);
  ~DistributionTransformationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DistributionTransformationTypeType;
  DistributionTransformationTypeVal * DistributionTransformationTypeValue;
};

/* ***************************************************************** */

class ExclusionEnumType :
  public XmlNMTOKEN
{
public:
  ExclusionEnumType();
  ExclusionEnumType(
    const char * valIn);
  ~ExclusionEnumType();
  bool ExclusionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ExclusionIdType :
  public XmlTypeBase
{
public:
  ExclusionIdType();
  ExclusionIdType(
    QIFReferenceType * IdIn,
    ExclusionReasonType * ReasonIn);
  ~ExclusionIdType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getId();
  void setId(QIFReferenceType * IdIn);
  ExclusionReasonType * getReason();
  void setReason(ExclusionReasonType * ReasonIn);

protected:
  QIFReferenceType * Id;
  ExclusionReasonType * Reason;
};

/* ***************************************************************** */

class ExclusionIdTypeLisd :
  public std::list<ExclusionIdType *>,
  public XmlSchemaInstanceBase
{
public:
  ExclusionIdTypeLisd();
  ExclusionIdTypeLisd(
    ExclusionIdType * aExclusionIdType);
  ~ExclusionIdTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ExclusionIndexType :
  public XmlTypeBase
{
public:
  ExclusionIndexType();
  ExclusionIndexType(
    XmlPositiveInteger * IndexIn,
    ExclusionReasonType * ReasonIn);
  ~ExclusionIndexType();
  void printSelf(FILE * outFile);

  XmlPositiveInteger * getIndex();
  void setIndex(XmlPositiveInteger * IndexIn);
  ExclusionReasonType * getReason();
  void setReason(ExclusionReasonType * ReasonIn);

protected:
  XmlPositiveInteger * Index;
  ExclusionReasonType * Reason;
};

/* ***************************************************************** */

class ExclusionIndexTypeLisd :
  public std::list<ExclusionIndexType *>,
  public XmlSchemaInstanceBase
{
public:
  ExclusionIndexTypeLisd();
  ExclusionIndexTypeLisd(
    ExclusionIndexType * aExclusionIndexType);
  ~ExclusionIndexTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ExclusionReasonType :
  public XmlTypeBase
{
public:
  ExclusionReasonType();
  ExclusionReasonType(
    ExclusionReasonTypeChoicePair * ExclusionReasonTypePairIn);
  ~ExclusionReasonType();
  void printSelf(FILE * outFile);

  ExclusionReasonTypeChoicePair * getExclusionReasonTypePair();
  void setExclusionReasonTypePair(ExclusionReasonTypeChoicePair * ExclusionReasonTypePairIn);

protected:
  ExclusionReasonTypeChoicePair * ExclusionReasonTypePair;
};

/* ***************************************************************** */

union ExclusionReasonTypeVal
{
  ExclusionEnumType * ExclusionReasonEnum;
  XmlString * OtherExclusionReason;
};

/* ***************************************************************** */

class ExclusionReasonTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ExclusionReasonEnumE,
    OtherExclusionReasonE };
  ExclusionReasonTypeChoicePair();
  ExclusionReasonTypeChoicePair(
    whichOne ExclusionReasonTypeTypeIn,
    ExclusionReasonTypeVal * ExclusionReasonTypeValueIn);
  ~ExclusionReasonTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExclusionReasonTypeType;
  ExclusionReasonTypeVal * ExclusionReasonTypeValue;
};

/* ***************************************************************** */

class ExclusionsIdType :
  public XmlTypeBase
{
public:
  ExclusionsIdType();
  ExclusionsIdType(
    ExclusionIdTypeLisd * ExclusionIn);
  ExclusionsIdType(
    NaturalType * nIn,
    ExclusionIdTypeLisd * ExclusionIn);
  ~ExclusionsIdType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ExclusionIdTypeLisd * getExclusion();
  void setExclusion(ExclusionIdTypeLisd *);

protected:
  NaturalType * n;
  ExclusionIdTypeLisd * Exclusion;
};

/* ***************************************************************** */

class ExclusionsIndexType :
  public XmlTypeBase
{
public:
  ExclusionsIndexType();
  ExclusionsIndexType(
    ExclusionIndexTypeLisd * ExclusionIn);
  ExclusionsIndexType(
    NaturalType * nIn,
    ExclusionIndexTypeLisd * ExclusionIn);
  ~ExclusionsIndexType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ExclusionIndexTypeLisd * getExclusion();
  void setExclusion(ExclusionIndexTypeLisd *);

protected:
  NaturalType * n;
  ExclusionIndexTypeLisd * Exclusion;
};

/* ***************************************************************** */

class GeometricCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  GeometricCharacteristicStatsEvalType();
  GeometricCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~GeometricCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsWithTolLinearType * getValueStats();
  void setValueStats(StatsWithTolLinearType * ValueStatsIn);
  StatsLinearType * getMaxValueStats();
  void setMaxValueStats(StatsLinearType * MaxValueStatsIn);
  StatsLinearType * getMinValueStats();
  void setMinValueStats(StatsLinearType * MinValueStatsIn);

protected:
  StatsWithTolLinearType * ValueStats;
  StatsLinearType * MaxValueStats;
  StatsLinearType * MinValueStats;
};

/* ***************************************************************** */

class LimitingNumberType :
  public XmlTypeBase
{
public:
  LimitingNumberType();
  LimitingNumberType(
    LimitingNumberTypeChoicePair * LimitingNumberTypePairIn);
  ~LimitingNumberType();
  void printSelf(FILE * outFile);

  LimitingNumberTypeChoicePair * getLimitingNumberTypePair();
  void setLimitingNumberTypePair(LimitingNumberTypeChoicePair * LimitingNumberTypePairIn);

protected:
  LimitingNumberTypeChoicePair * LimitingNumberTypePair;
};

/* ***************************************************************** */

union LimitingNumberTypeVal
{
  XmlNonNegativeInteger * Count;
  XmlDecimal * Fraction;
};

/* ***************************************************************** */

class LimitingNumberTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CountE,
    FractionE };
  LimitingNumberTypeChoicePair();
  LimitingNumberTypeChoicePair(
    whichOne LimitingNumberTypeTypeIn,
    LimitingNumberTypeVal * LimitingNumberTypeValueIn);
  ~LimitingNumberTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LimitingNumberTypeType;
  LimitingNumberTypeVal * LimitingNumberTypeValue;
};

/* ***************************************************************** */

class LinearCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  LinearCharacteristicStatsEvalType();
  LinearCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~LinearCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  LinearCharacteristicStatsEvalTypeChoicePair * getLinearCharacteristicStatsEvalTypeChoicePair();
  void setLinearCharacteristicStatsEvalTypeChoicePair(LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);

protected:
  LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union LinearCharacteristicStatsEvalTypeVal
{
  LinearCharacter_1110_Type * LinearCharacter_1110;
  LinearCharacter_1111_Type * LinearCharacter_1111;
  StatsLinearType * MinValueStats;
  LinearCharacter_1112_Type * LinearCharacter_1112;
  LinearCharacter_1113_Type * LinearCharacter_1113;
  StatsLinearType * MinDeviationStats;
};

/* ***************************************************************** */

class LinearCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearCharacter_1110E,
    LinearCharacter_1111E,
    MinValueStatsE,
    LinearCharacter_1112E,
    LinearCharacter_1113E,
    MinDeviationStatsE };
  LinearCharacteristicStatsEvalTypeChoicePair();
  LinearCharacteristicStatsEvalTypeChoicePair(
    whichOne LinearCharacteristicStatsEvalTypeTypeIn,
    LinearCharacteristicStatsEvalTypeVal * LinearCharacteristicStatsEvalTypeValueIn);
  ~LinearCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearCharacteristicStatsEvalTypeType;
  LinearCharacteristicStatsEvalTypeVal * LinearCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class LinearCoordinateCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  LinearCoordinateCharacteristicStatsEvalType();
  LinearCoordinateCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~LinearCoordinateCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LocationCharacteristicStatsEvalType :
  public GeometricCharacteristicStatsEvalType
{
public:
  LocationCharacteristicStatsEvalType();
  LocationCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    StatsPassFailType * DatumsOkStatsIn);
  ~LocationCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsPassFailType * getDatumsOkStats();
  void setDatumsOkStats(StatsPassFailType * DatumsOkStatsIn);

protected:
  StatsPassFailType * DatumsOkStats;
};

/* ***************************************************************** */

class OneSidedCapabilityCalculationEnumType :
  public XmlNMTOKEN
{
public:
  OneSidedCapabilityCalculationEnumType();
  OneSidedCapabilityCalculationEnumType(
    const char * valIn);
  ~OneSidedCapabilityCalculationEnumType();
  bool OneSidedCapabilityCalculationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class OrientationCharacteristicStatsEvalType :
  public GeometricCharacteristicStatsEvalType
{
public:
  OrientationCharacteristicStatsEvalType();
  OrientationCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsPassFailType * DatumsOkStatsIn,
    StatsLinearType * BonusStatsIn,
    StatsLinearType * ReferenceLengthStatsIn);
  ~OrientationCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  OneSidedCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  StatsPassFailType * getDatumsOkStats();
  void setDatumsOkStats(StatsPassFailType * DatumsOkStatsIn);
  StatsLinearType * getBonusStats();
  void setBonusStats(StatsLinearType * BonusStatsIn);
  StatsLinearType * getReferenceLengthStats();
  void setReferenceLengthStats(StatsLinearType * ReferenceLengthStatsIn);

protected:
  OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethod;
  StatsPassFailType * DatumsOkStats;
  StatsLinearType * BonusStats;
  StatsLinearType * ReferenceLengthStats;
};

/* ***************************************************************** */

class ParallelismCharacteristicStatsEvalType :
  public OrientationCharacteristicStatsEvalType
{
public:
  ParallelismCharacteristicStatsEvalType();
  ParallelismCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsPassFailType * DatumsOkStatsIn,
    StatsLinearType * BonusStatsIn,
    StatsLinearType * ReferenceLengthStatsIn);
  ~ParallelismCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PerpendicularityCharacteristicStatsEvalType :
  public OrientationCharacteristicStatsEvalType
{
public:
  PerpendicularityCharacteristicStatsEvalType();
  PerpendicularityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsPassFailType * DatumsOkStatsIn,
    StatsLinearType * BonusStatsIn,
    StatsLinearType * ReferenceLengthStatsIn);
  ~PerpendicularityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointDeviationStatsEvalType :
  public XmlTypeBase
{
public:
  PointDeviationStatsEvalType();
  PointDeviationStatsEvalType(
    StatsArrayIdType * MeasuredPointIdsIn,
    StatsLinearType * DeviationStatsIn);
  ~PointDeviationStatsEvalType();
  void printSelf(FILE * outFile);

  StatsArrayIdType * getMeasuredPointIds();
  void setMeasuredPointIds(StatsArrayIdType * MeasuredPointIdsIn);
  StatsLinearType * getDeviationStats();
  void setDeviationStats(StatsLinearType * DeviationStatsIn);

protected:
  StatsArrayIdType * MeasuredPointIds;
  StatsLinearType * DeviationStats;
};

/* ***************************************************************** */

class PointDeviationStatsEvalTypeLisd :
  public std::list<PointDeviationStatsEvalType *>,
  public XmlSchemaInstanceBase
{
public:
  PointDeviationStatsEvalTypeLisd();
  PointDeviationStatsEvalTypeLisd(
    PointDeviationStatsEvalType * aPointDeviationStatsEvalType);
  ~PointDeviationStatsEvalTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointDeviationsStatsEvalType :
  public XmlTypeBase
{
public:
  PointDeviationsStatsEvalType();
  PointDeviationsStatsEvalType(
    PointDeviationStatsEvalTypeLisd * PointDeviationStatsIn);
  PointDeviationsStatsEvalType(
    NaturalType * nIn,
    PointDeviationStatsEvalTypeLisd * PointDeviationStatsIn);
  ~PointDeviationsStatsEvalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PointDeviationStatsEvalTypeLisd * getPointDeviationStats();
  void setPointDeviationStats(PointDeviationStatsEvalTypeLisd *);

protected:
  NaturalType * n;
  PointDeviationStatsEvalTypeLisd * PointDeviationStats;
};

/* ***************************************************************** */

class PositionCapabilityCalculationEnumType :
  public XmlNMTOKEN
{
public:
  PositionCapabilityCalculationEnumType();
  PositionCapabilityCalculationEnumType(
    const char * valIn);
  ~PositionCapabilityCalculationEnumType();
  bool PositionCapabilityCalculationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class PositionCharacteristicStatsEvalType :
  public LocationCharacteristicStatsEvalType
{
public:
  PositionCharacteristicStatsEvalType();
  PositionCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    StatsLinearType * BonusStatsIn,
    PositionCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    CompositeSegmentsPositionStatsEvalType * CompositeSegmentsStatsIn);
  ~PositionCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsLinearType * getBonusStats();
  void setBonusStats(StatsLinearType * BonusStatsIn);
  PositionCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(PositionCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  CompositeSegmentsPositionStatsEvalType * getCompositeSegmentsStats();
  void setCompositeSegmentsStats(CompositeSegmentsPositionStatsEvalType * CompositeSegmentsStatsIn);

protected:
  StatsLinearType * BonusStats;
  PositionCapabilityCalculationEnumType * CapabilityCalculationMethod;
  CompositeSegmentsPositionStatsEvalType * CompositeSegmentsStats;
};

/* ***************************************************************** */

class ProfileCharacteristicStatsEvalBaseType :
  public GeometricCharacteristicStatsEvalType
{
public:
  ProfileCharacteristicStatsEvalBaseType();
  ProfileCharacteristicStatsEvalBaseType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * WorstPositiveDeviationStatsIn,
    StatsLinearType * WorstNegativeDeviationStatsIn,
    PointDeviationsStatsEvalType * PointDeviationsStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    CompositeSegmentsProfileStatsEvalType * CompositeSegmentsStatsIn);
  virtual ~ProfileCharacteristicStatsEvalBaseType();
  void printSelf(FILE * outFile);

  OneSidedCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  StatsLinearType * getWorstPositiveDeviationStats();
  void setWorstPositiveDeviationStats(StatsLinearType * WorstPositiveDeviationStatsIn);
  StatsLinearType * getWorstNegativeDeviationStats();
  void setWorstNegativeDeviationStats(StatsLinearType * WorstNegativeDeviationStatsIn);
  PointDeviationsStatsEvalType * getPointDeviationsStats();
  void setPointDeviationsStats(PointDeviationsStatsEvalType * PointDeviationsStatsIn);
  StatsPassFailType * getDatumsOkStats();
  void setDatumsOkStats(StatsPassFailType * DatumsOkStatsIn);
  CompositeSegmentsProfileStatsEvalType * getCompositeSegmentsStats();
  void setCompositeSegmentsStats(CompositeSegmentsProfileStatsEvalType * CompositeSegmentsStatsIn);

protected:
  OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethod;
  StatsLinearType * WorstPositiveDeviationStats;
  StatsLinearType * WorstNegativeDeviationStats;
  PointDeviationsStatsEvalType * PointDeviationsStats;
  StatsPassFailType * DatumsOkStats;
  CompositeSegmentsProfileStatsEvalType * CompositeSegmentsStats;
};

/* ***************************************************************** */

class RadiusCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  RadiusCharacteristicStatsEvalType();
  RadiusCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~RadiusCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class RunoutCharacteristicStatsEvalBaseType :
  public GeometricCharacteristicStatsEvalType
{
public:
  RunoutCharacteristicStatsEvalBaseType();
  RunoutCharacteristicStatsEvalBaseType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsPassFailType * DatumsOkStatsIn);
  virtual ~RunoutCharacteristicStatsEvalBaseType();
  void printSelf(FILE * outFile);

  OneSidedCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  StatsPassFailType * getDatumsOkStats();
  void setDatumsOkStats(StatsPassFailType * DatumsOkStatsIn);

protected:
  OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethod;
  StatsPassFailType * DatumsOkStats;
};

/* ***************************************************************** */

class SamplingIntervalEnumType :
  public XmlNMTOKEN
{
public:
  SamplingIntervalEnumType();
  SamplingIntervalEnumType(
    const char * valIn);
  ~SamplingIntervalEnumType();
  bool SamplingIntervalEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SamplingIntervalType :
  public XmlTypeBase
{
public:
  SamplingIntervalType();
  SamplingIntervalType(
    SamplingIntervalTypeChoicePair * SamplingIntervalTypePairIn);
  ~SamplingIntervalType();
  void printSelf(FILE * outFile);

  SamplingIntervalTypeChoicePair * getSamplingIntervalTypePair();
  void setSamplingIntervalTypePair(SamplingIntervalTypeChoicePair * SamplingIntervalTypePairIn);

protected:
  SamplingIntervalTypeChoicePair * SamplingIntervalTypePair;
};

/* ***************************************************************** */

union SamplingIntervalTypeVal
{
  SamplingIntervalEnumType * SamplingIntervalEnum;
  XmlString * OtherSamplingInterval;
};

/* ***************************************************************** */

class SamplingIntervalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SamplingIntervalEnumE,
    OtherSamplingIntervalE };
  SamplingIntervalTypeChoicePair();
  SamplingIntervalTypeChoicePair(
    whichOne SamplingIntervalTypeTypeIn,
    SamplingIntervalTypeVal * SamplingIntervalTypeValueIn);
  ~SamplingIntervalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SamplingIntervalTypeType;
  SamplingIntervalTypeVal * SamplingIntervalTypeValue;
};

/* ***************************************************************** */

class SamplingMethodType :
  public XmlTypeBase
{
public:
  SamplingMethodType();
  SamplingMethodType(
    XmlPositiveInteger * SampleSizeIn,
    SamplingMethodT_1114_Type * SamplingMethodT_1114In);
  ~SamplingMethodType();
  void printSelf(FILE * outFile);

  XmlPositiveInteger * getSampleSize();
  void setSampleSize(XmlPositiveInteger * SampleSizeIn);
  SamplingMethodT_1114_Type * getSamplingMethodT_1114();
  void setSamplingMethodT_1114(SamplingMethodT_1114_Type * SamplingMethodT_1114In);

protected:
  XmlPositiveInteger * SampleSize;
  SamplingMethodT_1114_Type * SamplingMethodT_1114;
};

/* ***************************************************************** */

class SphericalDiameterCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  SphericalDiameterCharacteristicStatsEvalType();
  SphericalDiameterCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~SphericalDiameterCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SphericalRadiusCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  SphericalRadiusCharacteristicStatsEvalType();
  SphericalRadiusCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~SphericalRadiusCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SquareCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  SquareCharacteristicStatsEvalType();
  SquareCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~SquareCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class StatsArrayIdType :
  public XmlTypeBase
{
public:
  StatsArrayIdType();
  StatsArrayIdType(
    ArrayReferenceType * IdsIn,
    ExclusionsIdType * ExclusionsIn);
  ~StatsArrayIdType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getIds();
  void setIds(ArrayReferenceType * IdsIn);
  ExclusionsIdType * getExclusions();
  void setExclusions(ExclusionsIdType * ExclusionsIn);

protected:
  ArrayReferenceType * Ids;
  ExclusionsIdType * Exclusions;
};

/* ***************************************************************** */

class StatsBaseType :
  public XmlTypeBase
{
public:
  StatsBaseType();
  StatsBaseType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * CommonStatsValueIn);
  virtual ~StatsBaseType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StatsWithReferenceBaseTypeLisd * getCommonStatsValue();
  void setCommonStatsValue(StatsWithReferenceBaseTypeLisd *);

protected:
  AttributesType * Attributes;
  StatsWithReferenceBaseTypeLisd * CommonStatsValue;
};

/* ***************************************************************** */

class StatsEvalStatusEnumType :
  public XmlNMTOKEN
{
public:
  StatsEvalStatusEnumType();
  StatsEvalStatusEnumType(
    const char * valIn);
  ~StatsEvalStatusEnumType();
  bool StatsEvalStatusEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class StatsEvalStatusType :
  public XmlTypeBase
{
public:
  StatsEvalStatusType();
  StatsEvalStatusType(
    StatsEvalStatusTypeChoicePair * StatsEvalStatusTypePairIn);
  ~StatsEvalStatusType();
  void printSelf(FILE * outFile);

  StatsEvalStatusTypeChoicePair * getStatsEvalStatusTypePair();
  void setStatsEvalStatusTypePair(StatsEvalStatusTypeChoicePair * StatsEvalStatusTypePairIn);

protected:
  StatsEvalStatusTypeChoicePair * StatsEvalStatusTypePair;
};

/* ***************************************************************** */

union StatsEvalStatusTypeVal
{
  StatsEvalStatusEnumType * StatsEvalStatusEnum;
  XmlString * OtherStatsEvalStatus;
};

/* ***************************************************************** */

class StatsEvalStatusTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    StatsEvalStatusEnumE,
    OtherStatsEvalStatusE };
  StatsEvalStatusTypeChoicePair();
  StatsEvalStatusTypeChoicePair(
    whichOne StatsEvalStatusTypeTypeIn,
    StatsEvalStatusTypeVal * StatsEvalStatusTypeValueIn);
  ~StatsEvalStatusTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StatsEvalStatusTypeType;
  StatsEvalStatusTypeVal * StatsEvalStatusTypeValue;
};

/* ***************************************************************** */

class StatsNumericalBaseType :
  public XmlTypeBase
{
public:
  StatsNumericalBaseType();
  StatsNumericalBaseType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  virtual ~StatsNumericalBaseType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StatsWithReferenceBaseTypeLisd * getNumericCharacteristicStatsValue();
  void setNumericCharacteristicStatsValue(StatsWithReferenceBaseTypeLisd *);

protected:
  AttributesType * Attributes;
  StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValue;
};

/* ***************************************************************** */

class StatsPassFailType :
  public StatsBaseType
{
public:
  StatsPassFailType();
  StatsPassFailType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * CommonStatsValueIn,
    StatsWithReferenceBaseTypeLisd * PassFailStatsValueIn);
  ~StatsPassFailType();
  void printSelf(FILE * outFile);

  StatsWithReferenceBaseTypeLisd * getPassFailStatsValue();
  void setPassFailStatsValue(StatsWithReferenceBaseTypeLisd *);

protected:
  StatsWithReferenceBaseTypeLisd * PassFailStatsValue;
};

/* ***************************************************************** */

class StatsPressureType :
  public StatsNumericalBaseType
{
public:
  StatsPressureType();
  StatsPressureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsPressureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * pressureUnitIn);
  ~StatsPressureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getpressureUnit();
  void setpressureUnit(XmlToken * pressureUnitIn);

protected:
  XmlToken * pressureUnit;
};

/* ***************************************************************** */

class StatsSpeedType :
  public StatsNumericalBaseType
{
public:
  StatsSpeedType();
  StatsSpeedType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsSpeedType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * speedUnitIn);
  ~StatsSpeedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getspeedUnit();
  void setspeedUnit(XmlToken * speedUnitIn);

protected:
  XmlToken * speedUnit;
};

/* ***************************************************************** */

class StatsTemperatureType :
  public StatsNumericalBaseType
{
public:
  StatsTemperatureType();
  StatsTemperatureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsTemperatureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * temperatureUnitIn);
  ~StatsTemperatureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettemperatureUnit();
  void settemperatureUnit(XmlToken * temperatureUnitIn);

protected:
  XmlToken * temperatureUnit;
};

/* ***************************************************************** */

class StatsTimeType :
  public StatsNumericalBaseType
{
public:
  StatsTimeType();
  StatsTimeType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsTimeType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * timeUnitIn);
  ~StatsTimeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettimeUnit();
  void settimeUnit(XmlToken * timeUnitIn);

protected:
  XmlToken * timeUnit;
};

/* ***************************************************************** */

class StatsUserDefinedUnitType :
  public StatsNumericalBaseType
{
public:
  StatsUserDefinedUnitType();
  StatsUserDefinedUnitType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsUserDefinedUnitType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * unitNameIn);
  ~StatsUserDefinedUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getunitName();
  void setunitName(XmlToken * unitNameIn);

protected:
  XmlToken * unitName;
};

/* ***************************************************************** */

class StatsValuesType :
  public XmlTypeBase
{
public:
  StatsValuesType();
  StatsValuesType(
    ListTokenType * ValuesIn,
    ExclusionsIndexType * ExclusionsIn);
  ~StatsValuesType();
  void printSelf(FILE * outFile);

  ListTokenType * getValues();
  void setValues(ListTokenType * ValuesIn);
  ExclusionsIndexType * getExclusions();
  void setExclusions(ExclusionsIndexType * ExclusionsIn);

protected:
  ListTokenType * Values;
  ExclusionsIndexType * Exclusions;
};

/* ***************************************************************** */

class StatsValuesTypeLisd :
  public std::list<StatsValuesType *>,
  public XmlSchemaInstanceBase
{
public:
  StatsValuesTypeLisd();
  StatsValuesTypeLisd(
    StatsValuesType * aStatsValuesType);
  ~StatsValuesTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class StatsWithTolNumericalBaseType :
  public XmlTypeBase
{
public:
  StatsWithTolNumericalBaseType();
  StatsWithTolNumericalBaseType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  virtual ~StatsWithTolNumericalBaseType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StatsWithReferenceBaseTypeLisd * getNumericCharacteristicWithTolStatsValue();
  void setNumericCharacteristicWithTolStatsValue(StatsWithReferenceBaseTypeLisd *);

protected:
  AttributesType * Attributes;
  StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValue;
};

/* ***************************************************************** */

class StatsWithTolPressureType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolPressureType();
  StatsWithTolPressureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolPressureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * pressureUnitIn);
  ~StatsWithTolPressureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getpressureUnit();
  void setpressureUnit(XmlToken * pressureUnitIn);

protected:
  XmlToken * pressureUnit;
};

/* ***************************************************************** */

class StatsWithTolSpeedType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolSpeedType();
  StatsWithTolSpeedType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolSpeedType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * speedUnitIn);
  ~StatsWithTolSpeedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getspeedUnit();
  void setspeedUnit(XmlToken * speedUnitIn);

protected:
  XmlToken * speedUnit;
};

/* ***************************************************************** */

class StatsWithTolTemperatureType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolTemperatureType();
  StatsWithTolTemperatureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolTemperatureType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * temperatureUnitIn);
  ~StatsWithTolTemperatureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettemperatureUnit();
  void settemperatureUnit(XmlToken * temperatureUnitIn);

protected:
  XmlToken * temperatureUnit;
};

/* ***************************************************************** */

class StatsWithTolTimeType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolTimeType();
  StatsWithTolTimeType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolTimeType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * timeUnitIn);
  ~StatsWithTolTimeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettimeUnit();
  void settimeUnit(XmlToken * timeUnitIn);

protected:
  XmlToken * timeUnit;
};

/* ***************************************************************** */

class StatsWithTolUserDefinedUnitType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolUserDefinedUnitType();
  StatsWithTolUserDefinedUnitType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolUserDefinedUnitType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * unitNameIn);
  ~StatsWithTolUserDefinedUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getunitName();
  void setunitName(XmlToken * unitNameIn);

protected:
  XmlToken * unitName;
};

/* ***************************************************************** */

class StudyIssueType :
  public XmlTypeBase
{
public:
  StudyIssueType();
  StudyIssueType(
    InspectionTraceabilityType * TraceabilityIn,
    ArrayReferenceType * AssignableCauseIdsIn,
    ArrayReferenceType * CorrectiveActionIdsIn,
    XmlString * ResolutionIn,
    StudyIssueType_1115_Type * StudyIssueType_1115In);
  StudyIssueType(
    QIFIdType * idIn,
    InspectionTraceabilityType * TraceabilityIn,
    ArrayReferenceType * AssignableCauseIdsIn,
    ArrayReferenceType * CorrectiveActionIdsIn,
    XmlString * ResolutionIn,
    StudyIssueType_1115_Type * StudyIssueType_1115In);
  ~StudyIssueType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  InspectionTraceabilityType * getTraceability();
  void setTraceability(InspectionTraceabilityType * TraceabilityIn);
  ArrayReferenceType * getAssignableCauseIds();
  void setAssignableCauseIds(ArrayReferenceType * AssignableCauseIdsIn);
  ArrayReferenceType * getCorrectiveActionIds();
  void setCorrectiveActionIds(ArrayReferenceType * CorrectiveActionIdsIn);
  XmlString * getResolution();
  void setResolution(XmlString * ResolutionIn);
  StudyIssueType_1115_Type * getStudyIssueType_1115();
  void setStudyIssueType_1115(StudyIssueType_1115_Type * StudyIssueType_1115In);

protected:
  QIFIdType * id;
  InspectionTraceabilityType * Traceability;
  ArrayReferenceType * AssignableCauseIds;
  ArrayReferenceType * CorrectiveActionIds;
  XmlString * Resolution;
  StudyIssueType_1115_Type * StudyIssueType_1115;
};

/* ***************************************************************** */

class StudyIssueTypeLisd :
  public std::list<StudyIssueType *>,
  public XmlSchemaInstanceBase
{
public:
  StudyIssueTypeLisd();
  StudyIssueTypeLisd(
    StudyIssueType * aStudyIssueType);
  ~StudyIssueTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class StudyIssuesType :
  public XmlTypeBase
{
public:
  StudyIssuesType();
  StudyIssuesType(
    StudyIssueTypeLisd * StudyIssueIn);
  StudyIssuesType(
    NaturalType * nIn,
    StudyIssueTypeLisd * StudyIssueIn);
  ~StudyIssuesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  StudyIssueTypeLisd * getStudyIssue();
  void setStudyIssue(StudyIssueTypeLisd *);

protected:
  NaturalType * n;
  StudyIssueTypeLisd * StudyIssue;
};

/* ***************************************************************** */

class SubgroupType :
  public XmlTypeBase
{
public:
  SubgroupType();
  SubgroupType(
    StatsArrayIdType * MeasuredIdsIn);
  SubgroupType(
    QIFIdType * idIn,
    StatsArrayIdType * MeasuredIdsIn);
  ~SubgroupType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  StatsArrayIdType * getMeasuredIds();
  void setMeasuredIds(StatsArrayIdType * MeasuredIdsIn);

protected:
  QIFIdType * id;
  StatsArrayIdType * MeasuredIds;
};

/* ***************************************************************** */

class SubgroupTypeLisd :
  public std::list<SubgroupType *>,
  public XmlSchemaInstanceBase
{
public:
  SubgroupTypeLisd();
  SubgroupTypeLisd(
    SubgroupType * aSubgroupType);
  ~SubgroupTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SubgroupValuesType :
  public XmlTypeBase
{
public:
  SubgroupValuesType();
  SubgroupValuesType(
    StatsValuesTypeLisd * SubgroupIn);
  SubgroupValuesType(
    NaturalType * nIn,
    StatsValuesTypeLisd * SubgroupIn);
  ~SubgroupValuesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  StatsValuesTypeLisd * getSubgroup();
  void setSubgroup(StatsValuesTypeLisd *);

protected:
  NaturalType * n;
  StatsValuesTypeLisd * Subgroup;
};

/* ***************************************************************** */

class SubgroupsType :
  public XmlTypeBase
{
public:
  SubgroupsType();
  SubgroupsType(
    SubgroupTypeLisd * SubgroupIn);
  SubgroupsType(
    NaturalType * nIn,
    SubgroupTypeLisd * SubgroupIn);
  ~SubgroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SubgroupTypeLisd * getSubgroup();
  void setSubgroup(SubgroupTypeLisd *);

protected:
  NaturalType * n;
  SubgroupTypeLisd * Subgroup;
};

/* ***************************************************************** */

class SummariesStatisticsAngularType :
  public XmlTypeBase
{
public:
  SummariesStatisticsAngularType();
  SummariesStatisticsAngularType(
    SummaryStatisticsAngularTypeLisd * AngularStatsSummaryIn);
  SummariesStatisticsAngularType(
    NaturalType * nIn,
    SummaryStatisticsAngularTypeLisd * AngularStatsSummaryIn);
  ~SummariesStatisticsAngularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsAngularTypeLisd * getAngularStatsSummary();
  void setAngularStatsSummary(SummaryStatisticsAngularTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsAngularTypeLisd * AngularStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsAreaType :
  public XmlTypeBase
{
public:
  SummariesStatisticsAreaType();
  SummariesStatisticsAreaType(
    SummaryStatisticsAreaTypeLisd * AreaStatsSummaryIn);
  SummariesStatisticsAreaType(
    NaturalType * nIn,
    SummaryStatisticsAreaTypeLisd * AreaStatsSummaryIn);
  ~SummariesStatisticsAreaType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsAreaTypeLisd * getAreaStatsSummary();
  void setAreaStatsSummary(SummaryStatisticsAreaTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsAreaTypeLisd * AreaStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsForceType :
  public XmlTypeBase
{
public:
  SummariesStatisticsForceType();
  SummariesStatisticsForceType(
    SummaryStatisticsForceTypeLisd * ForceStatsSummaryIn);
  SummariesStatisticsForceType(
    NaturalType * nIn,
    SummaryStatisticsForceTypeLisd * ForceStatsSummaryIn);
  ~SummariesStatisticsForceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsForceTypeLisd * getForceStatsSummary();
  void setForceStatsSummary(SummaryStatisticsForceTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsForceTypeLisd * ForceStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsLinearType :
  public XmlTypeBase
{
public:
  SummariesStatisticsLinearType();
  SummariesStatisticsLinearType(
    SummaryStatisticsLinearTypeLisd * LinearStatsSummaryIn);
  SummariesStatisticsLinearType(
    NaturalType * nIn,
    SummaryStatisticsLinearTypeLisd * LinearStatsSummaryIn);
  ~SummariesStatisticsLinearType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsLinearTypeLisd * getLinearStatsSummary();
  void setLinearStatsSummary(SummaryStatisticsLinearTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsLinearTypeLisd * LinearStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsMassType :
  public XmlTypeBase
{
public:
  SummariesStatisticsMassType();
  SummariesStatisticsMassType(
    SummaryStatisticsMassTypeLisd * MassStatsSummaryIn);
  SummariesStatisticsMassType(
    NaturalType * nIn,
    SummaryStatisticsMassTypeLisd * MassStatsSummaryIn);
  ~SummariesStatisticsMassType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsMassTypeLisd * getMassStatsSummary();
  void setMassStatsSummary(SummaryStatisticsMassTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsMassTypeLisd * MassStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsPressureType :
  public XmlTypeBase
{
public:
  SummariesStatisticsPressureType();
  SummariesStatisticsPressureType(
    SummaryStatisticsPressureTypeLisd * PressureStatsSummaryIn);
  SummariesStatisticsPressureType(
    NaturalType * nIn,
    SummaryStatisticsPressureTypeLisd * PressureStatsSummaryIn);
  ~SummariesStatisticsPressureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsPressureTypeLisd * getPressureStatsSummary();
  void setPressureStatsSummary(SummaryStatisticsPressureTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsPressureTypeLisd * PressureStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsSpeedType :
  public XmlTypeBase
{
public:
  SummariesStatisticsSpeedType();
  SummariesStatisticsSpeedType(
    SummaryStatisticsSpeedTypeLisd * SpeedStatsSummaryIn);
  SummariesStatisticsSpeedType(
    NaturalType * nIn,
    SummaryStatisticsSpeedTypeLisd * SpeedStatsSummaryIn);
  ~SummariesStatisticsSpeedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsSpeedTypeLisd * getSpeedStatsSummary();
  void setSpeedStatsSummary(SummaryStatisticsSpeedTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsSpeedTypeLisd * SpeedStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsTemperatureType :
  public XmlTypeBase
{
public:
  SummariesStatisticsTemperatureType();
  SummariesStatisticsTemperatureType(
    SummaryStatisticsTemperatureTypeLisd * TemperatureStatsSummaryIn);
  SummariesStatisticsTemperatureType(
    NaturalType * nIn,
    SummaryStatisticsTemperatureTypeLisd * TemperatureStatsSummaryIn);
  ~SummariesStatisticsTemperatureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsTemperatureTypeLisd * getTemperatureStatsSummary();
  void setTemperatureStatsSummary(SummaryStatisticsTemperatureTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsTemperatureTypeLisd * TemperatureStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsTimeType :
  public XmlTypeBase
{
public:
  SummariesStatisticsTimeType();
  SummariesStatisticsTimeType(
    SummaryStatisticsTimeTypeLisd * TimeStatsSummaryIn);
  SummariesStatisticsTimeType(
    NaturalType * nIn,
    SummaryStatisticsTimeTypeLisd * TimeStatsSummaryIn);
  ~SummariesStatisticsTimeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsTimeTypeLisd * getTimeStatsSummary();
  void setTimeStatsSummary(SummaryStatisticsTimeTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsTimeTypeLisd * TimeStatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsType :
  public XmlTypeBase
{
public:
  SummariesStatisticsType();
  SummariesStatisticsType(
    SummaryStatisticsTypeLisd * StatsSummaryIn);
  SummariesStatisticsType(
    NaturalType * nIn,
    SummaryStatisticsTypeLisd * StatsSummaryIn);
  ~SummariesStatisticsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsTypeLisd * getStatsSummary();
  void setStatsSummary(SummaryStatisticsTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsTypeLisd * StatsSummary;
};

/* ***************************************************************** */

class SummariesStatisticsUserDefinedUnitType :
  public XmlTypeBase
{
public:
  SummariesStatisticsUserDefinedUnitType();
  SummariesStatisticsUserDefinedUnitType(
    SummaryStatisticsUserDefinedUnitTypeLisd * UserDefinedUnitStatsSummaryIn);
  SummariesStatisticsUserDefinedUnitType(
    NaturalType * nIn,
    SummaryStatisticsUserDefinedUnitTypeLisd * UserDefinedUnitStatsSummaryIn);
  ~SummariesStatisticsUserDefinedUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SummaryStatisticsUserDefinedUnitTypeLisd * getUserDefinedUnitStatsSummary();
  void setUserDefinedUnitStatsSummary(SummaryStatisticsUserDefinedUnitTypeLisd *);

protected:
  NaturalType * n;
  SummaryStatisticsUserDefinedUnitTypeLisd * UserDefinedUnitStatsSummary;
};

/* ***************************************************************** */

class SummaryStatisticsType :
  public XmlTypeBase
{
public:
  SummaryStatisticsType();
  SummaryStatisticsType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  ~SummaryStatisticsType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StatsValuesEnumType * getTypeOfSummary();
  void setTypeOfSummary(StatsValuesEnumType * TypeOfSummaryIn);
  StatsWithReferenceBaseTypeLisd * getSummaryStatsValue();
  void setSummaryStatsValue(StatsWithReferenceBaseTypeLisd *);

protected:
  AttributesType * Attributes;
  StatsValuesEnumType * TypeOfSummary;
  StatsWithReferenceBaseTypeLisd * SummaryStatsValue;
};

/* ***************************************************************** */

class SummaryStatisticsTypeLisd :
  public std::list<SummaryStatisticsType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsTypeLisd();
  SummaryStatisticsTypeLisd(
    SummaryStatisticsType * aSummaryStatisticsType);
  ~SummaryStatisticsTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsUserDefinedUnitType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsUserDefinedUnitType();
  SummaryStatisticsUserDefinedUnitType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsUserDefinedUnitType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * unitNameIn);
  ~SummaryStatisticsUserDefinedUnitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getunitName();
  void setunitName(XmlToken * unitNameIn);

protected:
  XmlToken * unitName;
};

/* ***************************************************************** */

class SummaryStatisticsUserDefinedUnitTypeLisd :
  public std::list<SummaryStatisticsUserDefinedUnitType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsUserDefinedUnitTypeLisd();
  SummaryStatisticsUserDefinedUnitTypeLisd(
    SummaryStatisticsUserDefinedUnitType * aSummaryStatisticsUserDefinedUnitType);
  ~SummaryStatisticsUserDefinedUnitTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SurfaceProfileCharacteristicStatsEvalType :
  public ProfileCharacteristicStatsEvalBaseType
{
public:
  SurfaceProfileCharacteristicStatsEvalType();
  SurfaceProfileCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * WorstPositiveDeviationStatsIn,
    StatsLinearType * WorstNegativeDeviationStatsIn,
    PointDeviationsStatsEvalType * PointDeviationsStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    CompositeSegmentsProfileStatsEvalType * CompositeSegmentsStatsIn);
  ~SurfaceProfileCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SurfaceProfileNonUniformCharacteristicStatsEvalType :
  public ProfileCharacteristicStatsEvalBaseType
{
public:
  SurfaceProfileNonUniformCharacteristicStatsEvalType();
  SurfaceProfileNonUniformCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * WorstPositiveDeviationStatsIn,
    StatsLinearType * WorstNegativeDeviationStatsIn,
    PointDeviationsStatsEvalType * PointDeviationsStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    CompositeSegmentsProfileStatsEvalType * CompositeSegmentsStatsIn);
  ~SurfaceProfileNonUniformCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SurfaceTextureCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  SurfaceTextureCharacteristicStatsEvalType();
  SurfaceTextureCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * RoughnessAverageValueStatsIn);
  ~SurfaceTextureCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsWithTolLinearType * getRoughnessAverageValueStats();
  void setRoughnessAverageValueStats(StatsWithTolLinearType * RoughnessAverageValueStatsIn);

protected:
  StatsWithTolLinearType * RoughnessAverageValueStats;
};

/* ***************************************************************** */

class SymmetryCharacteristicStatsEvalType :
  public LocationCharacteristicStatsEvalType
{
public:
  SymmetryCharacteristicStatsEvalType();
  SymmetryCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    CompositeSegmentsSymmetryStatsEvalType * CompositeSegmentsStatsIn);
  ~SymmetryCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  OneSidedCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  CompositeSegmentsSymmetryStatsEvalType * getCompositeSegmentsStats();
  void setCompositeSegmentsStats(CompositeSegmentsSymmetryStatsEvalType * CompositeSegmentsStatsIn);

protected:
  OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethod;
  CompositeSegmentsSymmetryStatsEvalType * CompositeSegmentsStats;
};

/* ***************************************************************** */

class ThicknessCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  ThicknessCharacteristicStatsEvalType();
  ThicknessCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~ThicknessCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ThreadCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  ThreadCharacteristicStatsEvalType();
  ThreadCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * ThreadStatsIn,
    StatsLinearType * PitchDiameterStatsIn,
    StatsLinearType * FunctionalSizeStatsIn);
  ~ThreadCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsPassFailType * getThreadStats();
  void setThreadStats(StatsPassFailType * ThreadStatsIn);
  StatsLinearType * getPitchDiameterStats();
  void setPitchDiameterStats(StatsLinearType * PitchDiameterStatsIn);
  StatsLinearType * getFunctionalSizeStats();
  void setFunctionalSizeStats(StatsLinearType * FunctionalSizeStatsIn);

protected:
  StatsPassFailType * ThreadStats;
  StatsLinearType * PitchDiameterStats;
  StatsLinearType * FunctionalSizeStats;
};

/* ***************************************************************** */

class TotalRunoutCharacteristicStatsEvalType :
  public RunoutCharacteristicStatsEvalBaseType
{
public:
  TotalRunoutCharacteristicStatsEvalType();
  TotalRunoutCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsPassFailType * DatumsOkStatsIn);
  ~TotalRunoutCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class UserDefinedAngularCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedAngularCharacteristicStatsEvalType();
  UserDefinedAngularCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedAngularCharacteristicStatsEvalTypeChoicePair * UserDefinedAngularCharacteristicStatsEvalTypePairIn);
  ~UserDefinedAngularCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedAngularCharacteristicStatsEvalTypeChoicePair * getUserDefinedAngularCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedAngularCharacteristicStatsEvalTypeChoicePair(UserDefinedAngularCharacteristicStatsEvalTypeChoicePair * UserDefinedAngularCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedAngularCharacteristicStatsEvalTypeChoicePair * UserDefinedAngularCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedAngularCharacteristicStatsEvalTypeVal
{
  UserDefinedAngu_1116_Type * UserDefinedAngu_1116;
  UserDefinedAngu_1117_Type * UserDefinedAngu_1117;
  StatsAngularType * MinValueStats;
  UserDefinedAngu_1118_Type * UserDefinedAngu_1118;
  UserDefinedAngu_1119_Type * UserDefinedAngu_1119;
  StatsAngularType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedAngularCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedAngu_1116E,
    UserDefinedAngu_1117E,
    MinValueStatsE,
    UserDefinedAngu_1118E,
    UserDefinedAngu_1119E,
    MinDeviationStatsE };
  UserDefinedAngularCharacteristicStatsEvalTypeChoicePair();
  UserDefinedAngularCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedAngularCharacteristicStatsEvalTypeTypeIn,
    UserDefinedAngularCharacteristicStatsEvalTypeVal * UserDefinedAngularCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedAngularCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedAngularCharacteristicStatsEvalTypeType;
  UserDefinedAngularCharacteristicStatsEvalTypeVal * UserDefinedAngularCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedAreaCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedAreaCharacteristicStatsEvalType();
  UserDefinedAreaCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedAreaCharacteristicStatsEvalTypeChoicePair * UserDefinedAreaCharacteristicStatsEvalTypePairIn);
  ~UserDefinedAreaCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedAreaCharacteristicStatsEvalTypeChoicePair * getUserDefinedAreaCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedAreaCharacteristicStatsEvalTypeChoicePair(UserDefinedAreaCharacteristicStatsEvalTypeChoicePair * UserDefinedAreaCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedAreaCharacteristicStatsEvalTypeChoicePair * UserDefinedAreaCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedAreaCharacteristicStatsEvalTypeVal
{
  UserDefinedArea_1120_Type * UserDefinedArea_1120;
  UserDefinedArea_1121_Type * UserDefinedArea_1121;
  StatsAreaType * MinValueStats;
  UserDefinedArea_1122_Type * UserDefinedArea_1122;
  UserDefinedArea_1123_Type * UserDefinedArea_1123;
  StatsAreaType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedAreaCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedArea_1120E,
    UserDefinedArea_1121E,
    MinValueStatsE,
    UserDefinedArea_1122E,
    UserDefinedArea_1123E,
    MinDeviationStatsE };
  UserDefinedAreaCharacteristicStatsEvalTypeChoicePair();
  UserDefinedAreaCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedAreaCharacteristicStatsEvalTypeTypeIn,
    UserDefinedAreaCharacteristicStatsEvalTypeVal * UserDefinedAreaCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedAreaCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedAreaCharacteristicStatsEvalTypeType;
  UserDefinedAreaCharacteristicStatsEvalTypeVal * UserDefinedAreaCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedAttributeCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedAttributeCharacteristicStatsEvalType();
  UserDefinedAttributeCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * AttributeStatsIn);
  ~UserDefinedAttributeCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsPassFailType * getAttributeStats();
  void setAttributeStats(StatsPassFailType * AttributeStatsIn);

protected:
  StatsPassFailType * AttributeStats;
};

/* ***************************************************************** */

class UserDefinedForceCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedForceCharacteristicStatsEvalType();
  UserDefinedForceCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedForceCharacteristicStatsEvalTypeChoicePair * UserDefinedForceCharacteristicStatsEvalTypePairIn);
  ~UserDefinedForceCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedForceCharacteristicStatsEvalTypeChoicePair * getUserDefinedForceCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedForceCharacteristicStatsEvalTypeChoicePair(UserDefinedForceCharacteristicStatsEvalTypeChoicePair * UserDefinedForceCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedForceCharacteristicStatsEvalTypeChoicePair * UserDefinedForceCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedForceCharacteristicStatsEvalTypeVal
{
  UserDefinedForc_1124_Type * UserDefinedForc_1124;
  UserDefinedForc_1125_Type * UserDefinedForc_1125;
  StatsForceType * MinValueStats;
  UserDefinedForc_1126_Type * UserDefinedForc_1126;
  UserDefinedForc_1127_Type * UserDefinedForc_1127;
  StatsForceType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedForceCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedForc_1124E,
    UserDefinedForc_1125E,
    MinValueStatsE,
    UserDefinedForc_1126E,
    UserDefinedForc_1127E,
    MinDeviationStatsE };
  UserDefinedForceCharacteristicStatsEvalTypeChoicePair();
  UserDefinedForceCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedForceCharacteristicStatsEvalTypeTypeIn,
    UserDefinedForceCharacteristicStatsEvalTypeVal * UserDefinedForceCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedForceCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedForceCharacteristicStatsEvalTypeType;
  UserDefinedForceCharacteristicStatsEvalTypeVal * UserDefinedForceCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedLinearCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedLinearCharacteristicStatsEvalType();
  UserDefinedLinearCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedLinearCharacteristicStatsEvalTypeChoicePair * UserDefinedLinearCharacteristicStatsEvalTypePairIn);
  ~UserDefinedLinearCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedLinearCharacteristicStatsEvalTypeChoicePair * getUserDefinedLinearCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedLinearCharacteristicStatsEvalTypeChoicePair(UserDefinedLinearCharacteristicStatsEvalTypeChoicePair * UserDefinedLinearCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedLinearCharacteristicStatsEvalTypeChoicePair * UserDefinedLinearCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedLinearCharacteristicStatsEvalTypeVal
{
  UserDefinedLine_1128_Type * UserDefinedLine_1128;
  UserDefinedLine_1129_Type * UserDefinedLine_1129;
  StatsLinearType * MinValueStats;
  UserDefinedLine_1130_Type * UserDefinedLine_1130;
  UserDefinedLine_1131_Type * UserDefinedLine_1131;
  StatsLinearType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedLinearCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedLine_1128E,
    UserDefinedLine_1129E,
    MinValueStatsE,
    UserDefinedLine_1130E,
    UserDefinedLine_1131E,
    MinDeviationStatsE };
  UserDefinedLinearCharacteristicStatsEvalTypeChoicePair();
  UserDefinedLinearCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedLinearCharacteristicStatsEvalTypeTypeIn,
    UserDefinedLinearCharacteristicStatsEvalTypeVal * UserDefinedLinearCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedLinearCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedLinearCharacteristicStatsEvalTypeType;
  UserDefinedLinearCharacteristicStatsEvalTypeVal * UserDefinedLinearCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedMassCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedMassCharacteristicStatsEvalType();
  UserDefinedMassCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedMassCharacteristicStatsEvalTypeChoicePair * UserDefinedMassCharacteristicStatsEvalTypePairIn);
  ~UserDefinedMassCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedMassCharacteristicStatsEvalTypeChoicePair * getUserDefinedMassCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedMassCharacteristicStatsEvalTypeChoicePair(UserDefinedMassCharacteristicStatsEvalTypeChoicePair * UserDefinedMassCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedMassCharacteristicStatsEvalTypeChoicePair * UserDefinedMassCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedMassCharacteristicStatsEvalTypeVal
{
  UserDefinedMass_1132_Type * UserDefinedMass_1132;
  UserDefinedMass_1133_Type * UserDefinedMass_1133;
  StatsMassType * MinValueStats;
  UserDefinedMass_1134_Type * UserDefinedMass_1134;
  UserDefinedMass_1135_Type * UserDefinedMass_1135;
  StatsMassType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedMassCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedMass_1132E,
    UserDefinedMass_1133E,
    MinValueStatsE,
    UserDefinedMass_1134E,
    UserDefinedMass_1135E,
    MinDeviationStatsE };
  UserDefinedMassCharacteristicStatsEvalTypeChoicePair();
  UserDefinedMassCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedMassCharacteristicStatsEvalTypeTypeIn,
    UserDefinedMassCharacteristicStatsEvalTypeVal * UserDefinedMassCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedMassCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedMassCharacteristicStatsEvalTypeType;
  UserDefinedMassCharacteristicStatsEvalTypeVal * UserDefinedMassCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedPressureCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedPressureCharacteristicStatsEvalType();
  UserDefinedPressureCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedPressureCharacteristicStatsEvalTypeChoicePair * UserDefinedPressureCharacteristicStatsEvalTypePairIn);
  ~UserDefinedPressureCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedPressureCharacteristicStatsEvalTypeChoicePair * getUserDefinedPressureCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedPressureCharacteristicStatsEvalTypeChoicePair(UserDefinedPressureCharacteristicStatsEvalTypeChoicePair * UserDefinedPressureCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedPressureCharacteristicStatsEvalTypeChoicePair * UserDefinedPressureCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedPressureCharacteristicStatsEvalTypeVal
{
  UserDefinedPres_1136_Type * UserDefinedPres_1136;
  UserDefinedPres_1137_Type * UserDefinedPres_1137;
  StatsPressureType * MinValueStats;
  UserDefinedPres_1138_Type * UserDefinedPres_1138;
  UserDefinedPres_1139_Type * UserDefinedPres_1139;
  StatsPressureType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedPressureCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedPres_1136E,
    UserDefinedPres_1137E,
    MinValueStatsE,
    UserDefinedPres_1138E,
    UserDefinedPres_1139E,
    MinDeviationStatsE };
  UserDefinedPressureCharacteristicStatsEvalTypeChoicePair();
  UserDefinedPressureCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedPressureCharacteristicStatsEvalTypeTypeIn,
    UserDefinedPressureCharacteristicStatsEvalTypeVal * UserDefinedPressureCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedPressureCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedPressureCharacteristicStatsEvalTypeType;
  UserDefinedPressureCharacteristicStatsEvalTypeVal * UserDefinedPressureCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedSpeedCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedSpeedCharacteristicStatsEvalType();
  UserDefinedSpeedCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair * UserDefinedSpeedCharacteristicStatsEvalTypePairIn);
  ~UserDefinedSpeedCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair * getUserDefinedSpeedCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedSpeedCharacteristicStatsEvalTypeChoicePair(UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair * UserDefinedSpeedCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair * UserDefinedSpeedCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedSpeedCharacteristicStatsEvalTypeVal
{
  UserDefinedSpee_1140_Type * UserDefinedSpee_1140;
  UserDefinedSpee_1141_Type * UserDefinedSpee_1141;
  StatsSpeedType * MinValueStats;
  UserDefinedSpee_1142_Type * UserDefinedSpee_1142;
  UserDefinedSpee_1143_Type * UserDefinedSpee_1143;
  StatsSpeedType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedSpee_1140E,
    UserDefinedSpee_1141E,
    MinValueStatsE,
    UserDefinedSpee_1142E,
    UserDefinedSpee_1143E,
    MinDeviationStatsE };
  UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair();
  UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedSpeedCharacteristicStatsEvalTypeTypeIn,
    UserDefinedSpeedCharacteristicStatsEvalTypeVal * UserDefinedSpeedCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedSpeedCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedSpeedCharacteristicStatsEvalTypeType;
  UserDefinedSpeedCharacteristicStatsEvalTypeVal * UserDefinedSpeedCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedTemperatureCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedTemperatureCharacteristicStatsEvalType();
  UserDefinedTemperatureCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair * UserDefinedTemperatureCharacteristicStatsEvalTypePairIn);
  ~UserDefinedTemperatureCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair * getUserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair(UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair * UserDefinedTemperatureCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair * UserDefinedTemperatureCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedTemperatureCharacteristicStatsEvalTypeVal
{
  UserDefinedTemp_1144_Type * UserDefinedTemp_1144;
  UserDefinedTemp_1145_Type * UserDefinedTemp_1145;
  StatsTemperatureType * MinValueStats;
  UserDefinedTemp_1146_Type * UserDefinedTemp_1146;
  UserDefinedTemp_1147_Type * UserDefinedTemp_1147;
  StatsTemperatureType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedTemp_1144E,
    UserDefinedTemp_1145E,
    MinValueStatsE,
    UserDefinedTemp_1146E,
    UserDefinedTemp_1147E,
    MinDeviationStatsE };
  UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair();
  UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedTemperatureCharacteristicStatsEvalTypeTypeIn,
    UserDefinedTemperatureCharacteristicStatsEvalTypeVal * UserDefinedTemperatureCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedTemperatureCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedTemperatureCharacteristicStatsEvalTypeType;
  UserDefinedTemperatureCharacteristicStatsEvalTypeVal * UserDefinedTemperatureCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedTimeCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedTimeCharacteristicStatsEvalType();
  UserDefinedTimeCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedTimeCharacteristicStatsEvalTypeChoicePair * UserDefinedTimeCharacteristicStatsEvalTypePairIn);
  ~UserDefinedTimeCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedTimeCharacteristicStatsEvalTypeChoicePair * getUserDefinedTimeCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedTimeCharacteristicStatsEvalTypeChoicePair(UserDefinedTimeCharacteristicStatsEvalTypeChoicePair * UserDefinedTimeCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedTimeCharacteristicStatsEvalTypeChoicePair * UserDefinedTimeCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedTimeCharacteristicStatsEvalTypeVal
{
  UserDefinedTime_1148_Type * UserDefinedTime_1148;
  UserDefinedTime_1149_Type * UserDefinedTime_1149;
  StatsTimeType * MinValueStats;
  UserDefinedTime_1150_Type * UserDefinedTime_1150;
  UserDefinedTime_1151_Type * UserDefinedTime_1151;
  StatsTimeType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedTimeCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedTime_1148E,
    UserDefinedTime_1149E,
    MinValueStatsE,
    UserDefinedTime_1150E,
    UserDefinedTime_1151E,
    MinDeviationStatsE };
  UserDefinedTimeCharacteristicStatsEvalTypeChoicePair();
  UserDefinedTimeCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedTimeCharacteristicStatsEvalTypeTypeIn,
    UserDefinedTimeCharacteristicStatsEvalTypeVal * UserDefinedTimeCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedTimeCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedTimeCharacteristicStatsEvalTypeType;
  UserDefinedTimeCharacteristicStatsEvalTypeVal * UserDefinedTimeCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class UserDefinedUnitCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  UserDefinedUnitCharacteristicStatsEvalType();
  UserDefinedUnitCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    UserDefinedUnitCharacteristicStatsEvalTypeChoicePair * UserDefinedUnitCharacteristicStatsEvalTypePairIn);
  ~UserDefinedUnitCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  UserDefinedUnitCharacteristicStatsEvalTypeChoicePair * getUserDefinedUnitCharacteristicStatsEvalTypeChoicePair();
  void setUserDefinedUnitCharacteristicStatsEvalTypeChoicePair(UserDefinedUnitCharacteristicStatsEvalTypeChoicePair * UserDefinedUnitCharacteristicStatsEvalTypePairIn);

protected:
  UserDefinedUnitCharacteristicStatsEvalTypeChoicePair * UserDefinedUnitCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union UserDefinedUnitCharacteristicStatsEvalTypeVal
{
  UserDefinedUnit_1152_Type * UserDefinedUnit_1152;
  UserDefinedUnit_1153_Type * UserDefinedUnit_1153;
  StatsUserDefinedUnitType * MinValueStats;
  UserDefinedUnit_1154_Type * UserDefinedUnit_1154;
  UserDefinedUnit_1155_Type * UserDefinedUnit_1155;
  StatsUserDefinedUnitType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedUnitCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedUnit_1152E,
    UserDefinedUnit_1153E,
    MinValueStatsE,
    UserDefinedUnit_1154E,
    UserDefinedUnit_1155E,
    MinDeviationStatsE };
  UserDefinedUnitCharacteristicStatsEvalTypeChoicePair();
  UserDefinedUnitCharacteristicStatsEvalTypeChoicePair(
    whichOne UserDefinedUnitCharacteristicStatsEvalTypeTypeIn,
    UserDefinedUnitCharacteristicStatsEvalTypeVal * UserDefinedUnitCharacteristicStatsEvalTypeValueIn);
  ~UserDefinedUnitCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedUnitCharacteristicStatsEvalTypeType;
  UserDefinedUnitCharacteristicStatsEvalTypeVal * UserDefinedUnitCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class WeldCharacteristicStatsEvalBaseType :
  public CharacteristicStatsEvalBaseType
{
public:
  WeldCharacteristicStatsEvalBaseType();
  WeldCharacteristicStatsEvalBaseType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  virtual ~WeldCharacteristicStatsEvalBaseType();
  void printSelf(FILE * outFile);

  StatsPassFailType * getWeldStats();
  void setWeldStats(StatsPassFailType * WeldStatsIn);

protected:
  StatsPassFailType * WeldStats;
};

/* ***************************************************************** */

class WeldCompoundCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldCompoundCharacteristicStatsEvalType();
  WeldCompoundCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldCompoundCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldEdgeCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldEdgeCharacteristicStatsEvalType();
  WeldEdgeCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldEdgeCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldFilletCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldFilletCharacteristicStatsEvalType();
  WeldFilletCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldFilletCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldFlareBevelCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldFlareBevelCharacteristicStatsEvalType();
  WeldFlareBevelCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldFlareBevelCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldFlareVCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldFlareVCharacteristicStatsEvalType();
  WeldFlareVCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldFlareVCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldJCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldJCharacteristicStatsEvalType();
  WeldJCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldJCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldPlugCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldPlugCharacteristicStatsEvalType();
  WeldPlugCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldPlugCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldScarfCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldScarfCharacteristicStatsEvalType();
  WeldScarfCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldScarfCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldSeamCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldSeamCharacteristicStatsEvalType();
  WeldSeamCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldSeamCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldSlotCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldSlotCharacteristicStatsEvalType();
  WeldSlotCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldSlotCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldSpotCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldSpotCharacteristicStatsEvalType();
  WeldSpotCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldSpotCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldSquareCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldSquareCharacteristicStatsEvalType();
  WeldSquareCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldSquareCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldStudCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldStudCharacteristicStatsEvalType();
  WeldStudCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldStudCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldSurfacingCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldSurfacingCharacteristicStatsEvalType();
  WeldSurfacingCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldSurfacingCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldUCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldUCharacteristicStatsEvalType();
  WeldUCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldUCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldVCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldVCharacteristicStatsEvalType();
  WeldVCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldVCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WidthCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  WidthCharacteristicStatsEvalType();
  WidthCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~WidthCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AngularCharacte_1100_Type :
  public XmlTypeBase
{
public:
  AngularCharacte_1100_Type();
  AngularCharacte_1100_Type(
    StatsWithTolAngularType * ValueStatsIn,
    StatsAngularType * MaxValueStatsIn,
    StatsAngularType * MinValueStatsIn);
  ~AngularCharacte_1100_Type();
  void printSelf(FILE * outFile);

  StatsWithTolAngularType * getValueStats();
  void setValueStats(StatsWithTolAngularType * ValueStatsIn);
  StatsAngularType * getMaxValueStats();
  void setMaxValueStats(StatsAngularType * MaxValueStatsIn);
  StatsAngularType * getMinValueStats();
  void setMinValueStats(StatsAngularType * MinValueStatsIn);

protected:
  StatsWithTolAngularType * ValueStats;
  StatsAngularType * MaxValueStats;
  StatsAngularType * MinValueStats;
};

/* ***************************************************************** */

class AngularCharacte_1101_Type :
  public XmlTypeBase
{
public:
  AngularCharacte_1101_Type();
  AngularCharacte_1101_Type(
    StatsAngularType * MaxValueStatsIn,
    StatsAngularType * MinValueStatsIn);
  ~AngularCharacte_1101_Type();
  void printSelf(FILE * outFile);

  StatsAngularType * getMaxValueStats();
  void setMaxValueStats(StatsAngularType * MaxValueStatsIn);
  StatsAngularType * getMinValueStats();
  void setMinValueStats(StatsAngularType * MinValueStatsIn);

protected:
  StatsAngularType * MaxValueStats;
  StatsAngularType * MinValueStats;
};

/* ***************************************************************** */

class AngularCharacte_1102_Type :
  public XmlTypeBase
{
public:
  AngularCharacte_1102_Type();
  AngularCharacte_1102_Type(
    StatsWithTolAngularType * DeviationStatsIn,
    StatsAngularType * MaxDeviationStatsIn,
    StatsAngularType * MinDeviationStatsIn);
  ~AngularCharacte_1102_Type();
  void printSelf(FILE * outFile);

  StatsWithTolAngularType * getDeviationStats();
  void setDeviationStats(StatsWithTolAngularType * DeviationStatsIn);
  StatsAngularType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsAngularType * MaxDeviationStatsIn);
  StatsAngularType * getMinDeviationStats();
  void setMinDeviationStats(StatsAngularType * MinDeviationStatsIn);

protected:
  StatsWithTolAngularType * DeviationStats;
  StatsAngularType * MaxDeviationStats;
  StatsAngularType * MinDeviationStats;
};

/* ***************************************************************** */

class AngularCharacte_1103_Type :
  public XmlTypeBase
{
public:
  AngularCharacte_1103_Type();
  AngularCharacte_1103_Type(
    StatsAngularType * MaxDeviationStatsIn,
    StatsAngularType * MinDeviationStatsIn);
  ~AngularCharacte_1103_Type();
  void printSelf(FILE * outFile);

  StatsAngularType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsAngularType * MaxDeviationStatsIn);
  StatsAngularType * getMinDeviationStats();
  void setMinDeviationStats(StatsAngularType * MinDeviationStatsIn);

protected:
  StatsAngularType * MaxDeviationStats;
  StatsAngularType * MinDeviationStats;
};

/* ***************************************************************** */

class AssignableCause_1104_Type :
  public XmlTypeBase
{
public:
  AssignableCause_1104_Type();
  AssignableCause_1104_Type(
    AssignableCause_1104_TypeChoicePair * AssignableCause_1104_TypePairIn);
  ~AssignableCause_1104_Type();
  void printSelf(FILE * outFile);

  AssignableCause_1104_TypeChoicePair * getAssignableCause_1104_TypePair();
  void setAssignableCause_1104_TypePair(AssignableCause_1104_TypeChoicePair * AssignableCause_1104_TypePairIn);

protected:
  AssignableCause_1104_TypeChoicePair * AssignableCause_1104_TypePair;
};

/* ***************************************************************** */

union AssignableCause_1104_TypeVal
{
  XmlString * Description;
  AssignableCauseEnumType * AssignableCauseEnum;
};

/* ***************************************************************** */

class AssignableCause_1104_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DescriptionE,
    AssignableCauseEnumE };
  AssignableCause_1104_TypeChoicePair();
  AssignableCause_1104_TypeChoicePair(
    whichOne AssignableCause_1104_TypeTypeIn,
    AssignableCause_1104_TypeVal * AssignableCause_1104_TypeValueIn);
  ~AssignableCause_1104_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AssignableCause_1104_TypeType;
  AssignableCause_1104_TypeVal * AssignableCause_1104_TypeValue;
};

/* ***************************************************************** */

class CharacteristicS_1105_Type :
  public XmlTypeBase
{
public:
  CharacteristicS_1105_Type();
  CharacteristicS_1105_Type(
    CharacteristicS_1105_TypeChoicePair * CharacteristicS_1105_TypePairIn);
  ~CharacteristicS_1105_Type();
  void printSelf(FILE * outFile);

  CharacteristicS_1105_TypeChoicePair * getCharacteristicS_1105_TypePair();
  void setCharacteristicS_1105_TypePair(CharacteristicS_1105_TypeChoicePair * CharacteristicS_1105_TypePairIn);

protected:
  CharacteristicS_1105_TypeChoicePair * CharacteristicS_1105_TypePair;
};

/* ***************************************************************** */

union CharacteristicS_1105_TypeVal
{
  QIFReferenceType * SoftwareId;
  QIFReferenceType * StandardId;
  QIFReferenceType * AlgorithmId;
};

/* ***************************************************************** */

class CharacteristicS_1105_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SoftwareIdE,
    StandardIdE,
    AlgorithmIdE };
  CharacteristicS_1105_TypeChoicePair();
  CharacteristicS_1105_TypeChoicePair(
    whichOne CharacteristicS_1105_TypeTypeIn,
    CharacteristicS_1105_TypeVal * CharacteristicS_1105_TypeValueIn);
  ~CharacteristicS_1105_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CharacteristicS_1105_TypeType;
  CharacteristicS_1105_TypeVal * CharacteristicS_1105_TypeValue;
};

/* ***************************************************************** */

class CharacteristicS_1106_Type :
  public XmlTypeBase
{
public:
  CharacteristicS_1106_Type();
  CharacteristicS_1106_Type(
    CharacteristicS_1106_TypeChoicePair * CharacteristicS_1106_TypePairIn);
  ~CharacteristicS_1106_Type();
  void printSelf(FILE * outFile);

  CharacteristicS_1106_TypeChoicePair * getCharacteristicS_1106_TypePair();
  void setCharacteristicS_1106_TypePair(CharacteristicS_1106_TypeChoicePair * CharacteristicS_1106_TypePairIn);

protected:
  CharacteristicS_1106_TypeChoicePair * CharacteristicS_1106_TypePair;
};

/* ***************************************************************** */

union CharacteristicS_1106_TypeVal
{
  CharacteristicS_1156_Type * CharacteristicS_1156;
  CharacteristicS_1157_Type * CharacteristicS_1157;
};

/* ***************************************************************** */

class CharacteristicS_1106_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CharacteristicS_1156E,
    CharacteristicS_1157E };
  CharacteristicS_1106_TypeChoicePair();
  CharacteristicS_1106_TypeChoicePair(
    whichOne CharacteristicS_1106_TypeTypeIn,
    CharacteristicS_1106_TypeVal * CharacteristicS_1106_TypeValueIn);
  ~CharacteristicS_1106_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CharacteristicS_1106_TypeType;
  CharacteristicS_1106_TypeVal * CharacteristicS_1106_TypeValue;
};

/* ***************************************************************** */

class CorrectiveActio_1107_Type :
  public XmlTypeBase
{
public:
  CorrectiveActio_1107_Type();
  CorrectiveActio_1107_Type(
    CorrectiveActio_1107_TypeChoicePair * CorrectiveActio_1107_TypePairIn);
  ~CorrectiveActio_1107_Type();
  void printSelf(FILE * outFile);

  CorrectiveActio_1107_TypeChoicePair * getCorrectiveActio_1107_TypePair();
  void setCorrectiveActio_1107_TypePair(CorrectiveActio_1107_TypeChoicePair * CorrectiveActio_1107_TypePairIn);

protected:
  CorrectiveActio_1107_TypeChoicePair * CorrectiveActio_1107_TypePair;
};

/* ***************************************************************** */

union CorrectiveActio_1107_TypeVal
{
  XmlString * ActionToTake;
  ActionToTakeEnumType * ActionToTakeEnum;
};

/* ***************************************************************** */

class CorrectiveActio_1107_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ActionToTakeE,
    ActionToTakeEnumE };
  CorrectiveActio_1107_TypeChoicePair();
  CorrectiveActio_1107_TypeChoicePair(
    whichOne CorrectiveActio_1107_TypeTypeIn,
    CorrectiveActio_1107_TypeVal * CorrectiveActio_1107_TypeValueIn);
  ~CorrectiveActio_1107_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CorrectiveActio_1107_TypeType;
  CorrectiveActio_1107_TypeVal * CorrectiveActio_1107_TypeValue;
};

/* ***************************************************************** */

class CriterionDecima_1108_Type :
  public XmlTypeBase
{
public:
  CriterionDecima_1108_Type();
  CriterionDecima_1108_Type(
    LimitingNumberType * NumberAllowedExceptionsIn,
    XmlDecimal * ExtremeLimitIn);
  ~CriterionDecima_1108_Type();
  void printSelf(FILE * outFile);

  LimitingNumberType * getNumberAllowedExceptions();
  void setNumberAllowedExceptions(LimitingNumberType * NumberAllowedExceptionsIn);
  XmlDecimal * getExtremeLimit();
  void setExtremeLimit(XmlDecimal * ExtremeLimitIn);

protected:
  LimitingNumberType * NumberAllowedExceptions;
  XmlDecimal * ExtremeLimit;
};

/* ***************************************************************** */

class CriterionIntege_1109_Type :
  public XmlTypeBase
{
public:
  CriterionIntege_1109_Type();
  CriterionIntege_1109_Type(
    LimitingNumberType * NumberAllowedExceptionsIn,
    XmlPositiveInteger * ExtremeLimitIn);
  ~CriterionIntege_1109_Type();
  void printSelf(FILE * outFile);

  LimitingNumberType * getNumberAllowedExceptions();
  void setNumberAllowedExceptions(LimitingNumberType * NumberAllowedExceptionsIn);
  XmlPositiveInteger * getExtremeLimit();
  void setExtremeLimit(XmlPositiveInteger * ExtremeLimitIn);

protected:
  LimitingNumberType * NumberAllowedExceptions;
  XmlPositiveInteger * ExtremeLimit;
};

/* ***************************************************************** */

class LinearCharacter_1110_Type :
  public XmlTypeBase
{
public:
  LinearCharacter_1110_Type();
  LinearCharacter_1110_Type(
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~LinearCharacter_1110_Type();
  void printSelf(FILE * outFile);

  StatsWithTolLinearType * getValueStats();
  void setValueStats(StatsWithTolLinearType * ValueStatsIn);
  StatsLinearType * getMaxValueStats();
  void setMaxValueStats(StatsLinearType * MaxValueStatsIn);
  StatsLinearType * getMinValueStats();
  void setMinValueStats(StatsLinearType * MinValueStatsIn);

protected:
  StatsWithTolLinearType * ValueStats;
  StatsLinearType * MaxValueStats;
  StatsLinearType * MinValueStats;
};

/* ***************************************************************** */

class LinearCharacter_1111_Type :
  public XmlTypeBase
{
public:
  LinearCharacter_1111_Type();
  LinearCharacter_1111_Type(
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~LinearCharacter_1111_Type();
  void printSelf(FILE * outFile);

  StatsLinearType * getMaxValueStats();
  void setMaxValueStats(StatsLinearType * MaxValueStatsIn);
  StatsLinearType * getMinValueStats();
  void setMinValueStats(StatsLinearType * MinValueStatsIn);

protected:
  StatsLinearType * MaxValueStats;
  StatsLinearType * MinValueStats;
};

/* ***************************************************************** */

class LinearCharacter_1112_Type :
  public XmlTypeBase
{
public:
  LinearCharacter_1112_Type();
  LinearCharacter_1112_Type(
    StatsWithTolLinearType * DeviationStatsIn,
    StatsLinearType * MaxDeviationStatsIn,
    StatsLinearType * MinDeviationStatsIn);
  ~LinearCharacter_1112_Type();
  void printSelf(FILE * outFile);

  StatsWithTolLinearType * getDeviationStats();
  void setDeviationStats(StatsWithTolLinearType * DeviationStatsIn);
  StatsLinearType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsLinearType * MaxDeviationStatsIn);
  StatsLinearType * getMinDeviationStats();
  void setMinDeviationStats(StatsLinearType * MinDeviationStatsIn);

protected:
  StatsWithTolLinearType * DeviationStats;
  StatsLinearType * MaxDeviationStats;
  StatsLinearType * MinDeviationStats;
};

/* ***************************************************************** */

class LinearCharacter_1113_Type :
  public XmlTypeBase
{
public:
  LinearCharacter_1113_Type();
  LinearCharacter_1113_Type(
    StatsLinearType * MaxDeviationStatsIn,
    StatsLinearType * MinDeviationStatsIn);
  ~LinearCharacter_1113_Type();
  void printSelf(FILE * outFile);

  StatsLinearType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsLinearType * MaxDeviationStatsIn);
  StatsLinearType * getMinDeviationStats();
  void setMinDeviationStats(StatsLinearType * MinDeviationStatsIn);

protected:
  StatsLinearType * MaxDeviationStats;
  StatsLinearType * MinDeviationStats;
};

/* ***************************************************************** */

class SamplingMethodT_1114_Type :
  public XmlTypeBase
{
public:
  SamplingMethodT_1114_Type();
  SamplingMethodT_1114_Type(
    SamplingMethodT_1114_TypeChoicePair * SamplingMethodT_1114_TypePairIn);
  ~SamplingMethodT_1114_Type();
  void printSelf(FILE * outFile);

  SamplingMethodT_1114_TypeChoicePair * getSamplingMethodT_1114_TypePair();
  void setSamplingMethodT_1114_TypePair(SamplingMethodT_1114_TypeChoicePair * SamplingMethodT_1114_TypePairIn);

protected:
  SamplingMethodT_1114_TypeChoicePair * SamplingMethodT_1114_TypePair;
};

/* ***************************************************************** */

union SamplingMethodT_1114_TypeVal
{
  XmlPositiveInteger * SamplingPeriod;
  SamplingMethodT_1158_Type * SamplingMethodT_1158;
};

/* ***************************************************************** */

class SamplingMethodT_1114_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SamplingPeriodE,
    SamplingMethodT_1158E };
  SamplingMethodT_1114_TypeChoicePair();
  SamplingMethodT_1114_TypeChoicePair(
    whichOne SamplingMethodT_1114_TypeTypeIn,
    SamplingMethodT_1114_TypeVal * SamplingMethodT_1114_TypeValueIn);
  ~SamplingMethodT_1114_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SamplingMethodT_1114_TypeType;
  SamplingMethodT_1114_TypeVal * SamplingMethodT_1114_TypeValue;
};

/* ***************************************************************** */

class StudyIssueType_1115_Type :
  public XmlTypeBase
{
public:
  StudyIssueType_1115_Type();
  StudyIssueType_1115_Type(
    StudyIssueType_1115_TypeChoicePair * StudyIssueType_1115_TypePairIn);
  ~StudyIssueType_1115_Type();
  void printSelf(FILE * outFile);

  StudyIssueType_1115_TypeChoicePair * getStudyIssueType_1115_TypePair();
  void setStudyIssueType_1115_TypePair(StudyIssueType_1115_TypeChoicePair * StudyIssueType_1115_TypePairIn);

protected:
  StudyIssueType_1115_TypeChoicePair * StudyIssueType_1115_TypePair;
};

/* ***************************************************************** */

union StudyIssueType_1115_TypeVal
{
  ArrayReferenceType * CharacteristicMeasurementIds;
  ArrayReferenceType * SubgroupIds;
};

/* ***************************************************************** */

class StudyIssueType_1115_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CharacteristicMeasurementIdsE,
    SubgroupIdsE };
  StudyIssueType_1115_TypeChoicePair();
  StudyIssueType_1115_TypeChoicePair(
    whichOne StudyIssueType_1115_TypeTypeIn,
    StudyIssueType_1115_TypeVal * StudyIssueType_1115_TypeValueIn);
  ~StudyIssueType_1115_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StudyIssueType_1115_TypeType;
  StudyIssueType_1115_TypeVal * StudyIssueType_1115_TypeValue;
};

/* ***************************************************************** */

class UserDefinedAngu_1116_Type :
  public XmlTypeBase
{
public:
  UserDefinedAngu_1116_Type();
  UserDefinedAngu_1116_Type(
    StatsWithTolAngularType * ValueStatsIn,
    StatsAngularType * MaxValueStatsIn,
    StatsAngularType * MinValueStatsIn);
  ~UserDefinedAngu_1116_Type();
  void printSelf(FILE * outFile);

  StatsWithTolAngularType * getValueStats();
  void setValueStats(StatsWithTolAngularType * ValueStatsIn);
  StatsAngularType * getMaxValueStats();
  void setMaxValueStats(StatsAngularType * MaxValueStatsIn);
  StatsAngularType * getMinValueStats();
  void setMinValueStats(StatsAngularType * MinValueStatsIn);

protected:
  StatsWithTolAngularType * ValueStats;
  StatsAngularType * MaxValueStats;
  StatsAngularType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedAngu_1117_Type :
  public XmlTypeBase
{
public:
  UserDefinedAngu_1117_Type();
  UserDefinedAngu_1117_Type(
    StatsAngularType * MaxValueStatsIn,
    StatsAngularType * MinValueStatsIn);
  ~UserDefinedAngu_1117_Type();
  void printSelf(FILE * outFile);

  StatsAngularType * getMaxValueStats();
  void setMaxValueStats(StatsAngularType * MaxValueStatsIn);
  StatsAngularType * getMinValueStats();
  void setMinValueStats(StatsAngularType * MinValueStatsIn);

protected:
  StatsAngularType * MaxValueStats;
  StatsAngularType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedAngu_1118_Type :
  public XmlTypeBase
{
public:
  UserDefinedAngu_1118_Type();
  UserDefinedAngu_1118_Type(
    StatsWithTolAngularType * DeviationStatsIn,
    StatsAngularType * MaxDeviationStatsIn,
    StatsAngularType * MinDeviationStatsIn);
  ~UserDefinedAngu_1118_Type();
  void printSelf(FILE * outFile);

  StatsWithTolAngularType * getDeviationStats();
  void setDeviationStats(StatsWithTolAngularType * DeviationStatsIn);
  StatsAngularType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsAngularType * MaxDeviationStatsIn);
  StatsAngularType * getMinDeviationStats();
  void setMinDeviationStats(StatsAngularType * MinDeviationStatsIn);

protected:
  StatsWithTolAngularType * DeviationStats;
  StatsAngularType * MaxDeviationStats;
  StatsAngularType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedAngu_1119_Type :
  public XmlTypeBase
{
public:
  UserDefinedAngu_1119_Type();
  UserDefinedAngu_1119_Type(
    StatsAngularType * MaxDeviationStatsIn,
    StatsAngularType * MinDeviationStatsIn);
  ~UserDefinedAngu_1119_Type();
  void printSelf(FILE * outFile);

  StatsAngularType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsAngularType * MaxDeviationStatsIn);
  StatsAngularType * getMinDeviationStats();
  void setMinDeviationStats(StatsAngularType * MinDeviationStatsIn);

protected:
  StatsAngularType * MaxDeviationStats;
  StatsAngularType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedArea_1120_Type :
  public XmlTypeBase
{
public:
  UserDefinedArea_1120_Type();
  UserDefinedArea_1120_Type(
    StatsWithTolAreaType * ValueStatsIn,
    StatsAreaType * MaxValueStatsIn,
    StatsAreaType * MinValueStatsIn);
  ~UserDefinedArea_1120_Type();
  void printSelf(FILE * outFile);

  StatsWithTolAreaType * getValueStats();
  void setValueStats(StatsWithTolAreaType * ValueStatsIn);
  StatsAreaType * getMaxValueStats();
  void setMaxValueStats(StatsAreaType * MaxValueStatsIn);
  StatsAreaType * getMinValueStats();
  void setMinValueStats(StatsAreaType * MinValueStatsIn);

protected:
  StatsWithTolAreaType * ValueStats;
  StatsAreaType * MaxValueStats;
  StatsAreaType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedArea_1121_Type :
  public XmlTypeBase
{
public:
  UserDefinedArea_1121_Type();
  UserDefinedArea_1121_Type(
    StatsAreaType * MaxValueStatsIn,
    StatsAreaType * MinValueStatsIn);
  ~UserDefinedArea_1121_Type();
  void printSelf(FILE * outFile);

  StatsAreaType * getMaxValueStats();
  void setMaxValueStats(StatsAreaType * MaxValueStatsIn);
  StatsAreaType * getMinValueStats();
  void setMinValueStats(StatsAreaType * MinValueStatsIn);

protected:
  StatsAreaType * MaxValueStats;
  StatsAreaType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedArea_1122_Type :
  public XmlTypeBase
{
public:
  UserDefinedArea_1122_Type();
  UserDefinedArea_1122_Type(
    StatsWithTolAreaType * DeviationStatsIn,
    StatsAreaType * MaxDeviationStatsIn,
    StatsAreaType * MinDeviationStatsIn);
  ~UserDefinedArea_1122_Type();
  void printSelf(FILE * outFile);

  StatsWithTolAreaType * getDeviationStats();
  void setDeviationStats(StatsWithTolAreaType * DeviationStatsIn);
  StatsAreaType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsAreaType * MaxDeviationStatsIn);
  StatsAreaType * getMinDeviationStats();
  void setMinDeviationStats(StatsAreaType * MinDeviationStatsIn);

protected:
  StatsWithTolAreaType * DeviationStats;
  StatsAreaType * MaxDeviationStats;
  StatsAreaType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedArea_1123_Type :
  public XmlTypeBase
{
public:
  UserDefinedArea_1123_Type();
  UserDefinedArea_1123_Type(
    StatsAreaType * MaxDeviationStatsIn,
    StatsAreaType * MinDeviationStatsIn);
  ~UserDefinedArea_1123_Type();
  void printSelf(FILE * outFile);

  StatsAreaType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsAreaType * MaxDeviationStatsIn);
  StatsAreaType * getMinDeviationStats();
  void setMinDeviationStats(StatsAreaType * MinDeviationStatsIn);

protected:
  StatsAreaType * MaxDeviationStats;
  StatsAreaType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedForc_1124_Type :
  public XmlTypeBase
{
public:
  UserDefinedForc_1124_Type();
  UserDefinedForc_1124_Type(
    StatsWithTolForceType * ValueStatsIn,
    StatsForceType * MaxValueStatsIn,
    StatsForceType * MinValueStatsIn);
  ~UserDefinedForc_1124_Type();
  void printSelf(FILE * outFile);

  StatsWithTolForceType * getValueStats();
  void setValueStats(StatsWithTolForceType * ValueStatsIn);
  StatsForceType * getMaxValueStats();
  void setMaxValueStats(StatsForceType * MaxValueStatsIn);
  StatsForceType * getMinValueStats();
  void setMinValueStats(StatsForceType * MinValueStatsIn);

protected:
  StatsWithTolForceType * ValueStats;
  StatsForceType * MaxValueStats;
  StatsForceType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedForc_1125_Type :
  public XmlTypeBase
{
public:
  UserDefinedForc_1125_Type();
  UserDefinedForc_1125_Type(
    StatsForceType * MaxValueStatsIn,
    StatsForceType * MinValueStatsIn);
  ~UserDefinedForc_1125_Type();
  void printSelf(FILE * outFile);

  StatsForceType * getMaxValueStats();
  void setMaxValueStats(StatsForceType * MaxValueStatsIn);
  StatsForceType * getMinValueStats();
  void setMinValueStats(StatsForceType * MinValueStatsIn);

protected:
  StatsForceType * MaxValueStats;
  StatsForceType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedForc_1126_Type :
  public XmlTypeBase
{
public:
  UserDefinedForc_1126_Type();
  UserDefinedForc_1126_Type(
    StatsWithTolForceType * DeviationStatsIn,
    StatsForceType * MaxDeviationStatsIn,
    StatsForceType * MinDeviationStatsIn);
  ~UserDefinedForc_1126_Type();
  void printSelf(FILE * outFile);

  StatsWithTolForceType * getDeviationStats();
  void setDeviationStats(StatsWithTolForceType * DeviationStatsIn);
  StatsForceType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsForceType * MaxDeviationStatsIn);
  StatsForceType * getMinDeviationStats();
  void setMinDeviationStats(StatsForceType * MinDeviationStatsIn);

protected:
  StatsWithTolForceType * DeviationStats;
  StatsForceType * MaxDeviationStats;
  StatsForceType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedForc_1127_Type :
  public XmlTypeBase
{
public:
  UserDefinedForc_1127_Type();
  UserDefinedForc_1127_Type(
    StatsForceType * MaxDeviationStatsIn,
    StatsForceType * MinDeviationStatsIn);
  ~UserDefinedForc_1127_Type();
  void printSelf(FILE * outFile);

  StatsForceType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsForceType * MaxDeviationStatsIn);
  StatsForceType * getMinDeviationStats();
  void setMinDeviationStats(StatsForceType * MinDeviationStatsIn);

protected:
  StatsForceType * MaxDeviationStats;
  StatsForceType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedLine_1128_Type :
  public XmlTypeBase
{
public:
  UserDefinedLine_1128_Type();
  UserDefinedLine_1128_Type(
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~UserDefinedLine_1128_Type();
  void printSelf(FILE * outFile);

  StatsWithTolLinearType * getValueStats();
  void setValueStats(StatsWithTolLinearType * ValueStatsIn);
  StatsLinearType * getMaxValueStats();
  void setMaxValueStats(StatsLinearType * MaxValueStatsIn);
  StatsLinearType * getMinValueStats();
  void setMinValueStats(StatsLinearType * MinValueStatsIn);

protected:
  StatsWithTolLinearType * ValueStats;
  StatsLinearType * MaxValueStats;
  StatsLinearType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedLine_1129_Type :
  public XmlTypeBase
{
public:
  UserDefinedLine_1129_Type();
  UserDefinedLine_1129_Type(
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~UserDefinedLine_1129_Type();
  void printSelf(FILE * outFile);

  StatsLinearType * getMaxValueStats();
  void setMaxValueStats(StatsLinearType * MaxValueStatsIn);
  StatsLinearType * getMinValueStats();
  void setMinValueStats(StatsLinearType * MinValueStatsIn);

protected:
  StatsLinearType * MaxValueStats;
  StatsLinearType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedLine_1130_Type :
  public XmlTypeBase
{
public:
  UserDefinedLine_1130_Type();
  UserDefinedLine_1130_Type(
    StatsWithTolLinearType * DeviationStatsIn,
    StatsLinearType * MaxDeviationStatsIn,
    StatsLinearType * MinDeviationStatsIn);
  ~UserDefinedLine_1130_Type();
  void printSelf(FILE * outFile);

  StatsWithTolLinearType * getDeviationStats();
  void setDeviationStats(StatsWithTolLinearType * DeviationStatsIn);
  StatsLinearType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsLinearType * MaxDeviationStatsIn);
  StatsLinearType * getMinDeviationStats();
  void setMinDeviationStats(StatsLinearType * MinDeviationStatsIn);

protected:
  StatsWithTolLinearType * DeviationStats;
  StatsLinearType * MaxDeviationStats;
  StatsLinearType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedLine_1131_Type :
  public XmlTypeBase
{
public:
  UserDefinedLine_1131_Type();
  UserDefinedLine_1131_Type(
    StatsLinearType * MaxDeviationStatsIn,
    StatsLinearType * MinDeviationStatsIn);
  ~UserDefinedLine_1131_Type();
  void printSelf(FILE * outFile);

  StatsLinearType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsLinearType * MaxDeviationStatsIn);
  StatsLinearType * getMinDeviationStats();
  void setMinDeviationStats(StatsLinearType * MinDeviationStatsIn);

protected:
  StatsLinearType * MaxDeviationStats;
  StatsLinearType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedMass_1132_Type :
  public XmlTypeBase
{
public:
  UserDefinedMass_1132_Type();
  UserDefinedMass_1132_Type(
    StatsWithTolMassType * ValueStatsIn,
    StatsMassType * MaxValueStatsIn,
    StatsMassType * MinValueStatsIn);
  ~UserDefinedMass_1132_Type();
  void printSelf(FILE * outFile);

  StatsWithTolMassType * getValueStats();
  void setValueStats(StatsWithTolMassType * ValueStatsIn);
  StatsMassType * getMaxValueStats();
  void setMaxValueStats(StatsMassType * MaxValueStatsIn);
  StatsMassType * getMinValueStats();
  void setMinValueStats(StatsMassType * MinValueStatsIn);

protected:
  StatsWithTolMassType * ValueStats;
  StatsMassType * MaxValueStats;
  StatsMassType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedMass_1133_Type :
  public XmlTypeBase
{
public:
  UserDefinedMass_1133_Type();
  UserDefinedMass_1133_Type(
    StatsMassType * MaxValueStatsIn,
    StatsMassType * MinValueStatsIn);
  ~UserDefinedMass_1133_Type();
  void printSelf(FILE * outFile);

  StatsMassType * getMaxValueStats();
  void setMaxValueStats(StatsMassType * MaxValueStatsIn);
  StatsMassType * getMinValueStats();
  void setMinValueStats(StatsMassType * MinValueStatsIn);

protected:
  StatsMassType * MaxValueStats;
  StatsMassType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedMass_1134_Type :
  public XmlTypeBase
{
public:
  UserDefinedMass_1134_Type();
  UserDefinedMass_1134_Type(
    StatsWithTolMassType * DeviationStatsIn,
    StatsMassType * MaxDeviationStatsIn,
    StatsMassType * MinDeviationStatsIn);
  ~UserDefinedMass_1134_Type();
  void printSelf(FILE * outFile);

  StatsWithTolMassType * getDeviationStats();
  void setDeviationStats(StatsWithTolMassType * DeviationStatsIn);
  StatsMassType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsMassType * MaxDeviationStatsIn);
  StatsMassType * getMinDeviationStats();
  void setMinDeviationStats(StatsMassType * MinDeviationStatsIn);

protected:
  StatsWithTolMassType * DeviationStats;
  StatsMassType * MaxDeviationStats;
  StatsMassType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedMass_1135_Type :
  public XmlTypeBase
{
public:
  UserDefinedMass_1135_Type();
  UserDefinedMass_1135_Type(
    StatsMassType * MaxDeviationStatsIn,
    StatsMassType * MinDeviationStatsIn);
  ~UserDefinedMass_1135_Type();
  void printSelf(FILE * outFile);

  StatsMassType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsMassType * MaxDeviationStatsIn);
  StatsMassType * getMinDeviationStats();
  void setMinDeviationStats(StatsMassType * MinDeviationStatsIn);

protected:
  StatsMassType * MaxDeviationStats;
  StatsMassType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedPres_1136_Type :
  public XmlTypeBase
{
public:
  UserDefinedPres_1136_Type();
  UserDefinedPres_1136_Type(
    StatsWithTolPressureType * ValueStatsIn,
    StatsPressureType * MaxValueStatsIn,
    StatsPressureType * MinValueStatsIn);
  ~UserDefinedPres_1136_Type();
  void printSelf(FILE * outFile);

  StatsWithTolPressureType * getValueStats();
  void setValueStats(StatsWithTolPressureType * ValueStatsIn);
  StatsPressureType * getMaxValueStats();
  void setMaxValueStats(StatsPressureType * MaxValueStatsIn);
  StatsPressureType * getMinValueStats();
  void setMinValueStats(StatsPressureType * MinValueStatsIn);

protected:
  StatsWithTolPressureType * ValueStats;
  StatsPressureType * MaxValueStats;
  StatsPressureType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedPres_1137_Type :
  public XmlTypeBase
{
public:
  UserDefinedPres_1137_Type();
  UserDefinedPres_1137_Type(
    StatsPressureType * MaxValueStatsIn,
    StatsPressureType * MinValueStatsIn);
  ~UserDefinedPres_1137_Type();
  void printSelf(FILE * outFile);

  StatsPressureType * getMaxValueStats();
  void setMaxValueStats(StatsPressureType * MaxValueStatsIn);
  StatsPressureType * getMinValueStats();
  void setMinValueStats(StatsPressureType * MinValueStatsIn);

protected:
  StatsPressureType * MaxValueStats;
  StatsPressureType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedPres_1138_Type :
  public XmlTypeBase
{
public:
  UserDefinedPres_1138_Type();
  UserDefinedPres_1138_Type(
    StatsWithTolPressureType * DeviationStatsIn,
    StatsPressureType * MaxDeviationStatsIn,
    StatsPressureType * MinDeviationStatsIn);
  ~UserDefinedPres_1138_Type();
  void printSelf(FILE * outFile);

  StatsWithTolPressureType * getDeviationStats();
  void setDeviationStats(StatsWithTolPressureType * DeviationStatsIn);
  StatsPressureType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsPressureType * MaxDeviationStatsIn);
  StatsPressureType * getMinDeviationStats();
  void setMinDeviationStats(StatsPressureType * MinDeviationStatsIn);

protected:
  StatsWithTolPressureType * DeviationStats;
  StatsPressureType * MaxDeviationStats;
  StatsPressureType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedPres_1139_Type :
  public XmlTypeBase
{
public:
  UserDefinedPres_1139_Type();
  UserDefinedPres_1139_Type(
    StatsPressureType * MaxDeviationStatsIn,
    StatsPressureType * MinDeviationStatsIn);
  ~UserDefinedPres_1139_Type();
  void printSelf(FILE * outFile);

  StatsPressureType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsPressureType * MaxDeviationStatsIn);
  StatsPressureType * getMinDeviationStats();
  void setMinDeviationStats(StatsPressureType * MinDeviationStatsIn);

protected:
  StatsPressureType * MaxDeviationStats;
  StatsPressureType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedSpee_1140_Type :
  public XmlTypeBase
{
public:
  UserDefinedSpee_1140_Type();
  UserDefinedSpee_1140_Type(
    StatsWithTolSpeedType * ValueStatsIn,
    StatsSpeedType * MaxValueStatsIn,
    StatsSpeedType * MinValueStatsIn);
  ~UserDefinedSpee_1140_Type();
  void printSelf(FILE * outFile);

  StatsWithTolSpeedType * getValueStats();
  void setValueStats(StatsWithTolSpeedType * ValueStatsIn);
  StatsSpeedType * getMaxValueStats();
  void setMaxValueStats(StatsSpeedType * MaxValueStatsIn);
  StatsSpeedType * getMinValueStats();
  void setMinValueStats(StatsSpeedType * MinValueStatsIn);

protected:
  StatsWithTolSpeedType * ValueStats;
  StatsSpeedType * MaxValueStats;
  StatsSpeedType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedSpee_1141_Type :
  public XmlTypeBase
{
public:
  UserDefinedSpee_1141_Type();
  UserDefinedSpee_1141_Type(
    StatsSpeedType * MaxValueStatsIn,
    StatsSpeedType * MinValueStatsIn);
  ~UserDefinedSpee_1141_Type();
  void printSelf(FILE * outFile);

  StatsSpeedType * getMaxValueStats();
  void setMaxValueStats(StatsSpeedType * MaxValueStatsIn);
  StatsSpeedType * getMinValueStats();
  void setMinValueStats(StatsSpeedType * MinValueStatsIn);

protected:
  StatsSpeedType * MaxValueStats;
  StatsSpeedType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedSpee_1142_Type :
  public XmlTypeBase
{
public:
  UserDefinedSpee_1142_Type();
  UserDefinedSpee_1142_Type(
    StatsWithTolSpeedType * DeviationStatsIn,
    StatsSpeedType * MaxDeviationStatsIn,
    StatsSpeedType * MinDeviationStatsIn);
  ~UserDefinedSpee_1142_Type();
  void printSelf(FILE * outFile);

  StatsWithTolSpeedType * getDeviationStats();
  void setDeviationStats(StatsWithTolSpeedType * DeviationStatsIn);
  StatsSpeedType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsSpeedType * MaxDeviationStatsIn);
  StatsSpeedType * getMinDeviationStats();
  void setMinDeviationStats(StatsSpeedType * MinDeviationStatsIn);

protected:
  StatsWithTolSpeedType * DeviationStats;
  StatsSpeedType * MaxDeviationStats;
  StatsSpeedType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedSpee_1143_Type :
  public XmlTypeBase
{
public:
  UserDefinedSpee_1143_Type();
  UserDefinedSpee_1143_Type(
    StatsSpeedType * MaxDeviationStatsIn,
    StatsSpeedType * MinDeviationStatsIn);
  ~UserDefinedSpee_1143_Type();
  void printSelf(FILE * outFile);

  StatsSpeedType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsSpeedType * MaxDeviationStatsIn);
  StatsSpeedType * getMinDeviationStats();
  void setMinDeviationStats(StatsSpeedType * MinDeviationStatsIn);

protected:
  StatsSpeedType * MaxDeviationStats;
  StatsSpeedType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedTemp_1144_Type :
  public XmlTypeBase
{
public:
  UserDefinedTemp_1144_Type();
  UserDefinedTemp_1144_Type(
    StatsWithTolTemperatureType * ValueStatsIn,
    StatsTemperatureType * MaxValueStatsIn,
    StatsTemperatureType * MinValueStatsIn);
  ~UserDefinedTemp_1144_Type();
  void printSelf(FILE * outFile);

  StatsWithTolTemperatureType * getValueStats();
  void setValueStats(StatsWithTolTemperatureType * ValueStatsIn);
  StatsTemperatureType * getMaxValueStats();
  void setMaxValueStats(StatsTemperatureType * MaxValueStatsIn);
  StatsTemperatureType * getMinValueStats();
  void setMinValueStats(StatsTemperatureType * MinValueStatsIn);

protected:
  StatsWithTolTemperatureType * ValueStats;
  StatsTemperatureType * MaxValueStats;
  StatsTemperatureType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedTemp_1145_Type :
  public XmlTypeBase
{
public:
  UserDefinedTemp_1145_Type();
  UserDefinedTemp_1145_Type(
    StatsTemperatureType * MaxValueStatsIn,
    StatsTemperatureType * MinValueStatsIn);
  ~UserDefinedTemp_1145_Type();
  void printSelf(FILE * outFile);

  StatsTemperatureType * getMaxValueStats();
  void setMaxValueStats(StatsTemperatureType * MaxValueStatsIn);
  StatsTemperatureType * getMinValueStats();
  void setMinValueStats(StatsTemperatureType * MinValueStatsIn);

protected:
  StatsTemperatureType * MaxValueStats;
  StatsTemperatureType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedTemp_1146_Type :
  public XmlTypeBase
{
public:
  UserDefinedTemp_1146_Type();
  UserDefinedTemp_1146_Type(
    StatsWithTolTemperatureType * DeviationStatsIn,
    StatsTemperatureType * MaxDeviationStatsIn,
    StatsTemperatureType * MinDeviationStatsIn);
  ~UserDefinedTemp_1146_Type();
  void printSelf(FILE * outFile);

  StatsWithTolTemperatureType * getDeviationStats();
  void setDeviationStats(StatsWithTolTemperatureType * DeviationStatsIn);
  StatsTemperatureType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsTemperatureType * MaxDeviationStatsIn);
  StatsTemperatureType * getMinDeviationStats();
  void setMinDeviationStats(StatsTemperatureType * MinDeviationStatsIn);

protected:
  StatsWithTolTemperatureType * DeviationStats;
  StatsTemperatureType * MaxDeviationStats;
  StatsTemperatureType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedTemp_1147_Type :
  public XmlTypeBase
{
public:
  UserDefinedTemp_1147_Type();
  UserDefinedTemp_1147_Type(
    StatsTemperatureType * MaxDeviationStatsIn,
    StatsTemperatureType * MinDeviationStatsIn);
  ~UserDefinedTemp_1147_Type();
  void printSelf(FILE * outFile);

  StatsTemperatureType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsTemperatureType * MaxDeviationStatsIn);
  StatsTemperatureType * getMinDeviationStats();
  void setMinDeviationStats(StatsTemperatureType * MinDeviationStatsIn);

protected:
  StatsTemperatureType * MaxDeviationStats;
  StatsTemperatureType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedTime_1148_Type :
  public XmlTypeBase
{
public:
  UserDefinedTime_1148_Type();
  UserDefinedTime_1148_Type(
    StatsWithTolTimeType * ValueStatsIn,
    StatsTimeType * MaxValueStatsIn,
    StatsTimeType * MinValueStatsIn);
  ~UserDefinedTime_1148_Type();
  void printSelf(FILE * outFile);

  StatsWithTolTimeType * getValueStats();
  void setValueStats(StatsWithTolTimeType * ValueStatsIn);
  StatsTimeType * getMaxValueStats();
  void setMaxValueStats(StatsTimeType * MaxValueStatsIn);
  StatsTimeType * getMinValueStats();
  void setMinValueStats(StatsTimeType * MinValueStatsIn);

protected:
  StatsWithTolTimeType * ValueStats;
  StatsTimeType * MaxValueStats;
  StatsTimeType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedTime_1149_Type :
  public XmlTypeBase
{
public:
  UserDefinedTime_1149_Type();
  UserDefinedTime_1149_Type(
    StatsTimeType * MaxValueStatsIn,
    StatsTimeType * MinValueStatsIn);
  ~UserDefinedTime_1149_Type();
  void printSelf(FILE * outFile);

  StatsTimeType * getMaxValueStats();
  void setMaxValueStats(StatsTimeType * MaxValueStatsIn);
  StatsTimeType * getMinValueStats();
  void setMinValueStats(StatsTimeType * MinValueStatsIn);

protected:
  StatsTimeType * MaxValueStats;
  StatsTimeType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedTime_1150_Type :
  public XmlTypeBase
{
public:
  UserDefinedTime_1150_Type();
  UserDefinedTime_1150_Type(
    StatsWithTolTimeType * DeviationStatsIn,
    StatsTimeType * MaxDeviationStatsIn,
    StatsTimeType * MinDeviationStatsIn);
  ~UserDefinedTime_1150_Type();
  void printSelf(FILE * outFile);

  StatsWithTolTimeType * getDeviationStats();
  void setDeviationStats(StatsWithTolTimeType * DeviationStatsIn);
  StatsTimeType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsTimeType * MaxDeviationStatsIn);
  StatsTimeType * getMinDeviationStats();
  void setMinDeviationStats(StatsTimeType * MinDeviationStatsIn);

protected:
  StatsWithTolTimeType * DeviationStats;
  StatsTimeType * MaxDeviationStats;
  StatsTimeType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedTime_1151_Type :
  public XmlTypeBase
{
public:
  UserDefinedTime_1151_Type();
  UserDefinedTime_1151_Type(
    StatsTimeType * MaxDeviationStatsIn,
    StatsTimeType * MinDeviationStatsIn);
  ~UserDefinedTime_1151_Type();
  void printSelf(FILE * outFile);

  StatsTimeType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsTimeType * MaxDeviationStatsIn);
  StatsTimeType * getMinDeviationStats();
  void setMinDeviationStats(StatsTimeType * MinDeviationStatsIn);

protected:
  StatsTimeType * MaxDeviationStats;
  StatsTimeType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedUnit_1152_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1152_Type();
  UserDefinedUnit_1152_Type(
    StatsWithTolUserDefinedUnitType * ValueStatsIn,
    StatsUserDefinedUnitType * MaxValueStatsIn,
    StatsUserDefinedUnitType * MinValueStatsIn);
  ~UserDefinedUnit_1152_Type();
  void printSelf(FILE * outFile);

  StatsWithTolUserDefinedUnitType * getValueStats();
  void setValueStats(StatsWithTolUserDefinedUnitType * ValueStatsIn);
  StatsUserDefinedUnitType * getMaxValueStats();
  void setMaxValueStats(StatsUserDefinedUnitType * MaxValueStatsIn);
  StatsUserDefinedUnitType * getMinValueStats();
  void setMinValueStats(StatsUserDefinedUnitType * MinValueStatsIn);

protected:
  StatsWithTolUserDefinedUnitType * ValueStats;
  StatsUserDefinedUnitType * MaxValueStats;
  StatsUserDefinedUnitType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedUnit_1153_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1153_Type();
  UserDefinedUnit_1153_Type(
    StatsUserDefinedUnitType * MaxValueStatsIn,
    StatsUserDefinedUnitType * MinValueStatsIn);
  ~UserDefinedUnit_1153_Type();
  void printSelf(FILE * outFile);

  StatsUserDefinedUnitType * getMaxValueStats();
  void setMaxValueStats(StatsUserDefinedUnitType * MaxValueStatsIn);
  StatsUserDefinedUnitType * getMinValueStats();
  void setMinValueStats(StatsUserDefinedUnitType * MinValueStatsIn);

protected:
  StatsUserDefinedUnitType * MaxValueStats;
  StatsUserDefinedUnitType * MinValueStats;
};

/* ***************************************************************** */

class UserDefinedUnit_1154_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1154_Type();
  UserDefinedUnit_1154_Type(
    StatsWithTolUserDefinedUnitType * DeviationStatsIn,
    StatsUserDefinedUnitType * MaxDeviationStatsIn,
    StatsUserDefinedUnitType * MinDeviationStatsIn);
  ~UserDefinedUnit_1154_Type();
  void printSelf(FILE * outFile);

  StatsWithTolUserDefinedUnitType * getDeviationStats();
  void setDeviationStats(StatsWithTolUserDefinedUnitType * DeviationStatsIn);
  StatsUserDefinedUnitType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsUserDefinedUnitType * MaxDeviationStatsIn);
  StatsUserDefinedUnitType * getMinDeviationStats();
  void setMinDeviationStats(StatsUserDefinedUnitType * MinDeviationStatsIn);

protected:
  StatsWithTolUserDefinedUnitType * DeviationStats;
  StatsUserDefinedUnitType * MaxDeviationStats;
  StatsUserDefinedUnitType * MinDeviationStats;
};

/* ***************************************************************** */

class UserDefinedUnit_1155_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1155_Type();
  UserDefinedUnit_1155_Type(
    StatsUserDefinedUnitType * MaxDeviationStatsIn,
    StatsUserDefinedUnitType * MinDeviationStatsIn);
  ~UserDefinedUnit_1155_Type();
  void printSelf(FILE * outFile);

  StatsUserDefinedUnitType * getMaxDeviationStats();
  void setMaxDeviationStats(StatsUserDefinedUnitType * MaxDeviationStatsIn);
  StatsUserDefinedUnitType * getMinDeviationStats();
  void setMinDeviationStats(StatsUserDefinedUnitType * MinDeviationStatsIn);

protected:
  StatsUserDefinedUnitType * MaxDeviationStats;
  StatsUserDefinedUnitType * MinDeviationStats;
};

/* ***************************************************************** */

class CharacteristicS_1156_Type :
  public XmlTypeBase
{
public:
  CharacteristicS_1156_Type();
  CharacteristicS_1156_Type(
    CharacteristicS_1156_TypeChoicePair * CharacteristicS_1156_TypePairIn);
  ~CharacteristicS_1156_Type();
  void printSelf(FILE * outFile);

  CharacteristicS_1156_TypeChoicePair * getCharacteristicS_1156_TypePair();
  void setCharacteristicS_1156_TypePair(CharacteristicS_1156_TypeChoicePair * CharacteristicS_1156_TypePairIn);

protected:
  CharacteristicS_1156_TypeChoicePair * CharacteristicS_1156_TypePair;
};

/* ***************************************************************** */

union CharacteristicS_1156_TypeVal
{
  StatsArrayIdType * MeasuredIds;
  SubgroupsType * Subgroups;
};

/* ***************************************************************** */

class CharacteristicS_1156_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredIdsE,
    SubgroupsE };
  CharacteristicS_1156_TypeChoicePair();
  CharacteristicS_1156_TypeChoicePair(
    whichOne CharacteristicS_1156_TypeTypeIn,
    CharacteristicS_1156_TypeVal * CharacteristicS_1156_TypeValueIn);
  ~CharacteristicS_1156_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CharacteristicS_1156_TypeType;
  CharacteristicS_1156_TypeVal * CharacteristicS_1156_TypeValue;
};

/* ***************************************************************** */

class CharacteristicS_1157_Type :
  public XmlTypeBase
{
public:
  CharacteristicS_1157_Type();
  CharacteristicS_1157_Type(
    CharacteristicS_1157_TypeChoicePair * CharacteristicS_1157_TypePairIn);
  ~CharacteristicS_1157_Type();
  void printSelf(FILE * outFile);

  CharacteristicS_1157_TypeChoicePair * getCharacteristicS_1157_TypePair();
  void setCharacteristicS_1157_TypePair(CharacteristicS_1157_TypeChoicePair * CharacteristicS_1157_TypePairIn);

protected:
  CharacteristicS_1157_TypeChoicePair * CharacteristicS_1157_TypePair;
};

/* ***************************************************************** */

union CharacteristicS_1157_TypeVal
{
  StatsValuesType * MeasuredValues;
  SubgroupValuesType * SubgroupValues;
};

/* ***************************************************************** */

class CharacteristicS_1157_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredValuesE,
    SubgroupValuesE };
  CharacteristicS_1157_TypeChoicePair();
  CharacteristicS_1157_TypeChoicePair(
    whichOne CharacteristicS_1157_TypeTypeIn,
    CharacteristicS_1157_TypeVal * CharacteristicS_1157_TypeValueIn);
  ~CharacteristicS_1157_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CharacteristicS_1157_TypeType;
  CharacteristicS_1157_TypeVal * CharacteristicS_1157_TypeValue;
};

/* ***************************************************************** */

class SamplingMethodT_1158_Type :
  public XmlTypeBase
{
public:
  SamplingMethodT_1158_Type();
  SamplingMethodT_1158_Type(
    XmlPositiveInteger * SamplingFrequencyIn,
    SamplingIntervalType * SamplingIntervalIn);
  ~SamplingMethodT_1158_Type();
  void printSelf(FILE * outFile);

  XmlPositiveInteger * getSamplingFrequency();
  void setSamplingFrequency(XmlPositiveInteger * SamplingFrequencyIn);
  SamplingIntervalType * getSamplingInterval();
  void setSamplingInterval(SamplingIntervalType * SamplingIntervalIn);

protected:
  XmlPositiveInteger * SamplingFrequency;
  SamplingIntervalType * SamplingInterval;
};

/* ***************************************************************** */

class AngularCharacteristicStatsEvalType :
  public CharacteristicStatsEvalBaseType
{
public:
  AngularCharacteristicStatsEvalType();
  AngularCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    AngularCharacteristicStatsEvalTypeChoicePair * AngularCharacteristicStatsEvalTypePairIn);
  ~AngularCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
  AngularCharacteristicStatsEvalTypeChoicePair * getAngularCharacteristicStatsEvalTypeChoicePair();
  void setAngularCharacteristicStatsEvalTypeChoicePair(AngularCharacteristicStatsEvalTypeChoicePair * AngularCharacteristicStatsEvalTypePairIn);

protected:
  AngularCharacteristicStatsEvalTypeChoicePair * AngularCharacteristicStatsEvalTypePair;
};

/* ***************************************************************** */

union AngularCharacteristicStatsEvalTypeVal
{
  AngularCharacte_1100_Type * AngularCharacte_1100;
  AngularCharacte_1101_Type * AngularCharacte_1101;
  StatsAngularType * MinValueStats;
  AngularCharacte_1102_Type * AngularCharacte_1102;
  AngularCharacte_1103_Type * AngularCharacte_1103;
  StatsAngularType * MinDeviationStats;
};

/* ***************************************************************** */

class AngularCharacteristicStatsEvalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AngularCharacte_1100E,
    AngularCharacte_1101E,
    MinValueStatsE,
    AngularCharacte_1102E,
    AngularCharacte_1103E,
    MinDeviationStatsE };
  AngularCharacteristicStatsEvalTypeChoicePair();
  AngularCharacteristicStatsEvalTypeChoicePair(
    whichOne AngularCharacteristicStatsEvalTypeTypeIn,
    AngularCharacteristicStatsEvalTypeVal * AngularCharacteristicStatsEvalTypeValueIn);
  ~AngularCharacteristicStatsEvalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularCharacteristicStatsEvalTypeType;
  AngularCharacteristicStatsEvalTypeVal * AngularCharacteristicStatsEvalTypeValue;
};

/* ***************************************************************** */

class AngularCoordinateCharacteristicStatsEvalType :
  public AngularCharacteristicStatsEvalType
{
public:
  AngularCoordinateCharacteristicStatsEvalType();
  AngularCoordinateCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    AngularCharacteristicStatsEvalTypeChoicePair * AngularCharacteristicStatsEvalTypePairIn);
  ~AngularCoordinateCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AngularityCharacteristicStatsEvalType :
  public OrientationCharacteristicStatsEvalType
{
public:
  AngularityCharacteristicStatsEvalType();
  AngularityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsPassFailType * DatumsOkStatsIn,
    StatsLinearType * BonusStatsIn,
    StatsLinearType * ReferenceLengthStatsIn);
  ~AngularityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ChordCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  ChordCharacteristicStatsEvalType();
  ChordCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~ChordCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CircularRunoutCharacteristicStatsEvalType :
  public RunoutCharacteristicStatsEvalBaseType
{
public:
  CircularRunoutCharacteristicStatsEvalType();
  CircularRunoutCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsPassFailType * DatumsOkStatsIn);
  ~CircularRunoutCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CoaxialityCharacteristicStatsEvalType :
  public LocationCharacteristicStatsEvalType
{
public:
  CoaxialityCharacteristicStatsEvalType();
  CoaxialityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  ~CoaxialityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  OneSidedCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);

protected:
  OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethod;
};

/* ***************************************************************** */

class CompositeSegmentPositionStatsEvalType :
  public CompositeSegmentStatsEvalBaseType
{
public:
  CompositeSegmentPositionStatsEvalType();
  CompositeSegmentPositionStatsEvalType(
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~CompositeSegmentPositionStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CompositeSegmentProfileStatsEvalType :
  public CompositeSegmentStatsEvalBaseType
{
public:
  CompositeSegmentProfileStatsEvalType();
  CompositeSegmentProfileStatsEvalType(
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn);
  ~CompositeSegmentProfileStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ConcentricityCharacteristicStatsEvalType :
  public LocationCharacteristicStatsEvalType
{
public:
  ConcentricityCharacteristicStatsEvalType();
  ConcentricityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  ~ConcentricityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  OneSidedCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);

protected:
  OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethod;
};

/* ***************************************************************** */

class ConicalTaperCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  ConicalTaperCharacteristicStatsEvalType();
  ConicalTaperCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~ConicalTaperCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CriterionAngularType :
  public CriterionDecimalType
{
public:
  CriterionAngularType();
  CriterionAngularType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionAngularType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * angularUnitIn);
  ~CriterionAngularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getangularUnit();
  void setangularUnit(XmlToken * angularUnitIn);

protected:
  XmlToken * angularUnit;
};

/* ***************************************************************** */

class CriterionAreaType :
  public CriterionDecimalType
{
public:
  CriterionAreaType();
  CriterionAreaType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In);
  CriterionAreaType(
    XmlDecimal * LimitIn,
    CriterionDecima_1108_Type * CriterionDecima_1108In,
    XmlToken * areaUnitIn);
  ~CriterionAreaType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getareaUnit();
  void setareaUnit(XmlToken * areaUnitIn);

protected:
  XmlToken * areaUnit;
};

/* ***************************************************************** */

class CurveLengthCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  CurveLengthCharacteristicStatsEvalType();
  CurveLengthCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~CurveLengthCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DepthCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  DepthCharacteristicStatsEvalType();
  DepthCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~DepthCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DiameterCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  DiameterCharacteristicStatsEvalType();
  DiameterCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~DiameterCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DistanceBetweenCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  DistanceBetweenCharacteristicStatsEvalType();
  DistanceBetweenCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~DistanceBetweenCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DistanceFromCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  DistanceFromCharacteristicStatsEvalType();
  DistanceFromCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~DistanceFromCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FlatTaperCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  FlatTaperCharacteristicStatsEvalType();
  FlatTaperCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~FlatTaperCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FormCharacteristicStatsEvalBaseType :
  public GeometricCharacteristicStatsEvalType
{
public:
  FormCharacteristicStatsEvalBaseType();
  FormCharacteristicStatsEvalBaseType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  virtual ~FormCharacteristicStatsEvalBaseType();
  void printSelf(FILE * outFile);

  OneSidedCapabilityCalculationEnumType * getCapabilityCalculationMethod();
  void setCapabilityCalculationMethod(OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);

protected:
  OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethod;
};

/* ***************************************************************** */

class HeightCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  HeightCharacteristicStatsEvalType();
  HeightCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~HeightCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LengthCharacteristicStatsEvalType :
  public LinearCharacteristicStatsEvalType
{
public:
  LengthCharacteristicStatsEvalType();
  LengthCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    LinearCharacteristicStatsEvalTypeChoicePair * LinearCharacteristicStatsEvalTypePairIn);
  ~LengthCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LineProfileCharacteristicStatsEvalType :
  public ProfileCharacteristicStatsEvalBaseType
{
public:
  LineProfileCharacteristicStatsEvalType();
  LineProfileCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * WorstPositiveDeviationStatsIn,
    StatsLinearType * WorstNegativeDeviationStatsIn,
    PointDeviationsStatsEvalType * PointDeviationsStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    CompositeSegmentsProfileStatsEvalType * CompositeSegmentsStatsIn);
  ~LineProfileCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class OtherFormCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  OtherFormCharacteristicStatsEvalType();
  OtherFormCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  ~OtherFormCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointProfileCharacteristicStatsEvalType :
  public ProfileCharacteristicStatsEvalBaseType
{
public:
  PointProfileCharacteristicStatsEvalType();
  PointProfileCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * WorstPositiveDeviationStatsIn,
    StatsLinearType * WorstNegativeDeviationStatsIn,
    PointDeviationsStatsEvalType * PointDeviationsStatsIn,
    StatsPassFailType * DatumsOkStatsIn,
    CompositeSegmentsProfileStatsEvalType * CompositeSegmentsStatsIn);
  ~PointProfileCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SphericityCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  SphericityCharacteristicStatsEvalType();
  SphericityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  ~SphericityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class StatsAngularType :
  public StatsNumericalBaseType
{
public:
  StatsAngularType();
  StatsAngularType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsAngularType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * angularUnitIn);
  ~StatsAngularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getangularUnit();
  void setangularUnit(XmlToken * angularUnitIn);

protected:
  XmlToken * angularUnit;
};

/* ***************************************************************** */

class StatsAreaType :
  public StatsNumericalBaseType
{
public:
  StatsAreaType();
  StatsAreaType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsAreaType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * areaUnitIn);
  ~StatsAreaType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getareaUnit();
  void setareaUnit(XmlToken * areaUnitIn);

protected:
  XmlToken * areaUnit;
};

/* ***************************************************************** */

class StatsForceType :
  public StatsNumericalBaseType
{
public:
  StatsForceType();
  StatsForceType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsForceType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * forceUnitIn);
  ~StatsForceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getforceUnit();
  void setforceUnit(XmlToken * forceUnitIn);

protected:
  XmlToken * forceUnit;
};

/* ***************************************************************** */

class StatsLinearType :
  public StatsNumericalBaseType
{
public:
  StatsLinearType();
  StatsLinearType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsLinearType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * linearUnitIn);
  ~StatsLinearType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);

protected:
  XmlToken * linearUnit;
};

/* ***************************************************************** */

class StatsMassType :
  public StatsNumericalBaseType
{
public:
  StatsMassType();
  StatsMassType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn);
  StatsMassType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicStatsValueIn,
    XmlToken * massUnitIn);
  ~StatsMassType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getmassUnit();
  void setmassUnit(XmlToken * massUnitIn);

protected:
  XmlToken * massUnit;
};

/* ***************************************************************** */

class StatsWithTolAngularType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolAngularType();
  StatsWithTolAngularType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolAngularType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * angularUnitIn);
  ~StatsWithTolAngularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getangularUnit();
  void setangularUnit(XmlToken * angularUnitIn);

protected:
  XmlToken * angularUnit;
};

/* ***************************************************************** */

class StatsWithTolAreaType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolAreaType();
  StatsWithTolAreaType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolAreaType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * areaUnitIn);
  ~StatsWithTolAreaType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getareaUnit();
  void setareaUnit(XmlToken * areaUnitIn);

protected:
  XmlToken * areaUnit;
};

/* ***************************************************************** */

class StatsWithTolForceType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolForceType();
  StatsWithTolForceType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolForceType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * forceUnitIn);
  ~StatsWithTolForceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getforceUnit();
  void setforceUnit(XmlToken * forceUnitIn);

protected:
  XmlToken * forceUnit;
};

/* ***************************************************************** */

class StatsWithTolLinearType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolLinearType();
  StatsWithTolLinearType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolLinearType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * linearUnitIn);
  ~StatsWithTolLinearType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);

protected:
  XmlToken * linearUnit;
};

/* ***************************************************************** */

class StatsWithTolMassType :
  public StatsWithTolNumericalBaseType
{
public:
  StatsWithTolMassType();
  StatsWithTolMassType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn);
  StatsWithTolMassType(
    AttributesType * AttributesIn,
    StatsWithReferenceBaseTypeLisd * NumericCharacteristicWithTolStatsValueIn,
    XmlToken * massUnitIn);
  ~StatsWithTolMassType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getmassUnit();
  void setmassUnit(XmlToken * massUnitIn);

protected:
  XmlToken * massUnit;
};

/* ***************************************************************** */

class StraightnessCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  StraightnessCharacteristicStatsEvalType();
  StraightnessCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * BonusStatsIn,
    StatsLinearType * MaxStraightnessStatsIn);
  ~StraightnessCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsLinearType * getBonusStats();
  void setBonusStats(StatsLinearType * BonusStatsIn);
  StatsLinearType * getMaxStraightnessStats();
  void setMaxStraightnessStats(StatsLinearType * MaxStraightnessStatsIn);

protected:
  StatsLinearType * BonusStats;
  StatsLinearType * MaxStraightnessStats;
};

/* ***************************************************************** */

class SummaryStatisticsAngularType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsAngularType();
  SummaryStatisticsAngularType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsAngularType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * angularUnitIn);
  ~SummaryStatisticsAngularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getangularUnit();
  void setangularUnit(XmlToken * angularUnitIn);

protected:
  XmlToken * angularUnit;
};

/* ***************************************************************** */

class SummaryStatisticsAngularTypeLisd :
  public std::list<SummaryStatisticsAngularType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsAngularTypeLisd();
  SummaryStatisticsAngularTypeLisd(
    SummaryStatisticsAngularType * aSummaryStatisticsAngularType);
  ~SummaryStatisticsAngularTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsAreaType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsAreaType();
  SummaryStatisticsAreaType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsAreaType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * areaUnitIn);
  ~SummaryStatisticsAreaType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getareaUnit();
  void setareaUnit(XmlToken * areaUnitIn);

protected:
  XmlToken * areaUnit;
};

/* ***************************************************************** */

class SummaryStatisticsAreaTypeLisd :
  public std::list<SummaryStatisticsAreaType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsAreaTypeLisd();
  SummaryStatisticsAreaTypeLisd(
    SummaryStatisticsAreaType * aSummaryStatisticsAreaType);
  ~SummaryStatisticsAreaTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsForceType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsForceType();
  SummaryStatisticsForceType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsForceType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * forceUnitIn);
  ~SummaryStatisticsForceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getforceUnit();
  void setforceUnit(XmlToken * forceUnitIn);

protected:
  XmlToken * forceUnit;
};

/* ***************************************************************** */

class SummaryStatisticsForceTypeLisd :
  public std::list<SummaryStatisticsForceType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsForceTypeLisd();
  SummaryStatisticsForceTypeLisd(
    SummaryStatisticsForceType * aSummaryStatisticsForceType);
  ~SummaryStatisticsForceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsLinearType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsLinearType();
  SummaryStatisticsLinearType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsLinearType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * linearUnitIn);
  ~SummaryStatisticsLinearType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);

protected:
  XmlToken * linearUnit;
};

/* ***************************************************************** */

class SummaryStatisticsLinearTypeLisd :
  public std::list<SummaryStatisticsLinearType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsLinearTypeLisd();
  SummaryStatisticsLinearTypeLisd(
    SummaryStatisticsLinearType * aSummaryStatisticsLinearType);
  ~SummaryStatisticsLinearTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsMassType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsMassType();
  SummaryStatisticsMassType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsMassType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * massUnitIn);
  ~SummaryStatisticsMassType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getmassUnit();
  void setmassUnit(XmlToken * massUnitIn);

protected:
  XmlToken * massUnit;
};

/* ***************************************************************** */

class SummaryStatisticsMassTypeLisd :
  public std::list<SummaryStatisticsMassType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsMassTypeLisd();
  SummaryStatisticsMassTypeLisd(
    SummaryStatisticsMassType * aSummaryStatisticsMassType);
  ~SummaryStatisticsMassTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsPressureType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsPressureType();
  SummaryStatisticsPressureType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsPressureType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * pressureUnitIn);
  ~SummaryStatisticsPressureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getpressureUnit();
  void setpressureUnit(XmlToken * pressureUnitIn);

protected:
  XmlToken * pressureUnit;
};

/* ***************************************************************** */

class SummaryStatisticsPressureTypeLisd :
  public std::list<SummaryStatisticsPressureType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsPressureTypeLisd();
  SummaryStatisticsPressureTypeLisd(
    SummaryStatisticsPressureType * aSummaryStatisticsPressureType);
  ~SummaryStatisticsPressureTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsSpeedType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsSpeedType();
  SummaryStatisticsSpeedType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsSpeedType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * speedUnitIn);
  ~SummaryStatisticsSpeedType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getspeedUnit();
  void setspeedUnit(XmlToken * speedUnitIn);

protected:
  XmlToken * speedUnit;
};

/* ***************************************************************** */

class SummaryStatisticsSpeedTypeLisd :
  public std::list<SummaryStatisticsSpeedType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsSpeedTypeLisd();
  SummaryStatisticsSpeedTypeLisd(
    SummaryStatisticsSpeedType * aSummaryStatisticsSpeedType);
  ~SummaryStatisticsSpeedTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsTemperatureType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsTemperatureType();
  SummaryStatisticsTemperatureType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsTemperatureType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * temperatureUnitIn);
  ~SummaryStatisticsTemperatureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettemperatureUnit();
  void settemperatureUnit(XmlToken * temperatureUnitIn);

protected:
  XmlToken * temperatureUnit;
};

/* ***************************************************************** */

class SummaryStatisticsTemperatureTypeLisd :
  public std::list<SummaryStatisticsTemperatureType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsTemperatureTypeLisd();
  SummaryStatisticsTemperatureTypeLisd(
    SummaryStatisticsTemperatureType * aSummaryStatisticsTemperatureType);
  ~SummaryStatisticsTemperatureTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SummaryStatisticsTimeType :
  public SummaryStatisticsType
{
public:
  SummaryStatisticsTimeType();
  SummaryStatisticsTimeType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn);
  SummaryStatisticsTimeType(
    AttributesType * AttributesIn,
    StatsValuesEnumType * TypeOfSummaryIn,
    StatsWithReferenceBaseTypeLisd * SummaryStatsValueIn,
    XmlToken * timeUnitIn);
  ~SummaryStatisticsTimeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * gettimeUnit();
  void settimeUnit(XmlToken * timeUnitIn);

protected:
  XmlToken * timeUnit;
};

/* ***************************************************************** */

class SummaryStatisticsTimeTypeLisd :
  public std::list<SummaryStatisticsTimeType *>,
  public XmlSchemaInstanceBase
{
public:
  SummaryStatisticsTimeTypeLisd();
  SummaryStatisticsTimeTypeLisd(
    SummaryStatisticsTimeType * aSummaryStatisticsTimeType);
  ~SummaryStatisticsTimeTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ToroidicityCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  ToroidicityCharacteristicStatsEvalType();
  ToroidicityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  ~ToroidicityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class WeldBevelCharacteristicStatsEvalType :
  public WeldCharacteristicStatsEvalBaseType
{
public:
  WeldBevelCharacteristicStatsEvalType();
  WeldBevelCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsPassFailType * WeldStatsIn);
  ~WeldBevelCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AngleBetweenCharacteristicStatsEvalType :
  public AngularCharacteristicStatsEvalType
{
public:
  AngleBetweenCharacteristicStatsEvalType();
  AngleBetweenCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    AngularCharacteristicStatsEvalTypeChoicePair * AngularCharacteristicStatsEvalTypePairIn);
  ~AngleBetweenCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AngleCharacteristicStatsEvalType :
  public AngularCharacteristicStatsEvalType
{
public:
  AngleCharacteristicStatsEvalType();
  AngleCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    AngularCharacteristicStatsEvalTypeChoicePair * AngularCharacteristicStatsEvalTypePairIn);
  ~AngleCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AngleFromCharacteristicStatsEvalType :
  public AngularCharacteristicStatsEvalType
{
public:
  AngleFromCharacteristicStatsEvalType();
  AngleFromCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    AngularCharacteristicStatsEvalTypeChoicePair * AngularCharacteristicStatsEvalTypePairIn);
  ~AngleFromCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CircularityCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  CircularityCharacteristicStatsEvalType();
  CircularityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * MaxCircularityStatsIn);
  ~CircularityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsLinearType * getMaxCircularityStats();
  void setMaxCircularityStats(StatsLinearType * MaxCircularityStatsIn);

protected:
  StatsLinearType * MaxCircularityStats;
};

/* ***************************************************************** */

class ConicityCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  ConicityCharacteristicStatsEvalType();
  ConicityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  ~ConicityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CylindricityCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  CylindricityCharacteristicStatsEvalType();
  CylindricityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * MaxCylindricityStatsIn);
  ~CylindricityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsLinearType * getMaxCylindricityStats();
  void setMaxCylindricityStats(StatsLinearType * MaxCylindricityStatsIn);

protected:
  StatsLinearType * MaxCylindricityStats;
};

/* ***************************************************************** */

class EllipticityCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  EllipticityCharacteristicStatsEvalType();
  EllipticityCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn);
  ~EllipticityCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FlatnessCharacteristicStatsEvalType :
  public FormCharacteristicStatsEvalBaseType
{
public:
  FlatnessCharacteristicStatsEvalType();
  FlatnessCharacteristicStatsEvalType(
    AttributesType * AttributesIn,
    CharacteristicS_1105_Type * CharacteristicS_1105In,
    CharacteristicS_1106_Type * CharacteristicS_1106In,
    StatsEvalStatusType * StatusIn,
    StudyIssuesType * StudyIssuesIn,
    DistributionTransformationType * DistributionTransformationIn,
    StatsWithTolLinearType * ValueStatsIn,
    StatsLinearType * MaxValueStatsIn,
    StatsLinearType * MinValueStatsIn,
    OneSidedCapabilityCalculationEnumType * CapabilityCalculationMethodIn,
    StatsLinearType * BonusStatsIn,
    StatsLinearType * MaxFlatnessStatsIn);
  ~FlatnessCharacteristicStatsEvalType();
  void printSelf(FILE * outFile);

  StatsLinearType * getBonusStats();
  void setBonusStats(StatsLinearType * BonusStatsIn);
  StatsLinearType * getMaxFlatnessStats();
  void setMaxFlatnessStats(StatsLinearType * MaxFlatnessStatsIn);

protected:
  StatsLinearType * BonusStats;
  StatsLinearType * MaxFlatnessStats;
};

/* ***************************************************************** */

#endif // STATISTICS_HH
