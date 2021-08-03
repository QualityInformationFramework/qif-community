/*********************************************************************/

#ifndef CHARACTERISTICS_HH
#define CHARACTERISTICS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "IntermediatesPMIClasses.hh"
#include "PrimitivesPDClasses.hh"

/*********************************************************************/

class AngleBetweenCharacteristicDefinitionType;
class AngleBetweenCharacteristicItemType;
class AngleBetweenCharacteristicMeasurementType;
class AngleBetweenCharacteristicNominalType;
class AngleCharacteristicDefinitionType;
class AngleCharacteristicItemType;
class AngleCharacteristicMeasurementType;
class AngleCharacteristicNominalType;
class AngleFromCharacteristicDefinitionType;
class AngleFromCharacteristicItemType;
class AngleFromCharacteristicMeasurementType;
class AngleFromCharacteristicNominalType;
class AngularCharacteristicDefinitionBaseType;
class AngularCharacteristicItemBaseType;
class AngularCharacteristicMeasurementBaseType;
class AngularCharacteristicNominalBaseType;
class AngularCoordinateCharacteristicDefinitionType;
class AngularCoordinateCharacteristicItemType;
class AngularCoordinateCharacteristicMeasurementType;
class AngularCoordinateCharacteristicNominalType;
class AngularityCharacteristicDefinitionType;
class AngularityCharacteristicItemType;
class AngularityCharacteristicMeasurementType;
class AngularityCharacteristicNominalType;
class AreaCharacteristicDefinitionBaseType;
class AreaCharacteristicItemBaseType;
class AreaCharacteristicMeasurementBaseType;
class AreaCharacteristicNominalBaseType;
class ArrayNonDestructiveTestingType;
class AssociatedTolerancedFeatureSpecificationElementEnumType;
class CharacteristicAspectsListsType;
class CharacteristicBalloonLocationEnumType;
class CharacteristicBalloonStyleEnumType;
class CharacteristicBalloonType;
class CharacteristicBaseType;
class CharacteristicDefinitionBaseType;
class CharacteristicDefinitionBaseTypeLisd;
class CharacteristicDefinitionsType;
class CharacteristicDesignatorType;
class CharacteristicGroupStatusType;
class CharacteristicGroupStatusTypeLisd;
class CharacteristicGroupStatusesType;
class CharacteristicGroupType;
class CharacteristicGroupTypeLisd;
class CharacteristicGroupsType;
class CharacteristicItemBaseType;
class CharacteristicItemBaseTypeLisd;
class CharacteristicItemsType;
class CharacteristicManufacturingProcessGroupType;
class CharacteristicMeasurementBaseType;
class CharacteristicMeasurementBaseTypeLisd;
class CharacteristicMeasurementsType;
class CharacteristicNominalBaseType;
class CharacteristicNominalBaseTypeLisd;
class CharacteristicNominalsType;
class CharacteristicStatusEnumType;
class CharacteristicStatusType;
class CharacteristicStatusTypeChoicePair;
class ChordCharacteristicDefinitionType;
class ChordCharacteristicItemType;
class ChordCharacteristicMeasurementType;
class ChordCharacteristicNominalType;
class CircularRunoutCharacteristicDefinitionType;
class CircularRunoutCharacteristicItemType;
class CircularRunoutCharacteristicMeasurementType;
class CircularRunoutCharacteristicNominalType;
class CircularityCharacteristicDefinitionType;
class CircularityCharacteristicItemType;
class CircularityCharacteristicMeasurementType;
class CircularityCharacteristicNominalType;
class CoaxialityCharacteristicDefinitionType;
class CoaxialityCharacteristicItemType;
class CoaxialityCharacteristicMeasurementType;
class CoaxialityCharacteristicNominalType;
class CoaxialityDiametricalZoneType;
class CoaxialityNonDiametricalZoneType;
class CoaxialityZoneShapeType;
class CoaxialityZoneShapeTypeChoicePair;
class CompositeSegmentDefinitionBaseType;
class CompositeSegmentLowerLevelEnumType;
class CompositeSegmentMeasurementBaseType;
class CompositeSegmentPositionDefinitionType;
class CompositeSegmentPositionMeasurementType;
class CompositeSegmentProfileDefinitionType;
class CompositeSegmentProfileMeasurementType;
class CompositeSegmentSymmetryDefinitionType;
class CompositeSegmentSymmetryMeasurementType;
class ConcentricityCharacteristicDefinitionType;
class ConcentricityCharacteristicItemType;
class ConcentricityCharacteristicMeasurementType;
class ConcentricityCharacteristicNominalType;
class ConcentricityDiametricalZoneType;
class ConcentricityNonDiametricalZoneType;
class ConcentricitySphericalZoneType;
class ConcentricityZoneShapeType;
class ConcentricityZoneShapeTypeChoicePair;
class ConicalTaperCharacteristicDefinitionType;
class ConicalTaperCharacteristicItemType;
class ConicalTaperCharacteristicMeasurementType;
class ConicalTaperCharacteristicNominalType;
class ConicityCharacteristicDefinitionType;
class ConicityCharacteristicItemType;
class ConicityCharacteristicMeasurementType;
class ConicityCharacteristicNominalType;
class CoordinateCharacteristicDefinitionBaseType;
class CoordinateCharacteristicItemBaseType;
class CoordinateCharacteristicMeasurementBaseType;
class CoordinateCharacteristicNominalBaseType;
class CriticalityAreaEnumType;
class CriticalityLevelEnumType;
class CriticalityType;
class CurveLengthCharacteristicDefinitionType;
class CurveLengthCharacteristicItemType;
class CurveLengthCharacteristicMeasurementType;
class CurveLengthCharacteristicNominalType;
class CylindricityCharacteristicDefinitionType;
class CylindricityCharacteristicItemType;
class CylindricityCharacteristicMeasurementType;
class CylindricityCharacteristicNominalType;
class DepthCharacteristicDefinitionType;
class DepthCharacteristicItemType;
class DepthCharacteristicMeasurementType;
class DepthCharacteristicNominalType;
class DiameterCharacteristicDefinitionType;
class DiameterCharacteristicItemType;
class DiameterCharacteristicMeasurementType;
class DiameterCharacteristicNominalType;
class DimensionalCharacteristicDefinitionBaseType;
class DimensionalCharacteristicItemBaseType;
class DimensionalCharacteristicMeasurementBaseType;
class DimensionalCharacteristicNominalBaseType;
class DistanceBetweenCharacteristicDefinitionType;
class DistanceBetweenCharacteristicItemType;
class DistanceBetweenCharacteristicMeasurementType;
class DistanceBetweenCharacteristicNominalType;
class DistanceFromCharacteristicDefinitionType;
class DistanceFromCharacteristicItemType;
class DistanceFromCharacteristicMeasurementType;
class DistanceFromCharacteristicNominalType;
class DualNestingIndexFilterSymbolEnumType;
class DualNestingIndexFilterType;
class EllipticityCharacteristicDefinitionType;
class EllipticityCharacteristicItemType;
class EllipticityCharacteristicMeasurementType;
class EllipticityCharacteristicNominalType;
class ExtentEnumType;
class ExtentType;
class ExtentTypeChoicePair;
class FilterType;
class FilterTypeChoicePair;
class FlatTaperCharacteristicDefinitionType;
class FlatTaperCharacteristicItemType;
class FlatTaperCharacteristicMeasurementType;
class FlatTaperCharacteristicNominalType;
class FlatnessCharacteristicDefinitionType;
class FlatnessCharacteristicItemType;
class FlatnessCharacteristicMeasurementType;
class FlatnessCharacteristicNominalType;
class ForceCharacteristicDefinitionBaseType;
class ForceCharacteristicItemBaseType;
class ForceCharacteristicMeasurementBaseType;
class ForceCharacteristicNominalBaseType;
class FormCharacteristicDefinitionBaseType;
class FormCharacteristicItemBaseType;
class FormCharacteristicMeasurementBaseType;
class FormCharacteristicNominalBaseType;
class GeometricCharacteristicDefinitionBaseType;
class GeometricCharacteristicItemBaseType;
class GeometricCharacteristicMeasurementBaseType;
class GeometricCharacteristicNominalBaseType;
class HeightCharacteristicDefinitionType;
class HeightCharacteristicItemType;
class HeightCharacteristicMeasurementType;
class HeightCharacteristicNominalType;
class LengthCharacteristicDefinitionType;
class LengthCharacteristicItemType;
class LengthCharacteristicMeasurementType;
class LengthCharacteristicNominalType;
class LineProfileCharacteristicDefinitionType;
class LineProfileCharacteristicItemType;
class LineProfileCharacteristicMeasurementType;
class LineProfileCharacteristicNominalType;
class LinearCharacteristicDefinitionBaseType;
class LinearCharacteristicItemBaseType;
class LinearCharacteristicMeasurementBaseType;
class LinearCharacteristicNominalBaseType;
class LinearCoordinateCharacteristicDefinitionType;
class LinearCoordinateCharacteristicItemType;
class LinearCoordinateCharacteristicMeasurementType;
class LinearCoordinateCharacteristicNominalType;
class LocationCharacteristicDefinitionBaseType;
class LocationCharacteristicItemBaseType;
class LocationCharacteristicMeasurementBaseType;
class LocationCharacteristicNominalBaseType;
class LocationOnDrawingType;
class LocationOnDrawingTypeChoicePair;
class LocationSignificanceAllEnumType;
class LocationSignificanceOneSidesEnumType;
class LocationSignificanceSpotSeamEnumType;
class MassCharacteristicDefinitionBaseType;
class MassCharacteristicItemBaseType;
class MassCharacteristicMeasurementBaseType;
class MassCharacteristicNominalBaseType;
class MeasuredCharacteristicsType;
class MeasuredZoneRadiiType;
class NonDestructiveTestingEnumType;
class NonDestructiveTestingEnumTypeLisd;
class OrientationCharacteristicDefinitionBaseType;
class OrientationCharacteristicItemBaseType;
class OrientationCharacteristicMeasurementBaseType;
class OrientationCharacteristicNominalBaseType;
class OrientationDiametricalZoneType;
class OrientationPlanarZoneType;
class OrientationZoneShapeType;
class OrientationZoneShapeTypeChoicePair;
class OriginReferenceType;
class OriginReferenceTypeChoicePair;
class OtherFormCharacteristicDefinitionType;
class OtherFormCharacteristicItemType;
class OtherFormCharacteristicMeasurementType;
class OtherFormCharacteristicNominalType;
class ParallelismCharacteristicDefinitionType;
class ParallelismCharacteristicItemType;
class ParallelismCharacteristicMeasurementType;
class ParallelismCharacteristicNominalType;
class PerpendicularityCharacteristicDefinitionType;
class PerpendicularityCharacteristicItemType;
class PerpendicularityCharacteristicMeasurementType;
class PerpendicularityCharacteristicNominalType;
class PointDeviationType;
class PointDeviationTypeLisd;
class PointDeviationsType;
class PointProfileCharacteristicDefinitionType;
class PointProfileCharacteristicItemType;
class PointProfileCharacteristicMeasurementType;
class PointProfileCharacteristicNominalType;
class PositionCharacteristicDefinitionType;
class PositionCharacteristicItemType;
class PositionCharacteristicMeasurementType;
class PositionCharacteristicNominalType;
class PositionCoordinateMethodEnumType;
class PositionCoordinateMethodType;
class PositionDiametricalZoneType;
class PositionNonDiametricalZoneType;
class PositionSphericalZoneType;
class PositionZoneShapeType;
class PositionZoneShapeTypeChoicePair;
class PressureCharacteristicDefinitionBaseType;
class PressureCharacteristicItemBaseType;
class PressureCharacteristicMeasurementBaseType;
class PressureCharacteristicNominalBaseType;
class ProfileCharacteristicDefinitionBaseType;
class ProfileCharacteristicItemBaseType;
class ProfileCharacteristicMeasurementBaseType;
class ProfileCharacteristicNominalBaseType;
class RadiusCharacteristicDefinitionType;
class RadiusCharacteristicItemType;
class RadiusCharacteristicMeasurementType;
class RadiusCharacteristicNominalType;
class ReferenceFeatureAssociationSpecificationElementEnumType;
class ReferenceFeatureAssociationSpecificationElementType;
class ReferenceFeatureAssociationSpecificationParameterEnumType;
class RoughnessApplicabilityEnumType;
class RoughnessLayEnumType;
class RoughnessObtentionEnumType;
class RunoutCharacteristicDefinitionBaseType;
class RunoutCharacteristicItemBaseType;
class RunoutCharacteristicMeasurementBaseType;
class RunoutCharacteristicNominalBaseType;
class SimultaneousRequirementEnumType;
class SimultaneousRequirementGroupType;
class SimultaneousRequirementGroupTypeLisd;
class SimultaneousRequirementGroupsType;
class SingleNestingIndexFilterSymbolEnumType;
class SingleNestingIndexFilterType;
class SpeedCharacteristicDefinitionBaseType;
class SpeedCharacteristicItemBaseType;
class SpeedCharacteristicMeasurementBaseType;
class SpeedCharacteristicNominalBaseType;
class SphericalDiameterCharacteristicDefinitionType;
class SphericalDiameterCharacteristicItemType;
class SphericalDiameterCharacteristicMeasurementType;
class SphericalDiameterCharacteristicNominalType;
class SphericalRadiusCharacteristicDefinitionType;
class SphericalRadiusCharacteristicItemType;
class SphericalRadiusCharacteristicMeasurementType;
class SphericalRadiusCharacteristicNominalType;
class SphericityCharacteristicDefinitionType;
class SphericityCharacteristicItemType;
class SphericityCharacteristicMeasurementType;
class SphericityCharacteristicNominalType;
class SquareCharacteristicDefinitionType;
class SquareCharacteristicItemType;
class SquareCharacteristicMeasurementType;
class SquareCharacteristicNominalType;
class StraightnessCharacteristicDefinitionType;
class StraightnessCharacteristicItemType;
class StraightnessCharacteristicMeasurementType;
class StraightnessCharacteristicNominalType;
class StraightnessDiametricalZoneType;
class StraightnessNonDiametricalZoneType;
class StraightnessZoneShapeType;
class StraightnessZoneShapeTypeChoicePair;
class StringValuesType;
class SurfaceProfileCharacteristicDefinitionType;
class SurfaceProfileCharacteristicItemType;
class SurfaceProfileCharacteristicMeasurementType;
class SurfaceProfileCharacteristicNominalType;
class SurfaceProfileNonUniformCharacteristicDefinitionType;
class SurfaceProfileNonUniformCharacteristicItemType;
class SurfaceProfileNonUniformCharacteristicMeasurementType;
class SurfaceProfileNonUniformCharacteristicNominalType;
class SurfaceTextureCharacteristicDefinitionType;
class SurfaceTextureCharacteristicItemType;
class SurfaceTextureCharacteristicMeasurementType;
class SurfaceTextureCharacteristicNominalType;
class SymmetryCharacteristicDefinitionType;
class SymmetryCharacteristicItemType;
class SymmetryCharacteristicMeasurementType;
class SymmetryCharacteristicNominalType;
class TemperatureCharacteristicDefinitionBaseType;
class TemperatureCharacteristicItemBaseType;
class TemperatureCharacteristicMeasurementBaseType;
class TemperatureCharacteristicNominalBaseType;
class ThicknessCharacteristicDefinitionType;
class ThicknessCharacteristicItemType;
class ThicknessCharacteristicMeasurementType;
class ThicknessCharacteristicNominalType;
class ThreadCharacteristicDefinitionType;
class ThreadCharacteristicItemType;
class ThreadCharacteristicMeasurementType;
class ThreadCharacteristicNominalType;
class TimeCharacteristicDefinitionBaseType;
class TimeCharacteristicItemBaseType;
class TimeCharacteristicMeasurementBaseType;
class TimeCharacteristicNominalBaseType;
class ToleranceDefinitionsType;
class ToleranceDefinitionsTypeChoicePair;
class ToleranceDefinitionsTypeChoicePairLisd;
class ToroidicityCharacteristicDefinitionType;
class ToroidicityCharacteristicItemType;
class ToroidicityCharacteristicMeasurementType;
class ToroidicityCharacteristicNominalType;
class TotalRunoutCharacteristicDefinitionType;
class TotalRunoutCharacteristicItemType;
class TotalRunoutCharacteristicMeasurementType;
class TotalRunoutCharacteristicNominalType;
class UserDefinedAngularCharacteristicDefinitionType;
class UserDefinedAngularCharacteristicItemType;
class UserDefinedAngularCharacteristicMeasurementType;
class UserDefinedAngularCharacteristicNominalType;
class UserDefinedAreaCharacteristicDefinitionType;
class UserDefinedAreaCharacteristicItemType;
class UserDefinedAreaCharacteristicMeasurementType;
class UserDefinedAreaCharacteristicNominalType;
class UserDefinedAttributeCharacteristicDefinitionType;
class UserDefinedAttributeCharacteristicItemType;
class UserDefinedAttributeCharacteristicMeasurementType;
class UserDefinedAttributeCharacteristicNominalType;
class UserDefinedForceCharacteristicDefinitionType;
class UserDefinedForceCharacteristicItemType;
class UserDefinedForceCharacteristicMeasurementType;
class UserDefinedForceCharacteristicNominalType;
class UserDefinedLinearCharacteristicDefinitionType;
class UserDefinedLinearCharacteristicItemType;
class UserDefinedLinearCharacteristicMeasurementType;
class UserDefinedLinearCharacteristicNominalType;
class UserDefinedMassCharacteristicDefinitionType;
class UserDefinedMassCharacteristicItemType;
class UserDefinedMassCharacteristicMeasurementType;
class UserDefinedMassCharacteristicNominalType;
class UserDefinedPressureCharacteristicDefinitionType;
class UserDefinedPressureCharacteristicItemType;
class UserDefinedPressureCharacteristicMeasurementType;
class UserDefinedPressureCharacteristicNominalType;
class UserDefinedSpeedCharacteristicDefinitionType;
class UserDefinedSpeedCharacteristicItemType;
class UserDefinedSpeedCharacteristicMeasurementType;
class UserDefinedSpeedCharacteristicNominalType;
class UserDefinedTemperatureCharacteristicDefinitionType;
class UserDefinedTemperatureCharacteristicItemType;
class UserDefinedTemperatureCharacteristicMeasurementType;
class UserDefinedTemperatureCharacteristicNominalType;
class UserDefinedTimeCharacteristicDefinitionType;
class UserDefinedTimeCharacteristicItemType;
class UserDefinedTimeCharacteristicMeasurementType;
class UserDefinedTimeCharacteristicNominalType;
class UserDefinedUnitCharacteristicDefinitionType;
class UserDefinedUnitCharacteristicItemType;
class UserDefinedUnitCharacteristicMeasurementType;
class UserDefinedUnitCharacteristicNominalType;
class WeldBevelCharacteristicDefinitionType;
class WeldBevelCharacteristicItemType;
class WeldBevelCharacteristicMeasurementType;
class WeldBevelCharacteristicNominalType;
class WeldCharacteristicDefinitionBaseType;
class WeldCharacteristicItemBaseType;
class WeldCharacteristicMeasurementBaseType;
class WeldCharacteristicNominalBaseType;
class WeldCompoundCharacteristicDefinitionType;
class WeldCompoundCharacteristicItemType;
class WeldCompoundCharacteristicMeasurementType;
class WeldCompoundCharacteristicNominalType;
class WeldContourSymbolEnumType;
class WeldEdgeCharacteristicDefinitionType;
class WeldEdgeCharacteristicItemType;
class WeldEdgeCharacteristicMeasurementType;
class WeldEdgeCharacteristicNominalType;
class WeldFilletBothSidesType;
class WeldFilletCharacteristicDefinitionType;
class WeldFilletCharacteristicItemType;
class WeldFilletCharacteristicMeasurementType;
class WeldFilletCharacteristicNominalType;
class WeldFilletEqualLegLengthType;
class WeldFilletOneSideInBothSidesType;
class WeldFilletOneSideType;
class WeldFilletUnequalLegLengthType;
class WeldFinishingDesignatorEnumType;
class WeldFinishingType;
class WeldFlareBevelCharacteristicDefinitionType;
class WeldFlareBevelCharacteristicItemType;
class WeldFlareBevelCharacteristicMeasurementType;
class WeldFlareBevelCharacteristicNominalType;
class WeldFlareVCharacteristicDefinitionType;
class WeldFlareVCharacteristicItemType;
class WeldFlareVCharacteristicMeasurementType;
class WeldFlareVCharacteristicNominalType;
class WeldGrooveBothSidesBaseType;
class WeldGrooveBothSidesExtendedType;
class WeldGrooveCharacteristicMeasurementType;
class WeldGrooveCharacteristicNominalType;
class WeldGrooveOneSideParametersType;
class WeldGrooveOneSideType;
class WeldJCharacteristicDefinitionType;
class WeldJCharacteristicItemType;
class WeldJCharacteristicMeasurementType;
class WeldJCharacteristicNominalType;
class WeldOneSideParametersBaseType;
class WeldOneSideParametersExtendSizeType;
class WeldOneSideParametersExtendType;
class WeldPlugCharacteristicDefinitionType;
class WeldPlugCharacteristicItemType;
class WeldPlugCharacteristicMeasurementType;
class WeldPlugCharacteristicNominalType;
class WeldPlugOneSideParametersType;
class WeldScarfCharacteristicDefinitionType;
class WeldScarfCharacteristicItemType;
class WeldScarfCharacteristicMeasurementType;
class WeldScarfCharacteristicNominalType;
class WeldSeamCharacteristicDefinitionType;
class WeldSeamCharacteristicItemType;
class WeldSeamCharacteristicMeasurementType;
class WeldSeamCharacteristicNominalType;
class WeldSlotCharacteristicDefinitionType;
class WeldSlotCharacteristicItemType;
class WeldSlotCharacteristicMeasurementType;
class WeldSlotCharacteristicNominalType;
class WeldSpotCharacteristicDefinitionType;
class WeldSpotCharacteristicItemType;
class WeldSpotCharacteristicMeasurementType;
class WeldSpotCharacteristicNominalType;
class WeldSpotOneSideParametersType;
class WeldSquareCharacteristicDefinitionType;
class WeldSquareCharacteristicItemType;
class WeldSquareCharacteristicMeasurementType;
class WeldSquareCharacteristicNominalType;
class WeldStudCharacteristicDefinitionType;
class WeldStudCharacteristicItemType;
class WeldStudCharacteristicMeasurementType;
class WeldStudCharacteristicNominalType;
class WeldSupplementarySymbolEnumType;
class WeldSurfacingCharacteristicDefinitionType;
class WeldSurfacingCharacteristicItemType;
class WeldSurfacingCharacteristicMeasurementType;
class WeldSurfacingCharacteristicNominalType;
class WeldUCharacteristicDefinitionType;
class WeldUCharacteristicItemType;
class WeldUCharacteristicMeasurementType;
class WeldUCharacteristicNominalType;
class WeldVCharacteristicDefinitionType;
class WeldVCharacteristicItemType;
class WeldVCharacteristicMeasurementType;
class WeldVCharacteristicNominalType;
class WeldingProcessEnumType;
class WeldingProcessSuffixEnumType;
class WeldingProcessType;
class WidthCharacteristicDefinitionType;
class WidthCharacteristicItemType;
class WidthCharacteristicMeasurementType;
class WidthCharacteristicNominalType;
class AngularCharacte_1045_Type;
class AngularCharacte_1045_TypeChoicePair;
class AngularCoordina_1046_Type;
class AngularCoordina_1046_TypeChoicePair;
class AreaCharacteris_1047_Type;
class AreaCharacteris_1047_TypeChoicePair;
class CircularityChar_1048_Type;
class CircularityChar_1048_TypeChoicePair;
class CircularityChar_1049_Type;
class CriticalityType_1050_Type;
class CriticalityType_1050_TypeChoicePair;
class CriticalityType_1051_Type;
class CriticalityType_1051_TypeChoicePair;
class CylindricityCha_1052_Type;
class CylindricityCha_1052_TypeChoicePair;
class CylindricityCha_1053_Type;
class DiameterCharact_1054_Type;
class DiameterCharact_1054_TypeChoicePair;
class FlatnessCharact_1055_Type;
class FlatnessCharact_1055_TypeChoicePair;
class ForceCharacteri_1056_Type;
class ForceCharacteri_1056_TypeChoicePair;
class GeometricCharac_1057_Type;
class GeometricCharac_1057_TypeChoicePair;
class LinearCharacter_1058_Type;
class LinearCharacter_1058_TypeChoicePair;
class LinearCoordinat_1059_Type;
class LinearCoordinat_1059_TypeChoicePair;
class LocationOnDrawi_1060_Type;
class LocationOnDrawi_1061_Type;
class LocationOnDrawi_1062_Type;
class MassCharacteris_1063_Type;
class MassCharacteris_1063_TypeChoicePair;
class OrientationChar_1064_Type;
class OrientationChar_1064_TypeChoicePair;
class OriginReference_1065_Type;
class PressureCharact_1066_Type;
class PressureCharact_1066_TypeChoicePair;
class ProfileCharacte_1067_Type;
class ProfileCharacte_1067_TypeChoicePair;
class SpeedCharacteri_1068_Type;
class SpeedCharacteri_1068_TypeChoicePair;
class SphericityChara_1069_Type;
class StraightnessCha_1070_Type;
class StraightnessCha_1070_TypeChoicePair;
class SurfaceProfileN_1071_Type;
class SurfaceProfileN_1071_TypeChoicePair;
class TemperatureChar_1072_Type;
class TemperatureChar_1072_TypeChoicePair;
class TimeCharacteris_1073_Type;
class TimeCharacteris_1073_TypeChoicePair;
class UserDefinedUnit_1074_Type;
class UserDefinedUnit_1074_TypeChoicePair;
class WeldFilletChara_1075_Type;
class WeldFilletChara_1075_TypeChoicePair;
class WeldFilletChara_1076_Type;
class WeldFilletChara_1076_TypeChoicePair;
class WeldFilletOneSi_1077_Type;
class WeldFilletOneSi_1077_TypeChoicePair;
class WeldGrooveChara_1078_Type;
class WeldGrooveChara_1078_TypeChoicePair;
class WeldGrooveChara_1079_Type;
class WeldGrooveChara_1079_TypeChoicePair;
class WeldGrooveOneSi_1080_Type;
class CircularityChar_1081_Type;
class CircularityChar_1082_Type;
class CircularityChar_1082_TypeChoicePair;
class CylindricityCha_1083_Type;
class CylindricityCha_1084_Type;
class CylindricityCha_1084_TypeChoicePair;
class FlatnessCharact_1085_Type;
class FlatnessCharact_1086_Type;
class StraightnessCha_1087_Type;
class StraightnessCha_1088_Type;
class UserDefinedUnit_1089_Type;
class CircularityChar_1090_Type;
class CircularityChar_1090_TypeChoicePair;
class CylindricityCha_1091_Type;
class CylindricityCha_1091_TypeChoicePair;

/*********************************************************************/
/*********************************************************************/

class ArrayNonDestructiveTestingType :
  public XmlTypeBase
{
public:
  ArrayNonDestructiveTestingType();
  ArrayNonDestructiveTestingType(
    NonDestructiveTestingEnumTypeLisd * TypeOfTestIn);
  ArrayNonDestructiveTestingType(
    NaturalType * nIn,
    NonDestructiveTestingEnumTypeLisd * TypeOfTestIn);
  ~ArrayNonDestructiveTestingType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  NonDestructiveTestingEnumTypeLisd * getTypeOfTest();
  void setTypeOfTest(NonDestructiveTestingEnumTypeLisd *);

protected:
  NaturalType * n;
  NonDestructiveTestingEnumTypeLisd * TypeOfTest;
};

/*********************************************************************/

class AssociatedTolerancedFeatureSpecificationElementEnumType :
  public XmlNMTOKEN
{
public:
  AssociatedTolerancedFeatureSpecificationElementEnumType();
  AssociatedTolerancedFeatureSpecificationElementEnumType(
    const char * valIn);
  ~AssociatedTolerancedFeatureSpecificationElementEnumType();
  bool AssociatedTolerancedFeatureSpecificationElementEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class CharacteristicAspectsListsType :
  public XmlTypeBase
{
public:
  CharacteristicAspectsListsType();
  CharacteristicAspectsListsType(
    QIFReferenceType * FormalStandardIdIn,
    CharacteristicDefinitionsType * CharacteristicDefinitionsIn,
    CharacteristicDefinitionsType * DefaultCharacteristicDefinitionsIn,
    ToleranceDefinitionsType * DefaultToleranceDefinitionsIn,
    CharacteristicNominalsType * CharacteristicNominalsIn,
    CharacteristicItemsType * CharacteristicItemsIn,
    CharacteristicGroupsType * CharacteristicGroupsIn,
    SimultaneousRequirementGroupsType * SimultaneousRequirementGroupsIn);
  ~CharacteristicAspectsListsType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getFormalStandardId();
  void setFormalStandardId(QIFReferenceType * FormalStandardIdIn);
  CharacteristicDefinitionsType * getCharacteristicDefinitions();
  void setCharacteristicDefinitions(CharacteristicDefinitionsType * CharacteristicDefinitionsIn);
  CharacteristicDefinitionsType * getDefaultCharacteristicDefinitions();
  void setDefaultCharacteristicDefinitions(CharacteristicDefinitionsType * DefaultCharacteristicDefinitionsIn);
  ToleranceDefinitionsType * getDefaultToleranceDefinitions();
  void setDefaultToleranceDefinitions(ToleranceDefinitionsType * DefaultToleranceDefinitionsIn);
  CharacteristicNominalsType * getCharacteristicNominals();
  void setCharacteristicNominals(CharacteristicNominalsType * CharacteristicNominalsIn);
  CharacteristicItemsType * getCharacteristicItems();
  void setCharacteristicItems(CharacteristicItemsType * CharacteristicItemsIn);
  CharacteristicGroupsType * getCharacteristicGroups();
  void setCharacteristicGroups(CharacteristicGroupsType * CharacteristicGroupsIn);
  SimultaneousRequirementGroupsType * getSimultaneousRequirementGroups();
  void setSimultaneousRequirementGroups(SimultaneousRequirementGroupsType * SimultaneousRequirementGroupsIn);

protected:
  QIFReferenceType * FormalStandardId;
  CharacteristicDefinitionsType * CharacteristicDefinitions;
  CharacteristicDefinitionsType * DefaultCharacteristicDefinitions;
  ToleranceDefinitionsType * DefaultToleranceDefinitions;
  CharacteristicNominalsType * CharacteristicNominals;
  CharacteristicItemsType * CharacteristicItems;
  CharacteristicGroupsType * CharacteristicGroups;
  SimultaneousRequirementGroupsType * SimultaneousRequirementGroups;
};

/*********************************************************************/

class CharacteristicBalloonLocationEnumType :
  public XmlNMTOKEN
{
public:
  CharacteristicBalloonLocationEnumType();
  CharacteristicBalloonLocationEnumType(
    const char * valIn);
  ~CharacteristicBalloonLocationEnumType();
  bool CharacteristicBalloonLocationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class CharacteristicBalloonStyleEnumType :
  public XmlNMTOKEN
{
public:
  CharacteristicBalloonStyleEnumType();
  CharacteristicBalloonStyleEnumType(
    const char * valIn);
  ~CharacteristicBalloonStyleEnumType();
  bool CharacteristicBalloonStyleEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class CharacteristicBalloonType :
  public XmlTypeBase
{
public:
  CharacteristicBalloonType();
  CharacteristicBalloonType(
    CharacteristicBalloonLocationEnumType * BalloonLocationIn,
    CharacteristicBalloonStyleEnumType * BalloonStyleIn);
  ~CharacteristicBalloonType();
  void printSelf(FILE * outFile);

  CharacteristicBalloonLocationEnumType * getBalloonLocation();
  void setBalloonLocation(CharacteristicBalloonLocationEnumType * BalloonLocationIn);
  CharacteristicBalloonStyleEnumType * getBalloonStyle();
  void setBalloonStyle(CharacteristicBalloonStyleEnumType * BalloonStyleIn);

protected:
  CharacteristicBalloonLocationEnumType * BalloonLocation;
  CharacteristicBalloonStyleEnumType * BalloonStyle;
};

/*********************************************************************/

class CharacteristicBaseType :
  public XmlTypeBase
{
public:
  CharacteristicBaseType();
  CharacteristicBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn);
  CharacteristicBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn);
  ~CharacteristicBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlString * Description;
};

/*********************************************************************/

class CharacteristicDefinitionBaseType :
  public CharacteristicBaseType
{
public:
  CharacteristicDefinitionBaseType();
  CharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  CharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~CharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getName();
  void setName(XmlToken * NameIn);
  CharacteristicDesignatorType * getCharacteristicDesignator();
  void setCharacteristicDesignator(CharacteristicDesignatorType * CharacteristicDesignatorIn);
  XmlBoolean * getFreeState();
  void setFreeState(XmlBoolean * FreeStateIn);
  XmlBoolean * getStatisticalCharacteristic();
  void setStatisticalCharacteristic(XmlBoolean * StatisticalCharacteristicIn);
  XmlBoolean * getCommonZone();
  void setCommonZone(XmlBoolean * CommonZoneIn);
  XmlBoolean * getCommonTolerance();
  void setCommonTolerance(XmlBoolean * CommonToleranceIn);
  XmlBoolean * getMedianFeature();
  void setMedianFeature(XmlBoolean * MedianFeatureIn);
  XmlBoolean * getEnvelopeRequirement();
  void setEnvelopeRequirement(XmlBoolean * EnvelopeRequirementIn);
  XmlBoolean * getIndependency();
  void setIndependency(XmlBoolean * IndependencyIn);
  XmlBoolean * getUnitedOrContinuousFeature();
  void setUnitedOrContinuousFeature(XmlBoolean * UnitedOrContinuousFeatureIn);
  XmlBoolean * getSeparateZone();
  void setSeparateZone(XmlBoolean * SeparateZoneIn);

protected:
  XmlToken * Name;
  CharacteristicDesignatorType * CharacteristicDesignator;
  XmlBoolean * FreeState;
  XmlBoolean * StatisticalCharacteristic;
  XmlBoolean * CommonZone;
  XmlBoolean * CommonTolerance;
  XmlBoolean * MedianFeature;
  XmlBoolean * EnvelopeRequirement;
  XmlBoolean * Independency;
  XmlBoolean * UnitedOrContinuousFeature;
  XmlBoolean * SeparateZone;
};

/*********************************************************************/

class CharacteristicDefinitionBaseTypeLisd :
  public std::list<CharacteristicDefinitionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  CharacteristicDefinitionBaseTypeLisd();
  CharacteristicDefinitionBaseTypeLisd(
    CharacteristicDefinitionBaseType * aCharacteristicDefinitionBaseType);
  ~CharacteristicDefinitionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CharacteristicDefinitionsType :
  public XmlTypeBase
{
public:
  CharacteristicDefinitionsType();
  CharacteristicDefinitionsType(
    CharacteristicDefinitionBaseTypeLisd * CharacteristicDefinitionIn);
  CharacteristicDefinitionsType(
    NaturalType * nIn,
    CharacteristicDefinitionBaseTypeLisd * CharacteristicDefinitionIn);
  ~CharacteristicDefinitionsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CharacteristicDefinitionBaseTypeLisd * getCharacteristicDefinition();
  void setCharacteristicDefinition(CharacteristicDefinitionBaseTypeLisd *);

protected:
  NaturalType * n;
  CharacteristicDefinitionBaseTypeLisd * CharacteristicDefinition;
};

/*********************************************************************/

class CharacteristicDesignatorType :
  public XmlTypeBase
{
public:
  CharacteristicDesignatorType();
  CharacteristicDesignatorType(
    XmlToken * DesignatorIn,
    QPIdType * UUIDIn,
    CriticalityType * CriticalityIn,
    CharacteristicBalloonType * BalloonIn);
  ~CharacteristicDesignatorType();
  void printSelf(FILE * outFile);

  XmlToken * getDesignator();
  void setDesignator(XmlToken * DesignatorIn);
  QPIdType * getUUID();
  void setUUID(QPIdType * UUIDIn);
  CriticalityType * getCriticality();
  void setCriticality(CriticalityType * CriticalityIn);
  CharacteristicBalloonType * getBalloon();
  void setBalloon(CharacteristicBalloonType * BalloonIn);

protected:
  XmlToken * Designator;
  QPIdType * UUID;
  CriticalityType * Criticality;
  CharacteristicBalloonType * Balloon;
};

/*********************************************************************/

class CharacteristicGroupStatusType :
  public XmlTypeBase
{
public:
  CharacteristicGroupStatusType();
  CharacteristicGroupStatusType(
    CharacteristicStatusType * StatusIn,
    QIFReferenceFullType * GroupIdIn);
  ~CharacteristicGroupStatusType();
  void printSelf(FILE * outFile);

  CharacteristicStatusType * getStatus();
  void setStatus(CharacteristicStatusType * StatusIn);
  QIFReferenceFullType * getGroupId();
  void setGroupId(QIFReferenceFullType * GroupIdIn);

protected:
  CharacteristicStatusType * Status;
  QIFReferenceFullType * GroupId;
};

/*********************************************************************/

class CharacteristicGroupStatusTypeLisd :
  public std::list<CharacteristicGroupStatusType *>,
  public XmlSchemaInstanceBase
{
public:
  CharacteristicGroupStatusTypeLisd();
  CharacteristicGroupStatusTypeLisd(
    CharacteristicGroupStatusType * aCharacteristicGroupStatusType);
  ~CharacteristicGroupStatusTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CharacteristicGroupStatusesType :
  public XmlTypeBase
{
public:
  CharacteristicGroupStatusesType();
  CharacteristicGroupStatusesType(
    CharacteristicGroupStatusTypeLisd * CharacteristicGroupStatusIn);
  CharacteristicGroupStatusesType(
    NaturalType * nIn,
    CharacteristicGroupStatusTypeLisd * CharacteristicGroupStatusIn);
  ~CharacteristicGroupStatusesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CharacteristicGroupStatusTypeLisd * getCharacteristicGroupStatus();
  void setCharacteristicGroupStatus(CharacteristicGroupStatusTypeLisd *);

protected:
  NaturalType * n;
  CharacteristicGroupStatusTypeLisd * CharacteristicGroupStatus;
};

/*********************************************************************/

class CharacteristicGroupType :
  public XmlTypeBase
{
public:
  CharacteristicGroupType();
  CharacteristicGroupType(
    ArrayReferenceType * CharacteristicItemIdsIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    QIFReferenceType * TransformIdIn,
    OtherUnitsType * UnitsIn,
    ScaleType * ScaleIn,
    AttributesType * AttributesIn);
  CharacteristicGroupType(
    QIFIdType * idIn,
    ArrayReferenceType * CharacteristicItemIdsIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    QIFReferenceType * TransformIdIn,
    OtherUnitsType * UnitsIn,
    ScaleType * ScaleIn,
    AttributesType * AttributesIn);
  ~CharacteristicGroupType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  ArrayReferenceType * getCharacteristicItemIds();
  void setCharacteristicItemIds(ArrayReferenceType * CharacteristicItemIdsIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);
  QIFReferenceType * getTransformId();
  void setTransformId(QIFReferenceType * TransformIdIn);
  OtherUnitsType * getUnits();
  void setUnits(OtherUnitsType * UnitsIn);
  ScaleType * getScale();
  void setScale(ScaleType * ScaleIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFIdType * id;
  ArrayReferenceType * CharacteristicItemIds;
  XmlString * Description;
  XmlToken * Name;
  QIFReferenceType * TransformId;
  OtherUnitsType * Units;
  ScaleType * Scale;
  AttributesType * Attributes;
};

/*********************************************************************/

class CharacteristicGroupTypeLisd :
  public std::list<CharacteristicGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  CharacteristicGroupTypeLisd();
  CharacteristicGroupTypeLisd(
    CharacteristicGroupType * aCharacteristicGroupType);
  ~CharacteristicGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CharacteristicGroupsType :
  public XmlTypeBase
{
public:
  CharacteristicGroupsType();
  CharacteristicGroupsType(
    CharacteristicGroupTypeLisd * CharacteristicGroupIn);
  CharacteristicGroupsType(
    NaturalType * nIn,
    CharacteristicGroupTypeLisd * CharacteristicGroupIn);
  ~CharacteristicGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CharacteristicGroupTypeLisd * getCharacteristicGroup();
  void setCharacteristicGroup(CharacteristicGroupTypeLisd *);

protected:
  NaturalType * n;
  CharacteristicGroupTypeLisd * CharacteristicGroup;
};

/*********************************************************************/

class CharacteristicItemBaseType :
  public CharacteristicBaseType
{
public:
  CharacteristicItemBaseType();
  CharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getName();
  void setName(XmlToken * NameIn);
  CharacteristicDesignatorType * getCharacteristicDesignator();
  void setCharacteristicDesignator(CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ArrayReferenceType * getFeatureItemIds();
  void setFeatureItemIds(ArrayReferenceType * FeatureItemIdsIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  ArrayReferenceType * getNotableEventIds();
  void setNotableEventIds(ArrayReferenceType * NotableEventIdsIn);
  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  QIFReferenceFullType * getCharacteristicNominalId();
  void setCharacteristicNominalId(QIFReferenceFullType * CharacteristicNominalIdIn);
  LocationOnDrawingType * getLocationOnDrawing();
  void setLocationOnDrawing(LocationOnDrawingType * LocationOnDrawingIn);
  VirtualMeasurementType * getVirtualMeasurement();
  void setVirtualMeasurement(VirtualMeasurementType * VirtualMeasurementIn);

protected:
  XmlToken * Name;
  CharacteristicDesignatorType * CharacteristicDesignator;
  ArrayReferenceType * FeatureItemIds;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
  ArrayReferenceType * NotableEventIds;
  ArrayReferenceType * MeasurementDeviceIds;
  QIFReferenceFullType * CharacteristicNominalId;
  LocationOnDrawingType * LocationOnDrawing;
  VirtualMeasurementType * VirtualMeasurement;
};

/*********************************************************************/

class CharacteristicItemBaseTypeLisd :
  public std::list<CharacteristicItemBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  CharacteristicItemBaseTypeLisd();
  CharacteristicItemBaseTypeLisd(
    CharacteristicItemBaseType * aCharacteristicItemBaseType);
  ~CharacteristicItemBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CharacteristicItemsType :
  public XmlTypeBase
{
public:
  CharacteristicItemsType();
  CharacteristicItemsType(
    CharacteristicItemBaseTypeLisd * CharacteristicItemIn);
  CharacteristicItemsType(
    NaturalType * nIn,
    CharacteristicItemBaseTypeLisd * CharacteristicItemIn);
  ~CharacteristicItemsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CharacteristicItemBaseTypeLisd * getCharacteristicItem();
  void setCharacteristicItem(CharacteristicItemBaseTypeLisd *);

protected:
  NaturalType * n;
  CharacteristicItemBaseTypeLisd * CharacteristicItem;
};

/*********************************************************************/

class CharacteristicManufacturingProcessGroupType :
  public CharacteristicGroupType
{
public:
  CharacteristicManufacturingProcessGroupType();
  CharacteristicManufacturingProcessGroupType(
    ArrayReferenceType * CharacteristicItemIdsIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    QIFReferenceType * TransformIdIn,
    OtherUnitsType * UnitsIn,
    ScaleType * ScaleIn,
    AttributesType * AttributesIn,
    QIFReferenceType * ManufacturingProcessIdIn);
  CharacteristicManufacturingProcessGroupType(
    QIFIdType * idIn,
    ArrayReferenceType * CharacteristicItemIdsIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    QIFReferenceType * TransformIdIn,
    OtherUnitsType * UnitsIn,
    ScaleType * ScaleIn,
    AttributesType * AttributesIn,
    QIFReferenceType * ManufacturingProcessIdIn);
  ~CharacteristicManufacturingProcessGroupType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn);

protected:
  QIFReferenceType * ManufacturingProcessId;
};

/*********************************************************************/

class CharacteristicMeasurementBaseType :
  public CharacteristicBaseType
{
public:
  CharacteristicMeasurementBaseType();
  CharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn);
  CharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn);
  ~CharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CharacteristicStatusType * getStatus();
  void setStatus(CharacteristicStatusType * StatusIn);
  QIFReferenceType * getCharacteristicItemId();
  void setCharacteristicItemId(QIFReferenceType * CharacteristicItemIdIn);
  XmlDateTime * getTimeStamp();
  void setTimeStamp(XmlDateTime * TimeStampIn);
  ArrayReferenceType * getFeatureMeasurementIds();
  void setFeatureMeasurementIds(ArrayReferenceType * FeatureMeasurementIdsIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  QIFReferenceType * getActualComponentId();
  void setActualComponentId(QIFReferenceType * ActualComponentIdIn);
  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  QIFReferenceType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn);
  ArrayReferenceType * getNotedEventIds();
  void setNotedEventIds(ArrayReferenceType * NotedEventIdsIn);
  XmlToken * getNonConformanceDesignator();
  void setNonConformanceDesignator(XmlToken * NonConformanceDesignatorIn);

protected:
  CharacteristicStatusType * Status;
  QIFReferenceType * CharacteristicItemId;
  XmlDateTime * TimeStamp;
  ArrayReferenceType * FeatureMeasurementIds;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
  QIFReferenceType * ActualComponentId;
  ArrayReferenceType * MeasurementDeviceIds;
  QIFReferenceType * ManufacturingProcessId;
  ArrayReferenceType * NotedEventIds;
  XmlToken * NonConformanceDesignator;
};

/*********************************************************************/

class CharacteristicMeasurementBaseTypeLisd :
  public std::list<CharacteristicMeasurementBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  CharacteristicMeasurementBaseTypeLisd();
  CharacteristicMeasurementBaseTypeLisd(
    CharacteristicMeasurementBaseType * aCharacteristicMeasurementBaseType);
  ~CharacteristicMeasurementBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CharacteristicMeasurementsType :
  public XmlTypeBase
{
public:
  CharacteristicMeasurementsType();
  CharacteristicMeasurementsType(
    CharacteristicMeasurementBaseTypeLisd * CharacteristicMeasurementIn);
  CharacteristicMeasurementsType(
    NaturalType * nIn,
    CharacteristicMeasurementBaseTypeLisd * CharacteristicMeasurementIn);
  ~CharacteristicMeasurementsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CharacteristicMeasurementBaseTypeLisd * getCharacteristicMeasurement();
  void setCharacteristicMeasurement(CharacteristicMeasurementBaseTypeLisd *);

protected:
  NaturalType * n;
  CharacteristicMeasurementBaseTypeLisd * CharacteristicMeasurement;
};

/*********************************************************************/

class CharacteristicNominalBaseType :
  public CharacteristicBaseType
{
public:
  CharacteristicNominalBaseType();
  CharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  CharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~CharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getCharacteristicDefinitionId();
  void setCharacteristicDefinitionId(QIFReferenceType * CharacteristicDefinitionIdIn);
  ArrayReferenceFullType * getFeatureNominalIds();
  void setFeatureNominalIds(ArrayReferenceFullType * FeatureNominalIdsIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  ArrayReferenceFullType * getFeatureZoneIds();
  void setFeatureZoneIds(ArrayReferenceFullType * FeatureZoneIdsIn);
  ArrayReferenceFullType * getEntityInternalIds();
  void setEntityInternalIds(ArrayReferenceFullType * EntityInternalIdsIn);
  ArrayReferenceFullType * getEntityExternalIds();
  void setEntityExternalIds(ArrayReferenceFullType * EntityExternalIdsIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);
  CharacteristicDesignatorType * getCharacteristicDesignator();
  void setCharacteristicDesignator(CharacteristicDesignatorType * CharacteristicDesignatorIn);

protected:
  QIFReferenceType * CharacteristicDefinitionId;
  ArrayReferenceFullType * FeatureNominalIds;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
  ArrayReferenceFullType * FeatureZoneIds;
  ArrayReferenceFullType * EntityInternalIds;
  ArrayReferenceFullType * EntityExternalIds;
  XmlToken * Name;
  CharacteristicDesignatorType * CharacteristicDesignator;
};

/*********************************************************************/

class CharacteristicNominalBaseTypeLisd :
  public std::list<CharacteristicNominalBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  CharacteristicNominalBaseTypeLisd();
  CharacteristicNominalBaseTypeLisd(
    CharacteristicNominalBaseType * aCharacteristicNominalBaseType);
  ~CharacteristicNominalBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CharacteristicNominalsType :
  public XmlTypeBase
{
public:
  CharacteristicNominalsType();
  CharacteristicNominalsType(
    CharacteristicNominalBaseTypeLisd * CharacteristicNominalIn);
  CharacteristicNominalsType(
    NaturalType * nIn,
    CharacteristicNominalBaseTypeLisd * CharacteristicNominalIn);
  ~CharacteristicNominalsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CharacteristicNominalBaseTypeLisd * getCharacteristicNominal();
  void setCharacteristicNominal(CharacteristicNominalBaseTypeLisd *);

protected:
  NaturalType * n;
  CharacteristicNominalBaseTypeLisd * CharacteristicNominal;
};

/*********************************************************************/

class CharacteristicStatusEnumType :
  public XmlNMTOKEN
{
public:
  CharacteristicStatusEnumType();
  CharacteristicStatusEnumType(
    const char * valIn);
  ~CharacteristicStatusEnumType();
  bool CharacteristicStatusEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class CharacteristicStatusType :
  public XmlTypeBase
{
public:
  CharacteristicStatusType();
  CharacteristicStatusType(
    CharacteristicStatusTypeChoicePair * CharacteristicStatusTypePairIn);
  ~CharacteristicStatusType();
  void printSelf(FILE * outFile);

  CharacteristicStatusTypeChoicePair * getCharacteristicStatusTypePair();
  void setCharacteristicStatusTypePair(CharacteristicStatusTypeChoicePair * CharacteristicStatusTypePairIn);

protected:
  CharacteristicStatusTypeChoicePair * CharacteristicStatusTypePair;
};

/*********************************************************************/

union CharacteristicStatusTypeVal
{
  CharacteristicStatusEnumType * CharacteristicStatusEnum;
  XmlString * OtherCharacteristicStatus;
};

/*********************************************************************/

class CharacteristicStatusTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CharacteristicStatusEnumE,
    OtherCharacteristicStatusE };
  CharacteristicStatusTypeChoicePair();
  CharacteristicStatusTypeChoicePair(
    whichOne CharacteristicStatusTypeTypeIn,
    CharacteristicStatusTypeVal CharacteristicStatusTypeValueIn);
  ~CharacteristicStatusTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CharacteristicStatusTypeType;
  CharacteristicStatusTypeVal CharacteristicStatusTypeValue;
};

/*********************************************************************/

class CoaxialityDiametricalZoneType :
  public XmlTypeBase
{
public:
  CoaxialityDiametricalZoneType();
  ~CoaxialityDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CoaxialityNonDiametricalZoneType :
  public XmlTypeBase
{
public:
  CoaxialityNonDiametricalZoneType();
  ~CoaxialityNonDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CoaxialityZoneShapeType :
  public XmlTypeBase
{
public:
  CoaxialityZoneShapeType();
  CoaxialityZoneShapeType(
    CoaxialityZoneShapeTypeChoicePair * CoaxialityZoneShapeTypePairIn);
  ~CoaxialityZoneShapeType();
  void printSelf(FILE * outFile);

  CoaxialityZoneShapeTypeChoicePair * getCoaxialityZoneShapeTypePair();
  void setCoaxialityZoneShapeTypePair(CoaxialityZoneShapeTypeChoicePair * CoaxialityZoneShapeTypePairIn);

protected:
  CoaxialityZoneShapeTypeChoicePair * CoaxialityZoneShapeTypePair;
};

/*********************************************************************/

union CoaxialityZoneShapeTypeVal
{
  CoaxialityDiametricalZoneType * DiametricalZone;
  CoaxialityNonDiametricalZoneType * NonDiametricalZone;
};

/*********************************************************************/

class CoaxialityZoneShapeTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DiametricalZoneE,
    NonDiametricalZoneE };
  CoaxialityZoneShapeTypeChoicePair();
  CoaxialityZoneShapeTypeChoicePair(
    whichOne CoaxialityZoneShapeTypeTypeIn,
    CoaxialityZoneShapeTypeVal CoaxialityZoneShapeTypeValueIn);
  ~CoaxialityZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CoaxialityZoneShapeTypeType;
  CoaxialityZoneShapeTypeVal CoaxialityZoneShapeTypeValue;
};

/*********************************************************************/

class CompositeSegmentDefinitionBaseType :
  public XmlTypeBase
{
public:
  CompositeSegmentDefinitionBaseType();
  CompositeSegmentDefinitionBaseType(
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~CompositeSegmentDefinitionBaseType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getDatumReferenceFrameId();
  void setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn);
  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  CharacteristicDesignatorType * getCharacteristicDesignator();
  void setCharacteristicDesignator(CharacteristicDesignatorType * CharacteristicDesignatorIn);

protected:
  QIFReferenceFullType * DatumReferenceFrameId;
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  CharacteristicDesignatorType * CharacteristicDesignator;
};

/*********************************************************************/

class CompositeSegmentLowerLevelEnumType :
  public XmlNMTOKEN
{
public:
  CompositeSegmentLowerLevelEnumType();
  CompositeSegmentLowerLevelEnumType(
    const char * valIn);
  ~CompositeSegmentLowerLevelEnumType();
  bool CompositeSegmentLowerLevelEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class CompositeSegmentMeasurementBaseType :
  public XmlTypeBase
{
public:
  CompositeSegmentMeasurementBaseType();
  CompositeSegmentMeasurementBaseType(
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * DRFTransformActualIdIn,
    ZoneDataSetType * ZoneDataSetIn);
  ~CompositeSegmentMeasurementBaseType();
  void printSelf(FILE * outFile);

  MeasuredLinearValueType * getValue();
  void setValue(MeasuredLinearValueType * ValueIn);
  MeasuredLinearValueType * getMaxValue();
  void setMaxValue(MeasuredLinearValueType * MaxValueIn);
  MeasuredLinearValueType * getMinValue();
  void setMinValue(MeasuredLinearValueType * MinValueIn);
  CharacteristicStatusType * getStatus();
  void setStatus(CharacteristicStatusType * StatusIn);
  QIFReferenceType * getDRFTransformActualId();
  void setDRFTransformActualId(QIFReferenceType * DRFTransformActualIdIn);
  ZoneDataSetType * getZoneDataSet();
  void setZoneDataSet(ZoneDataSetType * ZoneDataSetIn);

protected:
  MeasuredLinearValueType * Value;
  MeasuredLinearValueType * MaxValue;
  MeasuredLinearValueType * MinValue;
  CharacteristicStatusType * Status;
  QIFReferenceType * DRFTransformActualId;
  ZoneDataSetType * ZoneDataSet;
};

/*********************************************************************/

class CompositeSegmentPositionDefinitionType :
  public CompositeSegmentDefinitionBaseType
{
public:
  CompositeSegmentPositionDefinitionType();
  CompositeSegmentPositionDefinitionType(
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    MaterialModifierEnumType * MaterialConditionIn,
    PositionZoneShapeType * ZoneShapeIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneIn);
  ~CompositeSegmentPositionDefinitionType();
  void printSelf(FILE * outFile);

  MaterialModifierEnumType * getMaterialCondition();
  void setMaterialCondition(MaterialModifierEnumType * MaterialConditionIn);
  PositionZoneShapeType * getZoneShape();
  void setZoneShape(PositionZoneShapeType * ZoneShapeIn);
  LinearValueType * getMaximumToleranceValue();
  void setMaximumToleranceValue(LinearValueType * MaximumToleranceValueIn);
  LinearValueType * getProjectedToleranceZone();
  void setProjectedToleranceZone(LinearValueType * ProjectedToleranceZoneIn);

protected:
  MaterialModifierEnumType * MaterialCondition;
  PositionZoneShapeType * ZoneShape;
  LinearValueType * MaximumToleranceValue;
  LinearValueType * ProjectedToleranceZone;
};

/*********************************************************************/

class CompositeSegmentPositionMeasurementType :
  public CompositeSegmentMeasurementBaseType
{
public:
  CompositeSegmentPositionMeasurementType();
  CompositeSegmentPositionMeasurementType(
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * DRFTransformActualIdIn,
    ZoneDataSetType * ZoneDataSetIn);
  ~CompositeSegmentPositionMeasurementType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CompositeSegmentProfileDefinitionType :
  public CompositeSegmentDefinitionBaseType
{
public:
  CompositeSegmentProfileDefinitionType();
  CompositeSegmentProfileDefinitionType(
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * OuterDispositionIn);
  ~CompositeSegmentProfileDefinitionType();
  void printSelf(FILE * outFile);

  LinearValueType * getOuterDisposition();
  void setOuterDisposition(LinearValueType * OuterDispositionIn);

protected:
  LinearValueType * OuterDisposition;
};

/*********************************************************************/

class CompositeSegmentProfileMeasurementType :
  public CompositeSegmentMeasurementBaseType
{
public:
  CompositeSegmentProfileMeasurementType();
  CompositeSegmentProfileMeasurementType(
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * DRFTransformActualIdIn,
    ZoneDataSetType * ZoneDataSetIn);
  ~CompositeSegmentProfileMeasurementType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CompositeSegmentSymmetryDefinitionType :
  public CompositeSegmentDefinitionBaseType
{
public:
  CompositeSegmentSymmetryDefinitionType();
  CompositeSegmentSymmetryDefinitionType(
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~CompositeSegmentSymmetryDefinitionType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class CompositeSegmentSymmetryMeasurementType :
  public CompositeSegmentMeasurementBaseType
{
public:
  CompositeSegmentSymmetryMeasurementType();
  CompositeSegmentSymmetryMeasurementType(
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * DRFTransformActualIdIn,
    ZoneDataSetType * ZoneDataSetIn);
  ~CompositeSegmentSymmetryMeasurementType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class ConcentricityDiametricalZoneType :
  public XmlTypeBase
{
public:
  ConcentricityDiametricalZoneType();
  ~ConcentricityDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class ConcentricityNonDiametricalZoneType :
  public XmlTypeBase
{
public:
  ConcentricityNonDiametricalZoneType();
  ~ConcentricityNonDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class ConcentricitySphericalZoneType :
  public XmlTypeBase
{
public:
  ConcentricitySphericalZoneType();
  ~ConcentricitySphericalZoneType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class ConcentricityZoneShapeType :
  public XmlTypeBase
{
public:
  ConcentricityZoneShapeType();
  ConcentricityZoneShapeType(
    ConcentricityZoneShapeTypeChoicePair * ConcentricityZoneShapeTypePairIn);
  ~ConcentricityZoneShapeType();
  void printSelf(FILE * outFile);

  ConcentricityZoneShapeTypeChoicePair * getConcentricityZoneShapeTypePair();
  void setConcentricityZoneShapeTypePair(ConcentricityZoneShapeTypeChoicePair * ConcentricityZoneShapeTypePairIn);

protected:
  ConcentricityZoneShapeTypeChoicePair * ConcentricityZoneShapeTypePair;
};

/*********************************************************************/

union ConcentricityZoneShapeTypeVal
{
  ConcentricitySphericalZoneType * SphericalZone;
  ConcentricityDiametricalZoneType * DiametricalZone;
  ConcentricityNonDiametricalZoneType * NonDiametricalZone;
};

/*********************************************************************/

class ConcentricityZoneShapeTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SphericalZoneE,
    DiametricalZoneE,
    NonDiametricalZoneE };
  ConcentricityZoneShapeTypeChoicePair();
  ConcentricityZoneShapeTypeChoicePair(
    whichOne ConcentricityZoneShapeTypeTypeIn,
    ConcentricityZoneShapeTypeVal ConcentricityZoneShapeTypeValueIn);
  ~ConcentricityZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConcentricityZoneShapeTypeType;
  ConcentricityZoneShapeTypeVal ConcentricityZoneShapeTypeValue;
};

/*********************************************************************/

class CriticalityAreaEnumType :
  public XmlNMTOKEN
{
public:
  CriticalityAreaEnumType();
  CriticalityAreaEnumType(
    const char * valIn);
  ~CriticalityAreaEnumType();
  bool CriticalityAreaEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class CriticalityLevelEnumType :
  public XmlNMTOKEN
{
public:
  CriticalityLevelEnumType();
  CriticalityLevelEnumType(
    const char * valIn);
  ~CriticalityLevelEnumType();
  bool CriticalityLevelEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class CriticalityType :
  public XmlTypeBase
{
public:
  CriticalityType();
  CriticalityType(
    CriticalityType_1050_Type * CriticalityType_1050In,
    CriticalityType_1051_Type * CriticalityType_1051In);
  ~CriticalityType();
  void printSelf(FILE * outFile);

  CriticalityType_1050_Type * getCriticalityType_1050();
  void setCriticalityType_1050(CriticalityType_1050_Type * CriticalityType_1050In);
  CriticalityType_1051_Type * getCriticalityType_1051();
  void setCriticalityType_1051(CriticalityType_1051_Type * CriticalityType_1051In);

protected:
  CriticalityType_1050_Type * CriticalityType_1050;
  CriticalityType_1051_Type * CriticalityType_1051;
};

/*********************************************************************/

class DimensionalCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  DimensionalCharacteristicDefinitionBaseType();
  DimensionalCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn);
  DimensionalCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn);
  ~DimensionalCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DimensionModifierEnumType * getDimensionType();
  void setDimensionType(DimensionModifierEnumType * DimensionTypeIn);
  DimensionModifiersType * getDimensionModifiers();
  void setDimensionModifiers(DimensionModifiersType * DimensionModifiersIn);

protected:
  DimensionModifierEnumType * DimensionType;
  DimensionModifiersType * DimensionModifiers;
};

/*********************************************************************/

class DimensionalCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  DimensionalCharacteristicItemBaseType();
  DimensionalCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  DimensionalCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~DimensionalCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DimensionalCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  DimensionalCharacteristicMeasurementBaseType();
  DimensionalCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn);
  DimensionalCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn);
  ~DimensionalCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DimensionalCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  DimensionalCharacteristicNominalBaseType();
  DimensionalCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  DimensionalCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~DimensionalCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DualNestingIndexFilterSymbolEnumType :
  public XmlNMTOKEN
{
public:
  DualNestingIndexFilterSymbolEnumType();
  DualNestingIndexFilterSymbolEnumType(
    const char * valIn);
  ~DualNestingIndexFilterSymbolEnumType();
  bool DualNestingIndexFilterSymbolEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class DualNestingIndexFilterType :
  public XmlTypeBase
{
public:
  DualNestingIndexFilterType();
  DualNestingIndexFilterType(
    DualNestingIndexFilterSymbolEnumType * SymbolIn,
    LinearValueType * FirstNestingIndexIn,
    LinearValueType * SecondNestingIndexIn,
    LinearValueType * SecondDirectionFirstNestingIndexIn,
    LinearValueType * SecondDirectionSecondNestingIndexIn);
  ~DualNestingIndexFilterType();
  void printSelf(FILE * outFile);

  DualNestingIndexFilterSymbolEnumType * getSymbol();
  void setSymbol(DualNestingIndexFilterSymbolEnumType * SymbolIn);
  LinearValueType * getFirstNestingIndex();
  void setFirstNestingIndex(LinearValueType * FirstNestingIndexIn);
  LinearValueType * getSecondNestingIndex();
  void setSecondNestingIndex(LinearValueType * SecondNestingIndexIn);
  LinearValueType * getSecondDirectionFirstNestingIndex();
  void setSecondDirectionFirstNestingIndex(LinearValueType * SecondDirectionFirstNestingIndexIn);
  LinearValueType * getSecondDirectionSecondNestingIndex();
  void setSecondDirectionSecondNestingIndex(LinearValueType * SecondDirectionSecondNestingIndexIn);

protected:
  DualNestingIndexFilterSymbolEnumType * Symbol;
  LinearValueType * FirstNestingIndex;
  LinearValueType * SecondNestingIndex;
  LinearValueType * SecondDirectionFirstNestingIndex;
  LinearValueType * SecondDirectionSecondNestingIndex;
};

/*********************************************************************/

class ExtentEnumType :
  public XmlNMTOKEN
{
public:
  ExtentEnumType();
  ExtentEnumType(
    const char * valIn);
  ~ExtentEnumType();
  bool ExtentEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class ExtentType :
  public XmlTypeBase
{
public:
  ExtentType();
  ExtentType(
    ExtentTypeChoicePair * ExtentTypePairIn);
  ~ExtentType();
  void printSelf(FILE * outFile);

  ExtentTypeChoicePair * getExtentTypePair();
  void setExtentTypePair(ExtentTypeChoicePair * ExtentTypePairIn);

protected:
  ExtentTypeChoicePair * ExtentTypePair;
};

/*********************************************************************/

union ExtentTypeVal
{
  ExtentEnumType * ExtentEnum;
  XmlString * OtherExtent;
};

/*********************************************************************/

class ExtentTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ExtentEnumE,
    OtherExtentE };
  ExtentTypeChoicePair();
  ExtentTypeChoicePair(
    whichOne ExtentTypeTypeIn,
    ExtentTypeVal ExtentTypeValueIn);
  ~ExtentTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExtentTypeType;
  ExtentTypeVal ExtentTypeValue;
};

/*********************************************************************/

class FilterType :
  public XmlTypeBase
{
public:
  FilterType();
  FilterType(
    FilterTypeChoicePair * FilterTypePairIn);
  ~FilterType();
  void printSelf(FILE * outFile);

  FilterTypeChoicePair * getFilterTypePair();
  void setFilterTypePair(FilterTypeChoicePair * FilterTypePairIn);

protected:
  FilterTypeChoicePair * FilterTypePair;
};

/*********************************************************************/

union FilterTypeVal
{
  SingleNestingIndexFilterType * SingleNestingIndexFilter;
  DualNestingIndexFilterType * DualNestingIndexFilter;
};

/*********************************************************************/

class FilterTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SingleNestingIndexFilterE,
    DualNestingIndexFilterE };
  FilterTypeChoicePair();
  FilterTypeChoicePair(
    whichOne FilterTypeTypeIn,
    FilterTypeVal FilterTypeValueIn);
  ~FilterTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FilterTypeType;
  FilterTypeVal FilterTypeValue;
};

/*********************************************************************/

class ForceCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  ForceCharacteristicDefinitionBaseType();
  ForceCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    ForceCharacteri_1056_Type * ForceCharacteri_1056In);
  ForceCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    ForceCharacteri_1056_Type * ForceCharacteri_1056In);
  ~ForceCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ForceCharacteri_1056_Type * getForceCharacteri_1056();
  void setForceCharacteri_1056(ForceCharacteri_1056_Type * ForceCharacteri_1056In);

protected:
  ForceCharacteri_1056_Type * ForceCharacteri_1056;
};

/*********************************************************************/

class ForceCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  ForceCharacteristicItemBaseType();
  ForceCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ForceCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ForceCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ForceCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  ForceCharacteristicMeasurementBaseType();
  ForceCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredForceValueType * ValueIn,
    MeasuredForceValueType * MaxValueIn,
    MeasuredForceValueType * MinValueIn);
  ForceCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredForceValueType * ValueIn,
    MeasuredForceValueType * MaxValueIn,
    MeasuredForceValueType * MinValueIn);
  ~ForceCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredForceValueType * getValue();
  void setValue(MeasuredForceValueType * ValueIn);
  MeasuredForceValueType * getMaxValue();
  void setMaxValue(MeasuredForceValueType * MaxValueIn);
  MeasuredForceValueType * getMinValue();
  void setMinValue(MeasuredForceValueType * MinValueIn);

protected:
  MeasuredForceValueType * Value;
  MeasuredForceValueType * MaxValue;
  MeasuredForceValueType * MinValue;
};

/*********************************************************************/

class ForceCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  ForceCharacteristicNominalBaseType();
  ForceCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ForceValueType * TargetValueIn);
  ForceCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ForceValueType * TargetValueIn);
  ~ForceCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ForceValueType * getTargetValue();
  void setTargetValue(ForceValueType * TargetValueIn);

protected:
  ForceValueType * TargetValue;
};

/*********************************************************************/

class GeometricCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  GeometricCharacteristicDefinitionBaseType();
  GeometricCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn);
  GeometricCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn);
  ~GeometricCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  GeometricCharac_1057_Type * getGeometricCharac_1057();
  void setGeometricCharac_1057(GeometricCharac_1057_Type * GeometricCharac_1057In);
  DirectionFeatureType * getDirectionFeature();
  void setDirectionFeature(DirectionFeatureType * DirectionFeatureIn);
  CollectionPlaneType * getCollectionPlane();
  void setCollectionPlane(CollectionPlaneType * CollectionPlaneIn);
  IntersectionPlaneType * getIntersectionPlane();
  void setIntersectionPlane(IntersectionPlaneType * IntersectionPlaneIn);
  OrientationPlaneType * getOrientationPlane();
  void setOrientationPlane(OrientationPlaneType * OrientationPlaneIn);

protected:
  GeometricCharac_1057_Type * GeometricCharac_1057;
  DirectionFeatureType * DirectionFeature;
  CollectionPlaneType * CollectionPlane;
  IntersectionPlaneType * IntersectionPlane;
  OrientationPlaneType * OrientationPlane;
};

/*********************************************************************/

class GeometricCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  GeometricCharacteristicItemBaseType();
  GeometricCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  GeometricCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~GeometricCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class GeometricCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  GeometricCharacteristicMeasurementBaseType();
  GeometricCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  GeometricCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~GeometricCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getValue();
  void setValue(MeasuredLinearValueType * ValueIn);
  MeasuredLinearValueType * getMaxValue();
  void setMaxValue(MeasuredLinearValueType * MaxValueIn);
  MeasuredLinearValueType * getMinValue();
  void setMinValue(MeasuredLinearValueType * MinValueIn);

protected:
  MeasuredLinearValueType * Value;
  MeasuredLinearValueType * MaxValue;
  MeasuredLinearValueType * MinValue;
};

/*********************************************************************/

class GeometricCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  GeometricCharacteristicNominalBaseType();
  GeometricCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  GeometricCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~GeometricCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LinearCharacteristicDefinitionBaseType :
  public DimensionalCharacteristicDefinitionBaseType
{
public:
  LinearCharacteristicDefinitionBaseType();
  LinearCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  LinearCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~LinearCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearCharacter_1058_Type * getLinearCharacter_1058();
  void setLinearCharacter_1058(LinearCharacter_1058_Type * LinearCharacter_1058In);

protected:
  LinearCharacter_1058_Type * LinearCharacter_1058;
};

/*********************************************************************/

class LinearCharacteristicItemBaseType :
  public DimensionalCharacteristicItemBaseType
{
public:
  LinearCharacteristicItemBaseType();
  LinearCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  LinearCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~LinearCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LinearCharacteristicMeasurementBaseType :
  public DimensionalCharacteristicMeasurementBaseType
{
public:
  LinearCharacteristicMeasurementBaseType();
  LinearCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  LinearCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~LinearCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getValue();
  void setValue(MeasuredLinearValueType * ValueIn);
  MeasuredLinearValueType * getMaxValue();
  void setMaxValue(MeasuredLinearValueType * MaxValueIn);
  MeasuredLinearValueType * getMinValue();
  void setMinValue(MeasuredLinearValueType * MinValueIn);

protected:
  MeasuredLinearValueType * Value;
  MeasuredLinearValueType * MaxValue;
  MeasuredLinearValueType * MinValue;
};

/*********************************************************************/

class LinearCharacteristicNominalBaseType :
  public DimensionalCharacteristicNominalBaseType
{
public:
  LinearCharacteristicNominalBaseType();
  LinearCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  LinearCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~LinearCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getTargetValue();
  void setTargetValue(LinearValueType * TargetValueIn);
  LinearDualValueType * getTargetDualValue();
  void setTargetDualValue(LinearDualValueType * TargetDualValueIn);

protected:
  LinearValueType * TargetValue;
  LinearDualValueType * TargetDualValue;
};

/*********************************************************************/

class LocationCharacteristicDefinitionBaseType :
  public GeometricCharacteristicDefinitionBaseType
{
public:
  LocationCharacteristicDefinitionBaseType();
  LocationCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  LocationCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  ~LocationCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  QIFReferenceFullType * getDatumReferenceFrameId();
  void setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  QIFReferenceFullType * DatumReferenceFrameId;
};

/*********************************************************************/

class LocationCharacteristicItemBaseType :
  public GeometricCharacteristicItemBaseType
{
public:
  LocationCharacteristicItemBaseType();
  LocationCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  LocationCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~LocationCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LocationCharacteristicMeasurementBaseType :
  public GeometricCharacteristicMeasurementBaseType
{
public:
  LocationCharacteristicMeasurementBaseType();
  LocationCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn);
  LocationCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn);
  ~LocationCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ZoneDataSetType * getZoneDataSet();
  void setZoneDataSet(ZoneDataSetType * ZoneDataSetIn);
  XmlBoolean * getDatumsOk();
  void setDatumsOk(XmlBoolean * DatumsOkIn);

protected:
  ZoneDataSetType * ZoneDataSet;
  XmlBoolean * DatumsOk;
};

/*********************************************************************/

class LocationCharacteristicNominalBaseType :
  public GeometricCharacteristicNominalBaseType
{
public:
  LocationCharacteristicNominalBaseType();
  LocationCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  LocationCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~LocationCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LocationOnDrawingType :
  public XmlTypeBase
{
public:
  LocationOnDrawingType();
  LocationOnDrawingType(
    LocationOnDrawingTypeChoicePair * LocationOnDrawingTypePairIn);
  ~LocationOnDrawingType();
  void printSelf(FILE * outFile);

  LocationOnDrawingTypeChoicePair * getLocationOnDrawingTypePair();
  void setLocationOnDrawingTypePair(LocationOnDrawingTypeChoicePair * LocationOnDrawingTypePairIn);

protected:
  LocationOnDrawingTypeChoicePair * LocationOnDrawingTypePair;
};

/*********************************************************************/

union LocationOnDrawingTypeVal
{
  LocationOnDrawi_1060_Type * LocationOnDrawi_1060;
  LocationOnDrawi_1061_Type * LocationOnDrawi_1061;
  LocationOnDrawi_1062_Type * LocationOnDrawi_1062;
};

/*********************************************************************/

class LocationOnDrawingTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LocationOnDrawi_1060E,
    LocationOnDrawi_1061E,
    LocationOnDrawi_1062E };
  LocationOnDrawingTypeChoicePair();
  LocationOnDrawingTypeChoicePair(
    whichOne LocationOnDrawingTypeTypeIn,
    LocationOnDrawingTypeVal LocationOnDrawingTypeValueIn);
  ~LocationOnDrawingTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LocationOnDrawingTypeType;
  LocationOnDrawingTypeVal LocationOnDrawingTypeValue;
};

/*********************************************************************/

class LocationSignificanceAllEnumType :
  public XmlString
{
public:
  LocationSignificanceAllEnumType();
  LocationSignificanceAllEnumType(
    const char * valIn);
  ~LocationSignificanceAllEnumType();
  bool LocationSignificanceAllEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class LocationSignificanceOneSidesEnumType :
  public XmlString
{
public:
  LocationSignificanceOneSidesEnumType();
  LocationSignificanceOneSidesEnumType(
    const char * valIn);
  ~LocationSignificanceOneSidesEnumType();
  bool LocationSignificanceOneSidesEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class LocationSignificanceSpotSeamEnumType :
  public XmlString
{
public:
  LocationSignificanceSpotSeamEnumType();
  LocationSignificanceSpotSeamEnumType(
    const char * valIn);
  ~LocationSignificanceSpotSeamEnumType();
  bool LocationSignificanceSpotSeamEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class MassCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  MassCharacteristicDefinitionBaseType();
  MassCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    MassCharacteris_1063_Type * MassCharacteris_1063In);
  MassCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    MassCharacteris_1063_Type * MassCharacteris_1063In);
  ~MassCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MassCharacteris_1063_Type * getMassCharacteris_1063();
  void setMassCharacteris_1063(MassCharacteris_1063_Type * MassCharacteris_1063In);

protected:
  MassCharacteris_1063_Type * MassCharacteris_1063;
};

/*********************************************************************/

class MassCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  MassCharacteristicItemBaseType();
  MassCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  MassCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~MassCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class MassCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  MassCharacteristicMeasurementBaseType();
  MassCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredMassValueType * ValueIn,
    MeasuredMassValueType * MaxValueIn,
    MeasuredMassValueType * MinValueIn);
  MassCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredMassValueType * ValueIn,
    MeasuredMassValueType * MaxValueIn,
    MeasuredMassValueType * MinValueIn);
  ~MassCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredMassValueType * getValue();
  void setValue(MeasuredMassValueType * ValueIn);
  MeasuredMassValueType * getMaxValue();
  void setMaxValue(MeasuredMassValueType * MaxValueIn);
  MeasuredMassValueType * getMinValue();
  void setMinValue(MeasuredMassValueType * MinValueIn);

protected:
  MeasuredMassValueType * Value;
  MeasuredMassValueType * MaxValue;
  MeasuredMassValueType * MinValue;
};

/*********************************************************************/

class MassCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  MassCharacteristicNominalBaseType();
  MassCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    MassValueType * TargetValueIn);
  MassCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    MassValueType * TargetValueIn);
  ~MassCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MassValueType * getTargetValue();
  void setTargetValue(MassValueType * TargetValueIn);

protected:
  MassValueType * TargetValue;
};

/*********************************************************************/

class MeasuredCharacteristicsType :
  public XmlTypeBase
{
public:
  MeasuredCharacteristicsType();
  MeasuredCharacteristicsType(
    CharacteristicMeasurementsType * CharacteristicMeasurementsIn,
    CharacteristicGroupStatusesType * CharacteristicGroupStatusesIn);
  ~MeasuredCharacteristicsType();
  void printSelf(FILE * outFile);

  CharacteristicMeasurementsType * getCharacteristicMeasurements();
  void setCharacteristicMeasurements(CharacteristicMeasurementsType * CharacteristicMeasurementsIn);
  CharacteristicGroupStatusesType * getCharacteristicGroupStatuses();
  void setCharacteristicGroupStatuses(CharacteristicGroupStatusesType * CharacteristicGroupStatusesIn);

protected:
  CharacteristicMeasurementsType * CharacteristicMeasurements;
  CharacteristicGroupStatusesType * CharacteristicGroupStatuses;
};

/*********************************************************************/

class MeasuredZoneRadiiType :
  public XmlTypeBase
{
public:
  MeasuredZoneRadiiType();
  MeasuredZoneRadiiType(
    MeasuredLinearValueType * MinRadiusIn,
    MeasuredLinearValueType * MaxRadiusIn);
  ~MeasuredZoneRadiiType();
  void printSelf(FILE * outFile);

  MeasuredLinearValueType * getMinRadius();
  void setMinRadius(MeasuredLinearValueType * MinRadiusIn);
  MeasuredLinearValueType * getMaxRadius();
  void setMaxRadius(MeasuredLinearValueType * MaxRadiusIn);

protected:
  MeasuredLinearValueType * MinRadius;
  MeasuredLinearValueType * MaxRadius;
};

/*********************************************************************/

class NonDestructiveTestingEnumType :
  public XmlString
{
public:
  NonDestructiveTestingEnumType();
  NonDestructiveTestingEnumType(
    const char * valIn);
  ~NonDestructiveTestingEnumType();
  bool NonDestructiveTestingEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class NonDestructiveTestingEnumTypeLisd :
  public std::list<NonDestructiveTestingEnumType *>,
  public XmlTypeBase
{
public:
  NonDestructiveTestingEnumTypeLisd();
  NonDestructiveTestingEnumTypeLisd(
    NonDestructiveTestingEnumType * aNonDestructiveTestingEnumType);
  NonDestructiveTestingEnumTypeLisd(
    NonDestructiveTestingEnumTypeLisd * aNonDestructiveTestingEnumTypeLisd);
  ~NonDestructiveTestingEnumTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class OrientationCharacteristicDefinitionBaseType :
  public GeometricCharacteristicDefinitionBaseType
{
public:
  OrientationCharacteristicDefinitionBaseType();
  OrientationCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  OrientationCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  ~OrientationCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  QIFReferenceFullType * getDatumReferenceFrameId();
  void setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn);
  MaterialModifierEnumType * getMaterialCondition();
  void setMaterialCondition(MaterialModifierEnumType * MaterialConditionIn);
  QIFReferenceType * getSizeCharacteristicDefinitionId();
  void setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn);
  OrientationZoneShapeType * getZoneShape();
  void setZoneShape(OrientationZoneShapeType * ZoneShapeIn);
  XmlBoolean * getTangentPlane();
  void setTangentPlane(XmlBoolean * TangentPlaneIn);
  LinearValueType * getMaximumToleranceValue();
  void setMaximumToleranceValue(LinearValueType * MaximumToleranceValueIn);
  LinearValueType * getProjectedToleranceZoneValue();
  void setProjectedToleranceZoneValue(LinearValueType * ProjectedToleranceZoneValueIn);
  OrientationChar_1064_Type * getOrientationChar_1064();
  void setOrientationChar_1064(OrientationChar_1064_Type * OrientationChar_1064In);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  QIFReferenceFullType * DatumReferenceFrameId;
  MaterialModifierEnumType * MaterialCondition;
  QIFReferenceType * SizeCharacteristicDefinitionId;
  OrientationZoneShapeType * ZoneShape;
  XmlBoolean * TangentPlane;
  LinearValueType * MaximumToleranceValue;
  LinearValueType * ProjectedToleranceZoneValue;
  OrientationChar_1064_Type * OrientationChar_1064;
};

/*********************************************************************/

class OrientationCharacteristicItemBaseType :
  public GeometricCharacteristicItemBaseType
{
public:
  OrientationCharacteristicItemBaseType();
  OrientationCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  OrientationCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~OrientationCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class OrientationCharacteristicMeasurementBaseType :
  public GeometricCharacteristicMeasurementBaseType
{
public:
  OrientationCharacteristicMeasurementBaseType();
  OrientationCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  OrientationCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  ~OrientationCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getDatumsOk();
  void setDatumsOk(XmlBoolean * DatumsOkIn);
  MeasuredLinearValueType * getBonus();
  void setBonus(MeasuredLinearValueType * BonusIn);
  LinearValueType * getReferenceLength();
  void setReferenceLength(LinearValueType * ReferenceLengthIn);
  QIFReferenceType * getDRFTransformActualId();
  void setDRFTransformActualId(QIFReferenceType * DRFTransformActualIdIn);

protected:
  XmlBoolean * DatumsOk;
  MeasuredLinearValueType * Bonus;
  LinearValueType * ReferenceLength;
  QIFReferenceType * DRFTransformActualId;
};

/*********************************************************************/

class OrientationCharacteristicNominalBaseType :
  public GeometricCharacteristicNominalBaseType
{
public:
  OrientationCharacteristicNominalBaseType();
  OrientationCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  OrientationCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~OrientationCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class OrientationDiametricalZoneType :
  public XmlTypeBase
{
public:
  OrientationDiametricalZoneType();
  OrientationDiametricalZoneType(
    UnitVectorType * ZoneOrientationVectorIn);
  ~OrientationDiametricalZoneType();
  void printSelf(FILE * outFile);

  UnitVectorType * getZoneOrientationVector();
  void setZoneOrientationVector(UnitVectorType * ZoneOrientationVectorIn);

protected:
  UnitVectorType * ZoneOrientationVector;
};

/*********************************************************************/

class OrientationPlanarZoneType :
  public XmlTypeBase
{
public:
  OrientationPlanarZoneType();
  OrientationPlanarZoneType(
    UnitVectorType * ZoneOrientationVectorIn);
  ~OrientationPlanarZoneType();
  void printSelf(FILE * outFile);

  UnitVectorType * getZoneOrientationVector();
  void setZoneOrientationVector(UnitVectorType * ZoneOrientationVectorIn);

protected:
  UnitVectorType * ZoneOrientationVector;
};

/*********************************************************************/

class OrientationZoneShapeType :
  public XmlTypeBase
{
public:
  OrientationZoneShapeType();
  OrientationZoneShapeType(
    OrientationZoneShapeTypeChoicePair * OrientationZoneShapeTypePairIn);
  ~OrientationZoneShapeType();
  void printSelf(FILE * outFile);

  OrientationZoneShapeTypeChoicePair * getOrientationZoneShapeTypePair();
  void setOrientationZoneShapeTypePair(OrientationZoneShapeTypeChoicePair * OrientationZoneShapeTypePairIn);

protected:
  OrientationZoneShapeTypeChoicePair * OrientationZoneShapeTypePair;
};

/*********************************************************************/

union OrientationZoneShapeTypeVal
{
  OrientationDiametricalZoneType * DiametricalZone;
  OrientationPlanarZoneType * PlanarZone;
};

/*********************************************************************/

class OrientationZoneShapeTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DiametricalZoneE,
    PlanarZoneE };
  OrientationZoneShapeTypeChoicePair();
  OrientationZoneShapeTypeChoicePair(
    whichOne OrientationZoneShapeTypeTypeIn,
    OrientationZoneShapeTypeVal OrientationZoneShapeTypeValueIn);
  ~OrientationZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OrientationZoneShapeTypeType;
  OrientationZoneShapeTypeVal OrientationZoneShapeTypeValue;
};

/*********************************************************************/

class OriginReferenceType :
  public XmlTypeBase
{
public:
  OriginReferenceType();
  OriginReferenceType(
    OriginReferenceTypeChoicePair * OriginReferenceTypePairIn);
  ~OriginReferenceType();
  void printSelf(FILE * outFile);

  OriginReferenceTypeChoicePair * getOriginReferenceTypePair();
  void setOriginReferenceTypePair(OriginReferenceTypeChoicePair * OriginReferenceTypePairIn);

protected:
  OriginReferenceTypeChoicePair * OriginReferenceTypePair;
};

/*********************************************************************/

union OriginReferenceTypeVal
{
  OriginReference_1065_Type * OriginReference_1065;
  QIFReferenceFullType * DatumDefinitionId;
};

/*********************************************************************/

class OriginReferenceTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OriginReference_1065E,
    DatumDefinitionIdE };
  OriginReferenceTypeChoicePair();
  OriginReferenceTypeChoicePair(
    whichOne OriginReferenceTypeTypeIn,
    OriginReferenceTypeVal OriginReferenceTypeValueIn);
  ~OriginReferenceTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OriginReferenceTypeType;
  OriginReferenceTypeVal OriginReferenceTypeValue;
};

/*********************************************************************/

class ParallelismCharacteristicDefinitionType :
  public OrientationCharacteristicDefinitionBaseType
{
public:
  ParallelismCharacteristicDefinitionType();
  ParallelismCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  ParallelismCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  ~ParallelismCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ParallelismCharacteristicItemType :
  public OrientationCharacteristicItemBaseType
{
public:
  ParallelismCharacteristicItemType();
  ParallelismCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ParallelismCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ParallelismCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ParallelismCharacteristicMeasurementType :
  public OrientationCharacteristicMeasurementBaseType
{
public:
  ParallelismCharacteristicMeasurementType();
  ParallelismCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  ParallelismCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  ~ParallelismCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ParallelismCharacteristicNominalType :
  public OrientationCharacteristicNominalBaseType
{
public:
  ParallelismCharacteristicNominalType();
  ParallelismCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ParallelismCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~ParallelismCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PerpendicularityCharacteristicDefinitionType :
  public OrientationCharacteristicDefinitionBaseType
{
public:
  PerpendicularityCharacteristicDefinitionType();
  PerpendicularityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  PerpendicularityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  ~PerpendicularityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PerpendicularityCharacteristicItemType :
  public OrientationCharacteristicItemBaseType
{
public:
  PerpendicularityCharacteristicItemType();
  PerpendicularityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PerpendicularityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PerpendicularityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PerpendicularityCharacteristicMeasurementType :
  public OrientationCharacteristicMeasurementBaseType
{
public:
  PerpendicularityCharacteristicMeasurementType();
  PerpendicularityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  PerpendicularityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  ~PerpendicularityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PerpendicularityCharacteristicNominalType :
  public OrientationCharacteristicNominalBaseType
{
public:
  PerpendicularityCharacteristicNominalType();
  PerpendicularityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  PerpendicularityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~PerpendicularityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PointDeviationType :
  public XmlTypeBase
{
public:
  PointDeviationType();
  PointDeviationType(
    PointSetReferenceSingleType * MeasurePointIdIn,
    LinearValueType * DeviationIn);
  ~PointDeviationType();
  void printSelf(FILE * outFile);

  PointSetReferenceSingleType * getMeasurePointId();
  void setMeasurePointId(PointSetReferenceSingleType * MeasurePointIdIn);
  LinearValueType * getDeviation();
  void setDeviation(LinearValueType * DeviationIn);

protected:
  PointSetReferenceSingleType * MeasurePointId;
  LinearValueType * Deviation;
};

/*********************************************************************/

class PointDeviationTypeLisd :
  public std::list<PointDeviationType *>,
  public XmlSchemaInstanceBase
{
public:
  PointDeviationTypeLisd();
  PointDeviationTypeLisd(
    PointDeviationType * aPointDeviationType);
  ~PointDeviationTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class PointDeviationsType :
  public XmlTypeBase
{
public:
  PointDeviationsType();
  PointDeviationsType(
    PointDeviationTypeLisd * PointDeviationIn);
  PointDeviationsType(
    NaturalType * nIn,
    PointDeviationTypeLisd * PointDeviationIn);
  ~PointDeviationsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PointDeviationTypeLisd * getPointDeviation();
  void setPointDeviation(PointDeviationTypeLisd *);

protected:
  NaturalType * n;
  PointDeviationTypeLisd * PointDeviation;
};

/*********************************************************************/

class PositionCharacteristicDefinitionType :
  public LocationCharacteristicDefinitionBaseType
{
public:
  PositionCharacteristicDefinitionType();
  PositionCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    PositionZoneShapeType * ZoneShapeIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    CompositeSegmentPositionDefinitionType * SecondCompositeSegmentPositionDefinitionIn,
    CompositeSegmentPositionDefinitionType * ThirdCompositeSegmentPositionDefinitionIn,
    CompositeSegmentPositionDefinitionType * FourthCompositeSegmentPositionDefinitionIn,
    LinearValueType * ToPointToleranceValueIn,
    XmlBoolean * OrientationOnlyIn);
  PositionCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    PositionZoneShapeType * ZoneShapeIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    CompositeSegmentPositionDefinitionType * SecondCompositeSegmentPositionDefinitionIn,
    CompositeSegmentPositionDefinitionType * ThirdCompositeSegmentPositionDefinitionIn,
    CompositeSegmentPositionDefinitionType * FourthCompositeSegmentPositionDefinitionIn,
    LinearValueType * ToPointToleranceValueIn,
    XmlBoolean * OrientationOnlyIn);
  ~PositionCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MaterialModifierEnumType * getMaterialCondition();
  void setMaterialCondition(MaterialModifierEnumType * MaterialConditionIn);
  QIFReferenceType * getSizeCharacteristicDefinitionId();
  void setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn);
  PositionZoneShapeType * getZoneShape();
  void setZoneShape(PositionZoneShapeType * ZoneShapeIn);
  LinearValueType * getMaximumToleranceValue();
  void setMaximumToleranceValue(LinearValueType * MaximumToleranceValueIn);
  LinearValueType * getProjectedToleranceZoneValue();
  void setProjectedToleranceZoneValue(LinearValueType * ProjectedToleranceZoneValueIn);
  CompositeSegmentPositionDefinitionType * getSecondCompositeSegmentPositionDefinition();
  void setSecondCompositeSegmentPositionDefinition(CompositeSegmentPositionDefinitionType * SecondCompositeSegmentPositionDefinitionIn);
  CompositeSegmentPositionDefinitionType * getThirdCompositeSegmentPositionDefinition();
  void setThirdCompositeSegmentPositionDefinition(CompositeSegmentPositionDefinitionType * ThirdCompositeSegmentPositionDefinitionIn);
  CompositeSegmentPositionDefinitionType * getFourthCompositeSegmentPositionDefinition();
  void setFourthCompositeSegmentPositionDefinition(CompositeSegmentPositionDefinitionType * FourthCompositeSegmentPositionDefinitionIn);
  LinearValueType * getToPointToleranceValue();
  void setToPointToleranceValue(LinearValueType * ToPointToleranceValueIn);
  XmlBoolean * getOrientationOnly();
  void setOrientationOnly(XmlBoolean * OrientationOnlyIn);

protected:
  MaterialModifierEnumType * MaterialCondition;
  QIFReferenceType * SizeCharacteristicDefinitionId;
  PositionZoneShapeType * ZoneShape;
  LinearValueType * MaximumToleranceValue;
  LinearValueType * ProjectedToleranceZoneValue;
  CompositeSegmentPositionDefinitionType * SecondCompositeSegmentPositionDefinition;
  CompositeSegmentPositionDefinitionType * ThirdCompositeSegmentPositionDefinition;
  CompositeSegmentPositionDefinitionType * FourthCompositeSegmentPositionDefinition;
  LinearValueType * ToPointToleranceValue;
  XmlBoolean * OrientationOnly;
};

/*********************************************************************/

class PositionCharacteristicItemType :
  public LocationCharacteristicItemBaseType
{
public:
  PositionCharacteristicItemType();
  PositionCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PositionCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PositionCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PositionCharacteristicMeasurementType :
  public LocationCharacteristicMeasurementBaseType
{
public:
  PositionCharacteristicMeasurementType();
  PositionCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentPositionMeasurementType * SecondCompositeSegmentPositionMeasurementIn,
    CompositeSegmentPositionMeasurementType * ThirdCompositeSegmentPositionMeasurementIn,
    CompositeSegmentPositionMeasurementType * FourthCompositeSegmentPositionMeasurementIn);
  PositionCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentPositionMeasurementType * SecondCompositeSegmentPositionMeasurementIn,
    CompositeSegmentPositionMeasurementType * ThirdCompositeSegmentPositionMeasurementIn,
    CompositeSegmentPositionMeasurementType * FourthCompositeSegmentPositionMeasurementIn);
  ~PositionCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getBonus();
  void setBonus(MeasuredLinearValueType * BonusIn);
  QIFReferenceType * getDRFTransformActualId();
  void setDRFTransformActualId(QIFReferenceType * DRFTransformActualIdIn);
  CompositeSegmentPositionMeasurementType * getSecondCompositeSegmentPositionMeasurement();
  void setSecondCompositeSegmentPositionMeasurement(CompositeSegmentPositionMeasurementType * SecondCompositeSegmentPositionMeasurementIn);
  CompositeSegmentPositionMeasurementType * getThirdCompositeSegmentPositionMeasurement();
  void setThirdCompositeSegmentPositionMeasurement(CompositeSegmentPositionMeasurementType * ThirdCompositeSegmentPositionMeasurementIn);
  CompositeSegmentPositionMeasurementType * getFourthCompositeSegmentPositionMeasurement();
  void setFourthCompositeSegmentPositionMeasurement(CompositeSegmentPositionMeasurementType * FourthCompositeSegmentPositionMeasurementIn);

protected:
  MeasuredLinearValueType * Bonus;
  QIFReferenceType * DRFTransformActualId;
  CompositeSegmentPositionMeasurementType * SecondCompositeSegmentPositionMeasurement;
  CompositeSegmentPositionMeasurementType * ThirdCompositeSegmentPositionMeasurement;
  CompositeSegmentPositionMeasurementType * FourthCompositeSegmentPositionMeasurement;
};

/*********************************************************************/

class PositionCharacteristicNominalType :
  public LocationCharacteristicNominalBaseType
{
public:
  PositionCharacteristicNominalType();
  PositionCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    PositionCoordinateMethodType * CoordinateMethodIn);
  PositionCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    PositionCoordinateMethodType * CoordinateMethodIn);
  ~PositionCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PositionCoordinateMethodType * getCoordinateMethod();
  void setCoordinateMethod(PositionCoordinateMethodType * CoordinateMethodIn);

protected:
  PositionCoordinateMethodType * CoordinateMethod;
};

/*********************************************************************/

class PositionCoordinateMethodEnumType :
  public XmlString
{
public:
  PositionCoordinateMethodEnumType();
  PositionCoordinateMethodEnumType(
    const char * valIn);
  ~PositionCoordinateMethodEnumType();
  bool PositionCoordinateMethodEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class PositionCoordinateMethodType :
  public XmlTypeBase
{
public:
  PositionCoordinateMethodType();
  PositionCoordinateMethodType(
    PositionCoordinateMethodEnumType * MethodIn,
    ArrayReferenceFullType * FeatureZoneIdsIn);
  ~PositionCoordinateMethodType();
  void printSelf(FILE * outFile);

  PositionCoordinateMethodEnumType * getMethod();
  void setMethod(PositionCoordinateMethodEnumType * MethodIn);
  ArrayReferenceFullType * getFeatureZoneIds();
  void setFeatureZoneIds(ArrayReferenceFullType * FeatureZoneIdsIn);

protected:
  PositionCoordinateMethodEnumType * Method;
  ArrayReferenceFullType * FeatureZoneIds;
};

/*********************************************************************/

class PositionDiametricalZoneType :
  public XmlTypeBase
{
public:
  PositionDiametricalZoneType();
  PositionDiametricalZoneType(
    DimensionCountEnumType * DimensionalityIn,
    UnitVectorType * ZoneOrientationVectorIn,
    XmlBoolean * ElongatedZoneIn);
  ~PositionDiametricalZoneType();
  void printSelf(FILE * outFile);

  DimensionCountEnumType * getDimensionality();
  void setDimensionality(DimensionCountEnumType * DimensionalityIn);
  UnitVectorType * getZoneOrientationVector();
  void setZoneOrientationVector(UnitVectorType * ZoneOrientationVectorIn);
  XmlBoolean * getElongatedZone();
  void setElongatedZone(XmlBoolean * ElongatedZoneIn);

protected:
  DimensionCountEnumType * Dimensionality;
  UnitVectorType * ZoneOrientationVector;
  XmlBoolean * ElongatedZone;
};

/*********************************************************************/

class PositionNonDiametricalZoneType :
  public XmlTypeBase
{
public:
  PositionNonDiametricalZoneType();
  PositionNonDiametricalZoneType(
    DimensionCountEnumType * DimensionalityIn,
    UnitVectorType * ZoneOrientationVectorIn,
    XmlBoolean * BoundaryZoneIn,
    ZoneOrientationEnumType * ZoneOrientationEnumIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~PositionNonDiametricalZoneType();
  void printSelf(FILE * outFile);

  DimensionCountEnumType * getDimensionality();
  void setDimensionality(DimensionCountEnumType * DimensionalityIn);
  UnitVectorType * getZoneOrientationVector();
  void setZoneOrientationVector(UnitVectorType * ZoneOrientationVectorIn);
  XmlBoolean * getBoundaryZone();
  void setBoundaryZone(XmlBoolean * BoundaryZoneIn);
  ZoneOrientationEnumType * getZoneOrientationEnum();
  void setZoneOrientationEnum(ZoneOrientationEnumType * ZoneOrientationEnumIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  DimensionCountEnumType * Dimensionality;
  UnitVectorType * ZoneOrientationVector;
  XmlBoolean * BoundaryZone;
  ZoneOrientationEnumType * ZoneOrientationEnum;
  QIFReferenceFullType * CoordinateSystemId;
};

/*********************************************************************/

class PositionSphericalZoneType :
  public XmlTypeBase
{
public:
  PositionSphericalZoneType();
  PositionSphericalZoneType(
    DimensionCountEnumType * DimensionalityIn);
  ~PositionSphericalZoneType();
  void printSelf(FILE * outFile);

  DimensionCountEnumType * getDimensionality();
  void setDimensionality(DimensionCountEnumType * DimensionalityIn);

protected:
  DimensionCountEnumType * Dimensionality;
};

/*********************************************************************/

class PositionZoneShapeType :
  public XmlTypeBase
{
public:
  PositionZoneShapeType();
  PositionZoneShapeType(
    PositionZoneShapeTypeChoicePair * PositionZoneShapeTypePairIn);
  ~PositionZoneShapeType();
  void printSelf(FILE * outFile);

  PositionZoneShapeTypeChoicePair * getPositionZoneShapeTypePair();
  void setPositionZoneShapeTypePair(PositionZoneShapeTypeChoicePair * PositionZoneShapeTypePairIn);

protected:
  PositionZoneShapeTypeChoicePair * PositionZoneShapeTypePair;
};

/*********************************************************************/

union PositionZoneShapeTypeVal
{
  PositionSphericalZoneType * SphericalZone;
  PositionDiametricalZoneType * DiametricalZone;
  PositionNonDiametricalZoneType * NonDiametricalZone;
};

/*********************************************************************/

class PositionZoneShapeTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SphericalZoneE,
    DiametricalZoneE,
    NonDiametricalZoneE };
  PositionZoneShapeTypeChoicePair();
  PositionZoneShapeTypeChoicePair(
    whichOne PositionZoneShapeTypeTypeIn,
    PositionZoneShapeTypeVal PositionZoneShapeTypeValueIn);
  ~PositionZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PositionZoneShapeTypeType;
  PositionZoneShapeTypeVal PositionZoneShapeTypeValue;
};

/*********************************************************************/

class PressureCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  PressureCharacteristicDefinitionBaseType();
  PressureCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    PressureCharact_1066_Type * PressureCharact_1066In);
  PressureCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    PressureCharact_1066_Type * PressureCharact_1066In);
  ~PressureCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PressureCharact_1066_Type * getPressureCharact_1066();
  void setPressureCharact_1066(PressureCharact_1066_Type * PressureCharact_1066In);

protected:
  PressureCharact_1066_Type * PressureCharact_1066;
};

/*********************************************************************/

class PressureCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  PressureCharacteristicItemBaseType();
  PressureCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PressureCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PressureCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PressureCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  PressureCharacteristicMeasurementBaseType();
  PressureCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredPressureValueType * ValueIn,
    MeasuredPressureValueType * MaxValueIn,
    MeasuredPressureValueType * MinValueIn);
  PressureCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredPressureValueType * ValueIn,
    MeasuredPressureValueType * MaxValueIn,
    MeasuredPressureValueType * MinValueIn);
  ~PressureCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPressureValueType * getValue();
  void setValue(MeasuredPressureValueType * ValueIn);
  MeasuredPressureValueType * getMaxValue();
  void setMaxValue(MeasuredPressureValueType * MaxValueIn);
  MeasuredPressureValueType * getMinValue();
  void setMinValue(MeasuredPressureValueType * MinValueIn);

protected:
  MeasuredPressureValueType * Value;
  MeasuredPressureValueType * MaxValue;
  MeasuredPressureValueType * MinValue;
};

/*********************************************************************/

class PressureCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  PressureCharacteristicNominalBaseType();
  PressureCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    PressureValueType * TargetValueIn);
  PressureCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    PressureValueType * TargetValueIn);
  ~PressureCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PressureValueType * getTargetValue();
  void setTargetValue(PressureValueType * TargetValueIn);

protected:
  PressureValueType * TargetValue;
};

/*********************************************************************/

class ProfileCharacteristicDefinitionBaseType :
  public GeometricCharacteristicDefinitionBaseType
{
public:
  ProfileCharacteristicDefinitionBaseType();
  ProfileCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn);
  ProfileCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn);
  ~ProfileCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  ProfileCharacte_1067_Type * getProfileCharacte_1067();
  void setProfileCharacte_1067(ProfileCharacte_1067_Type * ProfileCharacte_1067In);
  XmlBoolean * getOffsetZone();
  void setOffsetZone(XmlBoolean * OffsetZoneIn);
  XmlBoolean * getVariableAngle();
  void setVariableAngle(XmlBoolean * VariableAngleIn);
  CompositeSegmentProfileDefinitionType * getSecondCompositeSegmentProfileDefinition();
  void setSecondCompositeSegmentProfileDefinition(CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn);
  CompositeSegmentProfileDefinitionType * getThirdCompositeSegmentProfileDefinition();
  void setThirdCompositeSegmentProfileDefinition(CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn);
  CompositeSegmentProfileDefinitionType * getFourthCompositeSegmentProfileDefinition();
  void setFourthCompositeSegmentProfileDefinition(CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn);
  QIFReferenceFullType * getDatumReferenceFrameId();
  void setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn);
  XmlBoolean * getOrientationOnly();
  void setOrientationOnly(XmlBoolean * OrientationOnlyIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  ProfileCharacte_1067_Type * ProfileCharacte_1067;
  XmlBoolean * OffsetZone;
  XmlBoolean * VariableAngle;
  CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinition;
  CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinition;
  CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinition;
  QIFReferenceFullType * DatumReferenceFrameId;
  XmlBoolean * OrientationOnly;
};

/*********************************************************************/

class ProfileCharacteristicItemBaseType :
  public GeometricCharacteristicItemBaseType
{
public:
  ProfileCharacteristicItemBaseType();
  ProfileCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ProfileCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ProfileCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ProfileCharacteristicMeasurementBaseType :
  public GeometricCharacteristicMeasurementBaseType
{
public:
  ProfileCharacteristicMeasurementBaseType();
  ProfileCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  ProfileCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  ~ProfileCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getWorstPositiveDeviation();
  void setWorstPositiveDeviation(LinearValueType * WorstPositiveDeviationIn);
  LinearValueType * getWorstNegativeDeviation();
  void setWorstNegativeDeviation(LinearValueType * WorstNegativeDeviationIn);
  PointDeviationsType * getPointDeviations();
  void setPointDeviations(PointDeviationsType * PointDeviationsIn);
  XmlBoolean * getDatumsOk();
  void setDatumsOk(XmlBoolean * DatumsOkIn);
  QIFReferenceType * getDRFTransformActualId();
  void setDRFTransformActualId(QIFReferenceType * DRFTransformActualIdIn);
  CompositeSegmentProfileMeasurementType * getSecondCompositeSegmentProfileMeasurement();
  void setSecondCompositeSegmentProfileMeasurement(CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn);
  CompositeSegmentProfileMeasurementType * getThirdCompositeSegmentProfileMeasurement();
  void setThirdCompositeSegmentProfileMeasurement(CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn);
  CompositeSegmentProfileMeasurementType * getFourthCompositeSegmentProfileMeasurement();
  void setFourthCompositeSegmentProfileMeasurement(CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);

protected:
  LinearValueType * WorstPositiveDeviation;
  LinearValueType * WorstNegativeDeviation;
  PointDeviationsType * PointDeviations;
  XmlBoolean * DatumsOk;
  QIFReferenceType * DRFTransformActualId;
  CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurement;
  CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurement;
  CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurement;
};

/*********************************************************************/

class ProfileCharacteristicNominalBaseType :
  public GeometricCharacteristicNominalBaseType
{
public:
  ProfileCharacteristicNominalBaseType();
  ProfileCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  ProfileCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  ~ProfileCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getTargetValue();
  void setTargetValue(LinearValueType * TargetValueIn);

protected:
  LinearValueType * TargetValue;
};

/*********************************************************************/

class RadiusCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  RadiusCharacteristicDefinitionType();
  RadiusCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In,
    XmlBoolean * ControlledRadiusIn);
  RadiusCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In,
    XmlBoolean * ControlledRadiusIn);
  ~RadiusCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getControlledRadius();
  void setControlledRadius(XmlBoolean * ControlledRadiusIn);

protected:
  XmlBoolean * ControlledRadius;
};

/*********************************************************************/

class RadiusCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  RadiusCharacteristicItemType();
  RadiusCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  RadiusCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~RadiusCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class RadiusCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  RadiusCharacteristicMeasurementType();
  RadiusCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  RadiusCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~RadiusCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class RadiusCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  RadiusCharacteristicNominalType();
  RadiusCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  RadiusCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~RadiusCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ReferenceFeatureAssociationSpecificationElementEnumType :
  public XmlNMTOKEN
{
public:
  ReferenceFeatureAssociationSpecificationElementEnumType();
  ReferenceFeatureAssociationSpecificationElementEnumType(
    const char * valIn);
  ~ReferenceFeatureAssociationSpecificationElementEnumType();
  bool ReferenceFeatureAssociationSpecificationElementEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class ReferenceFeatureAssociationSpecificationElementType :
  public XmlTypeBase
{
public:
  ReferenceFeatureAssociationSpecificationElementType();
  ReferenceFeatureAssociationSpecificationElementType(
    FilterType * FilterIn,
    ReferenceFeatureAssociationSpecificationElementEnumType * AssociationIn,
    ReferenceFeatureAssociationSpecificationParameterEnumType * ParameterIn);
  ~ReferenceFeatureAssociationSpecificationElementType();
  void printSelf(FILE * outFile);

  FilterType * getFilter();
  void setFilter(FilterType * FilterIn);
  ReferenceFeatureAssociationSpecificationElementEnumType * getAssociation();
  void setAssociation(ReferenceFeatureAssociationSpecificationElementEnumType * AssociationIn);
  ReferenceFeatureAssociationSpecificationParameterEnumType * getParameter();
  void setParameter(ReferenceFeatureAssociationSpecificationParameterEnumType * ParameterIn);

protected:
  FilterType * Filter;
  ReferenceFeatureAssociationSpecificationElementEnumType * Association;
  ReferenceFeatureAssociationSpecificationParameterEnumType * Parameter;
};

/*********************************************************************/

class ReferenceFeatureAssociationSpecificationParameterEnumType :
  public XmlNMTOKEN
{
public:
  ReferenceFeatureAssociationSpecificationParameterEnumType();
  ReferenceFeatureAssociationSpecificationParameterEnumType(
    const char * valIn);
  ~ReferenceFeatureAssociationSpecificationParameterEnumType();
  bool ReferenceFeatureAssociationSpecificationParameterEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class RoughnessApplicabilityEnumType :
  public XmlNMTOKEN
{
public:
  RoughnessApplicabilityEnumType();
  RoughnessApplicabilityEnumType(
    const char * valIn);
  ~RoughnessApplicabilityEnumType();
  bool RoughnessApplicabilityEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class RoughnessLayEnumType :
  public XmlNMTOKEN
{
public:
  RoughnessLayEnumType();
  RoughnessLayEnumType(
    const char * valIn);
  ~RoughnessLayEnumType();
  bool RoughnessLayEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class RoughnessObtentionEnumType :
  public XmlNMTOKEN
{
public:
  RoughnessObtentionEnumType();
  RoughnessObtentionEnumType(
    const char * valIn);
  ~RoughnessObtentionEnumType();
  bool RoughnessObtentionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class RunoutCharacteristicDefinitionBaseType :
  public GeometricCharacteristicDefinitionBaseType
{
public:
  RunoutCharacteristicDefinitionBaseType();
  RunoutCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  RunoutCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  ~RunoutCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  QIFReferenceFullType * getDatumReferenceFrameId();
  void setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  QIFReferenceFullType * DatumReferenceFrameId;
};

/*********************************************************************/

class RunoutCharacteristicItemBaseType :
  public GeometricCharacteristicItemBaseType
{
public:
  RunoutCharacteristicItemBaseType();
  RunoutCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  RunoutCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~RunoutCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class RunoutCharacteristicMeasurementBaseType :
  public GeometricCharacteristicMeasurementBaseType
{
public:
  RunoutCharacteristicMeasurementBaseType();
  RunoutCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn);
  RunoutCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn);
  ~RunoutCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getDatumsOk();
  void setDatumsOk(XmlBoolean * DatumsOkIn);

protected:
  XmlBoolean * DatumsOk;
};

/*********************************************************************/

class RunoutCharacteristicNominalBaseType :
  public GeometricCharacteristicNominalBaseType
{
public:
  RunoutCharacteristicNominalBaseType();
  RunoutCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  RunoutCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~RunoutCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SimultaneousRequirementEnumType :
  public XmlNMTOKEN
{
public:
  SimultaneousRequirementEnumType();
  SimultaneousRequirementEnumType(
    const char * valIn);
  ~SimultaneousRequirementEnumType();
  bool SimultaneousRequirementEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class SimultaneousRequirementGroupType :
  public XmlTypeBase
{
public:
  SimultaneousRequirementGroupType();
  SimultaneousRequirementGroupType(
    ArrayReferenceType * CharacteristicNominalIdsIn,
    SimultaneousRequirementEnumType * RequirementIn,
    CompositeSegmentLowerLevelEnumType * CompositeLevelIn);
  ~SimultaneousRequirementGroupType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getCharacteristicNominalIds();
  void setCharacteristicNominalIds(ArrayReferenceType * CharacteristicNominalIdsIn);
  SimultaneousRequirementEnumType * getRequirement();
  void setRequirement(SimultaneousRequirementEnumType * RequirementIn);
  CompositeSegmentLowerLevelEnumType * getCompositeLevel();
  void setCompositeLevel(CompositeSegmentLowerLevelEnumType * CompositeLevelIn);

protected:
  ArrayReferenceType * CharacteristicNominalIds;
  SimultaneousRequirementEnumType * Requirement;
  CompositeSegmentLowerLevelEnumType * CompositeLevel;
};

/*********************************************************************/

class SimultaneousRequirementGroupTypeLisd :
  public std::list<SimultaneousRequirementGroupType *>,
  public XmlSchemaInstanceBase
{
public:
  SimultaneousRequirementGroupTypeLisd();
  SimultaneousRequirementGroupTypeLisd(
    SimultaneousRequirementGroupType * aSimultaneousRequirementGroupType);
  ~SimultaneousRequirementGroupTypeLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class SimultaneousRequirementGroupsType :
  public XmlTypeBase
{
public:
  SimultaneousRequirementGroupsType();
  SimultaneousRequirementGroupsType(
    SimultaneousRequirementGroupTypeLisd * SimultaneousRequirementGroupIn);
  SimultaneousRequirementGroupsType(
    NaturalType * nIn,
    SimultaneousRequirementGroupTypeLisd * SimultaneousRequirementGroupIn);
  ~SimultaneousRequirementGroupsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SimultaneousRequirementGroupTypeLisd * getSimultaneousRequirementGroup();
  void setSimultaneousRequirementGroup(SimultaneousRequirementGroupTypeLisd *);

protected:
  NaturalType * n;
  SimultaneousRequirementGroupTypeLisd * SimultaneousRequirementGroup;
};

/*********************************************************************/

class SingleNestingIndexFilterSymbolEnumType :
  public XmlNMTOKEN
{
public:
  SingleNestingIndexFilterSymbolEnumType();
  SingleNestingIndexFilterSymbolEnumType(
    const char * valIn);
  ~SingleNestingIndexFilterSymbolEnumType();
  bool SingleNestingIndexFilterSymbolEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class SingleNestingIndexFilterType :
  public XmlTypeBase
{
public:
  SingleNestingIndexFilterType();
  SingleNestingIndexFilterType(
    SingleNestingIndexFilterSymbolEnumType * SymbolIn,
    LinearValueType * NestingIndexIn,
    LinearValueType * SecondDirectionNestingIndexIn);
  ~SingleNestingIndexFilterType();
  void printSelf(FILE * outFile);

  SingleNestingIndexFilterSymbolEnumType * getSymbol();
  void setSymbol(SingleNestingIndexFilterSymbolEnumType * SymbolIn);
  LinearValueType * getNestingIndex();
  void setNestingIndex(LinearValueType * NestingIndexIn);
  LinearValueType * getSecondDirectionNestingIndex();
  void setSecondDirectionNestingIndex(LinearValueType * SecondDirectionNestingIndexIn);

protected:
  SingleNestingIndexFilterSymbolEnumType * Symbol;
  LinearValueType * NestingIndex;
  LinearValueType * SecondDirectionNestingIndex;
};

/*********************************************************************/

class SpeedCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  SpeedCharacteristicDefinitionBaseType();
  SpeedCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    SpeedCharacteri_1068_Type * SpeedCharacteri_1068In);
  SpeedCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    SpeedCharacteri_1068_Type * SpeedCharacteri_1068In);
  ~SpeedCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SpeedCharacteri_1068_Type * getSpeedCharacteri_1068();
  void setSpeedCharacteri_1068(SpeedCharacteri_1068_Type * SpeedCharacteri_1068In);

protected:
  SpeedCharacteri_1068_Type * SpeedCharacteri_1068;
};

/*********************************************************************/

class SpeedCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  SpeedCharacteristicItemBaseType();
  SpeedCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SpeedCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SpeedCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SpeedCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  SpeedCharacteristicMeasurementBaseType();
  SpeedCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredSpeedValueType * ValueIn,
    MeasuredSpeedValueType * MaxValueIn,
    MeasuredSpeedValueType * MinValueIn);
  SpeedCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredSpeedValueType * ValueIn,
    MeasuredSpeedValueType * MaxValueIn,
    MeasuredSpeedValueType * MinValueIn);
  ~SpeedCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredSpeedValueType * getValue();
  void setValue(MeasuredSpeedValueType * ValueIn);
  MeasuredSpeedValueType * getMaxValue();
  void setMaxValue(MeasuredSpeedValueType * MaxValueIn);
  MeasuredSpeedValueType * getMinValue();
  void setMinValue(MeasuredSpeedValueType * MinValueIn);

protected:
  MeasuredSpeedValueType * Value;
  MeasuredSpeedValueType * MaxValue;
  MeasuredSpeedValueType * MinValue;
};

/*********************************************************************/

class SpeedCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  SpeedCharacteristicNominalBaseType();
  SpeedCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    SpeedValueType * TargetValueIn);
  SpeedCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    SpeedValueType * TargetValueIn);
  ~SpeedCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SpeedValueType * getTargetValue();
  void setTargetValue(SpeedValueType * TargetValueIn);

protected:
  SpeedValueType * TargetValue;
};

/*********************************************************************/

class SphericalDiameterCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  SphericalDiameterCharacteristicDefinitionType();
  SphericalDiameterCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  SphericalDiameterCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~SphericalDiameterCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericalDiameterCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  SphericalDiameterCharacteristicItemType();
  SphericalDiameterCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SphericalDiameterCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SphericalDiameterCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericalDiameterCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  SphericalDiameterCharacteristicMeasurementType();
  SphericalDiameterCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  SphericalDiameterCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~SphericalDiameterCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericalDiameterCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  SphericalDiameterCharacteristicNominalType();
  SphericalDiameterCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  SphericalDiameterCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~SphericalDiameterCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericalRadiusCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  SphericalRadiusCharacteristicDefinitionType();
  SphericalRadiusCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  SphericalRadiusCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~SphericalRadiusCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericalRadiusCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  SphericalRadiusCharacteristicItemType();
  SphericalRadiusCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SphericalRadiusCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SphericalRadiusCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericalRadiusCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  SphericalRadiusCharacteristicMeasurementType();
  SphericalRadiusCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  SphericalRadiusCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~SphericalRadiusCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericalRadiusCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  SphericalRadiusCharacteristicNominalType();
  SphericalRadiusCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  SphericalRadiusCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~SphericalRadiusCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SquareCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  SquareCharacteristicDefinitionType();
  SquareCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  SquareCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~SquareCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SquareCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  SquareCharacteristicItemType();
  SquareCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SquareCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SquareCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SquareCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  SquareCharacteristicMeasurementType();
  SquareCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  SquareCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~SquareCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SquareCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  SquareCharacteristicNominalType();
  SquareCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  SquareCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~SquareCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class StraightnessDiametricalZoneType :
  public XmlTypeBase
{
public:
  StraightnessDiametricalZoneType();
  ~StraightnessDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class StraightnessNonDiametricalZoneType :
  public XmlTypeBase
{
public:
  StraightnessNonDiametricalZoneType();
  StraightnessNonDiametricalZoneType(
    UnitVectorType * ZoneOrientationVectorIn);
  ~StraightnessNonDiametricalZoneType();
  void printSelf(FILE * outFile);

  UnitVectorType * getZoneOrientationVector();
  void setZoneOrientationVector(UnitVectorType * ZoneOrientationVectorIn);

protected:
  UnitVectorType * ZoneOrientationVector;
};

/*********************************************************************/

class StraightnessZoneShapeType :
  public XmlTypeBase
{
public:
  StraightnessZoneShapeType();
  StraightnessZoneShapeType(
    StraightnessZoneShapeTypeChoicePair * StraightnessZoneShapeTypePairIn);
  ~StraightnessZoneShapeType();
  void printSelf(FILE * outFile);

  StraightnessZoneShapeTypeChoicePair * getStraightnessZoneShapeTypePair();
  void setStraightnessZoneShapeTypePair(StraightnessZoneShapeTypeChoicePair * StraightnessZoneShapeTypePairIn);

protected:
  StraightnessZoneShapeTypeChoicePair * StraightnessZoneShapeTypePair;
};

/*********************************************************************/

union StraightnessZoneShapeTypeVal
{
  StraightnessDiametricalZoneType * DiametricalZone;
  StraightnessNonDiametricalZoneType * NonDiametricalZone;
};

/*********************************************************************/

class StraightnessZoneShapeTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DiametricalZoneE,
    NonDiametricalZoneE };
  StraightnessZoneShapeTypeChoicePair();
  StraightnessZoneShapeTypeChoicePair(
    whichOne StraightnessZoneShapeTypeTypeIn,
    StraightnessZoneShapeTypeVal StraightnessZoneShapeTypeValueIn);
  ~StraightnessZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StraightnessZoneShapeTypeType;
  StraightnessZoneShapeTypeVal StraightnessZoneShapeTypeValue;
};

/*********************************************************************/

class StringValuesType :
  public XmlTypeBase
{
public:
  StringValuesType();
  StringValuesType(
    XmlStringLisd * StringValueIn);
  StringValuesType(
    NaturalType * nIn,
    XmlStringLisd * StringValueIn);
  ~StringValuesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  XmlStringLisd * getStringValue();
  void setStringValue(XmlStringLisd *);

protected:
  NaturalType * n;
  XmlStringLisd * StringValue;
};

/*********************************************************************/

class SurfaceProfileCharacteristicDefinitionType :
  public ProfileCharacteristicDefinitionBaseType
{
public:
  SurfaceProfileCharacteristicDefinitionType();
  SurfaceProfileCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    ExtentType * ExtentIn);
  SurfaceProfileCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    ExtentType * ExtentIn);
  ~SurfaceProfileCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExtentType * getExtent();
  void setExtent(ExtentType * ExtentIn);

protected:
  ExtentType * Extent;
};

/*********************************************************************/

class SurfaceProfileCharacteristicItemType :
  public ProfileCharacteristicItemBaseType
{
public:
  SurfaceProfileCharacteristicItemType();
  SurfaceProfileCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SurfaceProfileCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SurfaceProfileCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SurfaceProfileCharacteristicMeasurementType :
  public ProfileCharacteristicMeasurementBaseType
{
public:
  SurfaceProfileCharacteristicMeasurementType();
  SurfaceProfileCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  SurfaceProfileCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  ~SurfaceProfileCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SurfaceProfileCharacteristicNominalType :
  public ProfileCharacteristicNominalBaseType
{
public:
  SurfaceProfileCharacteristicNominalType();
  SurfaceProfileCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  SurfaceProfileCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  ~SurfaceProfileCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SurfaceProfileNonUniformCharacteristicDefinitionType :
  public ProfileCharacteristicDefinitionBaseType
{
public:
  SurfaceProfileNonUniformCharacteristicDefinitionType();
  SurfaceProfileNonUniformCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    LinearValueType * ToPointToleranceValueIn,
    SurfaceProfileN_1071_Type * SurfaceProfileN_1071In);
  SurfaceProfileNonUniformCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    LinearValueType * ToPointToleranceValueIn,
    SurfaceProfileN_1071_Type * SurfaceProfileN_1071In);
  ~SurfaceProfileNonUniformCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToPointToleranceValue();
  void setToPointToleranceValue(LinearValueType * ToPointToleranceValueIn);
  SurfaceProfileN_1071_Type * getSurfaceProfileN_1071();
  void setSurfaceProfileN_1071(SurfaceProfileN_1071_Type * SurfaceProfileN_1071In);

protected:
  LinearValueType * ToPointToleranceValue;
  SurfaceProfileN_1071_Type * SurfaceProfileN_1071;
};

/*********************************************************************/

class SurfaceProfileNonUniformCharacteristicItemType :
  public ProfileCharacteristicItemBaseType
{
public:
  SurfaceProfileNonUniformCharacteristicItemType();
  SurfaceProfileNonUniformCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SurfaceProfileNonUniformCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SurfaceProfileNonUniformCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SurfaceProfileNonUniformCharacteristicMeasurementType :
  public ProfileCharacteristicMeasurementBaseType
{
public:
  SurfaceProfileNonUniformCharacteristicMeasurementType();
  SurfaceProfileNonUniformCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  SurfaceProfileNonUniformCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  ~SurfaceProfileNonUniformCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SurfaceProfileNonUniformCharacteristicNominalType :
  public ProfileCharacteristicNominalBaseType
{
public:
  SurfaceProfileNonUniformCharacteristicNominalType();
  SurfaceProfileNonUniformCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  SurfaceProfileNonUniformCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  ~SurfaceProfileNonUniformCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SurfaceTextureCharacteristicDefinitionType :
  public CharacteristicDefinitionBaseType
{
public:
  SurfaceTextureCharacteristicDefinitionType();
  SurfaceTextureCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    LinearValueType * RoughnessAverageIn);
  SurfaceTextureCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    LinearValueType * RoughnessAverageIn);
  ~SurfaceTextureCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getRoughnessAverage();
  void setRoughnessAverage(LinearValueType * RoughnessAverageIn);

protected:
  LinearValueType * RoughnessAverage;
};

/*********************************************************************/

class SurfaceTextureCharacteristicItemType :
  public CharacteristicItemBaseType
{
public:
  SurfaceTextureCharacteristicItemType();
  SurfaceTextureCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SurfaceTextureCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SurfaceTextureCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SurfaceTextureCharacteristicMeasurementType :
  public CharacteristicMeasurementBaseType
{
public:
  SurfaceTextureCharacteristicMeasurementType();
  SurfaceTextureCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * RoughnessAverageValueIn);
  SurfaceTextureCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * RoughnessAverageValueIn);
  ~SurfaceTextureCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getRoughnessAverageValue();
  void setRoughnessAverageValue(MeasuredLinearValueType * RoughnessAverageValueIn);

protected:
  MeasuredLinearValueType * RoughnessAverageValue;
};

/*********************************************************************/

class SurfaceTextureCharacteristicNominalType :
  public CharacteristicNominalBaseType
{
public:
  SurfaceTextureCharacteristicNominalType();
  SurfaceTextureCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    RoughnessObtentionEnumType * ObtentionIn,
    RoughnessApplicabilityEnumType * ApplicabilityIn,
    XmlToken * MinimumMaterialRemovalIn,
    XmlToken * ProductionMethodIn,
    LinearValueType * CutoffIn,
    LinearValueType * SecondaryRoughnessParameterIn,
    RoughnessLayEnumType * DirectionOfLayIn,
    XmlToken * OtherSurfaceParameterIn);
  SurfaceTextureCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    RoughnessObtentionEnumType * ObtentionIn,
    RoughnessApplicabilityEnumType * ApplicabilityIn,
    XmlToken * MinimumMaterialRemovalIn,
    XmlToken * ProductionMethodIn,
    LinearValueType * CutoffIn,
    LinearValueType * SecondaryRoughnessParameterIn,
    RoughnessLayEnumType * DirectionOfLayIn,
    XmlToken * OtherSurfaceParameterIn);
  ~SurfaceTextureCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  RoughnessObtentionEnumType * getObtention();
  void setObtention(RoughnessObtentionEnumType * ObtentionIn);
  RoughnessApplicabilityEnumType * getApplicability();
  void setApplicability(RoughnessApplicabilityEnumType * ApplicabilityIn);
  XmlToken * getMinimumMaterialRemoval();
  void setMinimumMaterialRemoval(XmlToken * MinimumMaterialRemovalIn);
  XmlToken * getProductionMethod();
  void setProductionMethod(XmlToken * ProductionMethodIn);
  LinearValueType * getCutoff();
  void setCutoff(LinearValueType * CutoffIn);
  LinearValueType * getSecondaryRoughnessParameter();
  void setSecondaryRoughnessParameter(LinearValueType * SecondaryRoughnessParameterIn);
  RoughnessLayEnumType * getDirectionOfLay();
  void setDirectionOfLay(RoughnessLayEnumType * DirectionOfLayIn);
  XmlToken * getOtherSurfaceParameter();
  void setOtherSurfaceParameter(XmlToken * OtherSurfaceParameterIn);

protected:
  RoughnessObtentionEnumType * Obtention;
  RoughnessApplicabilityEnumType * Applicability;
  XmlToken * MinimumMaterialRemoval;
  XmlToken * ProductionMethod;
  LinearValueType * Cutoff;
  LinearValueType * SecondaryRoughnessParameter;
  RoughnessLayEnumType * DirectionOfLay;
  XmlToken * OtherSurfaceParameter;
};

/*********************************************************************/

class SymmetryCharacteristicDefinitionType :
  public LocationCharacteristicDefinitionBaseType
{
public:
  SymmetryCharacteristicDefinitionType();
  SymmetryCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    CompositeSegmentSymmetryDefinitionType * SecondCompositeSegmentSymmetryDefinitionIn,
    CompositeSegmentSymmetryDefinitionType * ThirdCompositeSegmentSymmetryDefinitionIn);
  SymmetryCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    CompositeSegmentSymmetryDefinitionType * SecondCompositeSegmentSymmetryDefinitionIn,
    CompositeSegmentSymmetryDefinitionType * ThirdCompositeSegmentSymmetryDefinitionIn);
  ~SymmetryCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CompositeSegmentSymmetryDefinitionType * getSecondCompositeSegmentSymmetryDefinition();
  void setSecondCompositeSegmentSymmetryDefinition(CompositeSegmentSymmetryDefinitionType * SecondCompositeSegmentSymmetryDefinitionIn);
  CompositeSegmentSymmetryDefinitionType * getThirdCompositeSegmentSymmetryDefinition();
  void setThirdCompositeSegmentSymmetryDefinition(CompositeSegmentSymmetryDefinitionType * ThirdCompositeSegmentSymmetryDefinitionIn);

protected:
  CompositeSegmentSymmetryDefinitionType * SecondCompositeSegmentSymmetryDefinition;
  CompositeSegmentSymmetryDefinitionType * ThirdCompositeSegmentSymmetryDefinition;
};

/*********************************************************************/

class SymmetryCharacteristicItemType :
  public LocationCharacteristicItemBaseType
{
public:
  SymmetryCharacteristicItemType();
  SymmetryCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SymmetryCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SymmetryCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SymmetryCharacteristicMeasurementType :
  public LocationCharacteristicMeasurementBaseType
{
public:
  SymmetryCharacteristicMeasurementType();
  SymmetryCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn,
    CompositeSegmentSymmetryMeasurementType * SecondCompositeSegmentSymmetryMeasurementIn,
    CompositeSegmentSymmetryMeasurementType * ThirdCompositeSegmentSymmetryMeasurementIn);
  SymmetryCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn,
    CompositeSegmentSymmetryMeasurementType * SecondCompositeSegmentSymmetryMeasurementIn,
    CompositeSegmentSymmetryMeasurementType * ThirdCompositeSegmentSymmetryMeasurementIn);
  ~SymmetryCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CompositeSegmentSymmetryMeasurementType * getSecondCompositeSegmentSymmetryMeasurement();
  void setSecondCompositeSegmentSymmetryMeasurement(CompositeSegmentSymmetryMeasurementType * SecondCompositeSegmentSymmetryMeasurementIn);
  CompositeSegmentSymmetryMeasurementType * getThirdCompositeSegmentSymmetryMeasurement();
  void setThirdCompositeSegmentSymmetryMeasurement(CompositeSegmentSymmetryMeasurementType * ThirdCompositeSegmentSymmetryMeasurementIn);

protected:
  CompositeSegmentSymmetryMeasurementType * SecondCompositeSegmentSymmetryMeasurement;
  CompositeSegmentSymmetryMeasurementType * ThirdCompositeSegmentSymmetryMeasurement;
};

/*********************************************************************/

class SymmetryCharacteristicNominalType :
  public LocationCharacteristicNominalBaseType
{
public:
  SymmetryCharacteristicNominalType();
  SymmetryCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  SymmetryCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~SymmetryCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class TemperatureCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  TemperatureCharacteristicDefinitionBaseType();
  TemperatureCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TemperatureChar_1072_Type * TemperatureChar_1072In);
  TemperatureCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TemperatureChar_1072_Type * TemperatureChar_1072In);
  ~TemperatureCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TemperatureChar_1072_Type * getTemperatureChar_1072();
  void setTemperatureChar_1072(TemperatureChar_1072_Type * TemperatureChar_1072In);

protected:
  TemperatureChar_1072_Type * TemperatureChar_1072;
};

/*********************************************************************/

class TemperatureCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  TemperatureCharacteristicItemBaseType();
  TemperatureCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  TemperatureCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~TemperatureCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class TemperatureCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  TemperatureCharacteristicMeasurementBaseType();
  TemperatureCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTemperatureValueType * ValueIn,
    MeasuredTemperatureValueType * MaxValueIn,
    MeasuredTemperatureValueType * MinValueIn);
  TemperatureCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTemperatureValueType * ValueIn,
    MeasuredTemperatureValueType * MaxValueIn,
    MeasuredTemperatureValueType * MinValueIn);
  ~TemperatureCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredTemperatureValueType * getValue();
  void setValue(MeasuredTemperatureValueType * ValueIn);
  MeasuredTemperatureValueType * getMaxValue();
  void setMaxValue(MeasuredTemperatureValueType * MaxValueIn);
  MeasuredTemperatureValueType * getMinValue();
  void setMinValue(MeasuredTemperatureValueType * MinValueIn);

protected:
  MeasuredTemperatureValueType * Value;
  MeasuredTemperatureValueType * MaxValue;
  MeasuredTemperatureValueType * MinValue;
};

/*********************************************************************/

class TemperatureCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  TemperatureCharacteristicNominalBaseType();
  TemperatureCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TemperatureValueType * TargetValueIn);
  TemperatureCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TemperatureValueType * TargetValueIn);
  ~TemperatureCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TemperatureValueType * getTargetValue();
  void setTargetValue(TemperatureValueType * TargetValueIn);

protected:
  TemperatureValueType * TargetValue;
};

/*********************************************************************/

class ThicknessCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  ThicknessCharacteristicDefinitionType();
  ThicknessCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ThicknessCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~ThicknessCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ThicknessCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  ThicknessCharacteristicItemType();
  ThicknessCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ThicknessCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ThicknessCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ThicknessCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  ThicknessCharacteristicMeasurementType();
  ThicknessCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ThicknessCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~ThicknessCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ThicknessCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  ThicknessCharacteristicNominalType();
  ThicknessCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ThicknessCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~ThicknessCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ThreadCharacteristicDefinitionType :
  public CharacteristicDefinitionBaseType
{
public:
  ThreadCharacteristicDefinitionType();
  ThreadCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    QIFReferenceType * ThreadSpecificationIdIn);
  ThreadCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    QIFReferenceType * ThreadSpecificationIdIn);
  ~ThreadCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getThreadSpecificationId();
  void setThreadSpecificationId(QIFReferenceType * ThreadSpecificationIdIn);

protected:
  QIFReferenceType * ThreadSpecificationId;
};

/*********************************************************************/

class ThreadCharacteristicItemType :
  public CharacteristicItemBaseType
{
public:
  ThreadCharacteristicItemType();
  ThreadCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ThreadCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ThreadCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ThreadCharacteristicMeasurementType :
  public CharacteristicMeasurementBaseType
{
public:
  ThreadCharacteristicMeasurementType();
  ThreadCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * PitchDiameterIn,
    MeasuredLinearValueType * FunctionalSizeIn);
  ThreadCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * PitchDiameterIn,
    MeasuredLinearValueType * FunctionalSizeIn);
  ~ThreadCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getPitchDiameter();
  void setPitchDiameter(MeasuredLinearValueType * PitchDiameterIn);
  MeasuredLinearValueType * getFunctionalSize();
  void setFunctionalSize(MeasuredLinearValueType * FunctionalSizeIn);

protected:
  MeasuredLinearValueType * PitchDiameter;
  MeasuredLinearValueType * FunctionalSize;
};

/*********************************************************************/

class ThreadCharacteristicNominalType :
  public CharacteristicNominalBaseType
{
public:
  ThreadCharacteristicNominalType();
  ThreadCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ThreadCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~ThreadCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class TimeCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  TimeCharacteristicDefinitionBaseType();
  TimeCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TimeCharacteris_1073_Type * TimeCharacteris_1073In);
  TimeCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TimeCharacteris_1073_Type * TimeCharacteris_1073In);
  ~TimeCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TimeCharacteris_1073_Type * getTimeCharacteris_1073();
  void setTimeCharacteris_1073(TimeCharacteris_1073_Type * TimeCharacteris_1073In);

protected:
  TimeCharacteris_1073_Type * TimeCharacteris_1073;
};

/*********************************************************************/

class TimeCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  TimeCharacteristicItemBaseType();
  TimeCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  TimeCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~TimeCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class TimeCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  TimeCharacteristicMeasurementBaseType();
  TimeCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTimeValueType * ValueIn,
    MeasuredTimeValueType * MaxValueIn,
    MeasuredTimeValueType * MinValueIn);
  TimeCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTimeValueType * ValueIn,
    MeasuredTimeValueType * MaxValueIn,
    MeasuredTimeValueType * MinValueIn);
  ~TimeCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredTimeValueType * getValue();
  void setValue(MeasuredTimeValueType * ValueIn);
  MeasuredTimeValueType * getMaxValue();
  void setMaxValue(MeasuredTimeValueType * MaxValueIn);
  MeasuredTimeValueType * getMinValue();
  void setMinValue(MeasuredTimeValueType * MinValueIn);

protected:
  MeasuredTimeValueType * Value;
  MeasuredTimeValueType * MaxValue;
  MeasuredTimeValueType * MinValue;
};

/*********************************************************************/

class TimeCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  TimeCharacteristicNominalBaseType();
  TimeCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TimeValueType * TargetValueIn);
  TimeCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TimeValueType * TargetValueIn);
  ~TimeCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TimeValueType * getTargetValue();
  void setTargetValue(TimeValueType * TargetValueIn);

protected:
  TimeValueType * TargetValue;
};

/*********************************************************************/

class ToleranceDefinitionsType :
  public XmlTypeBase
{
public:
  ToleranceDefinitionsType();
  ToleranceDefinitionsType(
    ToleranceDefinitionsTypeChoicePairLisd * ToleranceDefinitionsTypePairsIn);
  ToleranceDefinitionsType(
    NaturalType * nIn,
    ToleranceDefinitionsTypeChoicePairLisd * ToleranceDefinitionsTypePairsIn);
  ~ToleranceDefinitionsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ToleranceDefinitionsTypeChoicePairLisd * getToleranceDefinitionsTypePairs();
  void setToleranceDefinitionsTypePairs(ToleranceDefinitionsTypeChoicePairLisd * ToleranceDefinitionsTypePairsIn);

protected:
  NaturalType * n;
  ToleranceDefinitionsTypeChoicePairLisd * ToleranceDefinitionsTypePairs;
};

/*********************************************************************/

union ToleranceDefinitionsTypeVal
{
  LinearToleranceDefinitionType * LinearTolerance;
  AngularToleranceDefinitionType * AngularTolerance;
};

/*********************************************************************/

class ToleranceDefinitionsTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearToleranceE,
    AngularToleranceE };
  ToleranceDefinitionsTypeChoicePair();
  ToleranceDefinitionsTypeChoicePair(
    whichOne ToleranceDefinitionsTypeTypeIn,
    ToleranceDefinitionsTypeVal ToleranceDefinitionsTypeValueIn);
  ~ToleranceDefinitionsTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToleranceDefinitionsTypeType;
  ToleranceDefinitionsTypeVal ToleranceDefinitionsTypeValue;
};

/*********************************************************************/

class ToleranceDefinitionsTypeChoicePairLisd :
  public std::list<ToleranceDefinitionsTypeChoicePair *>,
  public XmlSchemaInstanceBase
{
public:
  ToleranceDefinitionsTypeChoicePairLisd();
  ToleranceDefinitionsTypeChoicePairLisd
    (ToleranceDefinitionsTypeChoicePair * aToleranceDefinitionsTypeChoicePair);
  ~ToleranceDefinitionsTypeChoicePairLisd();
  void printSelf(FILE * outFile);
};

/*********************************************************************/

class TotalRunoutCharacteristicDefinitionType :
  public RunoutCharacteristicDefinitionBaseType
{
public:
  TotalRunoutCharacteristicDefinitionType();
  TotalRunoutCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  TotalRunoutCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  ~TotalRunoutCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class TotalRunoutCharacteristicItemType :
  public RunoutCharacteristicItemBaseType
{
public:
  TotalRunoutCharacteristicItemType();
  TotalRunoutCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  TotalRunoutCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~TotalRunoutCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class TotalRunoutCharacteristicMeasurementType :
  public RunoutCharacteristicMeasurementBaseType
{
public:
  TotalRunoutCharacteristicMeasurementType();
  TotalRunoutCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn);
  TotalRunoutCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn);
  ~TotalRunoutCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class TotalRunoutCharacteristicNominalType :
  public RunoutCharacteristicNominalBaseType
{
public:
  TotalRunoutCharacteristicNominalType();
  TotalRunoutCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  TotalRunoutCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~TotalRunoutCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAttributeCharacteristicDefinitionType :
  public CharacteristicDefinitionBaseType
{
public:
  UserDefinedAttributeCharacteristicDefinitionType();
  UserDefinedAttributeCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    XmlString * WhatToMeasureIn);
  UserDefinedAttributeCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedAttributeCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedAttributeCharacteristicItemType :
  public CharacteristicItemBaseType
{
public:
  UserDefinedAttributeCharacteristicItemType();
  UserDefinedAttributeCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedAttributeCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedAttributeCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAttributeCharacteristicMeasurementType :
  public CharacteristicMeasurementBaseType
{
public:
  UserDefinedAttributeCharacteristicMeasurementType();
  UserDefinedAttributeCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    XmlString * ValueIn);
  UserDefinedAttributeCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    XmlString * ValueIn);
  ~UserDefinedAttributeCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getValue();
  void setValue(XmlString * ValueIn);

protected:
  XmlString * Value;
};

/*********************************************************************/

class UserDefinedAttributeCharacteristicNominalType :
  public CharacteristicNominalBaseType
{
public:
  UserDefinedAttributeCharacteristicNominalType();
  UserDefinedAttributeCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    StringValuesType * PassValuesIn,
    StringValuesType * FailValuesIn);
  UserDefinedAttributeCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    StringValuesType * PassValuesIn,
    StringValuesType * FailValuesIn);
  ~UserDefinedAttributeCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  StringValuesType * getPassValues();
  void setPassValues(StringValuesType * PassValuesIn);
  StringValuesType * getFailValues();
  void setFailValues(StringValuesType * FailValuesIn);

protected:
  StringValuesType * PassValues;
  StringValuesType * FailValues;
};

/*********************************************************************/

class UserDefinedForceCharacteristicDefinitionType :
  public ForceCharacteristicDefinitionBaseType
{
public:
  UserDefinedForceCharacteristicDefinitionType();
  UserDefinedForceCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    ForceCharacteri_1056_Type * ForceCharacteri_1056In,
    XmlString * WhatToMeasureIn);
  UserDefinedForceCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    ForceCharacteri_1056_Type * ForceCharacteri_1056In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedForceCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedForceCharacteristicItemType :
  public ForceCharacteristicItemBaseType
{
public:
  UserDefinedForceCharacteristicItemType();
  UserDefinedForceCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedForceCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedForceCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedForceCharacteristicMeasurementType :
  public ForceCharacteristicMeasurementBaseType
{
public:
  UserDefinedForceCharacteristicMeasurementType();
  UserDefinedForceCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredForceValueType * ValueIn,
    MeasuredForceValueType * MaxValueIn,
    MeasuredForceValueType * MinValueIn);
  UserDefinedForceCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredForceValueType * ValueIn,
    MeasuredForceValueType * MaxValueIn,
    MeasuredForceValueType * MinValueIn);
  ~UserDefinedForceCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedForceCharacteristicNominalType :
  public ForceCharacteristicNominalBaseType
{
public:
  UserDefinedForceCharacteristicNominalType();
  UserDefinedForceCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ForceValueType * TargetValueIn);
  UserDefinedForceCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ForceValueType * TargetValueIn);
  ~UserDefinedForceCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedLinearCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  UserDefinedLinearCharacteristicDefinitionType();
  UserDefinedLinearCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In,
    XmlString * WhatToMeasureIn);
  UserDefinedLinearCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedLinearCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedLinearCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  UserDefinedLinearCharacteristicItemType();
  UserDefinedLinearCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedLinearCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedLinearCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedLinearCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  UserDefinedLinearCharacteristicMeasurementType();
  UserDefinedLinearCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  UserDefinedLinearCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~UserDefinedLinearCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedLinearCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  UserDefinedLinearCharacteristicNominalType();
  UserDefinedLinearCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  UserDefinedLinearCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~UserDefinedLinearCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedMassCharacteristicDefinitionType :
  public MassCharacteristicDefinitionBaseType
{
public:
  UserDefinedMassCharacteristicDefinitionType();
  UserDefinedMassCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    MassCharacteris_1063_Type * MassCharacteris_1063In,
    XmlString * WhatToMeasureIn);
  UserDefinedMassCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    MassCharacteris_1063_Type * MassCharacteris_1063In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedMassCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedMassCharacteristicItemType :
  public MassCharacteristicItemBaseType
{
public:
  UserDefinedMassCharacteristicItemType();
  UserDefinedMassCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedMassCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedMassCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedMassCharacteristicMeasurementType :
  public MassCharacteristicMeasurementBaseType
{
public:
  UserDefinedMassCharacteristicMeasurementType();
  UserDefinedMassCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredMassValueType * ValueIn,
    MeasuredMassValueType * MaxValueIn,
    MeasuredMassValueType * MinValueIn);
  UserDefinedMassCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredMassValueType * ValueIn,
    MeasuredMassValueType * MaxValueIn,
    MeasuredMassValueType * MinValueIn);
  ~UserDefinedMassCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedMassCharacteristicNominalType :
  public MassCharacteristicNominalBaseType
{
public:
  UserDefinedMassCharacteristicNominalType();
  UserDefinedMassCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    MassValueType * TargetValueIn);
  UserDefinedMassCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    MassValueType * TargetValueIn);
  ~UserDefinedMassCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedPressureCharacteristicDefinitionType :
  public PressureCharacteristicDefinitionBaseType
{
public:
  UserDefinedPressureCharacteristicDefinitionType();
  UserDefinedPressureCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    PressureCharact_1066_Type * PressureCharact_1066In,
    XmlString * WhatToMeasureIn);
  UserDefinedPressureCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    PressureCharact_1066_Type * PressureCharact_1066In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedPressureCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedPressureCharacteristicItemType :
  public PressureCharacteristicItemBaseType
{
public:
  UserDefinedPressureCharacteristicItemType();
  UserDefinedPressureCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedPressureCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedPressureCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedPressureCharacteristicMeasurementType :
  public PressureCharacteristicMeasurementBaseType
{
public:
  UserDefinedPressureCharacteristicMeasurementType();
  UserDefinedPressureCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredPressureValueType * ValueIn,
    MeasuredPressureValueType * MaxValueIn,
    MeasuredPressureValueType * MinValueIn);
  UserDefinedPressureCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredPressureValueType * ValueIn,
    MeasuredPressureValueType * MaxValueIn,
    MeasuredPressureValueType * MinValueIn);
  ~UserDefinedPressureCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedPressureCharacteristicNominalType :
  public PressureCharacteristicNominalBaseType
{
public:
  UserDefinedPressureCharacteristicNominalType();
  UserDefinedPressureCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    PressureValueType * TargetValueIn);
  UserDefinedPressureCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    PressureValueType * TargetValueIn);
  ~UserDefinedPressureCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedSpeedCharacteristicDefinitionType :
  public SpeedCharacteristicDefinitionBaseType
{
public:
  UserDefinedSpeedCharacteristicDefinitionType();
  UserDefinedSpeedCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    SpeedCharacteri_1068_Type * SpeedCharacteri_1068In,
    XmlString * WhatToMeasureIn);
  UserDefinedSpeedCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    SpeedCharacteri_1068_Type * SpeedCharacteri_1068In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedSpeedCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedSpeedCharacteristicItemType :
  public SpeedCharacteristicItemBaseType
{
public:
  UserDefinedSpeedCharacteristicItemType();
  UserDefinedSpeedCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedSpeedCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedSpeedCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedSpeedCharacteristicMeasurementType :
  public SpeedCharacteristicMeasurementBaseType
{
public:
  UserDefinedSpeedCharacteristicMeasurementType();
  UserDefinedSpeedCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredSpeedValueType * ValueIn,
    MeasuredSpeedValueType * MaxValueIn,
    MeasuredSpeedValueType * MinValueIn);
  UserDefinedSpeedCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredSpeedValueType * ValueIn,
    MeasuredSpeedValueType * MaxValueIn,
    MeasuredSpeedValueType * MinValueIn);
  ~UserDefinedSpeedCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedSpeedCharacteristicNominalType :
  public SpeedCharacteristicNominalBaseType
{
public:
  UserDefinedSpeedCharacteristicNominalType();
  UserDefinedSpeedCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    SpeedValueType * TargetValueIn);
  UserDefinedSpeedCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    SpeedValueType * TargetValueIn);
  ~UserDefinedSpeedCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedTemperatureCharacteristicDefinitionType :
  public TemperatureCharacteristicDefinitionBaseType
{
public:
  UserDefinedTemperatureCharacteristicDefinitionType();
  UserDefinedTemperatureCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TemperatureChar_1072_Type * TemperatureChar_1072In,
    XmlString * WhatToMeasureIn);
  UserDefinedTemperatureCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TemperatureChar_1072_Type * TemperatureChar_1072In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedTemperatureCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedTemperatureCharacteristicItemType :
  public TemperatureCharacteristicItemBaseType
{
public:
  UserDefinedTemperatureCharacteristicItemType();
  UserDefinedTemperatureCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedTemperatureCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedTemperatureCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedTemperatureCharacteristicMeasurementType :
  public TemperatureCharacteristicMeasurementBaseType
{
public:
  UserDefinedTemperatureCharacteristicMeasurementType();
  UserDefinedTemperatureCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTemperatureValueType * ValueIn,
    MeasuredTemperatureValueType * MaxValueIn,
    MeasuredTemperatureValueType * MinValueIn);
  UserDefinedTemperatureCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTemperatureValueType * ValueIn,
    MeasuredTemperatureValueType * MaxValueIn,
    MeasuredTemperatureValueType * MinValueIn);
  ~UserDefinedTemperatureCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedTemperatureCharacteristicNominalType :
  public TemperatureCharacteristicNominalBaseType
{
public:
  UserDefinedTemperatureCharacteristicNominalType();
  UserDefinedTemperatureCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TemperatureValueType * TargetValueIn);
  UserDefinedTemperatureCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TemperatureValueType * TargetValueIn);
  ~UserDefinedTemperatureCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedTimeCharacteristicDefinitionType :
  public TimeCharacteristicDefinitionBaseType
{
public:
  UserDefinedTimeCharacteristicDefinitionType();
  UserDefinedTimeCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TimeCharacteris_1073_Type * TimeCharacteris_1073In,
    XmlString * WhatToMeasureIn);
  UserDefinedTimeCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    TimeCharacteris_1073_Type * TimeCharacteris_1073In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedTimeCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedTimeCharacteristicItemType :
  public TimeCharacteristicItemBaseType
{
public:
  UserDefinedTimeCharacteristicItemType();
  UserDefinedTimeCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedTimeCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedTimeCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedTimeCharacteristicMeasurementType :
  public TimeCharacteristicMeasurementBaseType
{
public:
  UserDefinedTimeCharacteristicMeasurementType();
  UserDefinedTimeCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTimeValueType * ValueIn,
    MeasuredTimeValueType * MaxValueIn,
    MeasuredTimeValueType * MinValueIn);
  UserDefinedTimeCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredTimeValueType * ValueIn,
    MeasuredTimeValueType * MaxValueIn,
    MeasuredTimeValueType * MinValueIn);
  ~UserDefinedTimeCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedTimeCharacteristicNominalType :
  public TimeCharacteristicNominalBaseType
{
public:
  UserDefinedTimeCharacteristicNominalType();
  UserDefinedTimeCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TimeValueType * TargetValueIn);
  UserDefinedTimeCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    TimeValueType * TargetValueIn);
  ~UserDefinedTimeCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedUnitCharacteristicDefinitionType :
  public CharacteristicDefinitionBaseType
{
public:
  UserDefinedUnitCharacteristicDefinitionType();
  UserDefinedUnitCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  UserDefinedUnitCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~UserDefinedUnitCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedUnitCharacteristicItemType :
  public CharacteristicItemBaseType
{
public:
  UserDefinedUnitCharacteristicItemType();
  UserDefinedUnitCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedUnitCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedUnitCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedUnitCharacteristicMeasurementType :
  public CharacteristicMeasurementBaseType
{
public:
  UserDefinedUnitCharacteristicMeasurementType();
  UserDefinedUnitCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredUserDefinedUnitValueType * ValueIn,
    MeasuredUserDefinedUnitValueType * MaxValueIn,
    MeasuredUserDefinedUnitValueType * MinValueIn);
  UserDefinedUnitCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredUserDefinedUnitValueType * ValueIn,
    MeasuredUserDefinedUnitValueType * MaxValueIn,
    MeasuredUserDefinedUnitValueType * MinValueIn);
  ~UserDefinedUnitCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredUserDefinedUnitValueType * getValue();
  void setValue(MeasuredUserDefinedUnitValueType * ValueIn);
  MeasuredUserDefinedUnitValueType * getMaxValue();
  void setMaxValue(MeasuredUserDefinedUnitValueType * MaxValueIn);
  MeasuredUserDefinedUnitValueType * getMinValue();
  void setMinValue(MeasuredUserDefinedUnitValueType * MinValueIn);

protected:
  MeasuredUserDefinedUnitValueType * Value;
  MeasuredUserDefinedUnitValueType * MaxValue;
  MeasuredUserDefinedUnitValueType * MinValue;
};

/*********************************************************************/

class UserDefinedUnitCharacteristicNominalType :
  public CharacteristicNominalBaseType
{
public:
  UserDefinedUnitCharacteristicNominalType();
  UserDefinedUnitCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    UserDefinedUnitValueType * TargetValueIn,
    UserDefinedUnit_1074_Type * UserDefinedUnit_1074In,
    XmlBoolean * DefinedAsLimitIn);
  UserDefinedUnitCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    UserDefinedUnitValueType * TargetValueIn,
    UserDefinedUnit_1074_Type * UserDefinedUnit_1074In,
    XmlBoolean * DefinedAsLimitIn);
  ~UserDefinedUnitCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UserDefinedUnitValueType * getTargetValue();
  void setTargetValue(UserDefinedUnitValueType * TargetValueIn);
  UserDefinedUnit_1074_Type * getUserDefinedUnit_1074();
  void setUserDefinedUnit_1074(UserDefinedUnit_1074_Type * UserDefinedUnit_1074In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);

protected:
  UserDefinedUnitValueType * TargetValue;
  UserDefinedUnit_1074_Type * UserDefinedUnit_1074;
  XmlBoolean * DefinedAsLimit;
};

/*********************************************************************/

class WeldCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  WeldCharacteristicDefinitionBaseType();
  WeldCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  WeldCharacteristicItemBaseType();
  WeldCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  WeldCharacteristicMeasurementBaseType();
  WeldCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn);
  WeldCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn);
  ~WeldCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  WeldCharacteristicNominalBaseType();
  WeldCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn);
  WeldCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn);
  ~WeldCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getAllAround();
  void setAllAround(XmlBoolean * AllAroundIn);
  XmlBoolean * getField();
  void setField(XmlBoolean * FieldIn);
  XmlToken * getSpecification();
  void setSpecification(XmlToken * SpecificationIn);
  WeldingProcessType * getWeldingProcess();
  void setWeldingProcess(WeldingProcessType * WeldingProcessIn);
  ArrayNonDestructiveTestingType * getNonDestructiveTesting();
  void setNonDestructiveTesting(ArrayNonDestructiveTestingType * NonDestructiveTestingIn);

protected:
  XmlBoolean * AllAround;
  XmlBoolean * Field;
  XmlToken * Specification;
  WeldingProcessType * WeldingProcess;
  ArrayNonDestructiveTestingType * NonDestructiveTesting;
};

/*********************************************************************/

class WeldCompoundCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldCompoundCharacteristicDefinitionType();
  WeldCompoundCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    ArrayReferenceFullType * WeldCharacteristicDefinitionIdsIn);
  WeldCompoundCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    ArrayReferenceFullType * WeldCharacteristicDefinitionIdsIn);
  ~WeldCompoundCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceFullType * getWeldCharacteristicDefinitionIds();
  void setWeldCharacteristicDefinitionIds(ArrayReferenceFullType * WeldCharacteristicDefinitionIdsIn);

protected:
  ArrayReferenceFullType * WeldCharacteristicDefinitionIds;
};

/*********************************************************************/

class WeldCompoundCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldCompoundCharacteristicItemType();
  WeldCompoundCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ArrayReferenceType * WeldCharacteristicItemIdsIn);
  WeldCompoundCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ArrayReferenceType * WeldCharacteristicItemIdsIn);
  ~WeldCompoundCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getWeldCharacteristicItemIds();
  void setWeldCharacteristicItemIds(ArrayReferenceType * WeldCharacteristicItemIdsIn);

protected:
  ArrayReferenceType * WeldCharacteristicItemIds;
};

/*********************************************************************/

class WeldCompoundCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldCompoundCharacteristicMeasurementType();
  WeldCompoundCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    ArrayReferenceType * WeldCharacteristicMeasurementIdsIn);
  WeldCompoundCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    ArrayReferenceType * WeldCharacteristicMeasurementIdsIn);
  ~WeldCompoundCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getWeldCharacteristicMeasurementIds();
  void setWeldCharacteristicMeasurementIds(ArrayReferenceType * WeldCharacteristicMeasurementIdsIn);

protected:
  ArrayReferenceType * WeldCharacteristicMeasurementIds;
};

/*********************************************************************/

class WeldCompoundCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldCompoundCharacteristicNominalType();
  WeldCompoundCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    ArrayReferenceFullType * WeldCharacteristicNominalIdsIn);
  WeldCompoundCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    ArrayReferenceFullType * WeldCharacteristicNominalIdsIn);
  ~WeldCompoundCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceFullType * getWeldCharacteristicNominalIds();
  void setWeldCharacteristicNominalIds(ArrayReferenceFullType * WeldCharacteristicNominalIdsIn);

protected:
  ArrayReferenceFullType * WeldCharacteristicNominalIds;
};

/*********************************************************************/

class WeldContourSymbolEnumType :
  public XmlString
{
public:
  WeldContourSymbolEnumType();
  WeldContourSymbolEnumType(
    const char * valIn);
  ~WeldContourSymbolEnumType();
  bool WeldContourSymbolEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class WeldEdgeCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldEdgeCharacteristicDefinitionType();
  WeldEdgeCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldEdgeCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldEdgeCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldEdgeCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldEdgeCharacteristicItemType();
  WeldEdgeCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldEdgeCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldEdgeCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldEdgeCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldEdgeCharacteristicMeasurementType();
  WeldEdgeCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendSizeType * SideParametersIn);
  WeldEdgeCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendSizeType * SideParametersIn);
  ~WeldEdgeCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldOneSideParametersExtendSizeType * getSideParameters();
  void setSideParameters(WeldOneSideParametersExtendSizeType * SideParametersIn);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldOneSideParametersExtendSizeType * SideParameters;
};

/*********************************************************************/

class WeldEdgeCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldEdgeCharacteristicNominalType();
  WeldEdgeCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendSizeType * SideParametersIn);
  WeldEdgeCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendSizeType * SideParametersIn);
  ~WeldEdgeCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldOneSideParametersExtendSizeType * getSideParameters();
  void setSideParameters(WeldOneSideParametersExtendSizeType * SideParametersIn);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldOneSideParametersExtendSizeType * SideParameters;
};

/*********************************************************************/

class WeldFilletBothSidesType :
  public XmlTypeBase
{
public:
  WeldFilletBothSidesType();
  WeldFilletBothSidesType(
    WeldFilletOneSideInBothSidesType * ArrowSideIn,
    WeldFilletOneSideInBothSidesType * OtherSideIn,
    XmlBoolean * StaggeredIn);
  ~WeldFilletBothSidesType();
  void printSelf(FILE * outFile);

  WeldFilletOneSideInBothSidesType * getArrowSide();
  void setArrowSide(WeldFilletOneSideInBothSidesType * ArrowSideIn);
  WeldFilletOneSideInBothSidesType * getOtherSide();
  void setOtherSide(WeldFilletOneSideInBothSidesType * OtherSideIn);
  XmlBoolean * getStaggered();
  void setStaggered(XmlBoolean * StaggeredIn);

protected:
  WeldFilletOneSideInBothSidesType * ArrowSide;
  WeldFilletOneSideInBothSidesType * OtherSide;
  XmlBoolean * Staggered;
};

/*********************************************************************/

class WeldFilletCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldFilletCharacteristicDefinitionType();
  WeldFilletCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldFilletCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldFilletCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFilletCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldFilletCharacteristicItemType();
  WeldFilletCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldFilletCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldFilletCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFilletCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldFilletCharacteristicMeasurementType();
  WeldFilletCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceAllEnumType * LocationSignificanceIn,
    WeldFilletChara_1075_Type * WeldFilletChara_1075In);
  WeldFilletCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceAllEnumType * LocationSignificanceIn,
    WeldFilletChara_1075_Type * WeldFilletChara_1075In);
  ~WeldFilletCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceAllEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceAllEnumType * LocationSignificanceIn);
  WeldFilletChara_1075_Type * getWeldFilletChara_1075();
  void setWeldFilletChara_1075(WeldFilletChara_1075_Type * WeldFilletChara_1075In);

protected:
  LocationSignificanceAllEnumType * LocationSignificance;
  WeldFilletChara_1075_Type * WeldFilletChara_1075;
};

/*********************************************************************/

class WeldFilletCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldFilletCharacteristicNominalType();
  WeldFilletCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceAllEnumType * LocationSignificanceIn,
    WeldFilletChara_1076_Type * WeldFilletChara_1076In);
  WeldFilletCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceAllEnumType * LocationSignificanceIn,
    WeldFilletChara_1076_Type * WeldFilletChara_1076In);
  ~WeldFilletCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceAllEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceAllEnumType * LocationSignificanceIn);
  WeldFilletChara_1076_Type * getWeldFilletChara_1076();
  void setWeldFilletChara_1076(WeldFilletChara_1076_Type * WeldFilletChara_1076In);

protected:
  LocationSignificanceAllEnumType * LocationSignificance;
  WeldFilletChara_1076_Type * WeldFilletChara_1076;
};

/*********************************************************************/

class WeldFilletEqualLegLengthType :
  public XmlTypeBase
{
public:
  WeldFilletEqualLegLengthType();
  WeldFilletEqualLegLengthType(
    FractionType * SizeIn,
    LinearValueType * LengthOfEachWeldIn,
    LinearValueType * PitchIn);
  ~WeldFilletEqualLegLengthType();
  void printSelf(FILE * outFile);

  FractionType * getSize();
  void setSize(FractionType * SizeIn);
  LinearValueType * getLengthOfEachWeld();
  void setLengthOfEachWeld(LinearValueType * LengthOfEachWeldIn);
  LinearValueType * getPitch();
  void setPitch(LinearValueType * PitchIn);

protected:
  FractionType * Size;
  LinearValueType * LengthOfEachWeld;
  LinearValueType * Pitch;
};

/*********************************************************************/

class WeldFilletUnequalLegLengthType :
  public XmlTypeBase
{
public:
  WeldFilletUnequalLegLengthType();
  WeldFilletUnequalLegLengthType(
    FractionType * FirstLegLengthIn,
    FractionType * SecondLegLengthIn);
  ~WeldFilletUnequalLegLengthType();
  void printSelf(FILE * outFile);

  FractionType * getFirstLegLength();
  void setFirstLegLength(FractionType * FirstLegLengthIn);
  FractionType * getSecondLegLength();
  void setSecondLegLength(FractionType * SecondLegLengthIn);

protected:
  FractionType * FirstLegLength;
  FractionType * SecondLegLength;
};

/*********************************************************************/

class WeldFinishingDesignatorEnumType :
  public XmlString
{
public:
  WeldFinishingDesignatorEnumType();
  WeldFinishingDesignatorEnumType(
    const char * valIn);
  ~WeldFinishingDesignatorEnumType();
  bool WeldFinishingDesignatorEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class WeldFinishingType :
  public XmlTypeBase
{
public:
  WeldFinishingType();
  WeldFinishingType(
    WeldContourSymbolEnumType * ContourSymbolIn,
    WeldFinishingDesignatorEnumType * FinishingDesignatorIn);
  ~WeldFinishingType();
  void printSelf(FILE * outFile);

  WeldContourSymbolEnumType * getContourSymbol();
  void setContourSymbol(WeldContourSymbolEnumType * ContourSymbolIn);
  WeldFinishingDesignatorEnumType * getFinishingDesignator();
  void setFinishingDesignator(WeldFinishingDesignatorEnumType * FinishingDesignatorIn);

protected:
  WeldContourSymbolEnumType * ContourSymbol;
  WeldFinishingDesignatorEnumType * FinishingDesignator;
};

/*********************************************************************/

class WeldFlareBevelCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldFlareBevelCharacteristicDefinitionType();
  WeldFlareBevelCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldFlareBevelCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldFlareBevelCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFlareBevelCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldFlareBevelCharacteristicItemType();
  WeldFlareBevelCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldFlareBevelCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldFlareBevelCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFlareVCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldFlareVCharacteristicDefinitionType();
  WeldFlareVCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldFlareVCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldFlareVCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFlareVCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldFlareVCharacteristicItemType();
  WeldFlareVCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldFlareVCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldFlareVCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldGrooveBothSidesBaseType :
  public XmlTypeBase
{
public:
  WeldGrooveBothSidesBaseType();
  WeldGrooveBothSidesBaseType(
    WeldGrooveOneSideParametersType * ArrowSideParametersIn,
    WeldGrooveOneSideParametersType * OtherSideParametersIn);
  ~WeldGrooveBothSidesBaseType();
  void printSelf(FILE * outFile);

  WeldGrooveOneSideParametersType * getArrowSideParameters();
  void setArrowSideParameters(WeldGrooveOneSideParametersType * ArrowSideParametersIn);
  WeldGrooveOneSideParametersType * getOtherSideParameters();
  void setOtherSideParameters(WeldGrooveOneSideParametersType * OtherSideParametersIn);

protected:
  WeldGrooveOneSideParametersType * ArrowSideParameters;
  WeldGrooveOneSideParametersType * OtherSideParameters;
};

/*********************************************************************/

class WeldGrooveBothSidesExtendedType :
  public WeldGrooveBothSidesBaseType
{
public:
  WeldGrooveBothSidesExtendedType();
  WeldGrooveBothSidesExtendedType(
    WeldGrooveOneSideParametersType * ArrowSideParametersIn,
    WeldGrooveOneSideParametersType * OtherSideParametersIn,
    XmlBoolean * SpacerIn);
  ~WeldGrooveBothSidesExtendedType();
  void printSelf(FILE * outFile);

  XmlBoolean * getSpacer();
  void setSpacer(XmlBoolean * SpacerIn);

protected:
  XmlBoolean * Spacer;
};

/*********************************************************************/

class WeldGrooveCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldGrooveCharacteristicMeasurementType();
  WeldGrooveCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldGrooveCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldGrooveCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  WeldGrooveChara_1078_Type * getWeldGrooveChara_1078();
  void setWeldGrooveChara_1078(WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);

protected:
  WeldGrooveChara_1078_Type * WeldGrooveChara_1078;
};

/*********************************************************************/

class WeldGrooveCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldGrooveCharacteristicNominalType();
  WeldGrooveCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldGrooveCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldGrooveCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  WeldGrooveChara_1079_Type * getWeldGrooveChara_1079();
  void setWeldGrooveChara_1079(WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);

protected:
  WeldGrooveChara_1079_Type * WeldGrooveChara_1079;
};

/*********************************************************************/

class WeldGrooveOneSideType :
  public XmlTypeBase
{
public:
  WeldGrooveOneSideType();
  WeldGrooveOneSideType(
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldGrooveOneSi_1080_Type * WeldGrooveOneSi_1080In);
  ~WeldGrooveOneSideType();
  void printSelf(FILE * outFile);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldGrooveOneSi_1080_Type * getWeldGrooveOneSi_1080();
  void setWeldGrooveOneSi_1080(WeldGrooveOneSi_1080_Type * WeldGrooveOneSi_1080In);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldGrooveOneSi_1080_Type * WeldGrooveOneSi_1080;
};

/*********************************************************************/

class WeldJCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldJCharacteristicDefinitionType();
  WeldJCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldJCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldJCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldJCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldJCharacteristicItemType();
  WeldJCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldJCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldJCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldJCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldJCharacteristicMeasurementType();
  WeldJCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldJCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldJCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldJCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldJCharacteristicNominalType();
  WeldJCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldJCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldJCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldOneSideParametersBaseType :
  public XmlTypeBase
{
public:
  WeldOneSideParametersBaseType();
  WeldOneSideParametersBaseType(
    WeldFinishingType * FinishingIn);
  ~WeldOneSideParametersBaseType();
  void printSelf(FILE * outFile);

  WeldFinishingType * getFinishing();
  void setFinishing(WeldFinishingType * FinishingIn);

protected:
  WeldFinishingType * Finishing;
};

/*********************************************************************/

class WeldOneSideParametersExtendSizeType :
  public WeldOneSideParametersBaseType
{
public:
  WeldOneSideParametersExtendSizeType();
  WeldOneSideParametersExtendSizeType(
    WeldFinishingType * FinishingIn,
    FractionType * SizeIn);
  ~WeldOneSideParametersExtendSizeType();
  void printSelf(FILE * outFile);

  FractionType * getSize();
  void setSize(FractionType * SizeIn);

protected:
  FractionType * Size;
};

/*********************************************************************/

class WeldOneSideParametersExtendType :
  public WeldOneSideParametersExtendSizeType
{
public:
  WeldOneSideParametersExtendType();
  WeldOneSideParametersExtendType(
    WeldFinishingType * FinishingIn,
    FractionType * SizeIn,
    LinearValueType * LengthIn,
    LinearValueType * PitchIn,
    NaturalType * WeldNumberIn);
  ~WeldOneSideParametersExtendType();
  void printSelf(FILE * outFile);

  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  LinearValueType * getPitch();
  void setPitch(LinearValueType * PitchIn);
  NaturalType * getWeldNumber();
  void setWeldNumber(NaturalType * WeldNumberIn);

protected:
  LinearValueType * Length;
  LinearValueType * Pitch;
  NaturalType * WeldNumber;
};

/*********************************************************************/

class WeldPlugCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldPlugCharacteristicDefinitionType();
  WeldPlugCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldPlugCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldPlugCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldPlugCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldPlugCharacteristicItemType();
  WeldPlugCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldPlugCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldPlugCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldPlugCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldPlugCharacteristicMeasurementType();
  WeldPlugCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  WeldPlugCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  ~WeldPlugCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldPlugOneSideParametersType * getSideParameters();
  void setSideParameters(WeldPlugOneSideParametersType * SideParametersIn);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldPlugOneSideParametersType * SideParameters;
};

/*********************************************************************/

class WeldPlugCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldPlugCharacteristicNominalType();
  WeldPlugCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  WeldPlugCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  ~WeldPlugCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldPlugOneSideParametersType * getSideParameters();
  void setSideParameters(WeldPlugOneSideParametersType * SideParametersIn);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldPlugOneSideParametersType * SideParameters;
};

/*********************************************************************/

class WeldPlugOneSideParametersType :
  public WeldOneSideParametersExtendType
{
public:
  WeldPlugOneSideParametersType();
  WeldPlugOneSideParametersType(
    WeldFinishingType * FinishingIn,
    FractionType * SizeIn,
    LinearValueType * LengthIn,
    LinearValueType * PitchIn,
    NaturalType * WeldNumberIn,
    AngularValueType * AngleIn,
    FractionType * DepthIn);
  ~WeldPlugOneSideParametersType();
  void printSelf(FILE * outFile);

  AngularValueType * getAngle();
  void setAngle(AngularValueType * AngleIn);
  FractionType * getDepth();
  void setDepth(FractionType * DepthIn);

protected:
  AngularValueType * Angle;
  FractionType * Depth;
};

/*********************************************************************/

class WeldScarfCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldScarfCharacteristicDefinitionType();
  WeldScarfCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldScarfCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldScarfCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldScarfCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldScarfCharacteristicItemType();
  WeldScarfCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldScarfCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldScarfCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldScarfCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldScarfCharacteristicMeasurementType();
  WeldScarfCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldScarfCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldScarfCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldScarfCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldScarfCharacteristicNominalType();
  WeldScarfCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldScarfCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldScarfCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSeamCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldSeamCharacteristicDefinitionType();
  WeldSeamCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldSeamCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldSeamCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSeamCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldSeamCharacteristicItemType();
  WeldSeamCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldSeamCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldSeamCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSeamCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldSeamCharacteristicMeasurementType();
  WeldSeamCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendType * SideParametersIn);
  WeldSeamCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendType * SideParametersIn);
  ~WeldSeamCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceSpotSeamEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceSpotSeamEnumType * LocationSignificanceIn);
  WeldOneSideParametersExtendType * getSideParameters();
  void setSideParameters(WeldOneSideParametersExtendType * SideParametersIn);

protected:
  LocationSignificanceSpotSeamEnumType * LocationSignificance;
  WeldOneSideParametersExtendType * SideParameters;
};

/*********************************************************************/

class WeldSeamCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldSeamCharacteristicNominalType();
  WeldSeamCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendType * SideParametersIn);
  WeldSeamCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldOneSideParametersExtendType * SideParametersIn);
  ~WeldSeamCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceSpotSeamEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceSpotSeamEnumType * LocationSignificanceIn);
  WeldOneSideParametersExtendType * getSideParameters();
  void setSideParameters(WeldOneSideParametersExtendType * SideParametersIn);

protected:
  LocationSignificanceSpotSeamEnumType * LocationSignificance;
  WeldOneSideParametersExtendType * SideParameters;
};

/*********************************************************************/

class WeldSlotCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldSlotCharacteristicDefinitionType();
  WeldSlotCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldSlotCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldSlotCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSlotCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldSlotCharacteristicItemType();
  WeldSlotCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldSlotCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldSlotCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSlotCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldSlotCharacteristicMeasurementType();
  WeldSlotCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  WeldSlotCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  ~WeldSlotCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldPlugOneSideParametersType * getSideParameters();
  void setSideParameters(WeldPlugOneSideParametersType * SideParametersIn);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldPlugOneSideParametersType * SideParameters;
};

/*********************************************************************/

class WeldSlotCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldSlotCharacteristicNominalType();
  WeldSlotCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  WeldSlotCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldPlugOneSideParametersType * SideParametersIn);
  ~WeldSlotCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldPlugOneSideParametersType * getSideParameters();
  void setSideParameters(WeldPlugOneSideParametersType * SideParametersIn);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldPlugOneSideParametersType * SideParameters;
};

/*********************************************************************/

class WeldSpotCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldSpotCharacteristicDefinitionType();
  WeldSpotCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldSpotCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldSpotCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSpotCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldSpotCharacteristicItemType();
  WeldSpotCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldSpotCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldSpotCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSpotCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldSpotCharacteristicMeasurementType();
  WeldSpotCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldSpotOneSideParametersType * SideParametersIn,
    XmlBoolean * ProjectionIn);
  WeldSpotCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldSpotOneSideParametersType * SideParametersIn,
    XmlBoolean * ProjectionIn);
  ~WeldSpotCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceSpotSeamEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceSpotSeamEnumType * LocationSignificanceIn);
  WeldSpotOneSideParametersType * getSideParameters();
  void setSideParameters(WeldSpotOneSideParametersType * SideParametersIn);
  XmlBoolean * getProjection();
  void setProjection(XmlBoolean * ProjectionIn);

protected:
  LocationSignificanceSpotSeamEnumType * LocationSignificance;
  WeldSpotOneSideParametersType * SideParameters;
  XmlBoolean * Projection;
};

/*********************************************************************/

class WeldSpotCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldSpotCharacteristicNominalType();
  WeldSpotCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldSpotOneSideParametersType * SideParametersIn,
    XmlBoolean * ProjectionIn);
  WeldSpotCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    LocationSignificanceSpotSeamEnumType * LocationSignificanceIn,
    WeldSpotOneSideParametersType * SideParametersIn,
    XmlBoolean * ProjectionIn);
  ~WeldSpotCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceSpotSeamEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceSpotSeamEnumType * LocationSignificanceIn);
  WeldSpotOneSideParametersType * getSideParameters();
  void setSideParameters(WeldSpotOneSideParametersType * SideParametersIn);
  XmlBoolean * getProjection();
  void setProjection(XmlBoolean * ProjectionIn);

protected:
  LocationSignificanceSpotSeamEnumType * LocationSignificance;
  WeldSpotOneSideParametersType * SideParameters;
  XmlBoolean * Projection;
};

/*********************************************************************/

class WeldSpotOneSideParametersType :
  public WeldOneSideParametersExtendSizeType
{
public:
  WeldSpotOneSideParametersType();
  WeldSpotOneSideParametersType(
    WeldFinishingType * FinishingIn,
    FractionType * SizeIn,
    LinearValueType * PitchIn,
    NaturalType * WeldNumberIn);
  ~WeldSpotOneSideParametersType();
  void printSelf(FILE * outFile);

  LinearValueType * getPitch();
  void setPitch(LinearValueType * PitchIn);
  NaturalType * getWeldNumber();
  void setWeldNumber(NaturalType * WeldNumberIn);

protected:
  LinearValueType * Pitch;
  NaturalType * WeldNumber;
};

/*********************************************************************/

class WeldSquareCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldSquareCharacteristicDefinitionType();
  WeldSquareCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldSquareCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldSquareCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSquareCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldSquareCharacteristicItemType();
  WeldSquareCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldSquareCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldSquareCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSquareCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldSquareCharacteristicMeasurementType();
  WeldSquareCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldSquareCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldSquareCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSquareCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldSquareCharacteristicNominalType();
  WeldSquareCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldSquareCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldSquareCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldStudCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldStudCharacteristicDefinitionType();
  WeldStudCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldStudCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldStudCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldStudCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldStudCharacteristicItemType();
  WeldStudCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldStudCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldStudCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldStudCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldStudCharacteristicMeasurementType();
  WeldStudCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldOneSideParametersExtendType * ArrowSideParametersIn);
  WeldStudCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldOneSideParametersExtendType * ArrowSideParametersIn);
  ~WeldStudCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  WeldOneSideParametersExtendType * getArrowSideParameters();
  void setArrowSideParameters(WeldOneSideParametersExtendType * ArrowSideParametersIn);

protected:
  WeldOneSideParametersExtendType * ArrowSideParameters;
};

/*********************************************************************/

class WeldStudCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldStudCharacteristicNominalType();
  WeldStudCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldOneSideParametersExtendType * ArrowSideParametersIn);
  WeldStudCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldOneSideParametersExtendType * ArrowSideParametersIn);
  ~WeldStudCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  WeldOneSideParametersExtendType * getArrowSideParameters();
  void setArrowSideParameters(WeldOneSideParametersExtendType * ArrowSideParametersIn);

protected:
  WeldOneSideParametersExtendType * ArrowSideParameters;
};

/*********************************************************************/

class WeldSupplementarySymbolEnumType :
  public XmlString
{
public:
  WeldSupplementarySymbolEnumType();
  WeldSupplementarySymbolEnumType(
    const char * valIn);
  ~WeldSupplementarySymbolEnumType();
  bool WeldSupplementarySymbolEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class WeldSurfacingCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldSurfacingCharacteristicDefinitionType();
  WeldSurfacingCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldSurfacingCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldSurfacingCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSurfacingCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldSurfacingCharacteristicItemType();
  WeldSurfacingCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldSurfacingCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldSurfacingCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldSurfacingCharacteristicMeasurementType :
  public WeldCharacteristicMeasurementBaseType
{
public:
  WeldSurfacingCharacteristicMeasurementType();
  WeldSurfacingCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldOneSideParametersExtendSizeType * ArrowSideParametersIn);
  WeldSurfacingCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldOneSideParametersExtendSizeType * ArrowSideParametersIn);
  ~WeldSurfacingCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  WeldOneSideParametersExtendSizeType * getArrowSideParameters();
  void setArrowSideParameters(WeldOneSideParametersExtendSizeType * ArrowSideParametersIn);

protected:
  WeldOneSideParametersExtendSizeType * ArrowSideParameters;
};

/*********************************************************************/

class WeldSurfacingCharacteristicNominalType :
  public WeldCharacteristicNominalBaseType
{
public:
  WeldSurfacingCharacteristicNominalType();
  WeldSurfacingCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldOneSideParametersExtendSizeType * ArrowSideParametersIn);
  WeldSurfacingCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldOneSideParametersExtendSizeType * ArrowSideParametersIn);
  ~WeldSurfacingCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  WeldOneSideParametersExtendSizeType * getArrowSideParameters();
  void setArrowSideParameters(WeldOneSideParametersExtendSizeType * ArrowSideParametersIn);

protected:
  WeldOneSideParametersExtendSizeType * ArrowSideParameters;
};

/*********************************************************************/

class WeldUCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldUCharacteristicDefinitionType();
  WeldUCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldUCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldUCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldUCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldUCharacteristicItemType();
  WeldUCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldUCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldUCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldUCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldUCharacteristicMeasurementType();
  WeldUCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldUCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldUCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldUCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldUCharacteristicNominalType();
  WeldUCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldUCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldUCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldVCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldVCharacteristicDefinitionType();
  WeldVCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldVCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldVCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldVCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldVCharacteristicItemType();
  WeldVCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldVCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldVCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldVCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldVCharacteristicMeasurementType();
  WeldVCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldVCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldVCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldVCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldVCharacteristicNominalType();
  WeldVCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldVCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldVCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldingProcessEnumType :
  public XmlString
{
public:
  WeldingProcessEnumType();
  WeldingProcessEnumType(
    const char * valIn);
  ~WeldingProcessEnumType();
  bool WeldingProcessEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class WeldingProcessSuffixEnumType :
  public XmlString
{
public:
  WeldingProcessSuffixEnumType();
  WeldingProcessSuffixEnumType(
    const char * valIn);
  ~WeldingProcessSuffixEnumType();
  bool WeldingProcessSuffixEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/*********************************************************************/

class WeldingProcessType :
  public XmlTypeBase
{
public:
  WeldingProcessType();
  WeldingProcessType(
    WeldingProcessEnumType * ProcessIn,
    WeldingProcessSuffixEnumType * SuffixIn);
  ~WeldingProcessType();
  void printSelf(FILE * outFile);

  WeldingProcessEnumType * getProcess();
  void setProcess(WeldingProcessEnumType * ProcessIn);
  WeldingProcessSuffixEnumType * getSuffix();
  void setSuffix(WeldingProcessSuffixEnumType * SuffixIn);

protected:
  WeldingProcessEnumType * Process;
  WeldingProcessSuffixEnumType * Suffix;
};

/*********************************************************************/

class WidthCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  WidthCharacteristicDefinitionType();
  WidthCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  WidthCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~WidthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WidthCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  WidthCharacteristicItemType();
  WidthCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WidthCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WidthCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WidthCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  WidthCharacteristicMeasurementType();
  WidthCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  WidthCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~WidthCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WidthCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  WidthCharacteristicNominalType();
  WidthCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  WidthCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~WidthCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngularCharacte_1045_Type :
  public XmlTypeBase
{
public:
  AngularCharacte_1045_Type();
  AngularCharacte_1045_Type(
    AngularCharacte_1045_TypeChoicePair * AngularCharacte_1045_TypePairIn);
  ~AngularCharacte_1045_Type();
  void printSelf(FILE * outFile);

  AngularCharacte_1045_TypeChoicePair * getAngularCharacte_1045_TypePair();
  void setAngularCharacte_1045_TypePair(AngularCharacte_1045_TypeChoicePair * AngularCharacte_1045_TypePairIn);

protected:
  AngularCharacte_1045_TypeChoicePair * AngularCharacte_1045_TypePair;
};

/*********************************************************************/

union AngularCharacte_1045_TypeVal
{
  AngularToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class AngularCharacte_1045_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  AngularCharacte_1045_TypeChoicePair();
  AngularCharacte_1045_TypeChoicePair(
    whichOne AngularCharacte_1045_TypeTypeIn,
    AngularCharacte_1045_TypeVal AngularCharacte_1045_TypeValueIn);
  ~AngularCharacte_1045_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularCharacte_1045_TypeType;
  AngularCharacte_1045_TypeVal AngularCharacte_1045_TypeValue;
};

/*********************************************************************/

class AngularCoordina_1046_Type :
  public XmlTypeBase
{
public:
  AngularCoordina_1046_Type();
  AngularCoordina_1046_Type(
    AngularCoordina_1046_TypeChoicePair * AngularCoordina_1046_TypePairIn);
  ~AngularCoordina_1046_Type();
  void printSelf(FILE * outFile);

  AngularCoordina_1046_TypeChoicePair * getAngularCoordina_1046_TypePair();
  void setAngularCoordina_1046_TypePair(AngularCoordina_1046_TypeChoicePair * AngularCoordina_1046_TypePairIn);

protected:
  AngularCoordina_1046_TypeChoicePair * AngularCoordina_1046_TypePair;
};

/*********************************************************************/

union AngularCoordina_1046_TypeVal
{
  AngularToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class AngularCoordina_1046_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  AngularCoordina_1046_TypeChoicePair();
  AngularCoordina_1046_TypeChoicePair(
    whichOne AngularCoordina_1046_TypeTypeIn,
    AngularCoordina_1046_TypeVal AngularCoordina_1046_TypeValueIn);
  ~AngularCoordina_1046_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularCoordina_1046_TypeType;
  AngularCoordina_1046_TypeVal AngularCoordina_1046_TypeValue;
};

/*********************************************************************/

class AreaCharacteris_1047_Type :
  public XmlTypeBase
{
public:
  AreaCharacteris_1047_Type();
  AreaCharacteris_1047_Type(
    AreaCharacteris_1047_TypeChoicePair * AreaCharacteris_1047_TypePairIn);
  ~AreaCharacteris_1047_Type();
  void printSelf(FILE * outFile);

  AreaCharacteris_1047_TypeChoicePair * getAreaCharacteris_1047_TypePair();
  void setAreaCharacteris_1047_TypePair(AreaCharacteris_1047_TypeChoicePair * AreaCharacteris_1047_TypePairIn);

protected:
  AreaCharacteris_1047_TypeChoicePair * AreaCharacteris_1047_TypePair;
};

/*********************************************************************/

union AreaCharacteris_1047_TypeVal
{
  AreaToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class AreaCharacteris_1047_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  AreaCharacteris_1047_TypeChoicePair();
  AreaCharacteris_1047_TypeChoicePair(
    whichOne AreaCharacteris_1047_TypeTypeIn,
    AreaCharacteris_1047_TypeVal AreaCharacteris_1047_TypeValueIn);
  ~AreaCharacteris_1047_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AreaCharacteris_1047_TypeType;
  AreaCharacteris_1047_TypeVal AreaCharacteris_1047_TypeValue;
};

/*********************************************************************/

class CircularityChar_1048_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1048_Type();
  CircularityChar_1048_Type(
    CircularityChar_1048_TypeChoicePair * CircularityChar_1048_TypePairIn);
  ~CircularityChar_1048_Type();
  void printSelf(FILE * outFile);

  CircularityChar_1048_TypeChoicePair * getCircularityChar_1048_TypePair();
  void setCircularityChar_1048_TypePair(CircularityChar_1048_TypeChoicePair * CircularityChar_1048_TypePairIn);

protected:
  CircularityChar_1048_TypeChoicePair * CircularityChar_1048_TypePair;
};

/*********************************************************************/

union CircularityChar_1048_TypeVal
{
  CircularityChar_1081_Type * CircularityChar_1081;
  CircularityChar_1082_Type * CircularityChar_1082;
};

/*********************************************************************/

class CircularityChar_1048_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CircularityChar_1081E,
    CircularityChar_1082E };
  CircularityChar_1048_TypeChoicePair();
  CircularityChar_1048_TypeChoicePair(
    whichOne CircularityChar_1048_TypeTypeIn,
    CircularityChar_1048_TypeVal CircularityChar_1048_TypeValueIn);
  ~CircularityChar_1048_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularityChar_1048_TypeType;
  CircularityChar_1048_TypeVal CircularityChar_1048_TypeValue;
};

/*********************************************************************/

class CircularityChar_1049_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1049_Type();
  CircularityChar_1049_Type(
    MeasuredZoneRadiiType * ZoneRadiiIn,
    MeasuredPlaneType * ZonePlaneIn);
  ~CircularityChar_1049_Type();
  void printSelf(FILE * outFile);

  MeasuredZoneRadiiType * getZoneRadii();
  void setZoneRadii(MeasuredZoneRadiiType * ZoneRadiiIn);
  MeasuredPlaneType * getZonePlane();
  void setZonePlane(MeasuredPlaneType * ZonePlaneIn);

protected:
  MeasuredZoneRadiiType * ZoneRadii;
  MeasuredPlaneType * ZonePlane;
};

/*********************************************************************/

class CriticalityType_1050_Type :
  public XmlTypeBase
{
public:
  CriticalityType_1050_Type();
  CriticalityType_1050_Type(
    CriticalityType_1050_TypeChoicePair * CriticalityType_1050_TypePairIn);
  ~CriticalityType_1050_Type();
  void printSelf(FILE * outFile);

  CriticalityType_1050_TypeChoicePair * getCriticalityType_1050_TypePair();
  void setCriticalityType_1050_TypePair(CriticalityType_1050_TypeChoicePair * CriticalityType_1050_TypePairIn);

protected:
  CriticalityType_1050_TypeChoicePair * CriticalityType_1050_TypePair;
};

/*********************************************************************/

union CriticalityType_1050_TypeVal
{
  CriticalityLevelEnumType * LevelEnum;
  XmlString * OtherLevel;
};

/*********************************************************************/

class CriticalityType_1050_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LevelEnumE,
    OtherLevelE };
  CriticalityType_1050_TypeChoicePair();
  CriticalityType_1050_TypeChoicePair(
    whichOne CriticalityType_1050_TypeTypeIn,
    CriticalityType_1050_TypeVal CriticalityType_1050_TypeValueIn);
  ~CriticalityType_1050_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CriticalityType_1050_TypeType;
  CriticalityType_1050_TypeVal CriticalityType_1050_TypeValue;
};

/*********************************************************************/

class CriticalityType_1051_Type :
  public XmlTypeBase
{
public:
  CriticalityType_1051_Type();
  CriticalityType_1051_Type(
    CriticalityType_1051_TypeChoicePair * CriticalityType_1051_TypePairIn);
  ~CriticalityType_1051_Type();
  void printSelf(FILE * outFile);

  CriticalityType_1051_TypeChoicePair * getCriticalityType_1051_TypePair();
  void setCriticalityType_1051_TypePair(CriticalityType_1051_TypeChoicePair * CriticalityType_1051_TypePairIn);

protected:
  CriticalityType_1051_TypeChoicePair * CriticalityType_1051_TypePair;
};

/*********************************************************************/

union CriticalityType_1051_TypeVal
{
  CriticalityAreaEnumType * AreaEnum;
  XmlString * OtherArea;
};

/*********************************************************************/

class CriticalityType_1051_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AreaEnumE,
    OtherAreaE };
  CriticalityType_1051_TypeChoicePair();
  CriticalityType_1051_TypeChoicePair(
    whichOne CriticalityType_1051_TypeTypeIn,
    CriticalityType_1051_TypeVal CriticalityType_1051_TypeValueIn);
  ~CriticalityType_1051_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CriticalityType_1051_TypeType;
  CriticalityType_1051_TypeVal CriticalityType_1051_TypeValue;
};

/*********************************************************************/

class CylindricityCha_1052_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1052_Type();
  CylindricityCha_1052_Type(
    CylindricityCha_1052_TypeChoicePair * CylindricityCha_1052_TypePairIn);
  ~CylindricityCha_1052_Type();
  void printSelf(FILE * outFile);

  CylindricityCha_1052_TypeChoicePair * getCylindricityCha_1052_TypePair();
  void setCylindricityCha_1052_TypePair(CylindricityCha_1052_TypeChoicePair * CylindricityCha_1052_TypePairIn);

protected:
  CylindricityCha_1052_TypeChoicePair * CylindricityCha_1052_TypePair;
};

/*********************************************************************/

union CylindricityCha_1052_TypeVal
{
  CylindricityCha_1083_Type * CylindricityCha_1083;
  CylindricityCha_1084_Type * CylindricityCha_1084;
};

/*********************************************************************/

class CylindricityCha_1052_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CylindricityCha_1083E,
    CylindricityCha_1084E };
  CylindricityCha_1052_TypeChoicePair();
  CylindricityCha_1052_TypeChoicePair(
    whichOne CylindricityCha_1052_TypeTypeIn,
    CylindricityCha_1052_TypeVal CylindricityCha_1052_TypeValueIn);
  ~CylindricityCha_1052_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricityCha_1052_TypeType;
  CylindricityCha_1052_TypeVal CylindricityCha_1052_TypeValue;
};

/*********************************************************************/

class CylindricityCha_1053_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1053_Type();
  CylindricityCha_1053_Type(
    MeasuredZoneRadiiType * ZoneRadiiIn,
    MeasuredZoneAxisType * ZoneAxisIn);
  ~CylindricityCha_1053_Type();
  void printSelf(FILE * outFile);

  MeasuredZoneRadiiType * getZoneRadii();
  void setZoneRadii(MeasuredZoneRadiiType * ZoneRadiiIn);
  MeasuredZoneAxisType * getZoneAxis();
  void setZoneAxis(MeasuredZoneAxisType * ZoneAxisIn);

protected:
  MeasuredZoneRadiiType * ZoneRadii;
  MeasuredZoneAxisType * ZoneAxis;
};

/*********************************************************************/

class DiameterCharact_1054_Type :
  public XmlTypeBase
{
public:
  DiameterCharact_1054_Type();
  DiameterCharact_1054_Type(
    DiameterCharact_1054_TypeChoicePair * DiameterCharact_1054_TypePairIn);
  ~DiameterCharact_1054_Type();
  void printSelf(FILE * outFile);

  DiameterCharact_1054_TypeChoicePair * getDiameterCharact_1054_TypePair();
  void setDiameterCharact_1054_TypePair(DiameterCharact_1054_TypeChoicePair * DiameterCharact_1054_TypePairIn);

protected:
  DiameterCharact_1054_TypeChoicePair * DiameterCharact_1054_TypePair;
};

/*********************************************************************/

union DiameterCharact_1054_TypeVal
{
  LinearToleranceType * Tolerance;
  LimitsAndFitsSpecificationType * LimitsAndFitsSpecification;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class DiameterCharact_1054_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    LimitsAndFitsSpecificationE,
    NonToleranceE };
  DiameterCharact_1054_TypeChoicePair();
  DiameterCharact_1054_TypeChoicePair(
    whichOne DiameterCharact_1054_TypeTypeIn,
    DiameterCharact_1054_TypeVal DiameterCharact_1054_TypeValueIn);
  ~DiameterCharact_1054_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DiameterCharact_1054_TypeType;
  DiameterCharact_1054_TypeVal DiameterCharact_1054_TypeValue;
};

/*********************************************************************/

class FlatnessCharact_1055_Type :
  public XmlTypeBase
{
public:
  FlatnessCharact_1055_Type();
  FlatnessCharact_1055_Type(
    FlatnessCharact_1055_TypeChoicePair * FlatnessCharact_1055_TypePairIn);
  ~FlatnessCharact_1055_Type();
  void printSelf(FILE * outFile);

  FlatnessCharact_1055_TypeChoicePair * getFlatnessCharact_1055_TypePair();
  void setFlatnessCharact_1055_TypePair(FlatnessCharact_1055_TypeChoicePair * FlatnessCharact_1055_TypePairIn);

protected:
  FlatnessCharact_1055_TypeChoicePair * FlatnessCharact_1055_TypePair;
};

/*********************************************************************/

union FlatnessCharact_1055_TypeVal
{
  FlatnessCharact_1085_Type * FlatnessCharact_1085;
  FlatnessCharact_1086_Type * FlatnessCharact_1086;
};

/*********************************************************************/

class FlatnessCharact_1055_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    FlatnessCharact_1085E,
    FlatnessCharact_1086E };
  FlatnessCharact_1055_TypeChoicePair();
  FlatnessCharact_1055_TypeChoicePair(
    whichOne FlatnessCharact_1055_TypeTypeIn,
    FlatnessCharact_1055_TypeVal FlatnessCharact_1055_TypeValueIn);
  ~FlatnessCharact_1055_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FlatnessCharact_1055_TypeType;
  FlatnessCharact_1055_TypeVal FlatnessCharact_1055_TypeValue;
};

/*********************************************************************/

class ForceCharacteri_1056_Type :
  public XmlTypeBase
{
public:
  ForceCharacteri_1056_Type();
  ForceCharacteri_1056_Type(
    ForceCharacteri_1056_TypeChoicePair * ForceCharacteri_1056_TypePairIn);
  ~ForceCharacteri_1056_Type();
  void printSelf(FILE * outFile);

  ForceCharacteri_1056_TypeChoicePair * getForceCharacteri_1056_TypePair();
  void setForceCharacteri_1056_TypePair(ForceCharacteri_1056_TypeChoicePair * ForceCharacteri_1056_TypePairIn);

protected:
  ForceCharacteri_1056_TypeChoicePair * ForceCharacteri_1056_TypePair;
};

/*********************************************************************/

union ForceCharacteri_1056_TypeVal
{
  ForceToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class ForceCharacteri_1056_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  ForceCharacteri_1056_TypeChoicePair();
  ForceCharacteri_1056_TypeChoicePair(
    whichOne ForceCharacteri_1056_TypeTypeIn,
    ForceCharacteri_1056_TypeVal ForceCharacteri_1056_TypeValueIn);
  ~ForceCharacteri_1056_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ForceCharacteri_1056_TypeType;
  ForceCharacteri_1056_TypeVal ForceCharacteri_1056_TypeValue;
};

/*********************************************************************/

class GeometricCharac_1057_Type :
  public XmlTypeBase
{
public:
  GeometricCharac_1057_Type();
  GeometricCharac_1057_Type(
    GeometricCharac_1057_TypeChoicePair * GeometricCharac_1057_TypePairIn);
  ~GeometricCharac_1057_Type();
  void printSelf(FILE * outFile);

  GeometricCharac_1057_TypeChoicePair * getGeometricCharac_1057_TypePair();
  void setGeometricCharac_1057_TypePair(GeometricCharac_1057_TypeChoicePair * GeometricCharac_1057_TypePairIn);

protected:
  GeometricCharac_1057_TypeChoicePair * GeometricCharac_1057_TypePair;
};

/*********************************************************************/

union GeometricCharac_1057_TypeVal
{
  AssociatedTolerancedFeatureSpecificationElementEnumType * AssociatedTolerancedFeatureSpecificationElement;
  ReferenceFeatureAssociationSpecificationElementType * ReferenceFeatureAssociationSpecificationElement;
};

/*********************************************************************/

class GeometricCharac_1057_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AssociatedTolerancedFeatureSpecificationElementE,
    ReferenceFeatureAssociationSpecificationElementE };
  GeometricCharac_1057_TypeChoicePair();
  GeometricCharac_1057_TypeChoicePair(
    whichOne GeometricCharac_1057_TypeTypeIn,
    GeometricCharac_1057_TypeVal GeometricCharac_1057_TypeValueIn);
  ~GeometricCharac_1057_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GeometricCharac_1057_TypeType;
  GeometricCharac_1057_TypeVal GeometricCharac_1057_TypeValue;
};

/*********************************************************************/

class LinearCharacter_1058_Type :
  public XmlTypeBase
{
public:
  LinearCharacter_1058_Type();
  LinearCharacter_1058_Type(
    LinearCharacter_1058_TypeChoicePair * LinearCharacter_1058_TypePairIn);
  ~LinearCharacter_1058_Type();
  void printSelf(FILE * outFile);

  LinearCharacter_1058_TypeChoicePair * getLinearCharacter_1058_TypePair();
  void setLinearCharacter_1058_TypePair(LinearCharacter_1058_TypeChoicePair * LinearCharacter_1058_TypePairIn);

protected:
  LinearCharacter_1058_TypeChoicePair * LinearCharacter_1058_TypePair;
};

/*********************************************************************/

union LinearCharacter_1058_TypeVal
{
  LinearToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class LinearCharacter_1058_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  LinearCharacter_1058_TypeChoicePair();
  LinearCharacter_1058_TypeChoicePair(
    whichOne LinearCharacter_1058_TypeTypeIn,
    LinearCharacter_1058_TypeVal LinearCharacter_1058_TypeValueIn);
  ~LinearCharacter_1058_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearCharacter_1058_TypeType;
  LinearCharacter_1058_TypeVal LinearCharacter_1058_TypeValue;
};

/*********************************************************************/

class LinearCoordinat_1059_Type :
  public XmlTypeBase
{
public:
  LinearCoordinat_1059_Type();
  LinearCoordinat_1059_Type(
    LinearCoordinat_1059_TypeChoicePair * LinearCoordinat_1059_TypePairIn);
  ~LinearCoordinat_1059_Type();
  void printSelf(FILE * outFile);

  LinearCoordinat_1059_TypeChoicePair * getLinearCoordinat_1059_TypePair();
  void setLinearCoordinat_1059_TypePair(LinearCoordinat_1059_TypeChoicePair * LinearCoordinat_1059_TypePairIn);

protected:
  LinearCoordinat_1059_TypeChoicePair * LinearCoordinat_1059_TypePair;
};

/*********************************************************************/

union LinearCoordinat_1059_TypeVal
{
  LinearToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class LinearCoordinat_1059_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  LinearCoordinat_1059_TypeChoicePair();
  LinearCoordinat_1059_TypeChoicePair(
    whichOne LinearCoordinat_1059_TypeTypeIn,
    LinearCoordinat_1059_TypeVal LinearCoordinat_1059_TypeValueIn);
  ~LinearCoordinat_1059_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearCoordinat_1059_TypeType;
  LinearCoordinat_1059_TypeVal LinearCoordinat_1059_TypeValue;
};

/*********************************************************************/

class LocationOnDrawi_1060_Type :
  public XmlTypeBase
{
public:
  LocationOnDrawi_1060_Type();
  LocationOnDrawi_1060_Type(
    QIFReferenceFullType * DrawingIdIn,
    XmlString * SheetNumberIn,
    XmlString * DrawingZoneIn);
  ~LocationOnDrawi_1060_Type();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getDrawingId();
  void setDrawingId(QIFReferenceFullType * DrawingIdIn);
  XmlString * getSheetNumber();
  void setSheetNumber(XmlString * SheetNumberIn);
  XmlString * getDrawingZone();
  void setDrawingZone(XmlString * DrawingZoneIn);

protected:
  QIFReferenceFullType * DrawingId;
  XmlString * SheetNumber;
  XmlString * DrawingZone;
};

/*********************************************************************/

class LocationOnDrawi_1061_Type :
  public XmlTypeBase
{
public:
  LocationOnDrawi_1061_Type();
  LocationOnDrawi_1061_Type(
    QIFReferenceFullType * ModelIdIn,
    XmlString * ViewIn);
  ~LocationOnDrawi_1061_Type();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getModelId();
  void setModelId(QIFReferenceFullType * ModelIdIn);
  XmlString * getView();
  void setView(XmlString * ViewIn);

protected:
  QIFReferenceFullType * ModelId;
  XmlString * View;
};

/*********************************************************************/

class LocationOnDrawi_1062_Type :
  public XmlTypeBase
{
public:
  LocationOnDrawi_1062_Type();
  LocationOnDrawi_1062_Type(
    QIFReferenceFullType * ViewIdIn);
  ~LocationOnDrawi_1062_Type();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getViewId();
  void setViewId(QIFReferenceFullType * ViewIdIn);

protected:
  QIFReferenceFullType * ViewId;
};

/*********************************************************************/

class MassCharacteris_1063_Type :
  public XmlTypeBase
{
public:
  MassCharacteris_1063_Type();
  MassCharacteris_1063_Type(
    MassCharacteris_1063_TypeChoicePair * MassCharacteris_1063_TypePairIn);
  ~MassCharacteris_1063_Type();
  void printSelf(FILE * outFile);

  MassCharacteris_1063_TypeChoicePair * getMassCharacteris_1063_TypePair();
  void setMassCharacteris_1063_TypePair(MassCharacteris_1063_TypeChoicePair * MassCharacteris_1063_TypePairIn);

protected:
  MassCharacteris_1063_TypeChoicePair * MassCharacteris_1063_TypePair;
};

/*********************************************************************/

union MassCharacteris_1063_TypeVal
{
  MassToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class MassCharacteris_1063_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  MassCharacteris_1063_TypeChoicePair();
  MassCharacteris_1063_TypeChoicePair(
    whichOne MassCharacteris_1063_TypeTypeIn,
    MassCharacteris_1063_TypeVal MassCharacteris_1063_TypeValueIn);
  ~MassCharacteris_1063_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MassCharacteris_1063_TypeType;
  MassCharacteris_1063_TypeVal MassCharacteris_1063_TypeValue;
};

/*********************************************************************/

class OrientationChar_1064_Type :
  public XmlTypeBase
{
public:
  OrientationChar_1064_Type();
  OrientationChar_1064_Type(
    OrientationChar_1064_TypeChoicePair * OrientationChar_1064_TypePairIn);
  ~OrientationChar_1064_Type();
  void printSelf(FILE * outFile);

  OrientationChar_1064_TypeChoicePair * getOrientationChar_1064_TypePair();
  void setOrientationChar_1064_TypePair(OrientationChar_1064_TypeChoicePair * OrientationChar_1064_TypePairIn);

protected:
  OrientationChar_1064_TypeChoicePair * OrientationChar_1064_TypePair;
};

/*********************************************************************/

union OrientationChar_1064_TypeVal
{
  XmlBoolean * EachRadialElement;
  XmlBoolean * EachElement;
};

/*********************************************************************/

class OrientationChar_1064_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    EachRadialElementE,
    EachElementE };
  OrientationChar_1064_TypeChoicePair();
  OrientationChar_1064_TypeChoicePair(
    whichOne OrientationChar_1064_TypeTypeIn,
    OrientationChar_1064_TypeVal OrientationChar_1064_TypeValueIn);
  ~OrientationChar_1064_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OrientationChar_1064_TypeType;
  OrientationChar_1064_TypeVal OrientationChar_1064_TypeValue;
};

/*********************************************************************/

class OriginReference_1065_Type :
  public XmlTypeBase
{
public:
  OriginReference_1065_Type();
  OriginReference_1065_Type(
    QIFReferenceFullType * FeatureNominalIdIn,
    ReferencedComponentEnumType * ReferencedComponentIn);
  ~OriginReference_1065_Type();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getFeatureNominalId();
  void setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn);
  ReferencedComponentEnumType * getReferencedComponent();
  void setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn);

protected:
  QIFReferenceFullType * FeatureNominalId;
  ReferencedComponentEnumType * ReferencedComponent;
};

/*********************************************************************/

class PressureCharact_1066_Type :
  public XmlTypeBase
{
public:
  PressureCharact_1066_Type();
  PressureCharact_1066_Type(
    PressureCharact_1066_TypeChoicePair * PressureCharact_1066_TypePairIn);
  ~PressureCharact_1066_Type();
  void printSelf(FILE * outFile);

  PressureCharact_1066_TypeChoicePair * getPressureCharact_1066_TypePair();
  void setPressureCharact_1066_TypePair(PressureCharact_1066_TypeChoicePair * PressureCharact_1066_TypePairIn);

protected:
  PressureCharact_1066_TypeChoicePair * PressureCharact_1066_TypePair;
};

/*********************************************************************/

union PressureCharact_1066_TypeVal
{
  PressureToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class PressureCharact_1066_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  PressureCharact_1066_TypeChoicePair();
  PressureCharact_1066_TypeChoicePair(
    whichOne PressureCharact_1066_TypeTypeIn,
    PressureCharact_1066_TypeVal PressureCharact_1066_TypeValueIn);
  ~PressureCharact_1066_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PressureCharact_1066_TypeType;
  PressureCharact_1066_TypeVal PressureCharact_1066_TypeValue;
};

/*********************************************************************/

class ProfileCharacte_1067_Type :
  public XmlTypeBase
{
public:
  ProfileCharacte_1067_Type();
  ProfileCharacte_1067_Type(
    ProfileCharacte_1067_TypeChoicePair * ProfileCharacte_1067_TypePairIn);
  ~ProfileCharacte_1067_Type();
  void printSelf(FILE * outFile);

  ProfileCharacte_1067_TypeChoicePair * getProfileCharacte_1067_TypePair();
  void setProfileCharacte_1067_TypePair(ProfileCharacte_1067_TypeChoicePair * ProfileCharacte_1067_TypePairIn);

protected:
  ProfileCharacte_1067_TypeChoicePair * ProfileCharacte_1067_TypePair;
};

/*********************************************************************/

union ProfileCharacte_1067_TypeVal
{
  LinearValueType * OuterDisposition;
  LinearValueType * UnequallyDisposedZone;
};

/*********************************************************************/

class ProfileCharacte_1067_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OuterDispositionE,
    UnequallyDisposedZoneE };
  ProfileCharacte_1067_TypeChoicePair();
  ProfileCharacte_1067_TypeChoicePair(
    whichOne ProfileCharacte_1067_TypeTypeIn,
    ProfileCharacte_1067_TypeVal ProfileCharacte_1067_TypeValueIn);
  ~ProfileCharacte_1067_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ProfileCharacte_1067_TypeType;
  ProfileCharacte_1067_TypeVal ProfileCharacte_1067_TypeValue;
};

/*********************************************************************/

class SpeedCharacteri_1068_Type :
  public XmlTypeBase
{
public:
  SpeedCharacteri_1068_Type();
  SpeedCharacteri_1068_Type(
    SpeedCharacteri_1068_TypeChoicePair * SpeedCharacteri_1068_TypePairIn);
  ~SpeedCharacteri_1068_Type();
  void printSelf(FILE * outFile);

  SpeedCharacteri_1068_TypeChoicePair * getSpeedCharacteri_1068_TypePair();
  void setSpeedCharacteri_1068_TypePair(SpeedCharacteri_1068_TypeChoicePair * SpeedCharacteri_1068_TypePairIn);

protected:
  SpeedCharacteri_1068_TypeChoicePair * SpeedCharacteri_1068_TypePair;
};

/*********************************************************************/

union SpeedCharacteri_1068_TypeVal
{
  SpeedToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class SpeedCharacteri_1068_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  SpeedCharacteri_1068_TypeChoicePair();
  SpeedCharacteri_1068_TypeChoicePair(
    whichOne SpeedCharacteri_1068_TypeTypeIn,
    SpeedCharacteri_1068_TypeVal SpeedCharacteri_1068_TypeValueIn);
  ~SpeedCharacteri_1068_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SpeedCharacteri_1068_TypeType;
  SpeedCharacteri_1068_TypeVal SpeedCharacteri_1068_TypeValue;
};

/*********************************************************************/

class SphericityChara_1069_Type :
  public XmlTypeBase
{
public:
  SphericityChara_1069_Type();
  SphericityChara_1069_Type(
    MeasuredZoneRadiiType * ZoneRadiiIn,
    MeasuredPointType * ZonePointIn);
  ~SphericityChara_1069_Type();
  void printSelf(FILE * outFile);

  MeasuredZoneRadiiType * getZoneRadii();
  void setZoneRadii(MeasuredZoneRadiiType * ZoneRadiiIn);
  MeasuredPointType * getZonePoint();
  void setZonePoint(MeasuredPointType * ZonePointIn);

protected:
  MeasuredZoneRadiiType * ZoneRadii;
  MeasuredPointType * ZonePoint;
};

/*********************************************************************/

class StraightnessCha_1070_Type :
  public XmlTypeBase
{
public:
  StraightnessCha_1070_Type();
  StraightnessCha_1070_Type(
    StraightnessCha_1070_TypeChoicePair * StraightnessCha_1070_TypePairIn);
  ~StraightnessCha_1070_Type();
  void printSelf(FILE * outFile);

  StraightnessCha_1070_TypeChoicePair * getStraightnessCha_1070_TypePair();
  void setStraightnessCha_1070_TypePair(StraightnessCha_1070_TypeChoicePair * StraightnessCha_1070_TypePairIn);

protected:
  StraightnessCha_1070_TypeChoicePair * StraightnessCha_1070_TypePair;
};

/*********************************************************************/

union StraightnessCha_1070_TypeVal
{
  StraightnessCha_1087_Type * StraightnessCha_1087;
  StraightnessCha_1088_Type * StraightnessCha_1088;
};

/*********************************************************************/

class StraightnessCha_1070_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    StraightnessCha_1087E,
    StraightnessCha_1088E };
  StraightnessCha_1070_TypeChoicePair();
  StraightnessCha_1070_TypeChoicePair(
    whichOne StraightnessCha_1070_TypeTypeIn,
    StraightnessCha_1070_TypeVal StraightnessCha_1070_TypeValueIn);
  ~StraightnessCha_1070_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StraightnessCha_1070_TypeType;
  StraightnessCha_1070_TypeVal StraightnessCha_1070_TypeValue;
};

/*********************************************************************/

class SurfaceProfileN_1071_Type :
  public XmlTypeBase
{
public:
  SurfaceProfileN_1071_Type();
  SurfaceProfileN_1071_Type(
    SurfaceProfileN_1071_TypeChoicePair * SurfaceProfileN_1071_TypePairIn);
  ~SurfaceProfileN_1071_Type();
  void printSelf(FILE * outFile);

  SurfaceProfileN_1071_TypeChoicePair * getSurfaceProfileN_1071_TypePair();
  void setSurfaceProfileN_1071_TypePair(SurfaceProfileN_1071_TypeChoicePair * SurfaceProfileN_1071_TypePairIn);

protected:
  SurfaceProfileN_1071_TypeChoicePair * SurfaceProfileN_1071_TypePair;
};

/*********************************************************************/

union SurfaceProfileN_1071_TypeVal
{
  LinearValueType * ToPointOuterDisposition;
  LinearValueType * ToPointUnequallyDisposedZone;
};

/*********************************************************************/

class SurfaceProfileN_1071_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToPointOuterDispositionE,
    ToPointUnequallyDisposedZoneE };
  SurfaceProfileN_1071_TypeChoicePair();
  SurfaceProfileN_1071_TypeChoicePair(
    whichOne SurfaceProfileN_1071_TypeTypeIn,
    SurfaceProfileN_1071_TypeVal SurfaceProfileN_1071_TypeValueIn);
  ~SurfaceProfileN_1071_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SurfaceProfileN_1071_TypeType;
  SurfaceProfileN_1071_TypeVal SurfaceProfileN_1071_TypeValue;
};

/*********************************************************************/

class TemperatureChar_1072_Type :
  public XmlTypeBase
{
public:
  TemperatureChar_1072_Type();
  TemperatureChar_1072_Type(
    TemperatureChar_1072_TypeChoicePair * TemperatureChar_1072_TypePairIn);
  ~TemperatureChar_1072_Type();
  void printSelf(FILE * outFile);

  TemperatureChar_1072_TypeChoicePair * getTemperatureChar_1072_TypePair();
  void setTemperatureChar_1072_TypePair(TemperatureChar_1072_TypeChoicePair * TemperatureChar_1072_TypePairIn);

protected:
  TemperatureChar_1072_TypeChoicePair * TemperatureChar_1072_TypePair;
};

/*********************************************************************/

union TemperatureChar_1072_TypeVal
{
  TemperatureToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class TemperatureChar_1072_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  TemperatureChar_1072_TypeChoicePair();
  TemperatureChar_1072_TypeChoicePair(
    whichOne TemperatureChar_1072_TypeTypeIn,
    TemperatureChar_1072_TypeVal TemperatureChar_1072_TypeValueIn);
  ~TemperatureChar_1072_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TemperatureChar_1072_TypeType;
  TemperatureChar_1072_TypeVal TemperatureChar_1072_TypeValue;
};

/*********************************************************************/

class TimeCharacteris_1073_Type :
  public XmlTypeBase
{
public:
  TimeCharacteris_1073_Type();
  TimeCharacteris_1073_Type(
    TimeCharacteris_1073_TypeChoicePair * TimeCharacteris_1073_TypePairIn);
  ~TimeCharacteris_1073_Type();
  void printSelf(FILE * outFile);

  TimeCharacteris_1073_TypeChoicePair * getTimeCharacteris_1073_TypePair();
  void setTimeCharacteris_1073_TypePair(TimeCharacteris_1073_TypeChoicePair * TimeCharacteris_1073_TypePairIn);

protected:
  TimeCharacteris_1073_TypeChoicePair * TimeCharacteris_1073_TypePair;
};

/*********************************************************************/

union TimeCharacteris_1073_TypeVal
{
  TimeToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/*********************************************************************/

class TimeCharacteris_1073_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  TimeCharacteris_1073_TypeChoicePair();
  TimeCharacteris_1073_TypeChoicePair(
    whichOne TimeCharacteris_1073_TypeTypeIn,
    TimeCharacteris_1073_TypeVal TimeCharacteris_1073_TypeValueIn);
  ~TimeCharacteris_1073_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TimeCharacteris_1073_TypeType;
  TimeCharacteris_1073_TypeVal TimeCharacteris_1073_TypeValue;
};

/*********************************************************************/

class UserDefinedUnit_1074_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1074_Type();
  UserDefinedUnit_1074_Type(
    UserDefinedUnit_1074_TypeChoicePair * UserDefinedUnit_1074_TypePairIn);
  ~UserDefinedUnit_1074_Type();
  void printSelf(FILE * outFile);

  UserDefinedUnit_1074_TypeChoicePair * getUserDefinedUnit_1074_TypePair();
  void setUserDefinedUnit_1074_TypePair(UserDefinedUnit_1074_TypeChoicePair * UserDefinedUnit_1074_TypePairIn);

protected:
  UserDefinedUnit_1074_TypeChoicePair * UserDefinedUnit_1074_TypePair;
};

/*********************************************************************/

union UserDefinedUnit_1074_TypeVal
{
  UserDefinedUnit_1089_Type * UserDefinedUnit_1089;
  UserDefinedUnitValueType * MinValue;
};

/*********************************************************************/

class UserDefinedUnit_1074_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedUnit_1089E,
    MinValueE };
  UserDefinedUnit_1074_TypeChoicePair();
  UserDefinedUnit_1074_TypeChoicePair(
    whichOne UserDefinedUnit_1074_TypeTypeIn,
    UserDefinedUnit_1074_TypeVal UserDefinedUnit_1074_TypeValueIn);
  ~UserDefinedUnit_1074_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedUnit_1074_TypeType;
  UserDefinedUnit_1074_TypeVal UserDefinedUnit_1074_TypeValue;
};

/*********************************************************************/

class WeldFilletChara_1075_Type :
  public XmlTypeBase
{
public:
  WeldFilletChara_1075_Type();
  WeldFilletChara_1075_Type(
    WeldFilletChara_1075_TypeChoicePair * WeldFilletChara_1075_TypePairIn);
  ~WeldFilletChara_1075_Type();
  void printSelf(FILE * outFile);

  WeldFilletChara_1075_TypeChoicePair * getWeldFilletChara_1075_TypePair();
  void setWeldFilletChara_1075_TypePair(WeldFilletChara_1075_TypeChoicePair * WeldFilletChara_1075_TypePairIn);

protected:
  WeldFilletChara_1075_TypeChoicePair * WeldFilletChara_1075_TypePair;
};

/*********************************************************************/

union WeldFilletChara_1075_TypeVal
{
  WeldFilletBothSidesType * BothSides;
  WeldFilletOneSideType * OneSide;
};

/*********************************************************************/

class WeldFilletChara_1075_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BothSidesE,
    OneSideE };
  WeldFilletChara_1075_TypeChoicePair();
  WeldFilletChara_1075_TypeChoicePair(
    whichOne WeldFilletChara_1075_TypeTypeIn,
    WeldFilletChara_1075_TypeVal WeldFilletChara_1075_TypeValueIn);
  ~WeldFilletChara_1075_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldFilletChara_1075_TypeType;
  WeldFilletChara_1075_TypeVal WeldFilletChara_1075_TypeValue;
};

/*********************************************************************/

class WeldFilletChara_1076_Type :
  public XmlTypeBase
{
public:
  WeldFilletChara_1076_Type();
  WeldFilletChara_1076_Type(
    WeldFilletChara_1076_TypeChoicePair * WeldFilletChara_1076_TypePairIn);
  ~WeldFilletChara_1076_Type();
  void printSelf(FILE * outFile);

  WeldFilletChara_1076_TypeChoicePair * getWeldFilletChara_1076_TypePair();
  void setWeldFilletChara_1076_TypePair(WeldFilletChara_1076_TypeChoicePair * WeldFilletChara_1076_TypePairIn);

protected:
  WeldFilletChara_1076_TypeChoicePair * WeldFilletChara_1076_TypePair;
};

/*********************************************************************/

union WeldFilletChara_1076_TypeVal
{
  WeldFilletBothSidesType * BothSides;
  WeldFilletOneSideType * OneSide;
};

/*********************************************************************/

class WeldFilletChara_1076_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BothSidesE,
    OneSideE };
  WeldFilletChara_1076_TypeChoicePair();
  WeldFilletChara_1076_TypeChoicePair(
    whichOne WeldFilletChara_1076_TypeTypeIn,
    WeldFilletChara_1076_TypeVal WeldFilletChara_1076_TypeValueIn);
  ~WeldFilletChara_1076_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldFilletChara_1076_TypeType;
  WeldFilletChara_1076_TypeVal WeldFilletChara_1076_TypeValue;
};

/*********************************************************************/

class WeldFilletOneSi_1077_Type :
  public XmlTypeBase
{
public:
  WeldFilletOneSi_1077_Type();
  WeldFilletOneSi_1077_Type(
    WeldFilletOneSi_1077_TypeChoicePair * WeldFilletOneSi_1077_TypePairIn);
  ~WeldFilletOneSi_1077_Type();
  void printSelf(FILE * outFile);

  WeldFilletOneSi_1077_TypeChoicePair * getWeldFilletOneSi_1077_TypePair();
  void setWeldFilletOneSi_1077_TypePair(WeldFilletOneSi_1077_TypeChoicePair * WeldFilletOneSi_1077_TypePairIn);

protected:
  WeldFilletOneSi_1077_TypeChoicePair * WeldFilletOneSi_1077_TypePair;
};

/*********************************************************************/

union WeldFilletOneSi_1077_TypeVal
{
  WeldFilletEqualLegLengthType * EqualLegLength;
  WeldFilletUnequalLegLengthType * UnEqualLegLength;
};

/*********************************************************************/

class WeldFilletOneSi_1077_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    EqualLegLengthE,
    UnEqualLegLengthE };
  WeldFilletOneSi_1077_TypeChoicePair();
  WeldFilletOneSi_1077_TypeChoicePair(
    whichOne WeldFilletOneSi_1077_TypeTypeIn,
    WeldFilletOneSi_1077_TypeVal WeldFilletOneSi_1077_TypeValueIn);
  ~WeldFilletOneSi_1077_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldFilletOneSi_1077_TypeType;
  WeldFilletOneSi_1077_TypeVal WeldFilletOneSi_1077_TypeValue;
};

/*********************************************************************/

class WeldGrooveChara_1078_Type :
  public XmlTypeBase
{
public:
  WeldGrooveChara_1078_Type();
  WeldGrooveChara_1078_Type(
    WeldGrooveChara_1078_TypeChoicePair * WeldGrooveChara_1078_TypePairIn);
  ~WeldGrooveChara_1078_Type();
  void printSelf(FILE * outFile);

  WeldGrooveChara_1078_TypeChoicePair * getWeldGrooveChara_1078_TypePair();
  void setWeldGrooveChara_1078_TypePair(WeldGrooveChara_1078_TypeChoicePair * WeldGrooveChara_1078_TypePairIn);

protected:
  WeldGrooveChara_1078_TypeChoicePair * WeldGrooveChara_1078_TypePair;
};

/*********************************************************************/

union WeldGrooveChara_1078_TypeVal
{
  WeldGrooveOneSideType * OneSide;
  WeldGrooveBothSidesExtendedType * BothSides;
};

/*********************************************************************/

class WeldGrooveChara_1078_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OneSideE,
    BothSidesE };
  WeldGrooveChara_1078_TypeChoicePair();
  WeldGrooveChara_1078_TypeChoicePair(
    whichOne WeldGrooveChara_1078_TypeTypeIn,
    WeldGrooveChara_1078_TypeVal WeldGrooveChara_1078_TypeValueIn);
  ~WeldGrooveChara_1078_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldGrooveChara_1078_TypeType;
  WeldGrooveChara_1078_TypeVal WeldGrooveChara_1078_TypeValue;
};

/*********************************************************************/

class WeldGrooveChara_1079_Type :
  public XmlTypeBase
{
public:
  WeldGrooveChara_1079_Type();
  WeldGrooveChara_1079_Type(
    WeldGrooveChara_1079_TypeChoicePair * WeldGrooveChara_1079_TypePairIn);
  ~WeldGrooveChara_1079_Type();
  void printSelf(FILE * outFile);

  WeldGrooveChara_1079_TypeChoicePair * getWeldGrooveChara_1079_TypePair();
  void setWeldGrooveChara_1079_TypePair(WeldGrooveChara_1079_TypeChoicePair * WeldGrooveChara_1079_TypePairIn);

protected:
  WeldGrooveChara_1079_TypeChoicePair * WeldGrooveChara_1079_TypePair;
};

/*********************************************************************/

union WeldGrooveChara_1079_TypeVal
{
  WeldGrooveOneSideType * OneSide;
  WeldGrooveBothSidesExtendedType * BothSides;
};

/*********************************************************************/

class WeldGrooveChara_1079_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OneSideE,
    BothSidesE };
  WeldGrooveChara_1079_TypeChoicePair();
  WeldGrooveChara_1079_TypeChoicePair(
    whichOne WeldGrooveChara_1079_TypeTypeIn,
    WeldGrooveChara_1079_TypeVal WeldGrooveChara_1079_TypeValueIn);
  ~WeldGrooveChara_1079_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldGrooveChara_1079_TypeType;
  WeldGrooveChara_1079_TypeVal WeldGrooveChara_1079_TypeValue;
};

/*********************************************************************/

class WeldGrooveOneSi_1080_Type :
  public XmlTypeBase
{
public:
  WeldGrooveOneSi_1080_Type();
  WeldGrooveOneSi_1080_Type(
    WeldGrooveOneSideParametersType * SideParametersIn,
    WeldSupplementarySymbolEnumType * SupplementarySymbolIn);
  ~WeldGrooveOneSi_1080_Type();
  void printSelf(FILE * outFile);

  WeldGrooveOneSideParametersType * getSideParameters();
  void setSideParameters(WeldGrooveOneSideParametersType * SideParametersIn);
  WeldSupplementarySymbolEnumType * getSupplementarySymbol();
  void setSupplementarySymbol(WeldSupplementarySymbolEnumType * SupplementarySymbolIn);

protected:
  WeldGrooveOneSideParametersType * SideParameters;
  WeldSupplementarySymbolEnumType * SupplementarySymbol;
};

/*********************************************************************/

class CircularityChar_1081_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1081_Type();
  CircularityChar_1081_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CircularityChar_1090_Type * CircularityChar_1090In);
  ~CircularityChar_1081_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  CircularityChar_1090_Type * getCircularityChar_1090();
  void setCircularityChar_1090(CircularityChar_1090_Type * CircularityChar_1090In);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  CircularityChar_1090_Type * CircularityChar_1090;
};

/*********************************************************************/

class CircularityChar_1082_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1082_Type();
  CircularityChar_1082_Type(
    CircularityChar_1082_TypeChoicePair * CircularityChar_1082_TypePairIn);
  ~CircularityChar_1082_Type();
  void printSelf(FILE * outFile);

  CircularityChar_1082_TypeChoicePair * getCircularityChar_1082_TypePair();
  void setCircularityChar_1082_TypePair(CircularityChar_1082_TypeChoicePair * CircularityChar_1082_TypePairIn);

protected:
  CircularityChar_1082_TypeChoicePair * CircularityChar_1082_TypePair;
};

/*********************************************************************/

union CircularityChar_1082_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
};

/*********************************************************************/

class CircularityChar_1082_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE };
  CircularityChar_1082_TypeChoicePair();
  CircularityChar_1082_TypeChoicePair(
    whichOne CircularityChar_1082_TypeTypeIn,
    CircularityChar_1082_TypeVal CircularityChar_1082_TypeValueIn);
  ~CircularityChar_1082_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularityChar_1082_TypeType;
  CircularityChar_1082_TypeVal CircularityChar_1082_TypeValue;
};

/*********************************************************************/

class CylindricityCha_1083_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1083_Type();
  CylindricityCha_1083_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CylindricityCha_1091_Type * CylindricityCha_1091In);
  ~CylindricityCha_1083_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  CylindricityCha_1091_Type * getCylindricityCha_1091();
  void setCylindricityCha_1091(CylindricityCha_1091_Type * CylindricityCha_1091In);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  CylindricityCha_1091_Type * CylindricityCha_1091;
};

/*********************************************************************/

class CylindricityCha_1084_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1084_Type();
  CylindricityCha_1084_Type(
    CylindricityCha_1084_TypeChoicePair * CylindricityCha_1084_TypePairIn);
  ~CylindricityCha_1084_Type();
  void printSelf(FILE * outFile);

  CylindricityCha_1084_TypeChoicePair * getCylindricityCha_1084_TypePair();
  void setCylindricityCha_1084_TypePair(CylindricityCha_1084_TypeChoicePair * CylindricityCha_1084_TypePairIn);

protected:
  CylindricityCha_1084_TypeChoicePair * CylindricityCha_1084_TypePair;
};

/*********************************************************************/

union CylindricityCha_1084_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
  ToleranceZonePerUnitPolarAreaType * ToleranceZonePerUnitPolarArea;
  ToleranceZonePerUnitAreaType * ToleranceZonePerUnitArea;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLength;
};

/*********************************************************************/

class CylindricityCha_1084_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE,
    ToleranceZonePerUnitPolarAreaE,
    ToleranceZonePerUnitAreaE,
    ToleranceZonePerUnitLengthE };
  CylindricityCha_1084_TypeChoicePair();
  CylindricityCha_1084_TypeChoicePair(
    whichOne CylindricityCha_1084_TypeTypeIn,
    CylindricityCha_1084_TypeVal CylindricityCha_1084_TypeValueIn);
  ~CylindricityCha_1084_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricityCha_1084_TypeType;
  CylindricityCha_1084_TypeVal CylindricityCha_1084_TypeValue;
};

/*********************************************************************/

class FlatnessCharact_1085_Type :
  public XmlTypeBase
{
public:
  FlatnessCharact_1085_Type();
  FlatnessCharact_1085_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ToleranceZonePerUnitAreaType * ToleranceZonePerUnitAreaIn);
  ~FlatnessCharact_1085_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  ToleranceZonePerUnitAreaType * getToleranceZonePerUnitArea();
  void setToleranceZonePerUnitArea(ToleranceZonePerUnitAreaType * ToleranceZonePerUnitAreaIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  ToleranceZonePerUnitAreaType * ToleranceZonePerUnitArea;
};

/*********************************************************************/

class FlatnessCharact_1086_Type :
  public XmlTypeBase
{
public:
  FlatnessCharact_1086_Type();
  FlatnessCharact_1086_Type(
    ToleranceZonePerUnitAreaType * ToleranceZonePerUnitAreaIn);
  ~FlatnessCharact_1086_Type();
  void printSelf(FILE * outFile);

  ToleranceZonePerUnitAreaType * getToleranceZonePerUnitArea();
  void setToleranceZonePerUnitArea(ToleranceZonePerUnitAreaType * ToleranceZonePerUnitAreaIn);

protected:
  ToleranceZonePerUnitAreaType * ToleranceZonePerUnitArea;
};

/*********************************************************************/

class StraightnessCha_1087_Type :
  public XmlTypeBase
{
public:
  StraightnessCha_1087_Type();
  StraightnessCha_1087_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLengthIn);
  ~StraightnessCha_1087_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  ToleranceZonePerUnitLengthType * getToleranceZonePerUnitLength();
  void setToleranceZonePerUnitLength(ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLengthIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLength;
};

/*********************************************************************/

class StraightnessCha_1088_Type :
  public XmlTypeBase
{
public:
  StraightnessCha_1088_Type();
  StraightnessCha_1088_Type(
    ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLengthIn);
  ~StraightnessCha_1088_Type();
  void printSelf(FILE * outFile);

  ToleranceZonePerUnitLengthType * getToleranceZonePerUnitLength();
  void setToleranceZonePerUnitLength(ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLengthIn);

protected:
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLength;
};

/*********************************************************************/

class UserDefinedUnit_1089_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1089_Type();
  UserDefinedUnit_1089_Type(
    UserDefinedUnitValueType * MaxValueIn,
    UserDefinedUnitValueType * MinValueIn);
  ~UserDefinedUnit_1089_Type();
  void printSelf(FILE * outFile);

  UserDefinedUnitValueType * getMaxValue();
  void setMaxValue(UserDefinedUnitValueType * MaxValueIn);
  UserDefinedUnitValueType * getMinValue();
  void setMinValue(UserDefinedUnitValueType * MinValueIn);

protected:
  UserDefinedUnitValueType * MaxValue;
  UserDefinedUnitValueType * MinValue;
};

/*********************************************************************/

class CircularityChar_1090_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1090_Type();
  CircularityChar_1090_Type(
    CircularityChar_1090_TypeChoicePair * CircularityChar_1090_TypePairIn);
  ~CircularityChar_1090_Type();
  void printSelf(FILE * outFile);

  CircularityChar_1090_TypeChoicePair * getCircularityChar_1090_TypePair();
  void setCircularityChar_1090_TypePair(CircularityChar_1090_TypeChoicePair * CircularityChar_1090_TypePairIn);

protected:
  CircularityChar_1090_TypeChoicePair * CircularityChar_1090_TypePair;
};

/*********************************************************************/

union CircularityChar_1090_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
};

/*********************************************************************/

class CircularityChar_1090_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE };
  CircularityChar_1090_TypeChoicePair();
  CircularityChar_1090_TypeChoicePair(
    whichOne CircularityChar_1090_TypeTypeIn,
    CircularityChar_1090_TypeVal CircularityChar_1090_TypeValueIn);
  ~CircularityChar_1090_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularityChar_1090_TypeType;
  CircularityChar_1090_TypeVal CircularityChar_1090_TypeValue;
};

/*********************************************************************/

class CylindricityCha_1091_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1091_Type();
  CylindricityCha_1091_Type(
    CylindricityCha_1091_TypeChoicePair * CylindricityCha_1091_TypePairIn);
  ~CylindricityCha_1091_Type();
  void printSelf(FILE * outFile);

  CylindricityCha_1091_TypeChoicePair * getCylindricityCha_1091_TypePair();
  void setCylindricityCha_1091_TypePair(CylindricityCha_1091_TypeChoicePair * CylindricityCha_1091_TypePairIn);

protected:
  CylindricityCha_1091_TypeChoicePair * CylindricityCha_1091_TypePair;
};

/*********************************************************************/

union CylindricityCha_1091_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
  ToleranceZonePerUnitPolarAreaType * ToleranceZonePerUnitPolarArea;
  ToleranceZonePerUnitAreaType * ToleranceZonePerUnitArea;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLength;
};

/*********************************************************************/

class CylindricityCha_1091_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE,
    ToleranceZonePerUnitPolarAreaE,
    ToleranceZonePerUnitAreaE,
    ToleranceZonePerUnitLengthE };
  CylindricityCha_1091_TypeChoicePair();
  CylindricityCha_1091_TypeChoicePair(
    whichOne CylindricityCha_1091_TypeTypeIn,
    CylindricityCha_1091_TypeVal CylindricityCha_1091_TypeValueIn);
  ~CylindricityCha_1091_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricityCha_1091_TypeType;
  CylindricityCha_1091_TypeVal CylindricityCha_1091_TypeValue;
};

/*********************************************************************/

class AngularCharacteristicDefinitionBaseType :
  public DimensionalCharacteristicDefinitionBaseType
{
public:
  AngularCharacteristicDefinitionBaseType();
  AngularCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  AngularCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  ~AngularCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AngularCharacte_1045_Type * getAngularCharacte_1045();
  void setAngularCharacte_1045(AngularCharacte_1045_Type * AngularCharacte_1045In);

protected:
  AngularCharacte_1045_Type * AngularCharacte_1045;
};

/*********************************************************************/

class AngularCharacteristicItemBaseType :
  public DimensionalCharacteristicItemBaseType
{
public:
  AngularCharacteristicItemBaseType();
  AngularCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  AngularCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~AngularCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngularCharacteristicMeasurementBaseType :
  public DimensionalCharacteristicMeasurementBaseType
{
public:
  AngularCharacteristicMeasurementBaseType();
  AngularCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  AngularCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  ~AngularCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAngularValueType * getValue();
  void setValue(MeasuredAngularValueType * ValueIn);
  MeasuredAngularValueType * getMaxValue();
  void setMaxValue(MeasuredAngularValueType * MaxValueIn);
  MeasuredAngularValueType * getMinValue();
  void setMinValue(MeasuredAngularValueType * MinValueIn);

protected:
  MeasuredAngularValueType * Value;
  MeasuredAngularValueType * MaxValue;
  MeasuredAngularValueType * MinValue;
};

/*********************************************************************/

class AngularCharacteristicNominalBaseType :
  public DimensionalCharacteristicNominalBaseType
{
public:
  AngularCharacteristicNominalBaseType();
  AngularCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn);
  AngularCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn);
  ~AngularCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AngularValueType * getTargetValue();
  void setTargetValue(AngularValueType * TargetValueIn);

protected:
  AngularValueType * TargetValue;
};

/*********************************************************************/

class AngularityCharacteristicDefinitionType :
  public OrientationCharacteristicDefinitionBaseType
{
public:
  AngularityCharacteristicDefinitionType();
  AngularityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  AngularityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    OrientationZoneShapeType * ZoneShapeIn,
    XmlBoolean * TangentPlaneIn,
    LinearValueType * MaximumToleranceValueIn,
    LinearValueType * ProjectedToleranceZoneValueIn,
    OrientationChar_1064_Type * OrientationChar_1064In);
  ~AngularityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngularityCharacteristicItemType :
  public OrientationCharacteristicItemBaseType
{
public:
  AngularityCharacteristicItemType();
  AngularityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  AngularityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~AngularityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngularityCharacteristicMeasurementType :
  public OrientationCharacteristicMeasurementBaseType
{
public:
  AngularityCharacteristicMeasurementType();
  AngularityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  AngularityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn,
    MeasuredLinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn,
    QIFReferenceType * DRFTransformActualIdIn);
  ~AngularityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngularityCharacteristicNominalType :
  public OrientationCharacteristicNominalBaseType
{
public:
  AngularityCharacteristicNominalType();
  AngularityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * AngleIn);
  AngularityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * AngleIn);
  ~AngularityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AngularValueType * getAngle();
  void setAngle(AngularValueType * AngleIn);

protected:
  AngularValueType * Angle;
};

/*********************************************************************/

class AreaCharacteristicDefinitionBaseType :
  public CharacteristicDefinitionBaseType
{
public:
  AreaCharacteristicDefinitionBaseType();
  AreaCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    AreaCharacteris_1047_Type * AreaCharacteris_1047In);
  AreaCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    AreaCharacteris_1047_Type * AreaCharacteris_1047In);
  ~AreaCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AreaCharacteris_1047_Type * getAreaCharacteris_1047();
  void setAreaCharacteris_1047(AreaCharacteris_1047_Type * AreaCharacteris_1047In);

protected:
  AreaCharacteris_1047_Type * AreaCharacteris_1047;
};

/*********************************************************************/

class AreaCharacteristicItemBaseType :
  public CharacteristicItemBaseType
{
public:
  AreaCharacteristicItemBaseType();
  AreaCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  AreaCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~AreaCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AreaCharacteristicMeasurementBaseType :
  public CharacteristicMeasurementBaseType
{
public:
  AreaCharacteristicMeasurementBaseType();
  AreaCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAreaValueType * ValueIn,
    MeasuredAreaValueType * MaxValueIn,
    MeasuredAreaValueType * MinValueIn);
  AreaCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAreaValueType * ValueIn,
    MeasuredAreaValueType * MaxValueIn,
    MeasuredAreaValueType * MinValueIn);
  ~AreaCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAreaValueType * getValue();
  void setValue(MeasuredAreaValueType * ValueIn);
  MeasuredAreaValueType * getMaxValue();
  void setMaxValue(MeasuredAreaValueType * MaxValueIn);
  MeasuredAreaValueType * getMinValue();
  void setMinValue(MeasuredAreaValueType * MinValueIn);

protected:
  MeasuredAreaValueType * Value;
  MeasuredAreaValueType * MaxValue;
  MeasuredAreaValueType * MinValue;
};

/*********************************************************************/

class AreaCharacteristicNominalBaseType :
  public CharacteristicNominalBaseType
{
public:
  AreaCharacteristicNominalBaseType();
  AreaCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AreaValueType * TargetValueIn);
  AreaCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AreaValueType * TargetValueIn);
  ~AreaCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AreaValueType * getTargetValue();
  void setTargetValue(AreaValueType * TargetValueIn);

protected:
  AreaValueType * TargetValue;
};

/*********************************************************************/

class ChordCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  ChordCharacteristicDefinitionType();
  ChordCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ChordCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~ChordCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ChordCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  ChordCharacteristicItemType();
  ChordCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ChordCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ChordCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ChordCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  ChordCharacteristicMeasurementType();
  ChordCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ChordCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~ChordCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ChordCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  ChordCharacteristicNominalType();
  ChordCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ChordCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~ChordCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CircularRunoutCharacteristicDefinitionType :
  public RunoutCharacteristicDefinitionBaseType
{
public:
  CircularRunoutCharacteristicDefinitionType();
  CircularRunoutCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  CircularRunoutCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  ~CircularRunoutCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CircularRunoutCharacteristicItemType :
  public RunoutCharacteristicItemBaseType
{
public:
  CircularRunoutCharacteristicItemType();
  CircularRunoutCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CircularRunoutCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CircularRunoutCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CircularRunoutCharacteristicMeasurementType :
  public RunoutCharacteristicMeasurementBaseType
{
public:
  CircularRunoutCharacteristicMeasurementType();
  CircularRunoutCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn);
  CircularRunoutCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    XmlBoolean * DatumsOkIn);
  ~CircularRunoutCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CircularRunoutCharacteristicNominalType :
  public RunoutCharacteristicNominalBaseType
{
public:
  CircularRunoutCharacteristicNominalType();
  CircularRunoutCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    UnitVectorType * ZoneDirectionIn,
    QIFReferenceFullType * ProfileCurveIdIn);
  CircularRunoutCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    UnitVectorType * ZoneDirectionIn,
    QIFReferenceFullType * ProfileCurveIdIn);
  ~CircularRunoutCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UnitVectorType * getZoneDirection();
  void setZoneDirection(UnitVectorType * ZoneDirectionIn);
  QIFReferenceFullType * getProfileCurveId();
  void setProfileCurveId(QIFReferenceFullType * ProfileCurveIdIn);

protected:
  UnitVectorType * ZoneDirection;
  QIFReferenceFullType * ProfileCurveId;
};

/*********************************************************************/

class CoaxialityCharacteristicDefinitionType :
  public LocationCharacteristicDefinitionBaseType
{
public:
  CoaxialityCharacteristicDefinitionType();
  CoaxialityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    CoaxialityZoneShapeType * ZoneShapeIn);
  CoaxialityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    CoaxialityZoneShapeType * ZoneShapeIn);
  ~CoaxialityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CoaxialityZoneShapeType * getZoneShape();
  void setZoneShape(CoaxialityZoneShapeType * ZoneShapeIn);

protected:
  CoaxialityZoneShapeType * ZoneShape;
};

/*********************************************************************/

class CoaxialityCharacteristicItemType :
  public LocationCharacteristicItemBaseType
{
public:
  CoaxialityCharacteristicItemType();
  CoaxialityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CoaxialityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CoaxialityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CoaxialityCharacteristicMeasurementType :
  public LocationCharacteristicMeasurementBaseType
{
public:
  CoaxialityCharacteristicMeasurementType();
  CoaxialityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn);
  CoaxialityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn);
  ~CoaxialityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CoaxialityCharacteristicNominalType :
  public LocationCharacteristicNominalBaseType
{
public:
  CoaxialityCharacteristicNominalType();
  CoaxialityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  CoaxialityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~CoaxialityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConcentricityCharacteristicDefinitionType :
  public LocationCharacteristicDefinitionBaseType
{
public:
  ConcentricityCharacteristicDefinitionType();
  ConcentricityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    ConcentricityZoneShapeType * ZoneShapeIn);
  ConcentricityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    ConcentricityZoneShapeType * ZoneShapeIn);
  ~ConcentricityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ConcentricityZoneShapeType * getZoneShape();
  void setZoneShape(ConcentricityZoneShapeType * ZoneShapeIn);

protected:
  ConcentricityZoneShapeType * ZoneShape;
};

/*********************************************************************/

class ConcentricityCharacteristicItemType :
  public LocationCharacteristicItemBaseType
{
public:
  ConcentricityCharacteristicItemType();
  ConcentricityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ConcentricityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ConcentricityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConcentricityCharacteristicMeasurementType :
  public LocationCharacteristicMeasurementBaseType
{
public:
  ConcentricityCharacteristicMeasurementType();
  ConcentricityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn);
  ConcentricityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    ZoneDataSetType * ZoneDataSetIn,
    XmlBoolean * DatumsOkIn);
  ~ConcentricityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConcentricityCharacteristicNominalType :
  public LocationCharacteristicNominalBaseType
{
public:
  ConcentricityCharacteristicNominalType();
  ConcentricityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ConcentricityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~ConcentricityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConicalTaperCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  ConicalTaperCharacteristicDefinitionType();
  ConicalTaperCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ConicalTaperCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~ConicalTaperCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConicalTaperCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  ConicalTaperCharacteristicItemType();
  ConicalTaperCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ConicalTaperCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ConicalTaperCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConicalTaperCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  ConicalTaperCharacteristicMeasurementType();
  ConicalTaperCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * DistanceIn);
  ConicalTaperCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * DistanceIn);
  ~ConicalTaperCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getDistance();
  void setDistance(MeasuredLinearValueType * DistanceIn);

protected:
  MeasuredLinearValueType * Distance;
};

/*********************************************************************/

class ConicalTaperCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  ConicalTaperCharacteristicNominalType();
  ConicalTaperCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    LinearValueType * DistanceIn);
  ConicalTaperCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    LinearValueType * DistanceIn);
  ~ConicalTaperCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getDistance();
  void setDistance(LinearValueType * DistanceIn);

protected:
  LinearValueType * Distance;
};

/*********************************************************************/

class CoordinateCharacteristicDefinitionBaseType :
  public DimensionalCharacteristicDefinitionBaseType
{
public:
  CoordinateCharacteristicDefinitionBaseType();
  CoordinateCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn);
  CoordinateCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn);
  ~CoordinateCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CoordinateCharacteristicItemBaseType :
  public DimensionalCharacteristicItemBaseType
{
public:
  CoordinateCharacteristicItemBaseType();
  CoordinateCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CoordinateCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CoordinateCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CoordinateCharacteristicMeasurementBaseType :
  public DimensionalCharacteristicMeasurementBaseType
{
public:
  CoordinateCharacteristicMeasurementBaseType();
  CoordinateCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    TypeOfCoordinatesType * TypeOfCoordinatesIn);
  CoordinateCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    TypeOfCoordinatesType * TypeOfCoordinatesIn);
  ~CoordinateCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TypeOfCoordinatesType * getTypeOfCoordinates();
  void setTypeOfCoordinates(TypeOfCoordinatesType * TypeOfCoordinatesIn);

protected:
  TypeOfCoordinatesType * TypeOfCoordinates;
};

/*********************************************************************/

class CoordinateCharacteristicNominalBaseType :
  public DimensionalCharacteristicNominalBaseType
{
public:
  CoordinateCharacteristicNominalBaseType();
  CoordinateCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  CoordinateCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~CoordinateCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CurveLengthCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  CurveLengthCharacteristicDefinitionType();
  CurveLengthCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  CurveLengthCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~CurveLengthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CurveLengthCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  CurveLengthCharacteristicItemType();
  CurveLengthCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CurveLengthCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CurveLengthCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CurveLengthCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  CurveLengthCharacteristicMeasurementType();
  CurveLengthCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  CurveLengthCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~CurveLengthCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CurveLengthCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  CurveLengthCharacteristicNominalType();
  CurveLengthCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  CurveLengthCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~CurveLengthCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DepthCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  DepthCharacteristicDefinitionType();
  DepthCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  DepthCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~DepthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DepthCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  DepthCharacteristicItemType();
  DepthCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  DepthCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~DepthCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DepthCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  DepthCharacteristicMeasurementType();
  DepthCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  DepthCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~DepthCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DepthCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  DepthCharacteristicNominalType();
  DepthCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  DepthCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~DepthCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DiameterCharacteristicDefinitionType :
  public DimensionalCharacteristicDefinitionBaseType
{
public:
  DiameterCharacteristicDefinitionType();
  DiameterCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    DiameterCharact_1054_Type * DiameterCharact_1054In);
  DiameterCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    DiameterCharact_1054_Type * DiameterCharact_1054In);
  ~DiameterCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DiameterCharact_1054_Type * getDiameterCharact_1054();
  void setDiameterCharact_1054(DiameterCharact_1054_Type * DiameterCharact_1054In);

protected:
  DiameterCharact_1054_Type * DiameterCharact_1054;
};

/*********************************************************************/

class DiameterCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  DiameterCharacteristicItemType();
  DiameterCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  DiameterCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~DiameterCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DiameterCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  DiameterCharacteristicMeasurementType();
  DiameterCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  DiameterCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~DiameterCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DiameterCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  DiameterCharacteristicNominalType();
  DiameterCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  DiameterCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~DiameterCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DistanceBetweenCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  DistanceBetweenCharacteristicDefinitionType();
  DistanceBetweenCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  DistanceBetweenCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~DistanceBetweenCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DistanceBetweenCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  DistanceBetweenCharacteristicItemType();
  DistanceBetweenCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  DistanceBetweenCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~DistanceBetweenCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DistanceBetweenCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  DistanceBetweenCharacteristicMeasurementType();
  DistanceBetweenCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn);
  DistanceBetweenCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn);
  ~DistanceBetweenCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredUnitVectorType * getAnalysisVector();
  void setAnalysisVector(MeasuredUnitVectorType * AnalysisVectorIn);

protected:
  MeasuredUnitVectorType * AnalysisVector;
};

/*********************************************************************/

class DistanceBetweenCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  DistanceBetweenCharacteristicNominalType();
  DistanceBetweenCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    ArrayPairReferenceFullType * FeatureNominalPairsIn,
    UnitVectorType * AnalysisVectorIn,
    DistanceBetweenAnalysisModeEnumType * AnalysisModeIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  DistanceBetweenCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    ArrayPairReferenceFullType * FeatureNominalPairsIn,
    UnitVectorType * AnalysisVectorIn,
    DistanceBetweenAnalysisModeEnumType * AnalysisModeIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~DistanceBetweenCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayPairReferenceFullType * getFeatureNominalPairs();
  void setFeatureNominalPairs(ArrayPairReferenceFullType * FeatureNominalPairsIn);
  UnitVectorType * getAnalysisVector();
  void setAnalysisVector(UnitVectorType * AnalysisVectorIn);
  DistanceBetweenAnalysisModeEnumType * getAnalysisMode();
  void setAnalysisMode(DistanceBetweenAnalysisModeEnumType * AnalysisModeIn);
  MeasurementDirectiveType * getMeasurementDirective();
  void setMeasurementDirective(MeasurementDirectiveType * MeasurementDirectiveIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  ArrayPairReferenceFullType * FeatureNominalPairs;
  UnitVectorType * AnalysisVector;
  DistanceBetweenAnalysisModeEnumType * AnalysisMode;
  MeasurementDirectiveType * MeasurementDirective;
  QIFReferenceFullType * CoordinateSystemId;
};

/*********************************************************************/

class DistanceFromCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  DistanceFromCharacteristicDefinitionType();
  DistanceFromCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  DistanceFromCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~DistanceFromCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DistanceFromCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  DistanceFromCharacteristicItemType();
  DistanceFromCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  DistanceFromCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~DistanceFromCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class DistanceFromCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  DistanceFromCharacteristicMeasurementType();
  DistanceFromCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn);
  DistanceFromCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn);
  ~DistanceFromCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredUnitVectorType * getAnalysisVector();
  void setAnalysisVector(MeasuredUnitVectorType * AnalysisVectorIn);

protected:
  MeasuredUnitVectorType * AnalysisVector;
};

/*********************************************************************/

class DistanceFromCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  DistanceFromCharacteristicNominalType();
  DistanceFromCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    OriginReferenceType * OriginReferenceIn,
    UnitVectorType * AnalysisVectorIn,
    DistanceBetweenAnalysisModeEnumType * AnalysisModeIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  DistanceFromCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    OriginReferenceType * OriginReferenceIn,
    UnitVectorType * AnalysisVectorIn,
    DistanceBetweenAnalysisModeEnumType * AnalysisModeIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~DistanceFromCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OriginReferenceType * getOriginReference();
  void setOriginReference(OriginReferenceType * OriginReferenceIn);
  UnitVectorType * getAnalysisVector();
  void setAnalysisVector(UnitVectorType * AnalysisVectorIn);
  DistanceBetweenAnalysisModeEnumType * getAnalysisMode();
  void setAnalysisMode(DistanceBetweenAnalysisModeEnumType * AnalysisModeIn);
  MeasurementDirectiveType * getMeasurementDirective();
  void setMeasurementDirective(MeasurementDirectiveType * MeasurementDirectiveIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  OriginReferenceType * OriginReference;
  UnitVectorType * AnalysisVector;
  DistanceBetweenAnalysisModeEnumType * AnalysisMode;
  MeasurementDirectiveType * MeasurementDirective;
  QIFReferenceFullType * CoordinateSystemId;
};

/*********************************************************************/

class FlatTaperCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  FlatTaperCharacteristicDefinitionType();
  FlatTaperCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  FlatTaperCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~FlatTaperCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class FlatTaperCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  FlatTaperCharacteristicItemType();
  FlatTaperCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  FlatTaperCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~FlatTaperCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class FlatTaperCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  FlatTaperCharacteristicMeasurementType();
  FlatTaperCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * DistanceIn);
  FlatTaperCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * DistanceIn);
  ~FlatTaperCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getDistance();
  void setDistance(MeasuredLinearValueType * DistanceIn);

protected:
  MeasuredLinearValueType * Distance;
};

/*********************************************************************/

class FlatTaperCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  FlatTaperCharacteristicNominalType();
  FlatTaperCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    LinearValueType * DistanceIn);
  FlatTaperCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn,
    LinearValueType * DistanceIn);
  ~FlatTaperCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getDistance();
  void setDistance(LinearValueType * DistanceIn);

protected:
  LinearValueType * Distance;
};

/*********************************************************************/

class FormCharacteristicDefinitionBaseType :
  public GeometricCharacteristicDefinitionBaseType
{
public:
  FormCharacteristicDefinitionBaseType();
  FormCharacteristicDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn);
  FormCharacteristicDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn);
  ~FormCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class FormCharacteristicItemBaseType :
  public GeometricCharacteristicItemBaseType
{
public:
  FormCharacteristicItemBaseType();
  FormCharacteristicItemBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  FormCharacteristicItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~FormCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class FormCharacteristicMeasurementBaseType :
  public GeometricCharacteristicMeasurementBaseType
{
public:
  FormCharacteristicMeasurementBaseType();
  FormCharacteristicMeasurementBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  FormCharacteristicMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~FormCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class FormCharacteristicNominalBaseType :
  public GeometricCharacteristicNominalBaseType
{
public:
  FormCharacteristicNominalBaseType();
  FormCharacteristicNominalBaseType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  FormCharacteristicNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~FormCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class HeightCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  HeightCharacteristicDefinitionType();
  HeightCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  HeightCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~HeightCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class HeightCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  HeightCharacteristicItemType();
  HeightCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  HeightCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~HeightCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class HeightCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  HeightCharacteristicMeasurementType();
  HeightCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  HeightCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~HeightCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class HeightCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  HeightCharacteristicNominalType();
  HeightCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  HeightCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~HeightCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LengthCharacteristicDefinitionType :
  public LinearCharacteristicDefinitionBaseType
{
public:
  LengthCharacteristicDefinitionType();
  LengthCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  LengthCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCharacter_1058_Type * LinearCharacter_1058In);
  ~LengthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LengthCharacteristicItemType :
  public LinearCharacteristicItemBaseType
{
public:
  LengthCharacteristicItemType();
  LengthCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  LengthCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~LengthCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LengthCharacteristicMeasurementType :
  public LinearCharacteristicMeasurementBaseType
{
public:
  LengthCharacteristicMeasurementType();
  LengthCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  LengthCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~LengthCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LengthCharacteristicNominalType :
  public LinearCharacteristicNominalBaseType
{
public:
  LengthCharacteristicNominalType();
  LengthCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  LengthCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearDualValueType * TargetDualValueIn);
  ~LengthCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LineProfileCharacteristicDefinitionType :
  public ProfileCharacteristicDefinitionBaseType
{
public:
  LineProfileCharacteristicDefinitionType();
  LineProfileCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    ExtentType * ExtentIn);
  LineProfileCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    ExtentType * ExtentIn);
  ~LineProfileCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExtentType * getExtent();
  void setExtent(ExtentType * ExtentIn);

protected:
  ExtentType * Extent;
};

/*********************************************************************/

class LineProfileCharacteristicItemType :
  public ProfileCharacteristicItemBaseType
{
public:
  LineProfileCharacteristicItemType();
  LineProfileCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  LineProfileCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~LineProfileCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LineProfileCharacteristicMeasurementType :
  public ProfileCharacteristicMeasurementBaseType
{
public:
  LineProfileCharacteristicMeasurementType();
  LineProfileCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  LineProfileCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  ~LineProfileCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LineProfileCharacteristicNominalType :
  public ProfileCharacteristicNominalBaseType
{
public:
  LineProfileCharacteristicNominalType();
  LineProfileCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    UnitVectorType * VectorIn,
    QIFReferenceFullType * ProfileCurveIdIn);
  LineProfileCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    UnitVectorType * VectorIn,
    QIFReferenceFullType * ProfileCurveIdIn);
  ~LineProfileCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UnitVectorType * getVector();
  void setVector(UnitVectorType * VectorIn);
  QIFReferenceFullType * getProfileCurveId();
  void setProfileCurveId(QIFReferenceFullType * ProfileCurveIdIn);

protected:
  UnitVectorType * Vector;
  QIFReferenceFullType * ProfileCurveId;
};

/*********************************************************************/

class LinearCoordinateCharacteristicDefinitionType :
  public CoordinateCharacteristicDefinitionBaseType
{
public:
  LinearCoordinateCharacteristicDefinitionType();
  LinearCoordinateCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCoordinat_1059_Type * LinearCoordinat_1059In);
  LinearCoordinateCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    LinearCoordinat_1059_Type * LinearCoordinat_1059In);
  ~LinearCoordinateCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearCoordinat_1059_Type * getLinearCoordinat_1059();
  void setLinearCoordinat_1059(LinearCoordinat_1059_Type * LinearCoordinat_1059In);

protected:
  LinearCoordinat_1059_Type * LinearCoordinat_1059;
};

/*********************************************************************/

class LinearCoordinateCharacteristicItemType :
  public CoordinateCharacteristicItemBaseType
{
public:
  LinearCoordinateCharacteristicItemType();
  LinearCoordinateCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  LinearCoordinateCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~LinearCoordinateCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class LinearCoordinateCharacteristicMeasurementType :
  public CoordinateCharacteristicMeasurementBaseType
{
public:
  LinearCoordinateCharacteristicMeasurementType();
  LinearCoordinateCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    TypeOfCoordinatesType * TypeOfCoordinatesIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  LinearCoordinateCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    TypeOfCoordinatesType * TypeOfCoordinatesIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~LinearCoordinateCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getValue();
  void setValue(MeasuredLinearValueType * ValueIn);
  MeasuredLinearValueType * getMaxValue();
  void setMaxValue(MeasuredLinearValueType * MaxValueIn);
  MeasuredLinearValueType * getMinValue();
  void setMinValue(MeasuredLinearValueType * MinValueIn);

protected:
  MeasuredLinearValueType * Value;
  MeasuredLinearValueType * MaxValue;
  MeasuredLinearValueType * MinValue;
};

/*********************************************************************/

class LinearCoordinateCharacteristicNominalType :
  public CoordinateCharacteristicNominalBaseType
{
public:
  LinearCoordinateCharacteristicNominalType();
  LinearCoordinateCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearCoordinateDirectionEnumType * DirectionIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  LinearCoordinateCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn,
    LinearCoordinateDirectionEnumType * DirectionIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~LinearCoordinateCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getTargetValue();
  void setTargetValue(LinearValueType * TargetValueIn);
  LinearCoordinateDirectionEnumType * getDirection();
  void setDirection(LinearCoordinateDirectionEnumType * DirectionIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  LinearValueType * TargetValue;
  LinearCoordinateDirectionEnumType * Direction;
  QIFReferenceFullType * CoordinateSystemId;
};

/*********************************************************************/

class OtherFormCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  OtherFormCharacteristicDefinitionType();
  OtherFormCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  OtherFormCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  ~OtherFormCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
};

/*********************************************************************/

class OtherFormCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  OtherFormCharacteristicItemType();
  OtherFormCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  OtherFormCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~OtherFormCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class OtherFormCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  OtherFormCharacteristicMeasurementType();
  OtherFormCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  OtherFormCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~OtherFormCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class OtherFormCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  OtherFormCharacteristicNominalType();
  OtherFormCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  OtherFormCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~OtherFormCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PointProfileCharacteristicDefinitionType :
  public ProfileCharacteristicDefinitionBaseType
{
public:
  PointProfileCharacteristicDefinitionType();
  PointProfileCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn);
  PointProfileCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1067_Type * ProfileCharacte_1067In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn);
  ~PointProfileCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PointProfileCharacteristicItemType :
  public ProfileCharacteristicItemBaseType
{
public:
  PointProfileCharacteristicItemType();
  PointProfileCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PointProfileCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PointProfileCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PointProfileCharacteristicMeasurementType :
  public ProfileCharacteristicMeasurementBaseType
{
public:
  PointProfileCharacteristicMeasurementType();
  PointProfileCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  PointProfileCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    LinearValueType * WorstPositiveDeviationIn,
    LinearValueType * WorstNegativeDeviationIn,
    PointDeviationsType * PointDeviationsIn,
    XmlBoolean * DatumsOkIn,
    QIFReferenceType * DRFTransformActualIdIn,
    CompositeSegmentProfileMeasurementType * SecondCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * ThirdCompositeSegmentProfileMeasurementIn,
    CompositeSegmentProfileMeasurementType * FourthCompositeSegmentProfileMeasurementIn);
  ~PointProfileCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class PointProfileCharacteristicNominalType :
  public ProfileCharacteristicNominalBaseType
{
public:
  PointProfileCharacteristicNominalType();
  PointProfileCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  PointProfileCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    LinearValueType * TargetValueIn);
  ~PointProfileCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericityCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  SphericityCharacteristicDefinitionType();
  SphericityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  SphericityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  ~SphericityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
};

/*********************************************************************/

class SphericityCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  SphericityCharacteristicItemType();
  SphericityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SphericityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SphericityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class SphericityCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  SphericityCharacteristicMeasurementType();
  SphericityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    SphericityChara_1069_Type * SphericityChara_1069In);
  SphericityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    SphericityChara_1069_Type * SphericityChara_1069In);
  ~SphericityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SphericityChara_1069_Type * getSphericityChara_1069();
  void setSphericityChara_1069(SphericityChara_1069_Type * SphericityChara_1069In);

protected:
  SphericityChara_1069_Type * SphericityChara_1069;
};

/*********************************************************************/

class SphericityCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  SphericityCharacteristicNominalType();
  SphericityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  SphericityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~SphericityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class StraightnessCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  StraightnessCharacteristicDefinitionType();
  StraightnessCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    StraightnessCha_1070_Type * StraightnessCha_1070In,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    StraightnessZoneShapeType * ZoneShapeIn,
    LinearValueType * MaximumToleranceValueIn);
  StraightnessCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    StraightnessCha_1070_Type * StraightnessCha_1070In,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    StraightnessZoneShapeType * ZoneShapeIn,
    LinearValueType * MaximumToleranceValueIn);
  ~StraightnessCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  StraightnessCha_1070_Type * getStraightnessCha_1070();
  void setStraightnessCha_1070(StraightnessCha_1070_Type * StraightnessCha_1070In);
  MaterialModifierEnumType * getMaterialCondition();
  void setMaterialCondition(MaterialModifierEnumType * MaterialConditionIn);
  QIFReferenceType * getSizeCharacteristicDefinitionId();
  void setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn);
  StraightnessZoneShapeType * getZoneShape();
  void setZoneShape(StraightnessZoneShapeType * ZoneShapeIn);
  LinearValueType * getMaximumToleranceValue();
  void setMaximumToleranceValue(LinearValueType * MaximumToleranceValueIn);

protected:
  StraightnessCha_1070_Type * StraightnessCha_1070;
  MaterialModifierEnumType * MaterialCondition;
  QIFReferenceType * SizeCharacteristicDefinitionId;
  StraightnessZoneShapeType * ZoneShape;
  LinearValueType * MaximumToleranceValue;
};

/*********************************************************************/

class StraightnessCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  StraightnessCharacteristicItemType();
  StraightnessCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  StraightnessCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~StraightnessCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class StraightnessCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  StraightnessCharacteristicMeasurementType();
  StraightnessCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * BonusIn,
    MeasuredLinearValueType * MaxStraightnessIn,
    MeasuredUnitVectorType * ZoneOrientationIn,
    MeasuredZoneAxisType * ZoneLineIn);
  StraightnessCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * BonusIn,
    MeasuredLinearValueType * MaxStraightnessIn,
    MeasuredUnitVectorType * ZoneOrientationIn,
    MeasuredZoneAxisType * ZoneLineIn);
  ~StraightnessCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getBonus();
  void setBonus(MeasuredLinearValueType * BonusIn);
  MeasuredLinearValueType * getMaxStraightness();
  void setMaxStraightness(MeasuredLinearValueType * MaxStraightnessIn);
  MeasuredUnitVectorType * getZoneOrientation();
  void setZoneOrientation(MeasuredUnitVectorType * ZoneOrientationIn);
  MeasuredZoneAxisType * getZoneLine();
  void setZoneLine(MeasuredZoneAxisType * ZoneLineIn);

protected:
  MeasuredLinearValueType * Bonus;
  MeasuredLinearValueType * MaxStraightness;
  MeasuredUnitVectorType * ZoneOrientation;
  MeasuredZoneAxisType * ZoneLine;
};

/*********************************************************************/

class StraightnessCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  StraightnessCharacteristicNominalType();
  StraightnessCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    QIFReferenceFullType * DirectionCurveIdIn);
  StraightnessCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    QIFReferenceFullType * DirectionCurveIdIn);
  ~StraightnessCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceFullType * getDirectionCurveId();
  void setDirectionCurveId(QIFReferenceFullType * DirectionCurveIdIn);

protected:
  QIFReferenceFullType * DirectionCurveId;
};

/*********************************************************************/

class ToroidicityCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  ToroidicityCharacteristicDefinitionType();
  ToroidicityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  ToroidicityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  ~ToroidicityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
};

/*********************************************************************/

class ToroidicityCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  ToroidicityCharacteristicItemType();
  ToroidicityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ToroidicityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ToroidicityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ToroidicityCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  ToroidicityCharacteristicMeasurementType();
  ToroidicityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ToroidicityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~ToroidicityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ToroidicityCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  ToroidicityCharacteristicNominalType();
  ToroidicityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ToroidicityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~ToroidicityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAngularCharacteristicDefinitionType :
  public AngularCharacteristicDefinitionBaseType
{
public:
  UserDefinedAngularCharacteristicDefinitionType();
  UserDefinedAngularCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In,
    XmlString * WhatToMeasureIn);
  UserDefinedAngularCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedAngularCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedAngularCharacteristicItemType :
  public AngularCharacteristicItemBaseType
{
public:
  UserDefinedAngularCharacteristicItemType();
  UserDefinedAngularCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedAngularCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedAngularCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAngularCharacteristicMeasurementType :
  public AngularCharacteristicMeasurementBaseType
{
public:
  UserDefinedAngularCharacteristicMeasurementType();
  UserDefinedAngularCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  UserDefinedAngularCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  ~UserDefinedAngularCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAngularCharacteristicNominalType :
  public AngularCharacteristicNominalBaseType
{
public:
  UserDefinedAngularCharacteristicNominalType();
  UserDefinedAngularCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn);
  UserDefinedAngularCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn);
  ~UserDefinedAngularCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAreaCharacteristicDefinitionType :
  public AreaCharacteristicDefinitionBaseType
{
public:
  UserDefinedAreaCharacteristicDefinitionType();
  UserDefinedAreaCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    AreaCharacteris_1047_Type * AreaCharacteris_1047In,
    XmlString * WhatToMeasureIn);
  UserDefinedAreaCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    AreaCharacteris_1047_Type * AreaCharacteris_1047In,
    XmlString * WhatToMeasureIn);
  ~UserDefinedAreaCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/*********************************************************************/

class UserDefinedAreaCharacteristicItemType :
  public AreaCharacteristicItemBaseType
{
public:
  UserDefinedAreaCharacteristicItemType();
  UserDefinedAreaCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  UserDefinedAreaCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~UserDefinedAreaCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAreaCharacteristicMeasurementType :
  public AreaCharacteristicMeasurementBaseType
{
public:
  UserDefinedAreaCharacteristicMeasurementType();
  UserDefinedAreaCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAreaValueType * ValueIn,
    MeasuredAreaValueType * MaxValueIn,
    MeasuredAreaValueType * MinValueIn);
  UserDefinedAreaCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAreaValueType * ValueIn,
    MeasuredAreaValueType * MaxValueIn,
    MeasuredAreaValueType * MinValueIn);
  ~UserDefinedAreaCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class UserDefinedAreaCharacteristicNominalType :
  public AreaCharacteristicNominalBaseType
{
public:
  UserDefinedAreaCharacteristicNominalType();
  UserDefinedAreaCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AreaValueType * TargetValueIn);
  UserDefinedAreaCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AreaValueType * TargetValueIn);
  ~UserDefinedAreaCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldBevelCharacteristicDefinitionType :
  public WeldCharacteristicDefinitionBaseType
{
public:
  WeldBevelCharacteristicDefinitionType();
  WeldBevelCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  WeldBevelCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn);
  ~WeldBevelCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldBevelCharacteristicItemType :
  public WeldCharacteristicItemBaseType
{
public:
  WeldBevelCharacteristicItemType();
  WeldBevelCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  WeldBevelCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~WeldBevelCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldBevelCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldBevelCharacteristicMeasurementType();
  WeldBevelCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldBevelCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldBevelCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldBevelCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldBevelCharacteristicNominalType();
  WeldBevelCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldBevelCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldBevelCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFilletOneSideInBothSidesType :
  public WeldOneSideParametersExtendSizeType
{
public:
  WeldFilletOneSideInBothSidesType();
  WeldFilletOneSideInBothSidesType(
    WeldFinishingType * FinishingIn,
    FractionType * SizeIn,
    LinearValueType * LengthOfEachWeldIn,
    LinearValueType * PitchIn);
  ~WeldFilletOneSideInBothSidesType();
  void printSelf(FILE * outFile);

  LinearValueType * getLengthOfEachWeld();
  void setLengthOfEachWeld(LinearValueType * LengthOfEachWeldIn);
  LinearValueType * getPitch();
  void setPitch(LinearValueType * PitchIn);

protected:
  LinearValueType * LengthOfEachWeld;
  LinearValueType * Pitch;
};

/*********************************************************************/

class WeldFilletOneSideType :
  public WeldOneSideParametersBaseType
{
public:
  WeldFilletOneSideType();
  WeldFilletOneSideType(
    WeldFinishingType * FinishingIn,
    WeldFilletOneSi_1077_Type * WeldFilletOneSi_1077In);
  ~WeldFilletOneSideType();
  void printSelf(FILE * outFile);

  WeldFilletOneSi_1077_Type * getWeldFilletOneSi_1077();
  void setWeldFilletOneSi_1077(WeldFilletOneSi_1077_Type * WeldFilletOneSi_1077In);

protected:
  WeldFilletOneSi_1077_Type * WeldFilletOneSi_1077;
};

/*********************************************************************/

class WeldFlareBevelCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldFlareBevelCharacteristicMeasurementType();
  WeldFlareBevelCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldFlareBevelCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldFlareBevelCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFlareBevelCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldFlareBevelCharacteristicNominalType();
  WeldFlareBevelCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldFlareBevelCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldFlareBevelCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFlareVCharacteristicMeasurementType :
  public WeldGrooveCharacteristicMeasurementType
{
public:
  WeldFlareVCharacteristicMeasurementType();
  WeldFlareVCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  WeldFlareVCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    WeldGrooveChara_1078_Type * WeldGrooveChara_1078In);
  ~WeldFlareVCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldFlareVCharacteristicNominalType :
  public WeldGrooveCharacteristicNominalType
{
public:
  WeldFlareVCharacteristicNominalType();
  WeldFlareVCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  WeldFlareVCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * AllAroundIn,
    XmlBoolean * FieldIn,
    XmlToken * SpecificationIn,
    WeldingProcessType * WeldingProcessIn,
    ArrayNonDestructiveTestingType * NonDestructiveTestingIn,
    WeldGrooveChara_1079_Type * WeldGrooveChara_1079In);
  ~WeldFlareVCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class WeldGrooveOneSideParametersType :
  public WeldOneSideParametersExtendSizeType
{
public:
  WeldGrooveOneSideParametersType();
  WeldGrooveOneSideParametersType(
    WeldFinishingType * FinishingIn,
    FractionType * SizeIn,
    FractionType * GrooveIn,
    AngularValueType * AngleIn,
    FractionType * RootOpeningIn,
    LinearValueType * LengthIn,
    LinearValueType * PitchIn);
  ~WeldGrooveOneSideParametersType();
  void printSelf(FILE * outFile);

  FractionType * getGroove();
  void setGroove(FractionType * GrooveIn);
  AngularValueType * getAngle();
  void setAngle(AngularValueType * AngleIn);
  FractionType * getRootOpening();
  void setRootOpening(FractionType * RootOpeningIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  LinearValueType * getPitch();
  void setPitch(LinearValueType * PitchIn);

protected:
  FractionType * Groove;
  AngularValueType * Angle;
  FractionType * RootOpening;
  LinearValueType * Length;
  LinearValueType * Pitch;
};

/*********************************************************************/

class AngleBetweenCharacteristicDefinitionType :
  public AngularCharacteristicDefinitionBaseType
{
public:
  AngleBetweenCharacteristicDefinitionType();
  AngleBetweenCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  AngleBetweenCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  ~AngleBetweenCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleBetweenCharacteristicItemType :
  public AngularCharacteristicItemBaseType
{
public:
  AngleBetweenCharacteristicItemType();
  AngleBetweenCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  AngleBetweenCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~AngleBetweenCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleBetweenCharacteristicMeasurementType :
  public AngularCharacteristicMeasurementBaseType
{
public:
  AngleBetweenCharacteristicMeasurementType();
  AngleBetweenCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn,
    MeasuredPointType * VertexIn);
  AngleBetweenCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn,
    MeasuredPointType * VertexIn);
  ~AngleBetweenCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredUnitVectorType * getAnalysisVector();
  void setAnalysisVector(MeasuredUnitVectorType * AnalysisVectorIn);
  MeasuredPointType * getVertex();
  void setVertex(MeasuredPointType * VertexIn);

protected:
  MeasuredUnitVectorType * AnalysisVector;
  MeasuredPointType * Vertex;
};

/*********************************************************************/

class AngleBetweenCharacteristicNominalType :
  public AngularCharacteristicNominalBaseType
{
public:
  AngleBetweenCharacteristicNominalType();
  AngleBetweenCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn,
    ArrayPairReferenceFullType * FeatureNominalPairsIn,
    UnitVectorType * AnalysisVectorIn,
    AngleBetweenAnalysisModeEnumType * AnalysisModeIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    PointType * VertexIn);
  AngleBetweenCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn,
    ArrayPairReferenceFullType * FeatureNominalPairsIn,
    UnitVectorType * AnalysisVectorIn,
    AngleBetweenAnalysisModeEnumType * AnalysisModeIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    PointType * VertexIn);
  ~AngleBetweenCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayPairReferenceFullType * getFeatureNominalPairs();
  void setFeatureNominalPairs(ArrayPairReferenceFullType * FeatureNominalPairsIn);
  UnitVectorType * getAnalysisVector();
  void setAnalysisVector(UnitVectorType * AnalysisVectorIn);
  AngleBetweenAnalysisModeEnumType * getAnalysisMode();
  void setAnalysisMode(AngleBetweenAnalysisModeEnumType * AnalysisModeIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);
  MeasurementDirectiveType * getMeasurementDirective();
  void setMeasurementDirective(MeasurementDirectiveType * MeasurementDirectiveIn);
  PointType * getVertex();
  void setVertex(PointType * VertexIn);

protected:
  ArrayPairReferenceFullType * FeatureNominalPairs;
  UnitVectorType * AnalysisVector;
  AngleBetweenAnalysisModeEnumType * AnalysisMode;
  QIFReferenceFullType * CoordinateSystemId;
  MeasurementDirectiveType * MeasurementDirective;
  PointType * Vertex;
};

/*********************************************************************/

class AngleCharacteristicDefinitionType :
  public AngularCharacteristicDefinitionBaseType
{
public:
  AngleCharacteristicDefinitionType();
  AngleCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  AngleCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  ~AngleCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleCharacteristicItemType :
  public AngularCharacteristicItemBaseType
{
public:
  AngleCharacteristicItemType();
  AngleCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  AngleCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~AngleCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleCharacteristicMeasurementType :
  public AngularCharacteristicMeasurementBaseType
{
public:
  AngleCharacteristicMeasurementType();
  AngleCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  AngleCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  ~AngleCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleCharacteristicNominalType :
  public AngularCharacteristicNominalBaseType
{
public:
  AngleCharacteristicNominalType();
  AngleCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn);
  AngleCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn);
  ~AngleCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleFromCharacteristicDefinitionType :
  public AngularCharacteristicDefinitionBaseType
{
public:
  AngleFromCharacteristicDefinitionType();
  AngleFromCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  AngleFromCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCharacte_1045_Type * AngularCharacte_1045In);
  ~AngleFromCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleFromCharacteristicItemType :
  public AngularCharacteristicItemBaseType
{
public:
  AngleFromCharacteristicItemType();
  AngleFromCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  AngleFromCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~AngleFromCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngleFromCharacteristicMeasurementType :
  public AngularCharacteristicMeasurementBaseType
{
public:
  AngleFromCharacteristicMeasurementType();
  AngleFromCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn,
    MeasuredPointType * VertexIn);
  AngleFromCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn,
    MeasuredUnitVectorType * AnalysisVectorIn,
    MeasuredPointType * VertexIn);
  ~AngleFromCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredUnitVectorType * getAnalysisVector();
  void setAnalysisVector(MeasuredUnitVectorType * AnalysisVectorIn);
  MeasuredPointType * getVertex();
  void setVertex(MeasuredPointType * VertexIn);

protected:
  MeasuredUnitVectorType * AnalysisVector;
  MeasuredPointType * Vertex;
};

/*********************************************************************/

class AngleFromCharacteristicNominalType :
  public AngularCharacteristicNominalBaseType
{
public:
  AngleFromCharacteristicNominalType();
  AngleFromCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn,
    OriginReferenceType * OriginReferenceIn,
    UnitVectorType * AnalysisVectorIn,
    AngleBetweenAnalysisModeEnumType * AnalysisModeIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    PointType * VertexIn);
  AngleFromCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn,
    OriginReferenceType * OriginReferenceIn,
    UnitVectorType * AnalysisVectorIn,
    AngleBetweenAnalysisModeEnumType * AnalysisModeIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    MeasurementDirectiveType * MeasurementDirectiveIn,
    PointType * VertexIn);
  ~AngleFromCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OriginReferenceType * getOriginReference();
  void setOriginReference(OriginReferenceType * OriginReferenceIn);
  UnitVectorType * getAnalysisVector();
  void setAnalysisVector(UnitVectorType * AnalysisVectorIn);
  AngleBetweenAnalysisModeEnumType * getAnalysisMode();
  void setAnalysisMode(AngleBetweenAnalysisModeEnumType * AnalysisModeIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);
  MeasurementDirectiveType * getMeasurementDirective();
  void setMeasurementDirective(MeasurementDirectiveType * MeasurementDirectiveIn);
  PointType * getVertex();
  void setVertex(PointType * VertexIn);

protected:
  OriginReferenceType * OriginReference;
  UnitVectorType * AnalysisVector;
  AngleBetweenAnalysisModeEnumType * AnalysisMode;
  QIFReferenceFullType * CoordinateSystemId;
  MeasurementDirectiveType * MeasurementDirective;
  PointType * Vertex;
};

/*********************************************************************/

class AngularCoordinateCharacteristicDefinitionType :
  public CoordinateCharacteristicDefinitionBaseType
{
public:
  AngularCoordinateCharacteristicDefinitionType();
  AngularCoordinateCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCoordina_1046_Type * AngularCoordina_1046In);
  AngularCoordinateCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    DimensionModifierEnumType * DimensionTypeIn,
    DimensionModifiersType * DimensionModifiersIn,
    AngularCoordina_1046_Type * AngularCoordina_1046In);
  ~AngularCoordinateCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AngularCoordina_1046_Type * getAngularCoordina_1046();
  void setAngularCoordina_1046(AngularCoordina_1046_Type * AngularCoordina_1046In);

protected:
  AngularCoordina_1046_Type * AngularCoordina_1046;
};

/*********************************************************************/

class AngularCoordinateCharacteristicItemType :
  public CoordinateCharacteristicItemBaseType
{
public:
  AngularCoordinateCharacteristicItemType();
  AngularCoordinateCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  AngularCoordinateCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~AngularCoordinateCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class AngularCoordinateCharacteristicMeasurementType :
  public CoordinateCharacteristicMeasurementBaseType
{
public:
  AngularCoordinateCharacteristicMeasurementType();
  AngularCoordinateCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    TypeOfCoordinatesType * TypeOfCoordinatesIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  AngularCoordinateCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    TypeOfCoordinatesType * TypeOfCoordinatesIn,
    MeasuredAngularValueType * ValueIn,
    MeasuredAngularValueType * MaxValueIn,
    MeasuredAngularValueType * MinValueIn);
  ~AngularCoordinateCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAngularValueType * getValue();
  void setValue(MeasuredAngularValueType * ValueIn);
  MeasuredAngularValueType * getMaxValue();
  void setMaxValue(MeasuredAngularValueType * MaxValueIn);
  MeasuredAngularValueType * getMinValue();
  void setMinValue(MeasuredAngularValueType * MinValueIn);

protected:
  MeasuredAngularValueType * Value;
  MeasuredAngularValueType * MaxValue;
  MeasuredAngularValueType * MinValue;
};

/*********************************************************************/

class AngularCoordinateCharacteristicNominalType :
  public CoordinateCharacteristicNominalBaseType
{
public:
  AngularCoordinateCharacteristicNominalType();
  AngularCoordinateCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn,
    AngularCoordinateDirectionEnumType * DirectionIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  AngularCoordinateCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    AngularValueType * TargetValueIn,
    AngularCoordinateDirectionEnumType * DirectionIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~AngularCoordinateCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AngularValueType * getTargetValue();
  void setTargetValue(AngularValueType * TargetValueIn);
  AngularCoordinateDirectionEnumType * getDirection();
  void setDirection(AngularCoordinateDirectionEnumType * DirectionIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  AngularValueType * TargetValue;
  AngularCoordinateDirectionEnumType * Direction;
  QIFReferenceFullType * CoordinateSystemId;
};

/*********************************************************************/

class CircularityCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  CircularityCharacteristicDefinitionType();
  CircularityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CircularityChar_1048_Type * CircularityChar_1048In);
  CircularityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CircularityChar_1048_Type * CircularityChar_1048In);
  ~CircularityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CircularityChar_1048_Type * getCircularityChar_1048();
  void setCircularityChar_1048(CircularityChar_1048_Type * CircularityChar_1048In);

protected:
  CircularityChar_1048_Type * CircularityChar_1048;
};

/*********************************************************************/

class CircularityCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  CircularityCharacteristicItemType();
  CircularityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CircularityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CircularityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CircularityCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  CircularityCharacteristicMeasurementType();
  CircularityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * MaxCircularityIn,
    CircularityChar_1049_Type * CircularityChar_1049In);
  CircularityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * MaxCircularityIn,
    CircularityChar_1049_Type * CircularityChar_1049In);
  ~CircularityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getMaxCircularity();
  void setMaxCircularity(MeasuredLinearValueType * MaxCircularityIn);
  CircularityChar_1049_Type * getCircularityChar_1049();
  void setCircularityChar_1049(CircularityChar_1049_Type * CircularityChar_1049In);

protected:
  MeasuredLinearValueType * MaxCircularity;
  CircularityChar_1049_Type * CircularityChar_1049;
};

/*********************************************************************/

class CircularityCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  CircularityCharacteristicNominalType();
  CircularityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    QIFReferenceFullType * ProfileCurveIdIn);
  CircularityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    QIFReferenceFullType * ProfileCurveIdIn);
  ~CircularityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceFullType * getProfileCurveId();
  void setProfileCurveId(QIFReferenceFullType * ProfileCurveIdIn);

protected:
  QIFReferenceFullType * ProfileCurveId;
};

/*********************************************************************/

class ConicityCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  ConicityCharacteristicDefinitionType();
  ConicityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  ConicityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  ~ConicityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
};

/*********************************************************************/

class ConicityCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  ConicityCharacteristicItemType();
  ConicityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ConicityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ConicityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConicityCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  ConicityCharacteristicMeasurementType();
  ConicityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ConicityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~ConicityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class ConicityCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  ConicityCharacteristicNominalType();
  ConicityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ConicityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~ConicityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CylindricityCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  CylindricityCharacteristicDefinitionType();
  CylindricityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CylindricityCha_1052_Type * CylindricityCha_1052In);
  CylindricityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CylindricityCha_1052_Type * CylindricityCha_1052In);
  ~CylindricityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CylindricityCha_1052_Type * getCylindricityCha_1052();
  void setCylindricityCha_1052(CylindricityCha_1052_Type * CylindricityCha_1052In);

protected:
  CylindricityCha_1052_Type * CylindricityCha_1052;
};

/*********************************************************************/

class CylindricityCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  CylindricityCharacteristicItemType();
  CylindricityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CylindricityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CylindricityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class CylindricityCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  CylindricityCharacteristicMeasurementType();
  CylindricityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * MaxCylindricityIn,
    CylindricityCha_1053_Type * CylindricityCha_1053In);
  CylindricityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * MaxCylindricityIn,
    CylindricityCha_1053_Type * CylindricityCha_1053In);
  ~CylindricityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getMaxCylindricity();
  void setMaxCylindricity(MeasuredLinearValueType * MaxCylindricityIn);
  CylindricityCha_1053_Type * getCylindricityCha_1053();
  void setCylindricityCha_1053(CylindricityCha_1053_Type * CylindricityCha_1053In);

protected:
  MeasuredLinearValueType * MaxCylindricity;
  CylindricityCha_1053_Type * CylindricityCha_1053;
};

/*********************************************************************/

class CylindricityCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  CylindricityCharacteristicNominalType();
  CylindricityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  CylindricityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~CylindricityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class EllipticityCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  EllipticityCharacteristicDefinitionType();
  EllipticityCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  EllipticityCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn);
  ~EllipticityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
};

/*********************************************************************/

class EllipticityCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  EllipticityCharacteristicItemType();
  EllipticityCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  EllipticityCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~EllipticityCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class EllipticityCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  EllipticityCharacteristicMeasurementType();
  EllipticityCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  EllipticityCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn);
  ~EllipticityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class EllipticityCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  EllipticityCharacteristicNominalType();
  EllipticityCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  EllipticityCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~EllipticityCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class FlatnessCharacteristicDefinitionType :
  public FormCharacteristicDefinitionBaseType
{
public:
  FlatnessCharacteristicDefinitionType();
  FlatnessCharacteristicDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    FlatnessCharact_1055_Type * FlatnessCharact_1055In,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    LinearValueType * MaximumToleranceValueIn,
    XmlBoolean * NotConvexIn);
  FlatnessCharacteristicDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    XmlBoolean * FreeStateIn,
    XmlBoolean * StatisticalCharacteristicIn,
    XmlBoolean * CommonZoneIn,
    XmlBoolean * CommonToleranceIn,
    XmlBoolean * MedianFeatureIn,
    XmlBoolean * EnvelopeRequirementIn,
    XmlBoolean * IndependencyIn,
    XmlBoolean * UnitedOrContinuousFeatureIn,
    XmlBoolean * SeparateZoneIn,
    GeometricCharac_1057_Type * GeometricCharac_1057In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    FlatnessCharact_1055_Type * FlatnessCharact_1055In,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    LinearValueType * MaximumToleranceValueIn,
    XmlBoolean * NotConvexIn);
  ~FlatnessCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  FlatnessCharact_1055_Type * getFlatnessCharact_1055();
  void setFlatnessCharact_1055(FlatnessCharact_1055_Type * FlatnessCharact_1055In);
  MaterialModifierEnumType * getMaterialCondition();
  void setMaterialCondition(MaterialModifierEnumType * MaterialConditionIn);
  QIFReferenceType * getSizeCharacteristicDefinitionId();
  void setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn);
  LinearValueType * getMaximumToleranceValue();
  void setMaximumToleranceValue(LinearValueType * MaximumToleranceValueIn);
  XmlBoolean * getNotConvex();
  void setNotConvex(XmlBoolean * NotConvexIn);

protected:
  FlatnessCharact_1055_Type * FlatnessCharact_1055;
  MaterialModifierEnumType * MaterialCondition;
  QIFReferenceType * SizeCharacteristicDefinitionId;
  LinearValueType * MaximumToleranceValue;
  XmlBoolean * NotConvex;
};

/*********************************************************************/

class FlatnessCharacteristicItemType :
  public FormCharacteristicItemBaseType
{
public:
  FlatnessCharacteristicItemType();
  FlatnessCharacteristicItemType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  FlatnessCharacteristicItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn,
    ArrayReferenceType * FeatureItemIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceFullType * CharacteristicNominalIdIn,
    LocationOnDrawingType * LocationOnDrawingIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~FlatnessCharacteristicItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

class FlatnessCharacteristicMeasurementType :
  public FormCharacteristicMeasurementBaseType
{
public:
  FlatnessCharacteristicMeasurementType();
  FlatnessCharacteristicMeasurementType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * BonusIn,
    MeasuredLinearValueType * MaxFlatnessIn,
    MeasuredPlaneType * ZonePlaneIn);
  FlatnessCharacteristicMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    CharacteristicStatusType * StatusIn,
    QIFReferenceType * CharacteristicItemIdIn,
    XmlDateTime * TimeStampIn,
    ArrayReferenceType * FeatureMeasurementIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ActualComponentIdIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlToken * NonConformanceDesignatorIn,
    MeasuredLinearValueType * ValueIn,
    MeasuredLinearValueType * MaxValueIn,
    MeasuredLinearValueType * MinValueIn,
    MeasuredLinearValueType * BonusIn,
    MeasuredLinearValueType * MaxFlatnessIn,
    MeasuredPlaneType * ZonePlaneIn);
  ~FlatnessCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getBonus();
  void setBonus(MeasuredLinearValueType * BonusIn);
  MeasuredLinearValueType * getMaxFlatness();
  void setMaxFlatness(MeasuredLinearValueType * MaxFlatnessIn);
  MeasuredPlaneType * getZonePlane();
  void setZonePlane(MeasuredPlaneType * ZonePlaneIn);

protected:
  MeasuredLinearValueType * Bonus;
  MeasuredLinearValueType * MaxFlatness;
  MeasuredPlaneType * ZonePlane;
};

/*********************************************************************/

class FlatnessCharacteristicNominalType :
  public FormCharacteristicNominalBaseType
{
public:
  FlatnessCharacteristicNominalType();
  FlatnessCharacteristicNominalType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  FlatnessCharacteristicNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    QIFReferenceType * CharacteristicDefinitionIdIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureZoneIdsIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    XmlToken * NameIn,
    CharacteristicDesignatorType * CharacteristicDesignatorIn);
  ~FlatnessCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/*********************************************************************/

#endif // CHARACTERISTICS_HH
