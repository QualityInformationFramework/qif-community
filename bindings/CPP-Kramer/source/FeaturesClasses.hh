/* ***************************************************************** */

#ifndef FEATURES_HH
#define FEATURES_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "IntermediatesPMIClasses.hh"

/* ***************************************************************** */

class BaseFeaturePointListType;
class BaseFeaturePointSetType;
class BaseFeaturePointSetTypeLisd;
class CircleBestFitType;
class CircleCastType;
class CircleCheckedFeatureType;
class CircleCheckedType;
class CircleCheckedTypeChoicePair;
class CircleConstructionMethodType;
class CircleConstructionMethodTypeChoicePair;
class CircleCopyType;
class CircleFeatureDefinitionType;
class CircleFeatureItemType;
class CircleFeatureMeasurementType;
class CircleFeatureNominalType;
class CircleFromConeType;
class CircleFromScanType;
class CircleIntersectionType;
class CircleMeasurementDeterminationType;
class CircleMeasurementDeterminationTypeChoicePair;
class CircleProjectionType;
class CircleRecompType;
class CircleTangentThroughType;
class CircleTangentType;
class CircleTransformType;
class CircularArcBestFitType;
class CircularArcCastType;
class CircularArcCheckedFeatureType;
class CircularArcCheckedType;
class CircularArcCheckedTypeChoicePair;
class CircularArcConstructionMethodType;
class CircularArcConstructionMethodTypeChoicePair;
class CircularArcCopyType;
class CircularArcExtractType;
class CircularArcFeatureDefinitionType;
class CircularArcFeatureItemType;
class CircularArcFeatureMeasurementType;
class CircularArcFeatureNominalType;
class CircularArcFromScanType;
class CircularArcIntersectionType;
class CircularArcMeasurementDeterminationType;
class CircularArcMeasurementDeterminationTypeChoicePair;
class CircularArcProjectionType;
class CircularArcRecompType;
class CircularArcTransformType;
class ConeBestFitType;
class ConeCastType;
class ConeCheckedFeatureType;
class ConeCheckedType;
class ConeCheckedTypeChoicePair;
class ConeConstructionMethodType;
class ConeConstructionMethodTypeChoicePair;
class ConeCopyType;
class ConeFeatureDefinitionType;
class ConeFeatureItemType;
class ConeFeatureMeasurementType;
class ConeFeatureNominalType;
class ConeFromScanType;
class ConeMeasurementDeterminationType;
class ConeMeasurementDeterminationTypeChoicePair;
class ConeRecompType;
class ConeTransformType;
class ConicalSegmentBestFitType;
class ConicalSegmentCastType;
class ConicalSegmentCheckedFeatureType;
class ConicalSegmentCheckedType;
class ConicalSegmentCheckedTypeChoicePair;
class ConicalSegmentConstructionMethodType;
class ConicalSegmentConstructionMethodTypeChoicePair;
class ConicalSegmentCopyType;
class ConicalSegmentFeatureDefinitionType;
class ConicalSegmentFeatureItemType;
class ConicalSegmentFeatureMeasurementType;
class ConicalSegmentFeatureNominalType;
class ConicalSegmentMeasurementDeterminationType;
class ConicalSegmentMeasurementDeterminationTypeChoicePair;
class ConicalSegmentRecompType;
class ConicalSegmentTransformType;
class ConstructionMethodBaseType;
class CurveFeatureDefinitionBaseType;
class CurveFeatureItemBaseType;
class CurveFeatureMeasurementBaseType;
class CurveFeatureNominalBaseType;
class CylinderBestFitType;
class CylinderCastType;
class CylinderCheckedFeatureType;
class CylinderCheckedType;
class CylinderCheckedTypeChoicePair;
class CylinderConstructionMethodType;
class CylinderConstructionMethodTypeChoicePair;
class CylinderCopyType;
class CylinderFeatureDefinitionType;
class CylinderFeatureItemType;
class CylinderFeatureMeasurementType;
class CylinderFeatureNominalType;
class CylinderFromScanType;
class CylinderMeasurementDeterminationType;
class CylinderMeasurementDeterminationTypeChoicePair;
class CylinderRecompType;
class CylinderTransformType;
class CylindricalSegmentBestFitType;
class CylindricalSegmentCastType;
class CylindricalSegmentCheckedFeatureType;
class CylindricalSegmentCheckedType;
class CylindricalSegmentCheckedTypeChoicePair;
class CylindricalSegmentConstructionMethodType;
class CylindricalSegmentConstructionMethodTypeChoicePair;
class CylindricalSegmentCopyType;
class CylindricalSegmentFeatureDefinitionType;
class CylindricalSegmentFeatureItemType;
class CylindricalSegmentFeatureMeasurementType;
class CylindricalSegmentFeatureNominalType;
class CylindricalSegmentMeasurementDeterminationType;
class CylindricalSegmentMeasurementDeterminationTypeChoicePair;
class CylindricalSegmentRecompType;
class CylindricalSegmentTransformType;
class DefiningPointsMeasurementType;
class DefiningPointsNominalType;
class EdgePointCastType;
class EdgePointCheckedFeatureType;
class EdgePointCheckedType;
class EdgePointCheckedTypeChoicePair;
class EdgePointConstructionMethodType;
class EdgePointConstructionMethodTypeChoicePair;
class EdgePointCopyType;
class EdgePointFeatureDefinitionType;
class EdgePointFeatureItemType;
class EdgePointFeatureMeasurementType;
class EdgePointFeatureNominalType;
class EdgePointFromScanType;
class EdgePointMeasurementDeterminationType;
class EdgePointMeasurementDeterminationTypeChoicePair;
class EdgePointTransformType;
class EllipseBestFitType;
class EllipseCastType;
class EllipseCheckedFeatureType;
class EllipseCheckedType;
class EllipseCheckedTypeChoicePair;
class EllipseConstructionMethodType;
class EllipseConstructionMethodTypeChoicePair;
class EllipseCopyType;
class EllipseFeatureDefinitionType;
class EllipseFeatureItemType;
class EllipseFeatureMeasurementType;
class EllipseFeatureNominalType;
class EllipseFromScanType;
class EllipseIntersectionType;
class EllipseMeasurementDeterminationType;
class EllipseMeasurementDeterminationTypeChoicePair;
class EllipseProjectionType;
class EllipseRecompType;
class EllipseTransformType;
class EllipticalArcBestFitType;
class EllipticalArcCastType;
class EllipticalArcCheckedFeatureType;
class EllipticalArcCheckedType;
class EllipticalArcCheckedTypeChoicePair;
class EllipticalArcConstructionMethodType;
class EllipticalArcConstructionMethodTypeChoicePair;
class EllipticalArcCopyType;
class EllipticalArcFeatureDefinitionType;
class EllipticalArcFeatureItemType;
class EllipticalArcFeatureMeasurementType;
class EllipticalArcFeatureNominalType;
class EllipticalArcFromScanType;
class EllipticalArcIntersectionType;
class EllipticalArcMeasurementDeterminationType;
class EllipticalArcMeasurementDeterminationTypeChoicePair;
class EllipticalArcProjectionType;
class EllipticalArcRecompType;
class EllipticalArcTransformType;
class ElongatedCircleBestFitType;
class ElongatedCircleCastType;
class ElongatedCircleCheckedFeatureType;
class ElongatedCircleCheckedType;
class ElongatedCircleCheckedTypeChoicePair;
class ElongatedCircleConstructionMethodType;
class ElongatedCircleConstructionMethodTypeChoicePair;
class ElongatedCircleCopyType;
class ElongatedCircleFeatureDefinitionType;
class ElongatedCircleFeatureItemType;
class ElongatedCircleFeatureMeasurementType;
class ElongatedCircleFeatureNominalType;
class ElongatedCircleMeasurementDeterminationType;
class ElongatedCircleMeasurementDeterminationTypeChoicePair;
class ElongatedCircleRecompType;
class ElongatedCircleTransformType;
class ElongatedCylinderBestFitType;
class ElongatedCylinderCastType;
class ElongatedCylinderCheckedFeatureType;
class ElongatedCylinderCheckedType;
class ElongatedCylinderCheckedTypeChoicePair;
class ElongatedCylinderConstructionMethodType;
class ElongatedCylinderConstructionMethodTypeChoicePair;
class ElongatedCylinderCopyType;
class ElongatedCylinderFeatureDefinitionType;
class ElongatedCylinderFeatureItemType;
class ElongatedCylinderFeatureMeasurementType;
class ElongatedCylinderFeatureNominalType;
class ElongatedCylinderMeasurementDeterminationType;
class ElongatedCylinderMeasurementDeterminationTypeChoicePair;
class ElongatedCylinderRecompType;
class ElongatedCylinderTransformType;
class ExtrudedCrossSectionBestFitType;
class ExtrudedCrossSectionCastType;
class ExtrudedCrossSectionCheckedFeatureType;
class ExtrudedCrossSectionCheckedType;
class ExtrudedCrossSectionCheckedTypeChoicePair;
class ExtrudedCrossSectionConstructionMethodType;
class ExtrudedCrossSectionConstructionMethodTypeChoicePair;
class ExtrudedCrossSectionCopyType;
class ExtrudedCrossSectionFeatureDefinitionType;
class ExtrudedCrossSectionFeatureItemType;
class ExtrudedCrossSectionFeatureMeasurementType;
class ExtrudedCrossSectionFeatureNominalType;
class ExtrudedCrossSectionMeasurementDeterminationType;
class ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair;
class ExtrudedCrossSectionRecompType;
class ExtrudedCrossSectionTransformType;
class FeatureAspectsListsType;
class FeatureBaseType;
class FeatureDefinitionBaseType;
class FeatureDefinitionBaseTypeLisd;
class FeatureDefinitionsType;
class FeatureItemBaseType;
class FeatureItemBaseTypeLisd;
class FeatureItemsType;
class FeatureMeasurementBaseType;
class FeatureMeasurementBaseTypeLisd;
class FeatureMeasurementsType;
class FeatureNominalBaseType;
class FeatureNominalBaseTypeLisd;
class FeatureNominalsType;
class FeatureZoneAreaBaseType;
class FeatureZoneAreaBetweenType;
class FeatureZoneAreaCircularType;
class FeatureZoneAreaCylindricalType;
class FeatureZoneAreaIrregularType;
class FeatureZoneAreaRectangularType;
class FeatureZoneAreaSphericalType;
class FeatureZoneBaseType;
class FeatureZoneBaseTypeLisd;
class FeatureZoneCurveBaseType;
class FeatureZoneCurveCircularType;
class FeatureZoneCurveIrregularType;
class FeatureZoneCurveLineType;
class FeatureZoneListType;
class FeatureZonePointType;
class GroupFeatureDefinitionType;
class GroupFeatureItemType;
class GroupFeatureMeasurementType;
class GroupFeatureNominalType;
class LineBestFitType;
class LineCastType;
class LineCheckedFeatureType;
class LineCheckedType;
class LineCheckedTypeChoicePair;
class LineConstructionMethodType;
class LineConstructionMethodTypeChoicePair;
class LineCopyType;
class LineExtractType;
class LineFeatureDefinitionType;
class LineFeatureItemType;
class LineFeatureMeasurementType;
class LineFeatureNominalType;
class LineFromScanType;
class LineIntersectionType;
class LineMeasurementDeterminationType;
class LineMeasurementDeterminationTypeChoicePair;
class LineMidlineType;
class LineParallelType;
class LinePerpendicularType;
class LineProjectionType;
class LineRecompType;
class LineTangentThroughType;
class LineTransformType;
class MarkingFeatureDefinitionType;
class MarkingFeatureItemType;
class MarkingFeatureMeasurementType;
class MarkingFeatureNominalType;
class MarkingMethodEnumType;
class MarkingMethodType;
class MarkingMethodTypeChoicePair;
class MeasuredFeatureType;
class MeasuredPointSetType;
class MeasuredPointSetTypeLisd;
class MeasuredPointSetsType;
class NominalPointSetListType;
class NonShapeFeatureDefinitionBaseType;
class NonShapeFeatureItemBaseType;
class NonShapeFeatureMeasurementBaseType;
class NonShapeFeatureNominalBaseType;
class OppositeAngledLinesBestFitType;
class OppositeAngledLinesCastType;
class OppositeAngledLinesCheckedFeatureType;
class OppositeAngledLinesCheckedType;
class OppositeAngledLinesCheckedTypeChoicePair;
class OppositeAngledLinesConstructionMethodType;
class OppositeAngledLinesConstructionMethodTypeChoicePair;
class OppositeAngledLinesCopyType;
class OppositeAngledLinesFeatureDefinitionType;
class OppositeAngledLinesFeatureItemType;
class OppositeAngledLinesFeatureMeasurementType;
class OppositeAngledLinesFeatureNominalType;
class OppositeAngledLinesFromScanType;
class OppositeAngledLinesIntersectionType;
class OppositeAngledLinesMeasurementDeterminationType;
class OppositeAngledLinesMeasurementDeterminationTypeChoicePair;
class OppositeAngledLinesProjectionType;
class OppositeAngledLinesRecompType;
class OppositeAngledLinesTransformType;
class OppositeAngledPlanesBestFitType;
class OppositeAngledPlanesCastType;
class OppositeAngledPlanesCheckedFeatureType;
class OppositeAngledPlanesCheckedType;
class OppositeAngledPlanesCheckedTypeChoicePair;
class OppositeAngledPlanesConstructionMethodType;
class OppositeAngledPlanesConstructionMethodTypeChoicePair;
class OppositeAngledPlanesCopyType;
class OppositeAngledPlanesFeatureDefinitionType;
class OppositeAngledPlanesFeatureItemType;
class OppositeAngledPlanesFeatureMeasurementType;
class OppositeAngledPlanesFeatureNominalType;
class OppositeAngledPlanesFromScanType;
class OppositeAngledPlanesMeasurementDeterminationType;
class OppositeAngledPlanesMeasurementDeterminationTypeChoicePair;
class OppositeAngledPlanesRecompType;
class OppositeAngledPlanesTransformType;
class OppositeParallelLinesBestFitType;
class OppositeParallelLinesCastType;
class OppositeParallelLinesCheckedFeatureType;
class OppositeParallelLinesCheckedType;
class OppositeParallelLinesCheckedTypeChoicePair;
class OppositeParallelLinesConstructionMethodType;
class OppositeParallelLinesConstructionMethodTypeChoicePair;
class OppositeParallelLinesCopyType;
class OppositeParallelLinesFeatureDefinitionType;
class OppositeParallelLinesFeatureItemType;
class OppositeParallelLinesFeatureMeasurementType;
class OppositeParallelLinesFeatureNominalType;
class OppositeParallelLinesFromScanType;
class OppositeParallelLinesIntersectionType;
class OppositeParallelLinesMeasurementDeterminationType;
class OppositeParallelLinesMeasurementDeterminationTypeChoicePair;
class OppositeParallelLinesProjectionType;
class OppositeParallelLinesRecompType;
class OppositeParallelLinesTransformType;
class OppositeParallelPlanesBestFitType;
class OppositeParallelPlanesCastType;
class OppositeParallelPlanesCheckedFeatureType;
class OppositeParallelPlanesCheckedType;
class OppositeParallelPlanesCheckedTypeChoicePair;
class OppositeParallelPlanesConstructionMethodType;
class OppositeParallelPlanesConstructionMethodTypeChoicePair;
class OppositeParallelPlanesCopyType;
class OppositeParallelPlanesFeatureDefinitionType;
class OppositeParallelPlanesFeatureItemType;
class OppositeParallelPlanesFeatureMeasurementType;
class OppositeParallelPlanesFeatureNominalType;
class OppositeParallelPlanesFromScanType;
class OppositeParallelPlanesMeasurementDeterminationType;
class OppositeParallelPlanesMeasurementDeterminationTypeChoicePair;
class OppositeParallelPlanesRecompType;
class OppositeParallelPlanesTransformType;
class OtherCurveCheckedFeatureType;
class OtherCurveCheckedType;
class OtherCurveCheckedTypeChoicePair;
class OtherCurveConstructionMethodType;
class OtherCurveConstructionMethodTypeChoicePair;
class OtherCurveFeatureCopyType;
class OtherCurveFeatureDefinitionType;
class OtherCurveFeatureItemType;
class OtherCurveFeatureMeasurementType;
class OtherCurveFeatureNominalType;
class OtherCurveMeasurementDeterminationType;
class OtherCurveMeasurementDeterminationTypeChoicePair;
class OtherNonShapeFeatureDefinitionType;
class OtherNonShapeFeatureItemType;
class OtherNonShapeFeatureMeasurementType;
class OtherNonShapeFeatureNominalType;
class OtherShapeCheckedFeatureType;
class OtherShapeCheckedType;
class OtherShapeCheckedTypeChoicePair;
class OtherShapeConstructionMethodType;
class OtherShapeConstructionMethodTypeChoicePair;
class OtherShapeFeatureCopyType;
class OtherShapeFeatureDefinitionType;
class OtherShapeFeatureItemType;
class OtherShapeFeatureMeasurementType;
class OtherShapeFeatureNominalType;
class OtherShapeMeasurementDeterminationType;
class OtherShapeMeasurementDeterminationTypeChoicePair;
class OtherSurfaceCheckedFeatureType;
class OtherSurfaceCheckedType;
class OtherSurfaceCheckedTypeChoicePair;
class OtherSurfaceConstructionMethodType;
class OtherSurfaceConstructionMethodTypeChoicePair;
class OtherSurfaceFeatureCopyType;
class OtherSurfaceFeatureDefinitionType;
class OtherSurfaceFeatureItemType;
class OtherSurfaceFeatureMeasurementType;
class OtherSurfaceFeatureNominalType;
class OtherSurfaceMeasurementDeterminationType;
class OtherSurfaceMeasurementDeterminationTypeChoicePair;
class PatternFeatureCircleDefinitionType;
class PatternFeatureCircleItemType;
class PatternFeatureCircleNominalType;
class PatternFeatureCircularArcDefinitionType;
class PatternFeatureCircularArcItemType;
class PatternFeatureCircularArcNominalType;
class PatternFeatureDefinitionBaseType;
class PatternFeatureItemBaseType;
class PatternFeatureLinearDefinitionType;
class PatternFeatureLinearItemType;
class PatternFeatureLinearNominalType;
class PatternFeatureNominalBaseType;
class PatternFeatureParallelogramDefinitionType;
class PatternFeatureParallelogramItemType;
class PatternFeatureParallelogramNominalType;
class PlaneBestFitType;
class PlaneCastType;
class PlaneCheckedFeatureType;
class PlaneCheckedType;
class PlaneCheckedTypeChoicePair;
class PlaneConstructionMethodType;
class PlaneConstructionMethodTypeChoicePair;
class PlaneCopyType;
class PlaneExtractType;
class PlaneFeatureDefinitionType;
class PlaneFeatureItemType;
class PlaneFeatureMeasurementType;
class PlaneFeatureNominalType;
class PlaneMeasurementDeterminationType;
class PlaneMeasurementDeterminationTypeChoicePair;
class PlaneMidplaneType;
class PlaneOffsetType;
class PlaneParallelType;
class PlanePerpendicularType;
class PlaneRecompType;
class PlaneTangentThroughType;
class PlaneThroughType;
class PlaneTransformType;
class PointCheckedFeatureType;
class PointCheckedType;
class PointCheckedTypeChoicePair;
class PointConstructionMethodType;
class PointConstructionMethodTypeChoicePair;
class PointDefinedCurveBestFitType;
class PointDefinedCurveCheckedFeatureType;
class PointDefinedCurveCheckedType;
class PointDefinedCurveCheckedTypeChoicePair;
class PointDefinedCurveConstructionMethodType;
class PointDefinedCurveConstructionMethodTypeChoicePair;
class PointDefinedCurveCopyType;
class PointDefinedCurveExtractType;
class PointDefinedCurveFeatureDefinitionType;
class PointDefinedCurveFeatureItemType;
class PointDefinedCurveFeatureMeasurementType;
class PointDefinedCurveFeatureNominalType;
class PointDefinedCurveFromScanType;
class PointDefinedCurveMeasurementDeterminationType;
class PointDefinedCurveMeasurementDeterminationTypeChoicePair;
class PointDefinedCurveRecompType;
class PointDefinedCurveTransformType;
class PointDefinedSurfaceBestFitType;
class PointDefinedSurfaceCheckedFeatureType;
class PointDefinedSurfaceCheckedType;
class PointDefinedSurfaceCheckedTypeChoicePair;
class PointDefinedSurfaceConstructionMethodType;
class PointDefinedSurfaceConstructionMethodTypeChoicePair;
class PointDefinedSurfaceCopyType;
class PointDefinedSurfaceExtractType;
class PointDefinedSurfaceFeatureDefinitionType;
class PointDefinedSurfaceFeatureItemType;
class PointDefinedSurfaceFeatureMeasurementType;
class PointDefinedSurfaceFeatureNominalType;
class PointDefinedSurfaceMeasurementDeterminationType;
class PointDefinedSurfaceMeasurementDeterminationTypeChoicePair;
class PointDefinedSurfaceRecompType;
class PointDefinedSurfaceTransformType;
class PointFeatureCastType;
class PointFeatureCenterOfGravityType;
class PointFeatureCopyType;
class PointFeatureDefinitionBaseType;
class PointFeatureDefinitionType;
class PointFeatureExtremeType;
class PointFeatureFromConeType;
class PointFeatureFromScanType;
class PointFeatureIntersectionType;
class PointFeatureItemBaseType;
class PointFeatureItemType;
class PointFeatureMeasurementBaseType;
class PointFeatureMeasurementType;
class PointFeatureMidPointType;
class PointFeatureMovePointAxisType;
class PointFeatureMovePointType;
class PointFeatureMovePointVectorType;
class PointFeatureNominalBaseType;
class PointFeatureNominalType;
class PointFeaturePierceType;
class PointFeatureProjectionType;
class PointFeatureTransformType;
class PointIndexType;
class PointIndexTypeChoicePair;
class PointListType;
class PointMeasurementDeterminationType;
class PointMeasurementDeterminationTypeChoicePair;
class PointRangeType;
class PointSetNominalType;
class PointSetNominalTypeLisd;
class SetFeatureType;
class ShapeFeatureDefinitionBaseType;
class ShapeFeatureItemBaseType;
class ShapeFeatureMeasurementBaseType;
class ShapeFeatureNominalBaseType;
class SpecifiedFeatureDefinitionBaseType;
class SpecifiedFeatureItemBaseType;
class SpecifiedFeatureMeasurementBaseType;
class SpecifiedFeatureNominalBaseType;
class SphereBestFitType;
class SphereCastType;
class SphereCheckedFeatureType;
class SphereCheckedType;
class SphereCheckedTypeChoicePair;
class SphereConstructionMethodType;
class SphereConstructionMethodTypeChoicePair;
class SphereCopyType;
class SphereFeatureDefinitionType;
class SphereFeatureItemType;
class SphereFeatureMeasurementType;
class SphereFeatureNominalType;
class SphereFromScanType;
class SphereMeasurementDeterminationType;
class SphereMeasurementDeterminationTypeChoicePair;
class SphereRecompType;
class SphereTransformType;
class SphericalSegmentBestFitType;
class SphericalSegmentCastType;
class SphericalSegmentCheckedFeatureType;
class SphericalSegmentCheckedType;
class SphericalSegmentCheckedTypeChoicePair;
class SphericalSegmentConstructionMethodType;
class SphericalSegmentConstructionMethodTypeChoicePair;
class SphericalSegmentCopyType;
class SphericalSegmentFeatureDefinitionType;
class SphericalSegmentFeatureItemType;
class SphericalSegmentFeatureMeasurementType;
class SphericalSegmentFeatureNominalType;
class SphericalSegmentMeasurementDeterminationType;
class SphericalSegmentMeasurementDeterminationTypeChoicePair;
class SphericalSegmentRecompType;
class SphericalSegmentTransformType;
class SurfaceFeatureDefinitionBaseType;
class SurfaceFeatureItemBaseType;
class SurfaceFeatureMeasurementBaseType;
class SurfaceFeatureNominalBaseType;
class SurfaceOfRevolutionBestFitType;
class SurfaceOfRevolutionCastType;
class SurfaceOfRevolutionCheckedFeatureType;
class SurfaceOfRevolutionCheckedType;
class SurfaceOfRevolutionCheckedTypeChoicePair;
class SurfaceOfRevolutionConstructionMethodType;
class SurfaceOfRevolutionConstructionMethodTypeChoicePair;
class SurfaceOfRevolutionCopyType;
class SurfaceOfRevolutionFeatureDefinitionType;
class SurfaceOfRevolutionFeatureItemType;
class SurfaceOfRevolutionFeatureMeasurementType;
class SurfaceOfRevolutionFeatureNominalType;
class SurfaceOfRevolutionMeasurementDeterminationType;
class SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair;
class SurfaceOfRevolutionRecompType;
class SurfaceOfRevolutionTransformType;
class ThreadedFeatureBestFitType;
class ThreadedFeatureCastType;
class ThreadedFeatureCheckedFeatureType;
class ThreadedFeatureCheckedType;
class ThreadedFeatureCheckedTypeChoicePair;
class ThreadedFeatureConstructionMethodType;
class ThreadedFeatureConstructionMethodTypeChoicePair;
class ThreadedFeatureCopyType;
class ThreadedFeatureDefinitionType;
class ThreadedFeatureFromCylinderType;
class ThreadedFeatureItemType;
class ThreadedFeatureMeasurementDeterminationType;
class ThreadedFeatureMeasurementDeterminationTypeChoicePair;
class ThreadedFeatureMeasurementType;
class ThreadedFeatureNominalType;
class ThreadedFeatureRecompType;
class ThreadedFeatureTransformType;
class ToroidalSegmentBestFitType;
class ToroidalSegmentCastType;
class ToroidalSegmentCheckedFeatureType;
class ToroidalSegmentCheckedType;
class ToroidalSegmentCheckedTypeChoicePair;
class ToroidalSegmentConstructionMethodType;
class ToroidalSegmentConstructionMethodTypeChoicePair;
class ToroidalSegmentCopyType;
class ToroidalSegmentFeatureDefinitionType;
class ToroidalSegmentFeatureItemType;
class ToroidalSegmentFeatureMeasurementType;
class ToroidalSegmentFeatureNominalType;
class ToroidalSegmentMeasurementDeterminationType;
class ToroidalSegmentMeasurementDeterminationTypeChoicePair;
class ToroidalSegmentRecompType;
class ToroidalSegmentTransformType;
class TorusBestFitType;
class TorusCastType;
class TorusCheckedFeatureType;
class TorusCheckedType;
class TorusCheckedTypeChoicePair;
class TorusConstructionMethodType;
class TorusConstructionMethodTypeChoicePair;
class TorusCopyType;
class TorusFeatureDefinitionType;
class TorusFeatureItemType;
class TorusFeatureMeasurementType;
class TorusFeatureNominalType;
class TorusFromScanType;
class TorusMeasurementDeterminationType;
class TorusMeasurementDeterminationTypeChoicePair;
class TorusRecompType;
class TorusTransformType;
class TransformationReferenceType;
class CircleFromConeT_1093_Type;
class CircleFromConeT_1093_TypeChoicePair;
class ConeFeatureDefi_1094_Type;
class ConeFeatureDefi_1094_TypeChoicePair;
class ConeFeatureDefi_1095_Type;
class ConeFeatureMeas_1096_Type;
class ConeFeatureMeas_1096_TypeChoicePair;
class ConicalSegmentF_1097_Type;
class ConicalSegmentF_1097_TypeChoicePair;
class ConicalSegmentF_1098_Type;
class ConicalSegmentF_1099_Type;
class ConicalSegmentF_1099_TypeChoicePair;
class FeatureZoneArea_1100_Type;
class FeatureZoneArea_1100_TypeChoicePair;
class FeatureZoneArea_1101_Type;
class FeatureZoneArea_1101_TypeChoicePair;
class FeatureZoneArea_1102_Type;
class FeatureZoneArea_1102_TypeChoicePair;
class FeatureZoneCurv_1103_Type;
class FeatureZoneCurv_1103_TypeChoicePair;
class FeatureZonePoin_1104_Type;
class FeatureZonePoin_1104_TypeChoicePair;
class GroupFeatureDef_1105_Type;
class GroupFeatureDef_1105_TypeChoicePair;
class MeasuredPointSe_1106_Type;
class MeasuredPointSe_1106_TypeChoicePair;
class MeasuredPointSe_1107_Type;
class MeasuredPointSe_1107_TypeChoicePair;
class MeasuredPointSe_1108_Type;
class MeasuredPointSe_1108_TypeChoicePair;
class MeasuredPointSe_1109_Type;
class MeasuredPointSe_1109_TypeChoicePair;
class MeasuredPointSe_1110_Type;
class MeasuredPointSe_1110_TypeChoicePair;
class MeasuredPointSe_1111_Type;
class MeasuredPointSe_1111_TypeChoicePair;
class MeasuredPointSe_1112_Type;
class MeasuredPointSe_1112_TypeChoicePair;
class MeasuredPointSe_1113_Type;
class MeasuredPointSe_1113_TypeChoicePair;
class MeasuredPointSe_1114_Type;
class MeasuredPointSe_1114_TypeChoicePair;
class MeasuredPointSe_1115_Type;
class MeasuredPointSe_1115_TypeChoicePair;
class MeasuredPointSe_1116_Type;
class MeasuredPointSe_1116_TypeChoicePair;
class MeasuredPointSe_1117_Type;
class MeasuredPointSe_1117_TypeChoicePair;
class MeasuredPointSe_1118_Type;
class OppositeAngledP_1119_Type;
class OppositeAngledP_1119_TypeChoicePair;
class OppositeAngledP_1120_Type;
class OppositeAngledP_1120_TypeChoicePair;
class OtherSurfaceFea_1121_Type;
class OtherSurfaceFea_1121_TypeChoicePair;
class PlaneFeatureNom_1122_Type;
class PlaneFeatureNom_1122_TypeChoicePair;
class PointFeatureExt_1123_Type;
class PointFeatureExt_1123_TypeChoicePair;
class PointFeatureMov_1124_Type;
class PointFeatureMov_1124_TypeChoicePair;
class PointFeatureNom_1125_Type;
class PointFeatureNom_1125_TypeChoicePair;
class MeasuredPointSe_1126_Type;
class MeasuredPointSe_1126_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class BaseFeaturePointListType :
  public XmlTypeBase
{
public:
  BaseFeaturePointListType();
  BaseFeaturePointListType(
    BaseFeaturePointSetTypeLisd * BaseFeaturePointSetIn);
  BaseFeaturePointListType(
    NaturalType * nIn,
    BaseFeaturePointSetTypeLisd * BaseFeaturePointSetIn);
  ~BaseFeaturePointListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  BaseFeaturePointSetTypeLisd * getBaseFeaturePointSet();
  void setBaseFeaturePointSet(BaseFeaturePointSetTypeLisd *);

protected:
  NaturalType * n;
  BaseFeaturePointSetTypeLisd * BaseFeaturePointSet;
};

/* ***************************************************************** */

class BaseFeaturePointSetType :
  public XmlTypeBase
{
public:
  BaseFeaturePointSetType();
  BaseFeaturePointSetType(
    QIFReferenceType * FeatureIdIn,
    PointIndexType * PointIndexIn,
    ReferencedComponentEnumType * ReferencedComponentIn,
    NaturalType * SequenceNumberIn);
  ~BaseFeaturePointSetType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getFeatureId();
  void setFeatureId(QIFReferenceType * FeatureIdIn);
  PointIndexType * getPointIndex();
  void setPointIndex(PointIndexType * PointIndexIn);
  ReferencedComponentEnumType * getReferencedComponent();
  void setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn);
  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  QIFReferenceType * FeatureId;
  PointIndexType * PointIndex;
  ReferencedComponentEnumType * ReferencedComponent;
  NaturalType * SequenceNumber;
};

/* ***************************************************************** */

class BaseFeaturePointSetTypeLisd :
  public std::list<BaseFeaturePointSetType *>,
  public XmlSchemaInstanceBase
{
public:
  BaseFeaturePointSetTypeLisd();
  BaseFeaturePointSetTypeLisd(
    BaseFeaturePointSetType * aBaseFeaturePointSetType);
  ~BaseFeaturePointSetTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CircleCheckedFeatureType :
  public XmlTypeBase
{
public:
  CircleCheckedFeatureType();
  CircleCheckedFeatureType(
    CircleCheckedType * CheckDetailsIn);
  ~CircleCheckedFeatureType();
  void printSelf(FILE * outFile);

  CircleCheckedType * getCheckDetails();
  void setCheckDetails(CircleCheckedType * CheckDetailsIn);

protected:
  CircleCheckedType * CheckDetails;
};

/* ***************************************************************** */

class CircleCheckedType :
  public XmlTypeBase
{
public:
  CircleCheckedType();
  CircleCheckedType(
    CircleCheckedTypeChoicePair * CircleCheckedTypePairIn);
  ~CircleCheckedType();
  void printSelf(FILE * outFile);

  CircleCheckedTypeChoicePair * getCircleCheckedTypePair();
  void setCircleCheckedTypePair(CircleCheckedTypeChoicePair * CircleCheckedTypePairIn);

protected:
  CircleCheckedTypeChoicePair * CircleCheckedTypePair;
};

/* ***************************************************************** */

union CircleCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  CircleConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class CircleCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  CircleCheckedTypeChoicePair();
  CircleCheckedTypeChoicePair(
    whichOne CircleCheckedTypeTypeIn,
    CircleCheckedTypeVal CircleCheckedTypeValueIn);
  ~CircleCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircleCheckedTypeType;
  CircleCheckedTypeVal CircleCheckedTypeValue;
};

/* ***************************************************************** */

class CircleConstructionMethodType :
  public XmlTypeBase
{
public:
  CircleConstructionMethodType();
  CircleConstructionMethodType(
    CircleConstructionMethodTypeChoicePair * CircleConstructionMethodTypePairIn);
  ~CircleConstructionMethodType();
  void printSelf(FILE * outFile);

  CircleConstructionMethodTypeChoicePair * getCircleConstructionMethodTypePair();
  void setCircleConstructionMethodTypePair(CircleConstructionMethodTypeChoicePair * CircleConstructionMethodTypePairIn);

protected:
  CircleConstructionMethodTypeChoicePair * CircleConstructionMethodTypePair;
};

/* ***************************************************************** */

union CircleConstructionMethodTypeVal
{
  CircleBestFitType * BestFit;
  CircleRecompType * Recompensated;
  CircleIntersectionType * Intersection;
  CircleProjectionType * Projection;
  CircleCopyType * Copy;
  CircleCastType * Cast;
  CircleTangentType * Tangent;
  CircleTangentThroughType * TangentThrough;
  CircleTransformType * Transform;
  CircleFromConeType * FromCone;
  CircleFromScanType * FromScan;
};

/* ***************************************************************** */

class CircleConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    IntersectionE,
    ProjectionE,
    CopyE,
    CastE,
    TangentE,
    TangentThroughE,
    TransformE,
    FromConeE,
    FromScanE };
  CircleConstructionMethodTypeChoicePair();
  CircleConstructionMethodTypeChoicePair(
    whichOne CircleConstructionMethodTypeTypeIn,
    CircleConstructionMethodTypeVal CircleConstructionMethodTypeValueIn);
  ~CircleConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircleConstructionMethodTypeType;
  CircleConstructionMethodTypeVal CircleConstructionMethodTypeValue;
};

/* ***************************************************************** */

class CircleMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  CircleMeasurementDeterminationType();
  CircleMeasurementDeterminationType(
    CircleMeasurementDeterminationTypeChoicePair * CircleMeasurementDeterminationTypePairIn);
  ~CircleMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  CircleMeasurementDeterminationTypeChoicePair * getCircleMeasurementDeterminationTypePair();
  void setCircleMeasurementDeterminationTypePair(CircleMeasurementDeterminationTypeChoicePair * CircleMeasurementDeterminationTypePairIn);

protected:
  CircleMeasurementDeterminationTypeChoicePair * CircleMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union CircleMeasurementDeterminationTypeVal
{
  CircleCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class CircleMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  CircleMeasurementDeterminationTypeChoicePair();
  CircleMeasurementDeterminationTypeChoicePair(
    whichOne CircleMeasurementDeterminationTypeTypeIn,
    CircleMeasurementDeterminationTypeVal CircleMeasurementDeterminationTypeValueIn);
  ~CircleMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircleMeasurementDeterminationTypeType;
  CircleMeasurementDeterminationTypeVal CircleMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class CircularArcCheckedFeatureType :
  public XmlTypeBase
{
public:
  CircularArcCheckedFeatureType();
  CircularArcCheckedFeatureType(
    CircularArcCheckedType * CheckDetailsIn);
  ~CircularArcCheckedFeatureType();
  void printSelf(FILE * outFile);

  CircularArcCheckedType * getCheckDetails();
  void setCheckDetails(CircularArcCheckedType * CheckDetailsIn);

protected:
  CircularArcCheckedType * CheckDetails;
};

/* ***************************************************************** */

class CircularArcCheckedType :
  public XmlTypeBase
{
public:
  CircularArcCheckedType();
  CircularArcCheckedType(
    CircularArcCheckedTypeChoicePair * CircularArcCheckedTypePairIn);
  ~CircularArcCheckedType();
  void printSelf(FILE * outFile);

  CircularArcCheckedTypeChoicePair * getCircularArcCheckedTypePair();
  void setCircularArcCheckedTypePair(CircularArcCheckedTypeChoicePair * CircularArcCheckedTypePairIn);

protected:
  CircularArcCheckedTypeChoicePair * CircularArcCheckedTypePair;
};

/* ***************************************************************** */

union CircularArcCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  CircularArcConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class CircularArcCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  CircularArcCheckedTypeChoicePair();
  CircularArcCheckedTypeChoicePair(
    whichOne CircularArcCheckedTypeTypeIn,
    CircularArcCheckedTypeVal CircularArcCheckedTypeValueIn);
  ~CircularArcCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularArcCheckedTypeType;
  CircularArcCheckedTypeVal CircularArcCheckedTypeValue;
};

/* ***************************************************************** */

class CircularArcConstructionMethodType :
  public XmlTypeBase
{
public:
  CircularArcConstructionMethodType();
  CircularArcConstructionMethodType(
    CircularArcConstructionMethodTypeChoicePair * CircularArcConstructionMethodTypePairIn);
  ~CircularArcConstructionMethodType();
  void printSelf(FILE * outFile);

  CircularArcConstructionMethodTypeChoicePair * getCircularArcConstructionMethodTypePair();
  void setCircularArcConstructionMethodTypePair(CircularArcConstructionMethodTypeChoicePair * CircularArcConstructionMethodTypePairIn);

protected:
  CircularArcConstructionMethodTypeChoicePair * CircularArcConstructionMethodTypePair;
};

/* ***************************************************************** */

union CircularArcConstructionMethodTypeVal
{
  CircularArcBestFitType * BestFit;
  CircularArcIntersectionType * Intersection;
  CircularArcRecompType * Recompensated;
  CircularArcProjectionType * Projection;
  CircularArcCopyType * Copy;
  CircularArcCastType * Cast;
  CircularArcTransformType * Transform;
  CircularArcFromScanType * FromScan;
  CircularArcExtractType * Extract;
};

/* ***************************************************************** */

class CircularArcConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    IntersectionE,
    RecompensatedE,
    ProjectionE,
    CopyE,
    CastE,
    TransformE,
    FromScanE,
    ExtractE };
  CircularArcConstructionMethodTypeChoicePair();
  CircularArcConstructionMethodTypeChoicePair(
    whichOne CircularArcConstructionMethodTypeTypeIn,
    CircularArcConstructionMethodTypeVal CircularArcConstructionMethodTypeValueIn);
  ~CircularArcConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularArcConstructionMethodTypeType;
  CircularArcConstructionMethodTypeVal CircularArcConstructionMethodTypeValue;
};

/* ***************************************************************** */

class CircularArcMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  CircularArcMeasurementDeterminationType();
  CircularArcMeasurementDeterminationType(
    CircularArcMeasurementDeterminationTypeChoicePair * CircularArcMeasurementDeterminationTypePairIn);
  ~CircularArcMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  CircularArcMeasurementDeterminationTypeChoicePair * getCircularArcMeasurementDeterminationTypePair();
  void setCircularArcMeasurementDeterminationTypePair(CircularArcMeasurementDeterminationTypeChoicePair * CircularArcMeasurementDeterminationTypePairIn);

protected:
  CircularArcMeasurementDeterminationTypeChoicePair * CircularArcMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union CircularArcMeasurementDeterminationTypeVal
{
  CircularArcCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class CircularArcMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  CircularArcMeasurementDeterminationTypeChoicePair();
  CircularArcMeasurementDeterminationTypeChoicePair(
    whichOne CircularArcMeasurementDeterminationTypeTypeIn,
    CircularArcMeasurementDeterminationTypeVal CircularArcMeasurementDeterminationTypeValueIn);
  ~CircularArcMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircularArcMeasurementDeterminationTypeType;
  CircularArcMeasurementDeterminationTypeVal CircularArcMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ConeCheckedFeatureType :
  public XmlTypeBase
{
public:
  ConeCheckedFeatureType();
  ConeCheckedFeatureType(
    ConeCheckedType * CheckDetailsIn);
  ~ConeCheckedFeatureType();
  void printSelf(FILE * outFile);

  ConeCheckedType * getCheckDetails();
  void setCheckDetails(ConeCheckedType * CheckDetailsIn);

protected:
  ConeCheckedType * CheckDetails;
};

/* ***************************************************************** */

class ConeCheckedType :
  public XmlTypeBase
{
public:
  ConeCheckedType();
  ConeCheckedType(
    ConeCheckedTypeChoicePair * ConeCheckedTypePairIn);
  ~ConeCheckedType();
  void printSelf(FILE * outFile);

  ConeCheckedTypeChoicePair * getConeCheckedTypePair();
  void setConeCheckedTypePair(ConeCheckedTypeChoicePair * ConeCheckedTypePairIn);

protected:
  ConeCheckedTypeChoicePair * ConeCheckedTypePair;
};

/* ***************************************************************** */

union ConeCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  ConeConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ConeCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  ConeCheckedTypeChoicePair();
  ConeCheckedTypeChoicePair(
    whichOne ConeCheckedTypeTypeIn,
    ConeCheckedTypeVal ConeCheckedTypeValueIn);
  ~ConeCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConeCheckedTypeType;
  ConeCheckedTypeVal ConeCheckedTypeValue;
};

/* ***************************************************************** */

class ConeConstructionMethodType :
  public XmlTypeBase
{
public:
  ConeConstructionMethodType();
  ConeConstructionMethodType(
    ConeConstructionMethodTypeChoicePair * ConeConstructionMethodTypePairIn);
  ~ConeConstructionMethodType();
  void printSelf(FILE * outFile);

  ConeConstructionMethodTypeChoicePair * getConeConstructionMethodTypePair();
  void setConeConstructionMethodTypePair(ConeConstructionMethodTypeChoicePair * ConeConstructionMethodTypePairIn);

protected:
  ConeConstructionMethodTypeChoicePair * ConeConstructionMethodTypePair;
};

/* ***************************************************************** */

union ConeConstructionMethodTypeVal
{
  ConeBestFitType * BestFit;
  ConeRecompType * Recompensated;
  ConeCopyType * Copy;
  ConeCastType * Cast;
  ConeTransformType * Transform;
  ConeFromScanType * FromScan;
};

/* ***************************************************************** */

class ConeConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  ConeConstructionMethodTypeChoicePair();
  ConeConstructionMethodTypeChoicePair(
    whichOne ConeConstructionMethodTypeTypeIn,
    ConeConstructionMethodTypeVal ConeConstructionMethodTypeValueIn);
  ~ConeConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConeConstructionMethodTypeType;
  ConeConstructionMethodTypeVal ConeConstructionMethodTypeValue;
};

/* ***************************************************************** */

class ConeMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  ConeMeasurementDeterminationType();
  ConeMeasurementDeterminationType(
    ConeMeasurementDeterminationTypeChoicePair * ConeMeasurementDeterminationTypePairIn);
  ~ConeMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  ConeMeasurementDeterminationTypeChoicePair * getConeMeasurementDeterminationTypePair();
  void setConeMeasurementDeterminationTypePair(ConeMeasurementDeterminationTypeChoicePair * ConeMeasurementDeterminationTypePairIn);

protected:
  ConeMeasurementDeterminationTypeChoicePair * ConeMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union ConeMeasurementDeterminationTypeVal
{
  ConeCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class ConeMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  ConeMeasurementDeterminationTypeChoicePair();
  ConeMeasurementDeterminationTypeChoicePair(
    whichOne ConeMeasurementDeterminationTypeTypeIn,
    ConeMeasurementDeterminationTypeVal ConeMeasurementDeterminationTypeValueIn);
  ~ConeMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConeMeasurementDeterminationTypeType;
  ConeMeasurementDeterminationTypeVal ConeMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ConicalSegmentCheckedFeatureType :
  public XmlTypeBase
{
public:
  ConicalSegmentCheckedFeatureType();
  ConicalSegmentCheckedFeatureType(
    ConicalSegmentCheckedType * CheckDetailsIn);
  ~ConicalSegmentCheckedFeatureType();
  void printSelf(FILE * outFile);

  ConicalSegmentCheckedType * getCheckDetails();
  void setCheckDetails(ConicalSegmentCheckedType * CheckDetailsIn);

protected:
  ConicalSegmentCheckedType * CheckDetails;
};

/* ***************************************************************** */

class ConicalSegmentCheckedType :
  public XmlTypeBase
{
public:
  ConicalSegmentCheckedType();
  ConicalSegmentCheckedType(
    ConicalSegmentCheckedTypeChoicePair * ConicalSegmentCheckedTypePairIn);
  ~ConicalSegmentCheckedType();
  void printSelf(FILE * outFile);

  ConicalSegmentCheckedTypeChoicePair * getConicalSegmentCheckedTypePair();
  void setConicalSegmentCheckedTypePair(ConicalSegmentCheckedTypeChoicePair * ConicalSegmentCheckedTypePairIn);

protected:
  ConicalSegmentCheckedTypeChoicePair * ConicalSegmentCheckedTypePair;
};

/* ***************************************************************** */

union ConicalSegmentCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  ConicalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ConicalSegmentCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  ConicalSegmentCheckedTypeChoicePair();
  ConicalSegmentCheckedTypeChoicePair(
    whichOne ConicalSegmentCheckedTypeTypeIn,
    ConicalSegmentCheckedTypeVal ConicalSegmentCheckedTypeValueIn);
  ~ConicalSegmentCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConicalSegmentCheckedTypeType;
  ConicalSegmentCheckedTypeVal ConicalSegmentCheckedTypeValue;
};

/* ***************************************************************** */

class ConicalSegmentConstructionMethodType :
  public XmlTypeBase
{
public:
  ConicalSegmentConstructionMethodType();
  ConicalSegmentConstructionMethodType(
    ConicalSegmentConstructionMethodTypeChoicePair * ConicalSegmentConstructionMethodTypePairIn);
  ~ConicalSegmentConstructionMethodType();
  void printSelf(FILE * outFile);

  ConicalSegmentConstructionMethodTypeChoicePair * getConicalSegmentConstructionMethodTypePair();
  void setConicalSegmentConstructionMethodTypePair(ConicalSegmentConstructionMethodTypeChoicePair * ConicalSegmentConstructionMethodTypePairIn);

protected:
  ConicalSegmentConstructionMethodTypeChoicePair * ConicalSegmentConstructionMethodTypePair;
};

/* ***************************************************************** */

union ConicalSegmentConstructionMethodTypeVal
{
  ConicalSegmentBestFitType * BestFit;
  ConicalSegmentRecompType * Recompensated;
  ConicalSegmentCopyType * Copy;
  ConicalSegmentCastType * Cast;
  ConicalSegmentTransformType * Transform;
};

/* ***************************************************************** */

class ConicalSegmentConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  ConicalSegmentConstructionMethodTypeChoicePair();
  ConicalSegmentConstructionMethodTypeChoicePair(
    whichOne ConicalSegmentConstructionMethodTypeTypeIn,
    ConicalSegmentConstructionMethodTypeVal ConicalSegmentConstructionMethodTypeValueIn);
  ~ConicalSegmentConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConicalSegmentConstructionMethodTypeType;
  ConicalSegmentConstructionMethodTypeVal ConicalSegmentConstructionMethodTypeValue;
};

/* ***************************************************************** */

class ConicalSegmentMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  ConicalSegmentMeasurementDeterminationType();
  ConicalSegmentMeasurementDeterminationType(
    ConicalSegmentMeasurementDeterminationTypeChoicePair * ConicalSegmentMeasurementDeterminationTypePairIn);
  ~ConicalSegmentMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  ConicalSegmentMeasurementDeterminationTypeChoicePair * getConicalSegmentMeasurementDeterminationTypePair();
  void setConicalSegmentMeasurementDeterminationTypePair(ConicalSegmentMeasurementDeterminationTypeChoicePair * ConicalSegmentMeasurementDeterminationTypePairIn);

protected:
  ConicalSegmentMeasurementDeterminationTypeChoicePair * ConicalSegmentMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union ConicalSegmentMeasurementDeterminationTypeVal
{
  ConicalSegmentCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class ConicalSegmentMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  ConicalSegmentMeasurementDeterminationTypeChoicePair();
  ConicalSegmentMeasurementDeterminationTypeChoicePair(
    whichOne ConicalSegmentMeasurementDeterminationTypeTypeIn,
    ConicalSegmentMeasurementDeterminationTypeVal ConicalSegmentMeasurementDeterminationTypeValueIn);
  ~ConicalSegmentMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConicalSegmentMeasurementDeterminationTypeType;
  ConicalSegmentMeasurementDeterminationTypeVal ConicalSegmentMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ConstructionMethodBaseType :
  public XmlTypeBase
{
public:
  ConstructionMethodBaseType();
  ConstructionMethodBaseType(
    XmlBoolean * NominalsCalculatedIn);
  ~ConstructionMethodBaseType();
  void printSelf(FILE * outFile);

  XmlBoolean * getNominalsCalculated();
  void setNominalsCalculated(XmlBoolean * NominalsCalculatedIn);

protected:
  XmlBoolean * NominalsCalculated;
};

/* ***************************************************************** */

class CylinderBestFitType :
  public ConstructionMethodBaseType
{
public:
  CylinderBestFitType();
  CylinderBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  CylinderBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~CylinderBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class CylinderCastType :
  public ConstructionMethodBaseType
{
public:
  CylinderCastType();
  CylinderCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~CylinderCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class CylinderCheckedFeatureType :
  public XmlTypeBase
{
public:
  CylinderCheckedFeatureType();
  CylinderCheckedFeatureType(
    CylinderCheckedType * CheckDetailsIn);
  ~CylinderCheckedFeatureType();
  void printSelf(FILE * outFile);

  CylinderCheckedType * getCheckDetails();
  void setCheckDetails(CylinderCheckedType * CheckDetailsIn);

protected:
  CylinderCheckedType * CheckDetails;
};

/* ***************************************************************** */

class CylinderCheckedType :
  public XmlTypeBase
{
public:
  CylinderCheckedType();
  CylinderCheckedType(
    CylinderCheckedTypeChoicePair * CylinderCheckedTypePairIn);
  ~CylinderCheckedType();
  void printSelf(FILE * outFile);

  CylinderCheckedTypeChoicePair * getCylinderCheckedTypePair();
  void setCylinderCheckedTypePair(CylinderCheckedTypeChoicePair * CylinderCheckedTypePairIn);

protected:
  CylinderCheckedTypeChoicePair * CylinderCheckedTypePair;
};

/* ***************************************************************** */

union CylinderCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  CylinderConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class CylinderCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  CylinderCheckedTypeChoicePair();
  CylinderCheckedTypeChoicePair(
    whichOne CylinderCheckedTypeTypeIn,
    CylinderCheckedTypeVal CylinderCheckedTypeValueIn);
  ~CylinderCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylinderCheckedTypeType;
  CylinderCheckedTypeVal CylinderCheckedTypeValue;
};

/* ***************************************************************** */

class CylinderConstructionMethodType :
  public XmlTypeBase
{
public:
  CylinderConstructionMethodType();
  CylinderConstructionMethodType(
    CylinderConstructionMethodTypeChoicePair * CylinderConstructionMethodTypePairIn);
  ~CylinderConstructionMethodType();
  void printSelf(FILE * outFile);

  CylinderConstructionMethodTypeChoicePair * getCylinderConstructionMethodTypePair();
  void setCylinderConstructionMethodTypePair(CylinderConstructionMethodTypeChoicePair * CylinderConstructionMethodTypePairIn);

protected:
  CylinderConstructionMethodTypeChoicePair * CylinderConstructionMethodTypePair;
};

/* ***************************************************************** */

union CylinderConstructionMethodTypeVal
{
  CylinderBestFitType * BestFit;
  CylinderRecompType * Recompensated;
  CylinderCopyType * Copy;
  CylinderCastType * Cast;
  CylinderTransformType * Transform;
  CylinderFromScanType * FromScan;
};

/* ***************************************************************** */

class CylinderConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  CylinderConstructionMethodTypeChoicePair();
  CylinderConstructionMethodTypeChoicePair(
    whichOne CylinderConstructionMethodTypeTypeIn,
    CylinderConstructionMethodTypeVal CylinderConstructionMethodTypeValueIn);
  ~CylinderConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylinderConstructionMethodTypeType;
  CylinderConstructionMethodTypeVal CylinderConstructionMethodTypeValue;
};

/* ***************************************************************** */

class CylinderCopyType :
  public ConstructionMethodBaseType
{
public:
  CylinderCopyType();
  CylinderCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseCylinderIn);
  ~CylinderCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCylinder();
  void setBaseCylinder(BaseFeatureType * BaseCylinderIn);

protected:
  BaseFeatureType * BaseCylinder;
};

/* ***************************************************************** */

class CylinderFromScanType :
  public ConstructionMethodBaseType
{
public:
  CylinderFromScanType();
  CylinderFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn);
  ~CylinderFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
};

/* ***************************************************************** */

class CylinderMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  CylinderMeasurementDeterminationType();
  CylinderMeasurementDeterminationType(
    CylinderMeasurementDeterminationTypeChoicePair * CylinderMeasurementDeterminationTypePairIn);
  ~CylinderMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  CylinderMeasurementDeterminationTypeChoicePair * getCylinderMeasurementDeterminationTypePair();
  void setCylinderMeasurementDeterminationTypePair(CylinderMeasurementDeterminationTypeChoicePair * CylinderMeasurementDeterminationTypePairIn);

protected:
  CylinderMeasurementDeterminationTypeChoicePair * CylinderMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union CylinderMeasurementDeterminationTypeVal
{
  CylinderCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class CylinderMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  CylinderMeasurementDeterminationTypeChoicePair();
  CylinderMeasurementDeterminationTypeChoicePair(
    whichOne CylinderMeasurementDeterminationTypeTypeIn,
    CylinderMeasurementDeterminationTypeVal CylinderMeasurementDeterminationTypeValueIn);
  ~CylinderMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylinderMeasurementDeterminationTypeType;
  CylinderMeasurementDeterminationTypeVal CylinderMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class CylinderRecompType :
  public ConstructionMethodBaseType
{
public:
  CylinderRecompType();
  CylinderRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~CylinderRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class CylinderTransformType :
  public ConstructionMethodBaseType
{
public:
  CylinderTransformType();
  CylinderTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseCylinderIn,
    TransformationReferenceType * TransformationIn);
  ~CylinderTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCylinder();
  void setBaseCylinder(BaseFeatureType * BaseCylinderIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseCylinder;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class CylindricalSegmentBestFitType :
  public ConstructionMethodBaseType
{
public:
  CylindricalSegmentBestFitType();
  CylindricalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  CylindricalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~CylindricalSegmentBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class CylindricalSegmentCastType :
  public ConstructionMethodBaseType
{
public:
  CylindricalSegmentCastType();
  CylindricalSegmentCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~CylindricalSegmentCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class CylindricalSegmentCheckedFeatureType :
  public XmlTypeBase
{
public:
  CylindricalSegmentCheckedFeatureType();
  CylindricalSegmentCheckedFeatureType(
    CylindricalSegmentCheckedType * CheckDetailsIn);
  ~CylindricalSegmentCheckedFeatureType();
  void printSelf(FILE * outFile);

  CylindricalSegmentCheckedType * getCheckDetails();
  void setCheckDetails(CylindricalSegmentCheckedType * CheckDetailsIn);

protected:
  CylindricalSegmentCheckedType * CheckDetails;
};

/* ***************************************************************** */

class CylindricalSegmentCheckedType :
  public XmlTypeBase
{
public:
  CylindricalSegmentCheckedType();
  CylindricalSegmentCheckedType(
    CylindricalSegmentCheckedTypeChoicePair * CylindricalSegmentCheckedTypePairIn);
  ~CylindricalSegmentCheckedType();
  void printSelf(FILE * outFile);

  CylindricalSegmentCheckedTypeChoicePair * getCylindricalSegmentCheckedTypePair();
  void setCylindricalSegmentCheckedTypePair(CylindricalSegmentCheckedTypeChoicePair * CylindricalSegmentCheckedTypePairIn);

protected:
  CylindricalSegmentCheckedTypeChoicePair * CylindricalSegmentCheckedTypePair;
};

/* ***************************************************************** */

union CylindricalSegmentCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  CylindricalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class CylindricalSegmentCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  CylindricalSegmentCheckedTypeChoicePair();
  CylindricalSegmentCheckedTypeChoicePair(
    whichOne CylindricalSegmentCheckedTypeTypeIn,
    CylindricalSegmentCheckedTypeVal CylindricalSegmentCheckedTypeValueIn);
  ~CylindricalSegmentCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricalSegmentCheckedTypeType;
  CylindricalSegmentCheckedTypeVal CylindricalSegmentCheckedTypeValue;
};

/* ***************************************************************** */

class CylindricalSegmentConstructionMethodType :
  public XmlTypeBase
{
public:
  CylindricalSegmentConstructionMethodType();
  CylindricalSegmentConstructionMethodType(
    CylindricalSegmentConstructionMethodTypeChoicePair * CylindricalSegmentConstructionMethodTypePairIn);
  ~CylindricalSegmentConstructionMethodType();
  void printSelf(FILE * outFile);

  CylindricalSegmentConstructionMethodTypeChoicePair * getCylindricalSegmentConstructionMethodTypePair();
  void setCylindricalSegmentConstructionMethodTypePair(CylindricalSegmentConstructionMethodTypeChoicePair * CylindricalSegmentConstructionMethodTypePairIn);

protected:
  CylindricalSegmentConstructionMethodTypeChoicePair * CylindricalSegmentConstructionMethodTypePair;
};

/* ***************************************************************** */

union CylindricalSegmentConstructionMethodTypeVal
{
  CylindricalSegmentBestFitType * BestFit;
  CylindricalSegmentRecompType * Recompensated;
  CylindricalSegmentCopyType * Copy;
  CylindricalSegmentCastType * Cast;
  CylindricalSegmentTransformType * Transform;
};

/* ***************************************************************** */

class CylindricalSegmentConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  CylindricalSegmentConstructionMethodTypeChoicePair();
  CylindricalSegmentConstructionMethodTypeChoicePair(
    whichOne CylindricalSegmentConstructionMethodTypeTypeIn,
    CylindricalSegmentConstructionMethodTypeVal CylindricalSegmentConstructionMethodTypeValueIn);
  ~CylindricalSegmentConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricalSegmentConstructionMethodTypeType;
  CylindricalSegmentConstructionMethodTypeVal CylindricalSegmentConstructionMethodTypeValue;
};

/* ***************************************************************** */

class CylindricalSegmentCopyType :
  public ConstructionMethodBaseType
{
public:
  CylindricalSegmentCopyType();
  CylindricalSegmentCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseCylindricalSegmentIn);
  ~CylindricalSegmentCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCylindricalSegment();
  void setBaseCylindricalSegment(BaseFeatureType * BaseCylindricalSegmentIn);

protected:
  BaseFeatureType * BaseCylindricalSegment;
};

/* ***************************************************************** */

class CylindricalSegmentMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  CylindricalSegmentMeasurementDeterminationType();
  CylindricalSegmentMeasurementDeterminationType(
    CylindricalSegmentMeasurementDeterminationTypeChoicePair * CylindricalSegmentMeasurementDeterminationTypePairIn);
  ~CylindricalSegmentMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  CylindricalSegmentMeasurementDeterminationTypeChoicePair * getCylindricalSegmentMeasurementDeterminationTypePair();
  void setCylindricalSegmentMeasurementDeterminationTypePair(CylindricalSegmentMeasurementDeterminationTypeChoicePair * CylindricalSegmentMeasurementDeterminationTypePairIn);

protected:
  CylindricalSegmentMeasurementDeterminationTypeChoicePair * CylindricalSegmentMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union CylindricalSegmentMeasurementDeterminationTypeVal
{
  CylindricalSegmentCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class CylindricalSegmentMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  CylindricalSegmentMeasurementDeterminationTypeChoicePair();
  CylindricalSegmentMeasurementDeterminationTypeChoicePair(
    whichOne CylindricalSegmentMeasurementDeterminationTypeTypeIn,
    CylindricalSegmentMeasurementDeterminationTypeVal CylindricalSegmentMeasurementDeterminationTypeValueIn);
  ~CylindricalSegmentMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CylindricalSegmentMeasurementDeterminationTypeType;
  CylindricalSegmentMeasurementDeterminationTypeVal CylindricalSegmentMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class CylindricalSegmentRecompType :
  public ConstructionMethodBaseType
{
public:
  CylindricalSegmentRecompType();
  CylindricalSegmentRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~CylindricalSegmentRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class CylindricalSegmentTransformType :
  public ConstructionMethodBaseType
{
public:
  CylindricalSegmentTransformType();
  CylindricalSegmentTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseCylindricalSegmentIn,
    TransformationReferenceType * TransformationIn);
  ~CylindricalSegmentTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCylindricalSegment();
  void setBaseCylindricalSegment(BaseFeatureType * BaseCylindricalSegmentIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseCylindricalSegment;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class DefiningPointsMeasurementType :
  public XmlTypeBase
{
public:
  DefiningPointsMeasurementType();
  DefiningPointsMeasurementType(
    DefiningPointMeasurementTypeLisd * DefiningPointIn);
  DefiningPointsMeasurementType(
    XmlDecimal * combinedUncertaintyIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * linearUnitIn,
    XmlDecimal * meanErrorIn,
    NaturalType * nIn,
    XmlNonNegativeInteger * significantFiguresIn,
    ValidityEnumType * validityIn,
    XmlDecimal * xCombinedUncertaintyIn,
    XmlNonNegativeInteger * xDecimalPlacesIn,
    XmlDecimal * xMeanErrorIn,
    XmlNonNegativeInteger * xSignificantFiguresIn,
    ValidityEnumType * xValidityIn,
    XmlDecimal * yCombinedUncertaintyIn,
    XmlNonNegativeInteger * yDecimalPlacesIn,
    XmlDecimal * yMeanErrorIn,
    XmlNonNegativeInteger * ySignificantFiguresIn,
    ValidityEnumType * yValidityIn,
    XmlDecimal * zCombinedUncertaintyIn,
    XmlNonNegativeInteger * zDecimalPlacesIn,
    XmlDecimal * zMeanErrorIn,
    XmlNonNegativeInteger * zSignificantFiguresIn,
    ValidityEnumType * zValidityIn,
    DefiningPointMeasurementTypeLisd * DefiningPointIn);
  ~DefiningPointsMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getcombinedUncertainty();
  void setcombinedUncertainty(XmlDecimal * combinedUncertaintyIn);
  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlDecimal * getmeanError();
  void setmeanError(XmlDecimal * meanErrorIn);
  NaturalType * getn();
  void setn(NaturalType * nIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlDecimal * getxCombinedUncertainty();
  void setxCombinedUncertainty(XmlDecimal * xCombinedUncertaintyIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlDecimal * getxMeanError();
  void setxMeanError(XmlDecimal * xMeanErrorIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlDecimal * getyCombinedUncertainty();
  void setyCombinedUncertainty(XmlDecimal * yCombinedUncertaintyIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlDecimal * getyMeanError();
  void setyMeanError(XmlDecimal * yMeanErrorIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlDecimal * getzCombinedUncertainty();
  void setzCombinedUncertainty(XmlDecimal * zCombinedUncertaintyIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlDecimal * getzMeanError();
  void setzMeanError(XmlDecimal * zMeanErrorIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

  DefiningPointMeasurementTypeLisd * getDefiningPoint();
  void setDefiningPoint(DefiningPointMeasurementTypeLisd *);

protected:
  XmlDecimal * combinedUncertainty;
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  XmlDecimal * meanError;
  NaturalType * n;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlDecimal * xCombinedUncertainty;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlDecimal * xMeanError;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlDecimal * yCombinedUncertainty;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlDecimal * yMeanError;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlDecimal * zCombinedUncertainty;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlDecimal * zMeanError;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
  DefiningPointMeasurementTypeLisd * DefiningPoint;
};

/* ***************************************************************** */

class DefiningPointsNominalType :
  public XmlTypeBase
{
public:
  DefiningPointsNominalType();
  DefiningPointsNominalType(
    DefiningPointNominalTypeLisd * DefiningPointIn);
  DefiningPointsNominalType(
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * linearUnitIn,
    NaturalType * nIn,
    XmlNonNegativeInteger * significantFiguresIn,
    ValidityEnumType * validityIn,
    XmlNonNegativeInteger * xDecimalPlacesIn,
    XmlNonNegativeInteger * xSignificantFiguresIn,
    ValidityEnumType * xValidityIn,
    XmlNonNegativeInteger * yDecimalPlacesIn,
    XmlNonNegativeInteger * ySignificantFiguresIn,
    ValidityEnumType * yValidityIn,
    XmlNonNegativeInteger * zDecimalPlacesIn,
    XmlNonNegativeInteger * zSignificantFiguresIn,
    ValidityEnumType * zValidityIn,
    DefiningPointNominalTypeLisd * DefiningPointIn);
  ~DefiningPointsNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  NaturalType * getn();
  void setn(NaturalType * nIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

  DefiningPointNominalTypeLisd * getDefiningPoint();
  void setDefiningPoint(DefiningPointNominalTypeLisd *);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  XmlToken * linearUnit;
  NaturalType * n;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
  DefiningPointNominalTypeLisd * DefiningPoint;
};

/* ***************************************************************** */

class EdgePointCastType :
  public ConstructionMethodBaseType
{
public:
  EdgePointCastType();
  EdgePointCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~EdgePointCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class EdgePointCheckedFeatureType :
  public XmlTypeBase
{
public:
  EdgePointCheckedFeatureType();
  EdgePointCheckedFeatureType(
    EdgePointCheckedType * CheckDetailsIn);
  ~EdgePointCheckedFeatureType();
  void printSelf(FILE * outFile);

  EdgePointCheckedType * getCheckDetails();
  void setCheckDetails(EdgePointCheckedType * CheckDetailsIn);

protected:
  EdgePointCheckedType * CheckDetails;
};

/* ***************************************************************** */

class EdgePointCheckedType :
  public XmlTypeBase
{
public:
  EdgePointCheckedType();
  EdgePointCheckedType(
    EdgePointCheckedTypeChoicePair * EdgePointCheckedTypePairIn);
  ~EdgePointCheckedType();
  void printSelf(FILE * outFile);

  EdgePointCheckedTypeChoicePair * getEdgePointCheckedTypePair();
  void setEdgePointCheckedTypePair(EdgePointCheckedTypeChoicePair * EdgePointCheckedTypePairIn);

protected:
  EdgePointCheckedTypeChoicePair * EdgePointCheckedTypePair;
};

/* ***************************************************************** */

union EdgePointCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  EdgePointConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class EdgePointCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  EdgePointCheckedTypeChoicePair();
  EdgePointCheckedTypeChoicePair(
    whichOne EdgePointCheckedTypeTypeIn,
    EdgePointCheckedTypeVal EdgePointCheckedTypeValueIn);
  ~EdgePointCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EdgePointCheckedTypeType;
  EdgePointCheckedTypeVal EdgePointCheckedTypeValue;
};

/* ***************************************************************** */

class EdgePointConstructionMethodType :
  public XmlTypeBase
{
public:
  EdgePointConstructionMethodType();
  EdgePointConstructionMethodType(
    EdgePointConstructionMethodTypeChoicePair * EdgePointConstructionMethodTypePairIn);
  ~EdgePointConstructionMethodType();
  void printSelf(FILE * outFile);

  EdgePointConstructionMethodTypeChoicePair * getEdgePointConstructionMethodTypePair();
  void setEdgePointConstructionMethodTypePair(EdgePointConstructionMethodTypeChoicePair * EdgePointConstructionMethodTypePairIn);

protected:
  EdgePointConstructionMethodTypeChoicePair * EdgePointConstructionMethodTypePair;
};

/* ***************************************************************** */

union EdgePointConstructionMethodTypeVal
{
  EdgePointCopyType * Copy;
  EdgePointCastType * Cast;
  EdgePointTransformType * Transform;
  EdgePointFromScanType * FromScan;
};

/* ***************************************************************** */

class EdgePointConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  EdgePointConstructionMethodTypeChoicePair();
  EdgePointConstructionMethodTypeChoicePair(
    whichOne EdgePointConstructionMethodTypeTypeIn,
    EdgePointConstructionMethodTypeVal EdgePointConstructionMethodTypeValueIn);
  ~EdgePointConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EdgePointConstructionMethodTypeType;
  EdgePointConstructionMethodTypeVal EdgePointConstructionMethodTypeValue;
};

/* ***************************************************************** */

class EdgePointCopyType :
  public ConstructionMethodBaseType
{
public:
  EdgePointCopyType();
  EdgePointCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseEdgePointIn);
  ~EdgePointCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseEdgePoint();
  void setBaseEdgePoint(BaseFeatureType * BaseEdgePointIn);

protected:
  BaseFeatureType * BaseEdgePoint;
};

/* ***************************************************************** */

class EdgePointFromScanType :
  public ConstructionMethodBaseType
{
public:
  EdgePointFromScanType();
  EdgePointFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    LinearValueType * PatchRadiusIn,
    LinearValueType * DistanceIn,
    LinearValueType * DepthIn,
    RetrievalMethodEnumType * RetrievalMethodIn);
  ~EdgePointFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  LinearValueType * getPatchRadius();
  void setPatchRadius(LinearValueType * PatchRadiusIn);
  LinearValueType * getDistance();
  void setDistance(LinearValueType * DistanceIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);
  RetrievalMethodEnumType * getRetrievalMethod();
  void setRetrievalMethod(RetrievalMethodEnumType * RetrievalMethodIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  LinearValueType * PatchRadius;
  LinearValueType * Distance;
  LinearValueType * Depth;
  RetrievalMethodEnumType * RetrievalMethod;
};

/* ***************************************************************** */

class EdgePointMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  EdgePointMeasurementDeterminationType();
  EdgePointMeasurementDeterminationType(
    EdgePointMeasurementDeterminationTypeChoicePair * EdgePointMeasurementDeterminationTypePairIn);
  ~EdgePointMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  EdgePointMeasurementDeterminationTypeChoicePair * getEdgePointMeasurementDeterminationTypePair();
  void setEdgePointMeasurementDeterminationTypePair(EdgePointMeasurementDeterminationTypeChoicePair * EdgePointMeasurementDeterminationTypePairIn);

protected:
  EdgePointMeasurementDeterminationTypeChoicePair * EdgePointMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union EdgePointMeasurementDeterminationTypeVal
{
  EdgePointCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class EdgePointMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  EdgePointMeasurementDeterminationTypeChoicePair();
  EdgePointMeasurementDeterminationTypeChoicePair(
    whichOne EdgePointMeasurementDeterminationTypeTypeIn,
    EdgePointMeasurementDeterminationTypeVal EdgePointMeasurementDeterminationTypeValueIn);
  ~EdgePointMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EdgePointMeasurementDeterminationTypeType;
  EdgePointMeasurementDeterminationTypeVal EdgePointMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class EdgePointTransformType :
  public ConstructionMethodBaseType
{
public:
  EdgePointTransformType();
  EdgePointTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseEdgePointIn,
    TransformationReferenceType * TransformationIn);
  ~EdgePointTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseEdgePoint();
  void setBaseEdgePoint(BaseFeatureType * BaseEdgePointIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseEdgePoint;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class EllipseBestFitType :
  public ConstructionMethodBaseType
{
public:
  EllipseBestFitType();
  EllipseBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  EllipseBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~EllipseBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class EllipseCastType :
  public ConstructionMethodBaseType
{
public:
  EllipseCastType();
  EllipseCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~EllipseCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class EllipseCheckedFeatureType :
  public XmlTypeBase
{
public:
  EllipseCheckedFeatureType();
  EllipseCheckedFeatureType(
    EllipseCheckedType * CheckDetailsIn);
  ~EllipseCheckedFeatureType();
  void printSelf(FILE * outFile);

  EllipseCheckedType * getCheckDetails();
  void setCheckDetails(EllipseCheckedType * CheckDetailsIn);

protected:
  EllipseCheckedType * CheckDetails;
};

/* ***************************************************************** */

class EllipseCheckedType :
  public XmlTypeBase
{
public:
  EllipseCheckedType();
  EllipseCheckedType(
    EllipseCheckedTypeChoicePair * EllipseCheckedTypePairIn);
  ~EllipseCheckedType();
  void printSelf(FILE * outFile);

  EllipseCheckedTypeChoicePair * getEllipseCheckedTypePair();
  void setEllipseCheckedTypePair(EllipseCheckedTypeChoicePair * EllipseCheckedTypePairIn);

protected:
  EllipseCheckedTypeChoicePair * EllipseCheckedTypePair;
};

/* ***************************************************************** */

union EllipseCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  EllipseConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class EllipseCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  EllipseCheckedTypeChoicePair();
  EllipseCheckedTypeChoicePair(
    whichOne EllipseCheckedTypeTypeIn,
    EllipseCheckedTypeVal EllipseCheckedTypeValueIn);
  ~EllipseCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipseCheckedTypeType;
  EllipseCheckedTypeVal EllipseCheckedTypeValue;
};

/* ***************************************************************** */

class EllipseConstructionMethodType :
  public XmlTypeBase
{
public:
  EllipseConstructionMethodType();
  EllipseConstructionMethodType(
    EllipseConstructionMethodTypeChoicePair * EllipseConstructionMethodTypePairIn);
  ~EllipseConstructionMethodType();
  void printSelf(FILE * outFile);

  EllipseConstructionMethodTypeChoicePair * getEllipseConstructionMethodTypePair();
  void setEllipseConstructionMethodTypePair(EllipseConstructionMethodTypeChoicePair * EllipseConstructionMethodTypePairIn);

protected:
  EllipseConstructionMethodTypeChoicePair * EllipseConstructionMethodTypePair;
};

/* ***************************************************************** */

union EllipseConstructionMethodTypeVal
{
  EllipseBestFitType * BestFit;
  EllipseRecompType * Recompensated;
  EllipseIntersectionType * Intersection;
  EllipseProjectionType * Projection;
  EllipseCopyType * Copy;
  EllipseCastType * Cast;
  EllipseTransformType * Transform;
  EllipseFromScanType * FromScan;
};

/* ***************************************************************** */

class EllipseConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    IntersectionE,
    ProjectionE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  EllipseConstructionMethodTypeChoicePair();
  EllipseConstructionMethodTypeChoicePair(
    whichOne EllipseConstructionMethodTypeTypeIn,
    EllipseConstructionMethodTypeVal EllipseConstructionMethodTypeValueIn);
  ~EllipseConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipseConstructionMethodTypeType;
  EllipseConstructionMethodTypeVal EllipseConstructionMethodTypeValue;
};

/* ***************************************************************** */

class EllipseCopyType :
  public ConstructionMethodBaseType
{
public:
  EllipseCopyType();
  EllipseCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseEllipseIn);
  ~EllipseCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseEllipse();
  void setBaseEllipse(BaseFeatureType * BaseEllipseIn);

protected:
  BaseFeatureType * BaseEllipse;
};

/* ***************************************************************** */

class EllipseFromScanType :
  public ConstructionMethodBaseType
{
public:
  EllipseFromScanType();
  EllipseFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    LinearValueType * DepthIn);
  ~EllipseFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  LinearValueType * Depth;
};

/* ***************************************************************** */

class EllipseIntersectionType :
  public ConstructionMethodBaseType
{
public:
  EllipseIntersectionType();
  EllipseIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * IntersectionPlaneIn,
    BaseFeatureType * IntersectionFeatureIn);
  ~EllipseIntersectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getIntersectionPlane();
  void setIntersectionPlane(BaseFeatureType * IntersectionPlaneIn);
  BaseFeatureType * getIntersectionFeature();
  void setIntersectionFeature(BaseFeatureType * IntersectionFeatureIn);

protected:
  BaseFeatureType * IntersectionPlane;
  BaseFeatureType * IntersectionFeature;
};

/* ***************************************************************** */

class EllipseMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  EllipseMeasurementDeterminationType();
  EllipseMeasurementDeterminationType(
    EllipseMeasurementDeterminationTypeChoicePair * EllipseMeasurementDeterminationTypePairIn);
  ~EllipseMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  EllipseMeasurementDeterminationTypeChoicePair * getEllipseMeasurementDeterminationTypePair();
  void setEllipseMeasurementDeterminationTypePair(EllipseMeasurementDeterminationTypeChoicePair * EllipseMeasurementDeterminationTypePairIn);

protected:
  EllipseMeasurementDeterminationTypeChoicePair * EllipseMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union EllipseMeasurementDeterminationTypeVal
{
  EllipseCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class EllipseMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  EllipseMeasurementDeterminationTypeChoicePair();
  EllipseMeasurementDeterminationTypeChoicePair(
    whichOne EllipseMeasurementDeterminationTypeTypeIn,
    EllipseMeasurementDeterminationTypeVal EllipseMeasurementDeterminationTypeValueIn);
  ~EllipseMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipseMeasurementDeterminationTypeType;
  EllipseMeasurementDeterminationTypeVal EllipseMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class EllipseProjectionType :
  public ConstructionMethodBaseType
{
public:
  EllipseProjectionType();
  EllipseProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionFeatureIn,
    BaseFeatureType * ProjectionPlaneIn);
  ~EllipseProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionFeature();
  void setProjectionFeature(BaseFeatureType * ProjectionFeatureIn);
  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);

protected:
  BaseFeatureType * ProjectionFeature;
  BaseFeatureType * ProjectionPlane;
};

/* ***************************************************************** */

class EllipseRecompType :
  public ConstructionMethodBaseType
{
public:
  EllipseRecompType();
  EllipseRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~EllipseRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class EllipseTransformType :
  public ConstructionMethodBaseType
{
public:
  EllipseTransformType();
  EllipseTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseEllipseIn,
    TransformationReferenceType * TransformationIn);
  ~EllipseTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseEllipse();
  void setBaseEllipse(BaseFeatureType * BaseEllipseIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseEllipse;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class EllipticalArcBestFitType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcBestFitType();
  EllipticalArcBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  EllipticalArcBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~EllipticalArcBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class EllipticalArcCastType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcCastType();
  EllipticalArcCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~EllipticalArcCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class EllipticalArcCheckedFeatureType :
  public XmlTypeBase
{
public:
  EllipticalArcCheckedFeatureType();
  EllipticalArcCheckedFeatureType(
    EllipticalArcCheckedType * CheckDetailsIn);
  ~EllipticalArcCheckedFeatureType();
  void printSelf(FILE * outFile);

  EllipticalArcCheckedType * getCheckDetails();
  void setCheckDetails(EllipticalArcCheckedType * CheckDetailsIn);

protected:
  EllipticalArcCheckedType * CheckDetails;
};

/* ***************************************************************** */

class EllipticalArcCheckedType :
  public XmlTypeBase
{
public:
  EllipticalArcCheckedType();
  EllipticalArcCheckedType(
    EllipticalArcCheckedTypeChoicePair * EllipticalArcCheckedTypePairIn);
  ~EllipticalArcCheckedType();
  void printSelf(FILE * outFile);

  EllipticalArcCheckedTypeChoicePair * getEllipticalArcCheckedTypePair();
  void setEllipticalArcCheckedTypePair(EllipticalArcCheckedTypeChoicePair * EllipticalArcCheckedTypePairIn);

protected:
  EllipticalArcCheckedTypeChoicePair * EllipticalArcCheckedTypePair;
};

/* ***************************************************************** */

union EllipticalArcCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  EllipticalArcConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class EllipticalArcCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  EllipticalArcCheckedTypeChoicePair();
  EllipticalArcCheckedTypeChoicePair(
    whichOne EllipticalArcCheckedTypeTypeIn,
    EllipticalArcCheckedTypeVal EllipticalArcCheckedTypeValueIn);
  ~EllipticalArcCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipticalArcCheckedTypeType;
  EllipticalArcCheckedTypeVal EllipticalArcCheckedTypeValue;
};

/* ***************************************************************** */

class EllipticalArcConstructionMethodType :
  public XmlTypeBase
{
public:
  EllipticalArcConstructionMethodType();
  EllipticalArcConstructionMethodType(
    EllipticalArcConstructionMethodTypeChoicePair * EllipticalArcConstructionMethodTypePairIn);
  ~EllipticalArcConstructionMethodType();
  void printSelf(FILE * outFile);

  EllipticalArcConstructionMethodTypeChoicePair * getEllipticalArcConstructionMethodTypePair();
  void setEllipticalArcConstructionMethodTypePair(EllipticalArcConstructionMethodTypeChoicePair * EllipticalArcConstructionMethodTypePairIn);

protected:
  EllipticalArcConstructionMethodTypeChoicePair * EllipticalArcConstructionMethodTypePair;
};

/* ***************************************************************** */

union EllipticalArcConstructionMethodTypeVal
{
  EllipticalArcBestFitType * BestFit;
  EllipticalArcRecompType * Recompensated;
  EllipticalArcIntersectionType * Intersection;
  EllipticalArcProjectionType * Projection;
  EllipticalArcCopyType * Copy;
  EllipticalArcCastType * Cast;
  EllipticalArcTransformType * Transform;
  EllipticalArcFromScanType * FromScan;
};

/* ***************************************************************** */

class EllipticalArcConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    IntersectionE,
    ProjectionE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  EllipticalArcConstructionMethodTypeChoicePair();
  EllipticalArcConstructionMethodTypeChoicePair(
    whichOne EllipticalArcConstructionMethodTypeTypeIn,
    EllipticalArcConstructionMethodTypeVal EllipticalArcConstructionMethodTypeValueIn);
  ~EllipticalArcConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipticalArcConstructionMethodTypeType;
  EllipticalArcConstructionMethodTypeVal EllipticalArcConstructionMethodTypeValue;
};

/* ***************************************************************** */

class EllipticalArcCopyType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcCopyType();
  EllipticalArcCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseEllipticalArcIn);
  ~EllipticalArcCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseEllipticalArc();
  void setBaseEllipticalArc(BaseFeatureType * BaseEllipticalArcIn);

protected:
  BaseFeatureType * BaseEllipticalArc;
};

/* ***************************************************************** */

class EllipticalArcFromScanType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcFromScanType();
  EllipticalArcFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    LinearValueType * DepthIn);
  ~EllipticalArcFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  LinearValueType * Depth;
};

/* ***************************************************************** */

class EllipticalArcIntersectionType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcIntersectionType();
  EllipticalArcIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * IntersectionPlaneIn,
    BaseFeatureType * IntersectionFeatureIn);
  ~EllipticalArcIntersectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getIntersectionPlane();
  void setIntersectionPlane(BaseFeatureType * IntersectionPlaneIn);
  BaseFeatureType * getIntersectionFeature();
  void setIntersectionFeature(BaseFeatureType * IntersectionFeatureIn);

protected:
  BaseFeatureType * IntersectionPlane;
  BaseFeatureType * IntersectionFeature;
};

/* ***************************************************************** */

class EllipticalArcMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  EllipticalArcMeasurementDeterminationType();
  EllipticalArcMeasurementDeterminationType(
    EllipticalArcMeasurementDeterminationTypeChoicePair * EllipticalArcMeasurementDeterminationTypePairIn);
  ~EllipticalArcMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  EllipticalArcMeasurementDeterminationTypeChoicePair * getEllipticalArcMeasurementDeterminationTypePair();
  void setEllipticalArcMeasurementDeterminationTypePair(EllipticalArcMeasurementDeterminationTypeChoicePair * EllipticalArcMeasurementDeterminationTypePairIn);

protected:
  EllipticalArcMeasurementDeterminationTypeChoicePair * EllipticalArcMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union EllipticalArcMeasurementDeterminationTypeVal
{
  EllipticalArcCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class EllipticalArcMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  EllipticalArcMeasurementDeterminationTypeChoicePair();
  EllipticalArcMeasurementDeterminationTypeChoicePair(
    whichOne EllipticalArcMeasurementDeterminationTypeTypeIn,
    EllipticalArcMeasurementDeterminationTypeVal EllipticalArcMeasurementDeterminationTypeValueIn);
  ~EllipticalArcMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne EllipticalArcMeasurementDeterminationTypeType;
  EllipticalArcMeasurementDeterminationTypeVal EllipticalArcMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class EllipticalArcProjectionType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcProjectionType();
  EllipticalArcProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionFeatureIn,
    BaseFeatureType * ProjectionPlaneIn);
  ~EllipticalArcProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionFeature();
  void setProjectionFeature(BaseFeatureType * ProjectionFeatureIn);
  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);

protected:
  BaseFeatureType * ProjectionFeature;
  BaseFeatureType * ProjectionPlane;
};

/* ***************************************************************** */

class EllipticalArcRecompType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcRecompType();
  EllipticalArcRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~EllipticalArcRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class EllipticalArcTransformType :
  public ConstructionMethodBaseType
{
public:
  EllipticalArcTransformType();
  EllipticalArcTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseEllipticalArcIn,
    TransformationReferenceType * TransformationIn);
  ~EllipticalArcTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseEllipticalArc();
  void setBaseEllipticalArc(BaseFeatureType * BaseEllipticalArcIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseEllipticalArc;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class ElongatedCircleBestFitType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCircleBestFitType();
  ElongatedCircleBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ElongatedCircleBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~ElongatedCircleBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class ElongatedCircleCastType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCircleCastType();
  ElongatedCircleCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~ElongatedCircleCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class ElongatedCircleCheckedFeatureType :
  public XmlTypeBase
{
public:
  ElongatedCircleCheckedFeatureType();
  ElongatedCircleCheckedFeatureType(
    ElongatedCircleCheckedType * CheckDetailsIn);
  ~ElongatedCircleCheckedFeatureType();
  void printSelf(FILE * outFile);

  ElongatedCircleCheckedType * getCheckDetails();
  void setCheckDetails(ElongatedCircleCheckedType * CheckDetailsIn);

protected:
  ElongatedCircleCheckedType * CheckDetails;
};

/* ***************************************************************** */

class ElongatedCircleCheckedType :
  public XmlTypeBase
{
public:
  ElongatedCircleCheckedType();
  ElongatedCircleCheckedType(
    ElongatedCircleCheckedTypeChoicePair * ElongatedCircleCheckedTypePairIn);
  ~ElongatedCircleCheckedType();
  void printSelf(FILE * outFile);

  ElongatedCircleCheckedTypeChoicePair * getElongatedCircleCheckedTypePair();
  void setElongatedCircleCheckedTypePair(ElongatedCircleCheckedTypeChoicePair * ElongatedCircleCheckedTypePairIn);

protected:
  ElongatedCircleCheckedTypeChoicePair * ElongatedCircleCheckedTypePair;
};

/* ***************************************************************** */

union ElongatedCircleCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  ElongatedCircleConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ElongatedCircleCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  ElongatedCircleCheckedTypeChoicePair();
  ElongatedCircleCheckedTypeChoicePair(
    whichOne ElongatedCircleCheckedTypeTypeIn,
    ElongatedCircleCheckedTypeVal ElongatedCircleCheckedTypeValueIn);
  ~ElongatedCircleCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCircleCheckedTypeType;
  ElongatedCircleCheckedTypeVal ElongatedCircleCheckedTypeValue;
};

/* ***************************************************************** */

class ElongatedCircleConstructionMethodType :
  public XmlTypeBase
{
public:
  ElongatedCircleConstructionMethodType();
  ElongatedCircleConstructionMethodType(
    ElongatedCircleConstructionMethodTypeChoicePair * ElongatedCircleConstructionMethodTypePairIn);
  ~ElongatedCircleConstructionMethodType();
  void printSelf(FILE * outFile);

  ElongatedCircleConstructionMethodTypeChoicePair * getElongatedCircleConstructionMethodTypePair();
  void setElongatedCircleConstructionMethodTypePair(ElongatedCircleConstructionMethodTypeChoicePair * ElongatedCircleConstructionMethodTypePairIn);

protected:
  ElongatedCircleConstructionMethodTypeChoicePair * ElongatedCircleConstructionMethodTypePair;
};

/* ***************************************************************** */

union ElongatedCircleConstructionMethodTypeVal
{
  ElongatedCircleBestFitType * BestFit;
  ElongatedCircleRecompType * Recompensated;
  ElongatedCircleCopyType * Copy;
  ElongatedCircleCastType * Cast;
  ElongatedCircleTransformType * Transform;
};

/* ***************************************************************** */

class ElongatedCircleConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  ElongatedCircleConstructionMethodTypeChoicePair();
  ElongatedCircleConstructionMethodTypeChoicePair(
    whichOne ElongatedCircleConstructionMethodTypeTypeIn,
    ElongatedCircleConstructionMethodTypeVal ElongatedCircleConstructionMethodTypeValueIn);
  ~ElongatedCircleConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCircleConstructionMethodTypeType;
  ElongatedCircleConstructionMethodTypeVal ElongatedCircleConstructionMethodTypeValue;
};

/* ***************************************************************** */

class ElongatedCircleCopyType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCircleCopyType();
  ElongatedCircleCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseElongatedCircleIn);
  ~ElongatedCircleCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseElongatedCircle();
  void setBaseElongatedCircle(BaseFeatureType * BaseElongatedCircleIn);

protected:
  BaseFeatureType * BaseElongatedCircle;
};

/* ***************************************************************** */

class ElongatedCircleMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  ElongatedCircleMeasurementDeterminationType();
  ElongatedCircleMeasurementDeterminationType(
    ElongatedCircleMeasurementDeterminationTypeChoicePair * ElongatedCircleMeasurementDeterminationTypePairIn);
  ~ElongatedCircleMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  ElongatedCircleMeasurementDeterminationTypeChoicePair * getElongatedCircleMeasurementDeterminationTypePair();
  void setElongatedCircleMeasurementDeterminationTypePair(ElongatedCircleMeasurementDeterminationTypeChoicePair * ElongatedCircleMeasurementDeterminationTypePairIn);

protected:
  ElongatedCircleMeasurementDeterminationTypeChoicePair * ElongatedCircleMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union ElongatedCircleMeasurementDeterminationTypeVal
{
  ElongatedCircleCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class ElongatedCircleMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  ElongatedCircleMeasurementDeterminationTypeChoicePair();
  ElongatedCircleMeasurementDeterminationTypeChoicePair(
    whichOne ElongatedCircleMeasurementDeterminationTypeTypeIn,
    ElongatedCircleMeasurementDeterminationTypeVal ElongatedCircleMeasurementDeterminationTypeValueIn);
  ~ElongatedCircleMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCircleMeasurementDeterminationTypeType;
  ElongatedCircleMeasurementDeterminationTypeVal ElongatedCircleMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ElongatedCircleRecompType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCircleRecompType();
  ElongatedCircleRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~ElongatedCircleRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class ElongatedCircleTransformType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCircleTransformType();
  ElongatedCircleTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseElongatedCircleIn,
    TransformationReferenceType * TransformationIn);
  ~ElongatedCircleTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseElongatedCircle();
  void setBaseElongatedCircle(BaseFeatureType * BaseElongatedCircleIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseElongatedCircle;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class ElongatedCylinderBestFitType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCylinderBestFitType();
  ElongatedCylinderBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ElongatedCylinderBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~ElongatedCylinderBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class ElongatedCylinderCastType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCylinderCastType();
  ElongatedCylinderCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~ElongatedCylinderCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class ElongatedCylinderCheckedFeatureType :
  public XmlTypeBase
{
public:
  ElongatedCylinderCheckedFeatureType();
  ElongatedCylinderCheckedFeatureType(
    ElongatedCylinderCheckedType * CheckDetailsIn);
  ~ElongatedCylinderCheckedFeatureType();
  void printSelf(FILE * outFile);

  ElongatedCylinderCheckedType * getCheckDetails();
  void setCheckDetails(ElongatedCylinderCheckedType * CheckDetailsIn);

protected:
  ElongatedCylinderCheckedType * CheckDetails;
};

/* ***************************************************************** */

class ElongatedCylinderCheckedType :
  public XmlTypeBase
{
public:
  ElongatedCylinderCheckedType();
  ElongatedCylinderCheckedType(
    ElongatedCylinderCheckedTypeChoicePair * ElongatedCylinderCheckedTypePairIn);
  ~ElongatedCylinderCheckedType();
  void printSelf(FILE * outFile);

  ElongatedCylinderCheckedTypeChoicePair * getElongatedCylinderCheckedTypePair();
  void setElongatedCylinderCheckedTypePair(ElongatedCylinderCheckedTypeChoicePair * ElongatedCylinderCheckedTypePairIn);

protected:
  ElongatedCylinderCheckedTypeChoicePair * ElongatedCylinderCheckedTypePair;
};

/* ***************************************************************** */

union ElongatedCylinderCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  ElongatedCylinderConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ElongatedCylinderCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  ElongatedCylinderCheckedTypeChoicePair();
  ElongatedCylinderCheckedTypeChoicePair(
    whichOne ElongatedCylinderCheckedTypeTypeIn,
    ElongatedCylinderCheckedTypeVal ElongatedCylinderCheckedTypeValueIn);
  ~ElongatedCylinderCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCylinderCheckedTypeType;
  ElongatedCylinderCheckedTypeVal ElongatedCylinderCheckedTypeValue;
};

/* ***************************************************************** */

class ElongatedCylinderConstructionMethodType :
  public XmlTypeBase
{
public:
  ElongatedCylinderConstructionMethodType();
  ElongatedCylinderConstructionMethodType(
    ElongatedCylinderConstructionMethodTypeChoicePair * ElongatedCylinderConstructionMethodTypePairIn);
  ~ElongatedCylinderConstructionMethodType();
  void printSelf(FILE * outFile);

  ElongatedCylinderConstructionMethodTypeChoicePair * getElongatedCylinderConstructionMethodTypePair();
  void setElongatedCylinderConstructionMethodTypePair(ElongatedCylinderConstructionMethodTypeChoicePair * ElongatedCylinderConstructionMethodTypePairIn);

protected:
  ElongatedCylinderConstructionMethodTypeChoicePair * ElongatedCylinderConstructionMethodTypePair;
};

/* ***************************************************************** */

union ElongatedCylinderConstructionMethodTypeVal
{
  ElongatedCylinderBestFitType * BestFit;
  ElongatedCylinderRecompType * Recompensated;
  ElongatedCylinderCopyType * Copy;
  ElongatedCylinderCastType * Cast;
  ElongatedCylinderTransformType * Transform;
};

/* ***************************************************************** */

class ElongatedCylinderConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  ElongatedCylinderConstructionMethodTypeChoicePair();
  ElongatedCylinderConstructionMethodTypeChoicePair(
    whichOne ElongatedCylinderConstructionMethodTypeTypeIn,
    ElongatedCylinderConstructionMethodTypeVal ElongatedCylinderConstructionMethodTypeValueIn);
  ~ElongatedCylinderConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCylinderConstructionMethodTypeType;
  ElongatedCylinderConstructionMethodTypeVal ElongatedCylinderConstructionMethodTypeValue;
};

/* ***************************************************************** */

class ElongatedCylinderCopyType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCylinderCopyType();
  ElongatedCylinderCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseElongatedCylinderIn);
  ~ElongatedCylinderCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseElongatedCylinder();
  void setBaseElongatedCylinder(BaseFeatureType * BaseElongatedCylinderIn);

protected:
  BaseFeatureType * BaseElongatedCylinder;
};

/* ***************************************************************** */

class ElongatedCylinderMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  ElongatedCylinderMeasurementDeterminationType();
  ElongatedCylinderMeasurementDeterminationType(
    ElongatedCylinderMeasurementDeterminationTypeChoicePair * ElongatedCylinderMeasurementDeterminationTypePairIn);
  ~ElongatedCylinderMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  ElongatedCylinderMeasurementDeterminationTypeChoicePair * getElongatedCylinderMeasurementDeterminationTypePair();
  void setElongatedCylinderMeasurementDeterminationTypePair(ElongatedCylinderMeasurementDeterminationTypeChoicePair * ElongatedCylinderMeasurementDeterminationTypePairIn);

protected:
  ElongatedCylinderMeasurementDeterminationTypeChoicePair * ElongatedCylinderMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union ElongatedCylinderMeasurementDeterminationTypeVal
{
  ElongatedCylinderCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class ElongatedCylinderMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  ElongatedCylinderMeasurementDeterminationTypeChoicePair();
  ElongatedCylinderMeasurementDeterminationTypeChoicePair(
    whichOne ElongatedCylinderMeasurementDeterminationTypeTypeIn,
    ElongatedCylinderMeasurementDeterminationTypeVal ElongatedCylinderMeasurementDeterminationTypeValueIn);
  ~ElongatedCylinderMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ElongatedCylinderMeasurementDeterminationTypeType;
  ElongatedCylinderMeasurementDeterminationTypeVal ElongatedCylinderMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ElongatedCylinderRecompType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCylinderRecompType();
  ElongatedCylinderRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~ElongatedCylinderRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class ElongatedCylinderTransformType :
  public ConstructionMethodBaseType
{
public:
  ElongatedCylinderTransformType();
  ElongatedCylinderTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseElongatedCylinderIn,
    TransformationReferenceType * TransformationIn);
  ~ElongatedCylinderTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseElongatedCylinder();
  void setBaseElongatedCylinder(BaseFeatureType * BaseElongatedCylinderIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseElongatedCylinder;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class ExtrudedCrossSectionBestFitType :
  public ConstructionMethodBaseType
{
public:
  ExtrudedCrossSectionBestFitType();
  ExtrudedCrossSectionBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ExtrudedCrossSectionBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~ExtrudedCrossSectionBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class ExtrudedCrossSectionCastType :
  public ConstructionMethodBaseType
{
public:
  ExtrudedCrossSectionCastType();
  ExtrudedCrossSectionCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~ExtrudedCrossSectionCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class ExtrudedCrossSectionCheckedFeatureType :
  public XmlTypeBase
{
public:
  ExtrudedCrossSectionCheckedFeatureType();
  ExtrudedCrossSectionCheckedFeatureType(
    ExtrudedCrossSectionCheckedType * CheckDetailsIn);
  ~ExtrudedCrossSectionCheckedFeatureType();
  void printSelf(FILE * outFile);

  ExtrudedCrossSectionCheckedType * getCheckDetails();
  void setCheckDetails(ExtrudedCrossSectionCheckedType * CheckDetailsIn);

protected:
  ExtrudedCrossSectionCheckedType * CheckDetails;
};

/* ***************************************************************** */

class ExtrudedCrossSectionCheckedType :
  public XmlTypeBase
{
public:
  ExtrudedCrossSectionCheckedType();
  ExtrudedCrossSectionCheckedType(
    ExtrudedCrossSectionCheckedTypeChoicePair * ExtrudedCrossSectionCheckedTypePairIn);
  ~ExtrudedCrossSectionCheckedType();
  void printSelf(FILE * outFile);

  ExtrudedCrossSectionCheckedTypeChoicePair * getExtrudedCrossSectionCheckedTypePair();
  void setExtrudedCrossSectionCheckedTypePair(ExtrudedCrossSectionCheckedTypeChoicePair * ExtrudedCrossSectionCheckedTypePairIn);

protected:
  ExtrudedCrossSectionCheckedTypeChoicePair * ExtrudedCrossSectionCheckedTypePair;
};

/* ***************************************************************** */

union ExtrudedCrossSectionCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  ExtrudedCrossSectionConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ExtrudedCrossSectionCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  ExtrudedCrossSectionCheckedTypeChoicePair();
  ExtrudedCrossSectionCheckedTypeChoicePair(
    whichOne ExtrudedCrossSectionCheckedTypeTypeIn,
    ExtrudedCrossSectionCheckedTypeVal ExtrudedCrossSectionCheckedTypeValueIn);
  ~ExtrudedCrossSectionCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExtrudedCrossSectionCheckedTypeType;
  ExtrudedCrossSectionCheckedTypeVal ExtrudedCrossSectionCheckedTypeValue;
};

/* ***************************************************************** */

class ExtrudedCrossSectionConstructionMethodType :
  public XmlTypeBase
{
public:
  ExtrudedCrossSectionConstructionMethodType();
  ExtrudedCrossSectionConstructionMethodType(
    ExtrudedCrossSectionConstructionMethodTypeChoicePair * ExtrudedCrossSectionConstructionMethodTypePairIn);
  ~ExtrudedCrossSectionConstructionMethodType();
  void printSelf(FILE * outFile);

  ExtrudedCrossSectionConstructionMethodTypeChoicePair * getExtrudedCrossSectionConstructionMethodTypePair();
  void setExtrudedCrossSectionConstructionMethodTypePair(ExtrudedCrossSectionConstructionMethodTypeChoicePair * ExtrudedCrossSectionConstructionMethodTypePairIn);

protected:
  ExtrudedCrossSectionConstructionMethodTypeChoicePair * ExtrudedCrossSectionConstructionMethodTypePair;
};

/* ***************************************************************** */

union ExtrudedCrossSectionConstructionMethodTypeVal
{
  ExtrudedCrossSectionBestFitType * BestFit;
  ExtrudedCrossSectionRecompType * Recompensated;
  ExtrudedCrossSectionCopyType * Copy;
  ExtrudedCrossSectionCastType * Cast;
  ExtrudedCrossSectionTransformType * Transform;
};

/* ***************************************************************** */

class ExtrudedCrossSectionConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  ExtrudedCrossSectionConstructionMethodTypeChoicePair();
  ExtrudedCrossSectionConstructionMethodTypeChoicePair(
    whichOne ExtrudedCrossSectionConstructionMethodTypeTypeIn,
    ExtrudedCrossSectionConstructionMethodTypeVal ExtrudedCrossSectionConstructionMethodTypeValueIn);
  ~ExtrudedCrossSectionConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExtrudedCrossSectionConstructionMethodTypeType;
  ExtrudedCrossSectionConstructionMethodTypeVal ExtrudedCrossSectionConstructionMethodTypeValue;
};

/* ***************************************************************** */

class ExtrudedCrossSectionCopyType :
  public ConstructionMethodBaseType
{
public:
  ExtrudedCrossSectionCopyType();
  ExtrudedCrossSectionCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseExtrudedCrossSectionIn);
  ~ExtrudedCrossSectionCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseExtrudedCrossSection();
  void setBaseExtrudedCrossSection(BaseFeatureType * BaseExtrudedCrossSectionIn);

protected:
  BaseFeatureType * BaseExtrudedCrossSection;
};

/* ***************************************************************** */

class ExtrudedCrossSectionMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  ExtrudedCrossSectionMeasurementDeterminationType();
  ExtrudedCrossSectionMeasurementDeterminationType(
    ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair * ExtrudedCrossSectionMeasurementDeterminationTypePairIn);
  ~ExtrudedCrossSectionMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair * getExtrudedCrossSectionMeasurementDeterminationTypePair();
  void setExtrudedCrossSectionMeasurementDeterminationTypePair(ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair * ExtrudedCrossSectionMeasurementDeterminationTypePairIn);

protected:
  ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair * ExtrudedCrossSectionMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union ExtrudedCrossSectionMeasurementDeterminationTypeVal
{
  ExtrudedCrossSectionCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair();
  ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair(
    whichOne ExtrudedCrossSectionMeasurementDeterminationTypeTypeIn,
    ExtrudedCrossSectionMeasurementDeterminationTypeVal ExtrudedCrossSectionMeasurementDeterminationTypeValueIn);
  ~ExtrudedCrossSectionMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ExtrudedCrossSectionMeasurementDeterminationTypeType;
  ExtrudedCrossSectionMeasurementDeterminationTypeVal ExtrudedCrossSectionMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ExtrudedCrossSectionRecompType :
  public ConstructionMethodBaseType
{
public:
  ExtrudedCrossSectionRecompType();
  ExtrudedCrossSectionRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~ExtrudedCrossSectionRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class ExtrudedCrossSectionTransformType :
  public ConstructionMethodBaseType
{
public:
  ExtrudedCrossSectionTransformType();
  ExtrudedCrossSectionTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseExtrudedCrossSectionIn,
    TransformationReferenceType * TransformationIn);
  ~ExtrudedCrossSectionTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseExtrudedCrossSection();
  void setBaseExtrudedCrossSection(BaseFeatureType * BaseExtrudedCrossSectionIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseExtrudedCrossSection;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class FeatureAspectsListsType :
  public XmlTypeBase
{
public:
  FeatureAspectsListsType();
  FeatureAspectsListsType(
    FeatureDefinitionsType * FeatureDefinitionsIn,
    FeatureNominalsType * FeatureNominalsIn,
    FeatureItemsType * FeatureItemsIn,
    NominalPointSetListType * NominalPointSetsIn);
  ~FeatureAspectsListsType();
  void printSelf(FILE * outFile);

  FeatureDefinitionsType * getFeatureDefinitions();
  void setFeatureDefinitions(FeatureDefinitionsType * FeatureDefinitionsIn);
  FeatureNominalsType * getFeatureNominals();
  void setFeatureNominals(FeatureNominalsType * FeatureNominalsIn);
  FeatureItemsType * getFeatureItems();
  void setFeatureItems(FeatureItemsType * FeatureItemsIn);
  NominalPointSetListType * getNominalPointSets();
  void setNominalPointSets(NominalPointSetListType * NominalPointSetsIn);

protected:
  FeatureDefinitionsType * FeatureDefinitions;
  FeatureNominalsType * FeatureNominals;
  FeatureItemsType * FeatureItems;
  NominalPointSetListType * NominalPointSets;
};

/* ***************************************************************** */

class FeatureBaseType :
  public XmlTypeBase
{
public:
  FeatureBaseType();
  FeatureBaseType(
    AttributesType * AttributesIn);
  FeatureBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~FeatureBaseType();
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

/* ***************************************************************** */

class FeatureDefinitionBaseType :
  public FeatureBaseType
{
public:
  FeatureDefinitionBaseType();
  FeatureDefinitionBaseType(
    AttributesType * AttributesIn);
  FeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~FeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class FeatureDefinitionBaseTypeLisd :
  public std::list<FeatureDefinitionBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  FeatureDefinitionBaseTypeLisd();
  FeatureDefinitionBaseTypeLisd(
    FeatureDefinitionBaseType * aFeatureDefinitionBaseType);
  ~FeatureDefinitionBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureDefinitionsType :
  public XmlTypeBase
{
public:
  FeatureDefinitionsType();
  FeatureDefinitionsType(
    FeatureDefinitionBaseTypeLisd * FeatureDefinitionIn);
  FeatureDefinitionsType(
    NaturalType * nIn,
    FeatureDefinitionBaseTypeLisd * FeatureDefinitionIn);
  ~FeatureDefinitionsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FeatureDefinitionBaseTypeLisd * getFeatureDefinition();
  void setFeatureDefinition(FeatureDefinitionBaseTypeLisd *);

protected:
  NaturalType * n;
  FeatureDefinitionBaseTypeLisd * FeatureDefinition;
};

/* ***************************************************************** */

class FeatureItemBaseType :
  public FeatureBaseType
{
public:
  FeatureItemBaseType();
  FeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  FeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~FeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceFullType * getFeatureNominalId();
  void setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn);
  QIFReferenceType * getParentFeatureItemId();
  void setParentFeatureItemId(QIFReferenceType * ParentFeatureItemIdIn);
  XmlToken * getFeatureName();
  void setFeatureName(XmlToken * FeatureNameIn);
  QPIdType * getUUID();
  void setUUID(QPIdType * UUIDIn);
  ArrayReferenceType * getNotableEventIds();
  void setNotableEventIds(ArrayReferenceType * NotableEventIdsIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  QIFReferenceFullType * FeatureNominalId;
  QIFReferenceType * ParentFeatureItemId;
  XmlToken * FeatureName;
  QPIdType * UUID;
  ArrayReferenceType * NotableEventIds;
  QIFReferenceFullType * CoordinateSystemId;
};

/* ***************************************************************** */

class FeatureItemBaseTypeLisd :
  public std::list<FeatureItemBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  FeatureItemBaseTypeLisd();
  FeatureItemBaseTypeLisd(
    FeatureItemBaseType * aFeatureItemBaseType);
  ~FeatureItemBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureItemsType :
  public XmlTypeBase
{
public:
  FeatureItemsType();
  FeatureItemsType(
    FeatureItemBaseTypeLisd * FeatureItemIn);
  FeatureItemsType(
    NaturalType * nIn,
    FeatureItemBaseTypeLisd * FeatureItemIn);
  ~FeatureItemsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FeatureItemBaseTypeLisd * getFeatureItem();
  void setFeatureItem(FeatureItemBaseTypeLisd *);

protected:
  NaturalType * n;
  FeatureItemBaseTypeLisd * FeatureItem;
};

/* ***************************************************************** */

class FeatureMeasurementBaseType :
  public FeatureBaseType
{
public:
  FeatureMeasurementBaseType();
  FeatureMeasurementBaseType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn);
  FeatureMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn);
  ~FeatureMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getFeatureItemId();
  void setFeatureItemId(QIFReferenceType * FeatureItemIdIn);
  XmlToken * getFeatureName();
  void setFeatureName(XmlToken * FeatureNameIn);
  XmlDateTime * getTimeStamp();
  void setTimeStamp(XmlDateTime * TimeStampIn);
  QIFReferenceFullType * getActualComponentId();
  void setActualComponentId(QIFReferenceFullType * ActualComponentIdIn);
  QIFReferenceFullType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceFullType * ManufacturingProcessIdIn);
  ArrayReferenceFullType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceFullType * MeasurementDeviceIdsIn);
  QIFReferenceType * getActualTransformId();
  void setActualTransformId(QIFReferenceType * ActualTransformIdIn);
  ArrayReferenceFullType * getNotedEventIds();
  void setNotedEventIds(ArrayReferenceFullType * NotedEventIdsIn);

protected:
  QIFReferenceType * FeatureItemId;
  XmlToken * FeatureName;
  XmlDateTime * TimeStamp;
  QIFReferenceFullType * ActualComponentId;
  QIFReferenceFullType * ManufacturingProcessId;
  ArrayReferenceFullType * MeasurementDeviceIds;
  QIFReferenceType * ActualTransformId;
  ArrayReferenceFullType * NotedEventIds;
};

/* ***************************************************************** */

class FeatureMeasurementBaseTypeLisd :
  public std::list<FeatureMeasurementBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  FeatureMeasurementBaseTypeLisd();
  FeatureMeasurementBaseTypeLisd(
    FeatureMeasurementBaseType * aFeatureMeasurementBaseType);
  ~FeatureMeasurementBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureMeasurementsType :
  public XmlTypeBase
{
public:
  FeatureMeasurementsType();
  FeatureMeasurementsType(
    FeatureMeasurementBaseTypeLisd * FeatureMeasurementIn);
  FeatureMeasurementsType(
    NaturalType * nIn,
    FeatureMeasurementBaseTypeLisd * FeatureMeasurementIn);
  ~FeatureMeasurementsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FeatureMeasurementBaseTypeLisd * getFeatureMeasurement();
  void setFeatureMeasurement(FeatureMeasurementBaseTypeLisd *);

protected:
  NaturalType * n;
  FeatureMeasurementBaseTypeLisd * FeatureMeasurement;
};

/* ***************************************************************** */

class FeatureNominalBaseType :
  public FeatureBaseType
{
public:
  FeatureNominalBaseType();
  FeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn);
  FeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn);
  ~FeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getName();
  void setName(XmlToken * NameIn);
  QPIdType * getUUID();
  void setUUID(QPIdType * UUIDIn);
  QIFReferenceType * getFeatureDefinitionId();
  void setFeatureDefinitionId(QIFReferenceType * FeatureDefinitionIdIn);
  QIFReferenceType * getParentFeatureNominalId();
  void setParentFeatureNominalId(QIFReferenceType * ParentFeatureNominalIdIn);
  ArrayReferenceFullType * getEntityInternalIds();
  void setEntityInternalIds(ArrayReferenceFullType * EntityInternalIdsIn);
  ArrayReferenceFullType * getEntityExternalIds();
  void setEntityExternalIds(ArrayReferenceFullType * EntityExternalIdsIn);

protected:
  XmlToken * Name;
  QPIdType * UUID;
  QIFReferenceType * FeatureDefinitionId;
  QIFReferenceType * ParentFeatureNominalId;
  ArrayReferenceFullType * EntityInternalIds;
  ArrayReferenceFullType * EntityExternalIds;
};

/* ***************************************************************** */

class FeatureNominalBaseTypeLisd :
  public std::list<FeatureNominalBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  FeatureNominalBaseTypeLisd();
  FeatureNominalBaseTypeLisd(
    FeatureNominalBaseType * aFeatureNominalBaseType);
  ~FeatureNominalBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureNominalsType :
  public XmlTypeBase
{
public:
  FeatureNominalsType();
  FeatureNominalsType(
    FeatureNominalBaseTypeLisd * FeatureNominalIn);
  FeatureNominalsType(
    NaturalType * nIn,
    FeatureNominalBaseTypeLisd * FeatureNominalIn);
  ~FeatureNominalsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FeatureNominalBaseTypeLisd * getFeatureNominal();
  void setFeatureNominal(FeatureNominalBaseTypeLisd *);

protected:
  NaturalType * n;
  FeatureNominalBaseTypeLisd * FeatureNominal;
};

/* ***************************************************************** */

class FeatureZoneBaseType :
  public XmlTypeBase
{
public:
  FeatureZoneBaseType();
  FeatureZoneBaseType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn);
  FeatureZoneBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn);
  ~FeatureZoneBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlToken * getLabel();
  void setLabel(XmlToken * LabelIn);
  QIFReferenceFullType * getSurfaceFeatureNominalId();
  void setSurfaceFeatureNominalId(QIFReferenceFullType * SurfaceFeatureNominalIdIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlToken * Label;
  QIFReferenceFullType * SurfaceFeatureNominalId;
};

/* ***************************************************************** */

class FeatureZoneBaseTypeLisd :
  public std::list<FeatureZoneBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  FeatureZoneBaseTypeLisd();
  FeatureZoneBaseTypeLisd(
    FeatureZoneBaseType * aFeatureZoneBaseType);
  ~FeatureZoneBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class FeatureZoneCurveBaseType :
  public FeatureZoneBaseType
{
public:
  FeatureZoneCurveBaseType();
  FeatureZoneCurveBaseType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In);
  FeatureZoneCurveBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In);
  ~FeatureZoneCurveBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  FeatureZoneCurv_1103_Type * getFeatureZoneCurv_1103();
  void setFeatureZoneCurv_1103(FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In);

protected:
  FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103;
};

/* ***************************************************************** */

class FeatureZoneCurveCircularType :
  public FeatureZoneCurveBaseType
{
public:
  FeatureZoneCurveCircularType();
  FeatureZoneCurveCircularType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In,
    CircleType * CircleIn);
  FeatureZoneCurveCircularType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In,
    CircleType * CircleIn);
  ~FeatureZoneCurveCircularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CircleType * getCircle();
  void setCircle(CircleType * CircleIn);

protected:
  CircleType * Circle;
};

/* ***************************************************************** */

class FeatureZoneCurveIrregularType :
  public FeatureZoneCurveBaseType
{
public:
  FeatureZoneCurveIrregularType();
  FeatureZoneCurveIrregularType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In,
    PolyLineType * CurvePointsIn);
  FeatureZoneCurveIrregularType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In,
    PolyLineType * CurvePointsIn);
  ~FeatureZoneCurveIrregularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PolyLineType * getCurvePoints();
  void setCurvePoints(PolyLineType * CurvePointsIn);

protected:
  PolyLineType * CurvePoints;
};

/* ***************************************************************** */

class FeatureZoneCurveLineType :
  public FeatureZoneCurveBaseType
{
public:
  FeatureZoneCurveLineType();
  FeatureZoneCurveLineType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In,
    LineSegmentType * LineIn);
  FeatureZoneCurveLineType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneCurv_1103_Type * FeatureZoneCurv_1103In,
    LineSegmentType * LineIn);
  ~FeatureZoneCurveLineType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LineSegmentType * getLine();
  void setLine(LineSegmentType * LineIn);

protected:
  LineSegmentType * Line;
};

/* ***************************************************************** */

class FeatureZoneListType :
  public XmlTypeBase
{
public:
  FeatureZoneListType();
  FeatureZoneListType(
    FeatureZoneBaseTypeLisd * FeatureZoneIn);
  FeatureZoneListType(
    NaturalType * nIn,
    FeatureZoneBaseTypeLisd * FeatureZoneIn);
  ~FeatureZoneListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FeatureZoneBaseTypeLisd * getFeatureZone();
  void setFeatureZone(FeatureZoneBaseTypeLisd *);

protected:
  NaturalType * n;
  FeatureZoneBaseTypeLisd * FeatureZone;
};

/* ***************************************************************** */

class FeatureZonePointType :
  public FeatureZoneBaseType
{
public:
  FeatureZonePointType();
  FeatureZonePointType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZonePoin_1104_Type * FeatureZonePoin_1104In,
    PointType * PointIn);
  FeatureZonePointType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZonePoin_1104_Type * FeatureZonePoin_1104In,
    PointType * PointIn);
  ~FeatureZonePointType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  FeatureZonePoin_1104_Type * getFeatureZonePoin_1104();
  void setFeatureZonePoin_1104(FeatureZonePoin_1104_Type * FeatureZonePoin_1104In);
  PointType * getPoint();
  void setPoint(PointType * PointIn);

protected:
  FeatureZonePoin_1104_Type * FeatureZonePoin_1104;
  PointType * Point;
};

/* ***************************************************************** */

class LineBestFitType :
  public ConstructionMethodBaseType
{
public:
  LineBestFitType();
  LineBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  LineBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~LineBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class LineCastType :
  public ConstructionMethodBaseType
{
public:
  LineCastType();
  LineCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~LineCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class LineCheckedFeatureType :
  public XmlTypeBase
{
public:
  LineCheckedFeatureType();
  LineCheckedFeatureType(
    LineCheckedType * CheckDetailsIn);
  ~LineCheckedFeatureType();
  void printSelf(FILE * outFile);

  LineCheckedType * getCheckDetails();
  void setCheckDetails(LineCheckedType * CheckDetailsIn);

protected:
  LineCheckedType * CheckDetails;
};

/* ***************************************************************** */

class LineCheckedType :
  public XmlTypeBase
{
public:
  LineCheckedType();
  LineCheckedType(
    LineCheckedTypeChoicePair * LineCheckedTypePairIn);
  ~LineCheckedType();
  void printSelf(FILE * outFile);

  LineCheckedTypeChoicePair * getLineCheckedTypePair();
  void setLineCheckedTypePair(LineCheckedTypeChoicePair * LineCheckedTypePairIn);

protected:
  LineCheckedTypeChoicePair * LineCheckedTypePair;
};

/* ***************************************************************** */

union LineCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  LineConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class LineCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  LineCheckedTypeChoicePair();
  LineCheckedTypeChoicePair(
    whichOne LineCheckedTypeTypeIn,
    LineCheckedTypeVal LineCheckedTypeValueIn);
  ~LineCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LineCheckedTypeType;
  LineCheckedTypeVal LineCheckedTypeValue;
};

/* ***************************************************************** */

class LineConstructionMethodType :
  public XmlTypeBase
{
public:
  LineConstructionMethodType();
  LineConstructionMethodType(
    LineConstructionMethodTypeChoicePair * LineConstructionMethodTypePairIn);
  ~LineConstructionMethodType();
  void printSelf(FILE * outFile);

  LineConstructionMethodTypeChoicePair * getLineConstructionMethodTypePair();
  void setLineConstructionMethodTypePair(LineConstructionMethodTypeChoicePair * LineConstructionMethodTypePairIn);

protected:
  LineConstructionMethodTypeChoicePair * LineConstructionMethodTypePair;
};

/* ***************************************************************** */

union LineConstructionMethodTypeVal
{
  LineBestFitType * BestFit;
  LineRecompType * Recompensated;
  LineMidlineType * Midline;
  LineIntersectionType * Intersection;
  LineProjectionType * Projection;
  LinePerpendicularType * Perpendicular;
  LineParallelType * Parallel;
  LineCopyType * Copy;
  LineCastType * Cast;
  LineTangentThroughType * TangentThrough;
  LineTransformType * Transform;
  LineExtractType * Extract;
  LineFromScanType * FromScan;
};

/* ***************************************************************** */

class LineConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    MidlineE,
    IntersectionE,
    ProjectionE,
    PerpendicularE,
    ParallelE,
    CopyE,
    CastE,
    TangentThroughE,
    TransformE,
    ExtractE,
    FromScanE };
  LineConstructionMethodTypeChoicePair();
  LineConstructionMethodTypeChoicePair(
    whichOne LineConstructionMethodTypeTypeIn,
    LineConstructionMethodTypeVal LineConstructionMethodTypeValueIn);
  ~LineConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LineConstructionMethodTypeType;
  LineConstructionMethodTypeVal LineConstructionMethodTypeValue;
};

/* ***************************************************************** */

class LineCopyType :
  public ConstructionMethodBaseType
{
public:
  LineCopyType();
  LineCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseLineIn);
  ~LineCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseLine();
  void setBaseLine(BaseFeatureType * BaseLineIn);

protected:
  BaseFeatureType * BaseLine;
};

/* ***************************************************************** */

class LineExtractType :
  public ConstructionMethodBaseType
{
public:
  LineExtractType();
  LineExtractType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * CurveFeatureIn);
  ~LineExtractType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getCurveFeature();
  void setCurveFeature(BaseFeatureType * CurveFeatureIn);

protected:
  BaseFeatureType * CurveFeature;
};

/* ***************************************************************** */

class LineFromScanType :
  public ConstructionMethodBaseType
{
public:
  LineFromScanType();
  LineFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn);
  ~LineFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
};

/* ***************************************************************** */

class LineIntersectionType :
  public ConstructionMethodBaseType
{
public:
  LineIntersectionType();
  LineIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * IntersectionFeatureIn);
  ~LineIntersectionType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getIntersectionFeature();
  void setIntersectionFeature(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * IntersectionFeature;
};

/* ***************************************************************** */

class LineMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  LineMeasurementDeterminationType();
  LineMeasurementDeterminationType(
    LineMeasurementDeterminationTypeChoicePair * LineMeasurementDeterminationTypePairIn);
  ~LineMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  LineMeasurementDeterminationTypeChoicePair * getLineMeasurementDeterminationTypePair();
  void setLineMeasurementDeterminationTypePair(LineMeasurementDeterminationTypeChoicePair * LineMeasurementDeterminationTypePairIn);

protected:
  LineMeasurementDeterminationTypeChoicePair * LineMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union LineMeasurementDeterminationTypeVal
{
  LineCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class LineMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  LineMeasurementDeterminationTypeChoicePair();
  LineMeasurementDeterminationTypeChoicePair(
    whichOne LineMeasurementDeterminationTypeTypeIn,
    LineMeasurementDeterminationTypeVal LineMeasurementDeterminationTypeValueIn);
  ~LineMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LineMeasurementDeterminationTypeType;
  LineMeasurementDeterminationTypeVal LineMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class LineMidlineType :
  public ConstructionMethodBaseType
{
public:
  LineMidlineType();
  LineMidlineType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseLineIn);
  ~LineMidlineType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getBaseLine();
  void setBaseLine(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * BaseLine;
};

/* ***************************************************************** */

class LineParallelType :
  public ConstructionMethodBaseType
{
public:
  LineParallelType();
  LineParallelType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ParallelFeatureIn,
    BaseFeatureType * PointFeatureIn);
  ~LineParallelType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getParallelFeature();
  void setParallelFeature(BaseFeatureType * ParallelFeatureIn);
  BaseFeatureType * getPointFeature();
  void setPointFeature(BaseFeatureType * PointFeatureIn);

protected:
  BaseFeatureType * ParallelFeature;
  BaseFeatureType * PointFeature;
};

/* ***************************************************************** */

class LinePerpendicularType :
  public ConstructionMethodBaseType
{
public:
  LinePerpendicularType();
  LinePerpendicularType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * PerpendicularFeatureIn,
    BaseFeatureType * PointFeatureIn);
  ~LinePerpendicularType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getPerpendicularFeature();
  void setPerpendicularFeature(BaseFeatureType * PerpendicularFeatureIn);
  BaseFeatureType * getPointFeature();
  void setPointFeature(BaseFeatureType * PointFeatureIn);

protected:
  BaseFeatureType * PerpendicularFeature;
  BaseFeatureType * PointFeature;
};

/* ***************************************************************** */

class LineProjectionType :
  public ConstructionMethodBaseType
{
public:
  LineProjectionType();
  LineProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionPlaneIn,
    BaseFeatureType * ProjectionLineIn);
  ~LineProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);
  BaseFeatureType * getProjectionLine();
  void setProjectionLine(BaseFeatureType * ProjectionLineIn);

protected:
  BaseFeatureType * ProjectionPlane;
  BaseFeatureType * ProjectionLine;
};

/* ***************************************************************** */

class LineRecompType :
  public ConstructionMethodBaseType
{
public:
  LineRecompType();
  LineRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~LineRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class LineTangentThroughType :
  public ConstructionMethodBaseType
{
public:
  LineTangentThroughType();
  LineTangentThroughType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * TangentFeatureIn,
    BaseFeatureType * PointFeatureIn);
  ~LineTangentThroughType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getTangentFeature();
  void setTangentFeature(BaseFeatureType * TangentFeatureIn);
  BaseFeatureType * getPointFeature();
  void setPointFeature(BaseFeatureType * PointFeatureIn);

protected:
  BaseFeatureType * TangentFeature;
  BaseFeatureType * PointFeature;
};

/* ***************************************************************** */

class LineTransformType :
  public ConstructionMethodBaseType
{
public:
  LineTransformType();
  LineTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseLineIn,
    TransformationReferenceType * TransformationIn);
  ~LineTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseLine();
  void setBaseLine(BaseFeatureType * BaseLineIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseLine;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class MarkingMethodEnumType :
  public XmlNMTOKEN
{
public:
  MarkingMethodEnumType();
  MarkingMethodEnumType(
    const char * valIn);
  ~MarkingMethodEnumType();
  bool MarkingMethodEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class MarkingMethodType :
  public XmlTypeBase
{
public:
  MarkingMethodType();
  MarkingMethodType(
    MarkingMethodTypeChoicePair * MarkingMethodTypePairIn);
  ~MarkingMethodType();
  void printSelf(FILE * outFile);

  MarkingMethodTypeChoicePair * getMarkingMethodTypePair();
  void setMarkingMethodTypePair(MarkingMethodTypeChoicePair * MarkingMethodTypePairIn);

protected:
  MarkingMethodTypeChoicePair * MarkingMethodTypePair;
};

/* ***************************************************************** */

union MarkingMethodTypeVal
{
  MarkingMethodEnumType * MarkingMethodEnum;
  XmlString * OtherMarkingMethod;
};

/* ***************************************************************** */

class MarkingMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MarkingMethodEnumE,
    OtherMarkingMethodE };
  MarkingMethodTypeChoicePair();
  MarkingMethodTypeChoicePair(
    whichOne MarkingMethodTypeTypeIn,
    MarkingMethodTypeVal MarkingMethodTypeValueIn);
  ~MarkingMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MarkingMethodTypeType;
  MarkingMethodTypeVal MarkingMethodTypeValue;
};

/* ***************************************************************** */

class MeasuredFeatureType :
  public XmlTypeBase
{
public:
  MeasuredFeatureType();
  MeasuredFeatureType(
    PointListType * PointListIn);
  ~MeasuredFeatureType();
  void printSelf(FILE * outFile);

  PointListType * getPointList();
  void setPointList(PointListType * PointListIn);

protected:
  PointListType * PointList;
};

/* ***************************************************************** */

class MeasuredPointSetType :
  public XmlTypeBase
{
public:
  MeasuredPointSetType();
  MeasuredPointSetType(
    AttributesType * AttributesIn,
    OtherUnitsType * UnitsIn,
    MeasuredPointSe_1106_Type * MeasuredPointSe_1106In,
    MeasuredPointSe_1107_Type * MeasuredPointSe_1107In,
    MeasuredPointSe_1108_Type * MeasuredPointSe_1108In,
    MeasuredPointSe_1109_Type * MeasuredPointSe_1109In,
    MeasuredPointSe_1110_Type * MeasuredPointSe_1110In,
    QIFReferenceType * MeasurementDeviceIdIn,
    MeasuredPointSe_1111_Type * MeasuredPointSe_1111In,
    MeasuredPointSe_1112_Type * MeasuredPointSe_1112In,
    MeasuredPointSe_1113_Type * MeasuredPointSe_1113In,
    MeasuredPointSe_1114_Type * MeasuredPointSe_1114In,
    MeasuredPointSe_1115_Type * MeasuredPointSe_1115In,
    MeasuredPointSe_1116_Type * MeasuredPointSe_1116In,
    MeasuredPointSe_1117_Type * MeasuredPointSe_1117In,
    MeasuredPointSe_1118_Type * MeasuredPointSe_1118In);
  MeasuredPointSetType(
    XmlDecimal * combinedUncertaintyIn,
    NaturalType * countIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    QIFIdType * idIn,
    XmlToken * linearUnitIn,
    XmlDecimal * meanErrorIn,
    XmlNonNegativeInteger * significantFiguresIn,
    ValidityEnumType * validityIn,
    XmlDecimal * xCombinedUncertaintyIn,
    XmlNonNegativeInteger * xDecimalPlacesIn,
    XmlDecimal * xMeanErrorIn,
    XmlNonNegativeInteger * xSignificantFiguresIn,
    ValidityEnumType * xValidityIn,
    XmlDecimal * yCombinedUncertaintyIn,
    XmlNonNegativeInteger * yDecimalPlacesIn,
    XmlDecimal * yMeanErrorIn,
    XmlNonNegativeInteger * ySignificantFiguresIn,
    ValidityEnumType * yValidityIn,
    XmlDecimal * zCombinedUncertaintyIn,
    XmlNonNegativeInteger * zDecimalPlacesIn,
    XmlDecimal * zMeanErrorIn,
    XmlNonNegativeInteger * zSignificantFiguresIn,
    ValidityEnumType * zValidityIn,
    AttributesType * AttributesIn,
    OtherUnitsType * UnitsIn,
    MeasuredPointSe_1106_Type * MeasuredPointSe_1106In,
    MeasuredPointSe_1107_Type * MeasuredPointSe_1107In,
    MeasuredPointSe_1108_Type * MeasuredPointSe_1108In,
    MeasuredPointSe_1109_Type * MeasuredPointSe_1109In,
    MeasuredPointSe_1110_Type * MeasuredPointSe_1110In,
    QIFReferenceType * MeasurementDeviceIdIn,
    MeasuredPointSe_1111_Type * MeasuredPointSe_1111In,
    MeasuredPointSe_1112_Type * MeasuredPointSe_1112In,
    MeasuredPointSe_1113_Type * MeasuredPointSe_1113In,
    MeasuredPointSe_1114_Type * MeasuredPointSe_1114In,
    MeasuredPointSe_1115_Type * MeasuredPointSe_1115In,
    MeasuredPointSe_1116_Type * MeasuredPointSe_1116In,
    MeasuredPointSe_1117_Type * MeasuredPointSe_1117In,
    MeasuredPointSe_1118_Type * MeasuredPointSe_1118In);
  ~MeasuredPointSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getcombinedUncertainty();
  void setcombinedUncertainty(XmlDecimal * combinedUncertaintyIn);
  NaturalType * getcount();
  void setcount(NaturalType * countIn);
  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  QIFIdType * getid();
  void setid(QIFIdType * idIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  XmlDecimal * getmeanError();
  void setmeanError(XmlDecimal * meanErrorIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlDecimal * getxCombinedUncertainty();
  void setxCombinedUncertainty(XmlDecimal * xCombinedUncertaintyIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlDecimal * getxMeanError();
  void setxMeanError(XmlDecimal * xMeanErrorIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlDecimal * getyCombinedUncertainty();
  void setyCombinedUncertainty(XmlDecimal * yCombinedUncertaintyIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlDecimal * getyMeanError();
  void setyMeanError(XmlDecimal * yMeanErrorIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlDecimal * getzCombinedUncertainty();
  void setzCombinedUncertainty(XmlDecimal * zCombinedUncertaintyIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlDecimal * getzMeanError();
  void setzMeanError(XmlDecimal * zMeanErrorIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  OtherUnitsType * getUnits();
  void setUnits(OtherUnitsType * UnitsIn);
  MeasuredPointSe_1106_Type * getMeasuredPointSe_1106();
  void setMeasuredPointSe_1106(MeasuredPointSe_1106_Type * MeasuredPointSe_1106In);
  MeasuredPointSe_1107_Type * getMeasuredPointSe_1107();
  void setMeasuredPointSe_1107(MeasuredPointSe_1107_Type * MeasuredPointSe_1107In);
  MeasuredPointSe_1108_Type * getMeasuredPointSe_1108();
  void setMeasuredPointSe_1108(MeasuredPointSe_1108_Type * MeasuredPointSe_1108In);
  MeasuredPointSe_1109_Type * getMeasuredPointSe_1109();
  void setMeasuredPointSe_1109(MeasuredPointSe_1109_Type * MeasuredPointSe_1109In);
  MeasuredPointSe_1110_Type * getMeasuredPointSe_1110();
  void setMeasuredPointSe_1110(MeasuredPointSe_1110_Type * MeasuredPointSe_1110In);
  QIFReferenceType * getMeasurementDeviceId();
  void setMeasurementDeviceId(QIFReferenceType * MeasurementDeviceIdIn);
  MeasuredPointSe_1111_Type * getMeasuredPointSe_1111();
  void setMeasuredPointSe_1111(MeasuredPointSe_1111_Type * MeasuredPointSe_1111In);
  MeasuredPointSe_1112_Type * getMeasuredPointSe_1112();
  void setMeasuredPointSe_1112(MeasuredPointSe_1112_Type * MeasuredPointSe_1112In);
  MeasuredPointSe_1113_Type * getMeasuredPointSe_1113();
  void setMeasuredPointSe_1113(MeasuredPointSe_1113_Type * MeasuredPointSe_1113In);
  MeasuredPointSe_1114_Type * getMeasuredPointSe_1114();
  void setMeasuredPointSe_1114(MeasuredPointSe_1114_Type * MeasuredPointSe_1114In);
  MeasuredPointSe_1115_Type * getMeasuredPointSe_1115();
  void setMeasuredPointSe_1115(MeasuredPointSe_1115_Type * MeasuredPointSe_1115In);
  MeasuredPointSe_1116_Type * getMeasuredPointSe_1116();
  void setMeasuredPointSe_1116(MeasuredPointSe_1116_Type * MeasuredPointSe_1116In);
  MeasuredPointSe_1117_Type * getMeasuredPointSe_1117();
  void setMeasuredPointSe_1117(MeasuredPointSe_1117_Type * MeasuredPointSe_1117In);
  MeasuredPointSe_1118_Type * getMeasuredPointSe_1118();
  void setMeasuredPointSe_1118(MeasuredPointSe_1118_Type * MeasuredPointSe_1118In);

protected:
  XmlDecimal * combinedUncertainty;
  NaturalType * count;
  XmlNonNegativeInteger * decimalPlaces;
  QIFIdType * id;
  XmlToken * linearUnit;
  XmlDecimal * meanError;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlDecimal * xCombinedUncertainty;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlDecimal * xMeanError;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlDecimal * yCombinedUncertainty;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlDecimal * yMeanError;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlDecimal * zCombinedUncertainty;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlDecimal * zMeanError;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
  AttributesType * Attributes;
  OtherUnitsType * Units;
  MeasuredPointSe_1106_Type * MeasuredPointSe_1106;
  MeasuredPointSe_1107_Type * MeasuredPointSe_1107;
  MeasuredPointSe_1108_Type * MeasuredPointSe_1108;
  MeasuredPointSe_1109_Type * MeasuredPointSe_1109;
  MeasuredPointSe_1110_Type * MeasuredPointSe_1110;
  QIFReferenceType * MeasurementDeviceId;
  MeasuredPointSe_1111_Type * MeasuredPointSe_1111;
  MeasuredPointSe_1112_Type * MeasuredPointSe_1112;
  MeasuredPointSe_1113_Type * MeasuredPointSe_1113;
  MeasuredPointSe_1114_Type * MeasuredPointSe_1114;
  MeasuredPointSe_1115_Type * MeasuredPointSe_1115;
  MeasuredPointSe_1116_Type * MeasuredPointSe_1116;
  MeasuredPointSe_1117_Type * MeasuredPointSe_1117;
  MeasuredPointSe_1118_Type * MeasuredPointSe_1118;
};

/* ***************************************************************** */

class MeasuredPointSetTypeLisd :
  public std::list<MeasuredPointSetType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasuredPointSetTypeLisd();
  MeasuredPointSetTypeLisd(
    MeasuredPointSetType * aMeasuredPointSetType);
  ~MeasuredPointSetTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MeasuredPointSetsType :
  public XmlTypeBase
{
public:
  MeasuredPointSetsType();
  MeasuredPointSetsType(
    MeasuredPointSetTypeLisd * MeasuredPointSetIn);
  MeasuredPointSetsType(
    NaturalType * nIn,
    MeasuredPointSetTypeLisd * MeasuredPointSetIn);
  ~MeasuredPointSetsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeasuredPointSetTypeLisd * getMeasuredPointSet();
  void setMeasuredPointSet(MeasuredPointSetTypeLisd *);

protected:
  NaturalType * n;
  MeasuredPointSetTypeLisd * MeasuredPointSet;
};

/* ***************************************************************** */

class NominalPointSetListType :
  public XmlTypeBase
{
public:
  NominalPointSetListType();
  NominalPointSetListType(
    PointSetNominalTypeLisd * NominalPointSetIn);
  NominalPointSetListType(
    NaturalType * nIn,
    PointSetNominalTypeLisd * NominalPointSetIn);
  ~NominalPointSetListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PointSetNominalTypeLisd * getNominalPointSet();
  void setNominalPointSet(PointSetNominalTypeLisd *);

protected:
  NaturalType * n;
  PointSetNominalTypeLisd * NominalPointSet;
};

/* ***************************************************************** */

class NonShapeFeatureDefinitionBaseType :
  public FeatureDefinitionBaseType
{
public:
  NonShapeFeatureDefinitionBaseType();
  NonShapeFeatureDefinitionBaseType(
    AttributesType * AttributesIn);
  NonShapeFeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~NonShapeFeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class NonShapeFeatureItemBaseType :
  public FeatureItemBaseType
{
public:
  NonShapeFeatureItemBaseType();
  NonShapeFeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  NonShapeFeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~NonShapeFeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class NonShapeFeatureMeasurementBaseType :
  public FeatureMeasurementBaseType
{
public:
  NonShapeFeatureMeasurementBaseType();
  NonShapeFeatureMeasurementBaseType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn);
  NonShapeFeatureMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn);
  ~NonShapeFeatureMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class NonShapeFeatureNominalBaseType :
  public FeatureNominalBaseType
{
public:
  NonShapeFeatureNominalBaseType();
  NonShapeFeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn);
  NonShapeFeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn);
  ~NonShapeFeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class OppositeAngledLinesBestFitType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesBestFitType();
  OppositeAngledLinesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  OppositeAngledLinesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~OppositeAngledLinesBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class OppositeAngledLinesCastType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesCastType();
  OppositeAngledLinesCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~OppositeAngledLinesCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class OppositeAngledLinesCheckedFeatureType :
  public XmlTypeBase
{
public:
  OppositeAngledLinesCheckedFeatureType();
  OppositeAngledLinesCheckedFeatureType(
    OppositeAngledLinesCheckedType * CheckDetailsIn);
  ~OppositeAngledLinesCheckedFeatureType();
  void printSelf(FILE * outFile);

  OppositeAngledLinesCheckedType * getCheckDetails();
  void setCheckDetails(OppositeAngledLinesCheckedType * CheckDetailsIn);

protected:
  OppositeAngledLinesCheckedType * CheckDetails;
};

/* ***************************************************************** */

class OppositeAngledLinesCheckedType :
  public XmlTypeBase
{
public:
  OppositeAngledLinesCheckedType();
  OppositeAngledLinesCheckedType(
    OppositeAngledLinesCheckedTypeChoicePair * OppositeAngledLinesCheckedTypePairIn);
  ~OppositeAngledLinesCheckedType();
  void printSelf(FILE * outFile);

  OppositeAngledLinesCheckedTypeChoicePair * getOppositeAngledLinesCheckedTypePair();
  void setOppositeAngledLinesCheckedTypePair(OppositeAngledLinesCheckedTypeChoicePair * OppositeAngledLinesCheckedTypePairIn);

protected:
  OppositeAngledLinesCheckedTypeChoicePair * OppositeAngledLinesCheckedTypePair;
};

/* ***************************************************************** */

union OppositeAngledLinesCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  OppositeAngledLinesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OppositeAngledLinesCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  OppositeAngledLinesCheckedTypeChoicePair();
  OppositeAngledLinesCheckedTypeChoicePair(
    whichOne OppositeAngledLinesCheckedTypeTypeIn,
    OppositeAngledLinesCheckedTypeVal OppositeAngledLinesCheckedTypeValueIn);
  ~OppositeAngledLinesCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledLinesCheckedTypeType;
  OppositeAngledLinesCheckedTypeVal OppositeAngledLinesCheckedTypeValue;
};

/* ***************************************************************** */

class OppositeAngledLinesConstructionMethodType :
  public XmlTypeBase
{
public:
  OppositeAngledLinesConstructionMethodType();
  OppositeAngledLinesConstructionMethodType(
    OppositeAngledLinesConstructionMethodTypeChoicePair * OppositeAngledLinesConstructionMethodTypePairIn);
  ~OppositeAngledLinesConstructionMethodType();
  void printSelf(FILE * outFile);

  OppositeAngledLinesConstructionMethodTypeChoicePair * getOppositeAngledLinesConstructionMethodTypePair();
  void setOppositeAngledLinesConstructionMethodTypePair(OppositeAngledLinesConstructionMethodTypeChoicePair * OppositeAngledLinesConstructionMethodTypePairIn);

protected:
  OppositeAngledLinesConstructionMethodTypeChoicePair * OppositeAngledLinesConstructionMethodTypePair;
};

/* ***************************************************************** */

union OppositeAngledLinesConstructionMethodTypeVal
{
  OppositeAngledLinesBestFitType * BestFit;
  OppositeAngledLinesRecompType * Recompensated;
  OppositeAngledLinesIntersectionType * Intersection;
  OppositeAngledLinesProjectionType * Projection;
  OppositeAngledLinesCopyType * Copy;
  OppositeAngledLinesCastType * Cast;
  OppositeAngledLinesTransformType * Transform;
  OppositeAngledLinesFromScanType * FromScan;
};

/* ***************************************************************** */

class OppositeAngledLinesConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    IntersectionE,
    ProjectionE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  OppositeAngledLinesConstructionMethodTypeChoicePair();
  OppositeAngledLinesConstructionMethodTypeChoicePair(
    whichOne OppositeAngledLinesConstructionMethodTypeTypeIn,
    OppositeAngledLinesConstructionMethodTypeVal OppositeAngledLinesConstructionMethodTypeValueIn);
  ~OppositeAngledLinesConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledLinesConstructionMethodTypeType;
  OppositeAngledLinesConstructionMethodTypeVal OppositeAngledLinesConstructionMethodTypeValue;
};

/* ***************************************************************** */

class OppositeAngledLinesCopyType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesCopyType();
  OppositeAngledLinesCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeAngledLinesIn);
  ~OppositeAngledLinesCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeAngledLines();
  void setBaseOppositeAngledLines(BaseFeatureType * BaseOppositeAngledLinesIn);

protected:
  BaseFeatureType * BaseOppositeAngledLines;
};

/* ***************************************************************** */

class OppositeAngledLinesFromScanType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesFromScanType();
  OppositeAngledLinesFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    LinearValueType * DepthIn);
  ~OppositeAngledLinesFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  LinearValueType * Depth;
};

/* ***************************************************************** */

class OppositeAngledLinesIntersectionType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesIntersectionType();
  OppositeAngledLinesIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * IntersectionPlaneIn,
    BaseFeatureType * IntersectionFeatureIn);
  ~OppositeAngledLinesIntersectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getIntersectionPlane();
  void setIntersectionPlane(BaseFeatureType * IntersectionPlaneIn);
  BaseFeatureType * getIntersectionFeature();
  void setIntersectionFeature(BaseFeatureType * IntersectionFeatureIn);

protected:
  BaseFeatureType * IntersectionPlane;
  BaseFeatureType * IntersectionFeature;
};

/* ***************************************************************** */

class OppositeAngledLinesMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  OppositeAngledLinesMeasurementDeterminationType();
  OppositeAngledLinesMeasurementDeterminationType(
    OppositeAngledLinesMeasurementDeterminationTypeChoicePair * OppositeAngledLinesMeasurementDeterminationTypePairIn);
  ~OppositeAngledLinesMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  OppositeAngledLinesMeasurementDeterminationTypeChoicePair * getOppositeAngledLinesMeasurementDeterminationTypePair();
  void setOppositeAngledLinesMeasurementDeterminationTypePair(OppositeAngledLinesMeasurementDeterminationTypeChoicePair * OppositeAngledLinesMeasurementDeterminationTypePairIn);

protected:
  OppositeAngledLinesMeasurementDeterminationTypeChoicePair * OppositeAngledLinesMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union OppositeAngledLinesMeasurementDeterminationTypeVal
{
  OppositeAngledLinesCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class OppositeAngledLinesMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  OppositeAngledLinesMeasurementDeterminationTypeChoicePair();
  OppositeAngledLinesMeasurementDeterminationTypeChoicePair(
    whichOne OppositeAngledLinesMeasurementDeterminationTypeTypeIn,
    OppositeAngledLinesMeasurementDeterminationTypeVal OppositeAngledLinesMeasurementDeterminationTypeValueIn);
  ~OppositeAngledLinesMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledLinesMeasurementDeterminationTypeType;
  OppositeAngledLinesMeasurementDeterminationTypeVal OppositeAngledLinesMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class OppositeAngledLinesProjectionType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesProjectionType();
  OppositeAngledLinesProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionPlaneIn,
    BaseFeatureType * ProjectionOppositeAngledLinesIn);
  ~OppositeAngledLinesProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);
  BaseFeatureType * getProjectionOppositeAngledLines();
  void setProjectionOppositeAngledLines(BaseFeatureType * ProjectionOppositeAngledLinesIn);

protected:
  BaseFeatureType * ProjectionPlane;
  BaseFeatureType * ProjectionOppositeAngledLines;
};

/* ***************************************************************** */

class OppositeAngledLinesRecompType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesRecompType();
  OppositeAngledLinesRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~OppositeAngledLinesRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class OppositeAngledLinesTransformType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledLinesTransformType();
  OppositeAngledLinesTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeAngledLinesIn,
    TransformationReferenceType * TransformationIn);
  ~OppositeAngledLinesTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeAngledLines();
  void setBaseOppositeAngledLines(BaseFeatureType * BaseOppositeAngledLinesIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseOppositeAngledLines;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class OppositeAngledPlanesBestFitType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledPlanesBestFitType();
  OppositeAngledPlanesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  OppositeAngledPlanesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~OppositeAngledPlanesBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class OppositeAngledPlanesCastType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledPlanesCastType();
  OppositeAngledPlanesCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~OppositeAngledPlanesCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class OppositeAngledPlanesCheckedFeatureType :
  public XmlTypeBase
{
public:
  OppositeAngledPlanesCheckedFeatureType();
  OppositeAngledPlanesCheckedFeatureType(
    OppositeAngledPlanesCheckedType * CheckDetailsIn);
  ~OppositeAngledPlanesCheckedFeatureType();
  void printSelf(FILE * outFile);

  OppositeAngledPlanesCheckedType * getCheckDetails();
  void setCheckDetails(OppositeAngledPlanesCheckedType * CheckDetailsIn);

protected:
  OppositeAngledPlanesCheckedType * CheckDetails;
};

/* ***************************************************************** */

class OppositeAngledPlanesCheckedType :
  public XmlTypeBase
{
public:
  OppositeAngledPlanesCheckedType();
  OppositeAngledPlanesCheckedType(
    OppositeAngledPlanesCheckedTypeChoicePair * OppositeAngledPlanesCheckedTypePairIn);
  ~OppositeAngledPlanesCheckedType();
  void printSelf(FILE * outFile);

  OppositeAngledPlanesCheckedTypeChoicePair * getOppositeAngledPlanesCheckedTypePair();
  void setOppositeAngledPlanesCheckedTypePair(OppositeAngledPlanesCheckedTypeChoicePair * OppositeAngledPlanesCheckedTypePairIn);

protected:
  OppositeAngledPlanesCheckedTypeChoicePair * OppositeAngledPlanesCheckedTypePair;
};

/* ***************************************************************** */

union OppositeAngledPlanesCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  OppositeAngledPlanesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OppositeAngledPlanesCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  OppositeAngledPlanesCheckedTypeChoicePair();
  OppositeAngledPlanesCheckedTypeChoicePair(
    whichOne OppositeAngledPlanesCheckedTypeTypeIn,
    OppositeAngledPlanesCheckedTypeVal OppositeAngledPlanesCheckedTypeValueIn);
  ~OppositeAngledPlanesCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledPlanesCheckedTypeType;
  OppositeAngledPlanesCheckedTypeVal OppositeAngledPlanesCheckedTypeValue;
};

/* ***************************************************************** */

class OppositeAngledPlanesConstructionMethodType :
  public XmlTypeBase
{
public:
  OppositeAngledPlanesConstructionMethodType();
  OppositeAngledPlanesConstructionMethodType(
    OppositeAngledPlanesConstructionMethodTypeChoicePair * OppositeAngledPlanesConstructionMethodTypePairIn);
  ~OppositeAngledPlanesConstructionMethodType();
  void printSelf(FILE * outFile);

  OppositeAngledPlanesConstructionMethodTypeChoicePair * getOppositeAngledPlanesConstructionMethodTypePair();
  void setOppositeAngledPlanesConstructionMethodTypePair(OppositeAngledPlanesConstructionMethodTypeChoicePair * OppositeAngledPlanesConstructionMethodTypePairIn);

protected:
  OppositeAngledPlanesConstructionMethodTypeChoicePair * OppositeAngledPlanesConstructionMethodTypePair;
};

/* ***************************************************************** */

union OppositeAngledPlanesConstructionMethodTypeVal
{
  OppositeAngledPlanesBestFitType * BestFit;
  OppositeAngledPlanesRecompType * Recompensated;
  OppositeAngledPlanesCopyType * Copy;
  OppositeAngledPlanesCastType * Cast;
  OppositeAngledPlanesTransformType * Transform;
  OppositeAngledPlanesFromScanType * FromScan;
};

/* ***************************************************************** */

class OppositeAngledPlanesConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  OppositeAngledPlanesConstructionMethodTypeChoicePair();
  OppositeAngledPlanesConstructionMethodTypeChoicePair(
    whichOne OppositeAngledPlanesConstructionMethodTypeTypeIn,
    OppositeAngledPlanesConstructionMethodTypeVal OppositeAngledPlanesConstructionMethodTypeValueIn);
  ~OppositeAngledPlanesConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledPlanesConstructionMethodTypeType;
  OppositeAngledPlanesConstructionMethodTypeVal OppositeAngledPlanesConstructionMethodTypeValue;
};

/* ***************************************************************** */

class OppositeAngledPlanesCopyType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledPlanesCopyType();
  OppositeAngledPlanesCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeAngledPlanesIn);
  ~OppositeAngledPlanesCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeAngledPlanes();
  void setBaseOppositeAngledPlanes(BaseFeatureType * BaseOppositeAngledPlanesIn);

protected:
  BaseFeatureType * BaseOppositeAngledPlanes;
};

/* ***************************************************************** */

class OppositeAngledPlanesFromScanType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledPlanesFromScanType();
  OppositeAngledPlanesFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn);
  ~OppositeAngledPlanesFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
};

/* ***************************************************************** */

class OppositeAngledPlanesMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  OppositeAngledPlanesMeasurementDeterminationType();
  OppositeAngledPlanesMeasurementDeterminationType(
    OppositeAngledPlanesMeasurementDeterminationTypeChoicePair * OppositeAngledPlanesMeasurementDeterminationTypePairIn);
  ~OppositeAngledPlanesMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  OppositeAngledPlanesMeasurementDeterminationTypeChoicePair * getOppositeAngledPlanesMeasurementDeterminationTypePair();
  void setOppositeAngledPlanesMeasurementDeterminationTypePair(OppositeAngledPlanesMeasurementDeterminationTypeChoicePair * OppositeAngledPlanesMeasurementDeterminationTypePairIn);

protected:
  OppositeAngledPlanesMeasurementDeterminationTypeChoicePair * OppositeAngledPlanesMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union OppositeAngledPlanesMeasurementDeterminationTypeVal
{
  OppositeAngledPlanesCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class OppositeAngledPlanesMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  OppositeAngledPlanesMeasurementDeterminationTypeChoicePair();
  OppositeAngledPlanesMeasurementDeterminationTypeChoicePair(
    whichOne OppositeAngledPlanesMeasurementDeterminationTypeTypeIn,
    OppositeAngledPlanesMeasurementDeterminationTypeVal OppositeAngledPlanesMeasurementDeterminationTypeValueIn);
  ~OppositeAngledPlanesMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledPlanesMeasurementDeterminationTypeType;
  OppositeAngledPlanesMeasurementDeterminationTypeVal OppositeAngledPlanesMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class OppositeAngledPlanesRecompType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledPlanesRecompType();
  OppositeAngledPlanesRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~OppositeAngledPlanesRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class OppositeAngledPlanesTransformType :
  public ConstructionMethodBaseType
{
public:
  OppositeAngledPlanesTransformType();
  OppositeAngledPlanesTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeAngledPlanesIn,
    TransformationReferenceType * TransformationIn);
  ~OppositeAngledPlanesTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeAngledPlanes();
  void setBaseOppositeAngledPlanes(BaseFeatureType * BaseOppositeAngledPlanesIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseOppositeAngledPlanes;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class OppositeParallelLinesBestFitType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesBestFitType();
  OppositeParallelLinesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  OppositeParallelLinesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~OppositeParallelLinesBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class OppositeParallelLinesCastType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesCastType();
  OppositeParallelLinesCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~OppositeParallelLinesCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class OppositeParallelLinesCheckedFeatureType :
  public XmlTypeBase
{
public:
  OppositeParallelLinesCheckedFeatureType();
  OppositeParallelLinesCheckedFeatureType(
    OppositeParallelLinesCheckedType * CheckDetailsIn);
  ~OppositeParallelLinesCheckedFeatureType();
  void printSelf(FILE * outFile);

  OppositeParallelLinesCheckedType * getCheckDetails();
  void setCheckDetails(OppositeParallelLinesCheckedType * CheckDetailsIn);

protected:
  OppositeParallelLinesCheckedType * CheckDetails;
};

/* ***************************************************************** */

class OppositeParallelLinesCheckedType :
  public XmlTypeBase
{
public:
  OppositeParallelLinesCheckedType();
  OppositeParallelLinesCheckedType(
    OppositeParallelLinesCheckedTypeChoicePair * OppositeParallelLinesCheckedTypePairIn);
  ~OppositeParallelLinesCheckedType();
  void printSelf(FILE * outFile);

  OppositeParallelLinesCheckedTypeChoicePair * getOppositeParallelLinesCheckedTypePair();
  void setOppositeParallelLinesCheckedTypePair(OppositeParallelLinesCheckedTypeChoicePair * OppositeParallelLinesCheckedTypePairIn);

protected:
  OppositeParallelLinesCheckedTypeChoicePair * OppositeParallelLinesCheckedTypePair;
};

/* ***************************************************************** */

union OppositeParallelLinesCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  OppositeParallelLinesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OppositeParallelLinesCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  OppositeParallelLinesCheckedTypeChoicePair();
  OppositeParallelLinesCheckedTypeChoicePair(
    whichOne OppositeParallelLinesCheckedTypeTypeIn,
    OppositeParallelLinesCheckedTypeVal OppositeParallelLinesCheckedTypeValueIn);
  ~OppositeParallelLinesCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelLinesCheckedTypeType;
  OppositeParallelLinesCheckedTypeVal OppositeParallelLinesCheckedTypeValue;
};

/* ***************************************************************** */

class OppositeParallelLinesConstructionMethodType :
  public XmlTypeBase
{
public:
  OppositeParallelLinesConstructionMethodType();
  OppositeParallelLinesConstructionMethodType(
    OppositeParallelLinesConstructionMethodTypeChoicePair * OppositeParallelLinesConstructionMethodTypePairIn);
  ~OppositeParallelLinesConstructionMethodType();
  void printSelf(FILE * outFile);

  OppositeParallelLinesConstructionMethodTypeChoicePair * getOppositeParallelLinesConstructionMethodTypePair();
  void setOppositeParallelLinesConstructionMethodTypePair(OppositeParallelLinesConstructionMethodTypeChoicePair * OppositeParallelLinesConstructionMethodTypePairIn);

protected:
  OppositeParallelLinesConstructionMethodTypeChoicePair * OppositeParallelLinesConstructionMethodTypePair;
};

/* ***************************************************************** */

union OppositeParallelLinesConstructionMethodTypeVal
{
  OppositeParallelLinesBestFitType * BestFit;
  OppositeParallelLinesRecompType * Recompensated;
  OppositeParallelLinesIntersectionType * Intersection;
  OppositeParallelLinesProjectionType * Projection;
  OppositeParallelLinesCopyType * Copy;
  OppositeParallelLinesCastType * Cast;
  OppositeParallelLinesTransformType * Transform;
  OppositeParallelLinesFromScanType * FromScan;
};

/* ***************************************************************** */

class OppositeParallelLinesConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    IntersectionE,
    ProjectionE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  OppositeParallelLinesConstructionMethodTypeChoicePair();
  OppositeParallelLinesConstructionMethodTypeChoicePair(
    whichOne OppositeParallelLinesConstructionMethodTypeTypeIn,
    OppositeParallelLinesConstructionMethodTypeVal OppositeParallelLinesConstructionMethodTypeValueIn);
  ~OppositeParallelLinesConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelLinesConstructionMethodTypeType;
  OppositeParallelLinesConstructionMethodTypeVal OppositeParallelLinesConstructionMethodTypeValue;
};

/* ***************************************************************** */

class OppositeParallelLinesCopyType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesCopyType();
  OppositeParallelLinesCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeParallelLinesIn);
  ~OppositeParallelLinesCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeParallelLines();
  void setBaseOppositeParallelLines(BaseFeatureType * BaseOppositeParallelLinesIn);

protected:
  BaseFeatureType * BaseOppositeParallelLines;
};

/* ***************************************************************** */

class OppositeParallelLinesFromScanType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesFromScanType();
  OppositeParallelLinesFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    LinearValueType * DepthIn);
  ~OppositeParallelLinesFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  LinearValueType * Depth;
};

/* ***************************************************************** */

class OppositeParallelLinesIntersectionType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesIntersectionType();
  OppositeParallelLinesIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * IntersectionPlaneIn,
    BaseFeatureType * IntersectionFeatureIn);
  ~OppositeParallelLinesIntersectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getIntersectionPlane();
  void setIntersectionPlane(BaseFeatureType * IntersectionPlaneIn);
  BaseFeatureType * getIntersectionFeature();
  void setIntersectionFeature(BaseFeatureType * IntersectionFeatureIn);

protected:
  BaseFeatureType * IntersectionPlane;
  BaseFeatureType * IntersectionFeature;
};

/* ***************************************************************** */

class OppositeParallelLinesMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  OppositeParallelLinesMeasurementDeterminationType();
  OppositeParallelLinesMeasurementDeterminationType(
    OppositeParallelLinesMeasurementDeterminationTypeChoicePair * OppositeParallelLinesMeasurementDeterminationTypePairIn);
  ~OppositeParallelLinesMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  OppositeParallelLinesMeasurementDeterminationTypeChoicePair * getOppositeParallelLinesMeasurementDeterminationTypePair();
  void setOppositeParallelLinesMeasurementDeterminationTypePair(OppositeParallelLinesMeasurementDeterminationTypeChoicePair * OppositeParallelLinesMeasurementDeterminationTypePairIn);

protected:
  OppositeParallelLinesMeasurementDeterminationTypeChoicePair * OppositeParallelLinesMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union OppositeParallelLinesMeasurementDeterminationTypeVal
{
  OppositeParallelLinesCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class OppositeParallelLinesMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  OppositeParallelLinesMeasurementDeterminationTypeChoicePair();
  OppositeParallelLinesMeasurementDeterminationTypeChoicePair(
    whichOne OppositeParallelLinesMeasurementDeterminationTypeTypeIn,
    OppositeParallelLinesMeasurementDeterminationTypeVal OppositeParallelLinesMeasurementDeterminationTypeValueIn);
  ~OppositeParallelLinesMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelLinesMeasurementDeterminationTypeType;
  OppositeParallelLinesMeasurementDeterminationTypeVal OppositeParallelLinesMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class OppositeParallelLinesProjectionType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesProjectionType();
  OppositeParallelLinesProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionPlaneIn,
    BaseFeatureType * ProjectionOppositeParallelLinesIn);
  ~OppositeParallelLinesProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);
  BaseFeatureType * getProjectionOppositeParallelLines();
  void setProjectionOppositeParallelLines(BaseFeatureType * ProjectionOppositeParallelLinesIn);

protected:
  BaseFeatureType * ProjectionPlane;
  BaseFeatureType * ProjectionOppositeParallelLines;
};

/* ***************************************************************** */

class OppositeParallelLinesRecompType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesRecompType();
  OppositeParallelLinesRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~OppositeParallelLinesRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class OppositeParallelLinesTransformType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelLinesTransformType();
  OppositeParallelLinesTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeParallelLinesIn,
    TransformationReferenceType * TransformationIn);
  ~OppositeParallelLinesTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeParallelLines();
  void setBaseOppositeParallelLines(BaseFeatureType * BaseOppositeParallelLinesIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseOppositeParallelLines;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class OppositeParallelPlanesBestFitType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelPlanesBestFitType();
  OppositeParallelPlanesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  OppositeParallelPlanesBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~OppositeParallelPlanesBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class OppositeParallelPlanesCastType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelPlanesCastType();
  OppositeParallelPlanesCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~OppositeParallelPlanesCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class OppositeParallelPlanesCheckedFeatureType :
  public XmlTypeBase
{
public:
  OppositeParallelPlanesCheckedFeatureType();
  OppositeParallelPlanesCheckedFeatureType(
    OppositeParallelPlanesCheckedType * CheckDetailsIn);
  ~OppositeParallelPlanesCheckedFeatureType();
  void printSelf(FILE * outFile);

  OppositeParallelPlanesCheckedType * getCheckDetails();
  void setCheckDetails(OppositeParallelPlanesCheckedType * CheckDetailsIn);

protected:
  OppositeParallelPlanesCheckedType * CheckDetails;
};

/* ***************************************************************** */

class OppositeParallelPlanesCheckedType :
  public XmlTypeBase
{
public:
  OppositeParallelPlanesCheckedType();
  OppositeParallelPlanesCheckedType(
    OppositeParallelPlanesCheckedTypeChoicePair * OppositeParallelPlanesCheckedTypePairIn);
  ~OppositeParallelPlanesCheckedType();
  void printSelf(FILE * outFile);

  OppositeParallelPlanesCheckedTypeChoicePair * getOppositeParallelPlanesCheckedTypePair();
  void setOppositeParallelPlanesCheckedTypePair(OppositeParallelPlanesCheckedTypeChoicePair * OppositeParallelPlanesCheckedTypePairIn);

protected:
  OppositeParallelPlanesCheckedTypeChoicePair * OppositeParallelPlanesCheckedTypePair;
};

/* ***************************************************************** */

union OppositeParallelPlanesCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  OppositeParallelPlanesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OppositeParallelPlanesCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  OppositeParallelPlanesCheckedTypeChoicePair();
  OppositeParallelPlanesCheckedTypeChoicePair(
    whichOne OppositeParallelPlanesCheckedTypeTypeIn,
    OppositeParallelPlanesCheckedTypeVal OppositeParallelPlanesCheckedTypeValueIn);
  ~OppositeParallelPlanesCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelPlanesCheckedTypeType;
  OppositeParallelPlanesCheckedTypeVal OppositeParallelPlanesCheckedTypeValue;
};

/* ***************************************************************** */

class OppositeParallelPlanesConstructionMethodType :
  public XmlTypeBase
{
public:
  OppositeParallelPlanesConstructionMethodType();
  OppositeParallelPlanesConstructionMethodType(
    OppositeParallelPlanesConstructionMethodTypeChoicePair * OppositeParallelPlanesConstructionMethodTypePairIn);
  ~OppositeParallelPlanesConstructionMethodType();
  void printSelf(FILE * outFile);

  OppositeParallelPlanesConstructionMethodTypeChoicePair * getOppositeParallelPlanesConstructionMethodTypePair();
  void setOppositeParallelPlanesConstructionMethodTypePair(OppositeParallelPlanesConstructionMethodTypeChoicePair * OppositeParallelPlanesConstructionMethodTypePairIn);

protected:
  OppositeParallelPlanesConstructionMethodTypeChoicePair * OppositeParallelPlanesConstructionMethodTypePair;
};

/* ***************************************************************** */

union OppositeParallelPlanesConstructionMethodTypeVal
{
  OppositeParallelPlanesBestFitType * BestFit;
  OppositeParallelPlanesRecompType * Recompensated;
  OppositeParallelPlanesCopyType * Copy;
  OppositeParallelPlanesCastType * Cast;
  OppositeParallelPlanesTransformType * Transform;
  OppositeParallelPlanesFromScanType * FromScan;
};

/* ***************************************************************** */

class OppositeParallelPlanesConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  OppositeParallelPlanesConstructionMethodTypeChoicePair();
  OppositeParallelPlanesConstructionMethodTypeChoicePair(
    whichOne OppositeParallelPlanesConstructionMethodTypeTypeIn,
    OppositeParallelPlanesConstructionMethodTypeVal OppositeParallelPlanesConstructionMethodTypeValueIn);
  ~OppositeParallelPlanesConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelPlanesConstructionMethodTypeType;
  OppositeParallelPlanesConstructionMethodTypeVal OppositeParallelPlanesConstructionMethodTypeValue;
};

/* ***************************************************************** */

class OppositeParallelPlanesCopyType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelPlanesCopyType();
  OppositeParallelPlanesCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeParallelPlanesIn);
  ~OppositeParallelPlanesCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeParallelPlanes();
  void setBaseOppositeParallelPlanes(BaseFeatureType * BaseOppositeParallelPlanesIn);

protected:
  BaseFeatureType * BaseOppositeParallelPlanes;
};

/* ***************************************************************** */

class OppositeParallelPlanesFromScanType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelPlanesFromScanType();
  OppositeParallelPlanesFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn);
  ~OppositeParallelPlanesFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
};

/* ***************************************************************** */

class OppositeParallelPlanesMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  OppositeParallelPlanesMeasurementDeterminationType();
  OppositeParallelPlanesMeasurementDeterminationType(
    OppositeParallelPlanesMeasurementDeterminationTypeChoicePair * OppositeParallelPlanesMeasurementDeterminationTypePairIn);
  ~OppositeParallelPlanesMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  OppositeParallelPlanesMeasurementDeterminationTypeChoicePair * getOppositeParallelPlanesMeasurementDeterminationTypePair();
  void setOppositeParallelPlanesMeasurementDeterminationTypePair(OppositeParallelPlanesMeasurementDeterminationTypeChoicePair * OppositeParallelPlanesMeasurementDeterminationTypePairIn);

protected:
  OppositeParallelPlanesMeasurementDeterminationTypeChoicePair * OppositeParallelPlanesMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union OppositeParallelPlanesMeasurementDeterminationTypeVal
{
  OppositeParallelPlanesCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class OppositeParallelPlanesMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  OppositeParallelPlanesMeasurementDeterminationTypeChoicePair();
  OppositeParallelPlanesMeasurementDeterminationTypeChoicePair(
    whichOne OppositeParallelPlanesMeasurementDeterminationTypeTypeIn,
    OppositeParallelPlanesMeasurementDeterminationTypeVal OppositeParallelPlanesMeasurementDeterminationTypeValueIn);
  ~OppositeParallelPlanesMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeParallelPlanesMeasurementDeterminationTypeType;
  OppositeParallelPlanesMeasurementDeterminationTypeVal OppositeParallelPlanesMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class OppositeParallelPlanesRecompType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelPlanesRecompType();
  OppositeParallelPlanesRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~OppositeParallelPlanesRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class OppositeParallelPlanesTransformType :
  public ConstructionMethodBaseType
{
public:
  OppositeParallelPlanesTransformType();
  OppositeParallelPlanesTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOppositeParallelPlanesIn,
    TransformationReferenceType * TransformationIn);
  ~OppositeParallelPlanesTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOppositeParallelPlanes();
  void setBaseOppositeParallelPlanes(BaseFeatureType * BaseOppositeParallelPlanesIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseOppositeParallelPlanes;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class OtherCurveCheckedFeatureType :
  public XmlTypeBase
{
public:
  OtherCurveCheckedFeatureType();
  OtherCurveCheckedFeatureType(
    OtherCurveCheckedType * CheckDetailsIn);
  ~OtherCurveCheckedFeatureType();
  void printSelf(FILE * outFile);

  OtherCurveCheckedType * getCheckDetails();
  void setCheckDetails(OtherCurveCheckedType * CheckDetailsIn);

protected:
  OtherCurveCheckedType * CheckDetails;
};

/* ***************************************************************** */

class OtherCurveCheckedType :
  public XmlTypeBase
{
public:
  OtherCurveCheckedType();
  OtherCurveCheckedType(
    OtherCurveCheckedTypeChoicePair * OtherCurveCheckedTypePairIn);
  ~OtherCurveCheckedType();
  void printSelf(FILE * outFile);

  OtherCurveCheckedTypeChoicePair * getOtherCurveCheckedTypePair();
  void setOtherCurveCheckedTypePair(OtherCurveCheckedTypeChoicePair * OtherCurveCheckedTypePairIn);

protected:
  OtherCurveCheckedTypeChoicePair * OtherCurveCheckedTypePair;
};

/* ***************************************************************** */

union OtherCurveCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  OtherCurveConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OtherCurveCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  OtherCurveCheckedTypeChoicePair();
  OtherCurveCheckedTypeChoicePair(
    whichOne OtherCurveCheckedTypeTypeIn,
    OtherCurveCheckedTypeVal OtherCurveCheckedTypeValueIn);
  ~OtherCurveCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherCurveCheckedTypeType;
  OtherCurveCheckedTypeVal OtherCurveCheckedTypeValue;
};

/* ***************************************************************** */

class OtherCurveConstructionMethodType :
  public XmlTypeBase
{
public:
  OtherCurveConstructionMethodType();
  OtherCurveConstructionMethodType(
    OtherCurveConstructionMethodTypeChoicePair * OtherCurveConstructionMethodTypePairIn);
  ~OtherCurveConstructionMethodType();
  void printSelf(FILE * outFile);

  OtherCurveConstructionMethodTypeChoicePair * getOtherCurveConstructionMethodTypePair();
  void setOtherCurveConstructionMethodTypePair(OtherCurveConstructionMethodTypeChoicePair * OtherCurveConstructionMethodTypePairIn);

protected:
  OtherCurveConstructionMethodTypeChoicePair * OtherCurveConstructionMethodTypePair;
};

/* ***************************************************************** */

union OtherCurveConstructionMethodTypeVal
{
  OtherCurveFeatureCopyType * Copy;
};

/* ***************************************************************** */

class OtherCurveConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CopyE };
  OtherCurveConstructionMethodTypeChoicePair();
  OtherCurveConstructionMethodTypeChoicePair(
    whichOne OtherCurveConstructionMethodTypeTypeIn,
    OtherCurveConstructionMethodTypeVal OtherCurveConstructionMethodTypeValueIn);
  ~OtherCurveConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherCurveConstructionMethodTypeType;
  OtherCurveConstructionMethodTypeVal OtherCurveConstructionMethodTypeValue;
};

/* ***************************************************************** */

class OtherCurveFeatureCopyType :
  public ConstructionMethodBaseType
{
public:
  OtherCurveFeatureCopyType();
  OtherCurveFeatureCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOtherCurveFeatureIn);
  ~OtherCurveFeatureCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOtherCurveFeature();
  void setBaseOtherCurveFeature(BaseFeatureType * BaseOtherCurveFeatureIn);

protected:
  BaseFeatureType * BaseOtherCurveFeature;
};

/* ***************************************************************** */

class OtherCurveMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  OtherCurveMeasurementDeterminationType();
  OtherCurveMeasurementDeterminationType(
    OtherCurveMeasurementDeterminationTypeChoicePair * OtherCurveMeasurementDeterminationTypePairIn);
  ~OtherCurveMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  OtherCurveMeasurementDeterminationTypeChoicePair * getOtherCurveMeasurementDeterminationTypePair();
  void setOtherCurveMeasurementDeterminationTypePair(OtherCurveMeasurementDeterminationTypeChoicePair * OtherCurveMeasurementDeterminationTypePairIn);

protected:
  OtherCurveMeasurementDeterminationTypeChoicePair * OtherCurveMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union OtherCurveMeasurementDeterminationTypeVal
{
  OtherCurveCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class OtherCurveMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  OtherCurveMeasurementDeterminationTypeChoicePair();
  OtherCurveMeasurementDeterminationTypeChoicePair(
    whichOne OtherCurveMeasurementDeterminationTypeTypeIn,
    OtherCurveMeasurementDeterminationTypeVal OtherCurveMeasurementDeterminationTypeValueIn);
  ~OtherCurveMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherCurveMeasurementDeterminationTypeType;
  OtherCurveMeasurementDeterminationTypeVal OtherCurveMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class OtherNonShapeFeatureDefinitionType :
  public NonShapeFeatureDefinitionBaseType
{
public:
  OtherNonShapeFeatureDefinitionType();
  OtherNonShapeFeatureDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn);
  OtherNonShapeFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn);
  ~OtherNonShapeFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  XmlString * Description;
};

/* ***************************************************************** */

class OtherNonShapeFeatureItemType :
  public NonShapeFeatureItemBaseType
{
public:
  OtherNonShapeFeatureItemType();
  OtherNonShapeFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  OtherNonShapeFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~OtherNonShapeFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class OtherNonShapeFeatureMeasurementType :
  public NonShapeFeatureMeasurementBaseType
{
public:
  OtherNonShapeFeatureMeasurementType();
  OtherNonShapeFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn);
  OtherNonShapeFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn);
  ~OtherNonShapeFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class OtherNonShapeFeatureNominalType :
  public NonShapeFeatureNominalBaseType
{
public:
  OtherNonShapeFeatureNominalType();
  OtherNonShapeFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    ArrayReferenceFullType * ReferenceFeatureNominalIdsIn);
  OtherNonShapeFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    ArrayReferenceFullType * ReferenceFeatureNominalIdsIn);
  ~OtherNonShapeFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceFullType * getReferenceFeatureNominalIds();
  void setReferenceFeatureNominalIds(ArrayReferenceFullType * ReferenceFeatureNominalIdsIn);

protected:
  ArrayReferenceFullType * ReferenceFeatureNominalIds;
};

/* ***************************************************************** */

class OtherShapeCheckedFeatureType :
  public XmlTypeBase
{
public:
  OtherShapeCheckedFeatureType();
  OtherShapeCheckedFeatureType(
    OtherShapeCheckedType * CheckDetailsIn);
  ~OtherShapeCheckedFeatureType();
  void printSelf(FILE * outFile);

  OtherShapeCheckedType * getCheckDetails();
  void setCheckDetails(OtherShapeCheckedType * CheckDetailsIn);

protected:
  OtherShapeCheckedType * CheckDetails;
};

/* ***************************************************************** */

class OtherShapeCheckedType :
  public XmlTypeBase
{
public:
  OtherShapeCheckedType();
  OtherShapeCheckedType(
    OtherShapeCheckedTypeChoicePair * OtherShapeCheckedTypePairIn);
  ~OtherShapeCheckedType();
  void printSelf(FILE * outFile);

  OtherShapeCheckedTypeChoicePair * getOtherShapeCheckedTypePair();
  void setOtherShapeCheckedTypePair(OtherShapeCheckedTypeChoicePair * OtherShapeCheckedTypePairIn);

protected:
  OtherShapeCheckedTypeChoicePair * OtherShapeCheckedTypePair;
};

/* ***************************************************************** */

union OtherShapeCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  OtherShapeConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OtherShapeCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  OtherShapeCheckedTypeChoicePair();
  OtherShapeCheckedTypeChoicePair(
    whichOne OtherShapeCheckedTypeTypeIn,
    OtherShapeCheckedTypeVal OtherShapeCheckedTypeValueIn);
  ~OtherShapeCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherShapeCheckedTypeType;
  OtherShapeCheckedTypeVal OtherShapeCheckedTypeValue;
};

/* ***************************************************************** */

class OtherShapeConstructionMethodType :
  public XmlTypeBase
{
public:
  OtherShapeConstructionMethodType();
  OtherShapeConstructionMethodType(
    OtherShapeConstructionMethodTypeChoicePair * OtherShapeConstructionMethodTypePairIn);
  ~OtherShapeConstructionMethodType();
  void printSelf(FILE * outFile);

  OtherShapeConstructionMethodTypeChoicePair * getOtherShapeConstructionMethodTypePair();
  void setOtherShapeConstructionMethodTypePair(OtherShapeConstructionMethodTypeChoicePair * OtherShapeConstructionMethodTypePairIn);

protected:
  OtherShapeConstructionMethodTypeChoicePair * OtherShapeConstructionMethodTypePair;
};

/* ***************************************************************** */

union OtherShapeConstructionMethodTypeVal
{
  OtherShapeFeatureCopyType * Copy;
};

/* ***************************************************************** */

class OtherShapeConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CopyE };
  OtherShapeConstructionMethodTypeChoicePair();
  OtherShapeConstructionMethodTypeChoicePair(
    whichOne OtherShapeConstructionMethodTypeTypeIn,
    OtherShapeConstructionMethodTypeVal OtherShapeConstructionMethodTypeValueIn);
  ~OtherShapeConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherShapeConstructionMethodTypeType;
  OtherShapeConstructionMethodTypeVal OtherShapeConstructionMethodTypeValue;
};

/* ***************************************************************** */

class OtherShapeFeatureCopyType :
  public ConstructionMethodBaseType
{
public:
  OtherShapeFeatureCopyType();
  OtherShapeFeatureCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOtherShapeFeatureIn);
  ~OtherShapeFeatureCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOtherShapeFeature();
  void setBaseOtherShapeFeature(BaseFeatureType * BaseOtherShapeFeatureIn);

protected:
  BaseFeatureType * BaseOtherShapeFeature;
};

/* ***************************************************************** */

class OtherShapeMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  OtherShapeMeasurementDeterminationType();
  OtherShapeMeasurementDeterminationType(
    OtherShapeMeasurementDeterminationTypeChoicePair * OtherShapeMeasurementDeterminationTypePairIn);
  ~OtherShapeMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  OtherShapeMeasurementDeterminationTypeChoicePair * getOtherShapeMeasurementDeterminationTypePair();
  void setOtherShapeMeasurementDeterminationTypePair(OtherShapeMeasurementDeterminationTypeChoicePair * OtherShapeMeasurementDeterminationTypePairIn);

protected:
  OtherShapeMeasurementDeterminationTypeChoicePair * OtherShapeMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union OtherShapeMeasurementDeterminationTypeVal
{
  OtherShapeCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class OtherShapeMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  OtherShapeMeasurementDeterminationTypeChoicePair();
  OtherShapeMeasurementDeterminationTypeChoicePair(
    whichOne OtherShapeMeasurementDeterminationTypeTypeIn,
    OtherShapeMeasurementDeterminationTypeVal OtherShapeMeasurementDeterminationTypeValueIn);
  ~OtherShapeMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherShapeMeasurementDeterminationTypeType;
  OtherShapeMeasurementDeterminationTypeVal OtherShapeMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class OtherSurfaceCheckedFeatureType :
  public XmlTypeBase
{
public:
  OtherSurfaceCheckedFeatureType();
  OtherSurfaceCheckedFeatureType(
    OtherSurfaceCheckedType * CheckDetailsIn);
  ~OtherSurfaceCheckedFeatureType();
  void printSelf(FILE * outFile);

  OtherSurfaceCheckedType * getCheckDetails();
  void setCheckDetails(OtherSurfaceCheckedType * CheckDetailsIn);

protected:
  OtherSurfaceCheckedType * CheckDetails;
};

/* ***************************************************************** */

class OtherSurfaceCheckedType :
  public XmlTypeBase
{
public:
  OtherSurfaceCheckedType();
  OtherSurfaceCheckedType(
    OtherSurfaceCheckedTypeChoicePair * OtherSurfaceCheckedTypePairIn);
  ~OtherSurfaceCheckedType();
  void printSelf(FILE * outFile);

  OtherSurfaceCheckedTypeChoicePair * getOtherSurfaceCheckedTypePair();
  void setOtherSurfaceCheckedTypePair(OtherSurfaceCheckedTypeChoicePair * OtherSurfaceCheckedTypePairIn);

protected:
  OtherSurfaceCheckedTypeChoicePair * OtherSurfaceCheckedTypePair;
};

/* ***************************************************************** */

union OtherSurfaceCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  OtherSurfaceConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OtherSurfaceCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  OtherSurfaceCheckedTypeChoicePair();
  OtherSurfaceCheckedTypeChoicePair(
    whichOne OtherSurfaceCheckedTypeTypeIn,
    OtherSurfaceCheckedTypeVal OtherSurfaceCheckedTypeValueIn);
  ~OtherSurfaceCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherSurfaceCheckedTypeType;
  OtherSurfaceCheckedTypeVal OtherSurfaceCheckedTypeValue;
};

/* ***************************************************************** */

class OtherSurfaceConstructionMethodType :
  public XmlTypeBase
{
public:
  OtherSurfaceConstructionMethodType();
  OtherSurfaceConstructionMethodType(
    OtherSurfaceConstructionMethodTypeChoicePair * OtherSurfaceConstructionMethodTypePairIn);
  ~OtherSurfaceConstructionMethodType();
  void printSelf(FILE * outFile);

  OtherSurfaceConstructionMethodTypeChoicePair * getOtherSurfaceConstructionMethodTypePair();
  void setOtherSurfaceConstructionMethodTypePair(OtherSurfaceConstructionMethodTypeChoicePair * OtherSurfaceConstructionMethodTypePairIn);

protected:
  OtherSurfaceConstructionMethodTypeChoicePair * OtherSurfaceConstructionMethodTypePair;
};

/* ***************************************************************** */

union OtherSurfaceConstructionMethodTypeVal
{
  OtherSurfaceFeatureCopyType * Copy;
};

/* ***************************************************************** */

class OtherSurfaceConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CopyE };
  OtherSurfaceConstructionMethodTypeChoicePair();
  OtherSurfaceConstructionMethodTypeChoicePair(
    whichOne OtherSurfaceConstructionMethodTypeTypeIn,
    OtherSurfaceConstructionMethodTypeVal OtherSurfaceConstructionMethodTypeValueIn);
  ~OtherSurfaceConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherSurfaceConstructionMethodTypeType;
  OtherSurfaceConstructionMethodTypeVal OtherSurfaceConstructionMethodTypeValue;
};

/* ***************************************************************** */

class OtherSurfaceFeatureCopyType :
  public ConstructionMethodBaseType
{
public:
  OtherSurfaceFeatureCopyType();
  OtherSurfaceFeatureCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseOtherSurfaceFeatureIn);
  ~OtherSurfaceFeatureCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseOtherSurfaceFeature();
  void setBaseOtherSurfaceFeature(BaseFeatureType * BaseOtherSurfaceFeatureIn);

protected:
  BaseFeatureType * BaseOtherSurfaceFeature;
};

/* ***************************************************************** */

class OtherSurfaceMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  OtherSurfaceMeasurementDeterminationType();
  OtherSurfaceMeasurementDeterminationType(
    OtherSurfaceMeasurementDeterminationTypeChoicePair * OtherSurfaceMeasurementDeterminationTypePairIn);
  ~OtherSurfaceMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  OtherSurfaceMeasurementDeterminationTypeChoicePair * getOtherSurfaceMeasurementDeterminationTypePair();
  void setOtherSurfaceMeasurementDeterminationTypePair(OtherSurfaceMeasurementDeterminationTypeChoicePair * OtherSurfaceMeasurementDeterminationTypePairIn);

protected:
  OtherSurfaceMeasurementDeterminationTypeChoicePair * OtherSurfaceMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union OtherSurfaceMeasurementDeterminationTypeVal
{
  OtherSurfaceCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class OtherSurfaceMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  OtherSurfaceMeasurementDeterminationTypeChoicePair();
  OtherSurfaceMeasurementDeterminationTypeChoicePair(
    whichOne OtherSurfaceMeasurementDeterminationTypeTypeIn,
    OtherSurfaceMeasurementDeterminationTypeVal OtherSurfaceMeasurementDeterminationTypeValueIn);
  ~OtherSurfaceMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherSurfaceMeasurementDeterminationTypeType;
  OtherSurfaceMeasurementDeterminationTypeVal OtherSurfaceMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class PlaneBestFitType :
  public ConstructionMethodBaseType
{
public:
  PlaneBestFitType();
  PlaneBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  PlaneBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~PlaneBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class PlaneCastType :
  public ConstructionMethodBaseType
{
public:
  PlaneCastType();
  PlaneCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~PlaneCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class PlaneCheckedFeatureType :
  public XmlTypeBase
{
public:
  PlaneCheckedFeatureType();
  PlaneCheckedFeatureType(
    PlaneCheckedType * CheckDetailsIn);
  ~PlaneCheckedFeatureType();
  void printSelf(FILE * outFile);

  PlaneCheckedType * getCheckDetails();
  void setCheckDetails(PlaneCheckedType * CheckDetailsIn);

protected:
  PlaneCheckedType * CheckDetails;
};

/* ***************************************************************** */

class PlaneCheckedType :
  public XmlTypeBase
{
public:
  PlaneCheckedType();
  PlaneCheckedType(
    PlaneCheckedTypeChoicePair * PlaneCheckedTypePairIn);
  ~PlaneCheckedType();
  void printSelf(FILE * outFile);

  PlaneCheckedTypeChoicePair * getPlaneCheckedTypePair();
  void setPlaneCheckedTypePair(PlaneCheckedTypeChoicePair * PlaneCheckedTypePairIn);

protected:
  PlaneCheckedTypeChoicePair * PlaneCheckedTypePair;
};

/* ***************************************************************** */

union PlaneCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  PlaneConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PlaneCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  PlaneCheckedTypeChoicePair();
  PlaneCheckedTypeChoicePair(
    whichOne PlaneCheckedTypeTypeIn,
    PlaneCheckedTypeVal PlaneCheckedTypeValueIn);
  ~PlaneCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PlaneCheckedTypeType;
  PlaneCheckedTypeVal PlaneCheckedTypeValue;
};

/* ***************************************************************** */

class PlaneConstructionMethodType :
  public XmlTypeBase
{
public:
  PlaneConstructionMethodType();
  PlaneConstructionMethodType(
    PlaneConstructionMethodTypeChoicePair * PlaneConstructionMethodTypePairIn);
  ~PlaneConstructionMethodType();
  void printSelf(FILE * outFile);

  PlaneConstructionMethodTypeChoicePair * getPlaneConstructionMethodTypePair();
  void setPlaneConstructionMethodTypePair(PlaneConstructionMethodTypeChoicePair * PlaneConstructionMethodTypePairIn);

protected:
  PlaneConstructionMethodTypeChoicePair * PlaneConstructionMethodTypePair;
};

/* ***************************************************************** */

union PlaneConstructionMethodTypeVal
{
  PlaneBestFitType * BestFit;
  PlaneRecompType * Recompensated;
  PlaneMidplaneType * Midplane;
  PlaneOffsetType * Offset;
  PlanePerpendicularType * Perpendicular;
  PlaneParallelType * Parallel;
  PlaneCopyType * Copy;
  PlaneCastType * Cast;
  PlaneTangentThroughType * TangentThrough;
  PlaneThroughType * Through;
  PlaneTransformType * Transform;
  PlaneExtractType * Extract;
};

/* ***************************************************************** */

class PlaneConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    MidplaneE,
    OffsetE,
    PerpendicularE,
    ParallelE,
    CopyE,
    CastE,
    TangentThroughE,
    ThroughE,
    TransformE,
    ExtractE };
  PlaneConstructionMethodTypeChoicePair();
  PlaneConstructionMethodTypeChoicePair(
    whichOne PlaneConstructionMethodTypeTypeIn,
    PlaneConstructionMethodTypeVal PlaneConstructionMethodTypeValueIn);
  ~PlaneConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PlaneConstructionMethodTypeType;
  PlaneConstructionMethodTypeVal PlaneConstructionMethodTypeValue;
};

/* ***************************************************************** */

class PlaneCopyType :
  public ConstructionMethodBaseType
{
public:
  PlaneCopyType();
  PlaneCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePlaneIn);
  ~PlaneCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePlane();
  void setBasePlane(BaseFeatureType * BasePlaneIn);

protected:
  BaseFeatureType * BasePlane;
};

/* ***************************************************************** */

class PlaneExtractType :
  public ConstructionMethodBaseType
{
public:
  PlaneExtractType();
  PlaneExtractType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn);
  ~PlaneExtractType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);

protected:
  BaseFeatureType * SurfaceFeature;
};

/* ***************************************************************** */

class PlaneMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  PlaneMeasurementDeterminationType();
  PlaneMeasurementDeterminationType(
    PlaneMeasurementDeterminationTypeChoicePair * PlaneMeasurementDeterminationTypePairIn);
  ~PlaneMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  PlaneMeasurementDeterminationTypeChoicePair * getPlaneMeasurementDeterminationTypePair();
  void setPlaneMeasurementDeterminationTypePair(PlaneMeasurementDeterminationTypeChoicePair * PlaneMeasurementDeterminationTypePairIn);

protected:
  PlaneMeasurementDeterminationTypeChoicePair * PlaneMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union PlaneMeasurementDeterminationTypeVal
{
  PlaneCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class PlaneMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  PlaneMeasurementDeterminationTypeChoicePair();
  PlaneMeasurementDeterminationTypeChoicePair(
    whichOne PlaneMeasurementDeterminationTypeTypeIn,
    PlaneMeasurementDeterminationTypeVal PlaneMeasurementDeterminationTypeValueIn);
  ~PlaneMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PlaneMeasurementDeterminationTypeType;
  PlaneMeasurementDeterminationTypeVal PlaneMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class PlaneMidplaneType :
  public ConstructionMethodBaseType
{
public:
  PlaneMidplaneType();
  PlaneMidplaneType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BasePlaneIn);
  ~PlaneMidplaneType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getBasePlane();
  void setBasePlane(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * BasePlane;
};

/* ***************************************************************** */

class PlaneOffsetType :
  public ConstructionMethodBaseType
{
public:
  PlaneOffsetType();
  PlaneOffsetType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePlaneIn,
    LinearValueType * OffsetIn);
  ~PlaneOffsetType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePlane();
  void setBasePlane(BaseFeatureType * BasePlaneIn);
  LinearValueType * getOffset();
  void setOffset(LinearValueType * OffsetIn);

protected:
  BaseFeatureType * BasePlane;
  LinearValueType * Offset;
};

/* ***************************************************************** */

class PlaneParallelType :
  public ConstructionMethodBaseType
{
public:
  PlaneParallelType();
  PlaneParallelType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ParallelFeatureIn,
    BaseFeatureType * PointFeatureIn);
  ~PlaneParallelType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getParallelFeature();
  void setParallelFeature(BaseFeatureType * ParallelFeatureIn);
  BaseFeatureType * getPointFeature();
  void setPointFeature(BaseFeatureType * PointFeatureIn);

protected:
  BaseFeatureType * ParallelFeature;
  BaseFeatureType * PointFeature;
};

/* ***************************************************************** */

class PlanePerpendicularType :
  public ConstructionMethodBaseType
{
public:
  PlanePerpendicularType();
  PlanePerpendicularType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * PerpendicularFeatureIn,
    BaseFeatureType * PointFeatureIn);
  ~PlanePerpendicularType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getPerpendicularFeature();
  void setPerpendicularFeature(BaseFeatureType * PerpendicularFeatureIn);
  BaseFeatureType * getPointFeature();
  void setPointFeature(BaseFeatureType * PointFeatureIn);

protected:
  BaseFeatureType * PerpendicularFeature;
  BaseFeatureType * PointFeature;
};

/* ***************************************************************** */

class PlaneRecompType :
  public ConstructionMethodBaseType
{
public:
  PlaneRecompType();
  PlaneRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~PlaneRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class PlaneTangentThroughType :
  public ConstructionMethodBaseType
{
public:
  PlaneTangentThroughType();
  PlaneTangentThroughType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * TangentFeatureIn,
    BaseFeatureType * PointFeatureIn);
  ~PlaneTangentThroughType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getTangentFeature();
  void setTangentFeature(BaseFeatureType * TangentFeatureIn);
  BaseFeatureType * getPointFeature();
  void setPointFeature(BaseFeatureType * PointFeatureIn);

protected:
  BaseFeatureType * TangentFeature;
  BaseFeatureType * PointFeature;
};

/* ***************************************************************** */

class PlaneThroughType :
  public ConstructionMethodBaseType
{
public:
  PlaneThroughType();
  PlaneThroughType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~PlaneThroughType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class PlaneTransformType :
  public ConstructionMethodBaseType
{
public:
  PlaneTransformType();
  PlaneTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePlaneIn,
    TransformationReferenceType * TransformationIn);
  ~PlaneTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePlane();
  void setBasePlane(BaseFeatureType * BasePlaneIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BasePlane;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class PointCheckedFeatureType :
  public XmlTypeBase
{
public:
  PointCheckedFeatureType();
  PointCheckedFeatureType(
    PointCheckedType * CheckDetailsIn);
  ~PointCheckedFeatureType();
  void printSelf(FILE * outFile);

  PointCheckedType * getCheckDetails();
  void setCheckDetails(PointCheckedType * CheckDetailsIn);

protected:
  PointCheckedType * CheckDetails;
};

/* ***************************************************************** */

class PointCheckedType :
  public XmlTypeBase
{
public:
  PointCheckedType();
  PointCheckedType(
    PointCheckedTypeChoicePair * PointCheckedTypePairIn);
  ~PointCheckedType();
  void printSelf(FILE * outFile);

  PointCheckedTypeChoicePair * getPointCheckedTypePair();
  void setPointCheckedTypePair(PointCheckedTypeChoicePair * PointCheckedTypePairIn);

protected:
  PointCheckedTypeChoicePair * PointCheckedTypePair;
};

/* ***************************************************************** */

union PointCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  PointConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PointCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  PointCheckedTypeChoicePair();
  PointCheckedTypeChoicePair(
    whichOne PointCheckedTypeTypeIn,
    PointCheckedTypeVal PointCheckedTypeValueIn);
  ~PointCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointCheckedTypeType;
  PointCheckedTypeVal PointCheckedTypeValue;
};

/* ***************************************************************** */

class PointConstructionMethodType :
  public XmlTypeBase
{
public:
  PointConstructionMethodType();
  PointConstructionMethodType(
    PointConstructionMethodTypeChoicePair * PointConstructionMethodTypePairIn);
  ~PointConstructionMethodType();
  void printSelf(FILE * outFile);

  PointConstructionMethodTypeChoicePair * getPointConstructionMethodTypePair();
  void setPointConstructionMethodTypePair(PointConstructionMethodTypeChoicePair * PointConstructionMethodTypePairIn);

protected:
  PointConstructionMethodTypeChoicePair * PointConstructionMethodTypePair;
};

/* ***************************************************************** */

union PointConstructionMethodTypeVal
{
  PointFeatureIntersectionType * Intersection;
  PointFeatureProjectionType * Projection;
  PointFeatureCopyType * Copy;
  PointFeatureCastType * Cast;
  PointFeatureTransformType * Transform;
  PointFeatureFromConeType * FromCone;
  PointFeatureFromScanType * FromScan;
  PointFeatureCenterOfGravityType * CenterOfGravity;
  PointFeaturePierceType * Pierce;
  PointFeatureMidPointType * MidPoint;
  PointFeatureMovePointType * MovePoint;
  PointFeatureMovePointVectorType * MovePointVector;
  PointFeatureMovePointAxisType * MovePointAxis;
  PointFeatureExtremeType * Extreme;
};

/* ***************************************************************** */

class PointConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    IntersectionE,
    ProjectionE,
    CopyE,
    CastE,
    TransformE,
    FromConeE,
    FromScanE,
    CenterOfGravityE,
    PierceE,
    MidPointE,
    MovePointE,
    MovePointVectorE,
    MovePointAxisE,
    ExtremeE };
  PointConstructionMethodTypeChoicePair();
  PointConstructionMethodTypeChoicePair(
    whichOne PointConstructionMethodTypeTypeIn,
    PointConstructionMethodTypeVal PointConstructionMethodTypeValueIn);
  ~PointConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointConstructionMethodTypeType;
  PointConstructionMethodTypeVal PointConstructionMethodTypeValue;
};

/* ***************************************************************** */

class PointDefinedCurveBestFitType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedCurveBestFitType();
  PointDefinedCurveBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  PointDefinedCurveBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~PointDefinedCurveBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class PointDefinedCurveCheckedFeatureType :
  public XmlTypeBase
{
public:
  PointDefinedCurveCheckedFeatureType();
  PointDefinedCurveCheckedFeatureType(
    PointDefinedCurveCheckedType * CheckDetailsIn);
  ~PointDefinedCurveCheckedFeatureType();
  void printSelf(FILE * outFile);

  PointDefinedCurveCheckedType * getCheckDetails();
  void setCheckDetails(PointDefinedCurveCheckedType * CheckDetailsIn);

protected:
  PointDefinedCurveCheckedType * CheckDetails;
};

/* ***************************************************************** */

class PointDefinedCurveCheckedType :
  public XmlTypeBase
{
public:
  PointDefinedCurveCheckedType();
  PointDefinedCurveCheckedType(
    PointDefinedCurveCheckedTypeChoicePair * PointDefinedCurveCheckedTypePairIn);
  ~PointDefinedCurveCheckedType();
  void printSelf(FILE * outFile);

  PointDefinedCurveCheckedTypeChoicePair * getPointDefinedCurveCheckedTypePair();
  void setPointDefinedCurveCheckedTypePair(PointDefinedCurveCheckedTypeChoicePair * PointDefinedCurveCheckedTypePairIn);

protected:
  PointDefinedCurveCheckedTypeChoicePair * PointDefinedCurveCheckedTypePair;
};

/* ***************************************************************** */

union PointDefinedCurveCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  PointDefinedCurveConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PointDefinedCurveCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  PointDefinedCurveCheckedTypeChoicePair();
  PointDefinedCurveCheckedTypeChoicePair(
    whichOne PointDefinedCurveCheckedTypeTypeIn,
    PointDefinedCurveCheckedTypeVal PointDefinedCurveCheckedTypeValueIn);
  ~PointDefinedCurveCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedCurveCheckedTypeType;
  PointDefinedCurveCheckedTypeVal PointDefinedCurveCheckedTypeValue;
};

/* ***************************************************************** */

class PointDefinedCurveConstructionMethodType :
  public XmlTypeBase
{
public:
  PointDefinedCurveConstructionMethodType();
  PointDefinedCurveConstructionMethodType(
    PointDefinedCurveConstructionMethodTypeChoicePair * PointDefinedCurveConstructionMethodTypePairIn);
  ~PointDefinedCurveConstructionMethodType();
  void printSelf(FILE * outFile);

  PointDefinedCurveConstructionMethodTypeChoicePair * getPointDefinedCurveConstructionMethodTypePair();
  void setPointDefinedCurveConstructionMethodTypePair(PointDefinedCurveConstructionMethodTypeChoicePair * PointDefinedCurveConstructionMethodTypePairIn);

protected:
  PointDefinedCurveConstructionMethodTypeChoicePair * PointDefinedCurveConstructionMethodTypePair;
};

/* ***************************************************************** */

union PointDefinedCurveConstructionMethodTypeVal
{
  PointDefinedCurveBestFitType * BestFit;
  PointDefinedCurveRecompType * Recompensated;
  PointDefinedCurveCopyType * Copy;
  PointDefinedCurveTransformType * Transform;
  PointDefinedCurveFromScanType * FromScan;
  PointDefinedCurveExtractType * Extract;
};

/* ***************************************************************** */

class PointDefinedCurveConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    TransformE,
    FromScanE,
    ExtractE };
  PointDefinedCurveConstructionMethodTypeChoicePair();
  PointDefinedCurveConstructionMethodTypeChoicePair(
    whichOne PointDefinedCurveConstructionMethodTypeTypeIn,
    PointDefinedCurveConstructionMethodTypeVal PointDefinedCurveConstructionMethodTypeValueIn);
  ~PointDefinedCurveConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedCurveConstructionMethodTypeType;
  PointDefinedCurveConstructionMethodTypeVal PointDefinedCurveConstructionMethodTypeValue;
};

/* ***************************************************************** */

class PointDefinedCurveCopyType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedCurveCopyType();
  PointDefinedCurveCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePointDefinedCurveIn);
  ~PointDefinedCurveCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePointDefinedCurve();
  void setBasePointDefinedCurve(BaseFeatureType * BasePointDefinedCurveIn);

protected:
  BaseFeatureType * BasePointDefinedCurve;
};

/* ***************************************************************** */

class PointDefinedCurveExtractType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedCurveExtractType();
  PointDefinedCurveExtractType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * CurveFeatureIn);
  ~PointDefinedCurveExtractType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getCurveFeature();
  void setCurveFeature(BaseFeatureType * CurveFeatureIn);

protected:
  BaseFeatureType * CurveFeature;
};

/* ***************************************************************** */

class PointDefinedCurveFromScanType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedCurveFromScanType();
  PointDefinedCurveFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn);
  ~PointDefinedCurveFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
};

/* ***************************************************************** */

class PointDefinedCurveMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  PointDefinedCurveMeasurementDeterminationType();
  PointDefinedCurveMeasurementDeterminationType(
    PointDefinedCurveMeasurementDeterminationTypeChoicePair * PointDefinedCurveMeasurementDeterminationTypePairIn);
  ~PointDefinedCurveMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  PointDefinedCurveMeasurementDeterminationTypeChoicePair * getPointDefinedCurveMeasurementDeterminationTypePair();
  void setPointDefinedCurveMeasurementDeterminationTypePair(PointDefinedCurveMeasurementDeterminationTypeChoicePair * PointDefinedCurveMeasurementDeterminationTypePairIn);

protected:
  PointDefinedCurveMeasurementDeterminationTypeChoicePair * PointDefinedCurveMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union PointDefinedCurveMeasurementDeterminationTypeVal
{
  PointDefinedCurveCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class PointDefinedCurveMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  PointDefinedCurveMeasurementDeterminationTypeChoicePair();
  PointDefinedCurveMeasurementDeterminationTypeChoicePair(
    whichOne PointDefinedCurveMeasurementDeterminationTypeTypeIn,
    PointDefinedCurveMeasurementDeterminationTypeVal PointDefinedCurveMeasurementDeterminationTypeValueIn);
  ~PointDefinedCurveMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedCurveMeasurementDeterminationTypeType;
  PointDefinedCurveMeasurementDeterminationTypeVal PointDefinedCurveMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class PointDefinedCurveRecompType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedCurveRecompType();
  PointDefinedCurveRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~PointDefinedCurveRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class PointDefinedCurveTransformType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedCurveTransformType();
  PointDefinedCurveTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePointDefinedCurveIn,
    TransformationReferenceType * TransformationIn);
  ~PointDefinedCurveTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePointDefinedCurve();
  void setBasePointDefinedCurve(BaseFeatureType * BasePointDefinedCurveIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BasePointDefinedCurve;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class PointDefinedSurfaceBestFitType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedSurfaceBestFitType();
  PointDefinedSurfaceBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  PointDefinedSurfaceBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~PointDefinedSurfaceBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class PointDefinedSurfaceCheckedFeatureType :
  public XmlTypeBase
{
public:
  PointDefinedSurfaceCheckedFeatureType();
  PointDefinedSurfaceCheckedFeatureType(
    PointDefinedSurfaceCheckedType * CheckDetailsIn);
  ~PointDefinedSurfaceCheckedFeatureType();
  void printSelf(FILE * outFile);

  PointDefinedSurfaceCheckedType * getCheckDetails();
  void setCheckDetails(PointDefinedSurfaceCheckedType * CheckDetailsIn);

protected:
  PointDefinedSurfaceCheckedType * CheckDetails;
};

/* ***************************************************************** */

class PointDefinedSurfaceCheckedType :
  public XmlTypeBase
{
public:
  PointDefinedSurfaceCheckedType();
  PointDefinedSurfaceCheckedType(
    PointDefinedSurfaceCheckedTypeChoicePair * PointDefinedSurfaceCheckedTypePairIn);
  ~PointDefinedSurfaceCheckedType();
  void printSelf(FILE * outFile);

  PointDefinedSurfaceCheckedTypeChoicePair * getPointDefinedSurfaceCheckedTypePair();
  void setPointDefinedSurfaceCheckedTypePair(PointDefinedSurfaceCheckedTypeChoicePair * PointDefinedSurfaceCheckedTypePairIn);

protected:
  PointDefinedSurfaceCheckedTypeChoicePair * PointDefinedSurfaceCheckedTypePair;
};

/* ***************************************************************** */

union PointDefinedSurfaceCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  PointDefinedSurfaceConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PointDefinedSurfaceCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  PointDefinedSurfaceCheckedTypeChoicePair();
  PointDefinedSurfaceCheckedTypeChoicePair(
    whichOne PointDefinedSurfaceCheckedTypeTypeIn,
    PointDefinedSurfaceCheckedTypeVal PointDefinedSurfaceCheckedTypeValueIn);
  ~PointDefinedSurfaceCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedSurfaceCheckedTypeType;
  PointDefinedSurfaceCheckedTypeVal PointDefinedSurfaceCheckedTypeValue;
};

/* ***************************************************************** */

class PointDefinedSurfaceConstructionMethodType :
  public XmlTypeBase
{
public:
  PointDefinedSurfaceConstructionMethodType();
  PointDefinedSurfaceConstructionMethodType(
    PointDefinedSurfaceConstructionMethodTypeChoicePair * PointDefinedSurfaceConstructionMethodTypePairIn);
  ~PointDefinedSurfaceConstructionMethodType();
  void printSelf(FILE * outFile);

  PointDefinedSurfaceConstructionMethodTypeChoicePair * getPointDefinedSurfaceConstructionMethodTypePair();
  void setPointDefinedSurfaceConstructionMethodTypePair(PointDefinedSurfaceConstructionMethodTypeChoicePair * PointDefinedSurfaceConstructionMethodTypePairIn);

protected:
  PointDefinedSurfaceConstructionMethodTypeChoicePair * PointDefinedSurfaceConstructionMethodTypePair;
};

/* ***************************************************************** */

union PointDefinedSurfaceConstructionMethodTypeVal
{
  PointDefinedSurfaceBestFitType * BestFit;
  PointDefinedSurfaceRecompType * Recompensated;
  PointDefinedSurfaceCopyType * Copy;
  PointDefinedSurfaceTransformType * Transform;
  PointDefinedSurfaceExtractType * Extract;
};

/* ***************************************************************** */

class PointDefinedSurfaceConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    TransformE,
    ExtractE };
  PointDefinedSurfaceConstructionMethodTypeChoicePair();
  PointDefinedSurfaceConstructionMethodTypeChoicePair(
    whichOne PointDefinedSurfaceConstructionMethodTypeTypeIn,
    PointDefinedSurfaceConstructionMethodTypeVal PointDefinedSurfaceConstructionMethodTypeValueIn);
  ~PointDefinedSurfaceConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedSurfaceConstructionMethodTypeType;
  PointDefinedSurfaceConstructionMethodTypeVal PointDefinedSurfaceConstructionMethodTypeValue;
};

/* ***************************************************************** */

class PointDefinedSurfaceCopyType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedSurfaceCopyType();
  PointDefinedSurfaceCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePointDefinedSurfaceIn);
  ~PointDefinedSurfaceCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePointDefinedSurface();
  void setBasePointDefinedSurface(BaseFeatureType * BasePointDefinedSurfaceIn);

protected:
  BaseFeatureType * BasePointDefinedSurface;
};

/* ***************************************************************** */

class PointDefinedSurfaceExtractType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedSurfaceExtractType();
  PointDefinedSurfaceExtractType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn);
  ~PointDefinedSurfaceExtractType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);

protected:
  BaseFeatureType * SurfaceFeature;
};

/* ***************************************************************** */

class PointDefinedSurfaceMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  PointDefinedSurfaceMeasurementDeterminationType();
  PointDefinedSurfaceMeasurementDeterminationType(
    PointDefinedSurfaceMeasurementDeterminationTypeChoicePair * PointDefinedSurfaceMeasurementDeterminationTypePairIn);
  ~PointDefinedSurfaceMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  PointDefinedSurfaceMeasurementDeterminationTypeChoicePair * getPointDefinedSurfaceMeasurementDeterminationTypePair();
  void setPointDefinedSurfaceMeasurementDeterminationTypePair(PointDefinedSurfaceMeasurementDeterminationTypeChoicePair * PointDefinedSurfaceMeasurementDeterminationTypePairIn);

protected:
  PointDefinedSurfaceMeasurementDeterminationTypeChoicePair * PointDefinedSurfaceMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union PointDefinedSurfaceMeasurementDeterminationTypeVal
{
  PointDefinedSurfaceCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class PointDefinedSurfaceMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  PointDefinedSurfaceMeasurementDeterminationTypeChoicePair();
  PointDefinedSurfaceMeasurementDeterminationTypeChoicePair(
    whichOne PointDefinedSurfaceMeasurementDeterminationTypeTypeIn,
    PointDefinedSurfaceMeasurementDeterminationTypeVal PointDefinedSurfaceMeasurementDeterminationTypeValueIn);
  ~PointDefinedSurfaceMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointDefinedSurfaceMeasurementDeterminationTypeType;
  PointDefinedSurfaceMeasurementDeterminationTypeVal PointDefinedSurfaceMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class PointDefinedSurfaceRecompType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedSurfaceRecompType();
  PointDefinedSurfaceRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~PointDefinedSurfaceRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class PointDefinedSurfaceTransformType :
  public ConstructionMethodBaseType
{
public:
  PointDefinedSurfaceTransformType();
  PointDefinedSurfaceTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePointDefinedSurfaceIn,
    TransformationReferenceType * TransformationIn);
  ~PointDefinedSurfaceTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePointDefinedSurface();
  void setBasePointDefinedSurface(BaseFeatureType * BasePointDefinedSurfaceIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BasePointDefinedSurface;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class PointFeatureCastType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureCastType();
  PointFeatureCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~PointFeatureCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class PointFeatureCenterOfGravityType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureCenterOfGravityType();
  PointFeatureCenterOfGravityType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureTypeLisd * BaseFeatureIn);
  PointFeatureCenterOfGravityType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    BaseFeatureTypeLisd * BaseFeatureIn);
  ~PointFeatureCenterOfGravityType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  BaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(BaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  BaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class PointFeatureCopyType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureCopyType();
  PointFeatureCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePointFeatureIn);
  ~PointFeatureCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePointFeature();
  void setBasePointFeature(BaseFeatureType * BasePointFeatureIn);

protected:
  BaseFeatureType * BasePointFeature;
};

/* ***************************************************************** */

class PointFeatureExtremeType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureExtremeType();
  PointFeatureExtremeType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn,
    XmlBoolean * MinimumIn,
    PointFeatureExt_1123_Type * PointFeatureExt_1123In);
  ~PointFeatureExtremeType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);
  XmlBoolean * getMinimum();
  void setMinimum(XmlBoolean * MinimumIn);
  PointFeatureExt_1123_Type * getPointFeatureExt_1123();
  void setPointFeatureExt_1123(PointFeatureExt_1123_Type * PointFeatureExt_1123In);

protected:
  BaseFeatureType * BaseFeature;
  XmlBoolean * Minimum;
  PointFeatureExt_1123_Type * PointFeatureExt_1123;
};

/* ***************************************************************** */

class PointFeatureFromConeType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureFromConeType();
  PointFeatureFromConeType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseConeIn);
  ~PointFeatureFromConeType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCone();
  void setBaseCone(BaseFeatureType * BaseConeIn);

protected:
  BaseFeatureType * BaseCone;
};

/* ***************************************************************** */

class PointFeatureFromScanType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureFromScanType();
  PointFeatureFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    RetrievalMethodEnumType * RetrievalMethodIn);
  ~PointFeatureFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  RetrievalMethodEnumType * getRetrievalMethod();
  void setRetrievalMethod(RetrievalMethodEnumType * RetrievalMethodIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  RetrievalMethodEnumType * RetrievalMethod;
};

/* ***************************************************************** */

class PointFeatureIntersectionType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureIntersectionType();
  PointFeatureIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * IntersectionFeatureIn);
  ~PointFeatureIntersectionType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getIntersectionFeature();
  void setIntersectionFeature(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * IntersectionFeature;
};

/* ***************************************************************** */

class PointFeatureMidPointType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureMidPointType();
  PointFeatureMidPointType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~PointFeatureMidPointType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class PointFeatureMovePointAxisType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureMovePointAxisType();
  PointFeatureMovePointAxisType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseLocationFeatureIn,
    LinearValueType * DistanceIn,
    BaseFeatureType * BaseAxisFeatureIn);
  ~PointFeatureMovePointAxisType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseLocationFeature();
  void setBaseLocationFeature(BaseFeatureType * BaseLocationFeatureIn);
  LinearValueType * getDistance();
  void setDistance(LinearValueType * DistanceIn);
  BaseFeatureType * getBaseAxisFeature();
  void setBaseAxisFeature(BaseFeatureType * BaseAxisFeatureIn);

protected:
  BaseFeatureType * BaseLocationFeature;
  LinearValueType * Distance;
  BaseFeatureType * BaseAxisFeature;
};

/* ***************************************************************** */

class PointFeatureMovePointType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureMovePointType();
  PointFeatureMovePointType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn,
    PointFeatureMov_1124_Type * PointFeatureMov_1124In);
  ~PointFeatureMovePointType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);
  PointFeatureMov_1124_Type * getPointFeatureMov_1124();
  void setPointFeatureMov_1124(PointFeatureMov_1124_Type * PointFeatureMov_1124In);

protected:
  BaseFeatureType * BaseFeature;
  PointFeatureMov_1124_Type * PointFeatureMov_1124;
};

/* ***************************************************************** */

class PointFeatureMovePointVectorType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureMovePointVectorType();
  PointFeatureMovePointVectorType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn,
    LinearValueType * DistanceIn,
    UnitVectorType * VectorIn);
  ~PointFeatureMovePointVectorType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);
  LinearValueType * getDistance();
  void setDistance(LinearValueType * DistanceIn);
  UnitVectorType * getVector();
  void setVector(UnitVectorType * VectorIn);

protected:
  BaseFeatureType * BaseFeature;
  LinearValueType * Distance;
  UnitVectorType * Vector;
};

/* ***************************************************************** */

class PointFeaturePierceType :
  public ConstructionMethodBaseType
{
public:
  PointFeaturePierceType();
  PointFeaturePierceType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    BaseFeatureType * CurveFeatureIn);
  ~PointFeaturePierceType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  BaseFeatureType * getCurveFeature();
  void setCurveFeature(BaseFeatureType * CurveFeatureIn);

protected:
  BaseFeatureType * SurfaceFeature;
  BaseFeatureType * CurveFeature;
};

/* ***************************************************************** */

class PointFeatureProjectionType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureProjectionType();
  PointFeatureProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionPlaneIn,
    BaseFeatureType * ProjectionFeatureIn);
  ~PointFeatureProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);
  BaseFeatureType * getProjectionFeature();
  void setProjectionFeature(BaseFeatureType * ProjectionFeatureIn);

protected:
  BaseFeatureType * ProjectionPlane;
  BaseFeatureType * ProjectionFeature;
};

/* ***************************************************************** */

class PointFeatureTransformType :
  public ConstructionMethodBaseType
{
public:
  PointFeatureTransformType();
  PointFeatureTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BasePointFeatureIn,
    TransformationReferenceType * TransformationIn);
  ~PointFeatureTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBasePointFeature();
  void setBasePointFeature(BaseFeatureType * BasePointFeatureIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BasePointFeature;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class PointIndexType :
  public XmlTypeBase
{
public:
  PointIndexType();
  PointIndexType(
    PointIndexTypeChoicePair * PointIndexTypePairIn);
  ~PointIndexType();
  void printSelf(FILE * outFile);

  PointIndexTypeChoicePair * getPointIndexTypePair();
  void setPointIndexTypePair(PointIndexTypeChoicePair * PointIndexTypePairIn);

protected:
  PointIndexTypeChoicePair * PointIndexTypePair;
};

/* ***************************************************************** */

union PointIndexTypeVal
{
  NaturalType * Single;
  PointRangeType * Range;
  XmlToken * All;
};

/* ***************************************************************** */

class PointIndexTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SingleE,
    RangeE,
    AllE };
  PointIndexTypeChoicePair();
  PointIndexTypeChoicePair(
    whichOne PointIndexTypeTypeIn,
    PointIndexTypeVal PointIndexTypeValueIn);
  ~PointIndexTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointIndexTypeType;
  PointIndexTypeVal PointIndexTypeValue;
};

/* ***************************************************************** */

class PointListType :
  public XmlTypeBase
{
public:
  PointListType();
  PointListType(
    PointSetReferenceBaseTypeLisd * PointSetIdIn);
  PointListType(
    NaturalType * nIn,
    PointSetReferenceBaseTypeLisd * PointSetIdIn);
  ~PointListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  PointSetReferenceBaseTypeLisd * getPointSetId();
  void setPointSetId(PointSetReferenceBaseTypeLisd *);

protected:
  NaturalType * n;
  PointSetReferenceBaseTypeLisd * PointSetId;
};

/* ***************************************************************** */

class PointMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  PointMeasurementDeterminationType();
  PointMeasurementDeterminationType(
    PointMeasurementDeterminationTypeChoicePair * PointMeasurementDeterminationTypePairIn);
  ~PointMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  PointMeasurementDeterminationTypeChoicePair * getPointMeasurementDeterminationTypePair();
  void setPointMeasurementDeterminationTypePair(PointMeasurementDeterminationTypeChoicePair * PointMeasurementDeterminationTypePairIn);

protected:
  PointMeasurementDeterminationTypeChoicePair * PointMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union PointMeasurementDeterminationTypeVal
{
  PointCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class PointMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  PointMeasurementDeterminationTypeChoicePair();
  PointMeasurementDeterminationTypeChoicePair(
    whichOne PointMeasurementDeterminationTypeTypeIn,
    PointMeasurementDeterminationTypeVal PointMeasurementDeterminationTypeValueIn);
  ~PointMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointMeasurementDeterminationTypeType;
  PointMeasurementDeterminationTypeVal PointMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class PointRangeType :
  public XmlTypeBase
{
public:
  PointRangeType();
  PointRangeType(
    NaturalType * StartIn,
    NaturalType * StopIn);
  ~PointRangeType();
  void printSelf(FILE * outFile);

  NaturalType * getStart();
  void setStart(NaturalType * StartIn);
  NaturalType * getStop();
  void setStop(NaturalType * StopIn);

protected:
  NaturalType * Start;
  NaturalType * Stop;
};

/* ***************************************************************** */

class PointSetNominalType :
  public XmlTypeBase
{
public:
  PointSetNominalType();
  PointSetNominalType(
    MeasurePointNominalTypeLisd * MeasurePointIn);
  PointSetNominalType(
    XmlNonNegativeInteger * decimalPlacesIn,
    QIFIdType * idIn,
    XmlToken * linearUnitIn,
    NaturalType * nIn,
    XmlNonNegativeInteger * significantFiguresIn,
    ValidityEnumType * validityIn,
    XmlNonNegativeInteger * xDecimalPlacesIn,
    XmlNonNegativeInteger * xSignificantFiguresIn,
    ValidityEnumType * xValidityIn,
    XmlNonNegativeInteger * yDecimalPlacesIn,
    XmlNonNegativeInteger * ySignificantFiguresIn,
    ValidityEnumType * yValidityIn,
    XmlNonNegativeInteger * zDecimalPlacesIn,
    XmlNonNegativeInteger * zSignificantFiguresIn,
    ValidityEnumType * zValidityIn,
    MeasurePointNominalTypeLisd * MeasurePointIn);
  ~PointSetNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlNonNegativeInteger * getdecimalPlaces();
  void setdecimalPlaces(XmlNonNegativeInteger * decimalPlacesIn);
  QIFIdType * getid();
  void setid(QIFIdType * idIn);
  XmlToken * getlinearUnit();
  void setlinearUnit(XmlToken * linearUnitIn);
  NaturalType * getn();
  void setn(NaturalType * nIn);
  XmlNonNegativeInteger * getsignificantFigures();
  void setsignificantFigures(XmlNonNegativeInteger * significantFiguresIn);
  ValidityEnumType * getvalidity();
  void setvalidity(ValidityEnumType * validityIn);
  XmlNonNegativeInteger * getxDecimalPlaces();
  void setxDecimalPlaces(XmlNonNegativeInteger * xDecimalPlacesIn);
  XmlNonNegativeInteger * getxSignificantFigures();
  void setxSignificantFigures(XmlNonNegativeInteger * xSignificantFiguresIn);
  ValidityEnumType * getxValidity();
  void setxValidity(ValidityEnumType * xValidityIn);
  XmlNonNegativeInteger * getyDecimalPlaces();
  void setyDecimalPlaces(XmlNonNegativeInteger * yDecimalPlacesIn);
  XmlNonNegativeInteger * getySignificantFigures();
  void setySignificantFigures(XmlNonNegativeInteger * ySignificantFiguresIn);
  ValidityEnumType * getyValidity();
  void setyValidity(ValidityEnumType * yValidityIn);
  XmlNonNegativeInteger * getzDecimalPlaces();
  void setzDecimalPlaces(XmlNonNegativeInteger * zDecimalPlacesIn);
  XmlNonNegativeInteger * getzSignificantFigures();
  void setzSignificantFigures(XmlNonNegativeInteger * zSignificantFiguresIn);
  ValidityEnumType * getzValidity();
  void setzValidity(ValidityEnumType * zValidityIn);

  MeasurePointNominalTypeLisd * getMeasurePoint();
  void setMeasurePoint(MeasurePointNominalTypeLisd *);

protected:
  XmlNonNegativeInteger * decimalPlaces;
  QIFIdType * id;
  XmlToken * linearUnit;
  NaturalType * n;
  XmlNonNegativeInteger * significantFigures;
  ValidityEnumType * validity;
  XmlNonNegativeInteger * xDecimalPlaces;
  XmlNonNegativeInteger * xSignificantFigures;
  ValidityEnumType * xValidity;
  XmlNonNegativeInteger * yDecimalPlaces;
  XmlNonNegativeInteger * ySignificantFigures;
  ValidityEnumType * yValidity;
  XmlNonNegativeInteger * zDecimalPlaces;
  XmlNonNegativeInteger * zSignificantFigures;
  ValidityEnumType * zValidity;
  MeasurePointNominalTypeLisd * MeasurePoint;
};

/* ***************************************************************** */

class PointSetNominalTypeLisd :
  public std::list<PointSetNominalType *>,
  public XmlSchemaInstanceBase
{
public:
  PointSetNominalTypeLisd();
  PointSetNominalTypeLisd(
    PointSetNominalType * aPointSetNominalType);
  ~PointSetNominalTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SetFeatureType :
  public XmlTypeBase
{
public:
  SetFeatureType();
  ~SetFeatureType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ShapeFeatureDefinitionBaseType :
  public FeatureDefinitionBaseType
{
public:
  ShapeFeatureDefinitionBaseType();
  ShapeFeatureDefinitionBaseType(
    AttributesType * AttributesIn);
  ShapeFeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~ShapeFeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class ShapeFeatureItemBaseType :
  public FeatureItemBaseType
{
public:
  ShapeFeatureItemBaseType();
  ShapeFeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ShapeFeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~ShapeFeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointListType * getPointList();
  void setPointList(PointListType * PointListIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  VirtualMeasurementType * getVirtualMeasurement();
  void setVirtualMeasurement(VirtualMeasurementType * VirtualMeasurementIn);

protected:
  PointListType * PointList;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
  VirtualMeasurementType * VirtualMeasurement;
};

/* ***************************************************************** */

class ShapeFeatureMeasurementBaseType :
  public FeatureMeasurementBaseType
{
public:
  ShapeFeatureMeasurementBaseType();
  ShapeFeatureMeasurementBaseType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ShapeFeatureMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~ShapeFeatureMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointListType * getPointList();
  void setPointList(PointListType * PointListIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  QIFReferenceType * getProxyMeasurementId();
  void setProxyMeasurementId(QIFReferenceType * ProxyMeasurementIdIn);

protected:
  PointListType * PointList;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
  QIFReferenceType * ProxyMeasurementId;
};

/* ***************************************************************** */

class ShapeFeatureNominalBaseType :
  public FeatureNominalBaseType
{
public:
  ShapeFeatureNominalBaseType();
  ShapeFeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  ShapeFeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  ~ShapeFeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointListType * getPointList();
  void setPointList(PointListType * PointListIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);

protected:
  PointListType * PointList;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
};

/* ***************************************************************** */

class SpecifiedFeatureDefinitionBaseType :
  public ShapeFeatureDefinitionBaseType
{
public:
  SpecifiedFeatureDefinitionBaseType();
  SpecifiedFeatureDefinitionBaseType(
    AttributesType * AttributesIn);
  SpecifiedFeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~SpecifiedFeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SpecifiedFeatureItemBaseType :
  public ShapeFeatureItemBaseType
{
public:
  SpecifiedFeatureItemBaseType();
  SpecifiedFeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SpecifiedFeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SpecifiedFeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SpecifiedFeatureMeasurementBaseType :
  public ShapeFeatureMeasurementBaseType
{
public:
  SpecifiedFeatureMeasurementBaseType();
  SpecifiedFeatureMeasurementBaseType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  SpecifiedFeatureMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~SpecifiedFeatureMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SpecifiedFeatureNominalBaseType :
  public ShapeFeatureNominalBaseType
{
public:
  SpecifiedFeatureNominalBaseType();
  SpecifiedFeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  SpecifiedFeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  ~SpecifiedFeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SphereBestFitType :
  public ConstructionMethodBaseType
{
public:
  SphereBestFitType();
  SphereBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  SphereBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~SphereBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class SphereCastType :
  public ConstructionMethodBaseType
{
public:
  SphereCastType();
  SphereCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~SphereCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class SphereCheckedFeatureType :
  public XmlTypeBase
{
public:
  SphereCheckedFeatureType();
  SphereCheckedFeatureType(
    SphereCheckedType * CheckDetailsIn);
  ~SphereCheckedFeatureType();
  void printSelf(FILE * outFile);

  SphereCheckedType * getCheckDetails();
  void setCheckDetails(SphereCheckedType * CheckDetailsIn);

protected:
  SphereCheckedType * CheckDetails;
};

/* ***************************************************************** */

class SphereCheckedType :
  public XmlTypeBase
{
public:
  SphereCheckedType();
  SphereCheckedType(
    SphereCheckedTypeChoicePair * SphereCheckedTypePairIn);
  ~SphereCheckedType();
  void printSelf(FILE * outFile);

  SphereCheckedTypeChoicePair * getSphereCheckedTypePair();
  void setSphereCheckedTypePair(SphereCheckedTypeChoicePair * SphereCheckedTypePairIn);

protected:
  SphereCheckedTypeChoicePair * SphereCheckedTypePair;
};

/* ***************************************************************** */

union SphereCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  SphereConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class SphereCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  SphereCheckedTypeChoicePair();
  SphereCheckedTypeChoicePair(
    whichOne SphereCheckedTypeTypeIn,
    SphereCheckedTypeVal SphereCheckedTypeValueIn);
  ~SphereCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphereCheckedTypeType;
  SphereCheckedTypeVal SphereCheckedTypeValue;
};

/* ***************************************************************** */

class SphereConstructionMethodType :
  public XmlTypeBase
{
public:
  SphereConstructionMethodType();
  SphereConstructionMethodType(
    SphereConstructionMethodTypeChoicePair * SphereConstructionMethodTypePairIn);
  ~SphereConstructionMethodType();
  void printSelf(FILE * outFile);

  SphereConstructionMethodTypeChoicePair * getSphereConstructionMethodTypePair();
  void setSphereConstructionMethodTypePair(SphereConstructionMethodTypeChoicePair * SphereConstructionMethodTypePairIn);

protected:
  SphereConstructionMethodTypeChoicePair * SphereConstructionMethodTypePair;
};

/* ***************************************************************** */

union SphereConstructionMethodTypeVal
{
  SphereBestFitType * BestFit;
  SphereRecompType * Recompensated;
  SphereCopyType * Copy;
  SphereCastType * Cast;
  SphereTransformType * Transform;
  SphereFromScanType * FromScan;
};

/* ***************************************************************** */

class SphereConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  SphereConstructionMethodTypeChoicePair();
  SphereConstructionMethodTypeChoicePair(
    whichOne SphereConstructionMethodTypeTypeIn,
    SphereConstructionMethodTypeVal SphereConstructionMethodTypeValueIn);
  ~SphereConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphereConstructionMethodTypeType;
  SphereConstructionMethodTypeVal SphereConstructionMethodTypeValue;
};

/* ***************************************************************** */

class SphereCopyType :
  public ConstructionMethodBaseType
{
public:
  SphereCopyType();
  SphereCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseSphereIn);
  ~SphereCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseSphere();
  void setBaseSphere(BaseFeatureType * BaseSphereIn);

protected:
  BaseFeatureType * BaseSphere;
};

/* ***************************************************************** */

class SphereFromScanType :
  public ConstructionMethodBaseType
{
public:
  SphereFromScanType();
  SphereFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    UnitVectorType * VectorIn);
  ~SphereFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  UnitVectorType * getVector();
  void setVector(UnitVectorType * VectorIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  UnitVectorType * Vector;
};

/* ***************************************************************** */

class SphereMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  SphereMeasurementDeterminationType();
  SphereMeasurementDeterminationType(
    SphereMeasurementDeterminationTypeChoicePair * SphereMeasurementDeterminationTypePairIn);
  ~SphereMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  SphereMeasurementDeterminationTypeChoicePair * getSphereMeasurementDeterminationTypePair();
  void setSphereMeasurementDeterminationTypePair(SphereMeasurementDeterminationTypeChoicePair * SphereMeasurementDeterminationTypePairIn);

protected:
  SphereMeasurementDeterminationTypeChoicePair * SphereMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union SphereMeasurementDeterminationTypeVal
{
  SphereCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class SphereMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  SphereMeasurementDeterminationTypeChoicePair();
  SphereMeasurementDeterminationTypeChoicePair(
    whichOne SphereMeasurementDeterminationTypeTypeIn,
    SphereMeasurementDeterminationTypeVal SphereMeasurementDeterminationTypeValueIn);
  ~SphereMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphereMeasurementDeterminationTypeType;
  SphereMeasurementDeterminationTypeVal SphereMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class SphereRecompType :
  public ConstructionMethodBaseType
{
public:
  SphereRecompType();
  SphereRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~SphereRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class SphereTransformType :
  public ConstructionMethodBaseType
{
public:
  SphereTransformType();
  SphereTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseSphereIn,
    TransformationReferenceType * TransformationIn);
  ~SphereTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseSphere();
  void setBaseSphere(BaseFeatureType * BaseSphereIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseSphere;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class SphericalSegmentBestFitType :
  public ConstructionMethodBaseType
{
public:
  SphericalSegmentBestFitType();
  SphericalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  SphericalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~SphericalSegmentBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class SphericalSegmentCastType :
  public ConstructionMethodBaseType
{
public:
  SphericalSegmentCastType();
  SphericalSegmentCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~SphericalSegmentCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class SphericalSegmentCheckedFeatureType :
  public XmlTypeBase
{
public:
  SphericalSegmentCheckedFeatureType();
  SphericalSegmentCheckedFeatureType(
    SphericalSegmentCheckedType * CheckDetailsIn);
  ~SphericalSegmentCheckedFeatureType();
  void printSelf(FILE * outFile);

  SphericalSegmentCheckedType * getCheckDetails();
  void setCheckDetails(SphericalSegmentCheckedType * CheckDetailsIn);

protected:
  SphericalSegmentCheckedType * CheckDetails;
};

/* ***************************************************************** */

class SphericalSegmentCheckedType :
  public XmlTypeBase
{
public:
  SphericalSegmentCheckedType();
  SphericalSegmentCheckedType(
    SphericalSegmentCheckedTypeChoicePair * SphericalSegmentCheckedTypePairIn);
  ~SphericalSegmentCheckedType();
  void printSelf(FILE * outFile);

  SphericalSegmentCheckedTypeChoicePair * getSphericalSegmentCheckedTypePair();
  void setSphericalSegmentCheckedTypePair(SphericalSegmentCheckedTypeChoicePair * SphericalSegmentCheckedTypePairIn);

protected:
  SphericalSegmentCheckedTypeChoicePair * SphericalSegmentCheckedTypePair;
};

/* ***************************************************************** */

union SphericalSegmentCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  SphericalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class SphericalSegmentCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  SphericalSegmentCheckedTypeChoicePair();
  SphericalSegmentCheckedTypeChoicePair(
    whichOne SphericalSegmentCheckedTypeTypeIn,
    SphericalSegmentCheckedTypeVal SphericalSegmentCheckedTypeValueIn);
  ~SphericalSegmentCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphericalSegmentCheckedTypeType;
  SphericalSegmentCheckedTypeVal SphericalSegmentCheckedTypeValue;
};

/* ***************************************************************** */

class SphericalSegmentConstructionMethodType :
  public XmlTypeBase
{
public:
  SphericalSegmentConstructionMethodType();
  SphericalSegmentConstructionMethodType(
    SphericalSegmentConstructionMethodTypeChoicePair * SphericalSegmentConstructionMethodTypePairIn);
  ~SphericalSegmentConstructionMethodType();
  void printSelf(FILE * outFile);

  SphericalSegmentConstructionMethodTypeChoicePair * getSphericalSegmentConstructionMethodTypePair();
  void setSphericalSegmentConstructionMethodTypePair(SphericalSegmentConstructionMethodTypeChoicePair * SphericalSegmentConstructionMethodTypePairIn);

protected:
  SphericalSegmentConstructionMethodTypeChoicePair * SphericalSegmentConstructionMethodTypePair;
};

/* ***************************************************************** */

union SphericalSegmentConstructionMethodTypeVal
{
  SphericalSegmentBestFitType * BestFit;
  SphericalSegmentRecompType * Recompensated;
  SphericalSegmentCopyType * Copy;
  SphericalSegmentCastType * Cast;
  SphericalSegmentTransformType * Transform;
};

/* ***************************************************************** */

class SphericalSegmentConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  SphericalSegmentConstructionMethodTypeChoicePair();
  SphericalSegmentConstructionMethodTypeChoicePair(
    whichOne SphericalSegmentConstructionMethodTypeTypeIn,
    SphericalSegmentConstructionMethodTypeVal SphericalSegmentConstructionMethodTypeValueIn);
  ~SphericalSegmentConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphericalSegmentConstructionMethodTypeType;
  SphericalSegmentConstructionMethodTypeVal SphericalSegmentConstructionMethodTypeValue;
};

/* ***************************************************************** */

class SphericalSegmentCopyType :
  public ConstructionMethodBaseType
{
public:
  SphericalSegmentCopyType();
  SphericalSegmentCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseSphericalSegmentIn);
  ~SphericalSegmentCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseSphericalSegment();
  void setBaseSphericalSegment(BaseFeatureType * BaseSphericalSegmentIn);

protected:
  BaseFeatureType * BaseSphericalSegment;
};

/* ***************************************************************** */

class SphericalSegmentMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  SphericalSegmentMeasurementDeterminationType();
  SphericalSegmentMeasurementDeterminationType(
    SphericalSegmentMeasurementDeterminationTypeChoicePair * SphericalSegmentMeasurementDeterminationTypePairIn);
  ~SphericalSegmentMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  SphericalSegmentMeasurementDeterminationTypeChoicePair * getSphericalSegmentMeasurementDeterminationTypePair();
  void setSphericalSegmentMeasurementDeterminationTypePair(SphericalSegmentMeasurementDeterminationTypeChoicePair * SphericalSegmentMeasurementDeterminationTypePairIn);

protected:
  SphericalSegmentMeasurementDeterminationTypeChoicePair * SphericalSegmentMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union SphericalSegmentMeasurementDeterminationTypeVal
{
  SphericalSegmentCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class SphericalSegmentMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  SphericalSegmentMeasurementDeterminationTypeChoicePair();
  SphericalSegmentMeasurementDeterminationTypeChoicePair(
    whichOne SphericalSegmentMeasurementDeterminationTypeTypeIn,
    SphericalSegmentMeasurementDeterminationTypeVal SphericalSegmentMeasurementDeterminationTypeValueIn);
  ~SphericalSegmentMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphericalSegmentMeasurementDeterminationTypeType;
  SphericalSegmentMeasurementDeterminationTypeVal SphericalSegmentMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class SphericalSegmentRecompType :
  public ConstructionMethodBaseType
{
public:
  SphericalSegmentRecompType();
  SphericalSegmentRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~SphericalSegmentRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class SphericalSegmentTransformType :
  public ConstructionMethodBaseType
{
public:
  SphericalSegmentTransformType();
  SphericalSegmentTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseSphericalSegmentIn,
    TransformationReferenceType * TransformationIn);
  ~SphericalSegmentTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseSphericalSegment();
  void setBaseSphericalSegment(BaseFeatureType * BaseSphericalSegmentIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseSphericalSegment;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class SurfaceFeatureDefinitionBaseType :
  public ShapeFeatureDefinitionBaseType
{
public:
  SurfaceFeatureDefinitionBaseType();
  SurfaceFeatureDefinitionBaseType(
    AttributesType * AttributesIn);
  SurfaceFeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~SurfaceFeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SurfaceFeatureItemBaseType :
  public ShapeFeatureItemBaseType
{
public:
  SurfaceFeatureItemBaseType();
  SurfaceFeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  SurfaceFeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~SurfaceFeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SurfaceFeatureMeasurementBaseType :
  public ShapeFeatureMeasurementBaseType
{
public:
  SurfaceFeatureMeasurementBaseType();
  SurfaceFeatureMeasurementBaseType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  SurfaceFeatureMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~SurfaceFeatureMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SurfaceFeatureNominalBaseType :
  public ShapeFeatureNominalBaseType
{
public:
  SurfaceFeatureNominalBaseType();
  SurfaceFeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  SurfaceFeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  ~SurfaceFeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class SurfaceOfRevolutionBestFitType :
  public ConstructionMethodBaseType
{
public:
  SurfaceOfRevolutionBestFitType();
  SurfaceOfRevolutionBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  SurfaceOfRevolutionBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~SurfaceOfRevolutionBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class SurfaceOfRevolutionCastType :
  public ConstructionMethodBaseType
{
public:
  SurfaceOfRevolutionCastType();
  SurfaceOfRevolutionCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~SurfaceOfRevolutionCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class SurfaceOfRevolutionCheckedFeatureType :
  public XmlTypeBase
{
public:
  SurfaceOfRevolutionCheckedFeatureType();
  SurfaceOfRevolutionCheckedFeatureType(
    SurfaceOfRevolutionCheckedType * CheckDetailsIn);
  ~SurfaceOfRevolutionCheckedFeatureType();
  void printSelf(FILE * outFile);

  SurfaceOfRevolutionCheckedType * getCheckDetails();
  void setCheckDetails(SurfaceOfRevolutionCheckedType * CheckDetailsIn);

protected:
  SurfaceOfRevolutionCheckedType * CheckDetails;
};

/* ***************************************************************** */

class SurfaceOfRevolutionCheckedType :
  public XmlTypeBase
{
public:
  SurfaceOfRevolutionCheckedType();
  SurfaceOfRevolutionCheckedType(
    SurfaceOfRevolutionCheckedTypeChoicePair * SurfaceOfRevolutionCheckedTypePairIn);
  ~SurfaceOfRevolutionCheckedType();
  void printSelf(FILE * outFile);

  SurfaceOfRevolutionCheckedTypeChoicePair * getSurfaceOfRevolutionCheckedTypePair();
  void setSurfaceOfRevolutionCheckedTypePair(SurfaceOfRevolutionCheckedTypeChoicePair * SurfaceOfRevolutionCheckedTypePairIn);

protected:
  SurfaceOfRevolutionCheckedTypeChoicePair * SurfaceOfRevolutionCheckedTypePair;
};

/* ***************************************************************** */

union SurfaceOfRevolutionCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  SurfaceOfRevolutionConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class SurfaceOfRevolutionCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  SurfaceOfRevolutionCheckedTypeChoicePair();
  SurfaceOfRevolutionCheckedTypeChoicePair(
    whichOne SurfaceOfRevolutionCheckedTypeTypeIn,
    SurfaceOfRevolutionCheckedTypeVal SurfaceOfRevolutionCheckedTypeValueIn);
  ~SurfaceOfRevolutionCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SurfaceOfRevolutionCheckedTypeType;
  SurfaceOfRevolutionCheckedTypeVal SurfaceOfRevolutionCheckedTypeValue;
};

/* ***************************************************************** */

class SurfaceOfRevolutionConstructionMethodType :
  public XmlTypeBase
{
public:
  SurfaceOfRevolutionConstructionMethodType();
  SurfaceOfRevolutionConstructionMethodType(
    SurfaceOfRevolutionConstructionMethodTypeChoicePair * SurfaceOfRevolutionConstructionMethodTypePairIn);
  ~SurfaceOfRevolutionConstructionMethodType();
  void printSelf(FILE * outFile);

  SurfaceOfRevolutionConstructionMethodTypeChoicePair * getSurfaceOfRevolutionConstructionMethodTypePair();
  void setSurfaceOfRevolutionConstructionMethodTypePair(SurfaceOfRevolutionConstructionMethodTypeChoicePair * SurfaceOfRevolutionConstructionMethodTypePairIn);

protected:
  SurfaceOfRevolutionConstructionMethodTypeChoicePair * SurfaceOfRevolutionConstructionMethodTypePair;
};

/* ***************************************************************** */

union SurfaceOfRevolutionConstructionMethodTypeVal
{
  SurfaceOfRevolutionBestFitType * BestFit;
  SurfaceOfRevolutionRecompType * Recompensated;
  SurfaceOfRevolutionCopyType * Copy;
  SurfaceOfRevolutionCastType * Cast;
  SurfaceOfRevolutionTransformType * Transform;
};

/* ***************************************************************** */

class SurfaceOfRevolutionConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  SurfaceOfRevolutionConstructionMethodTypeChoicePair();
  SurfaceOfRevolutionConstructionMethodTypeChoicePair(
    whichOne SurfaceOfRevolutionConstructionMethodTypeTypeIn,
    SurfaceOfRevolutionConstructionMethodTypeVal SurfaceOfRevolutionConstructionMethodTypeValueIn);
  ~SurfaceOfRevolutionConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SurfaceOfRevolutionConstructionMethodTypeType;
  SurfaceOfRevolutionConstructionMethodTypeVal SurfaceOfRevolutionConstructionMethodTypeValue;
};

/* ***************************************************************** */

class SurfaceOfRevolutionCopyType :
  public ConstructionMethodBaseType
{
public:
  SurfaceOfRevolutionCopyType();
  SurfaceOfRevolutionCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseSurfaceOfRevolutionIn);
  ~SurfaceOfRevolutionCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseSurfaceOfRevolution();
  void setBaseSurfaceOfRevolution(BaseFeatureType * BaseSurfaceOfRevolutionIn);

protected:
  BaseFeatureType * BaseSurfaceOfRevolution;
};

/* ***************************************************************** */

class SurfaceOfRevolutionFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  SurfaceOfRevolutionFeatureDefinitionType();
  SurfaceOfRevolutionFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * LengthIn);
  SurfaceOfRevolutionFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * LengthIn);
  ~SurfaceOfRevolutionFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Length;
};

/* ***************************************************************** */

class SurfaceOfRevolutionFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  SurfaceOfRevolutionFeatureItemType();
  SurfaceOfRevolutionFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    SurfaceOfRevolutionMeasurementDeterminationType * DeterminationModeIn);
  SurfaceOfRevolutionFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    SurfaceOfRevolutionMeasurementDeterminationType * DeterminationModeIn);
  ~SurfaceOfRevolutionFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SurfaceOfRevolutionMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(SurfaceOfRevolutionMeasurementDeterminationType * DeterminationModeIn);

protected:
  SurfaceOfRevolutionMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class SurfaceOfRevolutionFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  SurfaceOfRevolutionFeatureMeasurementType();
  SurfaceOfRevolutionFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * FormIn);
  SurfaceOfRevolutionFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * FormIn);
  ~SurfaceOfRevolutionFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredAxisType * Axis;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class SurfaceOfRevolutionFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  SurfaceOfRevolutionFeatureNominalType();
  SurfaceOfRevolutionFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    QIFReferenceFullType * ReferenceFeatureNominalIdIn,
    SurfaceOfRevolutionConstructionMethodType * ConstructedIn);
  SurfaceOfRevolutionFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    QIFReferenceFullType * ReferenceFeatureNominalIdIn,
    SurfaceOfRevolutionConstructionMethodType * ConstructedIn);
  ~SurfaceOfRevolutionFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  QIFReferenceFullType * getReferenceFeatureNominalId();
  void setReferenceFeatureNominalId(QIFReferenceFullType * ReferenceFeatureNominalIdIn);
  SurfaceOfRevolutionConstructionMethodType * getConstructed();
  void setConstructed(SurfaceOfRevolutionConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  SweepType * Sweep;
  QIFReferenceFullType * ReferenceFeatureNominalId;
  SurfaceOfRevolutionConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class SurfaceOfRevolutionMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  SurfaceOfRevolutionMeasurementDeterminationType();
  SurfaceOfRevolutionMeasurementDeterminationType(
    SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair * SurfaceOfRevolutionMeasurementDeterminationTypePairIn);
  ~SurfaceOfRevolutionMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair * getSurfaceOfRevolutionMeasurementDeterminationTypePair();
  void setSurfaceOfRevolutionMeasurementDeterminationTypePair(SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair * SurfaceOfRevolutionMeasurementDeterminationTypePairIn);

protected:
  SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair * SurfaceOfRevolutionMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union SurfaceOfRevolutionMeasurementDeterminationTypeVal
{
  SurfaceOfRevolutionCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair();
  SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair(
    whichOne SurfaceOfRevolutionMeasurementDeterminationTypeTypeIn,
    SurfaceOfRevolutionMeasurementDeterminationTypeVal SurfaceOfRevolutionMeasurementDeterminationTypeValueIn);
  ~SurfaceOfRevolutionMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SurfaceOfRevolutionMeasurementDeterminationTypeType;
  SurfaceOfRevolutionMeasurementDeterminationTypeVal SurfaceOfRevolutionMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class SurfaceOfRevolutionRecompType :
  public ConstructionMethodBaseType
{
public:
  SurfaceOfRevolutionRecompType();
  SurfaceOfRevolutionRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~SurfaceOfRevolutionRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class SurfaceOfRevolutionTransformType :
  public ConstructionMethodBaseType
{
public:
  SurfaceOfRevolutionTransformType();
  SurfaceOfRevolutionTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseSurfaceOfRevolutionIn,
    TransformationReferenceType * TransformationIn);
  ~SurfaceOfRevolutionTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseSurfaceOfRevolution();
  void setBaseSurfaceOfRevolution(BaseFeatureType * BaseSurfaceOfRevolutionIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseSurfaceOfRevolution;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class ThreadedFeatureBestFitType :
  public ConstructionMethodBaseType
{
public:
  ThreadedFeatureBestFitType();
  ThreadedFeatureBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ThreadedFeatureBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~ThreadedFeatureBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class ThreadedFeatureCastType :
  public ConstructionMethodBaseType
{
public:
  ThreadedFeatureCastType();
  ThreadedFeatureCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~ThreadedFeatureCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class ThreadedFeatureCheckedFeatureType :
  public XmlTypeBase
{
public:
  ThreadedFeatureCheckedFeatureType();
  ThreadedFeatureCheckedFeatureType(
    ThreadedFeatureCheckedType * CheckDetailsIn);
  ~ThreadedFeatureCheckedFeatureType();
  void printSelf(FILE * outFile);

  ThreadedFeatureCheckedType * getCheckDetails();
  void setCheckDetails(ThreadedFeatureCheckedType * CheckDetailsIn);

protected:
  ThreadedFeatureCheckedType * CheckDetails;
};

/* ***************************************************************** */

class ThreadedFeatureCheckedType :
  public XmlTypeBase
{
public:
  ThreadedFeatureCheckedType();
  ThreadedFeatureCheckedType(
    ThreadedFeatureCheckedTypeChoicePair * ThreadedFeatureCheckedTypePairIn);
  ~ThreadedFeatureCheckedType();
  void printSelf(FILE * outFile);

  ThreadedFeatureCheckedTypeChoicePair * getThreadedFeatureCheckedTypePair();
  void setThreadedFeatureCheckedTypePair(ThreadedFeatureCheckedTypeChoicePair * ThreadedFeatureCheckedTypePairIn);

protected:
  ThreadedFeatureCheckedTypeChoicePair * ThreadedFeatureCheckedTypePair;
};

/* ***************************************************************** */

union ThreadedFeatureCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  ThreadedFeatureConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ThreadedFeatureCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  ThreadedFeatureCheckedTypeChoicePair();
  ThreadedFeatureCheckedTypeChoicePair(
    whichOne ThreadedFeatureCheckedTypeTypeIn,
    ThreadedFeatureCheckedTypeVal ThreadedFeatureCheckedTypeValueIn);
  ~ThreadedFeatureCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThreadedFeatureCheckedTypeType;
  ThreadedFeatureCheckedTypeVal ThreadedFeatureCheckedTypeValue;
};

/* ***************************************************************** */

class ThreadedFeatureConstructionMethodType :
  public XmlTypeBase
{
public:
  ThreadedFeatureConstructionMethodType();
  ThreadedFeatureConstructionMethodType(
    ThreadedFeatureConstructionMethodTypeChoicePair * ThreadedFeatureConstructionMethodTypePairIn);
  ~ThreadedFeatureConstructionMethodType();
  void printSelf(FILE * outFile);

  ThreadedFeatureConstructionMethodTypeChoicePair * getThreadedFeatureConstructionMethodTypePair();
  void setThreadedFeatureConstructionMethodTypePair(ThreadedFeatureConstructionMethodTypeChoicePair * ThreadedFeatureConstructionMethodTypePairIn);

protected:
  ThreadedFeatureConstructionMethodTypeChoicePair * ThreadedFeatureConstructionMethodTypePair;
};

/* ***************************************************************** */

union ThreadedFeatureConstructionMethodTypeVal
{
  ThreadedFeatureBestFitType * BestFit;
  ThreadedFeatureRecompType * Recompensated;
  ThreadedFeatureCopyType * Copy;
  ThreadedFeatureCastType * Cast;
  ThreadedFeatureTransformType * Transform;
  ThreadedFeatureFromCylinderType * FromCylinder;
};

/* ***************************************************************** */

class ThreadedFeatureConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE,
    FromCylinderE };
  ThreadedFeatureConstructionMethodTypeChoicePair();
  ThreadedFeatureConstructionMethodTypeChoicePair(
    whichOne ThreadedFeatureConstructionMethodTypeTypeIn,
    ThreadedFeatureConstructionMethodTypeVal ThreadedFeatureConstructionMethodTypeValueIn);
  ~ThreadedFeatureConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThreadedFeatureConstructionMethodTypeType;
  ThreadedFeatureConstructionMethodTypeVal ThreadedFeatureConstructionMethodTypeValue;
};

/* ***************************************************************** */

class ThreadedFeatureCopyType :
  public ConstructionMethodBaseType
{
public:
  ThreadedFeatureCopyType();
  ThreadedFeatureCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseThreadedFeatureIn);
  ~ThreadedFeatureCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseThreadedFeature();
  void setBaseThreadedFeature(BaseFeatureType * BaseThreadedFeatureIn);

protected:
  BaseFeatureType * BaseThreadedFeature;
};

/* ***************************************************************** */

class ThreadedFeatureDefinitionType :
  public SpecifiedFeatureDefinitionBaseType
{
public:
  ThreadedFeatureDefinitionType();
  ThreadedFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    QIFReferenceType * ThreadSpecificationIdIn,
    LinearValueType * LengthIn,
    BottomType * BottomIn);
  ThreadedFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    QIFReferenceType * ThreadSpecificationIdIn,
    LinearValueType * LengthIn,
    BottomType * BottomIn);
  ~ThreadedFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  QIFReferenceType * getThreadSpecificationId();
  void setThreadSpecificationId(QIFReferenceType * ThreadSpecificationIdIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  BottomType * getBottom();
  void setBottom(BottomType * BottomIn);

protected:
  InternalExternalEnumType * InternalExternal;
  QIFReferenceType * ThreadSpecificationId;
  LinearValueType * Length;
  BottomType * Bottom;
};

/* ***************************************************************** */

class ThreadedFeatureFromCylinderType :
  public ConstructionMethodBaseType
{
public:
  ThreadedFeatureFromCylinderType();
  ThreadedFeatureFromCylinderType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseCylinderIn,
    LinearValueType * OffsetIn);
  ~ThreadedFeatureFromCylinderType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCylinder();
  void setBaseCylinder(BaseFeatureType * BaseCylinderIn);
  LinearValueType * getOffset();
  void setOffset(LinearValueType * OffsetIn);

protected:
  BaseFeatureType * BaseCylinder;
  LinearValueType * Offset;
};

/* ***************************************************************** */

class ThreadedFeatureItemType :
  public SpecifiedFeatureItemBaseType
{
public:
  ThreadedFeatureItemType();
  ThreadedFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ThreadedFeatureMeasurementDeterminationType * DeterminationModeIn);
  ThreadedFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ThreadedFeatureMeasurementDeterminationType * DeterminationModeIn);
  ~ThreadedFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ThreadedFeatureMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(ThreadedFeatureMeasurementDeterminationType * DeterminationModeIn);

protected:
  ThreadedFeatureMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class ThreadedFeatureMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  ThreadedFeatureMeasurementDeterminationType();
  ThreadedFeatureMeasurementDeterminationType(
    ThreadedFeatureMeasurementDeterminationTypeChoicePair * ThreadedFeatureMeasurementDeterminationTypePairIn);
  ~ThreadedFeatureMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  ThreadedFeatureMeasurementDeterminationTypeChoicePair * getThreadedFeatureMeasurementDeterminationTypePair();
  void setThreadedFeatureMeasurementDeterminationTypePair(ThreadedFeatureMeasurementDeterminationTypeChoicePair * ThreadedFeatureMeasurementDeterminationTypePairIn);

protected:
  ThreadedFeatureMeasurementDeterminationTypeChoicePair * ThreadedFeatureMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union ThreadedFeatureMeasurementDeterminationTypeVal
{
  ThreadedFeatureCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class ThreadedFeatureMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  ThreadedFeatureMeasurementDeterminationTypeChoicePair();
  ThreadedFeatureMeasurementDeterminationTypeChoicePair(
    whichOne ThreadedFeatureMeasurementDeterminationTypeTypeIn,
    ThreadedFeatureMeasurementDeterminationTypeVal ThreadedFeatureMeasurementDeterminationTypeValueIn);
  ~ThreadedFeatureMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThreadedFeatureMeasurementDeterminationTypeType;
  ThreadedFeatureMeasurementDeterminationTypeVal ThreadedFeatureMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ThreadedFeatureMeasurementType :
  public SpecifiedFeatureMeasurementBaseType
{
public:
  ThreadedFeatureMeasurementType();
  ThreadedFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * PitchDiameterIn,
    MeasuredLinearValueType * FunctionalSizeIn,
    MeasuredLinearValueType * LengthIn);
  ThreadedFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * PitchDiameterIn,
    MeasuredLinearValueType * FunctionalSizeIn,
    MeasuredLinearValueType * LengthIn);
  ~ThreadedFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  MeasuredLinearValueType * getPitchDiameter();
  void setPitchDiameter(MeasuredLinearValueType * PitchDiameterIn);
  MeasuredLinearValueType * getFunctionalSize();
  void setFunctionalSize(MeasuredLinearValueType * FunctionalSizeIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);

protected:
  MeasuredAxisType * Axis;
  MeasuredLinearValueType * PitchDiameter;
  MeasuredLinearValueType * FunctionalSize;
  MeasuredLinearValueType * Length;
};

/* ***************************************************************** */

class ThreadedFeatureNominalType :
  public SpecifiedFeatureNominalBaseType
{
public:
  ThreadedFeatureNominalType();
  ThreadedFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    ThreadedFeatureConstructionMethodType * ConstructedIn);
  ThreadedFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    ThreadedFeatureConstructionMethodType * ConstructedIn);
  ~ThreadedFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  ThreadedFeatureConstructionMethodType * getConstructed();
  void setConstructed(ThreadedFeatureConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  ThreadedFeatureConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ThreadedFeatureRecompType :
  public ConstructionMethodBaseType
{
public:
  ThreadedFeatureRecompType();
  ThreadedFeatureRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~ThreadedFeatureRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class ThreadedFeatureTransformType :
  public ConstructionMethodBaseType
{
public:
  ThreadedFeatureTransformType();
  ThreadedFeatureTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseThreadedFeatureIn,
    TransformationReferenceType * TransformationIn);
  ~ThreadedFeatureTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseThreadedFeature();
  void setBaseThreadedFeature(BaseFeatureType * BaseThreadedFeatureIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseThreadedFeature;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class ToroidalSegmentBestFitType :
  public ConstructionMethodBaseType
{
public:
  ToroidalSegmentBestFitType();
  ToroidalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ToroidalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~ToroidalSegmentBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class ToroidalSegmentCastType :
  public ConstructionMethodBaseType
{
public:
  ToroidalSegmentCastType();
  ToroidalSegmentCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~ToroidalSegmentCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class ToroidalSegmentCheckedFeatureType :
  public XmlTypeBase
{
public:
  ToroidalSegmentCheckedFeatureType();
  ToroidalSegmentCheckedFeatureType(
    ToroidalSegmentCheckedType * CheckDetailsIn);
  ~ToroidalSegmentCheckedFeatureType();
  void printSelf(FILE * outFile);

  ToroidalSegmentCheckedType * getCheckDetails();
  void setCheckDetails(ToroidalSegmentCheckedType * CheckDetailsIn);

protected:
  ToroidalSegmentCheckedType * CheckDetails;
};

/* ***************************************************************** */

class ToroidalSegmentCheckedType :
  public XmlTypeBase
{
public:
  ToroidalSegmentCheckedType();
  ToroidalSegmentCheckedType(
    ToroidalSegmentCheckedTypeChoicePair * ToroidalSegmentCheckedTypePairIn);
  ~ToroidalSegmentCheckedType();
  void printSelf(FILE * outFile);

  ToroidalSegmentCheckedTypeChoicePair * getToroidalSegmentCheckedTypePair();
  void setToroidalSegmentCheckedTypePair(ToroidalSegmentCheckedTypeChoicePair * ToroidalSegmentCheckedTypePairIn);

protected:
  ToroidalSegmentCheckedTypeChoicePair * ToroidalSegmentCheckedTypePair;
};

/* ***************************************************************** */

union ToroidalSegmentCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  ToroidalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ToroidalSegmentCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  ToroidalSegmentCheckedTypeChoicePair();
  ToroidalSegmentCheckedTypeChoicePair(
    whichOne ToroidalSegmentCheckedTypeTypeIn,
    ToroidalSegmentCheckedTypeVal ToroidalSegmentCheckedTypeValueIn);
  ~ToroidalSegmentCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToroidalSegmentCheckedTypeType;
  ToroidalSegmentCheckedTypeVal ToroidalSegmentCheckedTypeValue;
};

/* ***************************************************************** */

class ToroidalSegmentConstructionMethodType :
  public XmlTypeBase
{
public:
  ToroidalSegmentConstructionMethodType();
  ToroidalSegmentConstructionMethodType(
    ToroidalSegmentConstructionMethodTypeChoicePair * ToroidalSegmentConstructionMethodTypePairIn);
  ~ToroidalSegmentConstructionMethodType();
  void printSelf(FILE * outFile);

  ToroidalSegmentConstructionMethodTypeChoicePair * getToroidalSegmentConstructionMethodTypePair();
  void setToroidalSegmentConstructionMethodTypePair(ToroidalSegmentConstructionMethodTypeChoicePair * ToroidalSegmentConstructionMethodTypePairIn);

protected:
  ToroidalSegmentConstructionMethodTypeChoicePair * ToroidalSegmentConstructionMethodTypePair;
};

/* ***************************************************************** */

union ToroidalSegmentConstructionMethodTypeVal
{
  ToroidalSegmentBestFitType * BestFit;
  ToroidalSegmentRecompType * Recompensated;
  ToroidalSegmentCopyType * Copy;
  ToroidalSegmentCastType * Cast;
  ToroidalSegmentTransformType * Transform;
};

/* ***************************************************************** */

class ToroidalSegmentConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE };
  ToroidalSegmentConstructionMethodTypeChoicePair();
  ToroidalSegmentConstructionMethodTypeChoicePair(
    whichOne ToroidalSegmentConstructionMethodTypeTypeIn,
    ToroidalSegmentConstructionMethodTypeVal ToroidalSegmentConstructionMethodTypeValueIn);
  ~ToroidalSegmentConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToroidalSegmentConstructionMethodTypeType;
  ToroidalSegmentConstructionMethodTypeVal ToroidalSegmentConstructionMethodTypeValue;
};

/* ***************************************************************** */

class ToroidalSegmentCopyType :
  public ConstructionMethodBaseType
{
public:
  ToroidalSegmentCopyType();
  ToroidalSegmentCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseToroidalSegmentIn);
  ~ToroidalSegmentCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseToroidalSegment();
  void setBaseToroidalSegment(BaseFeatureType * BaseToroidalSegmentIn);

protected:
  BaseFeatureType * BaseToroidalSegment;
};

/* ***************************************************************** */

class ToroidalSegmentFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  ToroidalSegmentFeatureDefinitionType();
  ToroidalSegmentFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MinorDiameterIn,
    LinearValueType * MajorDiameterIn);
  ToroidalSegmentFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MinorDiameterIn,
    LinearValueType * MajorDiameterIn);
  ~ToroidalSegmentFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getMinorDiameter();
  void setMinorDiameter(LinearValueType * MinorDiameterIn);
  LinearValueType * getMajorDiameter();
  void setMajorDiameter(LinearValueType * MajorDiameterIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * MinorDiameter;
  LinearValueType * MajorDiameter;
};

/* ***************************************************************** */

class ToroidalSegmentFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  ToroidalSegmentFeatureItemType();
  ToroidalSegmentFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ToroidalSegmentMeasurementDeterminationType * DeterminationModeIn);
  ToroidalSegmentFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ToroidalSegmentMeasurementDeterminationType * DeterminationModeIn);
  ~ToroidalSegmentFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ToroidalSegmentMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(ToroidalSegmentMeasurementDeterminationType * DeterminationModeIn);

protected:
  ToroidalSegmentMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class ToroidalSegmentFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  ToroidalSegmentFeatureMeasurementType();
  ToroidalSegmentFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * AxisVectorIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * MajorDiameterIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  ToroidalSegmentFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * AxisVectorIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * MajorDiameterIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~ToroidalSegmentFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getAxisVector();
  void setAxisVector(MeasuredUnitVectorType * AxisVectorIn);
  MeasuredLinearValueType * getMinorDiameter();
  void setMinorDiameter(MeasuredLinearValueType * MinorDiameterIn);
  MeasuredLinearValueType * getMajorDiameter();
  void setMajorDiameter(MeasuredLinearValueType * MajorDiameterIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepMeasurementRange();
  void setLatitudeLongitudeSweepMeasurementRange(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepFull();
  void setLatitudeLongitudeSweepFull(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * AxisVector;
  MeasuredLinearValueType * MinorDiameter;
  MeasuredLinearValueType * MajorDiameter;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRange;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class ToroidalSegmentFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  ToroidalSegmentFeatureNominalType();
  ToroidalSegmentFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    UnitVectorType * AxisVectorIn,
    LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    ToroidalSegmentConstructionMethodType * ConstructedIn);
  ToroidalSegmentFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    UnitVectorType * AxisVectorIn,
    LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    ToroidalSegmentConstructionMethodType * ConstructedIn);
  ~ToroidalSegmentFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  UnitVectorType * getAxisVector();
  void setAxisVector(UnitVectorType * AxisVectorIn);
  LatitudeLongitudeSweepType * getLatitudeLongitudeSweep();
  void setLatitudeLongitudeSweep(LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  ToroidalSegmentConstructionMethodType * getConstructed();
  void setConstructed(ToroidalSegmentConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  UnitVectorType * AxisVector;
  LatitudeLongitudeSweepType * LatitudeLongitudeSweep;
  ToroidalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ToroidalSegmentMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  ToroidalSegmentMeasurementDeterminationType();
  ToroidalSegmentMeasurementDeterminationType(
    ToroidalSegmentMeasurementDeterminationTypeChoicePair * ToroidalSegmentMeasurementDeterminationTypePairIn);
  ~ToroidalSegmentMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  ToroidalSegmentMeasurementDeterminationTypeChoicePair * getToroidalSegmentMeasurementDeterminationTypePair();
  void setToroidalSegmentMeasurementDeterminationTypePair(ToroidalSegmentMeasurementDeterminationTypeChoicePair * ToroidalSegmentMeasurementDeterminationTypePairIn);

protected:
  ToroidalSegmentMeasurementDeterminationTypeChoicePair * ToroidalSegmentMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union ToroidalSegmentMeasurementDeterminationTypeVal
{
  ToroidalSegmentCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class ToroidalSegmentMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  ToroidalSegmentMeasurementDeterminationTypeChoicePair();
  ToroidalSegmentMeasurementDeterminationTypeChoicePair(
    whichOne ToroidalSegmentMeasurementDeterminationTypeTypeIn,
    ToroidalSegmentMeasurementDeterminationTypeVal ToroidalSegmentMeasurementDeterminationTypeValueIn);
  ~ToroidalSegmentMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToroidalSegmentMeasurementDeterminationTypeType;
  ToroidalSegmentMeasurementDeterminationTypeVal ToroidalSegmentMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class ToroidalSegmentRecompType :
  public ConstructionMethodBaseType
{
public:
  ToroidalSegmentRecompType();
  ToroidalSegmentRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~ToroidalSegmentRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class ToroidalSegmentTransformType :
  public ConstructionMethodBaseType
{
public:
  ToroidalSegmentTransformType();
  ToroidalSegmentTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseToroidalSegmentIn,
    TransformationReferenceType * TransformationIn);
  ~ToroidalSegmentTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseToroidalSegment();
  void setBaseToroidalSegment(BaseFeatureType * BaseToroidalSegmentIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseToroidalSegment;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class TorusBestFitType :
  public ConstructionMethodBaseType
{
public:
  TorusBestFitType();
  TorusBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  TorusBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~TorusBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class TorusCastType :
  public ConstructionMethodBaseType
{
public:
  TorusCastType();
  TorusCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~TorusCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class TorusCheckedFeatureType :
  public XmlTypeBase
{
public:
  TorusCheckedFeatureType();
  TorusCheckedFeatureType(
    TorusCheckedType * CheckDetailsIn);
  ~TorusCheckedFeatureType();
  void printSelf(FILE * outFile);

  TorusCheckedType * getCheckDetails();
  void setCheckDetails(TorusCheckedType * CheckDetailsIn);

protected:
  TorusCheckedType * CheckDetails;
};

/* ***************************************************************** */

class TorusCheckedType :
  public XmlTypeBase
{
public:
  TorusCheckedType();
  TorusCheckedType(
    TorusCheckedTypeChoicePair * TorusCheckedTypePairIn);
  ~TorusCheckedType();
  void printSelf(FILE * outFile);

  TorusCheckedTypeChoicePair * getTorusCheckedTypePair();
  void setTorusCheckedTypePair(TorusCheckedTypeChoicePair * TorusCheckedTypePairIn);

protected:
  TorusCheckedTypeChoicePair * TorusCheckedTypePair;
};

/* ***************************************************************** */

union TorusCheckedTypeVal
{
  MeasuredFeatureType * Measured;
  TorusConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class TorusCheckedTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasuredE,
    ConstructedE };
  TorusCheckedTypeChoicePair();
  TorusCheckedTypeChoicePair(
    whichOne TorusCheckedTypeTypeIn,
    TorusCheckedTypeVal TorusCheckedTypeValueIn);
  ~TorusCheckedTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TorusCheckedTypeType;
  TorusCheckedTypeVal TorusCheckedTypeValue;
};

/* ***************************************************************** */

class TorusConstructionMethodType :
  public XmlTypeBase
{
public:
  TorusConstructionMethodType();
  TorusConstructionMethodType(
    TorusConstructionMethodTypeChoicePair * TorusConstructionMethodTypePairIn);
  ~TorusConstructionMethodType();
  void printSelf(FILE * outFile);

  TorusConstructionMethodTypeChoicePair * getTorusConstructionMethodTypePair();
  void setTorusConstructionMethodTypePair(TorusConstructionMethodTypeChoicePair * TorusConstructionMethodTypePairIn);

protected:
  TorusConstructionMethodTypeChoicePair * TorusConstructionMethodTypePair;
};

/* ***************************************************************** */

union TorusConstructionMethodTypeVal
{
  TorusBestFitType * BestFit;
  TorusRecompType * Recompensated;
  TorusCopyType * Copy;
  TorusCastType * Cast;
  TorusTransformType * Transform;
  TorusFromScanType * FromScan;
};

/* ***************************************************************** */

class TorusConstructionMethodTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BestFitE,
    RecompensatedE,
    CopyE,
    CastE,
    TransformE,
    FromScanE };
  TorusConstructionMethodTypeChoicePair();
  TorusConstructionMethodTypeChoicePair(
    whichOne TorusConstructionMethodTypeTypeIn,
    TorusConstructionMethodTypeVal TorusConstructionMethodTypeValueIn);
  ~TorusConstructionMethodTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TorusConstructionMethodTypeType;
  TorusConstructionMethodTypeVal TorusConstructionMethodTypeValue;
};

/* ***************************************************************** */

class TorusCopyType :
  public ConstructionMethodBaseType
{
public:
  TorusCopyType();
  TorusCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseTorusIn);
  ~TorusCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseTorus();
  void setBaseTorus(BaseFeatureType * BaseTorusIn);

protected:
  BaseFeatureType * BaseTorus;
};

/* ***************************************************************** */

class TorusFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  TorusFeatureDefinitionType();
  TorusFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MinorDiameterIn,
    LinearValueType * MajorDiameterIn);
  TorusFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MinorDiameterIn,
    LinearValueType * MajorDiameterIn);
  ~TorusFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getMinorDiameter();
  void setMinorDiameter(LinearValueType * MinorDiameterIn);
  LinearValueType * getMajorDiameter();
  void setMajorDiameter(LinearValueType * MajorDiameterIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * MinorDiameter;
  LinearValueType * MajorDiameter;
};

/* ***************************************************************** */

class TorusFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  TorusFeatureItemType();
  TorusFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    TorusMeasurementDeterminationType * DeterminationModeIn);
  TorusFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    TorusMeasurementDeterminationType * DeterminationModeIn);
  ~TorusFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TorusMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(TorusMeasurementDeterminationType * DeterminationModeIn);

protected:
  TorusMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class TorusFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  TorusFeatureMeasurementType();
  TorusFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * AxisVectorIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * MajorDiameterIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  TorusFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * AxisVectorIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * MajorDiameterIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~TorusFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getAxisVector();
  void setAxisVector(MeasuredUnitVectorType * AxisVectorIn);
  MeasuredLinearValueType * getMinorDiameter();
  void setMinorDiameter(MeasuredLinearValueType * MinorDiameterIn);
  MeasuredLinearValueType * getMajorDiameter();
  void setMajorDiameter(MeasuredLinearValueType * MajorDiameterIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepMeasurementRange();
  void setLatitudeLongitudeSweepMeasurementRange(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepFull();
  void setLatitudeLongitudeSweepFull(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * AxisVector;
  MeasuredLinearValueType * MinorDiameter;
  MeasuredLinearValueType * MajorDiameter;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRange;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class TorusFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  TorusFeatureNominalType();
  TorusFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    UnitVectorType * AxisVectorIn,
    LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    TorusConstructionMethodType * ConstructedIn);
  TorusFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    UnitVectorType * AxisVectorIn,
    LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    TorusConstructionMethodType * ConstructedIn);
  ~TorusFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  UnitVectorType * getAxisVector();
  void setAxisVector(UnitVectorType * AxisVectorIn);
  LatitudeLongitudeSweepType * getLatitudeLongitudeSweep();
  void setLatitudeLongitudeSweep(LatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  TorusConstructionMethodType * getConstructed();
  void setConstructed(TorusConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  UnitVectorType * AxisVector;
  LatitudeLongitudeSweepType * LatitudeLongitudeSweep;
  TorusConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class TorusFromScanType :
  public ConstructionMethodBaseType
{
public:
  TorusFromScanType();
  TorusFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn);
  ~TorusFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
};

/* ***************************************************************** */

class TorusMeasurementDeterminationType :
  public XmlTypeBase
{
public:
  TorusMeasurementDeterminationType();
  TorusMeasurementDeterminationType(
    TorusMeasurementDeterminationTypeChoicePair * TorusMeasurementDeterminationTypePairIn);
  ~TorusMeasurementDeterminationType();
  void printSelf(FILE * outFile);

  TorusMeasurementDeterminationTypeChoicePair * getTorusMeasurementDeterminationTypePair();
  void setTorusMeasurementDeterminationTypePair(TorusMeasurementDeterminationTypeChoicePair * TorusMeasurementDeterminationTypePairIn);

protected:
  TorusMeasurementDeterminationTypeChoicePair * TorusMeasurementDeterminationTypePair;
};

/* ***************************************************************** */

union TorusMeasurementDeterminationTypeVal
{
  TorusCheckedFeatureType * Checked;
  SetFeatureType * Set;
};

/* ***************************************************************** */

class TorusMeasurementDeterminationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CheckedE,
    SetE };
  TorusMeasurementDeterminationTypeChoicePair();
  TorusMeasurementDeterminationTypeChoicePair(
    whichOne TorusMeasurementDeterminationTypeTypeIn,
    TorusMeasurementDeterminationTypeVal TorusMeasurementDeterminationTypeValueIn);
  ~TorusMeasurementDeterminationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TorusMeasurementDeterminationTypeType;
  TorusMeasurementDeterminationTypeVal TorusMeasurementDeterminationTypeValue;
};

/* ***************************************************************** */

class TorusRecompType :
  public ConstructionMethodBaseType
{
public:
  TorusRecompType();
  TorusRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~TorusRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class TorusTransformType :
  public ConstructionMethodBaseType
{
public:
  TorusTransformType();
  TorusTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseTorusIn,
    TransformationReferenceType * TransformationIn);
  ~TorusTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseTorus();
  void setBaseTorus(BaseFeatureType * BaseTorusIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseTorus;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class TransformationReferenceType :
  public XmlTypeBase
{
public:
  TransformationReferenceType();
  TransformationReferenceType(
    ReferencedComponentEnumType * ReferencedComponentIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    NaturalType * SequenceNumberIn);
  ~TransformationReferenceType();
  void printSelf(FILE * outFile);

  ReferencedComponentEnumType * getReferencedComponent();
  void setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);
  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  ReferencedComponentEnumType * ReferencedComponent;
  QIFReferenceFullType * CoordinateSystemId;
  NaturalType * SequenceNumber;
};

/* ***************************************************************** */

class CircleFromConeT_1093_Type :
  public XmlTypeBase
{
public:
  CircleFromConeT_1093_Type();
  CircleFromConeT_1093_Type(
    CircleFromConeT_1093_TypeChoicePair * CircleFromConeT_1093_TypePairIn);
  ~CircleFromConeT_1093_Type();
  void printSelf(FILE * outFile);

  CircleFromConeT_1093_TypeChoicePair * getCircleFromConeT_1093_TypePair();
  void setCircleFromConeT_1093_TypePair(CircleFromConeT_1093_TypeChoicePair * CircleFromConeT_1093_TypePairIn);

protected:
  CircleFromConeT_1093_TypeChoicePair * CircleFromConeT_1093_TypePair;
};

/* ***************************************************************** */

union CircleFromConeT_1093_TypeVal
{
  LinearValueType * Diameter;
  LinearValueType * Distance;
};

/* ***************************************************************** */

class CircleFromConeT_1093_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DiameterE,
    DistanceE };
  CircleFromConeT_1093_TypeChoicePair();
  CircleFromConeT_1093_TypeChoicePair(
    whichOne CircleFromConeT_1093_TypeTypeIn,
    CircleFromConeT_1093_TypeVal CircleFromConeT_1093_TypeValueIn);
  ~CircleFromConeT_1093_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CircleFromConeT_1093_TypeType;
  CircleFromConeT_1093_TypeVal CircleFromConeT_1093_TypeValue;
};

/* ***************************************************************** */

class ConeFeatureDefi_1094_Type :
  public XmlTypeBase
{
public:
  ConeFeatureDefi_1094_Type();
  ConeFeatureDefi_1094_Type(
    ConeFeatureDefi_1094_TypeChoicePair * ConeFeatureDefi_1094_TypePairIn);
  ~ConeFeatureDefi_1094_Type();
  void printSelf(FILE * outFile);

  ConeFeatureDefi_1094_TypeChoicePair * getConeFeatureDefi_1094_TypePair();
  void setConeFeatureDefi_1094_TypePair(ConeFeatureDefi_1094_TypeChoicePair * ConeFeatureDefi_1094_TypePairIn);

protected:
  ConeFeatureDefi_1094_TypeChoicePair * ConeFeatureDefi_1094_TypePair;
};

/* ***************************************************************** */

union ConeFeatureDefi_1094_TypeVal
{
  AngularValueType * HalfAngle;
  AngularValueType * FullAngle;
};

/* ***************************************************************** */

class ConeFeatureDefi_1094_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    HalfAngleE,
    FullAngleE };
  ConeFeatureDefi_1094_TypeChoicePair();
  ConeFeatureDefi_1094_TypeChoicePair(
    whichOne ConeFeatureDefi_1094_TypeTypeIn,
    ConeFeatureDefi_1094_TypeVal ConeFeatureDefi_1094_TypeValueIn);
  ~ConeFeatureDefi_1094_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConeFeatureDefi_1094_TypeType;
  ConeFeatureDefi_1094_TypeVal ConeFeatureDefi_1094_TypeValue;
};

/* ***************************************************************** */

class ConeFeatureDefi_1095_Type :
  public XmlTypeBase
{
public:
  ConeFeatureDefi_1095_Type();
  ConeFeatureDefi_1095_Type(
    LinearValueType * LargeEndDistanceIn,
    LinearValueType * SmallEndDistanceIn);
  ~ConeFeatureDefi_1095_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getLargeEndDistance();
  void setLargeEndDistance(LinearValueType * LargeEndDistanceIn);
  LinearValueType * getSmallEndDistance();
  void setSmallEndDistance(LinearValueType * SmallEndDistanceIn);

protected:
  LinearValueType * LargeEndDistance;
  LinearValueType * SmallEndDistance;
};

/* ***************************************************************** */

class ConeFeatureMeas_1096_Type :
  public XmlTypeBase
{
public:
  ConeFeatureMeas_1096_Type();
  ConeFeatureMeas_1096_Type(
    ConeFeatureMeas_1096_TypeChoicePair * ConeFeatureMeas_1096_TypePairIn);
  ~ConeFeatureMeas_1096_Type();
  void printSelf(FILE * outFile);

  ConeFeatureMeas_1096_TypeChoicePair * getConeFeatureMeas_1096_TypePair();
  void setConeFeatureMeas_1096_TypePair(ConeFeatureMeas_1096_TypeChoicePair * ConeFeatureMeas_1096_TypePairIn);

protected:
  ConeFeatureMeas_1096_TypeChoicePair * ConeFeatureMeas_1096_TypePair;
};

/* ***************************************************************** */

union ConeFeatureMeas_1096_TypeVal
{
  MeasuredAngularValueType * HalfAngle;
  MeasuredAngularValueType * FullAngle;
};

/* ***************************************************************** */

class ConeFeatureMeas_1096_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    HalfAngleE,
    FullAngleE };
  ConeFeatureMeas_1096_TypeChoicePair();
  ConeFeatureMeas_1096_TypeChoicePair(
    whichOne ConeFeatureMeas_1096_TypeTypeIn,
    ConeFeatureMeas_1096_TypeVal ConeFeatureMeas_1096_TypeValueIn);
  ~ConeFeatureMeas_1096_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConeFeatureMeas_1096_TypeType;
  ConeFeatureMeas_1096_TypeVal ConeFeatureMeas_1096_TypeValue;
};

/* ***************************************************************** */

class ConicalSegmentF_1097_Type :
  public XmlTypeBase
{
public:
  ConicalSegmentF_1097_Type();
  ConicalSegmentF_1097_Type(
    ConicalSegmentF_1097_TypeChoicePair * ConicalSegmentF_1097_TypePairIn);
  ~ConicalSegmentF_1097_Type();
  void printSelf(FILE * outFile);

  ConicalSegmentF_1097_TypeChoicePair * getConicalSegmentF_1097_TypePair();
  void setConicalSegmentF_1097_TypePair(ConicalSegmentF_1097_TypeChoicePair * ConicalSegmentF_1097_TypePairIn);

protected:
  ConicalSegmentF_1097_TypeChoicePair * ConicalSegmentF_1097_TypePair;
};

/* ***************************************************************** */

union ConicalSegmentF_1097_TypeVal
{
  AngularValueType * HalfAngle;
  AngularValueType * FullAngle;
};

/* ***************************************************************** */

class ConicalSegmentF_1097_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    HalfAngleE,
    FullAngleE };
  ConicalSegmentF_1097_TypeChoicePair();
  ConicalSegmentF_1097_TypeChoicePair(
    whichOne ConicalSegmentF_1097_TypeTypeIn,
    ConicalSegmentF_1097_TypeVal ConicalSegmentF_1097_TypeValueIn);
  ~ConicalSegmentF_1097_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConicalSegmentF_1097_TypeType;
  ConicalSegmentF_1097_TypeVal ConicalSegmentF_1097_TypeValue;
};

/* ***************************************************************** */

class ConicalSegmentF_1098_Type :
  public XmlTypeBase
{
public:
  ConicalSegmentF_1098_Type();
  ConicalSegmentF_1098_Type(
    LinearValueType * LargeEndDistanceIn,
    LinearValueType * SmallEndDistanceIn);
  ~ConicalSegmentF_1098_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getLargeEndDistance();
  void setLargeEndDistance(LinearValueType * LargeEndDistanceIn);
  LinearValueType * getSmallEndDistance();
  void setSmallEndDistance(LinearValueType * SmallEndDistanceIn);

protected:
  LinearValueType * LargeEndDistance;
  LinearValueType * SmallEndDistance;
};

/* ***************************************************************** */

class ConicalSegmentF_1099_Type :
  public XmlTypeBase
{
public:
  ConicalSegmentF_1099_Type();
  ConicalSegmentF_1099_Type(
    ConicalSegmentF_1099_TypeChoicePair * ConicalSegmentF_1099_TypePairIn);
  ~ConicalSegmentF_1099_Type();
  void printSelf(FILE * outFile);

  ConicalSegmentF_1099_TypeChoicePair * getConicalSegmentF_1099_TypePair();
  void setConicalSegmentF_1099_TypePair(ConicalSegmentF_1099_TypeChoicePair * ConicalSegmentF_1099_TypePairIn);

protected:
  ConicalSegmentF_1099_TypeChoicePair * ConicalSegmentF_1099_TypePair;
};

/* ***************************************************************** */

union ConicalSegmentF_1099_TypeVal
{
  MeasuredAngularValueType * HalfAngle;
  MeasuredAngularValueType * FullAngle;
};

/* ***************************************************************** */

class ConicalSegmentF_1099_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    HalfAngleE,
    FullAngleE };
  ConicalSegmentF_1099_TypeChoicePair();
  ConicalSegmentF_1099_TypeChoicePair(
    whichOne ConicalSegmentF_1099_TypeTypeIn,
    ConicalSegmentF_1099_TypeVal ConicalSegmentF_1099_TypeValueIn);
  ~ConicalSegmentF_1099_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ConicalSegmentF_1099_TypeType;
  ConicalSegmentF_1099_TypeVal ConicalSegmentF_1099_TypeValue;
};

/* ***************************************************************** */

class FeatureZoneArea_1100_Type :
  public XmlTypeBase
{
public:
  FeatureZoneArea_1100_Type();
  FeatureZoneArea_1100_Type(
    FeatureZoneArea_1100_TypeChoicePair * FeatureZoneArea_1100_TypePairIn);
  ~FeatureZoneArea_1100_Type();
  void printSelf(FILE * outFile);

  FeatureZoneArea_1100_TypeChoicePair * getFeatureZoneArea_1100_TypePair();
  void setFeatureZoneArea_1100_TypePair(FeatureZoneArea_1100_TypeChoicePair * FeatureZoneArea_1100_TypePairIn);

protected:
  FeatureZoneArea_1100_TypeChoicePair * FeatureZoneArea_1100_TypePair;
};

/* ***************************************************************** */

union FeatureZoneArea_1100_TypeVal
{
  ArrayReferenceFullType * FaceIds;
  ArrayReferenceFullType * EdgeIds;
};

/* ***************************************************************** */

class FeatureZoneArea_1100_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    FaceIdsE,
    EdgeIdsE };
  FeatureZoneArea_1100_TypeChoicePair();
  FeatureZoneArea_1100_TypeChoicePair(
    whichOne FeatureZoneArea_1100_TypeTypeIn,
    FeatureZoneArea_1100_TypeVal FeatureZoneArea_1100_TypeValueIn);
  ~FeatureZoneArea_1100_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FeatureZoneArea_1100_TypeType;
  FeatureZoneArea_1100_TypeVal FeatureZoneArea_1100_TypeValue;
};

/* ***************************************************************** */

class FeatureZoneArea_1101_Type :
  public XmlTypeBase
{
public:
  FeatureZoneArea_1101_Type();
  FeatureZoneArea_1101_Type(
    FeatureZoneArea_1101_TypeChoicePair * FeatureZoneArea_1101_TypePairIn);
  ~FeatureZoneArea_1101_Type();
  void printSelf(FILE * outFile);

  FeatureZoneArea_1101_TypeChoicePair * getFeatureZoneArea_1101_TypePair();
  void setFeatureZoneArea_1101_TypePair(FeatureZoneArea_1101_TypeChoicePair * FeatureZoneArea_1101_TypePairIn);

protected:
  FeatureZoneArea_1101_TypeChoicePair * FeatureZoneArea_1101_TypePair;
};

/* ***************************************************************** */

union FeatureZoneArea_1101_TypeVal
{
  QIFReferenceFullType * FromPointZoneId;
  QIFReferenceFullType * FromCurveZoneId;
};

/* ***************************************************************** */

class FeatureZoneArea_1101_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    FromPointZoneIdE,
    FromCurveZoneIdE };
  FeatureZoneArea_1101_TypeChoicePair();
  FeatureZoneArea_1101_TypeChoicePair(
    whichOne FeatureZoneArea_1101_TypeTypeIn,
    FeatureZoneArea_1101_TypeVal FeatureZoneArea_1101_TypeValueIn);
  ~FeatureZoneArea_1101_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FeatureZoneArea_1101_TypeType;
  FeatureZoneArea_1101_TypeVal FeatureZoneArea_1101_TypeValue;
};

/* ***************************************************************** */

class FeatureZoneArea_1102_Type :
  public XmlTypeBase
{
public:
  FeatureZoneArea_1102_Type();
  FeatureZoneArea_1102_Type(
    FeatureZoneArea_1102_TypeChoicePair * FeatureZoneArea_1102_TypePairIn);
  ~FeatureZoneArea_1102_Type();
  void printSelf(FILE * outFile);

  FeatureZoneArea_1102_TypeChoicePair * getFeatureZoneArea_1102_TypePair();
  void setFeatureZoneArea_1102_TypePair(FeatureZoneArea_1102_TypeChoicePair * FeatureZoneArea_1102_TypePairIn);

protected:
  FeatureZoneArea_1102_TypeChoicePair * FeatureZoneArea_1102_TypePair;
};

/* ***************************************************************** */

union FeatureZoneArea_1102_TypeVal
{
  QIFReferenceFullType * ToPointZoneId;
  QIFReferenceFullType * ToCurveZoneId;
};

/* ***************************************************************** */

class FeatureZoneArea_1102_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ToPointZoneIdE,
    ToCurveZoneIdE };
  FeatureZoneArea_1102_TypeChoicePair();
  FeatureZoneArea_1102_TypeChoicePair(
    whichOne FeatureZoneArea_1102_TypeTypeIn,
    FeatureZoneArea_1102_TypeVal FeatureZoneArea_1102_TypeValueIn);
  ~FeatureZoneArea_1102_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FeatureZoneArea_1102_TypeType;
  FeatureZoneArea_1102_TypeVal FeatureZoneArea_1102_TypeValue;
};

/* ***************************************************************** */

class FeatureZoneCurv_1103_Type :
  public XmlTypeBase
{
public:
  FeatureZoneCurv_1103_Type();
  FeatureZoneCurv_1103_Type(
    FeatureZoneCurv_1103_TypeChoicePair * FeatureZoneCurv_1103_TypePairIn);
  ~FeatureZoneCurv_1103_Type();
  void printSelf(FILE * outFile);

  FeatureZoneCurv_1103_TypeChoicePair * getFeatureZoneCurv_1103_TypePair();
  void setFeatureZoneCurv_1103_TypePair(FeatureZoneCurv_1103_TypeChoicePair * FeatureZoneCurv_1103_TypePairIn);

protected:
  FeatureZoneCurv_1103_TypeChoicePair * FeatureZoneCurv_1103_TypePair;
};

/* ***************************************************************** */

union FeatureZoneCurv_1103_TypeVal
{
  ArrayReferenceFullType * EdgeIds;
  ArrayReferenceFullType * CurveIds;
};

/* ***************************************************************** */

class FeatureZoneCurv_1103_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    EdgeIdsE,
    CurveIdsE };
  FeatureZoneCurv_1103_TypeChoicePair();
  FeatureZoneCurv_1103_TypeChoicePair(
    whichOne FeatureZoneCurv_1103_TypeTypeIn,
    FeatureZoneCurv_1103_TypeVal FeatureZoneCurv_1103_TypeValueIn);
  ~FeatureZoneCurv_1103_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FeatureZoneCurv_1103_TypeType;
  FeatureZoneCurv_1103_TypeVal FeatureZoneCurv_1103_TypeValue;
};

/* ***************************************************************** */

class FeatureZonePoin_1104_Type :
  public XmlTypeBase
{
public:
  FeatureZonePoin_1104_Type();
  FeatureZonePoin_1104_Type(
    FeatureZonePoin_1104_TypeChoicePair * FeatureZonePoin_1104_TypePairIn);
  ~FeatureZonePoin_1104_Type();
  void printSelf(FILE * outFile);

  FeatureZonePoin_1104_TypeChoicePair * getFeatureZonePoin_1104_TypePair();
  void setFeatureZonePoin_1104_TypePair(FeatureZonePoin_1104_TypeChoicePair * FeatureZonePoin_1104_TypePairIn);

protected:
  FeatureZonePoin_1104_TypeChoicePair * FeatureZonePoin_1104_TypePair;
};

/* ***************************************************************** */

union FeatureZonePoin_1104_TypeVal
{
  QIFReferenceFullType * VertexId;
  QIFReferenceFullType * PointId;
};

/* ***************************************************************** */

class FeatureZonePoin_1104_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    VertexIdE,
    PointIdE };
  FeatureZonePoin_1104_TypeChoicePair();
  FeatureZonePoin_1104_TypeChoicePair(
    whichOne FeatureZonePoin_1104_TypeTypeIn,
    FeatureZonePoin_1104_TypeVal FeatureZonePoin_1104_TypeValueIn);
  ~FeatureZonePoin_1104_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FeatureZonePoin_1104_TypeType;
  FeatureZonePoin_1104_TypeVal FeatureZonePoin_1104_TypeValue;
};

/* ***************************************************************** */

class GroupFeatureDef_1105_Type :
  public XmlTypeBase
{
public:
  GroupFeatureDef_1105_Type();
  GroupFeatureDef_1105_Type(
    GroupFeatureDef_1105_TypeChoicePair * GroupFeatureDef_1105_TypePairIn);
  ~GroupFeatureDef_1105_Type();
  void printSelf(FILE * outFile);

  GroupFeatureDef_1105_TypeChoicePair * getGroupFeatureDef_1105_TypePair();
  void setGroupFeatureDef_1105_TypePair(GroupFeatureDef_1105_TypeChoicePair * GroupFeatureDef_1105_TypePairIn);

protected:
  GroupFeatureDef_1105_TypeChoicePair * GroupFeatureDef_1105_TypePair;
};

/* ***************************************************************** */

union GroupFeatureDef_1105_TypeVal
{
  XmlBoolean * IsCountersunkHole;
  XmlBoolean * IsCounterboredHole;
  XmlBoolean * IsSpotface;
};

/* ***************************************************************** */

class GroupFeatureDef_1105_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    IsCountersunkHoleE,
    IsCounterboredHoleE,
    IsSpotfaceE };
  GroupFeatureDef_1105_TypeChoicePair();
  GroupFeatureDef_1105_TypeChoicePair(
    whichOne GroupFeatureDef_1105_TypeTypeIn,
    GroupFeatureDef_1105_TypeVal GroupFeatureDef_1105_TypeValueIn);
  ~GroupFeatureDef_1105_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne GroupFeatureDef_1105_TypeType;
  GroupFeatureDef_1105_TypeVal GroupFeatureDef_1105_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1106_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1106_Type();
  MeasuredPointSe_1106_Type(
    MeasuredPointSe_1106_TypeChoicePair * MeasuredPointSe_1106_TypePairIn);
  ~MeasuredPointSe_1106_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1106_TypeChoicePair * getMeasuredPointSe_1106_TypePair();
  void setMeasuredPointSe_1106_TypePair(MeasuredPointSe_1106_TypeChoicePair * MeasuredPointSe_1106_TypePairIn);

protected:
  MeasuredPointSe_1106_TypeChoicePair * MeasuredPointSe_1106_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1106_TypeVal
{
  QIFReferenceFullType * CoordinateSystemId;
  QIFReferenceType * TranformId;
};

/* ***************************************************************** */

class MeasuredPointSe_1106_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CoordinateSystemIdE,
    TranformIdE };
  MeasuredPointSe_1106_TypeChoicePair();
  MeasuredPointSe_1106_TypeChoicePair(
    whichOne MeasuredPointSe_1106_TypeTypeIn,
    MeasuredPointSe_1106_TypeVal MeasuredPointSe_1106_TypeValueIn);
  ~MeasuredPointSe_1106_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1106_TypeType;
  MeasuredPointSe_1106_TypeVal MeasuredPointSe_1106_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1107_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1107_Type();
  MeasuredPointSe_1107_Type(
    MeasuredPointSe_1107_TypeChoicePair * MeasuredPointSe_1107_TypePairIn);
  ~MeasuredPointSe_1107_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1107_TypeChoicePair * getMeasuredPointSe_1107_TypePair();
  void setMeasuredPointSe_1107_TypePair(MeasuredPointSe_1107_TypeChoicePair * MeasuredPointSe_1107_TypePairIn);

protected:
  MeasuredPointSe_1107_TypeChoicePair * MeasuredPointSe_1107_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1107_TypeVal
{
  ListDoubleType * Points;
  ArrayBinaryType * BinaryPoints;
};

/* ***************************************************************** */

class MeasuredPointSe_1107_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointsE,
    BinaryPointsE };
  MeasuredPointSe_1107_TypeChoicePair();
  MeasuredPointSe_1107_TypeChoicePair(
    whichOne MeasuredPointSe_1107_TypeTypeIn,
    MeasuredPointSe_1107_TypeVal MeasuredPointSe_1107_TypeValueIn);
  ~MeasuredPointSe_1107_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1107_TypeType;
  MeasuredPointSe_1107_TypeVal MeasuredPointSe_1107_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1108_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1108_Type();
  MeasuredPointSe_1108_Type(
    MeasuredPointSe_1108_TypeChoicePair * MeasuredPointSe_1108_TypePairIn);
  ~MeasuredPointSe_1108_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1108_TypeChoicePair * getMeasuredPointSe_1108_TypePair();
  void setMeasuredPointSe_1108_TypePair(MeasuredPointSe_1108_TypeChoicePair * MeasuredPointSe_1108_TypePairIn);

protected:
  MeasuredPointSe_1108_TypeChoicePair * MeasuredPointSe_1108_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1108_TypeVal
{
  ListDoubleType * Normals;
  ArrayBinaryType * BinaryNormals;
};

/* ***************************************************************** */

class MeasuredPointSe_1108_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NormalsE,
    BinaryNormalsE };
  MeasuredPointSe_1108_TypeChoicePair();
  MeasuredPointSe_1108_TypeChoicePair(
    whichOne MeasuredPointSe_1108_TypeTypeIn,
    MeasuredPointSe_1108_TypeVal MeasuredPointSe_1108_TypeValueIn);
  ~MeasuredPointSe_1108_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1108_TypeType;
  MeasuredPointSe_1108_TypeVal MeasuredPointSe_1108_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1109_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1109_Type();
  MeasuredPointSe_1109_Type(
    MeasuredPointSe_1109_TypeChoicePair * MeasuredPointSe_1109_TypePairIn);
  ~MeasuredPointSe_1109_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1109_TypeChoicePair * getMeasuredPointSe_1109_TypePair();
  void setMeasuredPointSe_1109_TypePair(MeasuredPointSe_1109_TypeChoicePair * MeasuredPointSe_1109_TypePairIn);

protected:
  MeasuredPointSe_1109_TypeChoicePair * MeasuredPointSe_1109_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1109_TypeVal
{
  XmlBoolean * Compensated;
  ListBooleanType * Compensations;
  ArrayBinaryType * BinaryCompensated;
};

/* ***************************************************************** */

class MeasuredPointSe_1109_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CompensatedE,
    CompensationsE,
    BinaryCompensatedE };
  MeasuredPointSe_1109_TypeChoicePair();
  MeasuredPointSe_1109_TypeChoicePair(
    whichOne MeasuredPointSe_1109_TypeTypeIn,
    MeasuredPointSe_1109_TypeVal MeasuredPointSe_1109_TypeValueIn);
  ~MeasuredPointSe_1109_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1109_TypeType;
  MeasuredPointSe_1109_TypeVal MeasuredPointSe_1109_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1110_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1110_Type();
  MeasuredPointSe_1110_Type(
    MeasuredPointSe_1110_TypeChoicePair * MeasuredPointSe_1110_TypePairIn);
  ~MeasuredPointSe_1110_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1110_TypeChoicePair * getMeasuredPointSe_1110_TypePair();
  void setMeasuredPointSe_1110_TypePair(MeasuredPointSe_1110_TypeChoicePair * MeasuredPointSe_1110_TypePairIn);

protected:
  MeasuredPointSe_1110_TypeChoicePair * MeasuredPointSe_1110_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1110_TypeVal
{
  XmlDecimal * ProbeRadius;
  ListDoubleType * ProbeRadii;
  ArrayBinaryType * BinaryProbeRadii;
};

/* ***************************************************************** */

class MeasuredPointSe_1110_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ProbeRadiusE,
    ProbeRadiiE,
    BinaryProbeRadiiE };
  MeasuredPointSe_1110_TypeChoicePair();
  MeasuredPointSe_1110_TypeChoicePair(
    whichOne MeasuredPointSe_1110_TypeTypeIn,
    MeasuredPointSe_1110_TypeVal MeasuredPointSe_1110_TypeValueIn);
  ~MeasuredPointSe_1110_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1110_TypeType;
  MeasuredPointSe_1110_TypeVal MeasuredPointSe_1110_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1111_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1111_Type();
  MeasuredPointSe_1111_Type(
    MeasuredPointSe_1111_TypeChoicePair * MeasuredPointSe_1111_TypePairIn);
  ~MeasuredPointSe_1111_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1111_TypeChoicePair * getMeasuredPointSe_1111_TypePair();
  void setMeasuredPointSe_1111_TypePair(MeasuredPointSe_1111_TypeChoicePair * MeasuredPointSe_1111_TypePairIn);

protected:
  MeasuredPointSe_1111_TypeChoicePair * MeasuredPointSe_1111_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1111_TypeVal
{
  QIFReferenceType * SensorId;
  ListQIFReferenceType * SensorIds;
  ArrayBinaryQIFReferenceType * BinarySensorIds;
};

/* ***************************************************************** */

class MeasuredPointSe_1111_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SensorIdE,
    SensorIdsE,
    BinarySensorIdsE };
  MeasuredPointSe_1111_TypeChoicePair();
  MeasuredPointSe_1111_TypeChoicePair(
    whichOne MeasuredPointSe_1111_TypeTypeIn,
    MeasuredPointSe_1111_TypeVal MeasuredPointSe_1111_TypeValueIn);
  ~MeasuredPointSe_1111_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1111_TypeType;
  MeasuredPointSe_1111_TypeVal MeasuredPointSe_1111_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1112_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1112_Type();
  MeasuredPointSe_1112_Type(
    MeasuredPointSe_1112_TypeChoicePair * MeasuredPointSe_1112_TypePairIn);
  ~MeasuredPointSe_1112_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1112_TypeChoicePair * getMeasuredPointSe_1112_TypePair();
  void setMeasuredPointSe_1112_TypePair(MeasuredPointSe_1112_TypeChoicePair * MeasuredPointSe_1112_TypePairIn);

protected:
  MeasuredPointSe_1112_TypeChoicePair * MeasuredPointSe_1112_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1112_TypeVal
{
  QIFReferenceType * TipId;
  ListQIFReferenceType * TipIds;
  ArrayBinaryQIFReferenceType * BinaryTipIds;
};

/* ***************************************************************** */

class MeasuredPointSe_1112_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TipIdE,
    TipIdsE,
    BinaryTipIdsE };
  MeasuredPointSe_1112_TypeChoicePair();
  MeasuredPointSe_1112_TypeChoicePair(
    whichOne MeasuredPointSe_1112_TypeTypeIn,
    MeasuredPointSe_1112_TypeVal MeasuredPointSe_1112_TypeValueIn);
  ~MeasuredPointSe_1112_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1112_TypeType;
  MeasuredPointSe_1112_TypeVal MeasuredPointSe_1112_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1113_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1113_Type();
  MeasuredPointSe_1113_Type(
    MeasuredPointSe_1113_TypeChoicePair * MeasuredPointSe_1113_TypePairIn);
  ~MeasuredPointSe_1113_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1113_TypeChoicePair * getMeasuredPointSe_1113_TypePair();
  void setMeasuredPointSe_1113_TypePair(MeasuredPointSe_1113_TypeChoicePair * MeasuredPointSe_1113_TypePairIn);

protected:
  MeasuredPointSe_1113_TypeChoicePair * MeasuredPointSe_1113_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1113_TypeVal
{
  ListQIFReferenceFullType * MeasurePointNominalIds;
  ArrayBinaryQIFReferenceFullType * BinaryMeasurePointNominalIds;
};

/* ***************************************************************** */

class MeasuredPointSe_1113_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasurePointNominalIdsE,
    BinaryMeasurePointNominalIdsE };
  MeasuredPointSe_1113_TypeChoicePair();
  MeasuredPointSe_1113_TypeChoicePair(
    whichOne MeasuredPointSe_1113_TypeTypeIn,
    MeasuredPointSe_1113_TypeVal MeasuredPointSe_1113_TypeValueIn);
  ~MeasuredPointSe_1113_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1113_TypeType;
  MeasuredPointSe_1113_TypeVal MeasuredPointSe_1113_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1114_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1114_Type();
  MeasuredPointSe_1114_Type(
    MeasuredPointSe_1114_TypeChoicePair * MeasuredPointSe_1114_TypePairIn);
  ~MeasuredPointSe_1114_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1114_TypeChoicePair * getMeasuredPointSe_1114_TypePair();
  void setMeasuredPointSe_1114_TypePair(MeasuredPointSe_1114_TypeChoicePair * MeasuredPointSe_1114_TypePairIn);

protected:
  MeasuredPointSe_1114_TypeChoicePair * MeasuredPointSe_1114_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1114_TypeVal
{
  XmlDateTime * TimeStamp;
  ListDateTimeType * TimeStamps;
};

/* ***************************************************************** */

class MeasuredPointSe_1114_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TimeStampE,
    TimeStampsE };
  MeasuredPointSe_1114_TypeChoicePair();
  MeasuredPointSe_1114_TypeChoicePair(
    whichOne MeasuredPointSe_1114_TypeTypeIn,
    MeasuredPointSe_1114_TypeVal MeasuredPointSe_1114_TypeValueIn);
  ~MeasuredPointSe_1114_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1114_TypeType;
  MeasuredPointSe_1114_TypeVal MeasuredPointSe_1114_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1115_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1115_Type();
  MeasuredPointSe_1115_Type(
    MeasuredPointSe_1115_TypeChoicePair * MeasuredPointSe_1115_TypePairIn);
  ~MeasuredPointSe_1115_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1115_TypeChoicePair * getMeasuredPointSe_1115_TypePair();
  void setMeasuredPointSe_1115_TypePair(MeasuredPointSe_1115_TypeChoicePair * MeasuredPointSe_1115_TypePairIn);

protected:
  MeasuredPointSe_1115_TypeChoicePair * MeasuredPointSe_1115_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1115_TypeVal
{
  ListDoubleType * Quality;
  ArrayBinaryType * BinaryQuality;
};

/* ***************************************************************** */

class MeasuredPointSe_1115_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    QualityE,
    BinaryQualityE };
  MeasuredPointSe_1115_TypeChoicePair();
  MeasuredPointSe_1115_TypeChoicePair(
    whichOne MeasuredPointSe_1115_TypeTypeIn,
    MeasuredPointSe_1115_TypeVal MeasuredPointSe_1115_TypeValueIn);
  ~MeasuredPointSe_1115_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1115_TypeType;
  MeasuredPointSe_1115_TypeVal MeasuredPointSe_1115_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1116_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1116_Type();
  MeasuredPointSe_1116_Type(
    MeasuredPointSe_1116_TypeChoicePair * MeasuredPointSe_1116_TypePairIn);
  ~MeasuredPointSe_1116_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1116_TypeChoicePair * getMeasuredPointSe_1116_TypePair();
  void setMeasuredPointSe_1116_TypePair(MeasuredPointSe_1116_TypeChoicePair * MeasuredPointSe_1116_TypePairIn);

protected:
  MeasuredPointSe_1116_TypeChoicePair * MeasuredPointSe_1116_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1116_TypeVal
{
  ListDoubleType * Deviations;
  ArrayBinaryType * BinaryDeviations;
};

/* ***************************************************************** */

class MeasuredPointSe_1116_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DeviationsE,
    BinaryDeviationsE };
  MeasuredPointSe_1116_TypeChoicePair();
  MeasuredPointSe_1116_TypeChoicePair(
    whichOne MeasuredPointSe_1116_TypeTypeIn,
    MeasuredPointSe_1116_TypeVal MeasuredPointSe_1116_TypeValueIn);
  ~MeasuredPointSe_1116_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1116_TypeType;
  MeasuredPointSe_1116_TypeVal MeasuredPointSe_1116_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1117_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1117_Type();
  MeasuredPointSe_1117_Type(
    MeasuredPointSe_1117_TypeChoicePair * MeasuredPointSe_1117_TypePairIn);
  ~MeasuredPointSe_1117_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1117_TypeChoicePair * getMeasuredPointSe_1117_TypePair();
  void setMeasuredPointSe_1117_TypePair(MeasuredPointSe_1117_TypeChoicePair * MeasuredPointSe_1117_TypePairIn);

protected:
  MeasuredPointSe_1117_TypeChoicePair * MeasuredPointSe_1117_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1117_TypeVal
{
  ListIntType * Colors;
  ArrayBinaryType * BinaryColors;
};

/* ***************************************************************** */

class MeasuredPointSe_1117_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ColorsE,
    BinaryColorsE };
  MeasuredPointSe_1117_TypeChoicePair();
  MeasuredPointSe_1117_TypeChoicePair(
    whichOne MeasuredPointSe_1117_TypeTypeIn,
    MeasuredPointSe_1117_TypeVal MeasuredPointSe_1117_TypeValueIn);
  ~MeasuredPointSe_1117_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1117_TypeType;
  MeasuredPointSe_1117_TypeVal MeasuredPointSe_1117_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1118_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1118_Type();
  MeasuredPointSe_1118_Type(
    NaturalType * NumberOfFacetsIn,
    MeasuredPointSe_1126_Type * MeasuredPointSe_1126In);
  ~MeasuredPointSe_1118_Type();
  void printSelf(FILE * outFile);

  NaturalType * getNumberOfFacets();
  void setNumberOfFacets(NaturalType * NumberOfFacetsIn);
  MeasuredPointSe_1126_Type * getMeasuredPointSe_1126();
  void setMeasuredPointSe_1126(MeasuredPointSe_1126_Type * MeasuredPointSe_1126In);

protected:
  NaturalType * NumberOfFacets;
  MeasuredPointSe_1126_Type * MeasuredPointSe_1126;
};

/* ***************************************************************** */

class OppositeAngledP_1119_Type :
  public XmlTypeBase
{
public:
  OppositeAngledP_1119_Type();
  OppositeAngledP_1119_Type(
    OppositeAngledP_1119_TypeChoicePair * OppositeAngledP_1119_TypePairIn);
  ~OppositeAngledP_1119_Type();
  void printSelf(FILE * outFile);

  OppositeAngledP_1119_TypeChoicePair * getOppositeAngledP_1119_TypePair();
  void setOppositeAngledP_1119_TypePair(OppositeAngledP_1119_TypeChoicePair * OppositeAngledP_1119_TypePairIn);

protected:
  OppositeAngledP_1119_TypeChoicePair * OppositeAngledP_1119_TypePair;
};

/* ***************************************************************** */

union OppositeAngledP_1119_TypeVal
{
  AngularValueType * TaperAngle;
  AngularValueType * DraftAngle;
};

/* ***************************************************************** */

class OppositeAngledP_1119_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TaperAngleE,
    DraftAngleE };
  OppositeAngledP_1119_TypeChoicePair();
  OppositeAngledP_1119_TypeChoicePair(
    whichOne OppositeAngledP_1119_TypeTypeIn,
    OppositeAngledP_1119_TypeVal OppositeAngledP_1119_TypeValueIn);
  ~OppositeAngledP_1119_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledP_1119_TypeType;
  OppositeAngledP_1119_TypeVal OppositeAngledP_1119_TypeValue;
};

/* ***************************************************************** */

class OppositeAngledP_1120_Type :
  public XmlTypeBase
{
public:
  OppositeAngledP_1120_Type();
  OppositeAngledP_1120_Type(
    OppositeAngledP_1120_TypeChoicePair * OppositeAngledP_1120_TypePairIn);
  ~OppositeAngledP_1120_Type();
  void printSelf(FILE * outFile);

  OppositeAngledP_1120_TypeChoicePair * getOppositeAngledP_1120_TypePair();
  void setOppositeAngledP_1120_TypePair(OppositeAngledP_1120_TypeChoicePair * OppositeAngledP_1120_TypePairIn);

protected:
  OppositeAngledP_1120_TypeChoicePair * OppositeAngledP_1120_TypePair;
};

/* ***************************************************************** */

union OppositeAngledP_1120_TypeVal
{
  MeasuredAngularValueType * TaperAngle;
  MeasuredAngularValueType * DraftAngle;
};

/* ***************************************************************** */

class OppositeAngledP_1120_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TaperAngleE,
    DraftAngleE };
  OppositeAngledP_1120_TypeChoicePair();
  OppositeAngledP_1120_TypeChoicePair(
    whichOne OppositeAngledP_1120_TypeTypeIn,
    OppositeAngledP_1120_TypeVal OppositeAngledP_1120_TypeValueIn);
  ~OppositeAngledP_1120_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OppositeAngledP_1120_TypeType;
  OppositeAngledP_1120_TypeVal OppositeAngledP_1120_TypeValue;
};

/* ***************************************************************** */

class OtherSurfaceFea_1121_Type :
  public XmlTypeBase
{
public:
  OtherSurfaceFea_1121_Type();
  OtherSurfaceFea_1121_Type(
    OtherSurfaceFea_1121_TypeChoicePair * OtherSurfaceFea_1121_TypePairIn);
  ~OtherSurfaceFea_1121_Type();
  void printSelf(FILE * outFile);

  OtherSurfaceFea_1121_TypeChoicePair * getOtherSurfaceFea_1121_TypePair();
  void setOtherSurfaceFea_1121_TypePair(OtherSurfaceFea_1121_TypeChoicePair * OtherSurfaceFea_1121_TypePairIn);

protected:
  OtherSurfaceFea_1121_TypeChoicePair * OtherSurfaceFea_1121_TypePair;
};

/* ***************************************************************** */

union OtherSurfaceFea_1121_TypeVal
{
  PolyLineType * PolyLine;
  InternalExternalEnumType * ClosedSurface;
  OtherSurfaceConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OtherSurfaceFea_1121_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PolyLineE,
    ClosedSurfaceE,
    ConstructedE };
  OtherSurfaceFea_1121_TypeChoicePair();
  OtherSurfaceFea_1121_TypeChoicePair(
    whichOne OtherSurfaceFea_1121_TypeTypeIn,
    OtherSurfaceFea_1121_TypeVal OtherSurfaceFea_1121_TypeValueIn);
  ~OtherSurfaceFea_1121_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne OtherSurfaceFea_1121_TypeType;
  OtherSurfaceFea_1121_TypeVal OtherSurfaceFea_1121_TypeValue;
};

/* ***************************************************************** */

class PlaneFeatureNom_1122_Type :
  public XmlTypeBase
{
public:
  PlaneFeatureNom_1122_Type();
  PlaneFeatureNom_1122_Type(
    PlaneFeatureNom_1122_TypeChoicePair * PlaneFeatureNom_1122_TypePairIn);
  ~PlaneFeatureNom_1122_Type();
  void printSelf(FILE * outFile);

  PlaneFeatureNom_1122_TypeChoicePair * getPlaneFeatureNom_1122_TypePair();
  void setPlaneFeatureNom_1122_TypePair(PlaneFeatureNom_1122_TypeChoicePair * PlaneFeatureNom_1122_TypePairIn);

protected:
  PlaneFeatureNom_1122_TypeChoicePair * PlaneFeatureNom_1122_TypePair;
};

/* ***************************************************************** */

union PlaneFeatureNom_1122_TypeVal
{
  PolyLineType * PolyLine;
  RectangleType * Rectangle;
  CircleType * Circle;
};

/* ***************************************************************** */

class PlaneFeatureNom_1122_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PolyLineE,
    RectangleE,
    CircleE };
  PlaneFeatureNom_1122_TypeChoicePair();
  PlaneFeatureNom_1122_TypeChoicePair(
    whichOne PlaneFeatureNom_1122_TypeTypeIn,
    PlaneFeatureNom_1122_TypeVal PlaneFeatureNom_1122_TypeValueIn);
  ~PlaneFeatureNom_1122_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PlaneFeatureNom_1122_TypeType;
  PlaneFeatureNom_1122_TypeVal PlaneFeatureNom_1122_TypeValue;
};

/* ***************************************************************** */

class PointFeatureExt_1123_Type :
  public XmlTypeBase
{
public:
  PointFeatureExt_1123_Type();
  PointFeatureExt_1123_Type(
    PointFeatureExt_1123_TypeChoicePair * PointFeatureExt_1123_TypePairIn);
  ~PointFeatureExt_1123_Type();
  void printSelf(FILE * outFile);

  PointFeatureExt_1123_TypeChoicePair * getPointFeatureExt_1123_TypePair();
  void setPointFeatureExt_1123_TypePair(PointFeatureExt_1123_TypeChoicePair * PointFeatureExt_1123_TypePairIn);

protected:
  PointFeatureExt_1123_TypeChoicePair * PointFeatureExt_1123_TypePair;
};

/* ***************************************************************** */

union PointFeatureExt_1123_TypeVal
{
  BaseFeatureType * BaseAxisFeature;
  UnitVectorType * Vector;
  XmlToken * Radial;
  XmlToken * Xaxis;
  XmlToken * Yaxis;
  XmlToken * Zaxis;
};

/* ***************************************************************** */

class PointFeatureExt_1123_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    BaseAxisFeatureE,
    VectorE,
    RadialE,
    XaxisE,
    YaxisE,
    ZaxisE };
  PointFeatureExt_1123_TypeChoicePair();
  PointFeatureExt_1123_TypeChoicePair(
    whichOne PointFeatureExt_1123_TypeTypeIn,
    PointFeatureExt_1123_TypeVal PointFeatureExt_1123_TypeValueIn);
  ~PointFeatureExt_1123_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointFeatureExt_1123_TypeType;
  PointFeatureExt_1123_TypeVal PointFeatureExt_1123_TypeValue;
};

/* ***************************************************************** */

class PointFeatureMov_1124_Type :
  public XmlTypeBase
{
public:
  PointFeatureMov_1124_Type();
  PointFeatureMov_1124_Type(
    PointFeatureMov_1124_TypeChoicePair * PointFeatureMov_1124_TypePairIn);
  ~PointFeatureMov_1124_Type();
  void printSelf(FILE * outFile);

  PointFeatureMov_1124_TypeChoicePair * getPointFeatureMov_1124_TypePair();
  void setPointFeatureMov_1124_TypePair(PointFeatureMov_1124_TypeChoicePair * PointFeatureMov_1124_TypePairIn);

protected:
  PointFeatureMov_1124_TypeChoicePair * PointFeatureMov_1124_TypePair;
};

/* ***************************************************************** */

union PointFeatureMov_1124_TypeVal
{
  VectorType * Offset;
  DirectionalOffsetType * DirectionalOffset;
};

/* ***************************************************************** */

class PointFeatureMov_1124_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    OffsetE,
    DirectionalOffsetE };
  PointFeatureMov_1124_TypeChoicePair();
  PointFeatureMov_1124_TypeChoicePair(
    whichOne PointFeatureMov_1124_TypeTypeIn,
    PointFeatureMov_1124_TypeVal PointFeatureMov_1124_TypeValueIn);
  ~PointFeatureMov_1124_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointFeatureMov_1124_TypeType;
  PointFeatureMov_1124_TypeVal PointFeatureMov_1124_TypeValue;
};

/* ***************************************************************** */

class PointFeatureNom_1125_Type :
  public XmlTypeBase
{
public:
  PointFeatureNom_1125_Type();
  PointFeatureNom_1125_Type(
    PointFeatureNom_1125_TypeChoicePair * PointFeatureNom_1125_TypePairIn);
  ~PointFeatureNom_1125_Type();
  void printSelf(FILE * outFile);

  PointFeatureNom_1125_TypeChoicePair * getPointFeatureNom_1125_TypePair();
  void setPointFeatureNom_1125_TypePair(PointFeatureNom_1125_TypeChoicePair * PointFeatureNom_1125_TypePairIn);

protected:
  PointFeatureNom_1125_TypeChoicePair * PointFeatureNom_1125_TypePair;
};

/* ***************************************************************** */

union PointFeatureNom_1125_TypeVal
{
  QIFReferenceFullType * SurfaceFeatureNominalId;
  QIFReferenceFullType * CurveFeatureNominalId;
};

/* ***************************************************************** */

class PointFeatureNom_1125_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SurfaceFeatureNominalIdE,
    CurveFeatureNominalIdE };
  PointFeatureNom_1125_TypeChoicePair();
  PointFeatureNom_1125_TypeChoicePair(
    whichOne PointFeatureNom_1125_TypeTypeIn,
    PointFeatureNom_1125_TypeVal PointFeatureNom_1125_TypeValueIn);
  ~PointFeatureNom_1125_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PointFeatureNom_1125_TypeType;
  PointFeatureNom_1125_TypeVal PointFeatureNom_1125_TypeValue;
};

/* ***************************************************************** */

class MeasuredPointSe_1126_Type :
  public XmlTypeBase
{
public:
  MeasuredPointSe_1126_Type();
  MeasuredPointSe_1126_Type(
    MeasuredPointSe_1126_TypeChoicePair * MeasuredPointSe_1126_TypePairIn);
  ~MeasuredPointSe_1126_Type();
  void printSelf(FILE * outFile);

  MeasuredPointSe_1126_TypeChoicePair * getMeasuredPointSe_1126_TypePair();
  void setMeasuredPointSe_1126_TypePair(MeasuredPointSe_1126_TypeChoicePair * MeasuredPointSe_1126_TypePairIn);

protected:
  MeasuredPointSe_1126_TypeChoicePair * MeasuredPointSe_1126_TypePair;
};

/* ***************************************************************** */

union MeasuredPointSe_1126_TypeVal
{
  ArrayI3Type * PointIndices;
  ArrayBinaryType * BinaryPointIndices;
};

/* ***************************************************************** */

class MeasuredPointSe_1126_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PointIndicesE,
    BinaryPointIndicesE };
  MeasuredPointSe_1126_TypeChoicePair();
  MeasuredPointSe_1126_TypeChoicePair(
    whichOne MeasuredPointSe_1126_TypeTypeIn,
    MeasuredPointSe_1126_TypeVal MeasuredPointSe_1126_TypeValueIn);
  ~MeasuredPointSe_1126_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasuredPointSe_1126_TypeType;
  MeasuredPointSe_1126_TypeVal MeasuredPointSe_1126_TypeValue;
};

/* ***************************************************************** */

class CircleBestFitType :
  public ConstructionMethodBaseType
{
public:
  CircleBestFitType();
  CircleBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  CircleBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~CircleBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class CircleCastType :
  public ConstructionMethodBaseType
{
public:
  CircleCastType();
  CircleCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~CircleCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class CircleCopyType :
  public ConstructionMethodBaseType
{
public:
  CircleCopyType();
  CircleCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseCircleIn);
  ~CircleCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCircle();
  void setBaseCircle(BaseFeatureType * BaseCircleIn);

protected:
  BaseFeatureType * BaseCircle;
};

/* ***************************************************************** */

class CircleFromConeType :
  public ConstructionMethodBaseType
{
public:
  CircleFromConeType();
  CircleFromConeType(
    XmlBoolean * NominalsCalculatedIn,
    CircleFromConeT_1093_Type * CircleFromConeT_1093In);
  ~CircleFromConeType();
  void printSelf(FILE * outFile);

  CircleFromConeT_1093_Type * getCircleFromConeT_1093();
  void setCircleFromConeT_1093(CircleFromConeT_1093_Type * CircleFromConeT_1093In);

protected:
  CircleFromConeT_1093_Type * CircleFromConeT_1093;
};

/* ***************************************************************** */

class CircleFromScanType :
  public ConstructionMethodBaseType
{
public:
  CircleFromScanType();
  CircleFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    LinearValueType * DepthIn);
  ~CircleFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  LinearValueType * Depth;
};

/* ***************************************************************** */

class CircleIntersectionType :
  public ConstructionMethodBaseType
{
public:
  CircleIntersectionType();
  CircleIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * IntersectionFeatureIn);
  ~CircleIntersectionType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getIntersectionFeature();
  void setIntersectionFeature(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * IntersectionFeature;
};

/* ***************************************************************** */

class CircleProjectionType :
  public ConstructionMethodBaseType
{
public:
  CircleProjectionType();
  CircleProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionCircleIn,
    BaseFeatureType * ProjectionPlaneIn);
  ~CircleProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionCircle();
  void setProjectionCircle(BaseFeatureType * ProjectionCircleIn);
  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);

protected:
  BaseFeatureType * ProjectionCircle;
  BaseFeatureType * ProjectionPlane;
};

/* ***************************************************************** */

class CircleRecompType :
  public ConstructionMethodBaseType
{
public:
  CircleRecompType();
  CircleRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~CircleRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class CircleTangentThroughType :
  public ConstructionMethodBaseType
{
public:
  CircleTangentThroughType();
  CircleTangentThroughType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * TangentFeatureIn,
    BaseFeatureType * PointFeatureIn);
  ~CircleTangentThroughType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getTangentFeature();
  void setTangentFeature(BaseFeatureType * TangentFeatureIn);
  BaseFeatureType * getPointFeature();
  void setPointFeature(BaseFeatureType * PointFeatureIn);

protected:
  BaseFeatureType * TangentFeature;
  BaseFeatureType * PointFeature;
};

/* ***************************************************************** */

class CircleTangentType :
  public ConstructionMethodBaseType
{
public:
  CircleTangentType();
  CircleTangentType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * TangentFeatureIn);
  ~CircleTangentType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getTangentFeature();
  void setTangentFeature(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * TangentFeature;
};

/* ***************************************************************** */

class CircleTransformType :
  public ConstructionMethodBaseType
{
public:
  CircleTransformType();
  CircleTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseCircleIn,
    TransformationReferenceType * TransformationIn);
  ~CircleTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCircle();
  void setBaseCircle(BaseFeatureType * BaseCircleIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseCircle;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class CircularArcBestFitType :
  public ConstructionMethodBaseType
{
public:
  CircularArcBestFitType();
  CircularArcBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  CircularArcBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~CircularArcBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class CircularArcCastType :
  public ConstructionMethodBaseType
{
public:
  CircularArcCastType();
  CircularArcCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~CircularArcCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class CircularArcCopyType :
  public ConstructionMethodBaseType
{
public:
  CircularArcCopyType();
  CircularArcCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseArcIn);
  ~CircularArcCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseArc();
  void setBaseArc(BaseFeatureType * BaseArcIn);

protected:
  BaseFeatureType * BaseArc;
};

/* ***************************************************************** */

class CircularArcExtractType :
  public ConstructionMethodBaseType
{
public:
  CircularArcExtractType();
  CircularArcExtractType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * CurveFeatureIn);
  ~CircularArcExtractType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getCurveFeature();
  void setCurveFeature(BaseFeatureType * CurveFeatureIn);

protected:
  BaseFeatureType * CurveFeature;
};

/* ***************************************************************** */

class CircularArcFromScanType :
  public ConstructionMethodBaseType
{
public:
  CircularArcFromScanType();
  CircularArcFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn,
    LinearValueType * DepthIn);
  ~CircularArcFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
  LinearValueType * Depth;
};

/* ***************************************************************** */

class CircularArcIntersectionType :
  public ConstructionMethodBaseType
{
public:
  CircularArcIntersectionType();
  CircularArcIntersectionType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * IntersectionFeatureIn);
  ~CircularArcIntersectionType();
  void printSelf(FILE * outFile);

  SequencedBaseFeatureTypeLisd * getIntersectionFeature();
  void setIntersectionFeature(SequencedBaseFeatureTypeLisd *);

protected:
  SequencedBaseFeatureTypeLisd * IntersectionFeature;
};

/* ***************************************************************** */

class CircularArcProjectionType :
  public ConstructionMethodBaseType
{
public:
  CircularArcProjectionType();
  CircularArcProjectionType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * ProjectionArcIn,
    BaseFeatureType * ProjectionPlaneIn);
  ~CircularArcProjectionType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getProjectionArc();
  void setProjectionArc(BaseFeatureType * ProjectionArcIn);
  BaseFeatureType * getProjectionPlane();
  void setProjectionPlane(BaseFeatureType * ProjectionPlaneIn);

protected:
  BaseFeatureType * ProjectionArc;
  BaseFeatureType * ProjectionPlane;
};

/* ***************************************************************** */

class CircularArcRecompType :
  public ConstructionMethodBaseType
{
public:
  CircularArcRecompType();
  CircularArcRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~CircularArcRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class CircularArcTransformType :
  public ConstructionMethodBaseType
{
public:
  CircularArcTransformType();
  CircularArcTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseArcIn,
    TransformationReferenceType * TransformationIn);
  ~CircularArcTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseArc();
  void setBaseArc(BaseFeatureType * BaseArcIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseArc;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class ConeBestFitType :
  public ConstructionMethodBaseType
{
public:
  ConeBestFitType();
  ConeBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ConeBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~ConeBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class ConeCastType :
  public ConstructionMethodBaseType
{
public:
  ConeCastType();
  ConeCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~ConeCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class ConeCopyType :
  public ConstructionMethodBaseType
{
public:
  ConeCopyType();
  ConeCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseConeIn);
  ~ConeCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCone();
  void setBaseCone(BaseFeatureType * BaseConeIn);

protected:
  BaseFeatureType * BaseCone;
};

/* ***************************************************************** */

class ConeFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  ConeFeatureDefinitionType();
  ConeFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    ConeFeatureDefi_1094_Type * ConeFeatureDefi_1094In,
    ConeFeatureDefi_1095_Type * ConeFeatureDefi_1095In);
  ConeFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    ConeFeatureDefi_1094_Type * ConeFeatureDefi_1094In,
    ConeFeatureDefi_1095_Type * ConeFeatureDefi_1095In);
  ~ConeFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  ConeFeatureDefi_1094_Type * getConeFeatureDefi_1094();
  void setConeFeatureDefi_1094(ConeFeatureDefi_1094_Type * ConeFeatureDefi_1094In);
  ConeFeatureDefi_1095_Type * getConeFeatureDefi_1095();
  void setConeFeatureDefi_1095(ConeFeatureDefi_1095_Type * ConeFeatureDefi_1095In);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
  ConeFeatureDefi_1094_Type * ConeFeatureDefi_1094;
  ConeFeatureDefi_1095_Type * ConeFeatureDefi_1095;
};

/* ***************************************************************** */

class ConeFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  ConeFeatureItemType();
  ConeFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ConeMeasurementDeterminationType * DeterminationModeIn);
  ConeFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ConeMeasurementDeterminationType * DeterminationModeIn);
  ~ConeFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ConeMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(ConeMeasurementDeterminationType * DeterminationModeIn);

protected:
  ConeMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class ConeFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  ConeFeatureMeasurementType();
  ConeFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    ConeFeatureMeas_1096_Type * ConeFeatureMeas_1096In,
    MeasuredLinearValueType * SmallEndDistanceIn,
    MeasuredLinearValueType * LargeEndDistanceIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  ConeFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    ConeFeatureMeas_1096_Type * ConeFeatureMeas_1096In,
    MeasuredLinearValueType * SmallEndDistanceIn,
    MeasuredLinearValueType * LargeEndDistanceIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~ConeFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  ConeFeatureMeas_1096_Type * getConeFeatureMeas_1096();
  void setConeFeatureMeas_1096(ConeFeatureMeas_1096_Type * ConeFeatureMeas_1096In);
  MeasuredLinearValueType * getSmallEndDistance();
  void setSmallEndDistance(MeasuredLinearValueType * SmallEndDistanceIn);
  MeasuredLinearValueType * getLargeEndDistance();
  void setLargeEndDistance(MeasuredLinearValueType * LargeEndDistanceIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredAxisType * Axis;
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  ConeFeatureMeas_1096_Type * ConeFeatureMeas_1096;
  MeasuredLinearValueType * SmallEndDistance;
  MeasuredLinearValueType * LargeEndDistance;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class ConeFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  ConeFeatureNominalType();
  ConeFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    ConeConstructionMethodType * ConstructedIn);
  ConeFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    ConeConstructionMethodType * ConstructedIn);
  ~ConeFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  ConeConstructionMethodType * getConstructed();
  void setConstructed(ConeConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  SweepType * Sweep;
  ConeConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ConeFromScanType :
  public ConstructionMethodBaseType
{
public:
  ConeFromScanType();
  ConeFromScanType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * SurfaceFeatureIn,
    LinearValueType * SearchRadiusIn);
  ~ConeFromScanType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getSurfaceFeature();
  void setSurfaceFeature(BaseFeatureType * SurfaceFeatureIn);
  LinearValueType * getSearchRadius();
  void setSearchRadius(LinearValueType * SearchRadiusIn);

protected:
  BaseFeatureType * SurfaceFeature;
  LinearValueType * SearchRadius;
};

/* ***************************************************************** */

class ConeRecompType :
  public ConstructionMethodBaseType
{
public:
  ConeRecompType();
  ConeRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~ConeRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class ConeTransformType :
  public ConstructionMethodBaseType
{
public:
  ConeTransformType();
  ConeTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseConeIn,
    TransformationReferenceType * TransformationIn);
  ~ConeTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseCone();
  void setBaseCone(BaseFeatureType * BaseConeIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseCone;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class ConicalSegmentBestFitType :
  public ConstructionMethodBaseType
{
public:
  ConicalSegmentBestFitType();
  ConicalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ConicalSegmentBestFitType(
    XmlBoolean * NominalsCalculatedIn,
    NaturalType * nIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~ConicalSegmentBestFitType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class ConicalSegmentCastType :
  public ConstructionMethodBaseType
{
public:
  ConicalSegmentCastType();
  ConicalSegmentCastType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseFeatureIn);
  ~ConicalSegmentCastType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseFeature();
  void setBaseFeature(BaseFeatureType * BaseFeatureIn);

protected:
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class ConicalSegmentCopyType :
  public ConstructionMethodBaseType
{
public:
  ConicalSegmentCopyType();
  ConicalSegmentCopyType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseConicalSegmentIn);
  ~ConicalSegmentCopyType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseConicalSegment();
  void setBaseConicalSegment(BaseFeatureType * BaseConicalSegmentIn);

protected:
  BaseFeatureType * BaseConicalSegment;
};

/* ***************************************************************** */

class ConicalSegmentFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  ConicalSegmentFeatureDefinitionType();
  ConicalSegmentFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    ConicalSegmentF_1097_Type * ConicalSegmentF_1097In,
    ConicalSegmentF_1098_Type * ConicalSegmentF_1098In);
  ConicalSegmentFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    ConicalSegmentF_1097_Type * ConicalSegmentF_1097In,
    ConicalSegmentF_1098_Type * ConicalSegmentF_1098In);
  ~ConicalSegmentFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  ConicalSegmentF_1097_Type * getConicalSegmentF_1097();
  void setConicalSegmentF_1097(ConicalSegmentF_1097_Type * ConicalSegmentF_1097In);
  ConicalSegmentF_1098_Type * getConicalSegmentF_1098();
  void setConicalSegmentF_1098(ConicalSegmentF_1098_Type * ConicalSegmentF_1098In);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
  ConicalSegmentF_1097_Type * ConicalSegmentF_1097;
  ConicalSegmentF_1098_Type * ConicalSegmentF_1098;
};

/* ***************************************************************** */

class ConicalSegmentFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  ConicalSegmentFeatureItemType();
  ConicalSegmentFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ConicalSegmentMeasurementDeterminationType * DeterminationModeIn);
  ConicalSegmentFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ConicalSegmentMeasurementDeterminationType * DeterminationModeIn);
  ~ConicalSegmentFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ConicalSegmentMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(ConicalSegmentMeasurementDeterminationType * DeterminationModeIn);

protected:
  ConicalSegmentMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class ConicalSegmentFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  ConicalSegmentFeatureMeasurementType();
  ConicalSegmentFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    ConicalSegmentF_1099_Type * ConicalSegmentF_1099In,
    MeasuredLinearValueType * SmallEndDistanceIn,
    MeasuredLinearValueType * LargeEndDistanceIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  ConicalSegmentFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    ConicalSegmentF_1099_Type * ConicalSegmentF_1099In,
    MeasuredLinearValueType * SmallEndDistanceIn,
    MeasuredLinearValueType * LargeEndDistanceIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~ConicalSegmentFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  ConicalSegmentF_1099_Type * getConicalSegmentF_1099();
  void setConicalSegmentF_1099(ConicalSegmentF_1099_Type * ConicalSegmentF_1099In);
  MeasuredLinearValueType * getSmallEndDistance();
  void setSmallEndDistance(MeasuredLinearValueType * SmallEndDistanceIn);
  MeasuredLinearValueType * getLargeEndDistance();
  void setLargeEndDistance(MeasuredLinearValueType * LargeEndDistanceIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredAxisType * Axis;
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  ConicalSegmentF_1099_Type * ConicalSegmentF_1099;
  MeasuredLinearValueType * SmallEndDistance;
  MeasuredLinearValueType * LargeEndDistance;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class ConicalSegmentFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  ConicalSegmentFeatureNominalType();
  ConicalSegmentFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    ConicalSegmentConstructionMethodType * ConstructedIn);
  ConicalSegmentFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    ConicalSegmentConstructionMethodType * ConstructedIn);
  ~ConicalSegmentFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  ConicalSegmentConstructionMethodType * getConstructed();
  void setConstructed(ConicalSegmentConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  SweepType * Sweep;
  ConicalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ConicalSegmentRecompType :
  public ConstructionMethodBaseType
{
public:
  ConicalSegmentRecompType();
  ConicalSegmentRecompType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeaturePointListType * BaseFeaturePointListIn);
  ~ConicalSegmentRecompType();
  void printSelf(FILE * outFile);

  BaseFeaturePointListType * getBaseFeaturePointList();
  void setBaseFeaturePointList(BaseFeaturePointListType * BaseFeaturePointListIn);

protected:
  BaseFeaturePointListType * BaseFeaturePointList;
};

/* ***************************************************************** */

class ConicalSegmentTransformType :
  public ConstructionMethodBaseType
{
public:
  ConicalSegmentTransformType();
  ConicalSegmentTransformType(
    XmlBoolean * NominalsCalculatedIn,
    BaseFeatureType * BaseConicalSegmentIn,
    TransformationReferenceType * TransformationIn);
  ~ConicalSegmentTransformType();
  void printSelf(FILE * outFile);

  BaseFeatureType * getBaseConicalSegment();
  void setBaseConicalSegment(BaseFeatureType * BaseConicalSegmentIn);
  TransformationReferenceType * getTransformation();
  void setTransformation(TransformationReferenceType * TransformationIn);

protected:
  BaseFeatureType * BaseConicalSegment;
  TransformationReferenceType * Transformation;
};

/* ***************************************************************** */

class CurveFeatureDefinitionBaseType :
  public ShapeFeatureDefinitionBaseType
{
public:
  CurveFeatureDefinitionBaseType();
  CurveFeatureDefinitionBaseType(
    AttributesType * AttributesIn);
  CurveFeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~CurveFeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class CurveFeatureItemBaseType :
  public ShapeFeatureItemBaseType
{
public:
  CurveFeatureItemBaseType();
  CurveFeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  CurveFeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~CurveFeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class CurveFeatureMeasurementBaseType :
  public ShapeFeatureMeasurementBaseType
{
public:
  CurveFeatureMeasurementBaseType();
  CurveFeatureMeasurementBaseType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  CurveFeatureMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~CurveFeatureMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class CurveFeatureNominalBaseType :
  public ShapeFeatureNominalBaseType
{
public:
  CurveFeatureNominalBaseType();
  CurveFeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn);
  CurveFeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn);
  ~CurveFeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceFullType * getSurfaceFeatureNominalId();
  void setSurfaceFeatureNominalId(QIFReferenceFullType * SurfaceFeatureNominalIdIn);

protected:
  QIFReferenceFullType * SurfaceFeatureNominalId;
};

/* ***************************************************************** */

class CylinderFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  CylinderFeatureDefinitionType();
  CylinderFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn,
    BottomType * BottomIn);
  CylinderFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn,
    BottomType * BottomIn);
  ~CylinderFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  BottomType * getBottom();
  void setBottom(BottomType * BottomIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
  LinearValueType * Length;
  BottomType * Bottom;
};

/* ***************************************************************** */

class CylinderFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  CylinderFeatureItemType();
  CylinderFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CylinderMeasurementDeterminationType * DeterminationModeIn);
  CylinderFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CylinderMeasurementDeterminationType * DeterminationModeIn);
  ~CylinderFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CylinderMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(CylinderMeasurementDeterminationType * DeterminationModeIn);

protected:
  CylinderMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class CylinderFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  CylinderFeatureMeasurementType();
  CylinderFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  CylinderFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~CylinderFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredAxisType * Axis;
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class CylinderFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  CylinderFeatureNominalType();
  CylinderFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    CylinderConstructionMethodType * ConstructedIn);
  CylinderFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    CylinderConstructionMethodType * ConstructedIn);
  ~CylinderFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  CylinderConstructionMethodType * getConstructed();
  void setConstructed(CylinderConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  SweepType * Sweep;
  CylinderConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class CylindricalSegmentFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  CylindricalSegmentFeatureDefinitionType();
  CylindricalSegmentFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn,
    BottomType * BottomIn);
  CylindricalSegmentFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn,
    BottomType * BottomIn);
  ~CylindricalSegmentFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  BottomType * getBottom();
  void setBottom(BottomType * BottomIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
  LinearValueType * Length;
  BottomType * Bottom;
};

/* ***************************************************************** */

class CylindricalSegmentFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  CylindricalSegmentFeatureItemType();
  CylindricalSegmentFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CylindricalSegmentMeasurementDeterminationType * DeterminationModeIn);
  CylindricalSegmentFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CylindricalSegmentMeasurementDeterminationType * DeterminationModeIn);
  ~CylindricalSegmentFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CylindricalSegmentMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(CylindricalSegmentMeasurementDeterminationType * DeterminationModeIn);

protected:
  CylindricalSegmentMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class CylindricalSegmentFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  CylindricalSegmentFeatureMeasurementType();
  CylindricalSegmentFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  CylindricalSegmentFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~CylindricalSegmentFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredAxisType * Axis;
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class CylindricalSegmentFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  CylindricalSegmentFeatureNominalType();
  CylindricalSegmentFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    CylindricalSegmentConstructionMethodType * ConstructedIn);
  CylindricalSegmentFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    AxisType * AxisIn,
    SweepType * SweepIn,
    CylindricalSegmentConstructionMethodType * ConstructedIn);
  ~CylindricalSegmentFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  CylindricalSegmentConstructionMethodType * getConstructed();
  void setConstructed(CylindricalSegmentConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  SweepType * Sweep;
  CylindricalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class EllipseFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  EllipseFeatureDefinitionType();
  EllipseFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MajorDiameterIn,
    LinearValueType * MinorDiameterIn);
  EllipseFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MajorDiameterIn,
    LinearValueType * MinorDiameterIn);
  ~EllipseFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getMajorDiameter();
  void setMajorDiameter(LinearValueType * MajorDiameterIn);
  LinearValueType * getMinorDiameter();
  void setMinorDiameter(LinearValueType * MinorDiameterIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * MajorDiameter;
  LinearValueType * MinorDiameter;
};

/* ***************************************************************** */

class EllipseFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  EllipseFeatureItemType();
  EllipseFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    EllipseMeasurementDeterminationType * DeterminationModeIn);
  EllipseFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    EllipseMeasurementDeterminationType * DeterminationModeIn);
  ~EllipseFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  EllipseMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(EllipseMeasurementDeterminationType * DeterminationModeIn);

protected:
  EllipseMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class EllipseFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  EllipseFeatureMeasurementType();
  EllipseFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredUnitVectorType * NormalIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * MajorDiameterIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * FormIn);
  EllipseFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredUnitVectorType * NormalIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * MajorDiameterIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * FormIn);
  ~EllipseFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getMajorDiameter();
  void setMajorDiameter(MeasuredLinearValueType * MajorDiameterIn);
  MeasuredLinearValueType * getMinorDiameter();
  void setMinorDiameter(MeasuredLinearValueType * MinorDiameterIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredAxisType * Axis;
  MeasuredUnitVectorType * Normal;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * MajorDiameter;
  MeasuredLinearValueType * MinorDiameter;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class EllipseFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  EllipseFeatureNominalType();
  EllipseFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    AxisType * AxisIn,
    UnitVectorType * NormalIn,
    SweepType * SweepIn,
    EllipseConstructionMethodType * ConstructedIn);
  EllipseFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    AxisType * AxisIn,
    UnitVectorType * NormalIn,
    SweepType * SweepIn,
    EllipseConstructionMethodType * ConstructedIn);
  ~EllipseFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  EllipseConstructionMethodType * getConstructed();
  void setConstructed(EllipseConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  UnitVectorType * Normal;
  SweepType * Sweep;
  EllipseConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class EllipticalArcFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  EllipticalArcFeatureDefinitionType();
  EllipticalArcFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MajorDiameterIn,
    LinearValueType * MinorDiameterIn);
  EllipticalArcFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * MajorDiameterIn,
    LinearValueType * MinorDiameterIn);
  ~EllipticalArcFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getMajorDiameter();
  void setMajorDiameter(LinearValueType * MajorDiameterIn);
  LinearValueType * getMinorDiameter();
  void setMinorDiameter(LinearValueType * MinorDiameterIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * MajorDiameter;
  LinearValueType * MinorDiameter;
};

/* ***************************************************************** */

class EllipticalArcFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  EllipticalArcFeatureItemType();
  EllipticalArcFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    EllipticalArcMeasurementDeterminationType * DeterminationModeIn);
  EllipticalArcFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    EllipticalArcMeasurementDeterminationType * DeterminationModeIn);
  ~EllipticalArcFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  EllipticalArcMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(EllipticalArcMeasurementDeterminationType * DeterminationModeIn);

protected:
  EllipticalArcMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class EllipticalArcFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  EllipticalArcFeatureMeasurementType();
  EllipticalArcFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredUnitVectorType * NormalIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * MajorDiameterIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * FormIn);
  EllipticalArcFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredAxisType * AxisIn,
    MeasuredUnitVectorType * NormalIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * MajorDiameterIn,
    MeasuredLinearValueType * MinorDiameterIn,
    MeasuredLinearValueType * FormIn);
  ~EllipticalArcFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredAxisType * getAxis();
  void setAxis(MeasuredAxisType * AxisIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getMajorDiameter();
  void setMajorDiameter(MeasuredLinearValueType * MajorDiameterIn);
  MeasuredLinearValueType * getMinorDiameter();
  void setMinorDiameter(MeasuredLinearValueType * MinorDiameterIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredAxisType * Axis;
  MeasuredUnitVectorType * Normal;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * MajorDiameter;
  MeasuredLinearValueType * MinorDiameter;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class EllipticalArcFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  EllipticalArcFeatureNominalType();
  EllipticalArcFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    AxisType * AxisIn,
    UnitVectorType * NormalIn,
    SweepType * SweepIn,
    EllipticalArcConstructionMethodType * ConstructedIn);
  EllipticalArcFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    AxisType * AxisIn,
    UnitVectorType * NormalIn,
    SweepType * SweepIn,
    EllipticalArcConstructionMethodType * ConstructedIn);
  ~EllipticalArcFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  AxisType * getAxis();
  void setAxis(AxisType * AxisIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  EllipticalArcConstructionMethodType * getConstructed();
  void setConstructed(EllipticalArcConstructionMethodType * ConstructedIn);

protected:
  AxisType * Axis;
  UnitVectorType * Normal;
  SweepType * Sweep;
  EllipticalArcConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ElongatedCircleFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  ElongatedCircleFeatureDefinitionType();
  ElongatedCircleFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn);
  ElongatedCircleFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn);
  ~ElongatedCircleFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
  LinearValueType * Length;
};

/* ***************************************************************** */

class ElongatedCircleFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  ElongatedCircleFeatureItemType();
  ElongatedCircleFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ElongatedCircleMeasurementDeterminationType * DeterminationModeIn);
  ElongatedCircleFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ElongatedCircleMeasurementDeterminationType * DeterminationModeIn);
  ~ElongatedCircleFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ElongatedCircleMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(ElongatedCircleMeasurementDeterminationType * DeterminationModeIn);

protected:
  ElongatedCircleMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class ElongatedCircleFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  ElongatedCircleFeatureMeasurementType();
  ElongatedCircleFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    MeasuredPointAndVectorType * CenterLineIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * FormIn);
  ElongatedCircleFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    MeasuredPointAndVectorType * CenterLineIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * FormIn);
  ~ElongatedCircleFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  MeasuredPointAndVectorType * getCenterLine();
  void setCenterLine(MeasuredPointAndVectorType * CenterLineIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getLengthMax();
  void setLengthMax(MeasuredLinearValueType * LengthMaxIn);
  MeasuredLinearValueType * getLengthMin();
  void setLengthMin(MeasuredLinearValueType * LengthMinIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  MeasuredPointAndVectorType * CenterLine;
  MeasuredUnitVectorType * Normal;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * LengthMax;
  MeasuredLinearValueType * LengthMin;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class ElongatedCircleFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  ElongatedCircleFeatureNominalType();
  ElongatedCircleFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointAndVectorType * CenterLineIn,
    UnitVectorType * NormalIn,
    ElongatedCircleConstructionMethodType * ConstructedIn);
  ElongatedCircleFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointAndVectorType * CenterLineIn,
    UnitVectorType * NormalIn,
    ElongatedCircleConstructionMethodType * ConstructedIn);
  ~ElongatedCircleFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointAndVectorType * getCenterLine();
  void setCenterLine(PointAndVectorType * CenterLineIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  ElongatedCircleConstructionMethodType * getConstructed();
  void setConstructed(ElongatedCircleConstructionMethodType * ConstructedIn);

protected:
  PointAndVectorType * CenterLine;
  UnitVectorType * Normal;
  ElongatedCircleConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ElongatedCylinderFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  ElongatedCylinderFeatureDefinitionType();
  ElongatedCylinderFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn,
    LinearValueType * DepthIn);
  ElongatedCylinderFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn,
    LinearValueType * LengthIn,
    LinearValueType * DepthIn);
  ~ElongatedCylinderFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
  LinearValueType * Length;
  LinearValueType * Depth;
};

/* ***************************************************************** */

class ElongatedCylinderFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  ElongatedCylinderFeatureItemType();
  ElongatedCylinderFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ElongatedCylinderMeasurementDeterminationType * DeterminationModeIn);
  ElongatedCylinderFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ElongatedCylinderMeasurementDeterminationType * DeterminationModeIn);
  ~ElongatedCylinderFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ElongatedCylinderMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(ElongatedCylinderMeasurementDeterminationType * DeterminationModeIn);

protected:
  ElongatedCylinderMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class ElongatedCylinderFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  ElongatedCylinderFeatureMeasurementType();
  ElongatedCylinderFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    MeasuredPlaneType * CenterPlaneIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * DepthIn,
    MeasuredLinearValueType * DepthMaxIn,
    MeasuredLinearValueType * DepthMinIn,
    MeasuredUnitVectorType * DepthVectorIn,
    MeasuredLinearValueType * FormIn);
  ElongatedCylinderFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    MeasuredPlaneType * CenterPlaneIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * DepthIn,
    MeasuredLinearValueType * DepthMaxIn,
    MeasuredLinearValueType * DepthMinIn,
    MeasuredUnitVectorType * DepthVectorIn,
    MeasuredLinearValueType * FormIn);
  ~ElongatedCylinderFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  MeasuredPlaneType * getCenterPlane();
  void setCenterPlane(MeasuredPlaneType * CenterPlaneIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getLengthMax();
  void setLengthMax(MeasuredLinearValueType * LengthMaxIn);
  MeasuredLinearValueType * getLengthMin();
  void setLengthMin(MeasuredLinearValueType * LengthMinIn);
  MeasuredLinearValueType * getDepth();
  void setDepth(MeasuredLinearValueType * DepthIn);
  MeasuredLinearValueType * getDepthMax();
  void setDepthMax(MeasuredLinearValueType * DepthMaxIn);
  MeasuredLinearValueType * getDepthMin();
  void setDepthMin(MeasuredLinearValueType * DepthMinIn);
  MeasuredUnitVectorType * getDepthVector();
  void setDepthVector(MeasuredUnitVectorType * DepthVectorIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  MeasuredPlaneType * CenterPlane;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * LengthMax;
  MeasuredLinearValueType * LengthMin;
  MeasuredLinearValueType * Depth;
  MeasuredLinearValueType * DepthMax;
  MeasuredLinearValueType * DepthMin;
  MeasuredUnitVectorType * DepthVector;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class ElongatedCylinderFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  ElongatedCylinderFeatureNominalType();
  ElongatedCylinderFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PlaneType * CenterPlaneIn,
    UnitVectorType * DepthVectorIn,
    ElongatedCylinderConstructionMethodType * ConstructedIn);
  ElongatedCylinderFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PlaneType * CenterPlaneIn,
    UnitVectorType * DepthVectorIn,
    ElongatedCylinderConstructionMethodType * ConstructedIn);
  ~ElongatedCylinderFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PlaneType * getCenterPlane();
  void setCenterPlane(PlaneType * CenterPlaneIn);
  UnitVectorType * getDepthVector();
  void setDepthVector(UnitVectorType * DepthVectorIn);
  ElongatedCylinderConstructionMethodType * getConstructed();
  void setConstructed(ElongatedCylinderConstructionMethodType * ConstructedIn);

protected:
  PlaneType * CenterPlane;
  UnitVectorType * DepthVector;
  ElongatedCylinderConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class ExtrudedCrossSectionFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  ExtrudedCrossSectionFeatureDefinitionType();
  ExtrudedCrossSectionFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * LengthIn);
  ExtrudedCrossSectionFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * LengthIn);
  ~ExtrudedCrossSectionFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Length;
};

/* ***************************************************************** */

class ExtrudedCrossSectionFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  ExtrudedCrossSectionFeatureItemType();
  ExtrudedCrossSectionFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ExtrudedCrossSectionMeasurementDeterminationType * DeterminationModeIn);
  ExtrudedCrossSectionFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    ExtrudedCrossSectionMeasurementDeterminationType * DeterminationModeIn);
  ~ExtrudedCrossSectionFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ExtrudedCrossSectionMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(ExtrudedCrossSectionMeasurementDeterminationType * DeterminationModeIn);

protected:
  ExtrudedCrossSectionMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class ExtrudedCrossSectionFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  ExtrudedCrossSectionFeatureMeasurementType();
  ExtrudedCrossSectionFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredUnitVectorType * DirectionIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * FormIn);
  ExtrudedCrossSectionFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredUnitVectorType * DirectionIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * FormIn);
  ~ExtrudedCrossSectionFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredUnitVectorType * getDirection();
  void setDirection(MeasuredUnitVectorType * DirectionIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredUnitVectorType * Direction;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class ExtrudedCrossSectionFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  ExtrudedCrossSectionFeatureNominalType();
  ExtrudedCrossSectionFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    UnitVectorType * DirectionIn,
    ArrayReferenceFullType * CrossSectionReferenceFeatureIdIn,
    ExtrudedCrossSectionConstructionMethodType * ConstructedIn);
  ExtrudedCrossSectionFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    UnitVectorType * DirectionIn,
    ArrayReferenceFullType * CrossSectionReferenceFeatureIdIn,
    ExtrudedCrossSectionConstructionMethodType * ConstructedIn);
  ~ExtrudedCrossSectionFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);
  ArrayReferenceFullType * getCrossSectionReferenceFeatureId();
  void setCrossSectionReferenceFeatureId(ArrayReferenceFullType * CrossSectionReferenceFeatureIdIn);
  ExtrudedCrossSectionConstructionMethodType * getConstructed();
  void setConstructed(ExtrudedCrossSectionConstructionMethodType * ConstructedIn);

protected:
  UnitVectorType * Direction;
  ArrayReferenceFullType * CrossSectionReferenceFeatureId;
  ExtrudedCrossSectionConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class FeatureZoneAreaBaseType :
  public FeatureZoneBaseType
{
public:
  FeatureZoneAreaBaseType();
  FeatureZoneAreaBaseType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In);
  FeatureZoneAreaBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In);
  ~FeatureZoneAreaBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  FeatureZoneArea_1100_Type * getFeatureZoneArea_1100();
  void setFeatureZoneArea_1100(FeatureZoneArea_1100_Type * FeatureZoneArea_1100In);

protected:
  FeatureZoneArea_1100_Type * FeatureZoneArea_1100;
};

/* ***************************************************************** */

class FeatureZoneAreaBetweenType :
  public FeatureZoneAreaBaseType
{
public:
  FeatureZoneAreaBetweenType();
  FeatureZoneAreaBetweenType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    FeatureZoneArea_1101_Type * FeatureZoneArea_1101In,
    FeatureZoneArea_1102_Type * FeatureZoneArea_1102In,
    UnitVectorType * StartDirectionIn,
    UnitVectorType * PlaneNormalIn);
  FeatureZoneAreaBetweenType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    FeatureZoneArea_1101_Type * FeatureZoneArea_1101In,
    FeatureZoneArea_1102_Type * FeatureZoneArea_1102In,
    UnitVectorType * StartDirectionIn,
    UnitVectorType * PlaneNormalIn);
  ~FeatureZoneAreaBetweenType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  FeatureZoneArea_1101_Type * getFeatureZoneArea_1101();
  void setFeatureZoneArea_1101(FeatureZoneArea_1101_Type * FeatureZoneArea_1101In);
  FeatureZoneArea_1102_Type * getFeatureZoneArea_1102();
  void setFeatureZoneArea_1102(FeatureZoneArea_1102_Type * FeatureZoneArea_1102In);
  UnitVectorType * getStartDirection();
  void setStartDirection(UnitVectorType * StartDirectionIn);
  UnitVectorType * getPlaneNormal();
  void setPlaneNormal(UnitVectorType * PlaneNormalIn);

protected:
  FeatureZoneArea_1101_Type * FeatureZoneArea_1101;
  FeatureZoneArea_1102_Type * FeatureZoneArea_1102;
  UnitVectorType * StartDirection;
  UnitVectorType * PlaneNormal;
};

/* ***************************************************************** */

class FeatureZoneAreaCircularType :
  public FeatureZoneAreaBaseType
{
public:
  FeatureZoneAreaCircularType();
  FeatureZoneAreaCircularType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    CircleType * CircleIn);
  FeatureZoneAreaCircularType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    CircleType * CircleIn);
  ~FeatureZoneAreaCircularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CircleType * getCircle();
  void setCircle(CircleType * CircleIn);

protected:
  CircleType * Circle;
};

/* ***************************************************************** */

class FeatureZoneAreaCylindricalType :
  public FeatureZoneAreaBaseType
{
public:
  FeatureZoneAreaCylindricalType();
  FeatureZoneAreaCylindricalType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    CylinderType * CylinderIn);
  FeatureZoneAreaCylindricalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    CylinderType * CylinderIn);
  ~FeatureZoneAreaCylindricalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CylinderType * getCylinder();
  void setCylinder(CylinderType * CylinderIn);

protected:
  CylinderType * Cylinder;
};

/* ***************************************************************** */

class FeatureZoneAreaIrregularType :
  public FeatureZoneAreaBaseType
{
public:
  FeatureZoneAreaIrregularType();
  FeatureZoneAreaIrregularType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In);
  FeatureZoneAreaIrregularType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In);
  ~FeatureZoneAreaIrregularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class FeatureZoneAreaRectangularType :
  public FeatureZoneAreaBaseType
{
public:
  FeatureZoneAreaRectangularType();
  FeatureZoneAreaRectangularType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    RectangleType * RectangleIn);
  FeatureZoneAreaRectangularType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    RectangleType * RectangleIn);
  ~FeatureZoneAreaRectangularType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  RectangleType * getRectangle();
  void setRectangle(RectangleType * RectangleIn);

protected:
  RectangleType * Rectangle;
};

/* ***************************************************************** */

class FeatureZoneAreaSphericalType :
  public FeatureZoneAreaBaseType
{
public:
  FeatureZoneAreaSphericalType();
  FeatureZoneAreaSphericalType(
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    SphereType * SphereIn);
  FeatureZoneAreaSphericalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * LabelIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    FeatureZoneArea_1100_Type * FeatureZoneArea_1100In,
    SphereType * SphereIn);
  ~FeatureZoneAreaSphericalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SphereType * getSphere();
  void setSphere(SphereType * SphereIn);

protected:
  SphereType * Sphere;
};

/* ***************************************************************** */

class GroupFeatureDefinitionType :
  public ShapeFeatureDefinitionBaseType
{
public:
  GroupFeatureDefinitionType();
  GroupFeatureDefinitionType(
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In);
  GroupFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In);
  ~GroupFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getIsProfileGroup();
  void setIsProfileGroup(XmlBoolean * IsProfileGroupIn);
  XmlBoolean * getIsRunoutGroup();
  void setIsRunoutGroup(XmlBoolean * IsRunoutGroupIn);
  GroupFeatureDef_1105_Type * getGroupFeatureDef_1105();
  void setGroupFeatureDef_1105(GroupFeatureDef_1105_Type * GroupFeatureDef_1105In);

protected:
  XmlBoolean * IsProfileGroup;
  XmlBoolean * IsRunoutGroup;
  GroupFeatureDef_1105_Type * GroupFeatureDef_1105;
};

/* ***************************************************************** */

class GroupFeatureItemType :
  public ShapeFeatureItemBaseType
{
public:
  GroupFeatureItemType();
  GroupFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  GroupFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~GroupFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class GroupFeatureMeasurementType :
  public ShapeFeatureMeasurementBaseType
{
public:
  GroupFeatureMeasurementType();
  GroupFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  GroupFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~GroupFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class GroupFeatureNominalType :
  public ShapeFeatureNominalBaseType
{
public:
  GroupFeatureNominalType();
  GroupFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn);
  GroupFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn);
  ~GroupFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceFullType * getFeatureNominalIds();
  void setFeatureNominalIds(ArrayReferenceFullType * FeatureNominalIdsIn);

protected:
  ArrayReferenceFullType * FeatureNominalIds;
};

/* ***************************************************************** */

class LineFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  LineFeatureDefinitionType();
  LineFeatureDefinitionType(
    AttributesType * AttributesIn);
  LineFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~LineFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class LineFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  LineFeatureItemType();
  LineFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    LineMeasurementDeterminationType * DeterminationModeIn);
  LineFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    LineMeasurementDeterminationType * DeterminationModeIn);
  ~LineFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LineMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(LineMeasurementDeterminationType * DeterminationModeIn);

protected:
  LineMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class LineFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  LineFeatureMeasurementType();
  LineFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * DirectionIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * FormIn);
  LineFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * DirectionIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * FormIn);
  ~LineFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getDirection();
  void setDirection(MeasuredUnitVectorType * DirectionIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * Direction;
  MeasuredLinearValueType * Length;
  MeasuredUnitVectorType * Normal;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class LineFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  LineFeatureNominalType();
  LineFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointType * LocationIn,
    UnitVectorType * DirectionIn,
    LinearValueType * LengthIn,
    UnitVectorType * NormalIn,
    LineConstructionMethodType * ConstructedIn);
  LineFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointType * LocationIn,
    UnitVectorType * DirectionIn,
    LinearValueType * LengthIn,
    UnitVectorType * NormalIn,
    LineConstructionMethodType * ConstructedIn);
  ~LineFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  UnitVectorType * getDirection();
  void setDirection(UnitVectorType * DirectionIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  LineConstructionMethodType * getConstructed();
  void setConstructed(LineConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  UnitVectorType * Direction;
  LinearValueType * Length;
  UnitVectorType * Normal;
  LineConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class MarkingFeatureDefinitionType :
  public NonShapeFeatureDefinitionBaseType
{
public:
  MarkingFeatureDefinitionType();
  MarkingFeatureDefinitionType(
    AttributesType * AttributesIn,
    XmlString * TextIn,
    MarkingMethodType * MarkingMethodIn);
  MarkingFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * TextIn,
    MarkingMethodType * MarkingMethodIn);
  ~MarkingFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getText();
  void setText(XmlString * TextIn);
  MarkingMethodType * getMarkingMethod();
  void setMarkingMethod(MarkingMethodType * MarkingMethodIn);

protected:
  XmlString * Text;
  MarkingMethodType * MarkingMethod;
};

/* ***************************************************************** */

class MarkingFeatureItemType :
  public NonShapeFeatureItemBaseType
{
public:
  MarkingFeatureItemType();
  MarkingFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  MarkingFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~MarkingFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class MarkingFeatureMeasurementType :
  public NonShapeFeatureMeasurementBaseType
{
public:
  MarkingFeatureMeasurementType();
  MarkingFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    XmlString * TextIn,
    RectangleType * LocationIn);
  MarkingFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    XmlString * TextIn,
    RectangleType * LocationIn);
  ~MarkingFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getText();
  void setText(XmlString * TextIn);
  RectangleType * getLocation();
  void setLocation(RectangleType * LocationIn);

protected:
  XmlString * Text;
  RectangleType * Location;
};

/* ***************************************************************** */

class MarkingFeatureNominalType :
  public NonShapeFeatureNominalBaseType
{
public:
  MarkingFeatureNominalType();
  MarkingFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    RectangleType * LocationIn);
  MarkingFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    RectangleType * LocationIn);
  ~MarkingFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  RectangleType * getLocation();
  void setLocation(RectangleType * LocationIn);

protected:
  RectangleType * Location;
};

/* ***************************************************************** */

class OppositeAngledLinesFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  OppositeAngledLinesFeatureDefinitionType();
  OppositeAngledLinesFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    AngularValueType * TaperAngleIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In);
  OppositeAngledLinesFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    AngularValueType * TaperAngleIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In);
  ~OppositeAngledLinesFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getWidth();
  void setWidth(LinearValueType * WidthIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  SlotEndType * getEndType();
  void setEndType(SlotEndType * EndTypeIn);
  AngularValueType * getTaperAngle();
  void setTaperAngle(AngularValueType * TaperAngleIn);
  XmlBoolean * getSingleOpenEnd();
  void setSingleOpenEnd(XmlBoolean * SingleOpenEndIn);
  EndRadiusType * getEndRadius1();
  void setEndRadius1(EndRadiusType * EndRadius1In);
  EndRadiusType * getEndRadius2();
  void setEndRadius2(EndRadiusType * EndRadius2In);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Width;
  LinearValueType * Length;
  SlotEndType * EndType;
  AngularValueType * TaperAngle;
  XmlBoolean * SingleOpenEnd;
  EndRadiusType * EndRadius1;
  EndRadiusType * EndRadius2;
};

/* ***************************************************************** */

class OppositeAngledLinesFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  OppositeAngledLinesFeatureItemType();
  OppositeAngledLinesFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeAngledLinesMeasurementDeterminationType * DeterminationModeIn);
  OppositeAngledLinesFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeAngledLinesMeasurementDeterminationType * DeterminationModeIn);
  ~OppositeAngledLinesFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeAngledLinesMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(OppositeAngledLinesMeasurementDeterminationType * DeterminationModeIn);

protected:
  OppositeAngledLinesMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class OppositeAngledLinesFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  OppositeAngledLinesFeatureMeasurementType();
  OppositeAngledLinesFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointAndVectorType * CenterLineIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredAngularValueType * TaperAngleIn,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  OppositeAngledLinesFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointAndVectorType * CenterLineIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredAngularValueType * TaperAngleIn,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  ~OppositeAngledLinesFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointAndVectorType * getCenterLine();
  void setCenterLine(MeasuredPointAndVectorType * CenterLineIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  MeasuredLinearValueType * getWidth();
  void setWidth(MeasuredLinearValueType * WidthIn);
  MeasuredLinearValueType * getWidthMin();
  void setWidthMin(MeasuredLinearValueType * WidthMinIn);
  MeasuredLinearValueType * getWidthMax();
  void setWidthMax(MeasuredLinearValueType * WidthMaxIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getLengthMin();
  void setLengthMin(MeasuredLinearValueType * LengthMinIn);
  MeasuredLinearValueType * getLengthMax();
  void setLengthMax(MeasuredLinearValueType * LengthMaxIn);
  MeasuredAngularValueType * getTaperAngle();
  void setTaperAngle(MeasuredAngularValueType * TaperAngleIn);
  MeasuredEndRadiusType * getEndRadius1();
  void setEndRadius1(MeasuredEndRadiusType * EndRadius1In);
  MeasuredEndRadiusType * getEndRadius2();
  void setEndRadius2(MeasuredEndRadiusType * EndRadius2In);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointAndVectorType * CenterLine;
  MeasuredUnitVectorType * Normal;
  MeasuredLinearValueType * Width;
  MeasuredLinearValueType * WidthMin;
  MeasuredLinearValueType * WidthMax;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * LengthMin;
  MeasuredLinearValueType * LengthMax;
  MeasuredAngularValueType * TaperAngle;
  MeasuredEndRadiusType * EndRadius1;
  MeasuredEndRadiusType * EndRadius2;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class OppositeAngledLinesFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  OppositeAngledLinesFeatureNominalType();
  OppositeAngledLinesFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointAndVectorType * CenterLineIn,
    UnitVectorType * NormalIn,
    OppositeAngledLinesConstructionMethodType * ConstructedIn);
  OppositeAngledLinesFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointAndVectorType * CenterLineIn,
    UnitVectorType * NormalIn,
    OppositeAngledLinesConstructionMethodType * ConstructedIn);
  ~OppositeAngledLinesFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointAndVectorType * getCenterLine();
  void setCenterLine(PointAndVectorType * CenterLineIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  OppositeAngledLinesConstructionMethodType * getConstructed();
  void setConstructed(OppositeAngledLinesConstructionMethodType * ConstructedIn);

protected:
  PointAndVectorType * CenterLine;
  UnitVectorType * Normal;
  OppositeAngledLinesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OppositeAngledPlanesFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  OppositeAngledPlanesFeatureDefinitionType();
  OppositeAngledPlanesFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    LinearValueType * DepthIn,
    BottomType * BottomIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In,
    OppositeAngledP_1119_Type * OppositeAngledP_1119In);
  OppositeAngledPlanesFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    LinearValueType * DepthIn,
    BottomType * BottomIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In,
    OppositeAngledP_1119_Type * OppositeAngledP_1119In);
  ~OppositeAngledPlanesFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getWidth();
  void setWidth(LinearValueType * WidthIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  SlotEndType * getEndType();
  void setEndType(SlotEndType * EndTypeIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);
  BottomType * getBottom();
  void setBottom(BottomType * BottomIn);
  XmlBoolean * getSingleOpenEnd();
  void setSingleOpenEnd(XmlBoolean * SingleOpenEndIn);
  EndRadiusType * getEndRadius1();
  void setEndRadius1(EndRadiusType * EndRadius1In);
  EndRadiusType * getEndRadius2();
  void setEndRadius2(EndRadiusType * EndRadius2In);
  OppositeAngledP_1119_Type * getOppositeAngledP_1119();
  void setOppositeAngledP_1119(OppositeAngledP_1119_Type * OppositeAngledP_1119In);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Width;
  LinearValueType * Length;
  SlotEndType * EndType;
  LinearValueType * Depth;
  BottomType * Bottom;
  XmlBoolean * SingleOpenEnd;
  EndRadiusType * EndRadius1;
  EndRadiusType * EndRadius2;
  OppositeAngledP_1119_Type * OppositeAngledP_1119;
};

/* ***************************************************************** */

class OppositeAngledPlanesFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  OppositeAngledPlanesFeatureItemType();
  OppositeAngledPlanesFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeAngledPlanesMeasurementDeterminationType * DeterminationModeIn);
  OppositeAngledPlanesFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeAngledPlanesMeasurementDeterminationType * DeterminationModeIn);
  ~OppositeAngledPlanesFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeAngledPlanesMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(OppositeAngledPlanesMeasurementDeterminationType * DeterminationModeIn);

protected:
  OppositeAngledPlanesMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class OppositeAngledPlanesFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  OppositeAngledPlanesFeatureMeasurementType();
  OppositeAngledPlanesFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPlaneType * CenterPlaneIn,
    MeasuredUnitVectorType * LengthVectorIn,
    MeasuredUnitVectorType * DepthVectorIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * DepthIn,
    OppositeAngledP_1120_Type * OppositeAngledP_1120In,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  OppositeAngledPlanesFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPlaneType * CenterPlaneIn,
    MeasuredUnitVectorType * LengthVectorIn,
    MeasuredUnitVectorType * DepthVectorIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * DepthIn,
    OppositeAngledP_1120_Type * OppositeAngledP_1120In,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  ~OppositeAngledPlanesFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPlaneType * getCenterPlane();
  void setCenterPlane(MeasuredPlaneType * CenterPlaneIn);
  MeasuredUnitVectorType * getLengthVector();
  void setLengthVector(MeasuredUnitVectorType * LengthVectorIn);
  MeasuredUnitVectorType * getDepthVector();
  void setDepthVector(MeasuredUnitVectorType * DepthVectorIn);
  MeasuredLinearValueType * getWidth();
  void setWidth(MeasuredLinearValueType * WidthIn);
  MeasuredLinearValueType * getWidthMin();
  void setWidthMin(MeasuredLinearValueType * WidthMinIn);
  MeasuredLinearValueType * getWidthMax();
  void setWidthMax(MeasuredLinearValueType * WidthMaxIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getLengthMin();
  void setLengthMin(MeasuredLinearValueType * LengthMinIn);
  MeasuredLinearValueType * getLengthMax();
  void setLengthMax(MeasuredLinearValueType * LengthMaxIn);
  MeasuredLinearValueType * getDepth();
  void setDepth(MeasuredLinearValueType * DepthIn);
  OppositeAngledP_1120_Type * getOppositeAngledP_1120();
  void setOppositeAngledP_1120(OppositeAngledP_1120_Type * OppositeAngledP_1120In);
  MeasuredEndRadiusType * getEndRadius1();
  void setEndRadius1(MeasuredEndRadiusType * EndRadius1In);
  MeasuredEndRadiusType * getEndRadius2();
  void setEndRadius2(MeasuredEndRadiusType * EndRadius2In);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPlaneType * CenterPlane;
  MeasuredUnitVectorType * LengthVector;
  MeasuredUnitVectorType * DepthVector;
  MeasuredLinearValueType * Width;
  MeasuredLinearValueType * WidthMin;
  MeasuredLinearValueType * WidthMax;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * LengthMin;
  MeasuredLinearValueType * LengthMax;
  MeasuredLinearValueType * Depth;
  OppositeAngledP_1120_Type * OppositeAngledP_1120;
  MeasuredEndRadiusType * EndRadius1;
  MeasuredEndRadiusType * EndRadius2;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class OppositeAngledPlanesFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  OppositeAngledPlanesFeatureNominalType();
  OppositeAngledPlanesFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PlaneType * CenterPlaneIn,
    UnitVectorType * LengthVectorIn,
    UnitVectorType * DepthVectorIn,
    UnitVectorType * DraftVectorIn,
    OppositeAngledPlanesConstructionMethodType * ConstructedIn);
  OppositeAngledPlanesFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PlaneType * CenterPlaneIn,
    UnitVectorType * LengthVectorIn,
    UnitVectorType * DepthVectorIn,
    UnitVectorType * DraftVectorIn,
    OppositeAngledPlanesConstructionMethodType * ConstructedIn);
  ~OppositeAngledPlanesFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PlaneType * getCenterPlane();
  void setCenterPlane(PlaneType * CenterPlaneIn);
  UnitVectorType * getLengthVector();
  void setLengthVector(UnitVectorType * LengthVectorIn);
  UnitVectorType * getDepthVector();
  void setDepthVector(UnitVectorType * DepthVectorIn);
  UnitVectorType * getDraftVector();
  void setDraftVector(UnitVectorType * DraftVectorIn);
  OppositeAngledPlanesConstructionMethodType * getConstructed();
  void setConstructed(OppositeAngledPlanesConstructionMethodType * ConstructedIn);

protected:
  PlaneType * CenterPlane;
  UnitVectorType * LengthVector;
  UnitVectorType * DepthVector;
  UnitVectorType * DraftVector;
  OppositeAngledPlanesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OppositeParallelLinesFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  OppositeParallelLinesFeatureDefinitionType();
  OppositeParallelLinesFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In);
  OppositeParallelLinesFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In);
  ~OppositeParallelLinesFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getWidth();
  void setWidth(LinearValueType * WidthIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  SlotEndType * getEndType();
  void setEndType(SlotEndType * EndTypeIn);
  XmlBoolean * getSingleOpenEnd();
  void setSingleOpenEnd(XmlBoolean * SingleOpenEndIn);
  EndRadiusType * getEndRadius1();
  void setEndRadius1(EndRadiusType * EndRadius1In);
  EndRadiusType * getEndRadius2();
  void setEndRadius2(EndRadiusType * EndRadius2In);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Width;
  LinearValueType * Length;
  SlotEndType * EndType;
  XmlBoolean * SingleOpenEnd;
  EndRadiusType * EndRadius1;
  EndRadiusType * EndRadius2;
};

/* ***************************************************************** */

class OppositeParallelLinesFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  OppositeParallelLinesFeatureItemType();
  OppositeParallelLinesFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeParallelLinesMeasurementDeterminationType * DeterminationModeIn);
  OppositeParallelLinesFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeParallelLinesMeasurementDeterminationType * DeterminationModeIn);
  ~OppositeParallelLinesFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeParallelLinesMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(OppositeParallelLinesMeasurementDeterminationType * DeterminationModeIn);

protected:
  OppositeParallelLinesMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class OppositeParallelLinesFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  OppositeParallelLinesFeatureMeasurementType();
  OppositeParallelLinesFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointAndVectorType * CenterLineIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  OppositeParallelLinesFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointAndVectorType * CenterLineIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  ~OppositeParallelLinesFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointAndVectorType * getCenterLine();
  void setCenterLine(MeasuredPointAndVectorType * CenterLineIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  MeasuredLinearValueType * getWidth();
  void setWidth(MeasuredLinearValueType * WidthIn);
  MeasuredLinearValueType * getWidthMin();
  void setWidthMin(MeasuredLinearValueType * WidthMinIn);
  MeasuredLinearValueType * getWidthMax();
  void setWidthMax(MeasuredLinearValueType * WidthMaxIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getLengthMin();
  void setLengthMin(MeasuredLinearValueType * LengthMinIn);
  MeasuredLinearValueType * getLengthMax();
  void setLengthMax(MeasuredLinearValueType * LengthMaxIn);
  MeasuredEndRadiusType * getEndRadius1();
  void setEndRadius1(MeasuredEndRadiusType * EndRadius1In);
  MeasuredEndRadiusType * getEndRadius2();
  void setEndRadius2(MeasuredEndRadiusType * EndRadius2In);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointAndVectorType * CenterLine;
  MeasuredUnitVectorType * Normal;
  MeasuredLinearValueType * Width;
  MeasuredLinearValueType * WidthMin;
  MeasuredLinearValueType * WidthMax;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * LengthMin;
  MeasuredLinearValueType * LengthMax;
  MeasuredEndRadiusType * EndRadius1;
  MeasuredEndRadiusType * EndRadius2;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class OppositeParallelLinesFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  OppositeParallelLinesFeatureNominalType();
  OppositeParallelLinesFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointAndVectorType * CenterLineIn,
    UnitVectorType * NormalIn,
    OppositeParallelLinesConstructionMethodType * ConstructedIn);
  OppositeParallelLinesFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointAndVectorType * CenterLineIn,
    UnitVectorType * NormalIn,
    OppositeParallelLinesConstructionMethodType * ConstructedIn);
  ~OppositeParallelLinesFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointAndVectorType * getCenterLine();
  void setCenterLine(PointAndVectorType * CenterLineIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  OppositeParallelLinesConstructionMethodType * getConstructed();
  void setConstructed(OppositeParallelLinesConstructionMethodType * ConstructedIn);

protected:
  PointAndVectorType * CenterLine;
  UnitVectorType * Normal;
  OppositeParallelLinesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OppositeParallelPlanesFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  OppositeParallelPlanesFeatureDefinitionType();
  OppositeParallelPlanesFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    LinearValueType * DepthIn,
    BottomType * BottomIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In);
  OppositeParallelPlanesFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * WidthIn,
    LinearValueType * LengthIn,
    SlotEndType * EndTypeIn,
    LinearValueType * DepthIn,
    BottomType * BottomIn,
    XmlBoolean * SingleOpenEndIn,
    EndRadiusType * EndRadius1In,
    EndRadiusType * EndRadius2In);
  ~OppositeParallelPlanesFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getWidth();
  void setWidth(LinearValueType * WidthIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  SlotEndType * getEndType();
  void setEndType(SlotEndType * EndTypeIn);
  LinearValueType * getDepth();
  void setDepth(LinearValueType * DepthIn);
  BottomType * getBottom();
  void setBottom(BottomType * BottomIn);
  XmlBoolean * getSingleOpenEnd();
  void setSingleOpenEnd(XmlBoolean * SingleOpenEndIn);
  EndRadiusType * getEndRadius1();
  void setEndRadius1(EndRadiusType * EndRadius1In);
  EndRadiusType * getEndRadius2();
  void setEndRadius2(EndRadiusType * EndRadius2In);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Width;
  LinearValueType * Length;
  SlotEndType * EndType;
  LinearValueType * Depth;
  BottomType * Bottom;
  XmlBoolean * SingleOpenEnd;
  EndRadiusType * EndRadius1;
  EndRadiusType * EndRadius2;
};

/* ***************************************************************** */

class OppositeParallelPlanesFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  OppositeParallelPlanesFeatureItemType();
  OppositeParallelPlanesFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeParallelPlanesMeasurementDeterminationType * DeterminationModeIn);
  OppositeParallelPlanesFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OppositeParallelPlanesMeasurementDeterminationType * DeterminationModeIn);
  ~OppositeParallelPlanesFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OppositeParallelPlanesMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(OppositeParallelPlanesMeasurementDeterminationType * DeterminationModeIn);

protected:
  OppositeParallelPlanesMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class OppositeParallelPlanesFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  OppositeParallelPlanesFeatureMeasurementType();
  OppositeParallelPlanesFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPlaneType * CenterPlaneIn,
    MeasuredUnitVectorType * LengthVectorIn,
    MeasuredUnitVectorType * DepthVectorIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * DepthIn,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  OppositeParallelPlanesFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPlaneType * CenterPlaneIn,
    MeasuredUnitVectorType * LengthVectorIn,
    MeasuredUnitVectorType * DepthVectorIn,
    MeasuredLinearValueType * WidthIn,
    MeasuredLinearValueType * WidthMinIn,
    MeasuredLinearValueType * WidthMaxIn,
    MeasuredLinearValueType * LengthIn,
    MeasuredLinearValueType * LengthMinIn,
    MeasuredLinearValueType * LengthMaxIn,
    MeasuredLinearValueType * DepthIn,
    MeasuredEndRadiusType * EndRadius1In,
    MeasuredEndRadiusType * EndRadius2In,
    MeasuredLinearValueType * FormIn);
  ~OppositeParallelPlanesFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPlaneType * getCenterPlane();
  void setCenterPlane(MeasuredPlaneType * CenterPlaneIn);
  MeasuredUnitVectorType * getLengthVector();
  void setLengthVector(MeasuredUnitVectorType * LengthVectorIn);
  MeasuredUnitVectorType * getDepthVector();
  void setDepthVector(MeasuredUnitVectorType * DepthVectorIn);
  MeasuredLinearValueType * getWidth();
  void setWidth(MeasuredLinearValueType * WidthIn);
  MeasuredLinearValueType * getWidthMin();
  void setWidthMin(MeasuredLinearValueType * WidthMinIn);
  MeasuredLinearValueType * getWidthMax();
  void setWidthMax(MeasuredLinearValueType * WidthMaxIn);
  MeasuredLinearValueType * getLength();
  void setLength(MeasuredLinearValueType * LengthIn);
  MeasuredLinearValueType * getLengthMin();
  void setLengthMin(MeasuredLinearValueType * LengthMinIn);
  MeasuredLinearValueType * getLengthMax();
  void setLengthMax(MeasuredLinearValueType * LengthMaxIn);
  MeasuredLinearValueType * getDepth();
  void setDepth(MeasuredLinearValueType * DepthIn);
  MeasuredEndRadiusType * getEndRadius1();
  void setEndRadius1(MeasuredEndRadiusType * EndRadius1In);
  MeasuredEndRadiusType * getEndRadius2();
  void setEndRadius2(MeasuredEndRadiusType * EndRadius2In);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPlaneType * CenterPlane;
  MeasuredUnitVectorType * LengthVector;
  MeasuredUnitVectorType * DepthVector;
  MeasuredLinearValueType * Width;
  MeasuredLinearValueType * WidthMin;
  MeasuredLinearValueType * WidthMax;
  MeasuredLinearValueType * Length;
  MeasuredLinearValueType * LengthMin;
  MeasuredLinearValueType * LengthMax;
  MeasuredLinearValueType * Depth;
  MeasuredEndRadiusType * EndRadius1;
  MeasuredEndRadiusType * EndRadius2;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class OppositeParallelPlanesFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  OppositeParallelPlanesFeatureNominalType();
  OppositeParallelPlanesFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PlaneType * CenterPlaneIn,
    UnitVectorType * LengthVectorIn,
    UnitVectorType * DepthVectorIn,
    OppositeParallelPlanesConstructionMethodType * ConstructedIn);
  OppositeParallelPlanesFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PlaneType * CenterPlaneIn,
    UnitVectorType * LengthVectorIn,
    UnitVectorType * DepthVectorIn,
    OppositeParallelPlanesConstructionMethodType * ConstructedIn);
  ~OppositeParallelPlanesFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PlaneType * getCenterPlane();
  void setCenterPlane(PlaneType * CenterPlaneIn);
  UnitVectorType * getLengthVector();
  void setLengthVector(UnitVectorType * LengthVectorIn);
  UnitVectorType * getDepthVector();
  void setDepthVector(UnitVectorType * DepthVectorIn);
  OppositeParallelPlanesConstructionMethodType * getConstructed();
  void setConstructed(OppositeParallelPlanesConstructionMethodType * ConstructedIn);

protected:
  PlaneType * CenterPlane;
  UnitVectorType * LengthVector;
  UnitVectorType * DepthVector;
  OppositeParallelPlanesConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OtherCurveFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  OtherCurveFeatureDefinitionType();
  OtherCurveFeatureDefinitionType(
    AttributesType * AttributesIn);
  OtherCurveFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~OtherCurveFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class OtherCurveFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  OtherCurveFeatureItemType();
  OtherCurveFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OtherCurveMeasurementDeterminationType * DeterminationModeIn);
  OtherCurveFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OtherCurveMeasurementDeterminationType * DeterminationModeIn);
  ~OtherCurveFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OtherCurveMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(OtherCurveMeasurementDeterminationType * DeterminationModeIn);

protected:
  OtherCurveMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class OtherCurveFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  OtherCurveFeatureMeasurementType();
  OtherCurveFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  OtherCurveFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~OtherCurveFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class OtherCurveFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  OtherCurveFeatureNominalType();
  OtherCurveFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    OtherCurveConstructionMethodType * ConstructedIn);
  OtherCurveFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    OtherCurveConstructionMethodType * ConstructedIn);
  ~OtherCurveFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OtherCurveConstructionMethodType * getConstructed();
  void setConstructed(OtherCurveConstructionMethodType * ConstructedIn);

protected:
  OtherCurveConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OtherShapeFeatureDefinitionType :
  public ShapeFeatureDefinitionBaseType
{
public:
  OtherShapeFeatureDefinitionType();
  OtherShapeFeatureDefinitionType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn);
  OtherShapeFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn);
  ~OtherShapeFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  XmlString * Description;
};

/* ***************************************************************** */

class OtherShapeFeatureItemType :
  public ShapeFeatureItemBaseType
{
public:
  OtherShapeFeatureItemType();
  OtherShapeFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OtherShapeMeasurementDeterminationType * DeterminationModeIn);
  OtherShapeFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OtherShapeMeasurementDeterminationType * DeterminationModeIn);
  ~OtherShapeFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OtherShapeMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(OtherShapeMeasurementDeterminationType * DeterminationModeIn);

protected:
  OtherShapeMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class OtherShapeFeatureMeasurementType :
  public ShapeFeatureMeasurementBaseType
{
public:
  OtherShapeFeatureMeasurementType();
  OtherShapeFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  OtherShapeFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~OtherShapeFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class OtherShapeFeatureNominalType :
  public ShapeFeatureNominalBaseType
{
public:
  OtherShapeFeatureNominalType();
  OtherShapeFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    OtherShapeConstructionMethodType * ConstructedIn);
  OtherShapeFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    OtherShapeConstructionMethodType * ConstructedIn);
  ~OtherShapeFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OtherShapeConstructionMethodType * getConstructed();
  void setConstructed(OtherShapeConstructionMethodType * ConstructedIn);

protected:
  OtherShapeConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class OtherSurfaceFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  OtherSurfaceFeatureDefinitionType();
  OtherSurfaceFeatureDefinitionType(
    AttributesType * AttributesIn);
  OtherSurfaceFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~OtherSurfaceFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class OtherSurfaceFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  OtherSurfaceFeatureItemType();
  OtherSurfaceFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OtherSurfaceMeasurementDeterminationType * DeterminationModeIn);
  OtherSurfaceFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    OtherSurfaceMeasurementDeterminationType * DeterminationModeIn);
  ~OtherSurfaceFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OtherSurfaceMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(OtherSurfaceMeasurementDeterminationType * DeterminationModeIn);

protected:
  OtherSurfaceMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class OtherSurfaceFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  OtherSurfaceFeatureMeasurementType();
  OtherSurfaceFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    PolyLineType * PolyLineIn);
  OtherSurfaceFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    PolyLineType * PolyLineIn);
  ~OtherSurfaceFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PolyLineType * getPolyLine();
  void setPolyLine(PolyLineType * PolyLineIn);

protected:
  PolyLineType * PolyLine;
};

/* ***************************************************************** */

class OtherSurfaceFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  OtherSurfaceFeatureNominalType();
  OtherSurfaceFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    OtherSurfaceFea_1121_Type * OtherSurfaceFea_1121In);
  OtherSurfaceFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    OtherSurfaceFea_1121_Type * OtherSurfaceFea_1121In);
  ~OtherSurfaceFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  OtherSurfaceFea_1121_Type * getOtherSurfaceFea_1121();
  void setOtherSurfaceFea_1121(OtherSurfaceFea_1121_Type * OtherSurfaceFea_1121In);

protected:
  OtherSurfaceFea_1121_Type * OtherSurfaceFea_1121;
};

/* ***************************************************************** */

class PatternFeatureDefinitionBaseType :
  public GroupFeatureDefinitionType
{
public:
  PatternFeatureDefinitionBaseType();
  PatternFeatureDefinitionBaseType(
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In);
  PatternFeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In);
  ~PatternFeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PatternFeatureItemBaseType :
  public GroupFeatureItemType
{
public:
  PatternFeatureItemBaseType();
  PatternFeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PatternFeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PatternFeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PatternFeatureLinearDefinitionType :
  public PatternFeatureDefinitionBaseType
{
public:
  PatternFeatureLinearDefinitionType();
  PatternFeatureLinearDefinitionType(
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    UnitVectorType * LineDirectionIn,
    LinearValueType * IncrementalDistanceIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesIn);
  PatternFeatureLinearDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    UnitVectorType * LineDirectionIn,
    LinearValueType * IncrementalDistanceIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesIn);
  ~PatternFeatureLinearDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UnitVectorType * getLineDirection();
  void setLineDirection(UnitVectorType * LineDirectionIn);
  LinearValueType * getIncrementalDistance();
  void setIncrementalDistance(LinearValueType * IncrementalDistanceIn);
  UnitVectorType * getFeatureDirection();
  void setFeatureDirection(UnitVectorType * FeatureDirectionIn);
  NaturalType * getNumberOfFeatures();
  void setNumberOfFeatures(NaturalType * NumberOfFeaturesIn);

protected:
  UnitVectorType * LineDirection;
  LinearValueType * IncrementalDistance;
  UnitVectorType * FeatureDirection;
  NaturalType * NumberOfFeatures;
};

/* ***************************************************************** */

class PatternFeatureLinearItemType :
  public PatternFeatureItemBaseType
{
public:
  PatternFeatureLinearItemType();
  PatternFeatureLinearItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PatternFeatureLinearItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PatternFeatureLinearItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PatternFeatureNominalBaseType :
  public GroupFeatureNominalType
{
public:
  PatternFeatureNominalBaseType();
  PatternFeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn);
  PatternFeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn);
  ~PatternFeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PatternFeatureParallelogramDefinitionType :
  public PatternFeatureDefinitionBaseType
{
public:
  PatternFeatureParallelogramDefinitionType();
  PatternFeatureParallelogramDefinitionType(
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    VectorType * AlongRowDirectionIn,
    LinearValueType * IncrementalRowDistanceIn,
    VectorType * BetweenRowDirectionIn,
    LinearValueType * RowSeparationDistanceIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesPerRowIn,
    NaturalType * NumberOfRowsIn);
  PatternFeatureParallelogramDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    VectorType * AlongRowDirectionIn,
    LinearValueType * IncrementalRowDistanceIn,
    VectorType * BetweenRowDirectionIn,
    LinearValueType * RowSeparationDistanceIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesPerRowIn,
    NaturalType * NumberOfRowsIn);
  ~PatternFeatureParallelogramDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  VectorType * getAlongRowDirection();
  void setAlongRowDirection(VectorType * AlongRowDirectionIn);
  LinearValueType * getIncrementalRowDistance();
  void setIncrementalRowDistance(LinearValueType * IncrementalRowDistanceIn);
  VectorType * getBetweenRowDirection();
  void setBetweenRowDirection(VectorType * BetweenRowDirectionIn);
  LinearValueType * getRowSeparationDistance();
  void setRowSeparationDistance(LinearValueType * RowSeparationDistanceIn);
  UnitVectorType * getFeatureDirection();
  void setFeatureDirection(UnitVectorType * FeatureDirectionIn);
  NaturalType * getNumberOfFeaturesPerRow();
  void setNumberOfFeaturesPerRow(NaturalType * NumberOfFeaturesPerRowIn);
  NaturalType * getNumberOfRows();
  void setNumberOfRows(NaturalType * NumberOfRowsIn);

protected:
  VectorType * AlongRowDirection;
  LinearValueType * IncrementalRowDistance;
  VectorType * BetweenRowDirection;
  LinearValueType * RowSeparationDistance;
  UnitVectorType * FeatureDirection;
  NaturalType * NumberOfFeaturesPerRow;
  NaturalType * NumberOfRows;
};

/* ***************************************************************** */

class PatternFeatureParallelogramItemType :
  public PatternFeatureItemBaseType
{
public:
  PatternFeatureParallelogramItemType();
  PatternFeatureParallelogramItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PatternFeatureParallelogramItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PatternFeatureParallelogramItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PatternFeatureParallelogramNominalType :
  public PatternFeatureNominalBaseType
{
public:
  PatternFeatureParallelogramNominalType();
  PatternFeatureParallelogramNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    QIFReferenceType * FirstFeatureLocationIn);
  PatternFeatureParallelogramNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    QIFReferenceType * FirstFeatureLocationIn);
  ~PatternFeatureParallelogramNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getFirstFeatureLocation();
  void setFirstFeatureLocation(QIFReferenceType * FirstFeatureLocationIn);

protected:
  QIFReferenceType * FirstFeatureLocation;
};

/* ***************************************************************** */

class PlaneFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  PlaneFeatureDefinitionType();
  PlaneFeatureDefinitionType(
    AttributesType * AttributesIn);
  PlaneFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~PlaneFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PlaneFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  PlaneFeatureItemType();
  PlaneFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PlaneMeasurementDeterminationType * DeterminationModeIn);
  PlaneFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PlaneMeasurementDeterminationType * DeterminationModeIn);
  ~PlaneFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PlaneMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(PlaneMeasurementDeterminationType * DeterminationModeIn);

protected:
  PlaneMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class PlaneFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  PlaneFeatureMeasurementType();
  PlaneFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    PolyLineType * PolyLineIn,
    MeasuredLinearValueType * FormIn);
  PlaneFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    PolyLineType * PolyLineIn,
    MeasuredLinearValueType * FormIn);
  ~PlaneFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  PolyLineType * getPolyLine();
  void setPolyLine(PolyLineType * PolyLineIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * Normal;
  PolyLineType * PolyLine;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class PlaneFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  PlaneFeatureNominalType();
  PlaneFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    PlaneFeatureNom_1122_Type * PlaneFeatureNom_1122In,
    PlaneConstructionMethodType * ConstructedIn);
  PlaneFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    PlaneFeatureNom_1122_Type * PlaneFeatureNom_1122In,
    PlaneConstructionMethodType * ConstructedIn);
  ~PlaneFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  PlaneFeatureNom_1122_Type * getPlaneFeatureNom_1122();
  void setPlaneFeatureNom_1122(PlaneFeatureNom_1122_Type * PlaneFeatureNom_1122In);
  PlaneConstructionMethodType * getConstructed();
  void setConstructed(PlaneConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  UnitVectorType * Normal;
  PlaneFeatureNom_1122_Type * PlaneFeatureNom_1122;
  PlaneConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PointDefinedCurveFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  PointDefinedCurveFeatureDefinitionType();
  PointDefinedCurveFeatureDefinitionType(
    AttributesType * AttributesIn);
  PointDefinedCurveFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~PointDefinedCurveFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointDefinedCurveFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  PointDefinedCurveFeatureItemType();
  PointDefinedCurveFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PointDefinedCurveMeasurementDeterminationType * DeterminationModeIn);
  PointDefinedCurveFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PointDefinedCurveMeasurementDeterminationType * DeterminationModeIn);
  ~PointDefinedCurveFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointDefinedCurveMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(PointDefinedCurveMeasurementDeterminationType * DeterminationModeIn);

protected:
  PointDefinedCurveMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class PointDefinedCurveFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  PointDefinedCurveFeatureMeasurementType();
  PointDefinedCurveFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    DefiningPointsMeasurementType * DefiningPointsIn,
    MeasuredPlaneType * PlaneIn,
    MeasuredLinearValueType * FormIn);
  PointDefinedCurveFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    DefiningPointsMeasurementType * DefiningPointsIn,
    MeasuredPlaneType * PlaneIn,
    MeasuredLinearValueType * FormIn);
  ~PointDefinedCurveFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DefiningPointsMeasurementType * getDefiningPoints();
  void setDefiningPoints(DefiningPointsMeasurementType * DefiningPointsIn);
  MeasuredPlaneType * getPlane();
  void setPlane(MeasuredPlaneType * PlaneIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  DefiningPointsMeasurementType * DefiningPoints;
  MeasuredPlaneType * Plane;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class PointDefinedCurveFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  PointDefinedCurveFeatureNominalType();
  PointDefinedCurveFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    DefiningPointsNominalType * DefiningPointsIn,
    PlaneType * PlaneIn,
    PointDefinedCurveConstructionMethodType * ConstructedIn);
  PointDefinedCurveFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    DefiningPointsNominalType * DefiningPointsIn,
    PlaneType * PlaneIn,
    PointDefinedCurveConstructionMethodType * ConstructedIn);
  ~PointDefinedCurveFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DefiningPointsNominalType * getDefiningPoints();
  void setDefiningPoints(DefiningPointsNominalType * DefiningPointsIn);
  PlaneType * getPlane();
  void setPlane(PlaneType * PlaneIn);
  PointDefinedCurveConstructionMethodType * getConstructed();
  void setConstructed(PointDefinedCurveConstructionMethodType * ConstructedIn);

protected:
  DefiningPointsNominalType * DefiningPoints;
  PlaneType * Plane;
  PointDefinedCurveConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PointDefinedSurfaceFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  PointDefinedSurfaceFeatureDefinitionType();
  PointDefinedSurfaceFeatureDefinitionType(
    AttributesType * AttributesIn);
  PointDefinedSurfaceFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~PointDefinedSurfaceFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointDefinedSurfaceFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  PointDefinedSurfaceFeatureItemType();
  PointDefinedSurfaceFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PointDefinedSurfaceMeasurementDeterminationType * DeterminationModeIn);
  PointDefinedSurfaceFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PointDefinedSurfaceMeasurementDeterminationType * DeterminationModeIn);
  ~PointDefinedSurfaceFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointDefinedSurfaceMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(PointDefinedSurfaceMeasurementDeterminationType * DeterminationModeIn);

protected:
  PointDefinedSurfaceMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class PointDefinedSurfaceFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  PointDefinedSurfaceFeatureMeasurementType();
  PointDefinedSurfaceFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    DefiningPointsMeasurementType * DefiningPointsIn,
    MeasuredLinearValueType * FormIn);
  PointDefinedSurfaceFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    DefiningPointsMeasurementType * DefiningPointsIn,
    MeasuredLinearValueType * FormIn);
  ~PointDefinedSurfaceFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DefiningPointsMeasurementType * getDefiningPoints();
  void setDefiningPoints(DefiningPointsMeasurementType * DefiningPointsIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  DefiningPointsMeasurementType * DefiningPoints;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class PointDefinedSurfaceFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  PointDefinedSurfaceFeatureNominalType();
  PointDefinedSurfaceFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    DefiningPointsNominalType * DefiningPointsIn,
    PointDefinedSurfaceConstructionMethodType * ConstructedIn);
  PointDefinedSurfaceFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    DefiningPointsNominalType * DefiningPointsIn,
    PointDefinedSurfaceConstructionMethodType * ConstructedIn);
  ~PointDefinedSurfaceFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DefiningPointsNominalType * getDefiningPoints();
  void setDefiningPoints(DefiningPointsNominalType * DefiningPointsIn);
  PointDefinedSurfaceConstructionMethodType * getConstructed();
  void setConstructed(PointDefinedSurfaceConstructionMethodType * ConstructedIn);

protected:
  DefiningPointsNominalType * DefiningPoints;
  PointDefinedSurfaceConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PointFeatureDefinitionBaseType :
  public ShapeFeatureDefinitionBaseType
{
public:
  PointFeatureDefinitionBaseType();
  PointFeatureDefinitionBaseType(
    AttributesType * AttributesIn);
  PointFeatureDefinitionBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~PointFeatureDefinitionBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointFeatureDefinitionType :
  public PointFeatureDefinitionBaseType
{
public:
  PointFeatureDefinitionType();
  PointFeatureDefinitionType(
    AttributesType * AttributesIn);
  PointFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn);
  ~PointFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointFeatureItemBaseType :
  public ShapeFeatureItemBaseType
{
public:
  PointFeatureItemBaseType();
  PointFeatureItemBaseType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PointFeatureItemBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PointFeatureItemBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointFeatureItemType :
  public PointFeatureItemBaseType
{
public:
  PointFeatureItemType();
  PointFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PointMeasurementDeterminationType * DeterminationModeIn);
  PointFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    PointMeasurementDeterminationType * DeterminationModeIn);
  ~PointFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(PointMeasurementDeterminationType * DeterminationModeIn);

protected:
  PointMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class PointFeatureMeasurementBaseType :
  public ShapeFeatureMeasurementBaseType
{
public:
  PointFeatureMeasurementBaseType();
  PointFeatureMeasurementBaseType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  PointFeatureMeasurementBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn);
  ~PointFeatureMeasurementBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointFeatureMeasurementType :
  public PointFeatureMeasurementBaseType
{
public:
  PointFeatureMeasurementType();
  PointFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn);
  PointFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn);
  ~PointFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * Normal;
};

/* ***************************************************************** */

class PointFeatureNominalBaseType :
  public ShapeFeatureNominalBaseType
{
public:
  PointFeatureNominalBaseType();
  PointFeatureNominalBaseType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointFeatureNom_1125_Type * PointFeatureNom_1125In);
  PointFeatureNominalBaseType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointFeatureNom_1125_Type * PointFeatureNom_1125In);
  ~PointFeatureNominalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointFeatureNom_1125_Type * getPointFeatureNom_1125();
  void setPointFeatureNom_1125(PointFeatureNom_1125_Type * PointFeatureNom_1125In);

protected:
  PointFeatureNom_1125_Type * PointFeatureNom_1125;
};

/* ***************************************************************** */

class PointFeatureNominalType :
  public PointFeatureNominalBaseType
{
public:
  PointFeatureNominalType();
  PointFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointFeatureNom_1125_Type * PointFeatureNom_1125In,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    PointConstructionMethodType * ConstructedIn);
  PointFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointFeatureNom_1125_Type * PointFeatureNom_1125In,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    PointConstructionMethodType * ConstructedIn);
  ~PointFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  PointConstructionMethodType * getConstructed();
  void setConstructed(PointConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  UnitVectorType * Normal;
  PointConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class SphereFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  SphereFeatureDefinitionType();
  SphereFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn);
  SphereFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn);
  ~SphereFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
};

/* ***************************************************************** */

class SphereFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  SphereFeatureItemType();
  SphereFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    SphereMeasurementDeterminationType * DeterminationModeIn);
  SphereFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    SphereMeasurementDeterminationType * DeterminationModeIn);
  ~SphereFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SphereMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(SphereMeasurementDeterminationType * DeterminationModeIn);

protected:
  SphereMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class SphereFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  SphereFeatureMeasurementType();
  SphereFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  SphereFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~SphereFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepMeasurementRange();
  void setLatitudeLongitudeSweepMeasurementRange(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepFull();
  void setLatitudeLongitudeSweepFull(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointType * Location;
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRange;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class SphereFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  SphereFeatureNominalType();
  SphereFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    SphereConstructionMethodType * ConstructedIn);
  SphereFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    SphereConstructionMethodType * ConstructedIn);
  ~SphereFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweep();
  void setLatitudeLongitudeSweep(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  SphereConstructionMethodType * getConstructed();
  void setConstructed(SphereConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweep;
  SphereConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class SphericalSegmentFeatureDefinitionType :
  public SurfaceFeatureDefinitionBaseType
{
public:
  SphericalSegmentFeatureDefinitionType();
  SphericalSegmentFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn);
  SphericalSegmentFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn);
  ~SphericalSegmentFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
};

/* ***************************************************************** */

class SphericalSegmentFeatureItemType :
  public SurfaceFeatureItemBaseType
{
public:
  SphericalSegmentFeatureItemType();
  SphericalSegmentFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    SphericalSegmentMeasurementDeterminationType * DeterminationModeIn);
  SphericalSegmentFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    SphericalSegmentMeasurementDeterminationType * DeterminationModeIn);
  ~SphericalSegmentFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SphericalSegmentMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(SphericalSegmentMeasurementDeterminationType * DeterminationModeIn);

protected:
  SphericalSegmentMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class SphericalSegmentFeatureMeasurementType :
  public SurfaceFeatureMeasurementBaseType
{
public:
  SphericalSegmentFeatureMeasurementType();
  SphericalSegmentFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  SphericalSegmentFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~SphericalSegmentFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepMeasurementRange();
  void setLatitudeLongitudeSweepMeasurementRange(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRangeIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweepFull();
  void setLatitudeLongitudeSweepFull(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointType * Location;
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepMeasurementRange;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class SphericalSegmentFeatureNominalType :
  public SurfaceFeatureNominalBaseType
{
public:
  SphericalSegmentFeatureNominalType();
  SphericalSegmentFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    SphericalSegmentConstructionMethodType * ConstructedIn);
  SphericalSegmentFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointType * LocationIn,
    OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn,
    SphericalSegmentConstructionMethodType * ConstructedIn);
  ~SphericalSegmentFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  OrientedLatitudeLongitudeSweepType * getLatitudeLongitudeSweep();
  void setLatitudeLongitudeSweep(OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweepIn);
  SphericalSegmentConstructionMethodType * getConstructed();
  void setConstructed(SphericalSegmentConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  OrientedLatitudeLongitudeSweepType * LatitudeLongitudeSweep;
  SphericalSegmentConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class CircleFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  CircleFeatureDefinitionType();
  CircleFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn);
  CircleFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * DiameterIn);
  ~CircleFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Diameter;
};

/* ***************************************************************** */

class CircleFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  CircleFeatureItemType();
  CircleFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CircleMeasurementDeterminationType * DeterminationModeIn);
  CircleFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CircleMeasurementDeterminationType * DeterminationModeIn);
  ~CircleFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CircleMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(CircleMeasurementDeterminationType * DeterminationModeIn);

protected:
  CircleMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class CircleFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  CircleFeatureMeasurementType();
  CircleFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    MeasuredLinearValueType * FormIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn);
  CircleFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * DiameterIn,
    MeasuredLinearValueType * DiameterMinIn,
    MeasuredLinearValueType * DiameterMaxIn,
    MeasuredLinearValueType * FormIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn);
  ~CircleFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  MeasuredLinearValueType * getDiameter();
  void setDiameter(MeasuredLinearValueType * DiameterIn);
  MeasuredLinearValueType * getDiameterMin();
  void setDiameterMin(MeasuredLinearValueType * DiameterMinIn);
  MeasuredLinearValueType * getDiameterMax();
  void setDiameterMax(MeasuredLinearValueType * DiameterMaxIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * Normal;
  MeasuredLinearValueType * Diameter;
  MeasuredLinearValueType * DiameterMin;
  MeasuredLinearValueType * DiameterMax;
  MeasuredLinearValueType * Form;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
};

/* ***************************************************************** */

class CircleFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  CircleFeatureNominalType();
  CircleFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    SweepType * SweepIn,
    CircleConstructionMethodType * ConstructedIn);
  CircleFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    SweepType * SweepIn,
    CircleConstructionMethodType * ConstructedIn);
  ~CircleFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  CircleConstructionMethodType * getConstructed();
  void setConstructed(CircleConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  UnitVectorType * Normal;
  SweepType * Sweep;
  CircleConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class CircularArcFeatureDefinitionType :
  public CurveFeatureDefinitionBaseType
{
public:
  CircularArcFeatureDefinitionType();
  CircularArcFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * RadiusIn);
  CircularArcFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn,
    LinearValueType * RadiusIn);
  ~CircularArcFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);
  LinearValueType * getRadius();
  void setRadius(LinearValueType * RadiusIn);

protected:
  InternalExternalEnumType * InternalExternal;
  LinearValueType * Radius;
};

/* ***************************************************************** */

class CircularArcFeatureItemType :
  public CurveFeatureItemBaseType
{
public:
  CircularArcFeatureItemType();
  CircularArcFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CircularArcMeasurementDeterminationType * DeterminationModeIn);
  CircularArcFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    CircularArcMeasurementDeterminationType * DeterminationModeIn);
  ~CircularArcFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CircularArcMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(CircularArcMeasurementDeterminationType * DeterminationModeIn);

protected:
  CircularArcMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class CircularArcFeatureMeasurementType :
  public CurveFeatureMeasurementBaseType
{
public:
  CircularArcFeatureMeasurementType();
  CircularArcFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * RadiusIn,
    MeasuredLinearValueType * RadiusMinIn,
    MeasuredLinearValueType * RadiusMaxIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  CircularArcFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredLinearValueType * RadiusIn,
    MeasuredLinearValueType * RadiusMinIn,
    MeasuredLinearValueType * RadiusMaxIn,
    SweepType * SweepMeasurementRangeIn,
    SweepType * SweepFullIn,
    MeasuredLinearValueType * FormIn);
  ~CircularArcFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  MeasuredLinearValueType * getRadius();
  void setRadius(MeasuredLinearValueType * RadiusIn);
  MeasuredLinearValueType * getRadiusMin();
  void setRadiusMin(MeasuredLinearValueType * RadiusMinIn);
  MeasuredLinearValueType * getRadiusMax();
  void setRadiusMax(MeasuredLinearValueType * RadiusMaxIn);
  SweepType * getSweepMeasurementRange();
  void setSweepMeasurementRange(SweepType * SweepMeasurementRangeIn);
  SweepType * getSweepFull();
  void setSweepFull(SweepType * SweepFullIn);
  MeasuredLinearValueType * getForm();
  void setForm(MeasuredLinearValueType * FormIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * Normal;
  MeasuredLinearValueType * Radius;
  MeasuredLinearValueType * RadiusMin;
  MeasuredLinearValueType * RadiusMax;
  SweepType * SweepMeasurementRange;
  SweepType * SweepFull;
  MeasuredLinearValueType * Form;
};

/* ***************************************************************** */

class CircularArcFeatureNominalType :
  public CurveFeatureNominalBaseType
{
public:
  CircularArcFeatureNominalType();
  CircularArcFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointType * LocationIn,
    SweepType * SweepIn,
    UnitVectorType * NormalIn,
    CircularArcConstructionMethodType * ConstructedIn);
  CircularArcFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceFullType * SurfaceFeatureNominalIdIn,
    PointType * LocationIn,
    SweepType * SweepIn,
    UnitVectorType * NormalIn,
    CircularArcConstructionMethodType * ConstructedIn);
  ~CircularArcFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  SweepType * getSweep();
  void setSweep(SweepType * SweepIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  CircularArcConstructionMethodType * getConstructed();
  void setConstructed(CircularArcConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  SweepType * Sweep;
  UnitVectorType * Normal;
  CircularArcConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class EdgePointFeatureDefinitionType :
  public PointFeatureDefinitionBaseType
{
public:
  EdgePointFeatureDefinitionType();
  EdgePointFeatureDefinitionType(
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn);
  EdgePointFeatureDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    InternalExternalEnumType * InternalExternalIn);
  ~EdgePointFeatureDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);

protected:
  InternalExternalEnumType * InternalExternal;
};

/* ***************************************************************** */

class EdgePointFeatureItemType :
  public PointFeatureItemBaseType
{
public:
  EdgePointFeatureItemType();
  EdgePointFeatureItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    EdgePointMeasurementDeterminationType * DeterminationModeIn);
  EdgePointFeatureItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn,
    EdgePointMeasurementDeterminationType * DeterminationModeIn);
  ~EdgePointFeatureItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  EdgePointMeasurementDeterminationType * getDeterminationMode();
  void setDeterminationMode(EdgePointMeasurementDeterminationType * DeterminationModeIn);

protected:
  EdgePointMeasurementDeterminationType * DeterminationMode;
};

/* ***************************************************************** */

class EdgePointFeatureMeasurementType :
  public PointFeatureMeasurementBaseType
{
public:
  EdgePointFeatureMeasurementType();
  EdgePointFeatureMeasurementType(
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredUnitVectorType * AdjacentNormalIn);
  EdgePointFeatureMeasurementType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceType * FeatureItemIdIn,
    XmlToken * FeatureNameIn,
    XmlDateTime * TimeStampIn,
    QIFReferenceFullType * ActualComponentIdIn,
    QIFReferenceFullType * ManufacturingProcessIdIn,
    ArrayReferenceFullType * MeasurementDeviceIdsIn,
    QIFReferenceType * ActualTransformIdIn,
    ArrayReferenceFullType * NotedEventIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    QIFReferenceType * ProxyMeasurementIdIn,
    MeasuredPointType * LocationIn,
    MeasuredUnitVectorType * NormalIn,
    MeasuredUnitVectorType * AdjacentNormalIn);
  ~EdgePointFeatureMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MeasuredPointType * getLocation();
  void setLocation(MeasuredPointType * LocationIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);
  MeasuredUnitVectorType * getAdjacentNormal();
  void setAdjacentNormal(MeasuredUnitVectorType * AdjacentNormalIn);

protected:
  MeasuredPointType * Location;
  MeasuredUnitVectorType * Normal;
  MeasuredUnitVectorType * AdjacentNormal;
};

/* ***************************************************************** */

class EdgePointFeatureNominalType :
  public PointFeatureNominalBaseType
{
public:
  EdgePointFeatureNominalType();
  EdgePointFeatureNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointFeatureNom_1125_Type * PointFeatureNom_1125In,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    UnitVectorType * AdjacentNormalIn,
    EdgePointConstructionMethodType * ConstructedIn);
  EdgePointFeatureNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    PointFeatureNom_1125_Type * PointFeatureNom_1125In,
    PointType * LocationIn,
    UnitVectorType * NormalIn,
    UnitVectorType * AdjacentNormalIn,
    EdgePointConstructionMethodType * ConstructedIn);
  ~EdgePointFeatureNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getLocation();
  void setLocation(PointType * LocationIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  UnitVectorType * getAdjacentNormal();
  void setAdjacentNormal(UnitVectorType * AdjacentNormalIn);
  EdgePointConstructionMethodType * getConstructed();
  void setConstructed(EdgePointConstructionMethodType * ConstructedIn);

protected:
  PointType * Location;
  UnitVectorType * Normal;
  UnitVectorType * AdjacentNormal;
  EdgePointConstructionMethodType * Constructed;
};

/* ***************************************************************** */

class PatternFeatureCircleDefinitionType :
  public PatternFeatureDefinitionBaseType
{
public:
  PatternFeatureCircleDefinitionType();
  PatternFeatureCircleDefinitionType(
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    LinearValueType * DiameterIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesIn);
  PatternFeatureCircleDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    LinearValueType * DiameterIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesIn);
  ~PatternFeatureCircleDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  UnitVectorType * getFeatureDirection();
  void setFeatureDirection(UnitVectorType * FeatureDirectionIn);
  NaturalType * getNumberOfFeatures();
  void setNumberOfFeatures(NaturalType * NumberOfFeaturesIn);

protected:
  LinearValueType * Diameter;
  UnitVectorType * FeatureDirection;
  NaturalType * NumberOfFeatures;
};

/* ***************************************************************** */

class PatternFeatureCircleItemType :
  public PatternFeatureItemBaseType
{
public:
  PatternFeatureCircleItemType();
  PatternFeatureCircleItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PatternFeatureCircleItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PatternFeatureCircleItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PatternFeatureCircleNominalType :
  public PatternFeatureNominalBaseType
{
public:
  PatternFeatureCircleNominalType();
  PatternFeatureCircleNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    UnitVectorType * NormalIn,
    PointType * CenterIn,
    QIFReferenceType * FirstFeatureLocationIn);
  PatternFeatureCircleNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    UnitVectorType * NormalIn,
    PointType * CenterIn,
    QIFReferenceType * FirstFeatureLocationIn);
  ~PatternFeatureCircleNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  PointType * getCenter();
  void setCenter(PointType * CenterIn);
  QIFReferenceType * getFirstFeatureLocation();
  void setFirstFeatureLocation(QIFReferenceType * FirstFeatureLocationIn);

protected:
  UnitVectorType * Normal;
  PointType * Center;
  QIFReferenceType * FirstFeatureLocation;
};

/* ***************************************************************** */

class PatternFeatureCircularArcDefinitionType :
  public PatternFeatureDefinitionBaseType
{
public:
  PatternFeatureCircularArcDefinitionType();
  PatternFeatureCircularArcDefinitionType(
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    LinearValueType * ArcRadiusIn,
    AngularValueType * IncrementalArcIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesIn);
  PatternFeatureCircularArcDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlBoolean * IsProfileGroupIn,
    XmlBoolean * IsRunoutGroupIn,
    GroupFeatureDef_1105_Type * GroupFeatureDef_1105In,
    LinearValueType * ArcRadiusIn,
    AngularValueType * IncrementalArcIn,
    UnitVectorType * FeatureDirectionIn,
    NaturalType * NumberOfFeaturesIn);
  ~PatternFeatureCircularArcDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getArcRadius();
  void setArcRadius(LinearValueType * ArcRadiusIn);
  AngularValueType * getIncrementalArc();
  void setIncrementalArc(AngularValueType * IncrementalArcIn);
  UnitVectorType * getFeatureDirection();
  void setFeatureDirection(UnitVectorType * FeatureDirectionIn);
  NaturalType * getNumberOfFeatures();
  void setNumberOfFeatures(NaturalType * NumberOfFeaturesIn);

protected:
  LinearValueType * ArcRadius;
  AngularValueType * IncrementalArc;
  UnitVectorType * FeatureDirection;
  NaturalType * NumberOfFeatures;
};

/* ***************************************************************** */

class PatternFeatureCircularArcItemType :
  public PatternFeatureItemBaseType
{
public:
  PatternFeatureCircularArcItemType();
  PatternFeatureCircularArcItemType(
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  PatternFeatureCircularArcItemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceType * ParentFeatureItemIdIn,
    XmlToken * FeatureNameIn,
    QPIdType * UUIDIn,
    ArrayReferenceType * NotableEventIdsIn,
    QIFReferenceFullType * CoordinateSystemIdIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    VirtualMeasurementType * VirtualMeasurementIn);
  ~PatternFeatureCircularArcItemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PatternFeatureCircularArcNominalType :
  public PatternFeatureNominalBaseType
{
public:
  PatternFeatureCircularArcNominalType();
  PatternFeatureCircularArcNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    UnitVectorType * NormalIn,
    PointType * CenterIn,
    QIFReferenceType * FirstFeatureLocationIn);
  PatternFeatureCircularArcNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    UnitVectorType * NormalIn,
    PointType * CenterIn,
    QIFReferenceType * FirstFeatureLocationIn);
  ~PatternFeatureCircularArcNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);
  PointType * getCenter();
  void setCenter(PointType * CenterIn);
  QIFReferenceType * getFirstFeatureLocation();
  void setFirstFeatureLocation(QIFReferenceType * FirstFeatureLocationIn);

protected:
  UnitVectorType * Normal;
  PointType * Center;
  QIFReferenceType * FirstFeatureLocation;
};

/* ***************************************************************** */

class PatternFeatureLinearNominalType :
  public PatternFeatureNominalBaseType
{
public:
  PatternFeatureLinearNominalType();
  PatternFeatureLinearNominalType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    QIFReferenceType * FirstFeatureLocationIn);
  PatternFeatureLinearNominalType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    QPIdType * UUIDIn,
    QIFReferenceType * FeatureDefinitionIdIn,
    QIFReferenceType * ParentFeatureNominalIdIn,
    ArrayReferenceFullType * EntityInternalIdsIn,
    ArrayReferenceFullType * EntityExternalIdsIn,
    PointListType * PointListIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    ArrayReferenceFullType * FeatureNominalIdsIn,
    QIFReferenceType * FirstFeatureLocationIn);
  ~PatternFeatureLinearNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getFirstFeatureLocation();
  void setFirstFeatureLocation(QIFReferenceType * FirstFeatureLocationIn);

protected:
  QIFReferenceType * FirstFeatureLocation;
};

/* ***************************************************************** */

#endif // FEATURES_HH
