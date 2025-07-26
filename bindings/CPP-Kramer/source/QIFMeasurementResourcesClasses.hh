/* ***************************************************************** */

#ifndef QIFMEASUREMENTRESOURCES_HH
#define QIFMEASUREMENTRESOURCES_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "IntermediatesPMIClasses.hh"
#include "TopologyClasses.hh"
#include "GeometryClasses.hh"

/* ***************************************************************** */

class AACMMAccuraciesType;
class AACMMAccuracyType;
class AACMMAccuracyTypeLisd;
class AACMMB89TestType;
class AACMMType;
class ABCResolutionType;
class AccuracySourceEnumType;
class AccuracySourceType;
class AccuracySourceTypeChoicePair;
class AngleFunctionDiscreteType;
class AngularErrorType;
class AutocollimatorType;
class CMMAccuracyTestBaseType;
class CMMAxisDirectionsBaseType;
class CMMDirectionEnumType;
class CMMSpeedsBaseType;
class CMMType;
class CalibrationMasterType;
class CalibrationType;
class CalibrationTypeLisd;
class CalibrationsType;
class CaliperDialType;
class CaliperDigitalType;
class CaliperType;
class CapacitiveSensorType;
class CarriageType;
class CarriageTypeLisd;
class CarriagesType;
class CartesianCMMAccuraciesType;
class CartesianCMMAccuracyType;
class CartesianCMMAccuracyTypeLisd;
class CartesianCMMAxisDirectionsType;
class CartesianCMMB89TestType;
class CartesianCMMGeometryEnumType;
class CartesianCMMGeometryType;
class CartesianCMMGeometryTypeChoicePair;
class CartesianCMMSpeedsType;
class CartesianCMMType;
class CartesianMeasurementDeviceScalesType;
class CartesianResolutionType;
class CartesianResolutionTypeChoicePair;
class CartesianWorkingVolumeType;
class ChargeCoupledDeviceCameraSensorType;
class ClosedShellSetType;
class ClosedShellSetWorkingVolumeType;
class CombinedSphericalResolutionType;
class CombinedUserDefinedResolutionType;
class ComplexTactileProbeSensorType;
class ComputedTomographyType;
class ConfocalChromaticSensorType;
class CylindricalWorkingVolumeType;
class DetachableSensorBaseType;
class DetachableSensorBaseTypeLisd;
class DetachableSensorsType;
class DifferentialVariableReluctanceTransducerSensorType;
class DrawWireSensorType;
class EddyCurrentSensorType;
class EffectiveCartesianWorkingVolumeType;
class EffectiveClosedShellSetWorkingVolumeType;
class EffectiveCylindricalWorkingVolumeType;
class EffectiveDiameterPerformanceTestType;
class EffectiveSphericalWorkingVolumeType;
class EffectiveUserDefinedWorkingVolumeType;
class EffectiveWorkingVolumeBaseType;
class EnvironmentalRangeType;
class FPSTestType;
class FixtureType;
class FixtureTypeLisd;
class FixturesType;
class FunctionDiscreteType;
class GageDeviceType;
class ISO10360TestType;
class ISO10360TestTypeChoicePair;
class LaserRadarType;
class LaserTrackerType;
class LaserTriangulationSensorType;
class LaserType;
class LengthFunctionDiscreteType;
class LesserErrorType;
class LightPenCMMType;
class LinearAxisType;
class LinearErrorType;
class LinearOrRotaryAxisType;
class LinearResolutionType;
class LinearVariableDifferentialTransformerEnumType;
class LinearVariableDifferentialTransformerSensorType;
class LocatedTipType;
class LocatedTipTypeLisd;
class LocatedTipsType;
class MagnetoInductiveSensorType;
class ManualMeasurementDeviceType;
class MeasurementDeviceAccuracyBaseType;
class MeasurementDeviceScaleType;
class MeasurementDeviceScalesBaseType;
class MeasurementDeviceType;
class MeasurementDeviceTypeLisd;
class MeasurementDevicesType;
class MeasurementResourceBaseType;
class MeasurementResourcesType;
class MeasurementRoomType;
class MeasurementRoomTypeLisd;
class MeasurementRoomsType;
class MicrometerAnalogType;
class MicrometerDigitalType;
class MicrometerType;
class MicroscopeType;
class MultipleCarriageCartesianCMMType;
class NumericalLengthAccuracyType;
class OpticalComparatorType;
class ParallelLinkCMMSpeedsType;
class ParallelLinkCMMType;
class PointAccuracyTestType;
class ProbeTipType;
class QualificationType;
class QualificationTypeLisd;
class QualificationsType;
class RAPZResolutionType;
class ResolutionBaseType;
class RotaryAxisType;
class RotaryTableType;
class ScaleReferenceEnumType;
class SensorType;
class SimpleTactileProbeSensorType;
class SineBarType;
class SinglePointArticulationPerformanceTestType;
class SphericalResolutionType;
class SphericalResolutionTypeChoicePair;
class SphericalWorkingVolumeType;
class StiffnessType;
class StructuredLightSensorType;
class TableErrorsType;
class TactileProbeSensorBaseType;
class TargetMirrorEnumType;
class TemperatureCompensationEnumType;
class TemperatureCompensationType;
class TemperatureCompensationTypeChoicePair;
class TemperatureType;
class TemperatureTypeLisd;
class TemperaturesType;
class TheodoliteType;
class TipEndGeometryEnumType;
class TipEndGeometryType;
class TipEndGeometryTypeChoicePair;
class ToolBaseType;
class ToolBaseTypeLisd;
class ToolWithCCDCameraSensorType;
class ToolWithCapacitiveSensorType;
class ToolWithComplexTactileProbeSensorType;
class ToolWithConfocalChromaticSensorType;
class ToolWithDVRTSensorType;
class ToolWithDetachableSensorsType;
class ToolWithDrawWireSensorType;
class ToolWithEddyCurrentSensorType;
class ToolWithIntegratedSensorBaseType;
class ToolWithLVDTSensorType;
class ToolWithLaserTriangulationSensorType;
class ToolWithMagnetoInductiveSensorType;
class ToolWithSimpleTactileProbeSensorType;
class ToolWithStructuredLightSensorType;
class ToolWithUltrasonicSensorType;
class ToolsType;
class TwentyLinearValuesType;
class TypeOfScaleEnumType;
class TypeOfScaleType;
class TypeOfScaleTypeChoicePair;
class UltrasonicSensorType;
class UniversalDeviceType;
class UniversalLengthMeasuringType;
class UserAxisBaseType;
class UserDefinedAxisType;
class UserDefinedResolutionType;
class UserDefinedResolutionTypeChoicePair;
class UserDefinedWorkingVolumeType;
class VolumetricPerformanceTestType;
class WorkingVolumeBaseType;
class XYZLinearSpecificationType;
class XYZResolutionType;
class CartesianResolu_1195_Type;
class MeasurementReso_1196_Type;
class MeasurementReso_1196_TypeChoicePair;
class SphericalResolu_1197_Type;
class UserDefinedReso_1198_Type;

/* ***************************************************************** */
/* ***************************************************************** */

class AACMMAccuraciesType :
  public XmlTypeBase
{
public:
  AACMMAccuraciesType();
  AACMMAccuraciesType(
    AACMMAccuracyTypeLisd * AACMMAccuracyIn);
  AACMMAccuraciesType(
    NaturalType * nIn,
    AACMMAccuracyTypeLisd * AACMMAccuracyIn);
  ~AACMMAccuraciesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AACMMAccuracyTypeLisd * getAACMMAccuracy();
  void setAACMMAccuracy(AACMMAccuracyTypeLisd *);

protected:
  NaturalType * n;
  AACMMAccuracyTypeLisd * AACMMAccuracy;
};

/* ***************************************************************** */

class ABCResolutionType :
  public XmlTypeBase
{
public:
  ABCResolutionType();
  ABCResolutionType(
    LinearOrRotaryAxisType * AAxisResolutionIn,
    LinearOrRotaryAxisType * BAxisResolutionIn,
    LinearOrRotaryAxisType * CAxisResolutionIn);
  ~ABCResolutionType();
  void printSelf(FILE * outFile);

  LinearOrRotaryAxisType * getAAxisResolution();
  void setAAxisResolution(LinearOrRotaryAxisType * AAxisResolutionIn);
  LinearOrRotaryAxisType * getBAxisResolution();
  void setBAxisResolution(LinearOrRotaryAxisType * BAxisResolutionIn);
  LinearOrRotaryAxisType * getCAxisResolution();
  void setCAxisResolution(LinearOrRotaryAxisType * CAxisResolutionIn);

protected:
  LinearOrRotaryAxisType * AAxisResolution;
  LinearOrRotaryAxisType * BAxisResolution;
  LinearOrRotaryAxisType * CAxisResolution;
};

/* ***************************************************************** */

class AccuracySourceEnumType :
  public XmlNMTOKEN
{
public:
  AccuracySourceEnumType();
  AccuracySourceEnumType(
    const char * valIn);
  ~AccuracySourceEnumType();
  bool AccuracySourceEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class AccuracySourceType :
  public XmlTypeBase
{
public:
  AccuracySourceType();
  AccuracySourceType(
    AccuracySourceTypeChoicePair * AccuracySourceTypePairIn);
  ~AccuracySourceType();
  void printSelf(FILE * outFile);

  AccuracySourceTypeChoicePair * getAccuracySourceTypePair();
  void setAccuracySourceTypePair(AccuracySourceTypeChoicePair * AccuracySourceTypePairIn);

protected:
  AccuracySourceTypeChoicePair * AccuracySourceTypePair;
};

/* ***************************************************************** */

union AccuracySourceTypeVal
{
  AccuracySourceEnumType * AccuracySourceEnum;
  XmlString * OtherAccuracySource;
};

/* ***************************************************************** */

class AccuracySourceTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AccuracySourceEnumE,
    OtherAccuracySourceE };
  AccuracySourceTypeChoicePair();
  AccuracySourceTypeChoicePair(
    whichOne AccuracySourceTypeTypeIn,
    AccuracySourceTypeVal * AccuracySourceTypeValueIn);
  ~AccuracySourceTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AccuracySourceTypeType;
  AccuracySourceTypeVal * AccuracySourceTypeValue;
};

/* ***************************************************************** */

class AngularErrorType :
  public XmlTypeBase
{
public:
  AngularErrorType();
  AngularErrorType(
    AngularValueType * BaseErrorIn,
    XmlDecimal * ErrorRateIn);
  ~AngularErrorType();
  void printSelf(FILE * outFile);

  AngularValueType * getBaseError();
  void setBaseError(AngularValueType * BaseErrorIn);
  XmlDecimal * getErrorRate();
  void setErrorRate(XmlDecimal * ErrorRateIn);

protected:
  AngularValueType * BaseError;
  XmlDecimal * ErrorRate;
};

/* ***************************************************************** */

class CMMAccuracyTestBaseType :
  public XmlTypeBase
{
public:
  CMMAccuracyTestBaseType();
  virtual ~CMMAccuracyTestBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CMMAxisDirectionsBaseType :
  public XmlTypeBase
{
public:
  CMMAxisDirectionsBaseType();
  virtual ~CMMAxisDirectionsBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CMMDirectionEnumType :
  public XmlNMTOKEN
{
public:
  CMMDirectionEnumType();
  CMMDirectionEnumType(
    const char * valIn);
  ~CMMDirectionEnumType();
  bool CMMDirectionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class CMMSpeedsBaseType :
  public XmlTypeBase
{
public:
  CMMSpeedsBaseType();
  virtual ~CMMSpeedsBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CalibrationMasterType :
  public XmlTypeBase
{
public:
  CalibrationMasterType();
  CalibrationMasterType(
    XmlString * SerialNumberIn,
    XmlString * DescriptionIn);
  ~CalibrationMasterType();
  void printSelf(FILE * outFile);

  XmlString * getSerialNumber();
  void setSerialNumber(XmlString * SerialNumberIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  XmlString * SerialNumber;
  XmlString * Description;
};

/* ***************************************************************** */

class CalibrationType :
  public XmlTypeBase
{
public:
  CalibrationType();
  CalibrationType(
    CalibrationMasterType * CalibrationMasterIn,
    TemperaturesType * TemperaturesIn,
    XmlDateTime * CalibrationDateIn,
    XmlDateTime * ExpirationDateIn);
  ~CalibrationType();
  void printSelf(FILE * outFile);

  CalibrationMasterType * getCalibrationMaster();
  void setCalibrationMaster(CalibrationMasterType * CalibrationMasterIn);
  TemperaturesType * getTemperatures();
  void setTemperatures(TemperaturesType * TemperaturesIn);
  XmlDateTime * getCalibrationDate();
  void setCalibrationDate(XmlDateTime * CalibrationDateIn);
  XmlDateTime * getExpirationDate();
  void setExpirationDate(XmlDateTime * ExpirationDateIn);

protected:
  CalibrationMasterType * CalibrationMaster;
  TemperaturesType * Temperatures;
  XmlDateTime * CalibrationDate;
  XmlDateTime * ExpirationDate;
};

/* ***************************************************************** */

class CalibrationTypeLisd :
  public std::list<CalibrationType *>,
  public XmlSchemaInstanceBase
{
public:
  CalibrationTypeLisd();
  CalibrationTypeLisd(
    CalibrationType * aCalibrationType);
  ~CalibrationTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CalibrationsType :
  public XmlTypeBase
{
public:
  CalibrationsType();
  CalibrationsType(
    CalibrationTypeLisd * CalibrationIn);
  CalibrationsType(
    NaturalType * nIn,
    CalibrationTypeLisd * CalibrationIn);
  ~CalibrationsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CalibrationTypeLisd * getCalibration();
  void setCalibration(CalibrationTypeLisd *);

protected:
  NaturalType * n;
  CalibrationTypeLisd * Calibration;
};

/* ***************************************************************** */

class CarriagesType :
  public XmlTypeBase
{
public:
  CarriagesType();
  CarriagesType(
    CarriageTypeLisd * CarriageIn);
  CarriagesType(
    NaturalType * nIn,
    CarriageTypeLisd * CarriageIn);
  ~CarriagesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CarriageTypeLisd * getCarriage();
  void setCarriage(CarriageTypeLisd *);

protected:
  NaturalType * n;
  CarriageTypeLisd * Carriage;
};

/* ***************************************************************** */

class CartesianCMMAccuraciesType :
  public XmlTypeBase
{
public:
  CartesianCMMAccuraciesType();
  CartesianCMMAccuraciesType(
    CartesianCMMAccuracyTypeLisd * CartesianCMMAccuracyIn);
  CartesianCMMAccuraciesType(
    NaturalType * nIn,
    CartesianCMMAccuracyTypeLisd * CartesianCMMAccuracyIn);
  ~CartesianCMMAccuraciesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CartesianCMMAccuracyTypeLisd * getCartesianCMMAccuracy();
  void setCartesianCMMAccuracy(CartesianCMMAccuracyTypeLisd *);

protected:
  NaturalType * n;
  CartesianCMMAccuracyTypeLisd * CartesianCMMAccuracy;
};

/* ***************************************************************** */

class CartesianCMMAxisDirectionsType :
  public CMMAxisDirectionsBaseType
{
public:
  CartesianCMMAxisDirectionsType();
  CartesianCMMAxisDirectionsType(
    CMMDirectionEnumType * XAxisDirectionIn,
    CMMDirectionEnumType * YAxisDirectionIn,
    CMMDirectionEnumType * ZAxisDirectionIn);
  ~CartesianCMMAxisDirectionsType();
  void printSelf(FILE * outFile);

  CMMDirectionEnumType * getXAxisDirection();
  void setXAxisDirection(CMMDirectionEnumType * XAxisDirectionIn);
  CMMDirectionEnumType * getYAxisDirection();
  void setYAxisDirection(CMMDirectionEnumType * YAxisDirectionIn);
  CMMDirectionEnumType * getZAxisDirection();
  void setZAxisDirection(CMMDirectionEnumType * ZAxisDirectionIn);

protected:
  CMMDirectionEnumType * XAxisDirection;
  CMMDirectionEnumType * YAxisDirection;
  CMMDirectionEnumType * ZAxisDirection;
};

/* ***************************************************************** */

class CartesianCMMB89TestType :
  public CMMAccuracyTestBaseType
{
public:
  CartesianCMMB89TestType();
  CartesianCMMB89TestType(
    LinearValueType * XLinearAccuracyIn,
    LinearValueType * YLinearAccuracyIn,
    LinearValueType * ZLinearAccuracyIn,
    LinearValueType * OffsetVolumetricPerformanceIn,
    LinearValueType * VolumetricPerformanceIn,
    LinearValueType * RepeatabilityIn);
  ~CartesianCMMB89TestType();
  void printSelf(FILE * outFile);

  LinearValueType * getXLinearAccuracy();
  void setXLinearAccuracy(LinearValueType * XLinearAccuracyIn);
  LinearValueType * getYLinearAccuracy();
  void setYLinearAccuracy(LinearValueType * YLinearAccuracyIn);
  LinearValueType * getZLinearAccuracy();
  void setZLinearAccuracy(LinearValueType * ZLinearAccuracyIn);
  LinearValueType * getOffsetVolumetricPerformance();
  void setOffsetVolumetricPerformance(LinearValueType * OffsetVolumetricPerformanceIn);
  LinearValueType * getVolumetricPerformance();
  void setVolumetricPerformance(LinearValueType * VolumetricPerformanceIn);
  LinearValueType * getRepeatability();
  void setRepeatability(LinearValueType * RepeatabilityIn);

protected:
  LinearValueType * XLinearAccuracy;
  LinearValueType * YLinearAccuracy;
  LinearValueType * ZLinearAccuracy;
  LinearValueType * OffsetVolumetricPerformance;
  LinearValueType * VolumetricPerformance;
  LinearValueType * Repeatability;
};

/* ***************************************************************** */

class CartesianCMMGeometryEnumType :
  public XmlNMTOKEN
{
public:
  CartesianCMMGeometryEnumType();
  CartesianCMMGeometryEnumType(
    const char * valIn);
  ~CartesianCMMGeometryEnumType();
  bool CartesianCMMGeometryEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class CartesianCMMGeometryType :
  public XmlTypeBase
{
public:
  CartesianCMMGeometryType();
  CartesianCMMGeometryType(
    CartesianCMMGeometryTypeChoicePair * CartesianCMMGeometryTypePairIn);
  ~CartesianCMMGeometryType();
  void printSelf(FILE * outFile);

  CartesianCMMGeometryTypeChoicePair * getCartesianCMMGeometryTypePair();
  void setCartesianCMMGeometryTypePair(CartesianCMMGeometryTypeChoicePair * CartesianCMMGeometryTypePairIn);

protected:
  CartesianCMMGeometryTypeChoicePair * CartesianCMMGeometryTypePair;
};

/* ***************************************************************** */

union CartesianCMMGeometryTypeVal
{
  CartesianCMMGeometryEnumType * CartesianCMMGeometryEnum;
  XmlString * OtherCartesianCMMGeometry;
};

/* ***************************************************************** */

class CartesianCMMGeometryTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CartesianCMMGeometryEnumE,
    OtherCartesianCMMGeometryE };
  CartesianCMMGeometryTypeChoicePair();
  CartesianCMMGeometryTypeChoicePair(
    whichOne CartesianCMMGeometryTypeTypeIn,
    CartesianCMMGeometryTypeVal * CartesianCMMGeometryTypeValueIn);
  ~CartesianCMMGeometryTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CartesianCMMGeometryTypeType;
  CartesianCMMGeometryTypeVal * CartesianCMMGeometryTypeValue;
};

/* ***************************************************************** */

class CartesianCMMSpeedsType :
  public CMMSpeedsBaseType
{
public:
  CartesianCMMSpeedsType();
  CartesianCMMSpeedsType(
    SpeedValueType * MaxXTraverseSpeedIn,
    SpeedValueType * MaxYTraverseSpeedIn,
    SpeedValueType * MaxZTraverseSpeedIn,
    SpeedValueType * MaxXProbingSpeedIn,
    SpeedValueType * MaxYProbingSpeedIn,
    SpeedValueType * MaxZProbingSpeedIn);
  ~CartesianCMMSpeedsType();
  void printSelf(FILE * outFile);

  SpeedValueType * getMaxXTraverseSpeed();
  void setMaxXTraverseSpeed(SpeedValueType * MaxXTraverseSpeedIn);
  SpeedValueType * getMaxYTraverseSpeed();
  void setMaxYTraverseSpeed(SpeedValueType * MaxYTraverseSpeedIn);
  SpeedValueType * getMaxZTraverseSpeed();
  void setMaxZTraverseSpeed(SpeedValueType * MaxZTraverseSpeedIn);
  SpeedValueType * getMaxXProbingSpeed();
  void setMaxXProbingSpeed(SpeedValueType * MaxXProbingSpeedIn);
  SpeedValueType * getMaxYProbingSpeed();
  void setMaxYProbingSpeed(SpeedValueType * MaxYProbingSpeedIn);
  SpeedValueType * getMaxZProbingSpeed();
  void setMaxZProbingSpeed(SpeedValueType * MaxZProbingSpeedIn);

protected:
  SpeedValueType * MaxXTraverseSpeed;
  SpeedValueType * MaxYTraverseSpeed;
  SpeedValueType * MaxZTraverseSpeed;
  SpeedValueType * MaxXProbingSpeed;
  SpeedValueType * MaxYProbingSpeed;
  SpeedValueType * MaxZProbingSpeed;
};

/* ***************************************************************** */

class ClosedShellSetType :
  public XmlTypeBase
{
public:
  ClosedShellSetType();
  ClosedShellSetType(
    PointSetType * PointSetIn,
    Curve12SetType * Curve12SetIn,
    Curve13SetType * Curve13SetIn,
    SurfaceSetType * SurfaceSetIn,
    CurveMeshSetType * CurveMeshSetIn,
    SurfaceMeshSetType * SurfaceMeshSetIn,
    VertexSetType * VertexSetIn,
    EdgeSetType * EdgeSetIn,
    LoopSetType * LoopSetIn,
    FaceSetType * FaceSetIn,
    ShellSetType * ShellSetIn);
  ~ClosedShellSetType();
  void printSelf(FILE * outFile);

  PointSetType * getPointSet();
  void setPointSet(PointSetType * PointSetIn);
  Curve12SetType * getCurve12Set();
  void setCurve12Set(Curve12SetType * Curve12SetIn);
  Curve13SetType * getCurve13Set();
  void setCurve13Set(Curve13SetType * Curve13SetIn);
  SurfaceSetType * getSurfaceSet();
  void setSurfaceSet(SurfaceSetType * SurfaceSetIn);
  CurveMeshSetType * getCurveMeshSet();
  void setCurveMeshSet(CurveMeshSetType * CurveMeshSetIn);
  SurfaceMeshSetType * getSurfaceMeshSet();
  void setSurfaceMeshSet(SurfaceMeshSetType * SurfaceMeshSetIn);
  VertexSetType * getVertexSet();
  void setVertexSet(VertexSetType * VertexSetIn);
  EdgeSetType * getEdgeSet();
  void setEdgeSet(EdgeSetType * EdgeSetIn);
  LoopSetType * getLoopSet();
  void setLoopSet(LoopSetType * LoopSetIn);
  FaceSetType * getFaceSet();
  void setFaceSet(FaceSetType * FaceSetIn);
  ShellSetType * getShellSet();
  void setShellSet(ShellSetType * ShellSetIn);

protected:
  PointSetType * PointSet;
  Curve12SetType * Curve12Set;
  Curve13SetType * Curve13Set;
  SurfaceSetType * SurfaceSet;
  CurveMeshSetType * CurveMeshSet;
  SurfaceMeshSetType * SurfaceMeshSet;
  VertexSetType * VertexSet;
  EdgeSetType * EdgeSet;
  LoopSetType * LoopSet;
  FaceSetType * FaceSet;
  ShellSetType * ShellSet;
};

/* ***************************************************************** */

class CombinedSphericalResolutionType :
  public XmlTypeBase
{
public:
  CombinedSphericalResolutionType();
  CombinedSphericalResolutionType(
    LinearValueType * CombinedRadialResolutionIn,
    AngularValueType * CombinedAzimuthalResolutionIn,
    AngularValueType * CombinedPolarResolutionIn);
  ~CombinedSphericalResolutionType();
  void printSelf(FILE * outFile);

  LinearValueType * getCombinedRadialResolution();
  void setCombinedRadialResolution(LinearValueType * CombinedRadialResolutionIn);
  AngularValueType * getCombinedAzimuthalResolution();
  void setCombinedAzimuthalResolution(AngularValueType * CombinedAzimuthalResolutionIn);
  AngularValueType * getCombinedPolarResolution();
  void setCombinedPolarResolution(AngularValueType * CombinedPolarResolutionIn);

protected:
  LinearValueType * CombinedRadialResolution;
  AngularValueType * CombinedAzimuthalResolution;
  AngularValueType * CombinedPolarResolution;
};

/* ***************************************************************** */

class CombinedUserDefinedResolutionType :
  public XmlTypeBase
{
public:
  CombinedUserDefinedResolutionType();
  CombinedUserDefinedResolutionType(
    LinearOrRotaryAxisType * ACombinedResolutionIn,
    LinearOrRotaryAxisType * BCombinedResolutionIn,
    LinearOrRotaryAxisType * CCombinedResolutionIn);
  ~CombinedUserDefinedResolutionType();
  void printSelf(FILE * outFile);

  LinearOrRotaryAxisType * getACombinedResolution();
  void setACombinedResolution(LinearOrRotaryAxisType * ACombinedResolutionIn);
  LinearOrRotaryAxisType * getBCombinedResolution();
  void setBCombinedResolution(LinearOrRotaryAxisType * BCombinedResolutionIn);
  LinearOrRotaryAxisType * getCCombinedResolution();
  void setCCombinedResolution(LinearOrRotaryAxisType * CCombinedResolutionIn);

protected:
  LinearOrRotaryAxisType * ACombinedResolution;
  LinearOrRotaryAxisType * BCombinedResolution;
  LinearOrRotaryAxisType * CCombinedResolution;
};

/* ***************************************************************** */

class DetachableSensorsType :
  public XmlTypeBase
{
public:
  DetachableSensorsType();
  DetachableSensorsType(
    DetachableSensorBaseTypeLisd * DetachableSensorIn);
  DetachableSensorsType(
    NaturalType * nIn,
    DetachableSensorBaseTypeLisd * DetachableSensorIn);
  ~DetachableSensorsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DetachableSensorBaseTypeLisd * getDetachableSensor();
  void setDetachableSensor(DetachableSensorBaseTypeLisd *);

protected:
  NaturalType * n;
  DetachableSensorBaseTypeLisd * DetachableSensor;
};

/* ***************************************************************** */

class EffectiveDiameterPerformanceTestType :
  public XmlTypeBase
{
public:
  EffectiveDiameterPerformanceTestType();
  EffectiveDiameterPerformanceTestType(
    XmlDecimal * AverageDiameterIn,
    XmlDecimal * StandardDeviationIn);
  ~EffectiveDiameterPerformanceTestType();
  void printSelf(FILE * outFile);

  XmlDecimal * getAverageDiameter();
  void setAverageDiameter(XmlDecimal * AverageDiameterIn);
  XmlDecimal * getStandardDeviation();
  void setStandardDeviation(XmlDecimal * StandardDeviationIn);

protected:
  XmlDecimal * AverageDiameter;
  XmlDecimal * StandardDeviation;
};

/* ***************************************************************** */

class EffectiveWorkingVolumeBaseType :
  public XmlTypeBase
{
public:
  EffectiveWorkingVolumeBaseType();
  virtual ~EffectiveWorkingVolumeBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class EnvironmentalRangeType :
  public XmlTypeBase
{
public:
  EnvironmentalRangeType();
  EnvironmentalRangeType(
    XmlNMTOKEN * NameIn,
    XmlString * DescriptionIn,
    TemperatureValueType * MaxAmbientTemperatureIn,
    TemperatureValueType * MinAmbientTemperatureIn,
    PressureValueType * MaxAmbientAirPressureIn,
    PressureValueType * MinAmbientAirPressureIn,
    SpecifiedDecimalType * MaxAmbientRelativeHumidityIn,
    SpecifiedDecimalType * MinAmbientRelativeHumidityIn,
    UserDefinedUnitValueType * MaxVibrationIn,
    AttributesType * AttributesIn);
  ~EnvironmentalRangeType();
  void printSelf(FILE * outFile);

  XmlNMTOKEN * getName();
  void setName(XmlNMTOKEN * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  TemperatureValueType * getMaxAmbientTemperature();
  void setMaxAmbientTemperature(TemperatureValueType * MaxAmbientTemperatureIn);
  TemperatureValueType * getMinAmbientTemperature();
  void setMinAmbientTemperature(TemperatureValueType * MinAmbientTemperatureIn);
  PressureValueType * getMaxAmbientAirPressure();
  void setMaxAmbientAirPressure(PressureValueType * MaxAmbientAirPressureIn);
  PressureValueType * getMinAmbientAirPressure();
  void setMinAmbientAirPressure(PressureValueType * MinAmbientAirPressureIn);
  SpecifiedDecimalType * getMaxAmbientRelativeHumidity();
  void setMaxAmbientRelativeHumidity(SpecifiedDecimalType * MaxAmbientRelativeHumidityIn);
  SpecifiedDecimalType * getMinAmbientRelativeHumidity();
  void setMinAmbientRelativeHumidity(SpecifiedDecimalType * MinAmbientRelativeHumidityIn);
  UserDefinedUnitValueType * getMaxVibration();
  void setMaxVibration(UserDefinedUnitValueType * MaxVibrationIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  XmlNMTOKEN * Name;
  XmlString * Description;
  TemperatureValueType * MaxAmbientTemperature;
  TemperatureValueType * MinAmbientTemperature;
  PressureValueType * MaxAmbientAirPressure;
  PressureValueType * MinAmbientAirPressure;
  SpecifiedDecimalType * MaxAmbientRelativeHumidity;
  SpecifiedDecimalType * MinAmbientRelativeHumidity;
  UserDefinedUnitValueType * MaxVibration;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class FPSTestType :
  public CMMAccuracyTestBaseType
{
public:
  FPSTestType();
  FPSTestType(
    LengthFunctionDiscreteType * XLinearityIn,
    LengthFunctionDiscreteType * YLinearityIn,
    LengthFunctionDiscreteType * ZLinearityIn,
    AngleFunctionDiscreteType * XAxisRollIn,
    AngleFunctionDiscreteType * XAxisPitchIn,
    AngleFunctionDiscreteType * XAxisYawIn,
    AngleFunctionDiscreteType * YAxisRollIn,
    AngleFunctionDiscreteType * YAxisPitchIn,
    AngleFunctionDiscreteType * YAxisYawIn,
    AngleFunctionDiscreteType * ZAxisRollIn,
    AngleFunctionDiscreteType * ZAxisPitchIn,
    AngleFunctionDiscreteType * ZAxisYawIn,
    LengthFunctionDiscreteType * XAxisStraightnessYIn,
    LengthFunctionDiscreteType * XAxisStraightnessZIn,
    LengthFunctionDiscreteType * YAxisStraightnessXIn,
    LengthFunctionDiscreteType * YAxisStraightnessZIn,
    LengthFunctionDiscreteType * ZAxisStraightnessXIn,
    LengthFunctionDiscreteType * ZAxisStraightnessYIn,
    XmlDouble * XYSquarenessIn,
    XmlDouble * XZSquarenessIn,
    XmlDouble * YZSquarenessIn);
  ~FPSTestType();
  void printSelf(FILE * outFile);

  LengthFunctionDiscreteType * getXLinearity();
  void setXLinearity(LengthFunctionDiscreteType * XLinearityIn);
  LengthFunctionDiscreteType * getYLinearity();
  void setYLinearity(LengthFunctionDiscreteType * YLinearityIn);
  LengthFunctionDiscreteType * getZLinearity();
  void setZLinearity(LengthFunctionDiscreteType * ZLinearityIn);
  AngleFunctionDiscreteType * getXAxisRoll();
  void setXAxisRoll(AngleFunctionDiscreteType * XAxisRollIn);
  AngleFunctionDiscreteType * getXAxisPitch();
  void setXAxisPitch(AngleFunctionDiscreteType * XAxisPitchIn);
  AngleFunctionDiscreteType * getXAxisYaw();
  void setXAxisYaw(AngleFunctionDiscreteType * XAxisYawIn);
  AngleFunctionDiscreteType * getYAxisRoll();
  void setYAxisRoll(AngleFunctionDiscreteType * YAxisRollIn);
  AngleFunctionDiscreteType * getYAxisPitch();
  void setYAxisPitch(AngleFunctionDiscreteType * YAxisPitchIn);
  AngleFunctionDiscreteType * getYAxisYaw();
  void setYAxisYaw(AngleFunctionDiscreteType * YAxisYawIn);
  AngleFunctionDiscreteType * getZAxisRoll();
  void setZAxisRoll(AngleFunctionDiscreteType * ZAxisRollIn);
  AngleFunctionDiscreteType * getZAxisPitch();
  void setZAxisPitch(AngleFunctionDiscreteType * ZAxisPitchIn);
  AngleFunctionDiscreteType * getZAxisYaw();
  void setZAxisYaw(AngleFunctionDiscreteType * ZAxisYawIn);
  LengthFunctionDiscreteType * getXAxisStraightnessY();
  void setXAxisStraightnessY(LengthFunctionDiscreteType * XAxisStraightnessYIn);
  LengthFunctionDiscreteType * getXAxisStraightnessZ();
  void setXAxisStraightnessZ(LengthFunctionDiscreteType * XAxisStraightnessZIn);
  LengthFunctionDiscreteType * getYAxisStraightnessX();
  void setYAxisStraightnessX(LengthFunctionDiscreteType * YAxisStraightnessXIn);
  LengthFunctionDiscreteType * getYAxisStraightnessZ();
  void setYAxisStraightnessZ(LengthFunctionDiscreteType * YAxisStraightnessZIn);
  LengthFunctionDiscreteType * getZAxisStraightnessX();
  void setZAxisStraightnessX(LengthFunctionDiscreteType * ZAxisStraightnessXIn);
  LengthFunctionDiscreteType * getZAxisStraightnessY();
  void setZAxisStraightnessY(LengthFunctionDiscreteType * ZAxisStraightnessYIn);
  XmlDouble * getXYSquareness();
  void setXYSquareness(XmlDouble * XYSquarenessIn);
  XmlDouble * getXZSquareness();
  void setXZSquareness(XmlDouble * XZSquarenessIn);
  XmlDouble * getYZSquareness();
  void setYZSquareness(XmlDouble * YZSquarenessIn);

protected:
  LengthFunctionDiscreteType * XLinearity;
  LengthFunctionDiscreteType * YLinearity;
  LengthFunctionDiscreteType * ZLinearity;
  AngleFunctionDiscreteType * XAxisRoll;
  AngleFunctionDiscreteType * XAxisPitch;
  AngleFunctionDiscreteType * XAxisYaw;
  AngleFunctionDiscreteType * YAxisRoll;
  AngleFunctionDiscreteType * YAxisPitch;
  AngleFunctionDiscreteType * YAxisYaw;
  AngleFunctionDiscreteType * ZAxisRoll;
  AngleFunctionDiscreteType * ZAxisPitch;
  AngleFunctionDiscreteType * ZAxisYaw;
  LengthFunctionDiscreteType * XAxisStraightnessY;
  LengthFunctionDiscreteType * XAxisStraightnessZ;
  LengthFunctionDiscreteType * YAxisStraightnessX;
  LengthFunctionDiscreteType * YAxisStraightnessZ;
  LengthFunctionDiscreteType * ZAxisStraightnessX;
  LengthFunctionDiscreteType * ZAxisStraightnessY;
  XmlDouble * XYSquareness;
  XmlDouble * XZSquareness;
  XmlDouble * YZSquareness;
};

/* ***************************************************************** */

class FixturesType :
  public XmlTypeBase
{
public:
  FixturesType();
  FixturesType(
    FixtureTypeLisd * FixtureIn);
  FixturesType(
    NaturalType * nIn,
    FixtureTypeLisd * FixtureIn);
  ~FixturesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  FixtureTypeLisd * getFixture();
  void setFixture(FixtureTypeLisd *);

protected:
  NaturalType * n;
  FixtureTypeLisd * Fixture;
};

/* ***************************************************************** */

class FunctionDiscreteType :
  public XmlTypeBase
{
public:
  FunctionDiscreteType();
  FunctionDiscreteType(
    ListDoubleType * DomainValuesIn,
    ListDoubleType * RangeValuesIn);
  FunctionDiscreteType(
    NaturalType * nIn,
    ListDoubleType * DomainValuesIn,
    ListDoubleType * RangeValuesIn);
  ~FunctionDiscreteType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ListDoubleType * getDomainValues();
  void setDomainValues(ListDoubleType * DomainValuesIn);
  ListDoubleType * getRangeValues();
  void setRangeValues(ListDoubleType * RangeValuesIn);

protected:
  NaturalType * n;
  ListDoubleType * DomainValues;
  ListDoubleType * RangeValues;
};

/* ***************************************************************** */

class ISO10360TestType :
  public CMMAccuracyTestBaseType
{
public:
  ISO10360TestType();
  ISO10360TestType(
    ISO10360TestTypeChoicePair * ISO10360TestTypePairIn);
  ~ISO10360TestType();
  void printSelf(FILE * outFile);
  ISO10360TestTypeChoicePair * getISO10360TestTypeChoicePair();
  void setISO10360TestTypeChoicePair(ISO10360TestTypeChoicePair * ISO10360TestTypePairIn);

protected:
  ISO10360TestTypeChoicePair * ISO10360TestTypePair;
};

/* ***************************************************************** */

union ISO10360TestTypeVal
{
  LinearValueType * MaxErrorConstant;
  LinearErrorType * LinearError;
  LesserErrorType * LesserError;
};

/* ***************************************************************** */

class ISO10360TestTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaxErrorConstantE,
    LinearErrorE,
    LesserErrorE };
  ISO10360TestTypeChoicePair();
  ISO10360TestTypeChoicePair(
    whichOne ISO10360TestTypeTypeIn,
    ISO10360TestTypeVal * ISO10360TestTypeValueIn);
  ~ISO10360TestTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ISO10360TestTypeType;
  ISO10360TestTypeVal * ISO10360TestTypeValue;
};

/* ***************************************************************** */

class LengthFunctionDiscreteType :
  public FunctionDiscreteType
{
public:
  LengthFunctionDiscreteType();
  LengthFunctionDiscreteType(
    ListDoubleType * DomainValuesIn,
    ListDoubleType * RangeValuesIn,
    XmlToken * DomainLinearUnitIn,
    XmlToken * RangeLinearUnitIn);
  LengthFunctionDiscreteType(
    NaturalType * nIn,
    ListDoubleType * DomainValuesIn,
    ListDoubleType * RangeValuesIn,
    XmlToken * DomainLinearUnitIn,
    XmlToken * RangeLinearUnitIn);
  ~LengthFunctionDiscreteType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getDomainLinearUnit();
  void setDomainLinearUnit(XmlToken * DomainLinearUnitIn);
  XmlToken * getRangeLinearUnit();
  void setRangeLinearUnit(XmlToken * RangeLinearUnitIn);

protected:
  XmlToken * DomainLinearUnit;
  XmlToken * RangeLinearUnit;
};

/* ***************************************************************** */

class LesserErrorType :
  public XmlTypeBase
{
public:
  LesserErrorType();
  LesserErrorType(
    LinearValueType * MaxErrorConstantIn,
    LinearErrorType * LinearErrorIn);
  ~LesserErrorType();
  void printSelf(FILE * outFile);

  LinearValueType * getMaxErrorConstant();
  void setMaxErrorConstant(LinearValueType * MaxErrorConstantIn);
  LinearErrorType * getLinearError();
  void setLinearError(LinearErrorType * LinearErrorIn);

protected:
  LinearValueType * MaxErrorConstant;
  LinearErrorType * LinearError;
};

/* ***************************************************************** */

class LinearErrorType :
  public XmlTypeBase
{
public:
  LinearErrorType();
  LinearErrorType(
    LinearValueType * BaseErrorIn,
    XmlDecimal * ErrorRateIn);
  ~LinearErrorType();
  void printSelf(FILE * outFile);

  LinearValueType * getBaseError();
  void setBaseError(LinearValueType * BaseErrorIn);
  XmlDecimal * getErrorRate();
  void setErrorRate(XmlDecimal * ErrorRateIn);

protected:
  LinearValueType * BaseError;
  XmlDecimal * ErrorRate;
};

/* ***************************************************************** */

class LinearOrRotaryAxisType :
  public XmlTypeBase
{
public:
  LinearOrRotaryAxisType();
  LinearOrRotaryAxisType(
    UserAxisBaseType * AxisIn);
  ~LinearOrRotaryAxisType();
  void printSelf(FILE * outFile);

  UserAxisBaseType * getAxis();
  void setAxis(UserAxisBaseType * AxisIn);

protected:
  UserAxisBaseType * Axis;
};

/* ***************************************************************** */

class LinearVariableDifferentialTransformerEnumType :
  public XmlNMTOKEN
{
public:
  LinearVariableDifferentialTransformerEnumType();
  LinearVariableDifferentialTransformerEnumType(
    const char * valIn);
  ~LinearVariableDifferentialTransformerEnumType();
  bool LinearVariableDifferentialTransformerEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LocatedTipType :
  public XmlTypeBase
{
public:
  LocatedTipType();
  LocatedTipType(
    ProbeTipType * ProbeTipIn,
    PointType * TipEndLocationIn);
  ~LocatedTipType();
  void printSelf(FILE * outFile);

  ProbeTipType * getProbeTip();
  void setProbeTip(ProbeTipType * ProbeTipIn);
  PointType * getTipEndLocation();
  void setTipEndLocation(PointType * TipEndLocationIn);

protected:
  ProbeTipType * ProbeTip;
  PointType * TipEndLocation;
};

/* ***************************************************************** */

class LocatedTipTypeLisd :
  public std::list<LocatedTipType *>,
  public XmlSchemaInstanceBase
{
public:
  LocatedTipTypeLisd();
  LocatedTipTypeLisd(
    LocatedTipType * aLocatedTipType);
  ~LocatedTipTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LocatedTipsType :
  public XmlTypeBase
{
public:
  LocatedTipsType();
  LocatedTipsType(
    LocatedTipTypeLisd * LocatedTipIn);
  LocatedTipsType(
    NaturalType * nIn,
    LocatedTipTypeLisd * LocatedTipIn);
  ~LocatedTipsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  LocatedTipTypeLisd * getLocatedTip();
  void setLocatedTip(LocatedTipTypeLisd *);

protected:
  NaturalType * n;
  LocatedTipTypeLisd * LocatedTip;
};

/* ***************************************************************** */

class MeasurementDeviceAccuracyBaseType :
  public XmlTypeBase
{
public:
  MeasurementDeviceAccuracyBaseType();
  MeasurementDeviceAccuracyBaseType(
    EnvironmentalRangeType * EnvironmentalRangeIn);
  virtual ~MeasurementDeviceAccuracyBaseType();
  void printSelf(FILE * outFile);

  EnvironmentalRangeType * getEnvironmentalRange();
  void setEnvironmentalRange(EnvironmentalRangeType * EnvironmentalRangeIn);

protected:
  EnvironmentalRangeType * EnvironmentalRange;
};

/* ***************************************************************** */

class MeasurementDeviceScaleType :
  public XmlTypeBase
{
public:
  MeasurementDeviceScaleType();
  MeasurementDeviceScaleType(
    XmlString * ScaleMaterialIn,
    XmlDecimal * ScaleCoefficientOfExpansionIn,
    XmlDecimal * ScaleCoefficientOfExpansionUncertaintyIn,
    TypeOfScaleType * TypeOfScaleIn,
    LinearValueType * ScaleResolutionIn,
    ScaleReferenceEnumType * ScaleReferenceIn);
  ~MeasurementDeviceScaleType();
  void printSelf(FILE * outFile);

  XmlString * getScaleMaterial();
  void setScaleMaterial(XmlString * ScaleMaterialIn);
  XmlDecimal * getScaleCoefficientOfExpansion();
  void setScaleCoefficientOfExpansion(XmlDecimal * ScaleCoefficientOfExpansionIn);
  XmlDecimal * getScaleCoefficientOfExpansionUncertainty();
  void setScaleCoefficientOfExpansionUncertainty(XmlDecimal * ScaleCoefficientOfExpansionUncertaintyIn);
  TypeOfScaleType * getTypeOfScale();
  void setTypeOfScale(TypeOfScaleType * TypeOfScaleIn);
  LinearValueType * getScaleResolution();
  void setScaleResolution(LinearValueType * ScaleResolutionIn);
  ScaleReferenceEnumType * getScaleReference();
  void setScaleReference(ScaleReferenceEnumType * ScaleReferenceIn);

protected:
  XmlString * ScaleMaterial;
  XmlDecimal * ScaleCoefficientOfExpansion;
  XmlDecimal * ScaleCoefficientOfExpansionUncertainty;
  TypeOfScaleType * TypeOfScale;
  LinearValueType * ScaleResolution;
  ScaleReferenceEnumType * ScaleReference;
};

/* ***************************************************************** */

class MeasurementDeviceScalesBaseType :
  public XmlTypeBase
{
public:
  MeasurementDeviceScalesBaseType();
  virtual ~MeasurementDeviceScalesBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MeasurementDevicesType :
  public XmlTypeBase
{
public:
  MeasurementDevicesType();
  MeasurementDevicesType(
    MeasurementDeviceTypeLisd * MeasurementDeviceIn);
  MeasurementDevicesType(
    NaturalType * nIn,
    MeasurementDeviceTypeLisd * MeasurementDeviceIn);
  ~MeasurementDevicesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeasurementDeviceTypeLisd * getMeasurementDevice();
  void setMeasurementDevice(MeasurementDeviceTypeLisd *);

protected:
  NaturalType * n;
  MeasurementDeviceTypeLisd * MeasurementDevice;
};

/* ***************************************************************** */

class MeasurementResourceBaseType :
  public XmlTypeBase
{
public:
  MeasurementResourceBaseType();
  MeasurementResourceBaseType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  MeasurementResourceBaseType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  virtual ~MeasurementResourceBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlToken * getName();
  void setName(XmlToken * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlString * getManufacturer();
  void setManufacturer(XmlString * ManufacturerIn);
  XmlString * getModelNumber();
  void setModelNumber(XmlString * ModelNumberIn);
  XmlString * getSerialNumber();
  void setSerialNumber(XmlString * SerialNumberIn);
  MassValueType * getMass();
  void setMass(MassValueType * MassIn);
  CartesianWorkingVolumeType * getSize();
  void setSize(CartesianWorkingVolumeType * SizeIn);
  MeasurementReso_1196_Type * getMeasurementReso_1196();
  void setMeasurementReso_1196(MeasurementReso_1196_Type * MeasurementReso_1196In);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFIdType * id;
  XmlToken * Name;
  XmlString * Description;
  XmlString * Manufacturer;
  XmlString * ModelNumber;
  XmlString * SerialNumber;
  MassValueType * Mass;
  CartesianWorkingVolumeType * Size;
  MeasurementReso_1196_Type * MeasurementReso_1196;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class MeasurementResourcesType :
  public XmlTypeBase
{
public:
  MeasurementResourcesType();
  MeasurementResourcesType(
    VersionType * VersionIn,
    FixturesType * FixturesIn,
    MeasurementRoomsType * MeasurementRoomsIn,
    MeasurementDevicesType * MeasurementDevicesIn,
    DetachableSensorsType * DetachableSensorsIn,
    ToolsType * ToolsIn);
  ~MeasurementResourcesType();
  void printSelf(FILE * outFile);

  VersionType * getVersion();
  void setVersion(VersionType * VersionIn);
  FixturesType * getFixtures();
  void setFixtures(FixturesType * FixturesIn);
  MeasurementRoomsType * getMeasurementRooms();
  void setMeasurementRooms(MeasurementRoomsType * MeasurementRoomsIn);
  MeasurementDevicesType * getMeasurementDevices();
  void setMeasurementDevices(MeasurementDevicesType * MeasurementDevicesIn);
  DetachableSensorsType * getDetachableSensors();
  void setDetachableSensors(DetachableSensorsType * DetachableSensorsIn);
  ToolsType * getTools();
  void setTools(ToolsType * ToolsIn);

protected:
  VersionType * Version;
  FixturesType * Fixtures;
  MeasurementRoomsType * MeasurementRooms;
  MeasurementDevicesType * MeasurementDevices;
  DetachableSensorsType * DetachableSensors;
  ToolsType * Tools;
};

/* ***************************************************************** */

class MeasurementRoomType :
  public MeasurementResourceBaseType
{
public:
  MeasurementRoomType();
  MeasurementRoomType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    TemperatureType * TemperatureRangeMinIn,
    TemperatureType * TemperatureRangeMaxIn,
    TemperatureType * TemperatureControlMinIn,
    TemperatureType * TemperatureControlMaxIn,
    FractionType * RelativeHumidityRangeMinIn,
    FractionType * RelativeHumidityRangeMaxIn,
    FractionType * RelativeHumidityControlMinIn,
    FractionType * RelativeHumidityControlMaxIn);
  MeasurementRoomType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    TemperatureType * TemperatureRangeMinIn,
    TemperatureType * TemperatureRangeMaxIn,
    TemperatureType * TemperatureControlMinIn,
    TemperatureType * TemperatureControlMaxIn,
    FractionType * RelativeHumidityRangeMinIn,
    FractionType * RelativeHumidityRangeMaxIn,
    FractionType * RelativeHumidityControlMinIn,
    FractionType * RelativeHumidityControlMaxIn);
  ~MeasurementRoomType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TemperatureType * getTemperatureRangeMin();
  void setTemperatureRangeMin(TemperatureType * TemperatureRangeMinIn);
  TemperatureType * getTemperatureRangeMax();
  void setTemperatureRangeMax(TemperatureType * TemperatureRangeMaxIn);
  TemperatureType * getTemperatureControlMin();
  void setTemperatureControlMin(TemperatureType * TemperatureControlMinIn);
  TemperatureType * getTemperatureControlMax();
  void setTemperatureControlMax(TemperatureType * TemperatureControlMaxIn);
  FractionType * getRelativeHumidityRangeMin();
  void setRelativeHumidityRangeMin(FractionType * RelativeHumidityRangeMinIn);
  FractionType * getRelativeHumidityRangeMax();
  void setRelativeHumidityRangeMax(FractionType * RelativeHumidityRangeMaxIn);
  FractionType * getRelativeHumidityControlMin();
  void setRelativeHumidityControlMin(FractionType * RelativeHumidityControlMinIn);
  FractionType * getRelativeHumidityControlMax();
  void setRelativeHumidityControlMax(FractionType * RelativeHumidityControlMaxIn);

protected:
  TemperatureType * TemperatureRangeMin;
  TemperatureType * TemperatureRangeMax;
  TemperatureType * TemperatureControlMin;
  TemperatureType * TemperatureControlMax;
  FractionType * RelativeHumidityRangeMin;
  FractionType * RelativeHumidityRangeMax;
  FractionType * RelativeHumidityControlMin;
  FractionType * RelativeHumidityControlMax;
};

/* ***************************************************************** */

class MeasurementRoomTypeLisd :
  public std::list<MeasurementRoomType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasurementRoomTypeLisd();
  MeasurementRoomTypeLisd(
    MeasurementRoomType * aMeasurementRoomType);
  ~MeasurementRoomTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MeasurementRoomsType :
  public XmlTypeBase
{
public:
  MeasurementRoomsType();
  MeasurementRoomsType(
    MeasurementRoomTypeLisd * MeasurementRoomIn);
  MeasurementRoomsType(
    NaturalType * nIn,
    MeasurementRoomTypeLisd * MeasurementRoomIn);
  ~MeasurementRoomsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeasurementRoomTypeLisd * getMeasurementRoom();
  void setMeasurementRoom(MeasurementRoomTypeLisd *);

protected:
  NaturalType * n;
  MeasurementRoomTypeLisd * MeasurementRoom;
};

/* ***************************************************************** */

class NumericalLengthAccuracyType :
  public MeasurementDeviceAccuracyBaseType
{
public:
  NumericalLengthAccuracyType();
  NumericalLengthAccuracyType(
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * AccuracyValueIn);
  ~NumericalLengthAccuracyType();
  void printSelf(FILE * outFile);

  LinearValueType * getAccuracyValue();
  void setAccuracyValue(LinearValueType * AccuracyValueIn);

protected:
  LinearValueType * AccuracyValue;
};

/* ***************************************************************** */

class ParallelLinkCMMSpeedsType :
  public CMMSpeedsBaseType
{
public:
  ParallelLinkCMMSpeedsType();
  ParallelLinkCMMSpeedsType(
    SpeedValueType * MaxXTraverseSpeedIn,
    SpeedValueType * MaxYTraverseSpeedIn,
    SpeedValueType * MaxZTraverseSpeedIn,
    SpeedValueType * MaxXProbingSpeedIn,
    SpeedValueType * MaxYProbingSpeedIn,
    SpeedValueType * MaxZProbingSpeedIn,
    UserDefinedUnitValueType * MaxXRotationIn,
    UserDefinedUnitValueType * MaxYRotationIn,
    UserDefinedUnitValueType * MaxZRotationIn);
  ~ParallelLinkCMMSpeedsType();
  void printSelf(FILE * outFile);

  SpeedValueType * getMaxXTraverseSpeed();
  void setMaxXTraverseSpeed(SpeedValueType * MaxXTraverseSpeedIn);
  SpeedValueType * getMaxYTraverseSpeed();
  void setMaxYTraverseSpeed(SpeedValueType * MaxYTraverseSpeedIn);
  SpeedValueType * getMaxZTraverseSpeed();
  void setMaxZTraverseSpeed(SpeedValueType * MaxZTraverseSpeedIn);
  SpeedValueType * getMaxXProbingSpeed();
  void setMaxXProbingSpeed(SpeedValueType * MaxXProbingSpeedIn);
  SpeedValueType * getMaxYProbingSpeed();
  void setMaxYProbingSpeed(SpeedValueType * MaxYProbingSpeedIn);
  SpeedValueType * getMaxZProbingSpeed();
  void setMaxZProbingSpeed(SpeedValueType * MaxZProbingSpeedIn);
  UserDefinedUnitValueType * getMaxXRotation();
  void setMaxXRotation(UserDefinedUnitValueType * MaxXRotationIn);
  UserDefinedUnitValueType * getMaxYRotation();
  void setMaxYRotation(UserDefinedUnitValueType * MaxYRotationIn);
  UserDefinedUnitValueType * getMaxZRotation();
  void setMaxZRotation(UserDefinedUnitValueType * MaxZRotationIn);

protected:
  SpeedValueType * MaxXTraverseSpeed;
  SpeedValueType * MaxYTraverseSpeed;
  SpeedValueType * MaxZTraverseSpeed;
  SpeedValueType * MaxXProbingSpeed;
  SpeedValueType * MaxYProbingSpeed;
  SpeedValueType * MaxZProbingSpeed;
  UserDefinedUnitValueType * MaxXRotation;
  UserDefinedUnitValueType * MaxYRotation;
  UserDefinedUnitValueType * MaxZRotation;
};

/* ***************************************************************** */

class PointAccuracyTestType :
  public CMMAccuracyTestBaseType
{
public:
  PointAccuracyTestType();
  PointAccuracyTestType(
    LinearValueType * AccuracyIn);
  ~PointAccuracyTestType();
  void printSelf(FILE * outFile);

  LinearValueType * getAccuracy();
  void setAccuracy(LinearValueType * AccuracyIn);

protected:
  LinearValueType * Accuracy;
};

/* ***************************************************************** */

class ProbeTipType :
  public MeasurementResourceBaseType
{
public:
  ProbeTipType();
  ProbeTipType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    TipEndGeometryType * TipEndGeometryIn,
    LinearValueType * TipEndDiameterIn,
    XmlString * TipEndMaterialIn,
    XmlString * StemMaterialIn,
    LinearValueType * StemDiameterIn);
  ProbeTipType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    TipEndGeometryType * TipEndGeometryIn,
    LinearValueType * TipEndDiameterIn,
    XmlString * TipEndMaterialIn,
    XmlString * StemMaterialIn,
    LinearValueType * StemDiameterIn);
  ~ProbeTipType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  TipEndGeometryType * getTipEndGeometry();
  void setTipEndGeometry(TipEndGeometryType * TipEndGeometryIn);
  LinearValueType * getTipEndDiameter();
  void setTipEndDiameter(LinearValueType * TipEndDiameterIn);
  XmlString * getTipEndMaterial();
  void setTipEndMaterial(XmlString * TipEndMaterialIn);
  XmlString * getStemMaterial();
  void setStemMaterial(XmlString * StemMaterialIn);
  LinearValueType * getStemDiameter();
  void setStemDiameter(LinearValueType * StemDiameterIn);

protected:
  TipEndGeometryType * TipEndGeometry;
  LinearValueType * TipEndDiameter;
  XmlString * TipEndMaterial;
  XmlString * StemMaterial;
  LinearValueType * StemDiameter;
};

/* ***************************************************************** */

class QualificationType :
  public XmlTypeBase
{
public:
  QualificationType();
  QualificationType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn);
  ~QualificationType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  AttributesType * Attributes;
  XmlString * Description;
};

/* ***************************************************************** */

class QualificationTypeLisd :
  public std::list<QualificationType *>,
  public XmlSchemaInstanceBase
{
public:
  QualificationTypeLisd();
  QualificationTypeLisd(
    QualificationType * aQualificationType);
  ~QualificationTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class QualificationsType :
  public XmlTypeBase
{
public:
  QualificationsType();
  QualificationsType(
    QualificationTypeLisd * QualificationIn);
  QualificationsType(
    NaturalType * nIn,
    QualificationTypeLisd * QualificationIn);
  ~QualificationsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  QualificationTypeLisd * getQualification();
  void setQualification(QualificationTypeLisd *);

protected:
  NaturalType * n;
  QualificationTypeLisd * Qualification;
};

/* ***************************************************************** */

class RAPZResolutionType :
  public XmlTypeBase
{
public:
  RAPZResolutionType();
  RAPZResolutionType(
    LinearValueType * RadialResolutionIn,
    AngularValueType * AzimuthalAngleResolutionIn,
    AngularValueType * PolarAngleResolutionIn);
  ~RAPZResolutionType();
  void printSelf(FILE * outFile);

  LinearValueType * getRadialResolution();
  void setRadialResolution(LinearValueType * RadialResolutionIn);
  AngularValueType * getAzimuthalAngleResolution();
  void setAzimuthalAngleResolution(AngularValueType * AzimuthalAngleResolutionIn);
  AngularValueType * getPolarAngleResolution();
  void setPolarAngleResolution(AngularValueType * PolarAngleResolutionIn);

protected:
  LinearValueType * RadialResolution;
  AngularValueType * AzimuthalAngleResolution;
  AngularValueType * PolarAngleResolution;
};

/* ***************************************************************** */

class ResolutionBaseType :
  public XmlTypeBase
{
public:
  ResolutionBaseType();
  virtual ~ResolutionBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class RotaryTableType :
  public XmlTypeBase
{
public:
  RotaryTableType();
  RotaryTableType(
    PointType * LocationOnCMMIn,
    UnitVectorType * AxisDirectionIn,
    UnitVectorType * ZeroIndexDirectionIn,
    LinearValueType * TableRadiusIn,
    TableErrorsType * TableErrorsIn);
  ~RotaryTableType();
  void printSelf(FILE * outFile);

  PointType * getLocationOnCMM();
  void setLocationOnCMM(PointType * LocationOnCMMIn);
  UnitVectorType * getAxisDirection();
  void setAxisDirection(UnitVectorType * AxisDirectionIn);
  UnitVectorType * getZeroIndexDirection();
  void setZeroIndexDirection(UnitVectorType * ZeroIndexDirectionIn);
  LinearValueType * getTableRadius();
  void setTableRadius(LinearValueType * TableRadiusIn);
  TableErrorsType * getTableErrors();
  void setTableErrors(TableErrorsType * TableErrorsIn);

protected:
  PointType * LocationOnCMM;
  UnitVectorType * AxisDirection;
  UnitVectorType * ZeroIndexDirection;
  LinearValueType * TableRadius;
  TableErrorsType * TableErrors;
};

/* ***************************************************************** */

class ScaleReferenceEnumType :
  public XmlNMTOKEN
{
public:
  ScaleReferenceEnumType();
  ScaleReferenceEnumType(
    const char * valIn);
  ~ScaleReferenceEnumType();
  bool ScaleReferenceEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SensorType :
  public MeasurementResourceBaseType
{
public:
  SensorType();
  SensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  SensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  ~SensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getProtectionClass();
  void setProtectionClass(XmlString * ProtectionClassIn);
  XmlString * getLinearityError();
  void setLinearityError(XmlString * LinearityErrorIn);
  LinearValueType * getRepeatability();
  void setRepeatability(LinearValueType * RepeatabilityIn);
  XmlDecimal * getSensitivity();
  void setSensitivity(XmlDecimal * SensitivityIn);
  LinearValueType * getResolution();
  void setResolution(LinearValueType * ResolutionIn);
  EnvironmentalRangeType * getEnvironmentalRange();
  void setEnvironmentalRange(EnvironmentalRangeType * EnvironmentalRangeIn);

protected:
  XmlString * ProtectionClass;
  XmlString * LinearityError;
  LinearValueType * Repeatability;
  XmlDecimal * Sensitivity;
  LinearValueType * Resolution;
  EnvironmentalRangeType * EnvironmentalRange;
};

/* ***************************************************************** */

class SinglePointArticulationPerformanceTestType :
  public XmlTypeBase
{
public:
  SinglePointArticulationPerformanceTestType();
  SinglePointArticulationPerformanceTestType(
    LinearValueType * MaxDeviationFromAverageNearIn,
    LinearValueType * MaxDeviationFromAverageFarIn,
    LinearValueType * MaxDeviationFromAverageMiddleIn,
    LinearValueType * TwiceStandardDeviationNearIn,
    LinearValueType * TwiceStandardDeviationFarIn,
    LinearValueType * TwiceStandardDeviationMiddleIn);
  ~SinglePointArticulationPerformanceTestType();
  void printSelf(FILE * outFile);

  LinearValueType * getMaxDeviationFromAverageNear();
  void setMaxDeviationFromAverageNear(LinearValueType * MaxDeviationFromAverageNearIn);
  LinearValueType * getMaxDeviationFromAverageFar();
  void setMaxDeviationFromAverageFar(LinearValueType * MaxDeviationFromAverageFarIn);
  LinearValueType * getMaxDeviationFromAverageMiddle();
  void setMaxDeviationFromAverageMiddle(LinearValueType * MaxDeviationFromAverageMiddleIn);
  LinearValueType * getTwiceStandardDeviationNear();
  void setTwiceStandardDeviationNear(LinearValueType * TwiceStandardDeviationNearIn);
  LinearValueType * getTwiceStandardDeviationFar();
  void setTwiceStandardDeviationFar(LinearValueType * TwiceStandardDeviationFarIn);
  LinearValueType * getTwiceStandardDeviationMiddle();
  void setTwiceStandardDeviationMiddle(LinearValueType * TwiceStandardDeviationMiddleIn);

protected:
  LinearValueType * MaxDeviationFromAverageNear;
  LinearValueType * MaxDeviationFromAverageFar;
  LinearValueType * MaxDeviationFromAverageMiddle;
  LinearValueType * TwiceStandardDeviationNear;
  LinearValueType * TwiceStandardDeviationFar;
  LinearValueType * TwiceStandardDeviationMiddle;
};

/* ***************************************************************** */

class SphericalResolutionType :
  public ResolutionBaseType
{
public:
  SphericalResolutionType();
  SphericalResolutionType(
    SphericalResolutionTypeChoicePair * SphericalResolutionTypePairIn);
  ~SphericalResolutionType();
  void printSelf(FILE * outFile);
  SphericalResolutionTypeChoicePair * getSphericalResolutionTypeChoicePair();
  void setSphericalResolutionTypeChoicePair(SphericalResolutionTypeChoicePair * SphericalResolutionTypePairIn);

protected:
  SphericalResolutionTypeChoicePair * SphericalResolutionTypePair;
};

/* ***************************************************************** */

union SphericalResolutionTypeVal
{
  SphericalResolu_1197_Type * SphericalResolu_1197;
  RAPZResolutionType * RAPResolution;
};

/* ***************************************************************** */

class SphericalResolutionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SphericalResolu_1197E,
    RAPResolutionE };
  SphericalResolutionTypeChoicePair();
  SphericalResolutionTypeChoicePair(
    whichOne SphericalResolutionTypeTypeIn,
    SphericalResolutionTypeVal * SphericalResolutionTypeValueIn);
  ~SphericalResolutionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SphericalResolutionTypeType;
  SphericalResolutionTypeVal * SphericalResolutionTypeValue;
};

/* ***************************************************************** */

class StiffnessType :
  public XmlTypeBase
{
public:
  StiffnessType();
  StiffnessType(
    UserDefinedUnitValueType * XStiffnessIn,
    UserDefinedUnitValueType * YStiffnessIn,
    UserDefinedUnitValueType * ZStiffnessIn);
  ~StiffnessType();
  void printSelf(FILE * outFile);

  UserDefinedUnitValueType * getXStiffness();
  void setXStiffness(UserDefinedUnitValueType * XStiffnessIn);
  UserDefinedUnitValueType * getYStiffness();
  void setYStiffness(UserDefinedUnitValueType * YStiffnessIn);
  UserDefinedUnitValueType * getZStiffness();
  void setZStiffness(UserDefinedUnitValueType * ZStiffnessIn);

protected:
  UserDefinedUnitValueType * XStiffness;
  UserDefinedUnitValueType * YStiffness;
  UserDefinedUnitValueType * ZStiffness;
};

/* ***************************************************************** */

class StructuredLightSensorType :
  public SensorType
{
public:
  StructuredLightSensorType();
  StructuredLightSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    XmlString * OutputFileFormatIn,
    LinearValueType * MeasurementFieldSizeIn,
    XmlInt * NumberOfCameraPixelsIn,
    XmlString * LightSourceIn,
    UserDefinedUnitValueType * MeasurementRateIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    LinearValueType * StandOffDistanceIn,
    LinearValueType * MaxPermissibleProbingErrorIn,
    LaserType * LaserIn);
  StructuredLightSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    XmlString * OutputFileFormatIn,
    LinearValueType * MeasurementFieldSizeIn,
    XmlInt * NumberOfCameraPixelsIn,
    XmlString * LightSourceIn,
    UserDefinedUnitValueType * MeasurementRateIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    LinearValueType * StandOffDistanceIn,
    LinearValueType * MaxPermissibleProbingErrorIn,
    LaserType * LaserIn);
  ~StructuredLightSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getOutputFileFormat();
  void setOutputFileFormat(XmlString * OutputFileFormatIn);
  LinearValueType * getMeasurementFieldSize();
  void setMeasurementFieldSize(LinearValueType * MeasurementFieldSizeIn);
  XmlInt * getNumberOfCameraPixels();
  void setNumberOfCameraPixels(XmlInt * NumberOfCameraPixelsIn);
  XmlString * getLightSource();
  void setLightSource(XmlString * LightSourceIn);
  UserDefinedUnitValueType * getMeasurementRate();
  void setMeasurementRate(UserDefinedUnitValueType * MeasurementRateIn);
  WorkingVolumeBaseType * getWorkingVolume();
  void setWorkingVolume(WorkingVolumeBaseType * WorkingVolumeIn);
  LinearValueType * getStandOffDistance();
  void setStandOffDistance(LinearValueType * StandOffDistanceIn);
  LinearValueType * getMaxPermissibleProbingError();
  void setMaxPermissibleProbingError(LinearValueType * MaxPermissibleProbingErrorIn);
  LaserType * getLaser();
  void setLaser(LaserType * LaserIn);

protected:
  XmlString * OutputFileFormat;
  LinearValueType * MeasurementFieldSize;
  XmlInt * NumberOfCameraPixels;
  XmlString * LightSource;
  UserDefinedUnitValueType * MeasurementRate;
  WorkingVolumeBaseType * WorkingVolume;
  LinearValueType * StandOffDistance;
  LinearValueType * MaxPermissibleProbingError;
  LaserType * Laser;
};

/* ***************************************************************** */

class TableErrorsType :
  public XmlTypeBase
{
public:
  TableErrorsType();
  TableErrorsType(
    LinearValueType * AxialErrorIn,
    LinearValueType * RadialErrorIn,
    LinearValueType * TangentialErrorIn);
  ~TableErrorsType();
  void printSelf(FILE * outFile);

  LinearValueType * getAxialError();
  void setAxialError(LinearValueType * AxialErrorIn);
  LinearValueType * getRadialError();
  void setRadialError(LinearValueType * RadialErrorIn);
  LinearValueType * getTangentialError();
  void setTangentialError(LinearValueType * TangentialErrorIn);

protected:
  LinearValueType * AxialError;
  LinearValueType * RadialError;
  LinearValueType * TangentialError;
};

/* ***************************************************************** */

class TargetMirrorEnumType :
  public XmlNMTOKEN
{
public:
  TargetMirrorEnumType();
  TargetMirrorEnumType(
    const char * valIn);
  ~TargetMirrorEnumType();
  bool TargetMirrorEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class TemperatureCompensationEnumType :
  public XmlNMTOKEN
{
public:
  TemperatureCompensationEnumType();
  TemperatureCompensationEnumType(
    const char * valIn);
  ~TemperatureCompensationEnumType();
  bool TemperatureCompensationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class TemperatureCompensationType :
  public XmlTypeBase
{
public:
  TemperatureCompensationType();
  TemperatureCompensationType(
    TemperatureCompensationTypeChoicePair * TemperatureCompensationTypePairIn);
  ~TemperatureCompensationType();
  void printSelf(FILE * outFile);

  TemperatureCompensationTypeChoicePair * getTemperatureCompensationTypePair();
  void setTemperatureCompensationTypePair(TemperatureCompensationTypeChoicePair * TemperatureCompensationTypePairIn);

protected:
  TemperatureCompensationTypeChoicePair * TemperatureCompensationTypePair;
};

/* ***************************************************************** */

union TemperatureCompensationTypeVal
{
  TemperatureCompensationEnumType * TemperatureCompensationEnum;
  XmlString * OtherTemperatureCompensation;
};

/* ***************************************************************** */

class TemperatureCompensationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TemperatureCompensationEnumE,
    OtherTemperatureCompensationE };
  TemperatureCompensationTypeChoicePair();
  TemperatureCompensationTypeChoicePair(
    whichOne TemperatureCompensationTypeTypeIn,
    TemperatureCompensationTypeVal * TemperatureCompensationTypeValueIn);
  ~TemperatureCompensationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TemperatureCompensationTypeType;
  TemperatureCompensationTypeVal * TemperatureCompensationTypeValue;
};

/* ***************************************************************** */

class TemperatureType :
  public XmlTypeBase
{
public:
  TemperatureType();
  TemperatureType(
    AttributesType * AttributesIn,
    TemperatureValueType * TemperatureIn,
    XmlDateTime * TimeStampIn);
  ~TemperatureType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  TemperatureValueType * getTemperature();
  void setTemperature(TemperatureValueType * TemperatureIn);
  XmlDateTime * getTimeStamp();
  void setTimeStamp(XmlDateTime * TimeStampIn);

protected:
  AttributesType * Attributes;
  TemperatureValueType * Temperature;
  XmlDateTime * TimeStamp;
};

/* ***************************************************************** */

class TemperatureTypeLisd :
  public std::list<TemperatureType *>,
  public XmlSchemaInstanceBase
{
public:
  TemperatureTypeLisd();
  TemperatureTypeLisd(
    TemperatureType * aTemperatureType);
  ~TemperatureTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TemperaturesType :
  public XmlTypeBase
{
public:
  TemperaturesType();
  TemperaturesType(
    TemperatureTypeLisd * TemperatureIn);
  TemperaturesType(
    NaturalType * nIn,
    TemperatureTypeLisd * TemperatureIn);
  ~TemperaturesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  TemperatureTypeLisd * getTemperature();
  void setTemperature(TemperatureTypeLisd *);

protected:
  NaturalType * n;
  TemperatureTypeLisd * Temperature;
};

/* ***************************************************************** */

class TipEndGeometryEnumType :
  public XmlNMTOKEN
{
public:
  TipEndGeometryEnumType();
  TipEndGeometryEnumType(
    const char * valIn);
  ~TipEndGeometryEnumType();
  bool TipEndGeometryEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class TipEndGeometryType :
  public XmlTypeBase
{
public:
  TipEndGeometryType();
  TipEndGeometryType(
    TipEndGeometryTypeChoicePair * TipEndGeometryTypePairIn);
  ~TipEndGeometryType();
  void printSelf(FILE * outFile);

  TipEndGeometryTypeChoicePair * getTipEndGeometryTypePair();
  void setTipEndGeometryTypePair(TipEndGeometryTypeChoicePair * TipEndGeometryTypePairIn);

protected:
  TipEndGeometryTypeChoicePair * TipEndGeometryTypePair;
};

/* ***************************************************************** */

union TipEndGeometryTypeVal
{
  TipEndGeometryEnumType * TipEndGeometryEnum;
  XmlString * OtherTipEndGeometry;
};

/* ***************************************************************** */

class TipEndGeometryTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TipEndGeometryEnumE,
    OtherTipEndGeometryE };
  TipEndGeometryTypeChoicePair();
  TipEndGeometryTypeChoicePair(
    whichOne TipEndGeometryTypeTypeIn,
    TipEndGeometryTypeVal * TipEndGeometryTypeValueIn);
  ~TipEndGeometryTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TipEndGeometryTypeType;
  TipEndGeometryTypeVal * TipEndGeometryTypeValue;
};

/* ***************************************************************** */

class ToolBaseType :
  public MeasurementResourceBaseType
{
public:
  ToolBaseType();
  ToolBaseType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  ToolBaseType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  virtual ~ToolBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class ToolBaseTypeLisd :
  public std::list<ToolBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  ToolBaseTypeLisd();
  ToolBaseTypeLisd(
    ToolBaseType * aToolBaseType);
  ~ToolBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ToolWithDetachableSensorsType :
  public ToolBaseType
{
public:
  ToolWithDetachableSensorsType();
  ToolWithDetachableSensorsType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ArrayReferenceType * SensorIdsIn);
  ToolWithDetachableSensorsType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ArrayReferenceType * SensorIdsIn);
  ~ToolWithDetachableSensorsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getSensorIds();
  void setSensorIds(ArrayReferenceType * SensorIdsIn);

protected:
  ArrayReferenceType * SensorIds;
};

/* ***************************************************************** */

class ToolWithIntegratedSensorBaseType :
  public ToolBaseType
{
public:
  ToolWithIntegratedSensorBaseType();
  ToolWithIntegratedSensorBaseType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  ToolWithIntegratedSensorBaseType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  virtual ~ToolWithIntegratedSensorBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class ToolWithLVDTSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithLVDTSensorType();
  ToolWithLVDTSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    LinearVariableDifferentialTransformerSensorType * LVDTSensorIn);
  ToolWithLVDTSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    LinearVariableDifferentialTransformerSensorType * LVDTSensorIn);
  ~ToolWithLVDTSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearVariableDifferentialTransformerSensorType * getLVDTSensor();
  void setLVDTSensor(LinearVariableDifferentialTransformerSensorType * LVDTSensorIn);

protected:
  LinearVariableDifferentialTransformerSensorType * LVDTSensor;
};

/* ***************************************************************** */

class ToolWithLaserTriangulationSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithLaserTriangulationSensorType();
  ToolWithLaserTriangulationSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    LaserTriangulationSensorType * LaserTriangulationSensorIn);
  ToolWithLaserTriangulationSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    LaserTriangulationSensorType * LaserTriangulationSensorIn);
  ~ToolWithLaserTriangulationSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LaserTriangulationSensorType * getLaserTriangulationSensor();
  void setLaserTriangulationSensor(LaserTriangulationSensorType * LaserTriangulationSensorIn);

protected:
  LaserTriangulationSensorType * LaserTriangulationSensor;
};

/* ***************************************************************** */

class ToolWithMagnetoInductiveSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithMagnetoInductiveSensorType();
  ToolWithMagnetoInductiveSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    MagnetoInductiveSensorType * MagnetoInductiveSensorIn);
  ToolWithMagnetoInductiveSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    MagnetoInductiveSensorType * MagnetoInductiveSensorIn);
  ~ToolWithMagnetoInductiveSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  MagnetoInductiveSensorType * getMagnetoInductiveSensor();
  void setMagnetoInductiveSensor(MagnetoInductiveSensorType * MagnetoInductiveSensorIn);

protected:
  MagnetoInductiveSensorType * MagnetoInductiveSensor;
};

/* ***************************************************************** */

class ToolWithSimpleTactileProbeSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithSimpleTactileProbeSensorType();
  ToolWithSimpleTactileProbeSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    SimpleTactileProbeSensorType * SimpleTactileProbeSensorIn);
  ToolWithSimpleTactileProbeSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    SimpleTactileProbeSensorType * SimpleTactileProbeSensorIn);
  ~ToolWithSimpleTactileProbeSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SimpleTactileProbeSensorType * getSimpleTactileProbeSensor();
  void setSimpleTactileProbeSensor(SimpleTactileProbeSensorType * SimpleTactileProbeSensorIn);

protected:
  SimpleTactileProbeSensorType * SimpleTactileProbeSensor;
};

/* ***************************************************************** */

class ToolWithStructuredLightSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithStructuredLightSensorType();
  ToolWithStructuredLightSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    StructuredLightSensorType * StructuredLightSensorIn);
  ToolWithStructuredLightSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    StructuredLightSensorType * StructuredLightSensorIn);
  ~ToolWithStructuredLightSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  StructuredLightSensorType * getStructuredLightSensor();
  void setStructuredLightSensor(StructuredLightSensorType * StructuredLightSensorIn);

protected:
  StructuredLightSensorType * StructuredLightSensor;
};

/* ***************************************************************** */

class ToolWithUltrasonicSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithUltrasonicSensorType();
  ToolWithUltrasonicSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    UltrasonicSensorType * UltrasonicSensorIn);
  ToolWithUltrasonicSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    UltrasonicSensorType * UltrasonicSensorIn);
  ~ToolWithUltrasonicSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UltrasonicSensorType * getUltrasonicSensor();
  void setUltrasonicSensor(UltrasonicSensorType * UltrasonicSensorIn);

protected:
  UltrasonicSensorType * UltrasonicSensor;
};

/* ***************************************************************** */

class ToolsType :
  public XmlTypeBase
{
public:
  ToolsType();
  ToolsType(
    ToolBaseTypeLisd * ToolIn);
  ToolsType(
    NaturalType * nIn,
    ToolBaseTypeLisd * ToolIn);
  ~ToolsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ToolBaseTypeLisd * getTool();
  void setTool(ToolBaseTypeLisd *);

protected:
  NaturalType * n;
  ToolBaseTypeLisd * Tool;
};

/* ***************************************************************** */

class TwentyLinearValuesType :
  public XmlTypeBase
{
public:
  TwentyLinearValuesType();
  TwentyLinearValuesType(
    LinearValueTypeLisd * LinearValueIn);
  TwentyLinearValuesType(
    NaturalType * nIn,
    LinearValueTypeLisd * LinearValueIn);
  ~TwentyLinearValuesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  LinearValueTypeLisd * getLinearValue();
  void setLinearValue(LinearValueTypeLisd *);

protected:
  NaturalType * n;
  LinearValueTypeLisd * LinearValue;
};

/* ***************************************************************** */

class TypeOfScaleEnumType :
  public XmlNMTOKEN
{
public:
  TypeOfScaleEnumType();
  TypeOfScaleEnumType(
    const char * valIn);
  ~TypeOfScaleEnumType();
  bool TypeOfScaleEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class TypeOfScaleType :
  public XmlTypeBase
{
public:
  TypeOfScaleType();
  TypeOfScaleType(
    TypeOfScaleTypeChoicePair * TypeOfScaleTypePairIn);
  ~TypeOfScaleType();
  void printSelf(FILE * outFile);

  TypeOfScaleTypeChoicePair * getTypeOfScaleTypePair();
  void setTypeOfScaleTypePair(TypeOfScaleTypeChoicePair * TypeOfScaleTypePairIn);

protected:
  TypeOfScaleTypeChoicePair * TypeOfScaleTypePair;
};

/* ***************************************************************** */

union TypeOfScaleTypeVal
{
  TypeOfScaleEnumType * TypeOfScaleEnum;
  XmlString * OtherTypeOfScale;
};

/* ***************************************************************** */

class TypeOfScaleTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TypeOfScaleEnumE,
    OtherTypeOfScaleE };
  TypeOfScaleTypeChoicePair();
  TypeOfScaleTypeChoicePair(
    whichOne TypeOfScaleTypeTypeIn,
    TypeOfScaleTypeVal * TypeOfScaleTypeValueIn);
  ~TypeOfScaleTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TypeOfScaleTypeType;
  TypeOfScaleTypeVal * TypeOfScaleTypeValue;
};

/* ***************************************************************** */

class UltrasonicSensorType :
  public SensorType
{
public:
  UltrasonicSensorType();
  UltrasonicSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * SamplingFrequencyIn,
    UserDefinedUnitValueType * AppliedFrequencyIn,
    TimeValueType * MaxResponseTimeIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);
  UltrasonicSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * SamplingFrequencyIn,
    UserDefinedUnitValueType * AppliedFrequencyIn,
    TimeValueType * MaxResponseTimeIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);
  ~UltrasonicSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  UserDefinedUnitValueType * getSamplingFrequency();
  void setSamplingFrequency(UserDefinedUnitValueType * SamplingFrequencyIn);
  UserDefinedUnitValueType * getAppliedFrequency();
  void setAppliedFrequency(UserDefinedUnitValueType * AppliedFrequencyIn);
  TimeValueType * getMaxResponseTime();
  void setMaxResponseTime(TimeValueType * MaxResponseTimeIn);
  UserDefinedUnitValueType * getShockTolerance();
  void setShockTolerance(UserDefinedUnitValueType * ShockToleranceIn);
  UserDefinedUnitValueType * getVibrationTolerance();
  void setVibrationTolerance(UserDefinedUnitValueType * VibrationToleranceIn);
  UserDefinedUnitValueType * getMinPowerSupplyVoltage();
  void setMinPowerSupplyVoltage(UserDefinedUnitValueType * MinPowerSupplyVoltageIn);
  UserDefinedUnitValueType * getMaxPowerSupplyVoltage();
  void setMaxPowerSupplyVoltage(UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);

protected:
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  UserDefinedUnitValueType * SamplingFrequency;
  UserDefinedUnitValueType * AppliedFrequency;
  TimeValueType * MaxResponseTime;
  UserDefinedUnitValueType * ShockTolerance;
  UserDefinedUnitValueType * VibrationTolerance;
  UserDefinedUnitValueType * MinPowerSupplyVoltage;
  UserDefinedUnitValueType * MaxPowerSupplyVoltage;
};

/* ***************************************************************** */

class UserAxisBaseType :
  public XmlTypeBase
{
public:
  UserAxisBaseType();
  virtual ~UserAxisBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class UserDefinedAxisType :
  public LinearOrRotaryAxisType
{
public:
  UserDefinedAxisType();
  UserDefinedAxisType(
    UserAxisBaseType * AxisIn,
    AttributesType * AttributesIn,
    XmlToken * AxisNameIn);
  ~UserDefinedAxisType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlToken * getAxisName();
  void setAxisName(XmlToken * AxisNameIn);

protected:
  AttributesType * Attributes;
  XmlToken * AxisName;
};

/* ***************************************************************** */

class UserDefinedResolutionType :
  public ResolutionBaseType
{
public:
  UserDefinedResolutionType();
  UserDefinedResolutionType(
    UserDefinedResolutionTypeChoicePair * UserDefinedResolutionTypePairIn);
  ~UserDefinedResolutionType();
  void printSelf(FILE * outFile);
  UserDefinedResolutionTypeChoicePair * getUserDefinedResolutionTypeChoicePair();
  void setUserDefinedResolutionTypeChoicePair(UserDefinedResolutionTypeChoicePair * UserDefinedResolutionTypePairIn);

protected:
  UserDefinedResolutionTypeChoicePair * UserDefinedResolutionTypePair;
};

/* ***************************************************************** */

union UserDefinedResolutionTypeVal
{
  UserDefinedReso_1198_Type * UserDefinedReso_1198;
  ABCResolutionType * ABCResolution;
};

/* ***************************************************************** */

class UserDefinedResolutionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    UserDefinedReso_1198E,
    ABCResolutionE };
  UserDefinedResolutionTypeChoicePair();
  UserDefinedResolutionTypeChoicePair(
    whichOne UserDefinedResolutionTypeTypeIn,
    UserDefinedResolutionTypeVal * UserDefinedResolutionTypeValueIn);
  ~UserDefinedResolutionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne UserDefinedResolutionTypeType;
  UserDefinedResolutionTypeVal * UserDefinedResolutionTypeValue;
};

/* ***************************************************************** */

class VolumetricPerformanceTestType :
  public XmlTypeBase
{
public:
  VolumetricPerformanceTestType();
  VolumetricPerformanceTestType(
    TwentyLinearValuesType * DeviationsFromCalibrationIn,
    LinearValueType * TwiceStandardDeviationIn);
  ~VolumetricPerformanceTestType();
  void printSelf(FILE * outFile);

  TwentyLinearValuesType * getDeviationsFromCalibration();
  void setDeviationsFromCalibration(TwentyLinearValuesType * DeviationsFromCalibrationIn);
  LinearValueType * getTwiceStandardDeviation();
  void setTwiceStandardDeviation(LinearValueType * TwiceStandardDeviationIn);

protected:
  TwentyLinearValuesType * DeviationsFromCalibration;
  LinearValueType * TwiceStandardDeviation;
};

/* ***************************************************************** */

class WorkingVolumeBaseType :
  public XmlTypeBase
{
public:
  WorkingVolumeBaseType();
  virtual ~WorkingVolumeBaseType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class XYZLinearSpecificationType :
  public XmlTypeBase
{
public:
  XYZLinearSpecificationType();
  XYZLinearSpecificationType(
    LinearValueType * XIn,
    LinearValueType * YIn,
    LinearValueType * ZIn);
  ~XYZLinearSpecificationType();
  void printSelf(FILE * outFile);

  LinearValueType * getX();
  void setX(LinearValueType * XIn);
  LinearValueType * getY();
  void setY(LinearValueType * YIn);
  LinearValueType * getZ();
  void setZ(LinearValueType * ZIn);

protected:
  LinearValueType * X;
  LinearValueType * Y;
  LinearValueType * Z;
};

/* ***************************************************************** */

class XYZResolutionType :
  public XmlTypeBase
{
public:
  XYZResolutionType();
  XYZResolutionType(
    LinearValueType * XResolutionIn,
    LinearValueType * YResolutionIn,
    LinearValueType * ZResolutionIn);
  ~XYZResolutionType();
  void printSelf(FILE * outFile);

  LinearValueType * getXResolution();
  void setXResolution(LinearValueType * XResolutionIn);
  LinearValueType * getYResolution();
  void setYResolution(LinearValueType * YResolutionIn);
  LinearValueType * getZResolution();
  void setZResolution(LinearValueType * ZResolutionIn);

protected:
  LinearValueType * XResolution;
  LinearValueType * YResolution;
  LinearValueType * ZResolution;
};

/* ***************************************************************** */

class CartesianResolu_1195_Type :
  public XmlTypeBase
{
public:
  CartesianResolu_1195_Type();
  CartesianResolu_1195_Type(
    LinearValueType * CombinedCartesianResolutionIn,
    XYZResolutionType * XYZResolutionIn);
  ~CartesianResolu_1195_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getCombinedCartesianResolution();
  void setCombinedCartesianResolution(LinearValueType * CombinedCartesianResolutionIn);
  XYZResolutionType * getXYZResolution();
  void setXYZResolution(XYZResolutionType * XYZResolutionIn);

protected:
  LinearValueType * CombinedCartesianResolution;
  XYZResolutionType * XYZResolution;
};

/* ***************************************************************** */

class MeasurementReso_1196_Type :
  public XmlTypeBase
{
public:
  MeasurementReso_1196_Type();
  MeasurementReso_1196_Type(
    MeasurementReso_1196_TypeChoicePair * MeasurementReso_1196_TypePairIn);
  ~MeasurementReso_1196_Type();
  void printSelf(FILE * outFile);

  MeasurementReso_1196_TypeChoicePair * getMeasurementReso_1196_TypePair();
  void setMeasurementReso_1196_TypePair(MeasurementReso_1196_TypeChoicePair * MeasurementReso_1196_TypePairIn);

protected:
  MeasurementReso_1196_TypeChoicePair * MeasurementReso_1196_TypePair;
};

/* ***************************************************************** */

union MeasurementReso_1196_TypeVal
{
  QIFReferenceType * LocationId;
  LocationType * Location;
};

/* ***************************************************************** */

class MeasurementReso_1196_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LocationIdE,
    LocationE };
  MeasurementReso_1196_TypeChoicePair();
  MeasurementReso_1196_TypeChoicePair(
    whichOne MeasurementReso_1196_TypeTypeIn,
    MeasurementReso_1196_TypeVal * MeasurementReso_1196_TypeValueIn);
  ~MeasurementReso_1196_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasurementReso_1196_TypeType;
  MeasurementReso_1196_TypeVal * MeasurementReso_1196_TypeValue;
};

/* ***************************************************************** */

class SphericalResolu_1197_Type :
  public XmlTypeBase
{
public:
  SphericalResolu_1197_Type();
  SphericalResolu_1197_Type(
    CombinedSphericalResolutionType * CombinedSphericalResolutionIn,
    RAPZResolutionType * RAPZResolutionIn);
  ~SphericalResolu_1197_Type();
  void printSelf(FILE * outFile);

  CombinedSphericalResolutionType * getCombinedSphericalResolution();
  void setCombinedSphericalResolution(CombinedSphericalResolutionType * CombinedSphericalResolutionIn);
  RAPZResolutionType * getRAPZResolution();
  void setRAPZResolution(RAPZResolutionType * RAPZResolutionIn);

protected:
  CombinedSphericalResolutionType * CombinedSphericalResolution;
  RAPZResolutionType * RAPZResolution;
};

/* ***************************************************************** */

class UserDefinedReso_1198_Type :
  public XmlTypeBase
{
public:
  UserDefinedReso_1198_Type();
  UserDefinedReso_1198_Type(
    CombinedUserDefinedResolutionType * CombinedUserDefinedResolutionIn,
    ABCResolutionType * ABCResolutionIn);
  ~UserDefinedReso_1198_Type();
  void printSelf(FILE * outFile);

  CombinedUserDefinedResolutionType * getCombinedUserDefinedResolution();
  void setCombinedUserDefinedResolution(CombinedUserDefinedResolutionType * CombinedUserDefinedResolutionIn);
  ABCResolutionType * getABCResolution();
  void setABCResolution(ABCResolutionType * ABCResolutionIn);

protected:
  CombinedUserDefinedResolutionType * CombinedUserDefinedResolution;
  ABCResolutionType * ABCResolution;
};

/* ***************************************************************** */

class AACMMAccuracyType :
  public MeasurementDeviceAccuracyBaseType
{
public:
  AACMMAccuracyType();
  AACMMAccuracyType(
    EnvironmentalRangeType * EnvironmentalRangeIn,
    CMMAccuracyTestBaseType * AACMMAccuracyTestIn,
    AccuracySourceType * AccuracySourceIn);
  ~AACMMAccuracyType();
  void printSelf(FILE * outFile);

  CMMAccuracyTestBaseType * getAACMMAccuracyTest();
  void setAACMMAccuracyTest(CMMAccuracyTestBaseType * AACMMAccuracyTestIn);
  AccuracySourceType * getAccuracySource();
  void setAccuracySource(AccuracySourceType * AccuracySourceIn);

protected:
  CMMAccuracyTestBaseType * AACMMAccuracyTest;
  AccuracySourceType * AccuracySource;
};

/* ***************************************************************** */

class AACMMAccuracyTypeLisd :
  public std::list<AACMMAccuracyType *>,
  public XmlSchemaInstanceBase
{
public:
  AACMMAccuracyTypeLisd();
  AACMMAccuracyTypeLisd(
    AACMMAccuracyType * aAACMMAccuracyType);
  ~AACMMAccuracyTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AACMMB89TestType :
  public CMMAccuracyTestBaseType
{
public:
  AACMMB89TestType();
  AACMMB89TestType(
    EffectiveDiameterPerformanceTestType * EffectiveDiameterPerformanceTestIn,
    SinglePointArticulationPerformanceTestType * SinglePointArticulationPerformanceTestIn,
    VolumetricPerformanceTestType * VolumetricPerformanceTestIn);
  ~AACMMB89TestType();
  void printSelf(FILE * outFile);

  EffectiveDiameterPerformanceTestType * getEffectiveDiameterPerformanceTest();
  void setEffectiveDiameterPerformanceTest(EffectiveDiameterPerformanceTestType * EffectiveDiameterPerformanceTestIn);
  SinglePointArticulationPerformanceTestType * getSinglePointArticulationPerformanceTest();
  void setSinglePointArticulationPerformanceTest(SinglePointArticulationPerformanceTestType * SinglePointArticulationPerformanceTestIn);
  VolumetricPerformanceTestType * getVolumetricPerformanceTest();
  void setVolumetricPerformanceTest(VolumetricPerformanceTestType * VolumetricPerformanceTestIn);

protected:
  EffectiveDiameterPerformanceTestType * EffectiveDiameterPerformanceTest;
  SinglePointArticulationPerformanceTestType * SinglePointArticulationPerformanceTest;
  VolumetricPerformanceTestType * VolumetricPerformanceTest;
};

/* ***************************************************************** */

class AngleFunctionDiscreteType :
  public FunctionDiscreteType
{
public:
  AngleFunctionDiscreteType();
  AngleFunctionDiscreteType(
    ListDoubleType * DomainValuesIn,
    ListDoubleType * RangeValuesIn,
    XmlToken * DomainLinearUnitIn,
    XmlToken * RangeAngularUnitIn);
  AngleFunctionDiscreteType(
    NaturalType * nIn,
    ListDoubleType * DomainValuesIn,
    ListDoubleType * RangeValuesIn,
    XmlToken * DomainLinearUnitIn,
    XmlToken * RangeAngularUnitIn);
  ~AngleFunctionDiscreteType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlToken * getDomainLinearUnit();
  void setDomainLinearUnit(XmlToken * DomainLinearUnitIn);
  XmlToken * getRangeAngularUnit();
  void setRangeAngularUnit(XmlToken * RangeAngularUnitIn);

protected:
  XmlToken * DomainLinearUnit;
  XmlToken * RangeAngularUnit;
};

/* ***************************************************************** */

class CarriageType :
  public MeasurementResourceBaseType
{
public:
  CarriageType();
  CarriageType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ArrayReferenceType * ToolIdsIn);
  CarriageType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ArrayReferenceType * ToolIdsIn);
  ~CarriageType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ArrayReferenceType * getToolIds();
  void setToolIds(ArrayReferenceType * ToolIdsIn);

protected:
  ArrayReferenceType * ToolIds;
};

/* ***************************************************************** */

class CarriageTypeLisd :
  public std::list<CarriageType *>,
  public XmlSchemaInstanceBase
{
public:
  CarriageTypeLisd();
  CarriageTypeLisd(
    CarriageType * aCarriageType);
  ~CarriageTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CartesianCMMAccuracyType :
  public MeasurementDeviceAccuracyBaseType
{
public:
  CartesianCMMAccuracyType();
  CartesianCMMAccuracyType(
    EnvironmentalRangeType * EnvironmentalRangeIn,
    CMMAccuracyTestBaseType * CartesianCMMAccuracyTestIn,
    AccuracySourceType * AccuracySourceIn);
  ~CartesianCMMAccuracyType();
  void printSelf(FILE * outFile);

  CMMAccuracyTestBaseType * getCartesianCMMAccuracyTest();
  void setCartesianCMMAccuracyTest(CMMAccuracyTestBaseType * CartesianCMMAccuracyTestIn);
  AccuracySourceType * getAccuracySource();
  void setAccuracySource(AccuracySourceType * AccuracySourceIn);

protected:
  CMMAccuracyTestBaseType * CartesianCMMAccuracyTest;
  AccuracySourceType * AccuracySource;
};

/* ***************************************************************** */

class CartesianCMMAccuracyTypeLisd :
  public std::list<CartesianCMMAccuracyType *>,
  public XmlSchemaInstanceBase
{
public:
  CartesianCMMAccuracyTypeLisd();
  CartesianCMMAccuracyTypeLisd(
    CartesianCMMAccuracyType * aCartesianCMMAccuracyType);
  ~CartesianCMMAccuracyTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CartesianMeasurementDeviceScalesType :
  public MeasurementDeviceScalesBaseType
{
public:
  CartesianMeasurementDeviceScalesType();
  CartesianMeasurementDeviceScalesType(
    MeasurementDeviceScaleType * XScaleIn,
    MeasurementDeviceScaleType * YScaleIn,
    MeasurementDeviceScaleType * ZScaleIn);
  ~CartesianMeasurementDeviceScalesType();
  void printSelf(FILE * outFile);

  MeasurementDeviceScaleType * getXScale();
  void setXScale(MeasurementDeviceScaleType * XScaleIn);
  MeasurementDeviceScaleType * getYScale();
  void setYScale(MeasurementDeviceScaleType * YScaleIn);
  MeasurementDeviceScaleType * getZScale();
  void setZScale(MeasurementDeviceScaleType * ZScaleIn);

protected:
  MeasurementDeviceScaleType * XScale;
  MeasurementDeviceScaleType * YScale;
  MeasurementDeviceScaleType * ZScale;
};

/* ***************************************************************** */

class CartesianResolutionType :
  public ResolutionBaseType
{
public:
  CartesianResolutionType();
  CartesianResolutionType(
    CartesianResolutionTypeChoicePair * CartesianResolutionTypePairIn);
  ~CartesianResolutionType();
  void printSelf(FILE * outFile);
  CartesianResolutionTypeChoicePair * getCartesianResolutionTypeChoicePair();
  void setCartesianResolutionTypeChoicePair(CartesianResolutionTypeChoicePair * CartesianResolutionTypePairIn);

protected:
  CartesianResolutionTypeChoicePair * CartesianResolutionTypePair;
};

/* ***************************************************************** */

union CartesianResolutionTypeVal
{
  CartesianResolu_1195_Type * CartesianResolu_1195;
  XYZResolutionType * XYZResolution;
};

/* ***************************************************************** */

class CartesianResolutionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CartesianResolu_1195E,
    XYZResolutionE };
  CartesianResolutionTypeChoicePair();
  CartesianResolutionTypeChoicePair(
    whichOne CartesianResolutionTypeTypeIn,
    CartesianResolutionTypeVal * CartesianResolutionTypeValueIn);
  ~CartesianResolutionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne CartesianResolutionTypeType;
  CartesianResolutionTypeVal * CartesianResolutionTypeValue;
};

/* ***************************************************************** */

class CartesianWorkingVolumeType :
  public WorkingVolumeBaseType
{
public:
  CartesianWorkingVolumeType();
  CartesianWorkingVolumeType(
    LinearValueType * XAxisLengthIn,
    LinearValueType * YAxisLengthIn,
    LinearValueType * ZAxisLengthIn);
  ~CartesianWorkingVolumeType();
  void printSelf(FILE * outFile);

  LinearValueType * getXAxisLength();
  void setXAxisLength(LinearValueType * XAxisLengthIn);
  LinearValueType * getYAxisLength();
  void setYAxisLength(LinearValueType * YAxisLengthIn);
  LinearValueType * getZAxisLength();
  void setZAxisLength(LinearValueType * ZAxisLengthIn);

protected:
  LinearValueType * XAxisLength;
  LinearValueType * YAxisLength;
  LinearValueType * ZAxisLength;
};

/* ***************************************************************** */

class ChargeCoupledDeviceCameraSensorType :
  public SensorType
{
public:
  ChargeCoupledDeviceCameraSensorType();
  ChargeCoupledDeviceCameraSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    XmlInt * NumberOfPixelsIn,
    UserDefinedUnitValueType * MaxReadoutFrequencyIn,
    LinearValueType * HorizontalFieldOfViewIn,
    LinearValueType * VerticalFieldOfViewIn,
    UserDefinedUnitValueType * MaxReadNoiseIn,
    PositiveDecimalType * MaxFrameRateIn,
    LinearValueType * PixelSizeIn,
    UserDefinedUnitValueType * SustainedDataRateIn,
    UserDefinedUnitValueType * DarkCurrentIn,
    UserDefinedUnitValueType * MaxPixelClockSpeedIn,
    UserDefinedUnitValueType * LinearityIn,
    UserDefinedUnitValueType * MaxOutputVoltageIn);
  ChargeCoupledDeviceCameraSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    XmlInt * NumberOfPixelsIn,
    UserDefinedUnitValueType * MaxReadoutFrequencyIn,
    LinearValueType * HorizontalFieldOfViewIn,
    LinearValueType * VerticalFieldOfViewIn,
    UserDefinedUnitValueType * MaxReadNoiseIn,
    PositiveDecimalType * MaxFrameRateIn,
    LinearValueType * PixelSizeIn,
    UserDefinedUnitValueType * SustainedDataRateIn,
    UserDefinedUnitValueType * DarkCurrentIn,
    UserDefinedUnitValueType * MaxPixelClockSpeedIn,
    UserDefinedUnitValueType * LinearityIn,
    UserDefinedUnitValueType * MaxOutputVoltageIn);
  ~ChargeCoupledDeviceCameraSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlInt * getNumberOfPixels();
  void setNumberOfPixels(XmlInt * NumberOfPixelsIn);
  UserDefinedUnitValueType * getMaxReadoutFrequency();
  void setMaxReadoutFrequency(UserDefinedUnitValueType * MaxReadoutFrequencyIn);
  LinearValueType * getHorizontalFieldOfView();
  void setHorizontalFieldOfView(LinearValueType * HorizontalFieldOfViewIn);
  LinearValueType * getVerticalFieldOfView();
  void setVerticalFieldOfView(LinearValueType * VerticalFieldOfViewIn);
  UserDefinedUnitValueType * getMaxReadNoise();
  void setMaxReadNoise(UserDefinedUnitValueType * MaxReadNoiseIn);
  PositiveDecimalType * getMaxFrameRate();
  void setMaxFrameRate(PositiveDecimalType * MaxFrameRateIn);
  LinearValueType * getPixelSize();
  void setPixelSize(LinearValueType * PixelSizeIn);
  UserDefinedUnitValueType * getSustainedDataRate();
  void setSustainedDataRate(UserDefinedUnitValueType * SustainedDataRateIn);
  UserDefinedUnitValueType * getDarkCurrent();
  void setDarkCurrent(UserDefinedUnitValueType * DarkCurrentIn);
  UserDefinedUnitValueType * getMaxPixelClockSpeed();
  void setMaxPixelClockSpeed(UserDefinedUnitValueType * MaxPixelClockSpeedIn);
  UserDefinedUnitValueType * getLinearity();
  void setLinearity(UserDefinedUnitValueType * LinearityIn);
  UserDefinedUnitValueType * getMaxOutputVoltage();
  void setMaxOutputVoltage(UserDefinedUnitValueType * MaxOutputVoltageIn);

protected:
  XmlInt * NumberOfPixels;
  UserDefinedUnitValueType * MaxReadoutFrequency;
  LinearValueType * HorizontalFieldOfView;
  LinearValueType * VerticalFieldOfView;
  UserDefinedUnitValueType * MaxReadNoise;
  PositiveDecimalType * MaxFrameRate;
  LinearValueType * PixelSize;
  UserDefinedUnitValueType * SustainedDataRate;
  UserDefinedUnitValueType * DarkCurrent;
  UserDefinedUnitValueType * MaxPixelClockSpeed;
  UserDefinedUnitValueType * Linearity;
  UserDefinedUnitValueType * MaxOutputVoltage;
};

/* ***************************************************************** */

class ClosedShellSetWorkingVolumeType :
  public WorkingVolumeBaseType
{
public:
  ClosedShellSetWorkingVolumeType();
  ClosedShellSetWorkingVolumeType(
    ClosedShellSetType * WorkingClosedShellSetIn);
  ~ClosedShellSetWorkingVolumeType();
  void printSelf(FILE * outFile);

  ClosedShellSetType * getWorkingClosedShellSet();
  void setWorkingClosedShellSet(ClosedShellSetType * WorkingClosedShellSetIn);

protected:
  ClosedShellSetType * WorkingClosedShellSet;
};

/* ***************************************************************** */

class ConfocalChromaticSensorType :
  public SensorType
{
public:
  ConfocalChromaticSensorType();
  ConfocalChromaticSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * SpotDiameterIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    XmlInt * MultiPeakMeasurementIn,
    XmlString * LightSourceIn,
    AngularValueType * MaxTiltIn,
    XmlString * HousingMaterialIn,
    LinearValueType * OpticalFiberCableLengthIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn);
  ConfocalChromaticSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * SpotDiameterIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    XmlInt * MultiPeakMeasurementIn,
    XmlString * LightSourceIn,
    AngularValueType * MaxTiltIn,
    XmlString * HousingMaterialIn,
    LinearValueType * OpticalFiberCableLengthIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn);
  ~ConfocalChromaticSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getSpotDiameter();
  void setSpotDiameter(LinearValueType * SpotDiameterIn);
  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  XmlInt * getMultiPeakMeasurement();
  void setMultiPeakMeasurement(XmlInt * MultiPeakMeasurementIn);
  XmlString * getLightSource();
  void setLightSource(XmlString * LightSourceIn);
  AngularValueType * getMaxTilt();
  void setMaxTilt(AngularValueType * MaxTiltIn);
  XmlString * getHousingMaterial();
  void setHousingMaterial(XmlString * HousingMaterialIn);
  LinearValueType * getOpticalFiberCableLength();
  void setOpticalFiberCableLength(LinearValueType * OpticalFiberCableLengthIn);
  UserDefinedUnitValueType * getShockTolerance();
  void setShockTolerance(UserDefinedUnitValueType * ShockToleranceIn);
  UserDefinedUnitValueType * getVibrationTolerance();
  void setVibrationTolerance(UserDefinedUnitValueType * VibrationToleranceIn);

protected:
  LinearValueType * SpotDiameter;
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  XmlInt * MultiPeakMeasurement;
  XmlString * LightSource;
  AngularValueType * MaxTilt;
  XmlString * HousingMaterial;
  LinearValueType * OpticalFiberCableLength;
  UserDefinedUnitValueType * ShockTolerance;
  UserDefinedUnitValueType * VibrationTolerance;
};

/* ***************************************************************** */

class CylindricalWorkingVolumeType :
  public WorkingVolumeBaseType
{
public:
  CylindricalWorkingVolumeType();
  CylindricalWorkingVolumeType(
    LinearValueType * RadialAxisLengthIn,
    AngularValueType * MinAzimuthalAxisAngleIn,
    AngularValueType * MaxAzimuthalAxisAngleIn,
    LinearValueType * ZAxisLengthIn);
  ~CylindricalWorkingVolumeType();
  void printSelf(FILE * outFile);

  LinearValueType * getRadialAxisLength();
  void setRadialAxisLength(LinearValueType * RadialAxisLengthIn);
  AngularValueType * getMinAzimuthalAxisAngle();
  void setMinAzimuthalAxisAngle(AngularValueType * MinAzimuthalAxisAngleIn);
  AngularValueType * getMaxAzimuthalAxisAngle();
  void setMaxAzimuthalAxisAngle(AngularValueType * MaxAzimuthalAxisAngleIn);
  LinearValueType * getZAxisLength();
  void setZAxisLength(LinearValueType * ZAxisLengthIn);

protected:
  LinearValueType * RadialAxisLength;
  AngularValueType * MinAzimuthalAxisAngle;
  AngularValueType * MaxAzimuthalAxisAngle;
  LinearValueType * ZAxisLength;
};

/* ***************************************************************** */

class DetachableSensorBaseType :
  public SensorType
{
public:
  DetachableSensorBaseType();
  DetachableSensorBaseType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  DetachableSensorBaseType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  virtual ~DetachableSensorBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class DetachableSensorBaseTypeLisd :
  public std::list<DetachableSensorBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  DetachableSensorBaseTypeLisd();
  DetachableSensorBaseTypeLisd(
    DetachableSensorBaseType * aDetachableSensorBaseType);
  ~DetachableSensorBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DifferentialVariableReluctanceTransducerSensorType :
  public SensorType
{
public:
  DifferentialVariableReluctanceTransducerSensorType();
  DifferentialVariableReluctanceTransducerSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearValueType * HysteresisIn,
    UserDefinedUnitValueType * FrequencyResponseIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    XmlString * HousingMaterialIn);
  DifferentialVariableReluctanceTransducerSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearValueType * HysteresisIn,
    UserDefinedUnitValueType * FrequencyResponseIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    XmlString * HousingMaterialIn);
  ~DifferentialVariableReluctanceTransducerSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  LinearValueType * getHysteresis();
  void setHysteresis(LinearValueType * HysteresisIn);
  UserDefinedUnitValueType * getFrequencyResponse();
  void setFrequencyResponse(UserDefinedUnitValueType * FrequencyResponseIn);
  UserDefinedUnitValueType * getTemperatureStability();
  void setTemperatureStability(UserDefinedUnitValueType * TemperatureStabilityIn);
  XmlString * getHousingMaterial();
  void setHousingMaterial(XmlString * HousingMaterialIn);

protected:
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  LinearValueType * Hysteresis;
  UserDefinedUnitValueType * FrequencyResponse;
  UserDefinedUnitValueType * TemperatureStability;
  XmlString * HousingMaterial;
};

/* ***************************************************************** */

class DrawWireSensorType :
  public SensorType
{
public:
  DrawWireSensorType();
  DrawWireSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    ForceValueType * MaxWireExtensionForceIn,
    ForceValueType * MinWireRetractionForceIn,
    XmlString * MaxWireAccelerationIn);
  DrawWireSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    ForceValueType * MaxWireExtensionForceIn,
    ForceValueType * MinWireRetractionForceIn,
    XmlString * MaxWireAccelerationIn);
  ~DrawWireSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  ForceValueType * getMaxWireExtensionForce();
  void setMaxWireExtensionForce(ForceValueType * MaxWireExtensionForceIn);
  ForceValueType * getMinWireRetractionForce();
  void setMinWireRetractionForce(ForceValueType * MinWireRetractionForceIn);
  XmlString * getMaxWireAcceleration();
  void setMaxWireAcceleration(XmlString * MaxWireAccelerationIn);

protected:
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  ForceValueType * MaxWireExtensionForce;
  ForceValueType * MinWireRetractionForce;
  XmlString * MaxWireAcceleration;
};

/* ***************************************************************** */

class EddyCurrentSensorType :
  public SensorType
{
public:
  EddyCurrentSensorType();
  EddyCurrentSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    PressureValueType * MaxPressureFrontIn,
    PressureValueType * MaxPressureSideIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    LinearValueType * OffsetDistanceIn,
    UserDefinedUnitValueType * FrequencyResponseIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn,
    XmlString * HousingMaterialIn,
    XmlString * MeasurementObjectMaterialIn);
  EddyCurrentSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    PressureValueType * MaxPressureFrontIn,
    PressureValueType * MaxPressureSideIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    LinearValueType * OffsetDistanceIn,
    UserDefinedUnitValueType * FrequencyResponseIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn,
    XmlString * HousingMaterialIn,
    XmlString * MeasurementObjectMaterialIn);
  ~EddyCurrentSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PressureValueType * getMaxPressureFront();
  void setMaxPressureFront(PressureValueType * MaxPressureFrontIn);
  PressureValueType * getMaxPressureSide();
  void setMaxPressureSide(PressureValueType * MaxPressureSideIn);
  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  UserDefinedUnitValueType * getTemperatureStability();
  void setTemperatureStability(UserDefinedUnitValueType * TemperatureStabilityIn);
  LinearValueType * getOffsetDistance();
  void setOffsetDistance(LinearValueType * OffsetDistanceIn);
  UserDefinedUnitValueType * getFrequencyResponse();
  void setFrequencyResponse(UserDefinedUnitValueType * FrequencyResponseIn);
  UserDefinedUnitValueType * getMinPowerSupplyVoltage();
  void setMinPowerSupplyVoltage(UserDefinedUnitValueType * MinPowerSupplyVoltageIn);
  UserDefinedUnitValueType * getMaxPowerSupplyVoltage();
  void setMaxPowerSupplyVoltage(UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);
  XmlString * getHousingMaterial();
  void setHousingMaterial(XmlString * HousingMaterialIn);
  XmlString * getMeasurementObjectMaterial();
  void setMeasurementObjectMaterial(XmlString * MeasurementObjectMaterialIn);

protected:
  PressureValueType * MaxPressureFront;
  PressureValueType * MaxPressureSide;
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  UserDefinedUnitValueType * TemperatureStability;
  LinearValueType * OffsetDistance;
  UserDefinedUnitValueType * FrequencyResponse;
  UserDefinedUnitValueType * MinPowerSupplyVoltage;
  UserDefinedUnitValueType * MaxPowerSupplyVoltage;
  XmlString * HousingMaterial;
  XmlString * MeasurementObjectMaterial;
};

/* ***************************************************************** */

class EffectiveCartesianWorkingVolumeType :
  public EffectiveWorkingVolumeBaseType
{
public:
  EffectiveCartesianWorkingVolumeType();
  EffectiveCartesianWorkingVolumeType(
    PointType * MinPointIn,
    PointType * MaxPointIn);
  ~EffectiveCartesianWorkingVolumeType();
  void printSelf(FILE * outFile);

  PointType * getMinPoint();
  void setMinPoint(PointType * MinPointIn);
  PointType * getMaxPoint();
  void setMaxPoint(PointType * MaxPointIn);

protected:
  PointType * MinPoint;
  PointType * MaxPoint;
};

/* ***************************************************************** */

class EffectiveClosedShellSetWorkingVolumeType :
  public EffectiveWorkingVolumeBaseType
{
public:
  EffectiveClosedShellSetWorkingVolumeType();
  EffectiveClosedShellSetWorkingVolumeType(
    ClosedShellSetType * WorkingClosedShellSetIn);
  ~EffectiveClosedShellSetWorkingVolumeType();
  void printSelf(FILE * outFile);

  ClosedShellSetType * getWorkingClosedShellSet();
  void setWorkingClosedShellSet(ClosedShellSetType * WorkingClosedShellSetIn);

protected:
  ClosedShellSetType * WorkingClosedShellSet;
};

/* ***************************************************************** */

class EffectiveCylindricalWorkingVolumeType :
  public EffectiveWorkingVolumeBaseType
{
public:
  EffectiveCylindricalWorkingVolumeType();
  EffectiveCylindricalWorkingVolumeType(
    LinearValueType * MinRadiusIn,
    LinearValueType * MaxRadiusIn,
    AngularValueType * MinAzimuthalAxisAngleIn,
    AngularValueType * MaxAzimuthalAxisAngleIn,
    LinearValueType * MinZAxisIn,
    LinearValueType * MaxZAxisIn);
  ~EffectiveCylindricalWorkingVolumeType();
  void printSelf(FILE * outFile);

  LinearValueType * getMinRadius();
  void setMinRadius(LinearValueType * MinRadiusIn);
  LinearValueType * getMaxRadius();
  void setMaxRadius(LinearValueType * MaxRadiusIn);
  AngularValueType * getMinAzimuthalAxisAngle();
  void setMinAzimuthalAxisAngle(AngularValueType * MinAzimuthalAxisAngleIn);
  AngularValueType * getMaxAzimuthalAxisAngle();
  void setMaxAzimuthalAxisAngle(AngularValueType * MaxAzimuthalAxisAngleIn);
  LinearValueType * getMinZAxis();
  void setMinZAxis(LinearValueType * MinZAxisIn);
  LinearValueType * getMaxZAxis();
  void setMaxZAxis(LinearValueType * MaxZAxisIn);

protected:
  LinearValueType * MinRadius;
  LinearValueType * MaxRadius;
  AngularValueType * MinAzimuthalAxisAngle;
  AngularValueType * MaxAzimuthalAxisAngle;
  LinearValueType * MinZAxis;
  LinearValueType * MaxZAxis;
};

/* ***************************************************************** */

class EffectiveSphericalWorkingVolumeType :
  public EffectiveWorkingVolumeBaseType
{
public:
  EffectiveSphericalWorkingVolumeType();
  EffectiveSphericalWorkingVolumeType(
    LinearValueType * MinRadialAxisIn,
    LinearValueType * MaxRadialAxisIn,
    AngularValueType * MinAzimuthalAxisAngleIn,
    AngularValueType * MaxAzimuthalAxisAngleIn,
    AngularValueType * MinPolarAxisIn,
    AngularValueType * MaxPolarAxisIn);
  ~EffectiveSphericalWorkingVolumeType();
  void printSelf(FILE * outFile);

  LinearValueType * getMinRadialAxis();
  void setMinRadialAxis(LinearValueType * MinRadialAxisIn);
  LinearValueType * getMaxRadialAxis();
  void setMaxRadialAxis(LinearValueType * MaxRadialAxisIn);
  AngularValueType * getMinAzimuthalAxisAngle();
  void setMinAzimuthalAxisAngle(AngularValueType * MinAzimuthalAxisAngleIn);
  AngularValueType * getMaxAzimuthalAxisAngle();
  void setMaxAzimuthalAxisAngle(AngularValueType * MaxAzimuthalAxisAngleIn);
  AngularValueType * getMinPolarAxis();
  void setMinPolarAxis(AngularValueType * MinPolarAxisIn);
  AngularValueType * getMaxPolarAxis();
  void setMaxPolarAxis(AngularValueType * MaxPolarAxisIn);

protected:
  LinearValueType * MinRadialAxis;
  LinearValueType * MaxRadialAxis;
  AngularValueType * MinAzimuthalAxisAngle;
  AngularValueType * MaxAzimuthalAxisAngle;
  AngularValueType * MinPolarAxis;
  AngularValueType * MaxPolarAxis;
};

/* ***************************************************************** */

class EffectiveUserDefinedWorkingVolumeType :
  public EffectiveWorkingVolumeBaseType
{
public:
  EffectiveUserDefinedWorkingVolumeType();
  EffectiveUserDefinedWorkingVolumeType(
    QIFReferenceType * UserDefinedWorkingVolumeIdIn,
    MeasuredDecimalType * MinFirstAxisIn,
    MeasuredDecimalType * MaxFirstAxisIn,
    MeasuredDecimalType * MinSecondAxisIn,
    MeasuredDecimalType * MaxSecondAxisIn,
    MeasuredDecimalType * MinThirdAxisIn,
    MeasuredDecimalType * MaxThirdAxisIn);
  ~EffectiveUserDefinedWorkingVolumeType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getUserDefinedWorkingVolumeId();
  void setUserDefinedWorkingVolumeId(QIFReferenceType * UserDefinedWorkingVolumeIdIn);
  MeasuredDecimalType * getMinFirstAxis();
  void setMinFirstAxis(MeasuredDecimalType * MinFirstAxisIn);
  MeasuredDecimalType * getMaxFirstAxis();
  void setMaxFirstAxis(MeasuredDecimalType * MaxFirstAxisIn);
  MeasuredDecimalType * getMinSecondAxis();
  void setMinSecondAxis(MeasuredDecimalType * MinSecondAxisIn);
  MeasuredDecimalType * getMaxSecondAxis();
  void setMaxSecondAxis(MeasuredDecimalType * MaxSecondAxisIn);
  MeasuredDecimalType * getMinThirdAxis();
  void setMinThirdAxis(MeasuredDecimalType * MinThirdAxisIn);
  MeasuredDecimalType * getMaxThirdAxis();
  void setMaxThirdAxis(MeasuredDecimalType * MaxThirdAxisIn);

protected:
  QIFReferenceType * UserDefinedWorkingVolumeId;
  MeasuredDecimalType * MinFirstAxis;
  MeasuredDecimalType * MaxFirstAxis;
  MeasuredDecimalType * MinSecondAxis;
  MeasuredDecimalType * MaxSecondAxis;
  MeasuredDecimalType * MinThirdAxis;
  MeasuredDecimalType * MaxThirdAxis;
};

/* ***************************************************************** */

class FixtureType :
  public MeasurementResourceBaseType
{
public:
  FixtureType();
  FixtureType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  FixtureType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn);
  ~FixtureType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class FixtureTypeLisd :
  public std::list<FixtureType *>,
  public XmlSchemaInstanceBase
{
public:
  FixtureTypeLisd();
  FixtureTypeLisd(
    FixtureType * aFixtureType);
  ~FixtureTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class LaserTriangulationSensorType :
  public SensorType
{
public:
  LaserTriangulationSensorType();
  LaserTriangulationSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * AverageSpotDiameterIn,
    XmlString * LaserSafetyClassIn,
    UserDefinedUnitValueType * MaxMeasurementFrequencyIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    XmlString * HousingMaterialIn,
    UserDefinedUnitValueType * PermissibleAmbientLightIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    UserDefinedUnitValueType * OutputPowerIn,
    LaserType * LaserIn);
  LaserTriangulationSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * AverageSpotDiameterIn,
    XmlString * LaserSafetyClassIn,
    UserDefinedUnitValueType * MaxMeasurementFrequencyIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    XmlString * HousingMaterialIn,
    UserDefinedUnitValueType * PermissibleAmbientLightIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    UserDefinedUnitValueType * OutputPowerIn,
    LaserType * LaserIn);
  ~LaserTriangulationSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getAverageSpotDiameter();
  void setAverageSpotDiameter(LinearValueType * AverageSpotDiameterIn);
  XmlString * getLaserSafetyClass();
  void setLaserSafetyClass(XmlString * LaserSafetyClassIn);
  UserDefinedUnitValueType * getMaxMeasurementFrequency();
  void setMaxMeasurementFrequency(UserDefinedUnitValueType * MaxMeasurementFrequencyIn);
  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  XmlString * getHousingMaterial();
  void setHousingMaterial(XmlString * HousingMaterialIn);
  UserDefinedUnitValueType * getPermissibleAmbientLight();
  void setPermissibleAmbientLight(UserDefinedUnitValueType * PermissibleAmbientLightIn);
  UserDefinedUnitValueType * getShockTolerance();
  void setShockTolerance(UserDefinedUnitValueType * ShockToleranceIn);
  UserDefinedUnitValueType * getVibrationTolerance();
  void setVibrationTolerance(UserDefinedUnitValueType * VibrationToleranceIn);
  UserDefinedUnitValueType * getOutputPower();
  void setOutputPower(UserDefinedUnitValueType * OutputPowerIn);
  LaserType * getLaser();
  void setLaser(LaserType * LaserIn);

protected:
  LinearValueType * AverageSpotDiameter;
  XmlString * LaserSafetyClass;
  UserDefinedUnitValueType * MaxMeasurementFrequency;
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  XmlString * HousingMaterial;
  UserDefinedUnitValueType * PermissibleAmbientLight;
  UserDefinedUnitValueType * ShockTolerance;
  UserDefinedUnitValueType * VibrationTolerance;
  UserDefinedUnitValueType * OutputPower;
  LaserType * Laser;
};

/* ***************************************************************** */

class LaserType :
  public MeasurementResourceBaseType
{
public:
  LaserType();
  LaserType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * LaserSourceIn,
    LinearValueType * LaserWaveLengthIn,
    UserDefinedUnitValueType * LaserPowerIn,
    XmlString * LaserSafetyClassIn,
    LinearValueType * LaserEffectiveLengthIn,
    LinearValueType * LaserSpotSizeIn,
    UserDefinedUnitValueType * LaserPowerSupplyIn);
  LaserType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * LaserSourceIn,
    LinearValueType * LaserWaveLengthIn,
    UserDefinedUnitValueType * LaserPowerIn,
    XmlString * LaserSafetyClassIn,
    LinearValueType * LaserEffectiveLengthIn,
    LinearValueType * LaserSpotSizeIn,
    UserDefinedUnitValueType * LaserPowerSupplyIn);
  ~LaserType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getLaserSource();
  void setLaserSource(XmlString * LaserSourceIn);
  LinearValueType * getLaserWaveLength();
  void setLaserWaveLength(LinearValueType * LaserWaveLengthIn);
  UserDefinedUnitValueType * getLaserPower();
  void setLaserPower(UserDefinedUnitValueType * LaserPowerIn);
  XmlString * getLaserSafetyClass();
  void setLaserSafetyClass(XmlString * LaserSafetyClassIn);
  LinearValueType * getLaserEffectiveLength();
  void setLaserEffectiveLength(LinearValueType * LaserEffectiveLengthIn);
  LinearValueType * getLaserSpotSize();
  void setLaserSpotSize(LinearValueType * LaserSpotSizeIn);
  UserDefinedUnitValueType * getLaserPowerSupply();
  void setLaserPowerSupply(UserDefinedUnitValueType * LaserPowerSupplyIn);

protected:
  XmlString * LaserSource;
  LinearValueType * LaserWaveLength;
  UserDefinedUnitValueType * LaserPower;
  XmlString * LaserSafetyClass;
  LinearValueType * LaserEffectiveLength;
  LinearValueType * LaserSpotSize;
  UserDefinedUnitValueType * LaserPowerSupply;
};

/* ***************************************************************** */

class LinearAxisType :
  public UserAxisBaseType
{
public:
  LinearAxisType();
  LinearAxisType(
    LinearValueType * MinLinearAxisIn,
    LinearValueType * MaxLinearAxisIn);
  ~LinearAxisType();
  void printSelf(FILE * outFile);

  LinearValueType * getMinLinearAxis();
  void setMinLinearAxis(LinearValueType * MinLinearAxisIn);
  LinearValueType * getMaxLinearAxis();
  void setMaxLinearAxis(LinearValueType * MaxLinearAxisIn);

protected:
  LinearValueType * MinLinearAxis;
  LinearValueType * MaxLinearAxis;
};

/* ***************************************************************** */

class LinearResolutionType :
  public ResolutionBaseType
{
public:
  LinearResolutionType();
  LinearResolutionType(
    LinearValueType * LinearValueIn);
  ~LinearResolutionType();
  void printSelf(FILE * outFile);

  LinearValueType * getLinearValue();
  void setLinearValue(LinearValueType * LinearValueIn);

protected:
  LinearValueType * LinearValue;
};

/* ***************************************************************** */

class LinearVariableDifferentialTransformerSensorType :
  public DetachableSensorBaseType
{
public:
  LinearVariableDifferentialTransformerSensorType();
  LinearVariableDifferentialTransformerSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearVariableDifferentialTransformerEnumType * TypeOfLinearVariableDifferentialTransformerIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    UserDefinedUnitValueType * ExcitationFrequencyIn,
    UserDefinedUnitValueType * ExcitationAmplitudeIn,
    LinearValueType * DiameterIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    XmlString * HousingMaterialIn,
    XmlString * ElectronicDescriptionIn);
  LinearVariableDifferentialTransformerSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearVariableDifferentialTransformerEnumType * TypeOfLinearVariableDifferentialTransformerIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    UserDefinedUnitValueType * ExcitationFrequencyIn,
    UserDefinedUnitValueType * ExcitationAmplitudeIn,
    LinearValueType * DiameterIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    XmlString * HousingMaterialIn,
    XmlString * ElectronicDescriptionIn);
  ~LinearVariableDifferentialTransformerSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearVariableDifferentialTransformerEnumType * getTypeOfLinearVariableDifferentialTransformer();
  void setTypeOfLinearVariableDifferentialTransformer(LinearVariableDifferentialTransformerEnumType * TypeOfLinearVariableDifferentialTransformerIn);
  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  UserDefinedUnitValueType * getTemperatureStability();
  void setTemperatureStability(UserDefinedUnitValueType * TemperatureStabilityIn);
  UserDefinedUnitValueType * getExcitationFrequency();
  void setExcitationFrequency(UserDefinedUnitValueType * ExcitationFrequencyIn);
  UserDefinedUnitValueType * getExcitationAmplitude();
  void setExcitationAmplitude(UserDefinedUnitValueType * ExcitationAmplitudeIn);
  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  UserDefinedUnitValueType * getShockTolerance();
  void setShockTolerance(UserDefinedUnitValueType * ShockToleranceIn);
  UserDefinedUnitValueType * getVibrationTolerance();
  void setVibrationTolerance(UserDefinedUnitValueType * VibrationToleranceIn);
  XmlString * getHousingMaterial();
  void setHousingMaterial(XmlString * HousingMaterialIn);
  XmlString * getElectronicDescription();
  void setElectronicDescription(XmlString * ElectronicDescriptionIn);

protected:
  LinearVariableDifferentialTransformerEnumType * TypeOfLinearVariableDifferentialTransformer;
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  UserDefinedUnitValueType * TemperatureStability;
  UserDefinedUnitValueType * ExcitationFrequency;
  UserDefinedUnitValueType * ExcitationAmplitude;
  LinearValueType * Diameter;
  UserDefinedUnitValueType * ShockTolerance;
  UserDefinedUnitValueType * VibrationTolerance;
  XmlString * HousingMaterial;
  XmlString * ElectronicDescription;
};

/* ***************************************************************** */

class MagnetoInductiveSensorType :
  public SensorType
{
public:
  MagnetoInductiveSensorType();
  MagnetoInductiveSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * FrequencyResponseIn,
    LinearValueType * OffsetDistanceIn,
    PressureValueType * MaxPressureIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    XmlString * HousingMaterialIn,
    UserDefinedUnitValueType * MaxCurrentConsumptionIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);
  MagnetoInductiveSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * FrequencyResponseIn,
    LinearValueType * OffsetDistanceIn,
    PressureValueType * MaxPressureIn,
    UserDefinedUnitValueType * ShockToleranceIn,
    UserDefinedUnitValueType * VibrationToleranceIn,
    XmlString * HousingMaterialIn,
    UserDefinedUnitValueType * MaxCurrentConsumptionIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);
  ~MagnetoInductiveSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  UserDefinedUnitValueType * getFrequencyResponse();
  void setFrequencyResponse(UserDefinedUnitValueType * FrequencyResponseIn);
  LinearValueType * getOffsetDistance();
  void setOffsetDistance(LinearValueType * OffsetDistanceIn);
  PressureValueType * getMaxPressure();
  void setMaxPressure(PressureValueType * MaxPressureIn);
  UserDefinedUnitValueType * getShockTolerance();
  void setShockTolerance(UserDefinedUnitValueType * ShockToleranceIn);
  UserDefinedUnitValueType * getVibrationTolerance();
  void setVibrationTolerance(UserDefinedUnitValueType * VibrationToleranceIn);
  XmlString * getHousingMaterial();
  void setHousingMaterial(XmlString * HousingMaterialIn);
  UserDefinedUnitValueType * getMaxCurrentConsumption();
  void setMaxCurrentConsumption(UserDefinedUnitValueType * MaxCurrentConsumptionIn);
  UserDefinedUnitValueType * getMinPowerSupplyVoltage();
  void setMinPowerSupplyVoltage(UserDefinedUnitValueType * MinPowerSupplyVoltageIn);
  UserDefinedUnitValueType * getMaxPowerSupplyVoltage();
  void setMaxPowerSupplyVoltage(UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);

protected:
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  UserDefinedUnitValueType * FrequencyResponse;
  LinearValueType * OffsetDistance;
  PressureValueType * MaxPressure;
  UserDefinedUnitValueType * ShockTolerance;
  UserDefinedUnitValueType * VibrationTolerance;
  XmlString * HousingMaterial;
  UserDefinedUnitValueType * MaxCurrentConsumption;
  UserDefinedUnitValueType * MinPowerSupplyVoltage;
  UserDefinedUnitValueType * MaxPowerSupplyVoltage;
};

/* ***************************************************************** */

class MeasurementDeviceType :
  public MeasurementResourceBaseType
{
public:
  MeasurementDeviceType();
  MeasurementDeviceType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  MeasurementDeviceType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  ~MeasurementDeviceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CalibrationsType * getCalibrations();
  void setCalibrations(CalibrationsType * CalibrationsIn);
  EnvironmentalRangeType * getEnvironmentalRange();
  void setEnvironmentalRange(EnvironmentalRangeType * EnvironmentalRangeIn);

protected:
  CalibrationsType * Calibrations;
  EnvironmentalRangeType * EnvironmentalRange;
};

/* ***************************************************************** */

class MeasurementDeviceTypeLisd :
  public std::list<MeasurementDeviceType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasurementDeviceTypeLisd();
  MeasurementDeviceTypeLisd(
    MeasurementDeviceType * aMeasurementDeviceType);
  ~MeasurementDeviceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class RotaryAxisType :
  public UserAxisBaseType
{
public:
  RotaryAxisType();
  RotaryAxisType(
    AngularValueType * MinRotaryAxisIn,
    AngularValueType * MaxRotaryAxisIn);
  ~RotaryAxisType();
  void printSelf(FILE * outFile);

  AngularValueType * getMinRotaryAxis();
  void setMinRotaryAxis(AngularValueType * MinRotaryAxisIn);
  AngularValueType * getMaxRotaryAxis();
  void setMaxRotaryAxis(AngularValueType * MaxRotaryAxisIn);

protected:
  AngularValueType * MinRotaryAxis;
  AngularValueType * MaxRotaryAxis;
};

/* ***************************************************************** */

class SphericalWorkingVolumeType :
  public WorkingVolumeBaseType
{
public:
  SphericalWorkingVolumeType();
  SphericalWorkingVolumeType(
    LinearValueType * RadialAxisLengthIn,
    AngularValueType * MinAzimuthalAxisAngleIn,
    AngularValueType * MaxAzimuthalAxisAngleIn,
    AngularValueType * MinPolarAxisAngleIn,
    AngularValueType * MaxPolarAxisAngleIn);
  ~SphericalWorkingVolumeType();
  void printSelf(FILE * outFile);

  LinearValueType * getRadialAxisLength();
  void setRadialAxisLength(LinearValueType * RadialAxisLengthIn);
  AngularValueType * getMinAzimuthalAxisAngle();
  void setMinAzimuthalAxisAngle(AngularValueType * MinAzimuthalAxisAngleIn);
  AngularValueType * getMaxAzimuthalAxisAngle();
  void setMaxAzimuthalAxisAngle(AngularValueType * MaxAzimuthalAxisAngleIn);
  AngularValueType * getMinPolarAxisAngle();
  void setMinPolarAxisAngle(AngularValueType * MinPolarAxisAngleIn);
  AngularValueType * getMaxPolarAxisAngle();
  void setMaxPolarAxisAngle(AngularValueType * MaxPolarAxisAngleIn);

protected:
  LinearValueType * RadialAxisLength;
  AngularValueType * MinAzimuthalAxisAngle;
  AngularValueType * MaxAzimuthalAxisAngle;
  AngularValueType * MinPolarAxisAngle;
  AngularValueType * MaxPolarAxisAngle;
};

/* ***************************************************************** */

class TactileProbeSensorBaseType :
  public DetachableSensorBaseType
{
public:
  TactileProbeSensorBaseType();
  TactileProbeSensorBaseType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  TactileProbeSensorBaseType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn);
  virtual ~TactileProbeSensorBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class ToolWithCCDCameraSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithCCDCameraSensorType();
  ToolWithCCDCameraSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensorIn);
  ToolWithCCDCameraSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensorIn);
  ~ToolWithCCDCameraSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ChargeCoupledDeviceCameraSensorType * getChargeCoupledDeviceCameraSensor();
  void setChargeCoupledDeviceCameraSensor(ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensorIn);

protected:
  ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensor;
};

/* ***************************************************************** */

class ToolWithCapacitiveSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithCapacitiveSensorType();
  ToolWithCapacitiveSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CapacitiveSensorType * CapacitiveSensorIn);
  ToolWithCapacitiveSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CapacitiveSensorType * CapacitiveSensorIn);
  ~ToolWithCapacitiveSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CapacitiveSensorType * getCapacitiveSensor();
  void setCapacitiveSensor(CapacitiveSensorType * CapacitiveSensorIn);

protected:
  CapacitiveSensorType * CapacitiveSensor;
};

/* ***************************************************************** */

class ToolWithComplexTactileProbeSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithComplexTactileProbeSensorType();
  ToolWithComplexTactileProbeSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ComplexTactileProbeSensorType * ComplexTactileProbeSensorIn);
  ToolWithComplexTactileProbeSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ComplexTactileProbeSensorType * ComplexTactileProbeSensorIn);
  ~ToolWithComplexTactileProbeSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ComplexTactileProbeSensorType * getComplexTactileProbeSensor();
  void setComplexTactileProbeSensor(ComplexTactileProbeSensorType * ComplexTactileProbeSensorIn);

protected:
  ComplexTactileProbeSensorType * ComplexTactileProbeSensor;
};

/* ***************************************************************** */

class ToolWithConfocalChromaticSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithConfocalChromaticSensorType();
  ToolWithConfocalChromaticSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ConfocalChromaticSensorType * ConfocalChromaticSensorIn);
  ToolWithConfocalChromaticSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    ConfocalChromaticSensorType * ConfocalChromaticSensorIn);
  ~ToolWithConfocalChromaticSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ConfocalChromaticSensorType * getConfocalChromaticSensor();
  void setConfocalChromaticSensor(ConfocalChromaticSensorType * ConfocalChromaticSensorIn);

protected:
  ConfocalChromaticSensorType * ConfocalChromaticSensor;
};

/* ***************************************************************** */

class ToolWithDVRTSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithDVRTSensorType();
  ToolWithDVRTSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    DifferentialVariableReluctanceTransducerSensorType * DVRTSensorIn);
  ToolWithDVRTSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    DifferentialVariableReluctanceTransducerSensorType * DVRTSensorIn);
  ~ToolWithDVRTSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DifferentialVariableReluctanceTransducerSensorType * getDVRTSensor();
  void setDVRTSensor(DifferentialVariableReluctanceTransducerSensorType * DVRTSensorIn);

protected:
  DifferentialVariableReluctanceTransducerSensorType * DVRTSensor;
};

/* ***************************************************************** */

class ToolWithDrawWireSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithDrawWireSensorType();
  ToolWithDrawWireSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    DrawWireSensorType * DrawWireSensorIn);
  ToolWithDrawWireSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    DrawWireSensorType * DrawWireSensorIn);
  ~ToolWithDrawWireSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  DrawWireSensorType * getDrawWireSensor();
  void setDrawWireSensor(DrawWireSensorType * DrawWireSensorIn);

protected:
  DrawWireSensorType * DrawWireSensor;
};

/* ***************************************************************** */

class ToolWithEddyCurrentSensorType :
  public ToolWithIntegratedSensorBaseType
{
public:
  ToolWithEddyCurrentSensorType();
  ToolWithEddyCurrentSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    EddyCurrentSensorType * EddyCurrentSensorIn);
  ToolWithEddyCurrentSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    EddyCurrentSensorType * EddyCurrentSensorIn);
  ~ToolWithEddyCurrentSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  EddyCurrentSensorType * getEddyCurrentSensor();
  void setEddyCurrentSensor(EddyCurrentSensorType * EddyCurrentSensorIn);

protected:
  EddyCurrentSensorType * EddyCurrentSensor;
};

/* ***************************************************************** */

class UniversalDeviceType :
  public MeasurementDeviceType
{
public:
  UniversalDeviceType();
  UniversalDeviceType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn);
  UniversalDeviceType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn);
  ~UniversalDeviceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ResolutionBaseType * getResolution();
  void setResolution(ResolutionBaseType * ResolutionIn);
  WorkingVolumeBaseType * getWorkingVolume();
  void setWorkingVolume(WorkingVolumeBaseType * WorkingVolumeIn);
  EffectiveWorkingVolumeBaseType * getEffectiveWorkingVolume();
  void setEffectiveWorkingVolume(EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn);
  TemperatureCompensationType * getTemperatureCompensation();
  void setTemperatureCompensation(TemperatureCompensationType * TemperatureCompensationIn);

protected:
  ResolutionBaseType * Resolution;
  WorkingVolumeBaseType * WorkingVolume;
  EffectiveWorkingVolumeBaseType * EffectiveWorkingVolume;
  TemperatureCompensationType * TemperatureCompensation;
};

/* ***************************************************************** */

class UniversalLengthMeasuringType :
  public UniversalDeviceType
{
public:
  UniversalLengthMeasuringType();
  UniversalLengthMeasuringType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    ForceValueType * MeasuringForceIn,
    LinearErrorType * AccuracyIn,
    LinearValueType * RepeatabilityIn,
    ArrayReferenceType * ToolIdsIn,
    MassValueType * MaxWorkpieceWeightIn);
  UniversalLengthMeasuringType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    ForceValueType * MeasuringForceIn,
    LinearErrorType * AccuracyIn,
    LinearValueType * RepeatabilityIn,
    ArrayReferenceType * ToolIdsIn,
    MassValueType * MaxWorkpieceWeightIn);
  ~UniversalLengthMeasuringType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  ForceValueType * getMeasuringForce();
  void setMeasuringForce(ForceValueType * MeasuringForceIn);
  LinearErrorType * getAccuracy();
  void setAccuracy(LinearErrorType * AccuracyIn);
  LinearValueType * getRepeatability();
  void setRepeatability(LinearValueType * RepeatabilityIn);
  ArrayReferenceType * getToolIds();
  void setToolIds(ArrayReferenceType * ToolIdsIn);
  MassValueType * getMaxWorkpieceWeight();
  void setMaxWorkpieceWeight(MassValueType * MaxWorkpieceWeightIn);

protected:
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  ForceValueType * MeasuringForce;
  LinearErrorType * Accuracy;
  LinearValueType * Repeatability;
  ArrayReferenceType * ToolIds;
  MassValueType * MaxWorkpieceWeight;
};

/* ***************************************************************** */

class UserDefinedWorkingVolumeType :
  public WorkingVolumeBaseType
{
public:
  UserDefinedWorkingVolumeType();
  UserDefinedWorkingVolumeType(
    UserDefinedAxisType * FirstAxisIn,
    UserDefinedAxisType * SecondAxisIn,
    UserDefinedAxisType * ThirdAxisIn);
  ~UserDefinedWorkingVolumeType();
  void printSelf(FILE * outFile);

  UserDefinedAxisType * getFirstAxis();
  void setFirstAxis(UserDefinedAxisType * FirstAxisIn);
  UserDefinedAxisType * getSecondAxis();
  void setSecondAxis(UserDefinedAxisType * SecondAxisIn);
  UserDefinedAxisType * getThirdAxis();
  void setThirdAxis(UserDefinedAxisType * ThirdAxisIn);

protected:
  UserDefinedAxisType * FirstAxis;
  UserDefinedAxisType * SecondAxis;
  UserDefinedAxisType * ThirdAxis;
};

/* ***************************************************************** */

class AutocollimatorType :
  public UniversalDeviceType
{
public:
  AutocollimatorType();
  AutocollimatorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlString * LightSourceIn,
    AngularErrorType * MeasuringAccuracyIn,
    XmlDecimal * MagnificationIn,
    LinearValueType * ApertureSizeIn,
    AngularValueType * MinMeasuringDistanceIn,
    AngularValueType * MaxMeasuringDistanceIn,
    LinearValueType * ObjectiveFocalLengthIn,
    AngularValueType * FieldOfViewIn);
  AutocollimatorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlString * LightSourceIn,
    AngularErrorType * MeasuringAccuracyIn,
    XmlDecimal * MagnificationIn,
    LinearValueType * ApertureSizeIn,
    AngularValueType * MinMeasuringDistanceIn,
    AngularValueType * MaxMeasuringDistanceIn,
    LinearValueType * ObjectiveFocalLengthIn,
    AngularValueType * FieldOfViewIn);
  ~AutocollimatorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getLightSource();
  void setLightSource(XmlString * LightSourceIn);
  AngularErrorType * getMeasuringAccuracy();
  void setMeasuringAccuracy(AngularErrorType * MeasuringAccuracyIn);
  XmlDecimal * getMagnification();
  void setMagnification(XmlDecimal * MagnificationIn);
  LinearValueType * getApertureSize();
  void setApertureSize(LinearValueType * ApertureSizeIn);
  AngularValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(AngularValueType * MinMeasuringDistanceIn);
  AngularValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(AngularValueType * MaxMeasuringDistanceIn);
  LinearValueType * getObjectiveFocalLength();
  void setObjectiveFocalLength(LinearValueType * ObjectiveFocalLengthIn);
  AngularValueType * getFieldOfView();
  void setFieldOfView(AngularValueType * FieldOfViewIn);

protected:
  XmlString * LightSource;
  AngularErrorType * MeasuringAccuracy;
  XmlDecimal * Magnification;
  LinearValueType * ApertureSize;
  AngularValueType * MinMeasuringDistance;
  AngularValueType * MaxMeasuringDistance;
  LinearValueType * ObjectiveFocalLength;
  AngularValueType * FieldOfView;
};

/* ***************************************************************** */

class CMMType :
  public UniversalDeviceType
{
public:
  CMMType();
  CMMType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn);
  CMMType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn);
  ~CMMType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class CapacitiveSensorType :
  public DetachableSensorBaseType
{
public:
  CapacitiveSensorType();
  CapacitiveSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    UserDefinedUnitValueType * MinOperatingVoltageIn,
    UserDefinedUnitValueType * MaxOperatingVoltageIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    LinearValueType * MinimumTargetDiameterIn,
    XmlString * HousingMaterialIn,
    XmlString * MountingIn);
  CapacitiveSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    UserDefinedUnitValueType * MinOperatingVoltageIn,
    UserDefinedUnitValueType * MaxOperatingVoltageIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    UserDefinedUnitValueType * TemperatureStabilityIn,
    LinearValueType * MinimumTargetDiameterIn,
    XmlString * HousingMaterialIn,
    XmlString * MountingIn);
  ~CapacitiveSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UserDefinedUnitValueType * getMinOperatingVoltage();
  void setMinOperatingVoltage(UserDefinedUnitValueType * MinOperatingVoltageIn);
  UserDefinedUnitValueType * getMaxOperatingVoltage();
  void setMaxOperatingVoltage(UserDefinedUnitValueType * MaxOperatingVoltageIn);
  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  UserDefinedUnitValueType * getTemperatureStability();
  void setTemperatureStability(UserDefinedUnitValueType * TemperatureStabilityIn);
  LinearValueType * getMinimumTargetDiameter();
  void setMinimumTargetDiameter(LinearValueType * MinimumTargetDiameterIn);
  XmlString * getHousingMaterial();
  void setHousingMaterial(XmlString * HousingMaterialIn);
  XmlString * getMounting();
  void setMounting(XmlString * MountingIn);

protected:
  UserDefinedUnitValueType * MinOperatingVoltage;
  UserDefinedUnitValueType * MaxOperatingVoltage;
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  UserDefinedUnitValueType * TemperatureStability;
  LinearValueType * MinimumTargetDiameter;
  XmlString * HousingMaterial;
  XmlString * Mounting;
};

/* ***************************************************************** */

class CartesianCMMType :
  public CMMType
{
public:
  CartesianCMMType();
  CartesianCMMType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    PointType * HomeLocationIn,
    CartesianCMMGeometryType * CMMGeometryIn,
    CMMAxisDirectionsBaseType * CMMAxisDirectionsIn,
    MeasurementDeviceScalesBaseType * ScalesIn,
    LinearValueType * MaxWorkpieceHeightIn,
    MassValueType * MaxWorkpieceMassIn,
    CartesianCMMSpeedsType * JoystickSpeedsIn,
    CMMSpeedsBaseType * CMMSpeedsIn,
    RotaryTableType * RotaryTableIn,
    CartesianCMMAccuraciesType * AccuraciesIn,
    ArrayReferenceType * ToolIdsIn,
    ArrayReferenceType * SensorIdsIn);
  CartesianCMMType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    PointType * HomeLocationIn,
    CartesianCMMGeometryType * CMMGeometryIn,
    CMMAxisDirectionsBaseType * CMMAxisDirectionsIn,
    MeasurementDeviceScalesBaseType * ScalesIn,
    LinearValueType * MaxWorkpieceHeightIn,
    MassValueType * MaxWorkpieceMassIn,
    CartesianCMMSpeedsType * JoystickSpeedsIn,
    CMMSpeedsBaseType * CMMSpeedsIn,
    RotaryTableType * RotaryTableIn,
    CartesianCMMAccuraciesType * AccuraciesIn,
    ArrayReferenceType * ToolIdsIn,
    ArrayReferenceType * SensorIdsIn);
  ~CartesianCMMType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getHomeLocation();
  void setHomeLocation(PointType * HomeLocationIn);
  CartesianCMMGeometryType * getCMMGeometry();
  void setCMMGeometry(CartesianCMMGeometryType * CMMGeometryIn);
  CMMAxisDirectionsBaseType * getCMMAxisDirections();
  void setCMMAxisDirections(CMMAxisDirectionsBaseType * CMMAxisDirectionsIn);
  MeasurementDeviceScalesBaseType * getScales();
  void setScales(MeasurementDeviceScalesBaseType * ScalesIn);
  LinearValueType * getMaxWorkpieceHeight();
  void setMaxWorkpieceHeight(LinearValueType * MaxWorkpieceHeightIn);
  MassValueType * getMaxWorkpieceMass();
  void setMaxWorkpieceMass(MassValueType * MaxWorkpieceMassIn);
  CartesianCMMSpeedsType * getJoystickSpeeds();
  void setJoystickSpeeds(CartesianCMMSpeedsType * JoystickSpeedsIn);
  CMMSpeedsBaseType * getCMMSpeeds();
  void setCMMSpeeds(CMMSpeedsBaseType * CMMSpeedsIn);
  RotaryTableType * getRotaryTable();
  void setRotaryTable(RotaryTableType * RotaryTableIn);
  CartesianCMMAccuraciesType * getAccuracies();
  void setAccuracies(CartesianCMMAccuraciesType * AccuraciesIn);
  ArrayReferenceType * getToolIds();
  void setToolIds(ArrayReferenceType * ToolIdsIn);
  ArrayReferenceType * getSensorIds();
  void setSensorIds(ArrayReferenceType * SensorIdsIn);

protected:
  PointType * HomeLocation;
  CartesianCMMGeometryType * CMMGeometry;
  CMMAxisDirectionsBaseType * CMMAxisDirections;
  MeasurementDeviceScalesBaseType * Scales;
  LinearValueType * MaxWorkpieceHeight;
  MassValueType * MaxWorkpieceMass;
  CartesianCMMSpeedsType * JoystickSpeeds;
  CMMSpeedsBaseType * CMMSpeeds;
  RotaryTableType * RotaryTable;
  CartesianCMMAccuraciesType * Accuracies;
  ArrayReferenceType * ToolIds;
  ArrayReferenceType * SensorIds;
};

/* ***************************************************************** */

class ComplexTactileProbeSensorType :
  public TactileProbeSensorBaseType
{
public:
  ComplexTactileProbeSensorType();
  ComplexTactileProbeSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LocatedTipsType * LocatedTipsIn);
  ComplexTactileProbeSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LocatedTipsType * LocatedTipsIn);
  ~ComplexTactileProbeSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LocatedTipsType * getLocatedTips();
  void setLocatedTips(LocatedTipsType * LocatedTipsIn);

protected:
  LocatedTipsType * LocatedTips;
};

/* ***************************************************************** */

class ComputedTomographyType :
  public UniversalDeviceType
{
public:
  ComputedTomographyType();
  ComputedTomographyType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlString * SourceDescriptionIn,
    XmlString * SamplePenetratingMaterialIn,
    LinearValueType * SamplePenetratingMaterialLengthIn,
    LinearValueType * FocalSpotSizeIn,
    MassValueType * MaxWorkpieceMassIn,
    XmlString * SafetyLevelIn,
    CartesianWorkingVolumeType * CabinetDimensionsIn,
    UserDefinedUnitValueType * MaxPowerIn,
    XmlDecimal * DetectorBitNumberIn,
    LinearValueType * DetectorPixelSizeIn,
    FunctionDiscreteType * ActivePixelsNumberIn,
    UserDefinedUnitValueType * MaxKVIn,
    UserDefinedUnitValueType * MinOperatingCurrentIn,
    UserDefinedUnitValueType * MaxOperatingCurrentIn,
    UserDefinedUnitValueType * MaxFramePerSecondIn,
    RotaryTableType * RotaryTableIn,
    ArrayReferenceType * ToolIdsIn);
  ComputedTomographyType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlString * SourceDescriptionIn,
    XmlString * SamplePenetratingMaterialIn,
    LinearValueType * SamplePenetratingMaterialLengthIn,
    LinearValueType * FocalSpotSizeIn,
    MassValueType * MaxWorkpieceMassIn,
    XmlString * SafetyLevelIn,
    CartesianWorkingVolumeType * CabinetDimensionsIn,
    UserDefinedUnitValueType * MaxPowerIn,
    XmlDecimal * DetectorBitNumberIn,
    LinearValueType * DetectorPixelSizeIn,
    FunctionDiscreteType * ActivePixelsNumberIn,
    UserDefinedUnitValueType * MaxKVIn,
    UserDefinedUnitValueType * MinOperatingCurrentIn,
    UserDefinedUnitValueType * MaxOperatingCurrentIn,
    UserDefinedUnitValueType * MaxFramePerSecondIn,
    RotaryTableType * RotaryTableIn,
    ArrayReferenceType * ToolIdsIn);
  ~ComputedTomographyType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getSourceDescription();
  void setSourceDescription(XmlString * SourceDescriptionIn);
  XmlString * getSamplePenetratingMaterial();
  void setSamplePenetratingMaterial(XmlString * SamplePenetratingMaterialIn);
  LinearValueType * getSamplePenetratingMaterialLength();
  void setSamplePenetratingMaterialLength(LinearValueType * SamplePenetratingMaterialLengthIn);
  LinearValueType * getFocalSpotSize();
  void setFocalSpotSize(LinearValueType * FocalSpotSizeIn);
  MassValueType * getMaxWorkpieceMass();
  void setMaxWorkpieceMass(MassValueType * MaxWorkpieceMassIn);
  XmlString * getSafetyLevel();
  void setSafetyLevel(XmlString * SafetyLevelIn);
  CartesianWorkingVolumeType * getCabinetDimensions();
  void setCabinetDimensions(CartesianWorkingVolumeType * CabinetDimensionsIn);
  UserDefinedUnitValueType * getMaxPower();
  void setMaxPower(UserDefinedUnitValueType * MaxPowerIn);
  XmlDecimal * getDetectorBitNumber();
  void setDetectorBitNumber(XmlDecimal * DetectorBitNumberIn);
  LinearValueType * getDetectorPixelSize();
  void setDetectorPixelSize(LinearValueType * DetectorPixelSizeIn);
  FunctionDiscreteType * getActivePixelsNumber();
  void setActivePixelsNumber(FunctionDiscreteType * ActivePixelsNumberIn);
  UserDefinedUnitValueType * getMaxKV();
  void setMaxKV(UserDefinedUnitValueType * MaxKVIn);
  UserDefinedUnitValueType * getMinOperatingCurrent();
  void setMinOperatingCurrent(UserDefinedUnitValueType * MinOperatingCurrentIn);
  UserDefinedUnitValueType * getMaxOperatingCurrent();
  void setMaxOperatingCurrent(UserDefinedUnitValueType * MaxOperatingCurrentIn);
  UserDefinedUnitValueType * getMaxFramePerSecond();
  void setMaxFramePerSecond(UserDefinedUnitValueType * MaxFramePerSecondIn);
  RotaryTableType * getRotaryTable();
  void setRotaryTable(RotaryTableType * RotaryTableIn);
  ArrayReferenceType * getToolIds();
  void setToolIds(ArrayReferenceType * ToolIdsIn);

protected:
  XmlString * SourceDescription;
  XmlString * SamplePenetratingMaterial;
  LinearValueType * SamplePenetratingMaterialLength;
  LinearValueType * FocalSpotSize;
  MassValueType * MaxWorkpieceMass;
  XmlString * SafetyLevel;
  CartesianWorkingVolumeType * CabinetDimensions;
  UserDefinedUnitValueType * MaxPower;
  XmlDecimal * DetectorBitNumber;
  LinearValueType * DetectorPixelSize;
  FunctionDiscreteType * ActivePixelsNumber;
  UserDefinedUnitValueType * MaxKV;
  UserDefinedUnitValueType * MinOperatingCurrent;
  UserDefinedUnitValueType * MaxOperatingCurrent;
  UserDefinedUnitValueType * MaxFramePerSecond;
  RotaryTableType * RotaryTable;
  ArrayReferenceType * ToolIds;
};

/* ***************************************************************** */

class LaserRadarType :
  public UniversalDeviceType
{
public:
  LaserRadarType();
  LaserRadarType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    LaserType * MeasurementLaserIn,
    LaserType * PointingLaserIn,
    UserDefinedUnitValueType * MaxPointsRateIn,
    LinearValueType * MaxMeasurementRangeIn,
    LinearValueType * MinMeasurementRangeIn,
    UserDefinedUnitValueType * ScanningSpeedIn,
    LinearErrorType * DistanceAccuracyIn,
    AngularErrorType * AzimuthAngularAccuracyIn,
    AngularErrorType * ElevationAngularAccuracyIn,
    LinearValueType * RangeForVolumetricUncertaintyIn,
    LinearValueType * VolumetricUncertaintyIn,
    LinearValueType * MaxEnvironmentalAltitudeIn,
    LinearValueType * MinEnvironmentalAltitudeIn,
    TimeValueType * SurfacePointsSpeedIn,
    TimeValueType * ToolingBallSpeedIn,
    TimeValueType * FeatureSpeedIn);
  LaserRadarType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    LaserType * MeasurementLaserIn,
    LaserType * PointingLaserIn,
    UserDefinedUnitValueType * MaxPointsRateIn,
    LinearValueType * MaxMeasurementRangeIn,
    LinearValueType * MinMeasurementRangeIn,
    UserDefinedUnitValueType * ScanningSpeedIn,
    LinearErrorType * DistanceAccuracyIn,
    AngularErrorType * AzimuthAngularAccuracyIn,
    AngularErrorType * ElevationAngularAccuracyIn,
    LinearValueType * RangeForVolumetricUncertaintyIn,
    LinearValueType * VolumetricUncertaintyIn,
    LinearValueType * MaxEnvironmentalAltitudeIn,
    LinearValueType * MinEnvironmentalAltitudeIn,
    TimeValueType * SurfacePointsSpeedIn,
    TimeValueType * ToolingBallSpeedIn,
    TimeValueType * FeatureSpeedIn);
  ~LaserRadarType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LaserType * getMeasurementLaser();
  void setMeasurementLaser(LaserType * MeasurementLaserIn);
  LaserType * getPointingLaser();
  void setPointingLaser(LaserType * PointingLaserIn);
  UserDefinedUnitValueType * getMaxPointsRate();
  void setMaxPointsRate(UserDefinedUnitValueType * MaxPointsRateIn);
  LinearValueType * getMaxMeasurementRange();
  void setMaxMeasurementRange(LinearValueType * MaxMeasurementRangeIn);
  LinearValueType * getMinMeasurementRange();
  void setMinMeasurementRange(LinearValueType * MinMeasurementRangeIn);
  UserDefinedUnitValueType * getScanningSpeed();
  void setScanningSpeed(UserDefinedUnitValueType * ScanningSpeedIn);
  LinearErrorType * getDistanceAccuracy();
  void setDistanceAccuracy(LinearErrorType * DistanceAccuracyIn);
  AngularErrorType * getAzimuthAngularAccuracy();
  void setAzimuthAngularAccuracy(AngularErrorType * AzimuthAngularAccuracyIn);
  AngularErrorType * getElevationAngularAccuracy();
  void setElevationAngularAccuracy(AngularErrorType * ElevationAngularAccuracyIn);
  LinearValueType * getRangeForVolumetricUncertainty();
  void setRangeForVolumetricUncertainty(LinearValueType * RangeForVolumetricUncertaintyIn);
  LinearValueType * getVolumetricUncertainty();
  void setVolumetricUncertainty(LinearValueType * VolumetricUncertaintyIn);
  LinearValueType * getMaxEnvironmentalAltitude();
  void setMaxEnvironmentalAltitude(LinearValueType * MaxEnvironmentalAltitudeIn);
  LinearValueType * getMinEnvironmentalAltitude();
  void setMinEnvironmentalAltitude(LinearValueType * MinEnvironmentalAltitudeIn);
  TimeValueType * getSurfacePointsSpeed();
  void setSurfacePointsSpeed(TimeValueType * SurfacePointsSpeedIn);
  TimeValueType * getToolingBallSpeed();
  void setToolingBallSpeed(TimeValueType * ToolingBallSpeedIn);
  TimeValueType * getFeatureSpeed();
  void setFeatureSpeed(TimeValueType * FeatureSpeedIn);

protected:
  LaserType * MeasurementLaser;
  LaserType * PointingLaser;
  UserDefinedUnitValueType * MaxPointsRate;
  LinearValueType * MaxMeasurementRange;
  LinearValueType * MinMeasurementRange;
  UserDefinedUnitValueType * ScanningSpeed;
  LinearErrorType * DistanceAccuracy;
  AngularErrorType * AzimuthAngularAccuracy;
  AngularErrorType * ElevationAngularAccuracy;
  LinearValueType * RangeForVolumetricUncertainty;
  LinearValueType * VolumetricUncertainty;
  LinearValueType * MaxEnvironmentalAltitude;
  LinearValueType * MinEnvironmentalAltitude;
  TimeValueType * SurfacePointsSpeed;
  TimeValueType * ToolingBallSpeed;
  TimeValueType * FeatureSpeed;
};

/* ***************************************************************** */

class LaserTrackerType :
  public UniversalDeviceType
{
public:
  LaserTrackerType();
  LaserTrackerType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    UserDefinedUnitValueType * MaximumAngularVelocityIn,
    LinearErrorType * DistanceAccuracyIn,
    AngularErrorType * AngularAccuracyIn,
    UserDefinedUnitValueType * SamplingRateIn,
    TargetMirrorEnumType * TargetMirrorIn,
    MassValueType * HeadMassIn,
    CartesianWorkingVolumeType * HeadSizeIn,
    LinearValueType * MaximumWorkingAmplitudeIn,
    LaserType * LaserIn,
    LinearValueType * RepeatabilityIn);
  LaserTrackerType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    UserDefinedUnitValueType * MaximumAngularVelocityIn,
    LinearErrorType * DistanceAccuracyIn,
    AngularErrorType * AngularAccuracyIn,
    UserDefinedUnitValueType * SamplingRateIn,
    TargetMirrorEnumType * TargetMirrorIn,
    MassValueType * HeadMassIn,
    CartesianWorkingVolumeType * HeadSizeIn,
    LinearValueType * MaximumWorkingAmplitudeIn,
    LaserType * LaserIn,
    LinearValueType * RepeatabilityIn);
  ~LaserTrackerType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  UserDefinedUnitValueType * getMaximumAngularVelocity();
  void setMaximumAngularVelocity(UserDefinedUnitValueType * MaximumAngularVelocityIn);
  LinearErrorType * getDistanceAccuracy();
  void setDistanceAccuracy(LinearErrorType * DistanceAccuracyIn);
  AngularErrorType * getAngularAccuracy();
  void setAngularAccuracy(AngularErrorType * AngularAccuracyIn);
  UserDefinedUnitValueType * getSamplingRate();
  void setSamplingRate(UserDefinedUnitValueType * SamplingRateIn);
  TargetMirrorEnumType * getTargetMirror();
  void setTargetMirror(TargetMirrorEnumType * TargetMirrorIn);
  MassValueType * getHeadMass();
  void setHeadMass(MassValueType * HeadMassIn);
  CartesianWorkingVolumeType * getHeadSize();
  void setHeadSize(CartesianWorkingVolumeType * HeadSizeIn);
  LinearValueType * getMaximumWorkingAmplitude();
  void setMaximumWorkingAmplitude(LinearValueType * MaximumWorkingAmplitudeIn);
  LaserType * getLaser();
  void setLaser(LaserType * LaserIn);
  LinearValueType * getRepeatability();
  void setRepeatability(LinearValueType * RepeatabilityIn);

protected:
  UserDefinedUnitValueType * MaximumAngularVelocity;
  LinearErrorType * DistanceAccuracy;
  AngularErrorType * AngularAccuracy;
  UserDefinedUnitValueType * SamplingRate;
  TargetMirrorEnumType * TargetMirror;
  MassValueType * HeadMass;
  CartesianWorkingVolumeType * HeadSize;
  LinearValueType * MaximumWorkingAmplitude;
  LaserType * Laser;
  LinearValueType * Repeatability;
};

/* ***************************************************************** */

class LightPenCMMType :
  public CMMType
{
public:
  LightPenCMMType();
  LightPenCMMType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    ChargeCoupledDeviceCameraSensorType * LightPenCMMChargeCoupledDeviceCameraSensorIn,
    XmlString * LightSourceIn,
    LinearValueType * NominalVolumetricAccuracyIn,
    LinearValueType * ActualVolumetricAccuracyIn,
    LinearValueType * NominalSinglePointAccuracyIn,
    LinearValueType * ActualSinglePointAccuracyIn,
    UserDefinedUnitValueType * ScanningSpeedIn,
    XmlString * LaserClassIn);
  LightPenCMMType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    ChargeCoupledDeviceCameraSensorType * LightPenCMMChargeCoupledDeviceCameraSensorIn,
    XmlString * LightSourceIn,
    LinearValueType * NominalVolumetricAccuracyIn,
    LinearValueType * ActualVolumetricAccuracyIn,
    LinearValueType * NominalSinglePointAccuracyIn,
    LinearValueType * ActualSinglePointAccuracyIn,
    UserDefinedUnitValueType * ScanningSpeedIn,
    XmlString * LaserClassIn);
  ~LightPenCMMType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  ChargeCoupledDeviceCameraSensorType * getLightPenCMMChargeCoupledDeviceCameraSensor();
  void setLightPenCMMChargeCoupledDeviceCameraSensor(ChargeCoupledDeviceCameraSensorType * LightPenCMMChargeCoupledDeviceCameraSensorIn);
  XmlString * getLightSource();
  void setLightSource(XmlString * LightSourceIn);
  LinearValueType * getNominalVolumetricAccuracy();
  void setNominalVolumetricAccuracy(LinearValueType * NominalVolumetricAccuracyIn);
  LinearValueType * getActualVolumetricAccuracy();
  void setActualVolumetricAccuracy(LinearValueType * ActualVolumetricAccuracyIn);
  LinearValueType * getNominalSinglePointAccuracy();
  void setNominalSinglePointAccuracy(LinearValueType * NominalSinglePointAccuracyIn);
  LinearValueType * getActualSinglePointAccuracy();
  void setActualSinglePointAccuracy(LinearValueType * ActualSinglePointAccuracyIn);
  UserDefinedUnitValueType * getScanningSpeed();
  void setScanningSpeed(UserDefinedUnitValueType * ScanningSpeedIn);
  XmlString * getLaserClass();
  void setLaserClass(XmlString * LaserClassIn);

protected:
  ChargeCoupledDeviceCameraSensorType * LightPenCMMChargeCoupledDeviceCameraSensor;
  XmlString * LightSource;
  LinearValueType * NominalVolumetricAccuracy;
  LinearValueType * ActualVolumetricAccuracy;
  LinearValueType * NominalSinglePointAccuracy;
  LinearValueType * ActualSinglePointAccuracy;
  UserDefinedUnitValueType * ScanningSpeed;
  XmlString * LaserClass;
};

/* ***************************************************************** */

class ManualMeasurementDeviceType :
  public MeasurementDeviceType
{
public:
  ManualMeasurementDeviceType();
  ManualMeasurementDeviceType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn);
  ManualMeasurementDeviceType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn);
  ~ManualMeasurementDeviceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);

protected:
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
};

/* ***************************************************************** */

class MicrometerType :
  public ManualMeasurementDeviceType
{
public:
  MicrometerType();
  MicrometerType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    ForceValueType * MeasuringForceIn,
    InternalExternalEnumType * InternalExternalIn);
  MicrometerType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    ForceValueType * MeasuringForceIn,
    InternalExternalEnumType * InternalExternalIn);
  ~MicrometerType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearResolutionType * getLinearResolution();
  void setLinearResolution(LinearResolutionType * LinearResolutionIn);
  NumericalLengthAccuracyType * getAccuracy();
  void setAccuracy(NumericalLengthAccuracyType * AccuracyIn);
  ForceValueType * getMeasuringForce();
  void setMeasuringForce(ForceValueType * MeasuringForceIn);
  InternalExternalEnumType * getInternalExternal();
  void setInternalExternal(InternalExternalEnumType * InternalExternalIn);

protected:
  LinearResolutionType * LinearResolution;
  NumericalLengthAccuracyType * Accuracy;
  ForceValueType * MeasuringForce;
  InternalExternalEnumType * InternalExternal;
};

/* ***************************************************************** */

class MicroscopeType :
  public UniversalDeviceType
{
public:
  MicroscopeType();
  MicroscopeType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlString * IlluminationUnitIn,
    XmlDecimal * TotalMagnificationIn,
    XmlDecimal * EyePieceMagnificationIn,
    XmlDecimal * ObjectiveMagnificationIn,
    LinearValueType * MaxWorkpieceHeightIn,
    MassValueType * MaxWorkpieceWeightIn,
    LinearErrorType * AccuracyIn,
    AngularValueType * StageSwivelingAngleIn,
    ArrayReferenceType * ToolIdsIn);
  MicroscopeType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlString * IlluminationUnitIn,
    XmlDecimal * TotalMagnificationIn,
    XmlDecimal * EyePieceMagnificationIn,
    XmlDecimal * ObjectiveMagnificationIn,
    LinearValueType * MaxWorkpieceHeightIn,
    MassValueType * MaxWorkpieceWeightIn,
    LinearErrorType * AccuracyIn,
    AngularValueType * StageSwivelingAngleIn,
    ArrayReferenceType * ToolIdsIn);
  ~MicroscopeType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlString * getIlluminationUnit();
  void setIlluminationUnit(XmlString * IlluminationUnitIn);
  XmlDecimal * getTotalMagnification();
  void setTotalMagnification(XmlDecimal * TotalMagnificationIn);
  XmlDecimal * getEyePieceMagnification();
  void setEyePieceMagnification(XmlDecimal * EyePieceMagnificationIn);
  XmlDecimal * getObjectiveMagnification();
  void setObjectiveMagnification(XmlDecimal * ObjectiveMagnificationIn);
  LinearValueType * getMaxWorkpieceHeight();
  void setMaxWorkpieceHeight(LinearValueType * MaxWorkpieceHeightIn);
  MassValueType * getMaxWorkpieceWeight();
  void setMaxWorkpieceWeight(MassValueType * MaxWorkpieceWeightIn);
  LinearErrorType * getAccuracy();
  void setAccuracy(LinearErrorType * AccuracyIn);
  AngularValueType * getStageSwivelingAngle();
  void setStageSwivelingAngle(AngularValueType * StageSwivelingAngleIn);
  ArrayReferenceType * getToolIds();
  void setToolIds(ArrayReferenceType * ToolIdsIn);

protected:
  XmlString * IlluminationUnit;
  XmlDecimal * TotalMagnification;
  XmlDecimal * EyePieceMagnification;
  XmlDecimal * ObjectiveMagnification;
  LinearValueType * MaxWorkpieceHeight;
  MassValueType * MaxWorkpieceWeight;
  LinearErrorType * Accuracy;
  AngularValueType * StageSwivelingAngle;
  ArrayReferenceType * ToolIds;
};

/* ***************************************************************** */

class MultipleCarriageCartesianCMMType :
  public CartesianCMMType
{
public:
  MultipleCarriageCartesianCMMType();
  MultipleCarriageCartesianCMMType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    PointType * HomeLocationIn,
    CartesianCMMGeometryType * CMMGeometryIn,
    CMMAxisDirectionsBaseType * CMMAxisDirectionsIn,
    MeasurementDeviceScalesBaseType * ScalesIn,
    LinearValueType * MaxWorkpieceHeightIn,
    MassValueType * MaxWorkpieceMassIn,
    CartesianCMMSpeedsType * JoystickSpeedsIn,
    CMMSpeedsBaseType * CMMSpeedsIn,
    RotaryTableType * RotaryTableIn,
    CartesianCMMAccuraciesType * AccuraciesIn,
    ArrayReferenceType * ToolIdsIn,
    ArrayReferenceType * SensorIdsIn,
    CarriagesType * CarriagesIn);
  MultipleCarriageCartesianCMMType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    PointType * HomeLocationIn,
    CartesianCMMGeometryType * CMMGeometryIn,
    CMMAxisDirectionsBaseType * CMMAxisDirectionsIn,
    MeasurementDeviceScalesBaseType * ScalesIn,
    LinearValueType * MaxWorkpieceHeightIn,
    MassValueType * MaxWorkpieceMassIn,
    CartesianCMMSpeedsType * JoystickSpeedsIn,
    CMMSpeedsBaseType * CMMSpeedsIn,
    RotaryTableType * RotaryTableIn,
    CartesianCMMAccuraciesType * AccuraciesIn,
    ArrayReferenceType * ToolIdsIn,
    ArrayReferenceType * SensorIdsIn,
    CarriagesType * CarriagesIn);
  ~MultipleCarriageCartesianCMMType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CarriagesType * getCarriages();
  void setCarriages(CarriagesType * CarriagesIn);

protected:
  CarriagesType * Carriages;
};

/* ***************************************************************** */

class OpticalComparatorType :
  public UniversalDeviceType
{
public:
  OpticalComparatorType();
  OpticalComparatorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlDecimal * MagnificationIn,
    LinearValueType * EffectiveScreenDiameterIn,
    XmlString * ScreenMaterialIn,
    AngularValueType * AngleResolutionIn,
    XmlString * SurfaceIlluminationLightSourceIn,
    XmlString * ContourIlluminationLightSourceIn,
    LinearValueType * MaxWorkpieceHeightIn,
    LinearValueType * WorkingDistanceIn,
    ArrayReferenceType * ToolIdsIn);
  OpticalComparatorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    XmlDecimal * MagnificationIn,
    LinearValueType * EffectiveScreenDiameterIn,
    XmlString * ScreenMaterialIn,
    AngularValueType * AngleResolutionIn,
    XmlString * SurfaceIlluminationLightSourceIn,
    XmlString * ContourIlluminationLightSourceIn,
    LinearValueType * MaxWorkpieceHeightIn,
    LinearValueType * WorkingDistanceIn,
    ArrayReferenceType * ToolIdsIn);
  ~OpticalComparatorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlDecimal * getMagnification();
  void setMagnification(XmlDecimal * MagnificationIn);
  LinearValueType * getEffectiveScreenDiameter();
  void setEffectiveScreenDiameter(LinearValueType * EffectiveScreenDiameterIn);
  XmlString * getScreenMaterial();
  void setScreenMaterial(XmlString * ScreenMaterialIn);
  AngularValueType * getAngleResolution();
  void setAngleResolution(AngularValueType * AngleResolutionIn);
  XmlString * getSurfaceIlluminationLightSource();
  void setSurfaceIlluminationLightSource(XmlString * SurfaceIlluminationLightSourceIn);
  XmlString * getContourIlluminationLightSource();
  void setContourIlluminationLightSource(XmlString * ContourIlluminationLightSourceIn);
  LinearValueType * getMaxWorkpieceHeight();
  void setMaxWorkpieceHeight(LinearValueType * MaxWorkpieceHeightIn);
  LinearValueType * getWorkingDistance();
  void setWorkingDistance(LinearValueType * WorkingDistanceIn);
  ArrayReferenceType * getToolIds();
  void setToolIds(ArrayReferenceType * ToolIdsIn);

protected:
  XmlDecimal * Magnification;
  LinearValueType * EffectiveScreenDiameter;
  XmlString * ScreenMaterial;
  AngularValueType * AngleResolution;
  XmlString * SurfaceIlluminationLightSource;
  XmlString * ContourIlluminationLightSource;
  LinearValueType * MaxWorkpieceHeight;
  LinearValueType * WorkingDistance;
  ArrayReferenceType * ToolIds;
};

/* ***************************************************************** */

class ParallelLinkCMMType :
  public CMMType
{
public:
  ParallelLinkCMMType();
  ParallelLinkCMMType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    CMMSpeedsBaseType * CMMSpeedsIn,
    XYZLinearSpecificationType * AxesTravelDistanceIn,
    AngularValueType * AxesRotationAngleIn,
    XYZLinearSpecificationType * AxisBacklashIn,
    XYZLinearSpecificationType * AxisRepeatabilityIn,
    MassValueType * MaxLoadIn,
    XmlString * StageMaterialIn,
    ForceValueType * MaxHoldingForceIn,
    XmlString * MotorTypeIn,
    StiffnessType * LinksStiffnessIn,
    ArrayReferenceType * ToolIdsIn);
  ParallelLinkCMMType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    CMMSpeedsBaseType * CMMSpeedsIn,
    XYZLinearSpecificationType * AxesTravelDistanceIn,
    AngularValueType * AxesRotationAngleIn,
    XYZLinearSpecificationType * AxisBacklashIn,
    XYZLinearSpecificationType * AxisRepeatabilityIn,
    MassValueType * MaxLoadIn,
    XmlString * StageMaterialIn,
    ForceValueType * MaxHoldingForceIn,
    XmlString * MotorTypeIn,
    StiffnessType * LinksStiffnessIn,
    ArrayReferenceType * ToolIdsIn);
  ~ParallelLinkCMMType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  CMMSpeedsBaseType * getCMMSpeeds();
  void setCMMSpeeds(CMMSpeedsBaseType * CMMSpeedsIn);
  XYZLinearSpecificationType * getAxesTravelDistance();
  void setAxesTravelDistance(XYZLinearSpecificationType * AxesTravelDistanceIn);
  AngularValueType * getAxesRotationAngle();
  void setAxesRotationAngle(AngularValueType * AxesRotationAngleIn);
  XYZLinearSpecificationType * getAxisBacklash();
  void setAxisBacklash(XYZLinearSpecificationType * AxisBacklashIn);
  XYZLinearSpecificationType * getAxisRepeatability();
  void setAxisRepeatability(XYZLinearSpecificationType * AxisRepeatabilityIn);
  MassValueType * getMaxLoad();
  void setMaxLoad(MassValueType * MaxLoadIn);
  XmlString * getStageMaterial();
  void setStageMaterial(XmlString * StageMaterialIn);
  ForceValueType * getMaxHoldingForce();
  void setMaxHoldingForce(ForceValueType * MaxHoldingForceIn);
  XmlString * getMotorType();
  void setMotorType(XmlString * MotorTypeIn);
  StiffnessType * getLinksStiffness();
  void setLinksStiffness(StiffnessType * LinksStiffnessIn);
  ArrayReferenceType * getToolIds();
  void setToolIds(ArrayReferenceType * ToolIdsIn);

protected:
  CMMSpeedsBaseType * CMMSpeeds;
  XYZLinearSpecificationType * AxesTravelDistance;
  AngularValueType * AxesRotationAngle;
  XYZLinearSpecificationType * AxisBacklash;
  XYZLinearSpecificationType * AxisRepeatability;
  MassValueType * MaxLoad;
  XmlString * StageMaterial;
  ForceValueType * MaxHoldingForce;
  XmlString * MotorType;
  StiffnessType * LinksStiffness;
  ArrayReferenceType * ToolIds;
};

/* ***************************************************************** */

class SimpleTactileProbeSensorType :
  public TactileProbeSensorBaseType
{
public:
  SimpleTactileProbeSensorType();
  SimpleTactileProbeSensorType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    QualificationsType * QualificationsIn,
    LinearValueType * LengthIn,
    TipEndGeometryType * TipEndGeometryIn,
    LinearValueType * TipEndDiameterIn,
    XmlString * TipEndMaterialIn,
    XmlString * StemMaterialIn,
    LinearValueType * StemDiameterIn);
  SimpleTactileProbeSensorType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    XmlString * ProtectionClassIn,
    XmlString * LinearityErrorIn,
    LinearValueType * RepeatabilityIn,
    XmlDecimal * SensitivityIn,
    LinearValueType * ResolutionIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    QualificationsType * QualificationsIn,
    LinearValueType * LengthIn,
    TipEndGeometryType * TipEndGeometryIn,
    LinearValueType * TipEndDiameterIn,
    XmlString * TipEndMaterialIn,
    XmlString * StemMaterialIn,
    LinearValueType * StemDiameterIn);
  ~SimpleTactileProbeSensorType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QualificationsType * getQualifications();
  void setQualifications(QualificationsType * QualificationsIn);
  LinearValueType * getLength();
  void setLength(LinearValueType * LengthIn);
  TipEndGeometryType * getTipEndGeometry();
  void setTipEndGeometry(TipEndGeometryType * TipEndGeometryIn);
  LinearValueType * getTipEndDiameter();
  void setTipEndDiameter(LinearValueType * TipEndDiameterIn);
  XmlString * getTipEndMaterial();
  void setTipEndMaterial(XmlString * TipEndMaterialIn);
  XmlString * getStemMaterial();
  void setStemMaterial(XmlString * StemMaterialIn);
  LinearValueType * getStemDiameter();
  void setStemDiameter(LinearValueType * StemDiameterIn);

protected:
  QualificationsType * Qualifications;
  LinearValueType * Length;
  TipEndGeometryType * TipEndGeometry;
  LinearValueType * TipEndDiameter;
  XmlString * TipEndMaterial;
  XmlString * StemMaterial;
  LinearValueType * StemDiameter;
};

/* ***************************************************************** */

class SineBarType :
  public ManualMeasurementDeviceType
{
public:
  SineBarType();
  SineBarType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearValueType * NominalBallCenterToBallCenterLengthIn,
    LinearValueType * CylinderCenterToCylinderCenterAccuracyIn,
    LinearValueType * ParallelismIn,
    LinearValueType * OverallLengthIn,
    XmlString * MaterialIn,
    XmlBoolean * MagneticIn,
    LinearValueType * WidthIn);
  SineBarType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearValueType * NominalBallCenterToBallCenterLengthIn,
    LinearValueType * CylinderCenterToCylinderCenterAccuracyIn,
    LinearValueType * ParallelismIn,
    LinearValueType * OverallLengthIn,
    XmlString * MaterialIn,
    XmlBoolean * MagneticIn,
    LinearValueType * WidthIn);
  ~SineBarType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getNominalBallCenterToBallCenterLength();
  void setNominalBallCenterToBallCenterLength(LinearValueType * NominalBallCenterToBallCenterLengthIn);
  LinearValueType * getCylinderCenterToCylinderCenterAccuracy();
  void setCylinderCenterToCylinderCenterAccuracy(LinearValueType * CylinderCenterToCylinderCenterAccuracyIn);
  LinearValueType * getParallelism();
  void setParallelism(LinearValueType * ParallelismIn);
  LinearValueType * getOverallLength();
  void setOverallLength(LinearValueType * OverallLengthIn);
  XmlString * getMaterial();
  void setMaterial(XmlString * MaterialIn);
  XmlBoolean * getMagnetic();
  void setMagnetic(XmlBoolean * MagneticIn);
  LinearValueType * getWidth();
  void setWidth(LinearValueType * WidthIn);

protected:
  LinearValueType * NominalBallCenterToBallCenterLength;
  LinearValueType * CylinderCenterToCylinderCenterAccuracy;
  LinearValueType * Parallelism;
  LinearValueType * OverallLength;
  XmlString * Material;
  XmlBoolean * Magnetic;
  LinearValueType * Width;
};

/* ***************************************************************** */

class TheodoliteType :
  public UniversalDeviceType
{
public:
  TheodoliteType();
  TheodoliteType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    SpeedValueType * LongitudinalTrackingSpeedIn,
    SpeedValueType * LateralTrackingSpeedIn,
    XmlDecimal * MagnificationIn,
    LinearValueType * FieldOfViewDiameterIn,
    LinearValueType * ApertureSizeIn,
    LinearValueType * MaxFocusDistanceIn,
    AngularValueType * AngularAccuracyIn,
    AngularValueType * MaxTiltCompensationIn,
    ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensorIn,
    LinearValueType * MinFocusDistanceIn,
    LinearValueType * EffectiveDiameterOfObjectiveIn,
    UserDefinedUnitValueType * StadiaBaseConstantIn,
    UserDefinedUnitValueType * StadiaRateConstantIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn,
    LaserType * LaserIn);
  TheodoliteType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    SpeedValueType * LongitudinalTrackingSpeedIn,
    SpeedValueType * LateralTrackingSpeedIn,
    XmlDecimal * MagnificationIn,
    LinearValueType * FieldOfViewDiameterIn,
    LinearValueType * ApertureSizeIn,
    LinearValueType * MaxFocusDistanceIn,
    AngularValueType * AngularAccuracyIn,
    AngularValueType * MaxTiltCompensationIn,
    ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensorIn,
    LinearValueType * MinFocusDistanceIn,
    LinearValueType * EffectiveDiameterOfObjectiveIn,
    UserDefinedUnitValueType * StadiaBaseConstantIn,
    UserDefinedUnitValueType * StadiaRateConstantIn,
    UserDefinedUnitValueType * MinPowerSupplyVoltageIn,
    UserDefinedUnitValueType * MaxPowerSupplyVoltageIn,
    LaserType * LaserIn);
  ~TheodoliteType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SpeedValueType * getLongitudinalTrackingSpeed();
  void setLongitudinalTrackingSpeed(SpeedValueType * LongitudinalTrackingSpeedIn);
  SpeedValueType * getLateralTrackingSpeed();
  void setLateralTrackingSpeed(SpeedValueType * LateralTrackingSpeedIn);
  XmlDecimal * getMagnification();
  void setMagnification(XmlDecimal * MagnificationIn);
  LinearValueType * getFieldOfViewDiameter();
  void setFieldOfViewDiameter(LinearValueType * FieldOfViewDiameterIn);
  LinearValueType * getApertureSize();
  void setApertureSize(LinearValueType * ApertureSizeIn);
  LinearValueType * getMaxFocusDistance();
  void setMaxFocusDistance(LinearValueType * MaxFocusDistanceIn);
  AngularValueType * getAngularAccuracy();
  void setAngularAccuracy(AngularValueType * AngularAccuracyIn);
  AngularValueType * getMaxTiltCompensation();
  void setMaxTiltCompensation(AngularValueType * MaxTiltCompensationIn);
  ChargeCoupledDeviceCameraSensorType * getChargeCoupledDeviceCameraSensor();
  void setChargeCoupledDeviceCameraSensor(ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensorIn);
  LinearValueType * getMinFocusDistance();
  void setMinFocusDistance(LinearValueType * MinFocusDistanceIn);
  LinearValueType * getEffectiveDiameterOfObjective();
  void setEffectiveDiameterOfObjective(LinearValueType * EffectiveDiameterOfObjectiveIn);
  UserDefinedUnitValueType * getStadiaBaseConstant();
  void setStadiaBaseConstant(UserDefinedUnitValueType * StadiaBaseConstantIn);
  UserDefinedUnitValueType * getStadiaRateConstant();
  void setStadiaRateConstant(UserDefinedUnitValueType * StadiaRateConstantIn);
  UserDefinedUnitValueType * getMinPowerSupplyVoltage();
  void setMinPowerSupplyVoltage(UserDefinedUnitValueType * MinPowerSupplyVoltageIn);
  UserDefinedUnitValueType * getMaxPowerSupplyVoltage();
  void setMaxPowerSupplyVoltage(UserDefinedUnitValueType * MaxPowerSupplyVoltageIn);
  LaserType * getLaser();
  void setLaser(LaserType * LaserIn);

protected:
  SpeedValueType * LongitudinalTrackingSpeed;
  SpeedValueType * LateralTrackingSpeed;
  XmlDecimal * Magnification;
  LinearValueType * FieldOfViewDiameter;
  LinearValueType * ApertureSize;
  LinearValueType * MaxFocusDistance;
  AngularValueType * AngularAccuracy;
  AngularValueType * MaxTiltCompensation;
  ChargeCoupledDeviceCameraSensorType * ChargeCoupledDeviceCameraSensor;
  LinearValueType * MinFocusDistance;
  LinearValueType * EffectiveDiameterOfObjective;
  UserDefinedUnitValueType * StadiaBaseConstant;
  UserDefinedUnitValueType * StadiaRateConstant;
  UserDefinedUnitValueType * MinPowerSupplyVoltage;
  UserDefinedUnitValueType * MaxPowerSupplyVoltage;
  LaserType * Laser;
};

/* ***************************************************************** */

class AACMMType :
  public CMMType
{
public:
  AACMMType();
  AACMMType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    PointType * HomeLocationIn,
    XmlInt * NumberOfJointsIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearValueType * ProbeTipDiameterIn,
    AACMMAccuraciesType * AccuraciesIn);
  AACMMType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    ResolutionBaseType * ResolutionIn,
    WorkingVolumeBaseType * WorkingVolumeIn,
    EffectiveWorkingVolumeBaseType * EffectiveWorkingVolumeIn,
    TemperatureCompensationType * TemperatureCompensationIn,
    PointType * HomeLocationIn,
    XmlInt * NumberOfJointsIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearValueType * ProbeTipDiameterIn,
    AACMMAccuraciesType * AccuraciesIn);
  ~AACMMType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  PointType * getHomeLocation();
  void setHomeLocation(PointType * HomeLocationIn);
  XmlInt * getNumberOfJoints();
  void setNumberOfJoints(XmlInt * NumberOfJointsIn);
  LinearValueType * getMinMeasuringDistance();
  void setMinMeasuringDistance(LinearValueType * MinMeasuringDistanceIn);
  LinearValueType * getMaxMeasuringDistance();
  void setMaxMeasuringDistance(LinearValueType * MaxMeasuringDistanceIn);
  LinearValueType * getProbeTipDiameter();
  void setProbeTipDiameter(LinearValueType * ProbeTipDiameterIn);
  AACMMAccuraciesType * getAccuracies();
  void setAccuracies(AACMMAccuraciesType * AccuraciesIn);

protected:
  PointType * HomeLocation;
  XmlInt * NumberOfJoints;
  LinearValueType * MinMeasuringDistance;
  LinearValueType * MaxMeasuringDistance;
  LinearValueType * ProbeTipDiameter;
  AACMMAccuraciesType * Accuracies;
};

/* ***************************************************************** */

class CaliperType :
  public ManualMeasurementDeviceType
{
public:
  CaliperType();
  CaliperType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    XmlBoolean * CanMeasureInnerDIn,
    XmlBoolean * CanMeasureOuterDIn,
    XmlBoolean * CanMeasureDepthIn);
  CaliperType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    XmlBoolean * CanMeasureInnerDIn,
    XmlBoolean * CanMeasureOuterDIn,
    XmlBoolean * CanMeasureDepthIn);
  ~CaliperType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearResolutionType * getLinearResolution();
  void setLinearResolution(LinearResolutionType * LinearResolutionIn);
  NumericalLengthAccuracyType * getAccuracy();
  void setAccuracy(NumericalLengthAccuracyType * AccuracyIn);
  XmlBoolean * getCanMeasureInnerD();
  void setCanMeasureInnerD(XmlBoolean * CanMeasureInnerDIn);
  XmlBoolean * getCanMeasureOuterD();
  void setCanMeasureOuterD(XmlBoolean * CanMeasureOuterDIn);
  XmlBoolean * getCanMeasureDepth();
  void setCanMeasureDepth(XmlBoolean * CanMeasureDepthIn);

protected:
  LinearResolutionType * LinearResolution;
  NumericalLengthAccuracyType * Accuracy;
  XmlBoolean * CanMeasureInnerD;
  XmlBoolean * CanMeasureOuterD;
  XmlBoolean * CanMeasureDepth;
};

/* ***************************************************************** */

class GageDeviceType :
  public ManualMeasurementDeviceType
{
public:
  GageDeviceType();
  GageDeviceType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn);
  GageDeviceType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn);
  ~GageDeviceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class MicrometerAnalogType :
  public MicrometerType
{
public:
  MicrometerAnalogType();
  MicrometerAnalogType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    ForceValueType * MeasuringForceIn,
    InternalExternalEnumType * InternalExternalIn);
  MicrometerAnalogType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    ForceValueType * MeasuringForceIn,
    InternalExternalEnumType * InternalExternalIn);
  ~MicrometerAnalogType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class MicrometerDigitalType :
  public MicrometerType
{
public:
  MicrometerDigitalType();
  MicrometerDigitalType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    ForceValueType * MeasuringForceIn,
    InternalExternalEnumType * InternalExternalIn);
  MicrometerDigitalType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    ForceValueType * MeasuringForceIn,
    InternalExternalEnumType * InternalExternalIn);
  ~MicrometerDigitalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class CaliperDialType :
  public CaliperType
{
public:
  CaliperDialType();
  CaliperDialType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    XmlBoolean * CanMeasureInnerDIn,
    XmlBoolean * CanMeasureOuterDIn,
    XmlBoolean * CanMeasureDepthIn);
  CaliperDialType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    XmlBoolean * CanMeasureInnerDIn,
    XmlBoolean * CanMeasureOuterDIn,
    XmlBoolean * CanMeasureDepthIn);
  ~CaliperDialType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class CaliperDigitalType :
  public CaliperType
{
public:
  CaliperDigitalType();
  CaliperDigitalType(
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    XmlBoolean * CanMeasureInnerDIn,
    XmlBoolean * CanMeasureOuterDIn,
    XmlBoolean * CanMeasureDepthIn);
  CaliperDigitalType(
    QIFIdType * idIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    XmlString * ManufacturerIn,
    XmlString * ModelNumberIn,
    XmlString * SerialNumberIn,
    MassValueType * MassIn,
    CartesianWorkingVolumeType * SizeIn,
    MeasurementReso_1196_Type * MeasurementReso_1196In,
    AttributesType * AttributesIn,
    CalibrationsType * CalibrationsIn,
    EnvironmentalRangeType * EnvironmentalRangeIn,
    LinearValueType * MinMeasuringDistanceIn,
    LinearValueType * MaxMeasuringDistanceIn,
    LinearResolutionType * LinearResolutionIn,
    NumericalLengthAccuracyType * AccuracyIn,
    XmlBoolean * CanMeasureInnerDIn,
    XmlBoolean * CanMeasureOuterDIn,
    XmlBoolean * CanMeasureDepthIn);
  ~CaliperDigitalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

#endif // QIFMEASUREMENTRESOURCES_HH
