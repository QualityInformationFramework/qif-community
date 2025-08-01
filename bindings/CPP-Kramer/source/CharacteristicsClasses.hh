/* ***************************************************************** */

#ifndef CHARACTERISTICS_HH
#define CHARACTERISTICS_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "IntermediatesPMIClasses.hh"
#include "PrimitivesPDClasses.hh"

/* ***************************************************************** */

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
class AngularCharacteristicDefinitionBaseTypeChoicePair;
class AngularCharacteristicItemBaseType;
class AngularCharacteristicMeasurementBaseType;
class AngularCharacteristicNominalBaseType;
class AngularCoordinateCharacteristicDefinitionType;
class AngularCoordinateCharacteristicDefinitionTypeChoicePair;
class AngularCoordinateCharacteristicItemType;
class AngularCoordinateCharacteristicMeasurementType;
class AngularCoordinateCharacteristicNominalType;
class AngularityCharacteristicDefinitionType;
class AngularityCharacteristicItemType;
class AngularityCharacteristicMeasurementType;
class AngularityCharacteristicNominalType;
class AreaCharacteristicDefinitionBaseType;
class AreaCharacteristicDefinitionBaseTypeChoicePair;
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
class CircularityCharacteristicDefinitionTypeChoicePair;
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
class CylindricityCharacteristicDefinitionTypeChoicePair;
class CylindricityCharacteristicItemType;
class CylindricityCharacteristicMeasurementType;
class CylindricityCharacteristicNominalType;
class DepthCharacteristicDefinitionType;
class DepthCharacteristicItemType;
class DepthCharacteristicMeasurementType;
class DepthCharacteristicNominalType;
class DiameterCharacteristicDefinitionType;
class DiameterCharacteristicDefinitionTypeChoicePair;
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
class ForceCharacteristicDefinitionBaseTypeChoicePair;
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
class LinearCharacteristicDefinitionBaseTypeChoicePair;
class LinearCharacteristicItemBaseType;
class LinearCharacteristicMeasurementBaseType;
class LinearCharacteristicNominalBaseType;
class LinearCoordinateCharacteristicDefinitionType;
class LinearCoordinateCharacteristicDefinitionTypeChoicePair;
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
class MassCharacteristicDefinitionBaseTypeChoicePair;
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
class PressureCharacteristicDefinitionBaseTypeChoicePair;
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
class SpeedCharacteristicDefinitionBaseTypeChoicePair;
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
class TemperatureCharacteristicDefinitionBaseTypeChoicePair;
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
class TimeCharacteristicDefinitionBaseTypeChoicePair;
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
class WeldFilletOneSideTypeChoicePair;
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
class WeldGrooveCharacteristicMeasurementTypeChoicePair;
class WeldGrooveCharacteristicNominalType;
class WeldGrooveCharacteristicNominalTypeChoicePair;
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
class CircularityChar_1041_Type;
class CircularityChar_1042_Type;
class CircularityChar_1042_TypeChoicePair;
class CircularityChar_1043_Type;
class CriticalityType_1044_Type;
class CriticalityType_1044_TypeChoicePair;
class CriticalityType_1045_Type;
class CriticalityType_1045_TypeChoicePair;
class CylindricityCha_1046_Type;
class CylindricityCha_1047_Type;
class CylindricityCha_1047_TypeChoicePair;
class CylindricityCha_1048_Type;
class FlatnessCharact_1049_Type;
class FlatnessCharact_1049_TypeChoicePair;
class GeometricCharac_1050_Type;
class GeometricCharac_1050_TypeChoicePair;
class LocationOnDrawi_1051_Type;
class LocationOnDrawi_1052_Type;
class LocationOnDrawi_1053_Type;
class OrientationChar_1054_Type;
class OrientationChar_1054_TypeChoicePair;
class OriginReference_1055_Type;
class ProfileCharacte_1056_Type;
class ProfileCharacte_1056_TypeChoicePair;
class SphericityChara_1057_Type;
class StraightnessCha_1058_Type;
class StraightnessCha_1058_TypeChoicePair;
class SurfaceProfileN_1059_Type;
class SurfaceProfileN_1059_TypeChoicePair;
class UserDefinedUnit_1060_Type;
class UserDefinedUnit_1060_TypeChoicePair;
class WeldFilletChara_1061_Type;
class WeldFilletChara_1061_TypeChoicePair;
class WeldFilletChara_1062_Type;
class WeldFilletChara_1062_TypeChoicePair;
class WeldGrooveOneSi_1063_Type;
class CircularityChar_1064_Type;
class CircularityChar_1064_TypeChoicePair;
class CylindricityCha_1065_Type;
class CylindricityCha_1065_TypeChoicePair;
class FlatnessCharact_1066_Type;
class FlatnessCharact_1067_Type;
class StraightnessCha_1068_Type;
class StraightnessCha_1069_Type;
class UserDefinedUnit_1070_Type;

/* ***************************************************************** */
/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
  virtual ~CharacteristicBaseType();
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

/* ***************************************************************** */

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
  virtual ~CharacteristicDefinitionBaseType();
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
  virtual ~CharacteristicItemBaseType();
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
  virtual ~CharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
  virtual ~CharacteristicNominalBaseType();
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

union CharacteristicStatusTypeVal
{
  CharacteristicStatusEnumType * CharacteristicStatusEnum;
  XmlString * OtherCharacteristicStatus;
};

/* ***************************************************************** */

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
    CharacteristicStatusTypeVal * CharacteristicStatusTypeValueIn);
  ~CharacteristicStatusTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CharacteristicStatusTypeType;
  CharacteristicStatusTypeVal * CharacteristicStatusTypeValue;
};

/* ***************************************************************** */

class CoaxialityDiametricalZoneType :
  public XmlTypeBase
{
public:
  CoaxialityDiametricalZoneType();
  ~CoaxialityDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CoaxialityNonDiametricalZoneType :
  public XmlTypeBase
{
public:
  CoaxialityNonDiametricalZoneType();
  ~CoaxialityNonDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

union CoaxialityZoneShapeTypeVal
{
  CoaxialityDiametricalZoneType * DiametricalZone;
  CoaxialityNonDiametricalZoneType * NonDiametricalZone;
};

/* ***************************************************************** */

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
    CoaxialityZoneShapeTypeVal * CoaxialityZoneShapeTypeValueIn);
  ~CoaxialityZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CoaxialityZoneShapeTypeType;
  CoaxialityZoneShapeTypeVal * CoaxialityZoneShapeTypeValue;
};

/* ***************************************************************** */

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
  virtual ~CompositeSegmentDefinitionBaseType();
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
  virtual ~CompositeSegmentMeasurementBaseType();
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

class ConcentricityDiametricalZoneType :
  public XmlTypeBase
{
public:
  ConcentricityDiametricalZoneType();
  ~ConcentricityDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ConcentricityNonDiametricalZoneType :
  public XmlTypeBase
{
public:
  ConcentricityNonDiametricalZoneType();
  ~ConcentricityNonDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ConcentricitySphericalZoneType :
  public XmlTypeBase
{
public:
  ConcentricitySphericalZoneType();
  ~ConcentricitySphericalZoneType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

union ConcentricityZoneShapeTypeVal
{
  ConcentricitySphericalZoneType * SphericalZone;
  ConcentricityDiametricalZoneType * DiametricalZone;
  ConcentricityNonDiametricalZoneType * NonDiametricalZone;
};

/* ***************************************************************** */

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
    ConcentricityZoneShapeTypeVal * ConcentricityZoneShapeTypeValueIn);
  ~ConcentricityZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConcentricityZoneShapeTypeType;
  ConcentricityZoneShapeTypeVal * ConcentricityZoneShapeTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

class CriticalityType :
  public XmlTypeBase
{
public:
  CriticalityType();
  CriticalityType(
    CriticalityType_1044_Type * CriticalityType_1044In,
    CriticalityType_1045_Type * CriticalityType_1045In);
  ~CriticalityType();
  void printSelf(FILE * outFile);

  CriticalityType_1044_Type * getCriticalityType_1044();
  void setCriticalityType_1044(CriticalityType_1044_Type * CriticalityType_1044In);
  CriticalityType_1045_Type * getCriticalityType_1045();
  void setCriticalityType_1045(CriticalityType_1045_Type * CriticalityType_1045In);

protected:
  CriticalityType_1044_Type * CriticalityType_1044;
  CriticalityType_1045_Type * CriticalityType_1045;
};

/* ***************************************************************** */

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
  virtual ~DimensionalCharacteristicDefinitionBaseType();
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

/* ***************************************************************** */

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
  virtual ~DimensionalCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~DimensionalCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~DimensionalCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

union ExtentTypeVal
{
  ExtentEnumType * ExtentEnum;
  XmlString * OtherExtent;
};

/* ***************************************************************** */

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
    ExtentTypeVal * ExtentTypeValueIn);
  ~ExtentTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExtentTypeType;
  ExtentTypeVal * ExtentTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

union FilterTypeVal
{
  SingleNestingIndexFilterType * SingleNestingIndexFilter;
  DualNestingIndexFilterType * DualNestingIndexFilter;
};

/* ***************************************************************** */

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
    FilterTypeVal * FilterTypeValueIn);
  ~FilterTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FilterTypeType;
  FilterTypeVal * FilterTypeValue;
};

/* ***************************************************************** */

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
    ForceCharacteristicDefinitionBaseTypeChoicePair * ForceCharacteristicDefinitionBaseTypePairIn);
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
    ForceCharacteristicDefinitionBaseTypeChoicePair * ForceCharacteristicDefinitionBaseTypePairIn);
  virtual ~ForceCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  ForceCharacteristicDefinitionBaseTypeChoicePair * getForceCharacteristicDefinitionBaseTypeChoicePair();
  void setForceCharacteristicDefinitionBaseTypeChoicePair(ForceCharacteristicDefinitionBaseTypeChoicePair * ForceCharacteristicDefinitionBaseTypePairIn);

protected:
  ForceCharacteristicDefinitionBaseTypeChoicePair * ForceCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union ForceCharacteristicDefinitionBaseTypeVal
{
  ForceToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class ForceCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  ForceCharacteristicDefinitionBaseTypeChoicePair();
  ForceCharacteristicDefinitionBaseTypeChoicePair(
    whichOne ForceCharacteristicDefinitionBaseTypeTypeIn,
    ForceCharacteristicDefinitionBaseTypeVal * ForceCharacteristicDefinitionBaseTypeValueIn);
  ~ForceCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ForceCharacteristicDefinitionBaseTypeType;
  ForceCharacteristicDefinitionBaseTypeVal * ForceCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~ForceCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~ForceCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~ForceCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ForceValueType * getTargetValue();
  void setTargetValue(ForceValueType * TargetValueIn);

protected:
  ForceValueType * TargetValue;
};

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn);
  virtual ~GeometricCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  GeometricCharac_1050_Type * getGeometricCharac_1050();
  void setGeometricCharac_1050(GeometricCharac_1050_Type * GeometricCharac_1050In);
  DirectionFeatureType * getDirectionFeature();
  void setDirectionFeature(DirectionFeatureType * DirectionFeatureIn);
  CollectionPlaneType * getCollectionPlane();
  void setCollectionPlane(CollectionPlaneType * CollectionPlaneIn);
  IntersectionPlaneType * getIntersectionPlane();
  void setIntersectionPlane(IntersectionPlaneType * IntersectionPlaneIn);
  OrientationPlaneType * getOrientationPlane();
  void setOrientationPlane(OrientationPlaneType * OrientationPlaneIn);

protected:
  GeometricCharac_1050_Type * GeometricCharac_1050;
  DirectionFeatureType * DirectionFeature;
  CollectionPlaneType * CollectionPlane;
  IntersectionPlaneType * IntersectionPlane;
  OrientationPlaneType * OrientationPlane;
};

/* ***************************************************************** */

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
  virtual ~GeometricCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~GeometricCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~GeometricCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  virtual ~LinearCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  LinearCharacteristicDefinitionBaseTypeChoicePair * getLinearCharacteristicDefinitionBaseTypeChoicePair();
  void setLinearCharacteristicDefinitionBaseTypeChoicePair(LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);

protected:
  LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union LinearCharacteristicDefinitionBaseTypeVal
{
  LinearToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class LinearCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  LinearCharacteristicDefinitionBaseTypeChoicePair();
  LinearCharacteristicDefinitionBaseTypeChoicePair(
    whichOne LinearCharacteristicDefinitionBaseTypeTypeIn,
    LinearCharacteristicDefinitionBaseTypeVal * LinearCharacteristicDefinitionBaseTypeValueIn);
  ~LinearCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearCharacteristicDefinitionBaseTypeType;
  LinearCharacteristicDefinitionBaseTypeVal * LinearCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~LinearCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~LinearCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~LinearCharacteristicNominalBaseType();
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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  virtual ~LocationCharacteristicDefinitionBaseType();
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

/* ***************************************************************** */

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
  virtual ~LocationCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~LocationCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~LocationCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

union LocationOnDrawingTypeVal
{
  LocationOnDrawi_1051_Type * LocationOnDrawi_1051;
  LocationOnDrawi_1052_Type * LocationOnDrawi_1052;
  LocationOnDrawi_1053_Type * LocationOnDrawi_1053;
};

/* ***************************************************************** */

class LocationOnDrawingTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LocationOnDrawi_1051E,
    LocationOnDrawi_1052E,
    LocationOnDrawi_1053E };
  LocationOnDrawingTypeChoicePair();
  LocationOnDrawingTypeChoicePair(
    whichOne LocationOnDrawingTypeTypeIn,
    LocationOnDrawingTypeVal * LocationOnDrawingTypeValueIn);
  ~LocationOnDrawingTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LocationOnDrawingTypeType;
  LocationOnDrawingTypeVal * LocationOnDrawingTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    MassCharacteristicDefinitionBaseTypeChoicePair * MassCharacteristicDefinitionBaseTypePairIn);
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
    MassCharacteristicDefinitionBaseTypeChoicePair * MassCharacteristicDefinitionBaseTypePairIn);
  virtual ~MassCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  MassCharacteristicDefinitionBaseTypeChoicePair * getMassCharacteristicDefinitionBaseTypeChoicePair();
  void setMassCharacteristicDefinitionBaseTypeChoicePair(MassCharacteristicDefinitionBaseTypeChoicePair * MassCharacteristicDefinitionBaseTypePairIn);

protected:
  MassCharacteristicDefinitionBaseTypeChoicePair * MassCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union MassCharacteristicDefinitionBaseTypeVal
{
  MassToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class MassCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  MassCharacteristicDefinitionBaseTypeChoicePair();
  MassCharacteristicDefinitionBaseTypeChoicePair(
    whichOne MassCharacteristicDefinitionBaseTypeTypeIn,
    MassCharacteristicDefinitionBaseTypeVal * MassCharacteristicDefinitionBaseTypeValueIn);
  ~MassCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MassCharacteristicDefinitionBaseTypeType;
  MassCharacteristicDefinitionBaseTypeVal * MassCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~MassCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~MassCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~MassCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MassValueType * getTargetValue();
  void setTargetValue(MassValueType * TargetValueIn);

protected:
  MassValueType * TargetValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
  virtual ~OrientationCharacteristicDefinitionBaseType();
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
  OrientationChar_1054_Type * getOrientationChar_1054();
  void setOrientationChar_1054(OrientationChar_1054_Type * OrientationChar_1054In);

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
  OrientationChar_1054_Type * OrientationChar_1054;
};

/* ***************************************************************** */

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
  virtual ~OrientationCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~OrientationCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~OrientationCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

union OrientationZoneShapeTypeVal
{
  OrientationDiametricalZoneType * DiametricalZone;
  OrientationPlanarZoneType * PlanarZone;
};

/* ***************************************************************** */

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
    OrientationZoneShapeTypeVal * OrientationZoneShapeTypeValueIn);
  ~OrientationZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OrientationZoneShapeTypeType;
  OrientationZoneShapeTypeVal * OrientationZoneShapeTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

union OriginReferenceTypeVal
{
  OriginReference_1055_Type * OriginReference_1055;
  QIFReferenceFullType * DatumDefinitionId;
};

/* ***************************************************************** */

class OriginReferenceTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OriginReference_1055E,
    DatumDefinitionIdE };
  OriginReferenceTypeChoicePair();
  OriginReferenceTypeChoicePair(
    whichOne OriginReferenceTypeTypeIn,
    OriginReferenceTypeVal * OriginReferenceTypeValueIn);
  ~OriginReferenceTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OriginReferenceTypeType;
  OriginReferenceTypeVal * OriginReferenceTypeValue;
};

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
  ~ParallelismCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
  ~PerpendicularityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

union PositionZoneShapeTypeVal
{
  PositionSphericalZoneType * SphericalZone;
  PositionDiametricalZoneType * DiametricalZone;
  PositionNonDiametricalZoneType * NonDiametricalZone;
};

/* ***************************************************************** */

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
    PositionZoneShapeTypeVal * PositionZoneShapeTypeValueIn);
  ~PositionZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PositionZoneShapeTypeType;
  PositionZoneShapeTypeVal * PositionZoneShapeTypeValue;
};

/* ***************************************************************** */

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
    PressureCharacteristicDefinitionBaseTypeChoicePair * PressureCharacteristicDefinitionBaseTypePairIn);
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
    PressureCharacteristicDefinitionBaseTypeChoicePair * PressureCharacteristicDefinitionBaseTypePairIn);
  virtual ~PressureCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  PressureCharacteristicDefinitionBaseTypeChoicePair * getPressureCharacteristicDefinitionBaseTypeChoicePair();
  void setPressureCharacteristicDefinitionBaseTypeChoicePair(PressureCharacteristicDefinitionBaseTypeChoicePair * PressureCharacteristicDefinitionBaseTypePairIn);

protected:
  PressureCharacteristicDefinitionBaseTypeChoicePair * PressureCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union PressureCharacteristicDefinitionBaseTypeVal
{
  PressureToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class PressureCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  PressureCharacteristicDefinitionBaseTypeChoicePair();
  PressureCharacteristicDefinitionBaseTypeChoicePair(
    whichOne PressureCharacteristicDefinitionBaseTypeTypeIn,
    PressureCharacteristicDefinitionBaseTypeVal * PressureCharacteristicDefinitionBaseTypeValueIn);
  ~PressureCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PressureCharacteristicDefinitionBaseTypeType;
  PressureCharacteristicDefinitionBaseTypeVal * PressureCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~PressureCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~PressureCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~PressureCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PressureValueType * getTargetValue();
  void setTargetValue(PressureValueType * TargetValueIn);

protected:
  PressureValueType * TargetValue;
};

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn);
  virtual ~ProfileCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  ProfileCharacte_1056_Type * getProfileCharacte_1056();
  void setProfileCharacte_1056(ProfileCharacte_1056_Type * ProfileCharacte_1056In);
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
  ProfileCharacte_1056_Type * ProfileCharacte_1056;
  XmlBoolean * OffsetZone;
  XmlBoolean * VariableAngle;
  CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinition;
  CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinition;
  CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinition;
  QIFReferenceFullType * DatumReferenceFrameId;
  XmlBoolean * OrientationOnly;
};

/* ***************************************************************** */

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
  virtual ~ProfileCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~ProfileCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~ProfileCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getTargetValue();
  void setTargetValue(LinearValueType * TargetValueIn);

protected:
  LinearValueType * TargetValue;
};

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn,
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn,
    XmlBoolean * ControlledRadiusIn);
  ~RadiusCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getControlledRadius();
  void setControlledRadius(XmlBoolean * ControlledRadiusIn);

protected:
  XmlBoolean * ControlledRadius;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn);
  virtual ~RunoutCharacteristicDefinitionBaseType();
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

/* ***************************************************************** */

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
  virtual ~RunoutCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~RunoutCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getDatumsOk();
  void setDatumsOk(XmlBoolean * DatumsOkIn);

protected:
  XmlBoolean * DatumsOk;
};

/* ***************************************************************** */

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
  virtual ~RunoutCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    SpeedCharacteristicDefinitionBaseTypeChoicePair * SpeedCharacteristicDefinitionBaseTypePairIn);
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
    SpeedCharacteristicDefinitionBaseTypeChoicePair * SpeedCharacteristicDefinitionBaseTypePairIn);
  virtual ~SpeedCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  SpeedCharacteristicDefinitionBaseTypeChoicePair * getSpeedCharacteristicDefinitionBaseTypeChoicePair();
  void setSpeedCharacteristicDefinitionBaseTypeChoicePair(SpeedCharacteristicDefinitionBaseTypeChoicePair * SpeedCharacteristicDefinitionBaseTypePairIn);

protected:
  SpeedCharacteristicDefinitionBaseTypeChoicePair * SpeedCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union SpeedCharacteristicDefinitionBaseTypeVal
{
  SpeedToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class SpeedCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  SpeedCharacteristicDefinitionBaseTypeChoicePair();
  SpeedCharacteristicDefinitionBaseTypeChoicePair(
    whichOne SpeedCharacteristicDefinitionBaseTypeTypeIn,
    SpeedCharacteristicDefinitionBaseTypeVal * SpeedCharacteristicDefinitionBaseTypeValueIn);
  ~SpeedCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SpeedCharacteristicDefinitionBaseTypeType;
  SpeedCharacteristicDefinitionBaseTypeVal * SpeedCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~SpeedCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~SpeedCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~SpeedCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SpeedValueType * getTargetValue();
  void setTargetValue(SpeedValueType * TargetValueIn);

protected:
  SpeedValueType * TargetValue;
};

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~SphericalDiameterCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~SphericalRadiusCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~SquareCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

class StraightnessDiametricalZoneType :
  public XmlTypeBase
{
public:
  StraightnessDiametricalZoneType();
  ~StraightnessDiametricalZoneType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

union StraightnessZoneShapeTypeVal
{
  StraightnessDiametricalZoneType * DiametricalZone;
  StraightnessNonDiametricalZoneType * NonDiametricalZone;
};

/* ***************************************************************** */

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
    StraightnessZoneShapeTypeVal * StraightnessZoneShapeTypeValueIn);
  ~StraightnessZoneShapeTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StraightnessZoneShapeTypeType;
  StraightnessZoneShapeTypeVal * StraightnessZoneShapeTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    LinearValueType * ToPointToleranceValueIn,
    SurfaceProfileN_1059_Type * SurfaceProfileN_1059In);
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
    XmlBoolean * OffsetZoneIn,
    XmlBoolean * VariableAngleIn,
    CompositeSegmentProfileDefinitionType * SecondCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * ThirdCompositeSegmentProfileDefinitionIn,
    CompositeSegmentProfileDefinitionType * FourthCompositeSegmentProfileDefinitionIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    XmlBoolean * OrientationOnlyIn,
    LinearValueType * ToPointToleranceValueIn,
    SurfaceProfileN_1059_Type * SurfaceProfileN_1059In);
  ~SurfaceProfileNonUniformCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getToPointToleranceValue();
  void setToPointToleranceValue(LinearValueType * ToPointToleranceValueIn);
  SurfaceProfileN_1059_Type * getSurfaceProfileN_1059();
  void setSurfaceProfileN_1059(SurfaceProfileN_1059_Type * SurfaceProfileN_1059In);

protected:
  LinearValueType * ToPointToleranceValue;
  SurfaceProfileN_1059_Type * SurfaceProfileN_1059;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    TemperatureCharacteristicDefinitionBaseTypeChoicePair * TemperatureCharacteristicDefinitionBaseTypePairIn);
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
    TemperatureCharacteristicDefinitionBaseTypeChoicePair * TemperatureCharacteristicDefinitionBaseTypePairIn);
  virtual ~TemperatureCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  TemperatureCharacteristicDefinitionBaseTypeChoicePair * getTemperatureCharacteristicDefinitionBaseTypeChoicePair();
  void setTemperatureCharacteristicDefinitionBaseTypeChoicePair(TemperatureCharacteristicDefinitionBaseTypeChoicePair * TemperatureCharacteristicDefinitionBaseTypePairIn);

protected:
  TemperatureCharacteristicDefinitionBaseTypeChoicePair * TemperatureCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union TemperatureCharacteristicDefinitionBaseTypeVal
{
  TemperatureToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class TemperatureCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  TemperatureCharacteristicDefinitionBaseTypeChoicePair();
  TemperatureCharacteristicDefinitionBaseTypeChoicePair(
    whichOne TemperatureCharacteristicDefinitionBaseTypeTypeIn,
    TemperatureCharacteristicDefinitionBaseTypeVal * TemperatureCharacteristicDefinitionBaseTypeValueIn);
  ~TemperatureCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TemperatureCharacteristicDefinitionBaseTypeType;
  TemperatureCharacteristicDefinitionBaseTypeVal * TemperatureCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~TemperatureCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~TemperatureCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~TemperatureCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TemperatureValueType * getTargetValue();
  void setTargetValue(TemperatureValueType * TargetValueIn);

protected:
  TemperatureValueType * TargetValue;
};

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~ThicknessCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    TimeCharacteristicDefinitionBaseTypeChoicePair * TimeCharacteristicDefinitionBaseTypePairIn);
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
    TimeCharacteristicDefinitionBaseTypeChoicePair * TimeCharacteristicDefinitionBaseTypePairIn);
  virtual ~TimeCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  TimeCharacteristicDefinitionBaseTypeChoicePair * getTimeCharacteristicDefinitionBaseTypeChoicePair();
  void setTimeCharacteristicDefinitionBaseTypeChoicePair(TimeCharacteristicDefinitionBaseTypeChoicePair * TimeCharacteristicDefinitionBaseTypePairIn);

protected:
  TimeCharacteristicDefinitionBaseTypeChoicePair * TimeCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union TimeCharacteristicDefinitionBaseTypeVal
{
  TimeToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class TimeCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  TimeCharacteristicDefinitionBaseTypeChoicePair();
  TimeCharacteristicDefinitionBaseTypeChoicePair(
    whichOne TimeCharacteristicDefinitionBaseTypeTypeIn,
    TimeCharacteristicDefinitionBaseTypeVal * TimeCharacteristicDefinitionBaseTypeValueIn);
  ~TimeCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TimeCharacteristicDefinitionBaseTypeType;
  TimeCharacteristicDefinitionBaseTypeVal * TimeCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~TimeCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~TimeCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~TimeCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TimeValueType * getTargetValue();
  void setTargetValue(TimeValueType * TargetValueIn);

protected:
  TimeValueType * TargetValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

union ToleranceDefinitionsTypeVal
{
  LinearToleranceDefinitionType * LinearTolerance;
  AngularToleranceDefinitionType * AngularTolerance;
};

/* ***************************************************************** */

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
    ToleranceDefinitionsTypeVal * ToleranceDefinitionsTypeValueIn);
  ~ToleranceDefinitionsTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToleranceDefinitionsTypeType;
  ToleranceDefinitionsTypeVal * ToleranceDefinitionsTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    ForceCharacteristicDefinitionBaseTypeChoicePair * ForceCharacteristicDefinitionBaseTypePairIn,
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
    ForceCharacteristicDefinitionBaseTypeChoicePair * ForceCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedForceCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn,
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedLinearCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    MassCharacteristicDefinitionBaseTypeChoicePair * MassCharacteristicDefinitionBaseTypePairIn,
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
    MassCharacteristicDefinitionBaseTypeChoicePair * MassCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedMassCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    PressureCharacteristicDefinitionBaseTypeChoicePair * PressureCharacteristicDefinitionBaseTypePairIn,
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
    PressureCharacteristicDefinitionBaseTypeChoicePair * PressureCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedPressureCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    SpeedCharacteristicDefinitionBaseTypeChoicePair * SpeedCharacteristicDefinitionBaseTypePairIn,
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
    SpeedCharacteristicDefinitionBaseTypeChoicePair * SpeedCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedSpeedCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    TemperatureCharacteristicDefinitionBaseTypeChoicePair * TemperatureCharacteristicDefinitionBaseTypePairIn,
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
    TemperatureCharacteristicDefinitionBaseTypeChoicePair * TemperatureCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedTemperatureCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    TimeCharacteristicDefinitionBaseTypeChoicePair * TimeCharacteristicDefinitionBaseTypePairIn,
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
    TimeCharacteristicDefinitionBaseTypeChoicePair * TimeCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedTimeCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    UserDefinedUnit_1060_Type * UserDefinedUnit_1060In,
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
    UserDefinedUnit_1060_Type * UserDefinedUnit_1060In,
    XmlBoolean * DefinedAsLimitIn);
  ~UserDefinedUnitCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UserDefinedUnitValueType * getTargetValue();
  void setTargetValue(UserDefinedUnitValueType * TargetValueIn);
  UserDefinedUnit_1060_Type * getUserDefinedUnit_1060();
  void setUserDefinedUnit_1060(UserDefinedUnit_1060_Type * UserDefinedUnit_1060In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);

protected:
  UserDefinedUnitValueType * TargetValue;
  UserDefinedUnit_1060_Type * UserDefinedUnit_1060;
  XmlBoolean * DefinedAsLimit;
};

/* ***************************************************************** */

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
  virtual ~WeldCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~WeldCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~WeldCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~WeldCharacteristicNominalBaseType();
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldFilletChara_1061_Type * WeldFilletChara_1061In);
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
    WeldFilletChara_1061_Type * WeldFilletChara_1061In);
  ~WeldFilletCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceAllEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceAllEnumType * LocationSignificanceIn);
  WeldFilletChara_1061_Type * getWeldFilletChara_1061();
  void setWeldFilletChara_1061(WeldFilletChara_1061_Type * WeldFilletChara_1061In);

protected:
  LocationSignificanceAllEnumType * LocationSignificance;
  WeldFilletChara_1061_Type * WeldFilletChara_1061;
};

/* ***************************************************************** */

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
    WeldFilletChara_1062_Type * WeldFilletChara_1062In);
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
    WeldFilletChara_1062_Type * WeldFilletChara_1062In);
  ~WeldFilletCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocationSignificanceAllEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceAllEnumType * LocationSignificanceIn);
  WeldFilletChara_1062_Type * getWeldFilletChara_1062();
  void setWeldFilletChara_1062(WeldFilletChara_1062_Type * WeldFilletChara_1062In);

protected:
  LocationSignificanceAllEnumType * LocationSignificance;
  WeldFilletChara_1062_Type * WeldFilletChara_1062;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldGrooveCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  WeldGrooveCharacteristicMeasurementTypeChoicePair * getWeldGrooveCharacteristicMeasurementTypeChoicePair();
  void setWeldGrooveCharacteristicMeasurementTypeChoicePair(WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);

protected:
  WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePair;
};

/* ***************************************************************** */

union WeldGrooveCharacteristicMeasurementTypeVal
{
  WeldGrooveOneSideType * OneSide;
  WeldGrooveBothSidesExtendedType * BothSides;
};

/* ***************************************************************** */

class WeldGrooveCharacteristicMeasurementTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OneSideE,
    BothSidesE };
  WeldGrooveCharacteristicMeasurementTypeChoicePair();
  WeldGrooveCharacteristicMeasurementTypeChoicePair(
    whichOne WeldGrooveCharacteristicMeasurementTypeTypeIn,
    WeldGrooveCharacteristicMeasurementTypeVal * WeldGrooveCharacteristicMeasurementTypeValueIn);
  ~WeldGrooveCharacteristicMeasurementTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldGrooveCharacteristicMeasurementTypeType;
  WeldGrooveCharacteristicMeasurementTypeVal * WeldGrooveCharacteristicMeasurementTypeValue;
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldGrooveCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  WeldGrooveCharacteristicNominalTypeChoicePair * getWeldGrooveCharacteristicNominalTypeChoicePair();
  void setWeldGrooveCharacteristicNominalTypeChoicePair(WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);

protected:
  WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePair;
};

/* ***************************************************************** */

union WeldGrooveCharacteristicNominalTypeVal
{
  WeldGrooveOneSideType * OneSide;
  WeldGrooveBothSidesExtendedType * BothSides;
};

/* ***************************************************************** */

class WeldGrooveCharacteristicNominalTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OneSideE,
    BothSidesE };
  WeldGrooveCharacteristicNominalTypeChoicePair();
  WeldGrooveCharacteristicNominalTypeChoicePair(
    whichOne WeldGrooveCharacteristicNominalTypeTypeIn,
    WeldGrooveCharacteristicNominalTypeVal * WeldGrooveCharacteristicNominalTypeValueIn);
  ~WeldGrooveCharacteristicNominalTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldGrooveCharacteristicNominalTypeType;
  WeldGrooveCharacteristicNominalTypeVal * WeldGrooveCharacteristicNominalTypeValue;
};

/* ***************************************************************** */

class WeldGrooveOneSideType :
  public XmlTypeBase
{
public:
  WeldGrooveOneSideType();
  WeldGrooveOneSideType(
    LocationSignificanceOneSidesEnumType * LocationSignificanceIn,
    WeldGrooveOneSi_1063_Type * WeldGrooveOneSi_1063In);
  ~WeldGrooveOneSideType();
  void printSelf(FILE * outFile);

  LocationSignificanceOneSidesEnumType * getLocationSignificance();
  void setLocationSignificance(LocationSignificanceOneSidesEnumType * LocationSignificanceIn);
  WeldGrooveOneSi_1063_Type * getWeldGrooveOneSi_1063();
  void setWeldGrooveOneSi_1063(WeldGrooveOneSi_1063_Type * WeldGrooveOneSi_1063In);

protected:
  LocationSignificanceOneSidesEnumType * LocationSignificance;
  WeldGrooveOneSi_1063_Type * WeldGrooveOneSi_1063;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldJCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldJCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldScarfCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldScarfCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldSquareCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldSquareCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldUCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldUCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldVCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldVCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~WidthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

class CircularityChar_1041_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1041_Type();
  CircularityChar_1041_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CircularityChar_1064_Type * CircularityChar_1064In);
  ~CircularityChar_1041_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  CircularityChar_1064_Type * getCircularityChar_1064();
  void setCircularityChar_1064(CircularityChar_1064_Type * CircularityChar_1064In);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  CircularityChar_1064_Type * CircularityChar_1064;
};

/* ***************************************************************** */

class CircularityChar_1042_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1042_Type();
  CircularityChar_1042_Type(
    CircularityChar_1042_TypeChoicePair * CircularityChar_1042_TypePairIn);
  ~CircularityChar_1042_Type();
  void printSelf(FILE * outFile);

  CircularityChar_1042_TypeChoicePair * getCircularityChar_1042_TypePair();
  void setCircularityChar_1042_TypePair(CircularityChar_1042_TypeChoicePair * CircularityChar_1042_TypePairIn);

protected:
  CircularityChar_1042_TypeChoicePair * CircularityChar_1042_TypePair;
};

/* ***************************************************************** */

union CircularityChar_1042_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
};

/* ***************************************************************** */

class CircularityChar_1042_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE };
  CircularityChar_1042_TypeChoicePair();
  CircularityChar_1042_TypeChoicePair(
    whichOne CircularityChar_1042_TypeTypeIn,
    CircularityChar_1042_TypeVal * CircularityChar_1042_TypeValueIn);
  ~CircularityChar_1042_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularityChar_1042_TypeType;
  CircularityChar_1042_TypeVal * CircularityChar_1042_TypeValue;
};

/* ***************************************************************** */

class CircularityChar_1043_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1043_Type();
  CircularityChar_1043_Type(
    MeasuredZoneRadiiType * ZoneRadiiIn,
    MeasuredPlaneType * ZonePlaneIn);
  ~CircularityChar_1043_Type();
  void printSelf(FILE * outFile);

  MeasuredZoneRadiiType * getZoneRadii();
  void setZoneRadii(MeasuredZoneRadiiType * ZoneRadiiIn);
  MeasuredPlaneType * getZonePlane();
  void setZonePlane(MeasuredPlaneType * ZonePlaneIn);

protected:
  MeasuredZoneRadiiType * ZoneRadii;
  MeasuredPlaneType * ZonePlane;
};

/* ***************************************************************** */

class CriticalityType_1044_Type :
  public XmlTypeBase
{
public:
  CriticalityType_1044_Type();
  CriticalityType_1044_Type(
    CriticalityType_1044_TypeChoicePair * CriticalityType_1044_TypePairIn);
  ~CriticalityType_1044_Type();
  void printSelf(FILE * outFile);

  CriticalityType_1044_TypeChoicePair * getCriticalityType_1044_TypePair();
  void setCriticalityType_1044_TypePair(CriticalityType_1044_TypeChoicePair * CriticalityType_1044_TypePairIn);

protected:
  CriticalityType_1044_TypeChoicePair * CriticalityType_1044_TypePair;
};

/* ***************************************************************** */

union CriticalityType_1044_TypeVal
{
  CriticalityLevelEnumType * LevelEnum;
  XmlString * OtherLevel;
};

/* ***************************************************************** */

class CriticalityType_1044_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LevelEnumE,
    OtherLevelE };
  CriticalityType_1044_TypeChoicePair();
  CriticalityType_1044_TypeChoicePair(
    whichOne CriticalityType_1044_TypeTypeIn,
    CriticalityType_1044_TypeVal * CriticalityType_1044_TypeValueIn);
  ~CriticalityType_1044_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CriticalityType_1044_TypeType;
  CriticalityType_1044_TypeVal * CriticalityType_1044_TypeValue;
};

/* ***************************************************************** */

class CriticalityType_1045_Type :
  public XmlTypeBase
{
public:
  CriticalityType_1045_Type();
  CriticalityType_1045_Type(
    CriticalityType_1045_TypeChoicePair * CriticalityType_1045_TypePairIn);
  ~CriticalityType_1045_Type();
  void printSelf(FILE * outFile);

  CriticalityType_1045_TypeChoicePair * getCriticalityType_1045_TypePair();
  void setCriticalityType_1045_TypePair(CriticalityType_1045_TypeChoicePair * CriticalityType_1045_TypePairIn);

protected:
  CriticalityType_1045_TypeChoicePair * CriticalityType_1045_TypePair;
};

/* ***************************************************************** */

union CriticalityType_1045_TypeVal
{
  CriticalityAreaEnumType * AreaEnum;
  XmlString * OtherArea;
};

/* ***************************************************************** */

class CriticalityType_1045_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AreaEnumE,
    OtherAreaE };
  CriticalityType_1045_TypeChoicePair();
  CriticalityType_1045_TypeChoicePair(
    whichOne CriticalityType_1045_TypeTypeIn,
    CriticalityType_1045_TypeVal * CriticalityType_1045_TypeValueIn);
  ~CriticalityType_1045_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CriticalityType_1045_TypeType;
  CriticalityType_1045_TypeVal * CriticalityType_1045_TypeValue;
};

/* ***************************************************************** */

class CylindricityCha_1046_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1046_Type();
  CylindricityCha_1046_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    CylindricityCha_1065_Type * CylindricityCha_1065In);
  ~CylindricityCha_1046_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValue();
  void setToleranceValue(LinearValueType * ToleranceValueIn);
  LinearDualValueType * getToleranceDualValue();
  void setToleranceDualValue(LinearDualValueType * ToleranceDualValueIn);
  CylindricityCha_1065_Type * getCylindricityCha_1065();
  void setCylindricityCha_1065(CylindricityCha_1065_Type * CylindricityCha_1065In);

protected:
  LinearValueType * ToleranceValue;
  LinearDualValueType * ToleranceDualValue;
  CylindricityCha_1065_Type * CylindricityCha_1065;
};

/* ***************************************************************** */

class CylindricityCha_1047_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1047_Type();
  CylindricityCha_1047_Type(
    CylindricityCha_1047_TypeChoicePair * CylindricityCha_1047_TypePairIn);
  ~CylindricityCha_1047_Type();
  void printSelf(FILE * outFile);

  CylindricityCha_1047_TypeChoicePair * getCylindricityCha_1047_TypePair();
  void setCylindricityCha_1047_TypePair(CylindricityCha_1047_TypeChoicePair * CylindricityCha_1047_TypePairIn);

protected:
  CylindricityCha_1047_TypeChoicePair * CylindricityCha_1047_TypePair;
};

/* ***************************************************************** */

union CylindricityCha_1047_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
  ToleranceZonePerUnitPolarAreaType * ToleranceZonePerUnitPolarArea;
  ToleranceZonePerUnitAreaType * ToleranceZonePerUnitArea;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLength;
};

/* ***************************************************************** */

class CylindricityCha_1047_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE,
    ToleranceZonePerUnitPolarAreaE,
    ToleranceZonePerUnitAreaE,
    ToleranceZonePerUnitLengthE };
  CylindricityCha_1047_TypeChoicePair();
  CylindricityCha_1047_TypeChoicePair(
    whichOne CylindricityCha_1047_TypeTypeIn,
    CylindricityCha_1047_TypeVal * CylindricityCha_1047_TypeValueIn);
  ~CylindricityCha_1047_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricityCha_1047_TypeType;
  CylindricityCha_1047_TypeVal * CylindricityCha_1047_TypeValue;
};

/* ***************************************************************** */

class CylindricityCha_1048_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1048_Type();
  CylindricityCha_1048_Type(
    MeasuredZoneRadiiType * ZoneRadiiIn,
    MeasuredZoneAxisType * ZoneAxisIn);
  ~CylindricityCha_1048_Type();
  void printSelf(FILE * outFile);

  MeasuredZoneRadiiType * getZoneRadii();
  void setZoneRadii(MeasuredZoneRadiiType * ZoneRadiiIn);
  MeasuredZoneAxisType * getZoneAxis();
  void setZoneAxis(MeasuredZoneAxisType * ZoneAxisIn);

protected:
  MeasuredZoneRadiiType * ZoneRadii;
  MeasuredZoneAxisType * ZoneAxis;
};

/* ***************************************************************** */

class FlatnessCharact_1049_Type :
  public XmlTypeBase
{
public:
  FlatnessCharact_1049_Type();
  FlatnessCharact_1049_Type(
    FlatnessCharact_1049_TypeChoicePair * FlatnessCharact_1049_TypePairIn);
  ~FlatnessCharact_1049_Type();
  void printSelf(FILE * outFile);

  FlatnessCharact_1049_TypeChoicePair * getFlatnessCharact_1049_TypePair();
  void setFlatnessCharact_1049_TypePair(FlatnessCharact_1049_TypeChoicePair * FlatnessCharact_1049_TypePairIn);

protected:
  FlatnessCharact_1049_TypeChoicePair * FlatnessCharact_1049_TypePair;
};

/* ***************************************************************** */

union FlatnessCharact_1049_TypeVal
{
  FlatnessCharact_1066_Type * FlatnessCharact_1066;
  FlatnessCharact_1067_Type * FlatnessCharact_1067;
};

/* ***************************************************************** */

class FlatnessCharact_1049_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    FlatnessCharact_1066E,
    FlatnessCharact_1067E };
  FlatnessCharact_1049_TypeChoicePair();
  FlatnessCharact_1049_TypeChoicePair(
    whichOne FlatnessCharact_1049_TypeTypeIn,
    FlatnessCharact_1049_TypeVal * FlatnessCharact_1049_TypeValueIn);
  ~FlatnessCharact_1049_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FlatnessCharact_1049_TypeType;
  FlatnessCharact_1049_TypeVal * FlatnessCharact_1049_TypeValue;
};

/* ***************************************************************** */

class GeometricCharac_1050_Type :
  public XmlTypeBase
{
public:
  GeometricCharac_1050_Type();
  GeometricCharac_1050_Type(
    GeometricCharac_1050_TypeChoicePair * GeometricCharac_1050_TypePairIn);
  ~GeometricCharac_1050_Type();
  void printSelf(FILE * outFile);

  GeometricCharac_1050_TypeChoicePair * getGeometricCharac_1050_TypePair();
  void setGeometricCharac_1050_TypePair(GeometricCharac_1050_TypeChoicePair * GeometricCharac_1050_TypePairIn);

protected:
  GeometricCharac_1050_TypeChoicePair * GeometricCharac_1050_TypePair;
};

/* ***************************************************************** */

union GeometricCharac_1050_TypeVal
{
  AssociatedTolerancedFeatureSpecificationElementEnumType * AssociatedTolerancedFeatureSpecificationElement;
  ReferenceFeatureAssociationSpecificationElementType * ReferenceFeatureAssociationSpecificationElement;
};

/* ***************************************************************** */

class GeometricCharac_1050_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AssociatedTolerancedFeatureSpecificationElementE,
    ReferenceFeatureAssociationSpecificationElementE };
  GeometricCharac_1050_TypeChoicePair();
  GeometricCharac_1050_TypeChoicePair(
    whichOne GeometricCharac_1050_TypeTypeIn,
    GeometricCharac_1050_TypeVal * GeometricCharac_1050_TypeValueIn);
  ~GeometricCharac_1050_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GeometricCharac_1050_TypeType;
  GeometricCharac_1050_TypeVal * GeometricCharac_1050_TypeValue;
};

/* ***************************************************************** */

class LocationOnDrawi_1051_Type :
  public XmlTypeBase
{
public:
  LocationOnDrawi_1051_Type();
  LocationOnDrawi_1051_Type(
    QIFReferenceFullType * DrawingIdIn,
    XmlString * SheetNumberIn,
    XmlString * DrawingZoneIn);
  ~LocationOnDrawi_1051_Type();
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

/* ***************************************************************** */

class LocationOnDrawi_1052_Type :
  public XmlTypeBase
{
public:
  LocationOnDrawi_1052_Type();
  LocationOnDrawi_1052_Type(
    QIFReferenceFullType * ModelIdIn,
    XmlString * ViewIn);
  ~LocationOnDrawi_1052_Type();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getModelId();
  void setModelId(QIFReferenceFullType * ModelIdIn);
  XmlString * getView();
  void setView(XmlString * ViewIn);

protected:
  QIFReferenceFullType * ModelId;
  XmlString * View;
};

/* ***************************************************************** */

class LocationOnDrawi_1053_Type :
  public XmlTypeBase
{
public:
  LocationOnDrawi_1053_Type();
  LocationOnDrawi_1053_Type(
    QIFReferenceFullType * ViewIdIn);
  ~LocationOnDrawi_1053_Type();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getViewId();
  void setViewId(QIFReferenceFullType * ViewIdIn);

protected:
  QIFReferenceFullType * ViewId;
};

/* ***************************************************************** */

class OrientationChar_1054_Type :
  public XmlTypeBase
{
public:
  OrientationChar_1054_Type();
  OrientationChar_1054_Type(
    OrientationChar_1054_TypeChoicePair * OrientationChar_1054_TypePairIn);
  ~OrientationChar_1054_Type();
  void printSelf(FILE * outFile);

  OrientationChar_1054_TypeChoicePair * getOrientationChar_1054_TypePair();
  void setOrientationChar_1054_TypePair(OrientationChar_1054_TypeChoicePair * OrientationChar_1054_TypePairIn);

protected:
  OrientationChar_1054_TypeChoicePair * OrientationChar_1054_TypePair;
};

/* ***************************************************************** */

union OrientationChar_1054_TypeVal
{
  XmlBoolean * EachRadialElement;
  XmlBoolean * EachElement;
};

/* ***************************************************************** */

class OrientationChar_1054_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    EachRadialElementE,
    EachElementE };
  OrientationChar_1054_TypeChoicePair();
  OrientationChar_1054_TypeChoicePair(
    whichOne OrientationChar_1054_TypeTypeIn,
    OrientationChar_1054_TypeVal * OrientationChar_1054_TypeValueIn);
  ~OrientationChar_1054_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OrientationChar_1054_TypeType;
  OrientationChar_1054_TypeVal * OrientationChar_1054_TypeValue;
};

/* ***************************************************************** */

class OriginReference_1055_Type :
  public XmlTypeBase
{
public:
  OriginReference_1055_Type();
  OriginReference_1055_Type(
    QIFReferenceFullType * FeatureNominalIdIn,
    ReferencedComponentEnumType * ReferencedComponentIn);
  ~OriginReference_1055_Type();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getFeatureNominalId();
  void setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn);
  ReferencedComponentEnumType * getReferencedComponent();
  void setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn);

protected:
  QIFReferenceFullType * FeatureNominalId;
  ReferencedComponentEnumType * ReferencedComponent;
};

/* ***************************************************************** */

class ProfileCharacte_1056_Type :
  public XmlTypeBase
{
public:
  ProfileCharacte_1056_Type();
  ProfileCharacte_1056_Type(
    ProfileCharacte_1056_TypeChoicePair * ProfileCharacte_1056_TypePairIn);
  ~ProfileCharacte_1056_Type();
  void printSelf(FILE * outFile);

  ProfileCharacte_1056_TypeChoicePair * getProfileCharacte_1056_TypePair();
  void setProfileCharacte_1056_TypePair(ProfileCharacte_1056_TypeChoicePair * ProfileCharacte_1056_TypePairIn);

protected:
  ProfileCharacte_1056_TypeChoicePair * ProfileCharacte_1056_TypePair;
};

/* ***************************************************************** */

union ProfileCharacte_1056_TypeVal
{
  LinearValueType * OuterDisposition;
  LinearValueType * UnequallyDisposedZone;
};

/* ***************************************************************** */

class ProfileCharacte_1056_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OuterDispositionE,
    UnequallyDisposedZoneE };
  ProfileCharacte_1056_TypeChoicePair();
  ProfileCharacte_1056_TypeChoicePair(
    whichOne ProfileCharacte_1056_TypeTypeIn,
    ProfileCharacte_1056_TypeVal * ProfileCharacte_1056_TypeValueIn);
  ~ProfileCharacte_1056_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ProfileCharacte_1056_TypeType;
  ProfileCharacte_1056_TypeVal * ProfileCharacte_1056_TypeValue;
};

/* ***************************************************************** */

class SphericityChara_1057_Type :
  public XmlTypeBase
{
public:
  SphericityChara_1057_Type();
  SphericityChara_1057_Type(
    MeasuredZoneRadiiType * ZoneRadiiIn,
    MeasuredPointType * ZonePointIn);
  ~SphericityChara_1057_Type();
  void printSelf(FILE * outFile);

  MeasuredZoneRadiiType * getZoneRadii();
  void setZoneRadii(MeasuredZoneRadiiType * ZoneRadiiIn);
  MeasuredPointType * getZonePoint();
  void setZonePoint(MeasuredPointType * ZonePointIn);

protected:
  MeasuredZoneRadiiType * ZoneRadii;
  MeasuredPointType * ZonePoint;
};

/* ***************************************************************** */

class StraightnessCha_1058_Type :
  public XmlTypeBase
{
public:
  StraightnessCha_1058_Type();
  StraightnessCha_1058_Type(
    StraightnessCha_1058_TypeChoicePair * StraightnessCha_1058_TypePairIn);
  ~StraightnessCha_1058_Type();
  void printSelf(FILE * outFile);

  StraightnessCha_1058_TypeChoicePair * getStraightnessCha_1058_TypePair();
  void setStraightnessCha_1058_TypePair(StraightnessCha_1058_TypeChoicePair * StraightnessCha_1058_TypePairIn);

protected:
  StraightnessCha_1058_TypeChoicePair * StraightnessCha_1058_TypePair;
};

/* ***************************************************************** */

union StraightnessCha_1058_TypeVal
{
  StraightnessCha_1068_Type * StraightnessCha_1068;
  StraightnessCha_1069_Type * StraightnessCha_1069;
};

/* ***************************************************************** */

class StraightnessCha_1058_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    StraightnessCha_1068E,
    StraightnessCha_1069E };
  StraightnessCha_1058_TypeChoicePair();
  StraightnessCha_1058_TypeChoicePair(
    whichOne StraightnessCha_1058_TypeTypeIn,
    StraightnessCha_1058_TypeVal * StraightnessCha_1058_TypeValueIn);
  ~StraightnessCha_1058_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StraightnessCha_1058_TypeType;
  StraightnessCha_1058_TypeVal * StraightnessCha_1058_TypeValue;
};

/* ***************************************************************** */

class SurfaceProfileN_1059_Type :
  public XmlTypeBase
{
public:
  SurfaceProfileN_1059_Type();
  SurfaceProfileN_1059_Type(
    SurfaceProfileN_1059_TypeChoicePair * SurfaceProfileN_1059_TypePairIn);
  ~SurfaceProfileN_1059_Type();
  void printSelf(FILE * outFile);

  SurfaceProfileN_1059_TypeChoicePair * getSurfaceProfileN_1059_TypePair();
  void setSurfaceProfileN_1059_TypePair(SurfaceProfileN_1059_TypeChoicePair * SurfaceProfileN_1059_TypePairIn);

protected:
  SurfaceProfileN_1059_TypeChoicePair * SurfaceProfileN_1059_TypePair;
};

/* ***************************************************************** */

union SurfaceProfileN_1059_TypeVal
{
  LinearValueType * ToPointOuterDisposition;
  LinearValueType * ToPointUnequallyDisposedZone;
};

/* ***************************************************************** */

class SurfaceProfileN_1059_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToPointOuterDispositionE,
    ToPointUnequallyDisposedZoneE };
  SurfaceProfileN_1059_TypeChoicePair();
  SurfaceProfileN_1059_TypeChoicePair(
    whichOne SurfaceProfileN_1059_TypeTypeIn,
    SurfaceProfileN_1059_TypeVal * SurfaceProfileN_1059_TypeValueIn);
  ~SurfaceProfileN_1059_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SurfaceProfileN_1059_TypeType;
  SurfaceProfileN_1059_TypeVal * SurfaceProfileN_1059_TypeValue;
};

/* ***************************************************************** */

class UserDefinedUnit_1060_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1060_Type();
  UserDefinedUnit_1060_Type(
    UserDefinedUnit_1060_TypeChoicePair * UserDefinedUnit_1060_TypePairIn);
  ~UserDefinedUnit_1060_Type();
  void printSelf(FILE * outFile);

  UserDefinedUnit_1060_TypeChoicePair * getUserDefinedUnit_1060_TypePair();
  void setUserDefinedUnit_1060_TypePair(UserDefinedUnit_1060_TypeChoicePair * UserDefinedUnit_1060_TypePairIn);

protected:
  UserDefinedUnit_1060_TypeChoicePair * UserDefinedUnit_1060_TypePair;
};

/* ***************************************************************** */

union UserDefinedUnit_1060_TypeVal
{
  UserDefinedUnit_1070_Type * UserDefinedUnit_1070;
  UserDefinedUnitValueType * MinValue;
};

/* ***************************************************************** */

class UserDefinedUnit_1060_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedUnit_1070E,
    MinValueE };
  UserDefinedUnit_1060_TypeChoicePair();
  UserDefinedUnit_1060_TypeChoicePair(
    whichOne UserDefinedUnit_1060_TypeTypeIn,
    UserDefinedUnit_1060_TypeVal * UserDefinedUnit_1060_TypeValueIn);
  ~UserDefinedUnit_1060_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedUnit_1060_TypeType;
  UserDefinedUnit_1060_TypeVal * UserDefinedUnit_1060_TypeValue;
};

/* ***************************************************************** */

class WeldFilletChara_1061_Type :
  public XmlTypeBase
{
public:
  WeldFilletChara_1061_Type();
  WeldFilletChara_1061_Type(
    WeldFilletChara_1061_TypeChoicePair * WeldFilletChara_1061_TypePairIn);
  ~WeldFilletChara_1061_Type();
  void printSelf(FILE * outFile);

  WeldFilletChara_1061_TypeChoicePair * getWeldFilletChara_1061_TypePair();
  void setWeldFilletChara_1061_TypePair(WeldFilletChara_1061_TypeChoicePair * WeldFilletChara_1061_TypePairIn);

protected:
  WeldFilletChara_1061_TypeChoicePair * WeldFilletChara_1061_TypePair;
};

/* ***************************************************************** */

union WeldFilletChara_1061_TypeVal
{
  WeldFilletBothSidesType * BothSides;
  WeldFilletOneSideType * OneSide;
};

/* ***************************************************************** */

class WeldFilletChara_1061_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BothSidesE,
    OneSideE };
  WeldFilletChara_1061_TypeChoicePair();
  WeldFilletChara_1061_TypeChoicePair(
    whichOne WeldFilletChara_1061_TypeTypeIn,
    WeldFilletChara_1061_TypeVal * WeldFilletChara_1061_TypeValueIn);
  ~WeldFilletChara_1061_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldFilletChara_1061_TypeType;
  WeldFilletChara_1061_TypeVal * WeldFilletChara_1061_TypeValue;
};

/* ***************************************************************** */

class WeldFilletChara_1062_Type :
  public XmlTypeBase
{
public:
  WeldFilletChara_1062_Type();
  WeldFilletChara_1062_Type(
    WeldFilletChara_1062_TypeChoicePair * WeldFilletChara_1062_TypePairIn);
  ~WeldFilletChara_1062_Type();
  void printSelf(FILE * outFile);

  WeldFilletChara_1062_TypeChoicePair * getWeldFilletChara_1062_TypePair();
  void setWeldFilletChara_1062_TypePair(WeldFilletChara_1062_TypeChoicePair * WeldFilletChara_1062_TypePairIn);

protected:
  WeldFilletChara_1062_TypeChoicePair * WeldFilletChara_1062_TypePair;
};

/* ***************************************************************** */

union WeldFilletChara_1062_TypeVal
{
  WeldFilletBothSidesType * BothSides;
  WeldFilletOneSideType * OneSide;
};

/* ***************************************************************** */

class WeldFilletChara_1062_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BothSidesE,
    OneSideE };
  WeldFilletChara_1062_TypeChoicePair();
  WeldFilletChara_1062_TypeChoicePair(
    whichOne WeldFilletChara_1062_TypeTypeIn,
    WeldFilletChara_1062_TypeVal * WeldFilletChara_1062_TypeValueIn);
  ~WeldFilletChara_1062_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldFilletChara_1062_TypeType;
  WeldFilletChara_1062_TypeVal * WeldFilletChara_1062_TypeValue;
};

/* ***************************************************************** */

class WeldGrooveOneSi_1063_Type :
  public XmlTypeBase
{
public:
  WeldGrooveOneSi_1063_Type();
  WeldGrooveOneSi_1063_Type(
    WeldGrooveOneSideParametersType * SideParametersIn,
    WeldSupplementarySymbolEnumType * SupplementarySymbolIn);
  ~WeldGrooveOneSi_1063_Type();
  void printSelf(FILE * outFile);

  WeldGrooveOneSideParametersType * getSideParameters();
  void setSideParameters(WeldGrooveOneSideParametersType * SideParametersIn);
  WeldSupplementarySymbolEnumType * getSupplementarySymbol();
  void setSupplementarySymbol(WeldSupplementarySymbolEnumType * SupplementarySymbolIn);

protected:
  WeldGrooveOneSideParametersType * SideParameters;
  WeldSupplementarySymbolEnumType * SupplementarySymbol;
};

/* ***************************************************************** */

class CircularityChar_1064_Type :
  public XmlTypeBase
{
public:
  CircularityChar_1064_Type();
  CircularityChar_1064_Type(
    CircularityChar_1064_TypeChoicePair * CircularityChar_1064_TypePairIn);
  ~CircularityChar_1064_Type();
  void printSelf(FILE * outFile);

  CircularityChar_1064_TypeChoicePair * getCircularityChar_1064_TypePair();
  void setCircularityChar_1064_TypePair(CircularityChar_1064_TypeChoicePair * CircularityChar_1064_TypePairIn);

protected:
  CircularityChar_1064_TypeChoicePair * CircularityChar_1064_TypePair;
};

/* ***************************************************************** */

union CircularityChar_1064_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
};

/* ***************************************************************** */

class CircularityChar_1064_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE };
  CircularityChar_1064_TypeChoicePair();
  CircularityChar_1064_TypeChoicePair(
    whichOne CircularityChar_1064_TypeTypeIn,
    CircularityChar_1064_TypeVal * CircularityChar_1064_TypeValueIn);
  ~CircularityChar_1064_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularityChar_1064_TypeType;
  CircularityChar_1064_TypeVal * CircularityChar_1064_TypeValue;
};

/* ***************************************************************** */

class CylindricityCha_1065_Type :
  public XmlTypeBase
{
public:
  CylindricityCha_1065_Type();
  CylindricityCha_1065_Type(
    CylindricityCha_1065_TypeChoicePair * CylindricityCha_1065_TypePairIn);
  ~CylindricityCha_1065_Type();
  void printSelf(FILE * outFile);

  CylindricityCha_1065_TypeChoicePair * getCylindricityCha_1065_TypePair();
  void setCylindricityCha_1065_TypePair(CylindricityCha_1065_TypeChoicePair * CylindricityCha_1065_TypePairIn);

protected:
  CylindricityCha_1065_TypeChoicePair * CylindricityCha_1065_TypePair;
};

/* ***************************************************************** */

union CylindricityCha_1065_TypeVal
{
  ToleranceZonePerUnitAngleType * ToleranceZonePerUnitAngle;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitArcLength;
  ToleranceZonePerUnitPolarAreaType * ToleranceZonePerUnitPolarArea;
  ToleranceZonePerUnitAreaType * ToleranceZonePerUnitArea;
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLength;
};

/* ***************************************************************** */

class CylindricityCha_1065_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceZonePerUnitAngleE,
    ToleranceZonePerUnitArcLengthE,
    ToleranceZonePerUnitPolarAreaE,
    ToleranceZonePerUnitAreaE,
    ToleranceZonePerUnitLengthE };
  CylindricityCha_1065_TypeChoicePair();
  CylindricityCha_1065_TypeChoicePair(
    whichOne CylindricityCha_1065_TypeTypeIn,
    CylindricityCha_1065_TypeVal * CylindricityCha_1065_TypeValueIn);
  ~CylindricityCha_1065_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricityCha_1065_TypeType;
  CylindricityCha_1065_TypeVal * CylindricityCha_1065_TypeValue;
};

/* ***************************************************************** */

class FlatnessCharact_1066_Type :
  public XmlTypeBase
{
public:
  FlatnessCharact_1066_Type();
  FlatnessCharact_1066_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ToleranceZonePerUnitAreaType * ToleranceZonePerUnitAreaIn);
  ~FlatnessCharact_1066_Type();
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

/* ***************************************************************** */

class FlatnessCharact_1067_Type :
  public XmlTypeBase
{
public:
  FlatnessCharact_1067_Type();
  FlatnessCharact_1067_Type(
    ToleranceZonePerUnitAreaType * ToleranceZonePerUnitAreaIn);
  ~FlatnessCharact_1067_Type();
  void printSelf(FILE * outFile);

  ToleranceZonePerUnitAreaType * getToleranceZonePerUnitArea();
  void setToleranceZonePerUnitArea(ToleranceZonePerUnitAreaType * ToleranceZonePerUnitAreaIn);

protected:
  ToleranceZonePerUnitAreaType * ToleranceZonePerUnitArea;
};

/* ***************************************************************** */

class StraightnessCha_1068_Type :
  public XmlTypeBase
{
public:
  StraightnessCha_1068_Type();
  StraightnessCha_1068_Type(
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLengthIn);
  ~StraightnessCha_1068_Type();
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

/* ***************************************************************** */

class StraightnessCha_1069_Type :
  public XmlTypeBase
{
public:
  StraightnessCha_1069_Type();
  StraightnessCha_1069_Type(
    ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLengthIn);
  ~StraightnessCha_1069_Type();
  void printSelf(FILE * outFile);

  ToleranceZonePerUnitLengthType * getToleranceZonePerUnitLength();
  void setToleranceZonePerUnitLength(ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLengthIn);

protected:
  ToleranceZonePerUnitLengthType * ToleranceZonePerUnitLength;
};

/* ***************************************************************** */

class UserDefinedUnit_1070_Type :
  public XmlTypeBase
{
public:
  UserDefinedUnit_1070_Type();
  UserDefinedUnit_1070_Type(
    UserDefinedUnitValueType * MaxValueIn,
    UserDefinedUnitValueType * MinValueIn);
  ~UserDefinedUnit_1070_Type();
  void printSelf(FILE * outFile);

  UserDefinedUnitValueType * getMaxValue();
  void setMaxValue(UserDefinedUnitValueType * MaxValueIn);
  UserDefinedUnitValueType * getMinValue();
  void setMinValue(UserDefinedUnitValueType * MinValueIn);

protected:
  UserDefinedUnitValueType * MaxValue;
  UserDefinedUnitValueType * MinValue;
};

/* ***************************************************************** */

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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
  virtual ~AngularCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  AngularCharacteristicDefinitionBaseTypeChoicePair * getAngularCharacteristicDefinitionBaseTypeChoicePair();
  void setAngularCharacteristicDefinitionBaseTypeChoicePair(AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);

protected:
  AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union AngularCharacteristicDefinitionBaseTypeVal
{
  AngularToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class AngularCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  AngularCharacteristicDefinitionBaseTypeChoicePair();
  AngularCharacteristicDefinitionBaseTypeChoicePair(
    whichOne AngularCharacteristicDefinitionBaseTypeTypeIn,
    AngularCharacteristicDefinitionBaseTypeVal * AngularCharacteristicDefinitionBaseTypeValueIn);
  ~AngularCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularCharacteristicDefinitionBaseTypeType;
  AngularCharacteristicDefinitionBaseTypeVal * AngularCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~AngularCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~AngularCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~AngularCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AngularValueType * getTargetValue();
  void setTargetValue(AngularValueType * TargetValueIn);

protected:
  AngularValueType * TargetValue;
};

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    OrientationChar_1054_Type * OrientationChar_1054In);
  ~AngularityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    AreaCharacteristicDefinitionBaseTypeChoicePair * AreaCharacteristicDefinitionBaseTypePairIn);
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
    AreaCharacteristicDefinitionBaseTypeChoicePair * AreaCharacteristicDefinitionBaseTypePairIn);
  virtual ~AreaCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  AreaCharacteristicDefinitionBaseTypeChoicePair * getAreaCharacteristicDefinitionBaseTypeChoicePair();
  void setAreaCharacteristicDefinitionBaseTypeChoicePair(AreaCharacteristicDefinitionBaseTypeChoicePair * AreaCharacteristicDefinitionBaseTypePairIn);

protected:
  AreaCharacteristicDefinitionBaseTypeChoicePair * AreaCharacteristicDefinitionBaseTypePair;
};

/* ***************************************************************** */

union AreaCharacteristicDefinitionBaseTypeVal
{
  AreaToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class AreaCharacteristicDefinitionBaseTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  AreaCharacteristicDefinitionBaseTypeChoicePair();
  AreaCharacteristicDefinitionBaseTypeChoicePair(
    whichOne AreaCharacteristicDefinitionBaseTypeTypeIn,
    AreaCharacteristicDefinitionBaseTypeVal * AreaCharacteristicDefinitionBaseTypeValueIn);
  ~AreaCharacteristicDefinitionBaseTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AreaCharacteristicDefinitionBaseTypeType;
  AreaCharacteristicDefinitionBaseTypeVal * AreaCharacteristicDefinitionBaseTypeValue;
};

/* ***************************************************************** */

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
  virtual ~AreaCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~AreaCharacteristicMeasurementBaseType();
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

/* ***************************************************************** */

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
  virtual ~AreaCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AreaValueType * getTargetValue();
  void setTargetValue(AreaValueType * TargetValueIn);

protected:
  AreaValueType * TargetValue;
};

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~ChordCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~ConicalTaperCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
  virtual ~CoordinateCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~CoordinateCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~CoordinateCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TypeOfCoordinatesType * getTypeOfCoordinates();
  void setTypeOfCoordinates(TypeOfCoordinatesType * TypeOfCoordinatesIn);

protected:
  TypeOfCoordinatesType * TypeOfCoordinates;
};

/* ***************************************************************** */

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
  virtual ~CoordinateCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~CurveLengthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~DepthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    DiameterCharacteristicDefinitionTypeChoicePair * DiameterCharacteristicDefinitionTypePairIn);
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
    DiameterCharacteristicDefinitionTypeChoicePair * DiameterCharacteristicDefinitionTypePairIn);
  ~DiameterCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  DiameterCharacteristicDefinitionTypeChoicePair * getDiameterCharacteristicDefinitionTypeChoicePair();
  void setDiameterCharacteristicDefinitionTypeChoicePair(DiameterCharacteristicDefinitionTypeChoicePair * DiameterCharacteristicDefinitionTypePairIn);

protected:
  DiameterCharacteristicDefinitionTypeChoicePair * DiameterCharacteristicDefinitionTypePair;
};

/* ***************************************************************** */

union DiameterCharacteristicDefinitionTypeVal
{
  LinearToleranceType * Tolerance;
  LimitsAndFitsSpecificationType * LimitsAndFitsSpecification;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class DiameterCharacteristicDefinitionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    LimitsAndFitsSpecificationE,
    NonToleranceE };
  DiameterCharacteristicDefinitionTypeChoicePair();
  DiameterCharacteristicDefinitionTypeChoicePair(
    whichOne DiameterCharacteristicDefinitionTypeTypeIn,
    DiameterCharacteristicDefinitionTypeVal * DiameterCharacteristicDefinitionTypeValueIn);
  ~DiameterCharacteristicDefinitionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DiameterCharacteristicDefinitionTypeType;
  DiameterCharacteristicDefinitionTypeVal * DiameterCharacteristicDefinitionTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~DistanceBetweenCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~DistanceFromCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~FlatTaperCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn);
  virtual ~FormCharacteristicDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~FormCharacteristicItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~FormCharacteristicMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
  virtual ~FormCharacteristicNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~HeightCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
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
    LinearCharacteristicDefinitionBaseTypeChoicePair * LinearCharacteristicDefinitionBaseTypePairIn);
  ~LengthCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    LinearCoordinateCharacteristicDefinitionTypeChoicePair * LinearCoordinateCharacteristicDefinitionTypePairIn);
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
    LinearCoordinateCharacteristicDefinitionTypeChoicePair * LinearCoordinateCharacteristicDefinitionTypePairIn);
  ~LinearCoordinateCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  LinearCoordinateCharacteristicDefinitionTypeChoicePair * getLinearCoordinateCharacteristicDefinitionTypeChoicePair();
  void setLinearCoordinateCharacteristicDefinitionTypeChoicePair(LinearCoordinateCharacteristicDefinitionTypeChoicePair * LinearCoordinateCharacteristicDefinitionTypePairIn);

protected:
  LinearCoordinateCharacteristicDefinitionTypeChoicePair * LinearCoordinateCharacteristicDefinitionTypePair;
};

/* ***************************************************************** */

union LinearCoordinateCharacteristicDefinitionTypeVal
{
  LinearToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class LinearCoordinateCharacteristicDefinitionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  LinearCoordinateCharacteristicDefinitionTypeChoicePair();
  LinearCoordinateCharacteristicDefinitionTypeChoicePair(
    whichOne LinearCoordinateCharacteristicDefinitionTypeTypeIn,
    LinearCoordinateCharacteristicDefinitionTypeVal * LinearCoordinateCharacteristicDefinitionTypeValueIn);
  ~LinearCoordinateCharacteristicDefinitionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearCoordinateCharacteristicDefinitionTypeType;
  LinearCoordinateCharacteristicDefinitionTypeVal * LinearCoordinateCharacteristicDefinitionTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    LinearValueType * ToleranceValueIn,
    LinearDualValueType * ToleranceDualValueIn,
    ProfileCharacte_1056_Type * ProfileCharacte_1056In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    SphericityChara_1057_Type * SphericityChara_1057In);
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
    SphericityChara_1057_Type * SphericityChara_1057In);
  ~SphericityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SphericityChara_1057_Type * getSphericityChara_1057();
  void setSphericityChara_1057(SphericityChara_1057_Type * SphericityChara_1057In);

protected:
  SphericityChara_1057_Type * SphericityChara_1057;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    StraightnessCha_1058_Type * StraightnessCha_1058In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    StraightnessCha_1058_Type * StraightnessCha_1058In,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    StraightnessZoneShapeType * ZoneShapeIn,
    LinearValueType * MaximumToleranceValueIn);
  ~StraightnessCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  StraightnessCha_1058_Type * getStraightnessCha_1058();
  void setStraightnessCha_1058(StraightnessCha_1058_Type * StraightnessCha_1058In);
  MaterialModifierEnumType * getMaterialCondition();
  void setMaterialCondition(MaterialModifierEnumType * MaterialConditionIn);
  QIFReferenceType * getSizeCharacteristicDefinitionId();
  void setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn);
  StraightnessZoneShapeType * getZoneShape();
  void setZoneShape(StraightnessZoneShapeType * ZoneShapeIn);
  LinearValueType * getMaximumToleranceValue();
  void setMaximumToleranceValue(LinearValueType * MaximumToleranceValueIn);

protected:
  StraightnessCha_1058_Type * StraightnessCha_1058;
  MaterialModifierEnumType * MaterialCondition;
  QIFReferenceType * SizeCharacteristicDefinitionId;
  StraightnessZoneShapeType * ZoneShape;
  LinearValueType * MaximumToleranceValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn,
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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedAngularCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    AreaCharacteristicDefinitionBaseTypeChoicePair * AreaCharacteristicDefinitionBaseTypePairIn,
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
    AreaCharacteristicDefinitionBaseTypeChoicePair * AreaCharacteristicDefinitionBaseTypePairIn,
    XmlString * WhatToMeasureIn);
  ~UserDefinedAreaCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getWhatToMeasure();
  void setWhatToMeasure(XmlString * WhatToMeasureIn);

protected:
  XmlString * WhatToMeasure;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldBevelCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldBevelCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

class WeldFilletOneSideType :
  public WeldOneSideParametersBaseType
{
public:
  WeldFilletOneSideType();
  WeldFilletOneSideType(
    WeldFinishingType * FinishingIn,
    WeldFilletOneSideTypeChoicePair * WeldFilletOneSideTypePairIn);
  ~WeldFilletOneSideType();
  void printSelf(FILE * outFile);
  WeldFilletOneSideTypeChoicePair * getWeldFilletOneSideTypeChoicePair();
  void setWeldFilletOneSideTypeChoicePair(WeldFilletOneSideTypeChoicePair * WeldFilletOneSideTypePairIn);

protected:
  WeldFilletOneSideTypeChoicePair * WeldFilletOneSideTypePair;
};

/* ***************************************************************** */

union WeldFilletOneSideTypeVal
{
  WeldFilletEqualLegLengthType * EqualLegLength;
  WeldFilletUnequalLegLengthType * UnEqualLegLength;
};

/* ***************************************************************** */

class WeldFilletOneSideTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    EqualLegLengthE,
    UnEqualLegLengthE };
  WeldFilletOneSideTypeChoicePair();
  WeldFilletOneSideTypeChoicePair(
    whichOne WeldFilletOneSideTypeTypeIn,
    WeldFilletOneSideTypeVal * WeldFilletOneSideTypeValueIn);
  ~WeldFilletOneSideTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne WeldFilletOneSideTypeType;
  WeldFilletOneSideTypeVal * WeldFilletOneSideTypeValue;
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldFlareBevelCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldFlareBevelCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
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
    WeldGrooveCharacteristicMeasurementTypeChoicePair * WeldGrooveCharacteristicMeasurementTypePairIn);
  ~WeldFlareVCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
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
    WeldGrooveCharacteristicNominalTypeChoicePair * WeldGrooveCharacteristicNominalTypePairIn);
  ~WeldFlareVCharacteristicNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
  ~AngleBetweenCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
  ~AngleCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
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
    AngularCharacteristicDefinitionBaseTypeChoicePair * AngularCharacteristicDefinitionBaseTypePairIn);
  ~AngleFromCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    AngularCoordinateCharacteristicDefinitionTypeChoicePair * AngularCoordinateCharacteristicDefinitionTypePairIn);
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
    AngularCoordinateCharacteristicDefinitionTypeChoicePair * AngularCoordinateCharacteristicDefinitionTypePairIn);
  ~AngularCoordinateCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  AngularCoordinateCharacteristicDefinitionTypeChoicePair * getAngularCoordinateCharacteristicDefinitionTypeChoicePair();
  void setAngularCoordinateCharacteristicDefinitionTypeChoicePair(AngularCoordinateCharacteristicDefinitionTypeChoicePair * AngularCoordinateCharacteristicDefinitionTypePairIn);

protected:
  AngularCoordinateCharacteristicDefinitionTypeChoicePair * AngularCoordinateCharacteristicDefinitionTypePair;
};

/* ***************************************************************** */

union AngularCoordinateCharacteristicDefinitionTypeVal
{
  AngularToleranceType * Tolerance;
  NonToleranceEnumType * NonTolerance;
};

/* ***************************************************************** */

class AngularCoordinateCharacteristicDefinitionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToleranceE,
    NonToleranceE };
  AngularCoordinateCharacteristicDefinitionTypeChoicePair();
  AngularCoordinateCharacteristicDefinitionTypeChoicePair(
    whichOne AngularCoordinateCharacteristicDefinitionTypeTypeIn,
    AngularCoordinateCharacteristicDefinitionTypeVal * AngularCoordinateCharacteristicDefinitionTypeValueIn);
  ~AngularCoordinateCharacteristicDefinitionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularCoordinateCharacteristicDefinitionTypeType;
  AngularCoordinateCharacteristicDefinitionTypeVal * AngularCoordinateCharacteristicDefinitionTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CircularityCharacteristicDefinitionTypeChoicePair * CircularityCharacteristicDefinitionTypePairIn);
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CircularityCharacteristicDefinitionTypeChoicePair * CircularityCharacteristicDefinitionTypePairIn);
  ~CircularityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  CircularityCharacteristicDefinitionTypeChoicePair * getCircularityCharacteristicDefinitionTypeChoicePair();
  void setCircularityCharacteristicDefinitionTypeChoicePair(CircularityCharacteristicDefinitionTypeChoicePair * CircularityCharacteristicDefinitionTypePairIn);

protected:
  CircularityCharacteristicDefinitionTypeChoicePair * CircularityCharacteristicDefinitionTypePair;
};

/* ***************************************************************** */

union CircularityCharacteristicDefinitionTypeVal
{
  CircularityChar_1041_Type * CircularityChar_1041;
  CircularityChar_1042_Type * CircularityChar_1042;
};

/* ***************************************************************** */

class CircularityCharacteristicDefinitionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CircularityChar_1041E,
    CircularityChar_1042E };
  CircularityCharacteristicDefinitionTypeChoicePair();
  CircularityCharacteristicDefinitionTypeChoicePair(
    whichOne CircularityCharacteristicDefinitionTypeTypeIn,
    CircularityCharacteristicDefinitionTypeVal * CircularityCharacteristicDefinitionTypeValueIn);
  ~CircularityCharacteristicDefinitionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularityCharacteristicDefinitionTypeType;
  CircularityCharacteristicDefinitionTypeVal * CircularityCharacteristicDefinitionTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    CircularityChar_1043_Type * CircularityChar_1043In);
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
    CircularityChar_1043_Type * CircularityChar_1043In);
  ~CircularityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getMaxCircularity();
  void setMaxCircularity(MeasuredLinearValueType * MaxCircularityIn);
  CircularityChar_1043_Type * getCircularityChar_1043();
  void setCircularityChar_1043(CircularityChar_1043_Type * CircularityChar_1043In);

protected:
  MeasuredLinearValueType * MaxCircularity;
  CircularityChar_1043_Type * CircularityChar_1043;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CylindricityCharacteristicDefinitionTypeChoicePair * CylindricityCharacteristicDefinitionTypePairIn);
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    CylindricityCharacteristicDefinitionTypeChoicePair * CylindricityCharacteristicDefinitionTypePairIn);
  ~CylindricityCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
  CylindricityCharacteristicDefinitionTypeChoicePair * getCylindricityCharacteristicDefinitionTypeChoicePair();
  void setCylindricityCharacteristicDefinitionTypeChoicePair(CylindricityCharacteristicDefinitionTypeChoicePair * CylindricityCharacteristicDefinitionTypePairIn);

protected:
  CylindricityCharacteristicDefinitionTypeChoicePair * CylindricityCharacteristicDefinitionTypePair;
};

/* ***************************************************************** */

union CylindricityCharacteristicDefinitionTypeVal
{
  CylindricityCha_1046_Type * CylindricityCha_1046;
  CylindricityCha_1047_Type * CylindricityCha_1047;
};

/* ***************************************************************** */

class CylindricityCharacteristicDefinitionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CylindricityCha_1046E,
    CylindricityCha_1047E };
  CylindricityCharacteristicDefinitionTypeChoicePair();
  CylindricityCharacteristicDefinitionTypeChoicePair(
    whichOne CylindricityCharacteristicDefinitionTypeTypeIn,
    CylindricityCharacteristicDefinitionTypeVal * CylindricityCharacteristicDefinitionTypeValueIn);
  ~CylindricityCharacteristicDefinitionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricityCharacteristicDefinitionTypeType;
  CylindricityCharacteristicDefinitionTypeVal * CylindricityCharacteristicDefinitionTypeValue;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    CylindricityCha_1048_Type * CylindricityCha_1048In);
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
    CylindricityCha_1048_Type * CylindricityCha_1048In);
  ~CylindricityCharacteristicMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getMaxCylindricity();
  void setMaxCylindricity(MeasuredLinearValueType * MaxCylindricityIn);
  CylindricityCha_1048_Type * getCylindricityCha_1048();
  void setCylindricityCha_1048(CylindricityCha_1048_Type * CylindricityCha_1048In);

protected:
  MeasuredLinearValueType * MaxCylindricity;
  CylindricityCha_1048_Type * CylindricityCha_1048;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    FlatnessCharact_1049_Type * FlatnessCharact_1049In,
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
    GeometricCharac_1050_Type * GeometricCharac_1050In,
    DirectionFeatureType * DirectionFeatureIn,
    CollectionPlaneType * CollectionPlaneIn,
    IntersectionPlaneType * IntersectionPlaneIn,
    OrientationPlaneType * OrientationPlaneIn,
    FlatnessCharact_1049_Type * FlatnessCharact_1049In,
    MaterialModifierEnumType * MaterialConditionIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    LinearValueType * MaximumToleranceValueIn,
    XmlBoolean * NotConvexIn);
  ~FlatnessCharacteristicDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  FlatnessCharact_1049_Type * getFlatnessCharact_1049();
  void setFlatnessCharact_1049(FlatnessCharact_1049_Type * FlatnessCharact_1049In);
  MaterialModifierEnumType * getMaterialCondition();
  void setMaterialCondition(MaterialModifierEnumType * MaterialConditionIn);
  QIFReferenceType * getSizeCharacteristicDefinitionId();
  void setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn);
  LinearValueType * getMaximumToleranceValue();
  void setMaximumToleranceValue(LinearValueType * MaximumToleranceValueIn);
  XmlBoolean * getNotConvex();
  void setNotConvex(XmlBoolean * NotConvexIn);

protected:
  FlatnessCharact_1049_Type * FlatnessCharact_1049;
  MaterialModifierEnumType * MaterialCondition;
  QIFReferenceType * SizeCharacteristicDefinitionId;
  LinearValueType * MaximumToleranceValue;
  XmlBoolean * NotConvex;
};

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

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

/* ***************************************************************** */

#endif // CHARACTERISTICS_HH
