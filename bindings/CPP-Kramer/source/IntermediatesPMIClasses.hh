/* ***************************************************************** */

#ifndef INTERMEDIATESPMI_HH
#define INTERMEDIATESPMI_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPMIClasses.hh"

/* ***************************************************************** */

class AddressDescriptionEnumType;
class AddressDescriptionType;
class AddressDescriptionTypeChoicePair;
class AlgorithmType;
class AlgorithmTypeLisd;
class AlgorithmsType;
class AlignmentFeatureType;
class AlignmentFeatureTypeChoicePair;
class AlignmentOperationBaseType;
class AlignmentOperationBaseTypeLisd;
class AlignmentOperationsType;
class AngleBetweenAnalysisModeEnumType;
class AngularCoordinateDirectionEnumType;
class AngularToleranceDefinitionType;
class AngularToleranceType;
class AreaToleranceType;
class BaseFeatureType;
class BaseFeatureTypeLisd;
class BestFitAlignmentOperationType;
class CollectionPlaneType;
class CommonFileSpecEnumType;
class CompoundDatumType;
class CoordinateSystemActualTransformAssociationType;
class CoordinateSystemActualTransformAssociationTypeLisd;
class CoordinateSystemActualTransformAssociationsType;
class CoordinateSystemListType;
class CoordinateSystemType;
class CoordinateSystemTypeLisd;
class CoordinateSystemsType;
class CustomerOrganizationType;
class DatumDefinitionType;
class DatumDefinitionTypeLisd;
class DatumDefinitionsType;
class DatumFeatureBaseType;
class DatumFeatureSimulatorModifierType;
class DatumFeatureSimulatorModifierTypeChoicePair;
class DatumPrecedenceAlignmentOperationType;
class DatumReferenceFrameType;
class DatumReferenceFrameTypeLisd;
class DatumReferenceFramesType;
class DatumTargetDefinitionsType;
class DatumTargetType;
class DatumTargetTypeLisd;
class DatumTranslationType;
class DatumType;
class DatumWithPrecedenceType;
class DatumWithPrecedenceTypeLisd;
class DatumsType;
class DefiningPointMeasurementType;
class DefiningPointMeasurementTypeLisd;
class DefiningPointNominalType;
class DefiningPointNominalTypeLisd;
class DegreeOfFreedomEnumType;
class DegreeOfFreedomEnumTypeLisd;
class DegreesOfFreedomType;
class DegreesOfFreedomTypeChoicePair;
class DiameterModifierEnumType;
class DimensionDeterminationEnumType;
class DimensionModifierEnumType;
class DimensionModifiersType;
class DirectionFeatureType;
class DirectionalOffsetType;
class DistanceBetweenAnalysisModeEnumType;
class EmployeeType;
class EmployeeTypeLisd;
class EntitiesExternalType;
class EntityExternalType;
class EntityExternalTypeLisd;
class EventBaseType;
class ExternalFileReferenceType;
class ExternalFileReferenceTypeLisd;
class ExternalFileReferencesType;
class FileSpecType;
class FileSpecTypeChoicePair;
class FileType;
class ForceToleranceType;
class ISODegreeOfFreedomEnumType;
class ISODegreeOfFreedomEnumTypeLisd;
class InspectionStatusEnumType;
class InspectionStatusType;
class InspectionStatusTypeChoicePair;
class IntersectionPlaneEnumType;
class IntersectionPlaneType;
class LimitsAndFitsSpecificationType;
class LimitsAndFitsZoneVarianceType;
class LinearCoordinateDirectionEnumType;
class LinearToleranceDefinitionType;
class LinearToleranceType;
class LocationType;
class MachineCoordinateSystemOperationType;
class MachineCoordinateSystemType;
class MachineCoordinateSystemTypeLisd;
class MassToleranceType;
class MaterialClassEnumType;
class MaterialModifierEnumType;
class MaterialType;
class MaterialTypeLisd;
class MaterialsType;
class MeasurePointNominalType;
class MeasurePointNominalTypeLisd;
class MeasuredDatumFeatureType;
class MeasuredPointWithNormalBaseType;
class MeasurementDirectiveEnumType;
class MeasurementDirectiveType;
class MeasurementDirectiveTypeChoicePair;
class MeasurementOffsetAlignmentOperationType;
class MeasurementOriginOffsetType;
class MeasurementOriginOffsetTypeLisd;
class ModifyingPlaneEnumType;
class MovableDatumTargetDirectionType;
class MultiLeadThreadSpecificationType;
class NominalDatumFeatureType;
class NominalOffsetAlignmentOperationType;
class NominalRotationAlignmentOperationType;
class NonToleranceEnumType;
class NotableEventType;
class NotableEventTypeLisd;
class NotableEventsType;
class NotedEventType;
class NotedEventTypeLisd;
class NotedEventsType;
class OrganizationType;
class OrientationPlaneType;
class PhysicalAddressType;
class PointSetReferenceBaseType;
class PointSetReferenceBaseTypeLisd;
class PointSetReferenceRangeType;
class PointSetReferenceSingleType;
class PointSetReferenceWholeType;
class PointWithNormalBaseType;
class PrecedenceEnumType;
class PrecedenceType;
class PrecedenceTypeChoicePair;
class PressureToleranceType;
class PrimaryAlignmentOperationType;
class ReducedDatumEnumType;
class ReferencedComponentEnumType;
class RetrievalMethodEnumType;
class SecondaryAlignmentOperationType;
class SectionModifierEnumType;
class SequencedBaseFeatureType;
class SequencedBaseFeatureTypeLisd;
class SequencedDatumType;
class SequencedDatumTypeLisd;
class SignOffsType;
class SignificantDimensionEnumType;
class SingleLeadThreadSpecificationType;
class SoftwareType;
class SoftwareTypeLisd;
class SoftwaresType;
class SpeedToleranceType;
class StandardType;
class StandardTypeLisd;
class StandardsOrganizationEnumType;
class StandardsOrganizationType;
class StandardsOrganizationTypeChoicePair;
class StandardsType;
class SubstituteFeatureAlgorithmEnumType;
class SubstituteFeatureAlgorithmType;
class TemperatureToleranceType;
class TextThreadSpecificationType;
class ThreadSpecificationDetailedBaseType;
class ThreadSpecificationType;
class ThreadSpecificationTypeLisd;
class ThreadSpecificationTypeChoicePair;
class ThreadSpecificationsType;
class TimeToleranceType;
class ToleranceZonePerUnitAngleType;
class ToleranceZonePerUnitAreaType;
class ToleranceZonePerUnitLengthType;
class ToleranceZonePerUnitPolarAreaType;
class TransformInstanceType;
class TransformInstanceTypeLisd;
class TransformListType;
class VersionBaseType;
class VersionHistoryType;
class VersionReferenceType;
class VersionReferenceTypeLisd;
class VersionType;
class VirtualMeasurementType;
class ZoneDataSetType;
class ZoneDataType;
class ZoneDataTypeLisd;
class AlgorithmType_1006_Type;
class AlgorithmType_1006_TypeChoicePair;
class AngularToleranc_1007_Type;
class AngularToleranc_1007_TypeChoicePair;
class AngularToleranc_1008_Type;
class AngularToleranc_1008_TypeChoicePair;
class AreaToleranceTy_1009_Type;
class AreaToleranceTy_1009_TypeChoicePair;
class DatumWithPreced_1010_Type;
class DatumWithPreced_1010_TypeChoicePair;
class DirectionalOffs_1011_Type;
class DirectionalOffs_1011_TypeChoicePair;
class ForceToleranceT_1012_Type;
class ForceToleranceT_1012_TypeChoicePair;
class LinearTolerance_1013_Type;
class LinearTolerance_1013_TypeChoicePair;
class LinearTolerance_1014_Type;
class LinearTolerance_1014_TypeChoicePair;
class MassToleranceTy_1015_Type;
class MassToleranceTy_1015_TypeChoicePair;
class MaterialType_1016_Type;
class MaterialType_1016_TypeChoicePair;
class PressureToleran_1017_Type;
class PressureToleran_1017_TypeChoicePair;
class SequencedDatumT_1018_Type;
class SequencedDatumT_1018_TypeChoicePair;
class SpeedToleranceT_1019_Type;
class SpeedToleranceT_1019_TypeChoicePair;
class SubstituteFeatu_1020_Type;
class SubstituteFeatu_1020_TypeChoicePair;
class TemperatureTole_1021_Type;
class TemperatureTole_1021_TypeChoicePair;
class TimeToleranceTy_1022_Type;
class TimeToleranceTy_1022_TypeChoicePair;
class ToleranceZonePe_1023_Type;
class ToleranceZonePe_1023_TypeChoicePair;
class AlgorithmType_1_1024_Type;
class AlgorithmType_1_1025_Type;
class AngularToleranc_1026_Type;
class AngularToleranc_1027_Type;
class AreaToleranceTy_1028_Type;
class ForceToleranceT_1029_Type;
class LinearTolerance_1030_Type;
class LinearTolerance_1031_Type;
class LinearTolerance_1032_Type;
class MassToleranceTy_1033_Type;
class PressureToleran_1034_Type;
class SpeedToleranceT_1035_Type;
class TemperatureTole_1036_Type;
class TimeToleranceTy_1037_Type;
class LinearTolerance_1038_Type;

/* ***************************************************************** */
/* ***************************************************************** */

class AddressDescriptionEnumType :
  public XmlNMTOKEN
{
public:
  AddressDescriptionEnumType();
  AddressDescriptionEnumType(
    const char * valIn);
  ~AddressDescriptionEnumType();
  bool AddressDescriptionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class AddressDescriptionType :
  public XmlTypeBase
{
public:
  AddressDescriptionType();
  AddressDescriptionType(
    AddressDescriptionTypeChoicePair * AddressDescriptionTypePairIn);
  ~AddressDescriptionType();
  void printSelf(FILE * outFile);

  AddressDescriptionTypeChoicePair * getAddressDescriptionTypePair();
  void setAddressDescriptionTypePair(AddressDescriptionTypeChoicePair * AddressDescriptionTypePairIn);

protected:
  AddressDescriptionTypeChoicePair * AddressDescriptionTypePair;
};

/* ***************************************************************** */

union AddressDescriptionTypeVal
{
  AddressDescriptionEnumType * AddressDescriptionEnum;
  XmlString * OtherAddressDescription;
};

/* ***************************************************************** */

class AddressDescriptionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AddressDescriptionEnumE,
    OtherAddressDescriptionE };
  AddressDescriptionTypeChoicePair();
  AddressDescriptionTypeChoicePair(
    whichOne AddressDescriptionTypeTypeIn,
    AddressDescriptionTypeVal * AddressDescriptionTypeValueIn);
  ~AddressDescriptionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AddressDescriptionTypeType;
  AddressDescriptionTypeVal * AddressDescriptionTypeValue;
};

/* ***************************************************************** */

class AlgorithmType :
  public XmlTypeBase
{
public:
  AlgorithmType();
  AlgorithmType(
    AttributesType * AttributesIn,
    AlgorithmType_1006_Type * AlgorithmType_1006In,
    XmlString * NameIn,
    XmlString * DescriptionIn);
  AlgorithmType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    AlgorithmType_1006_Type * AlgorithmType_1006In,
    XmlString * NameIn,
    XmlString * DescriptionIn);
  ~AlgorithmType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  AlgorithmType_1006_Type * getAlgorithmType_1006();
  void setAlgorithmType_1006(AlgorithmType_1006_Type * AlgorithmType_1006In);
  XmlString * getName();
  void setName(XmlString * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  AlgorithmType_1006_Type * AlgorithmType_1006;
  XmlString * Name;
  XmlString * Description;
};

/* ***************************************************************** */

class AlgorithmTypeLisd :
  public std::list<AlgorithmType *>,
  public XmlSchemaInstanceBase
{
public:
  AlgorithmTypeLisd();
  AlgorithmTypeLisd(
    AlgorithmType * aAlgorithmType);
  ~AlgorithmTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AlgorithmsType :
  public XmlTypeBase
{
public:
  AlgorithmsType();
  AlgorithmsType(
    AlgorithmTypeLisd * AlgorithmIn);
  AlgorithmsType(
    NaturalType * nIn,
    AlgorithmTypeLisd * AlgorithmIn);
  ~AlgorithmsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AlgorithmTypeLisd * getAlgorithm();
  void setAlgorithm(AlgorithmTypeLisd *);

protected:
  NaturalType * n;
  AlgorithmTypeLisd * Algorithm;
};

/* ***************************************************************** */

class AlignmentFeatureType :
  public XmlTypeBase
{
public:
  AlignmentFeatureType();
  AlignmentFeatureType(
    AlignmentFeatureTypeChoicePair * AlignmentFeatureTypePairIn);
  ~AlignmentFeatureType();
  void printSelf(FILE * outFile);

  AlignmentFeatureTypeChoicePair * getAlignmentFeatureTypePair();
  void setAlignmentFeatureTypePair(AlignmentFeatureTypeChoicePair * AlignmentFeatureTypePairIn);

protected:
  AlignmentFeatureTypeChoicePair * AlignmentFeatureTypePair;
};

/* ***************************************************************** */

union AlignmentFeatureTypeVal
{
  QIFReferenceFullType * DatumDefinitionId;
  BaseFeatureType * BaseFeature;
};

/* ***************************************************************** */

class AlignmentFeatureTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DatumDefinitionIdE,
    BaseFeatureE };
  AlignmentFeatureTypeChoicePair();
  AlignmentFeatureTypeChoicePair(
    whichOne AlignmentFeatureTypeTypeIn,
    AlignmentFeatureTypeVal * AlignmentFeatureTypeValueIn);
  ~AlignmentFeatureTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AlignmentFeatureTypeType;
  AlignmentFeatureTypeVal * AlignmentFeatureTypeValue;
};

/* ***************************************************************** */

class AlignmentOperationBaseType :
  public XmlTypeBase
{
public:
  AlignmentOperationBaseType();
  AlignmentOperationBaseType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn);
  virtual ~AlignmentOperationBaseType();
  void printSelf(FILE * outFile);

  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  NaturalType * SequenceNumber;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class AlignmentOperationBaseTypeLisd :
  public std::list<AlignmentOperationBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  AlignmentOperationBaseTypeLisd();
  AlignmentOperationBaseTypeLisd(
    AlignmentOperationBaseType * aAlignmentOperationBaseType);
  ~AlignmentOperationBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AlignmentOperationsType :
  public XmlTypeBase
{
public:
  AlignmentOperationsType();
  AlignmentOperationsType(
    AlignmentOperationBaseTypeLisd * AlignmentOperationIn,
    QIFReferenceFullType * BaseCoordinateSystemIdIn);
  AlignmentOperationsType(
    NaturalType * nIn,
    AlignmentOperationBaseTypeLisd * AlignmentOperationIn,
    QIFReferenceFullType * BaseCoordinateSystemIdIn);
  ~AlignmentOperationsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  AlignmentOperationBaseTypeLisd * getAlignmentOperation();
  void setAlignmentOperation(AlignmentOperationBaseTypeLisd *);
  QIFReferenceFullType * getBaseCoordinateSystemId();
  void setBaseCoordinateSystemId(QIFReferenceFullType * BaseCoordinateSystemIdIn);

protected:
  NaturalType * n;
  AlignmentOperationBaseTypeLisd * AlignmentOperation;
  QIFReferenceFullType * BaseCoordinateSystemId;
};

/* ***************************************************************** */

class AngleBetweenAnalysisModeEnumType :
  public XmlNMTOKEN
{
public:
  AngleBetweenAnalysisModeEnumType();
  AngleBetweenAnalysisModeEnumType(
    const char * valIn);
  ~AngleBetweenAnalysisModeEnumType();
  bool AngleBetweenAnalysisModeEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class AngularCoordinateDirectionEnumType :
  public XmlNMTOKEN
{
public:
  AngularCoordinateDirectionEnumType();
  AngularCoordinateDirectionEnumType(
    const char * valIn);
  ~AngularCoordinateDirectionEnumType();
  bool AngularCoordinateDirectionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class AngularToleranceDefinitionType :
  public XmlTypeBase
{
public:
  AngularToleranceDefinitionType();
  AngularToleranceDefinitionType(
    AttributesType * AttributesIn,
    AngularToleranc_1007_Type * AngularToleranc_1007In);
  AngularToleranceDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    AngularToleranc_1007_Type * AngularToleranc_1007In);
  ~AngularToleranceDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  AngularToleranc_1007_Type * getAngularToleranc_1007();
  void setAngularToleranc_1007(AngularToleranc_1007_Type * AngularToleranc_1007In);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  AngularToleranc_1007_Type * AngularToleranc_1007;
};

/* ***************************************************************** */

class AngularToleranceType :
  public XmlTypeBase
{
public:
  AngularToleranceType();
  AngularToleranceType(
    AngularToleranc_1008_Type * AngularToleranc_1008In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~AngularToleranceType();
  void printSelf(FILE * outFile);

  AngularToleranc_1008_Type * getAngularToleranc_1008();
  void setAngularToleranc_1008(AngularToleranc_1008_Type * AngularToleranc_1008In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  AngularToleranc_1008_Type * AngularToleranc_1008;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class AreaToleranceType :
  public XmlTypeBase
{
public:
  AreaToleranceType();
  AreaToleranceType(
    AreaToleranceTy_1009_Type * AreaToleranceTy_1009In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~AreaToleranceType();
  void printSelf(FILE * outFile);

  AreaToleranceTy_1009_Type * getAreaToleranceTy_1009();
  void setAreaToleranceTy_1009(AreaToleranceTy_1009_Type * AreaToleranceTy_1009In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  AreaToleranceTy_1009_Type * AreaToleranceTy_1009;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class BaseFeatureType :
  public XmlTypeBase
{
public:
  BaseFeatureType();
  BaseFeatureType(
    ReferencedComponentEnumType * ReferencedComponentIn,
    QIFReferenceFullType * FeatureIdIn);
  ~BaseFeatureType();
  void printSelf(FILE * outFile);

  ReferencedComponentEnumType * getReferencedComponent();
  void setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn);
  QIFReferenceFullType * getFeatureId();
  void setFeatureId(QIFReferenceFullType * FeatureIdIn);

protected:
  ReferencedComponentEnumType * ReferencedComponent;
  QIFReferenceFullType * FeatureId;
};

/* ***************************************************************** */

class BaseFeatureTypeLisd :
  public std::list<BaseFeatureType *>,
  public XmlSchemaInstanceBase
{
public:
  BaseFeatureTypeLisd();
  BaseFeatureTypeLisd(
    BaseFeatureType * aBaseFeatureType);
  ~BaseFeatureTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class BestFitAlignmentOperationType :
  public AlignmentOperationBaseType
{
public:
  BestFitAlignmentOperationType();
  BestFitAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    DegreesOfFreedomType * DegreesOfFreedomIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  BestFitAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    NaturalType * nIn,
    DegreesOfFreedomType * DegreesOfFreedomIn,
    SequencedBaseFeatureTypeLisd * BaseFeatureIn);
  ~BestFitAlignmentOperationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DegreesOfFreedomType * getDegreesOfFreedom();
  void setDegreesOfFreedom(DegreesOfFreedomType * DegreesOfFreedomIn);
  SequencedBaseFeatureTypeLisd * getBaseFeature();
  void setBaseFeature(SequencedBaseFeatureTypeLisd *);

protected:
  NaturalType * n;
  DegreesOfFreedomType * DegreesOfFreedom;
  SequencedBaseFeatureTypeLisd * BaseFeature;
};

/* ***************************************************************** */

class CollectionPlaneType :
  public XmlTypeBase
{
public:
  CollectionPlaneType();
  CollectionPlaneType(
    ModifyingPlaneEnumType * CollectionPlaneEnumIn,
    QIFReferenceFullType * DatumDefinitionIdIn);
  ~CollectionPlaneType();
  void printSelf(FILE * outFile);

  ModifyingPlaneEnumType * getCollectionPlaneEnum();
  void setCollectionPlaneEnum(ModifyingPlaneEnumType * CollectionPlaneEnumIn);
  QIFReferenceFullType * getDatumDefinitionId();
  void setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn);

protected:
  ModifyingPlaneEnumType * CollectionPlaneEnum;
  QIFReferenceFullType * DatumDefinitionId;
};

/* ***************************************************************** */

class CommonFileSpecEnumType :
  public XmlNMTOKEN
{
public:
  CommonFileSpecEnumType();
  CommonFileSpecEnumType(
    const char * valIn);
  ~CommonFileSpecEnumType();
  bool CommonFileSpecEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class CompoundDatumType :
  public XmlTypeBase
{
public:
  CompoundDatumType();
  CompoundDatumType(
    SequencedDatumTypeLisd * DatumIn,
    ReducedDatumEnumType * ReducedDatumIn);
  CompoundDatumType(
    NaturalType * nIn,
    SequencedDatumTypeLisd * DatumIn,
    ReducedDatumEnumType * ReducedDatumIn);
  ~CompoundDatumType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SequencedDatumTypeLisd * getDatum();
  void setDatum(SequencedDatumTypeLisd *);
  ReducedDatumEnumType * getReducedDatum();
  void setReducedDatum(ReducedDatumEnumType * ReducedDatumIn);

protected:
  NaturalType * n;
  SequencedDatumTypeLisd * Datum;
  ReducedDatumEnumType * ReducedDatum;
};

/* ***************************************************************** */

class CoordinateSystemActualTransformAssociationType :
  public XmlTypeBase
{
public:
  CoordinateSystemActualTransformAssociationType();
  CoordinateSystemActualTransformAssociationType(
    QIFReferenceType * ActualTransformIdIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~CoordinateSystemActualTransformAssociationType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getActualTransformId();
  void setActualTransformId(QIFReferenceType * ActualTransformIdIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  QIFReferenceType * ActualTransformId;
  QIFReferenceFullType * CoordinateSystemId;
};

/* ***************************************************************** */

class CoordinateSystemActualTransformAssociationTypeLisd :
  public std::list<CoordinateSystemActualTransformAssociationType *>,
  public XmlSchemaInstanceBase
{
public:
  CoordinateSystemActualTransformAssociationTypeLisd();
  CoordinateSystemActualTransformAssociationTypeLisd(
    CoordinateSystemActualTransformAssociationType * aCoordinateSystemActualTransformAssociationType);
  ~CoordinateSystemActualTransformAssociationTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CoordinateSystemActualTransformAssociationsType :
  public XmlTypeBase
{
public:
  CoordinateSystemActualTransformAssociationsType();
  CoordinateSystemActualTransformAssociationsType(
    CoordinateSystemActualTransformAssociationTypeLisd * CoordinateSystemActualTransformAssociationIn);
  CoordinateSystemActualTransformAssociationsType(
    NaturalType * nIn,
    CoordinateSystemActualTransformAssociationTypeLisd * CoordinateSystemActualTransformAssociationIn);
  ~CoordinateSystemActualTransformAssociationsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CoordinateSystemActualTransformAssociationTypeLisd * getCoordinateSystemActualTransformAssociation();
  void setCoordinateSystemActualTransformAssociation(CoordinateSystemActualTransformAssociationTypeLisd *);

protected:
  NaturalType * n;
  CoordinateSystemActualTransformAssociationTypeLisd * CoordinateSystemActualTransformAssociation;
};

/* ***************************************************************** */

class CoordinateSystemListType :
  public XmlTypeBase
{
public:
  CoordinateSystemListType();
  CoordinateSystemListType(
    CoordinateSystemTypeLisd * CoordinateSystemIn);
  CoordinateSystemListType(
    NaturalType * nIn,
    CoordinateSystemTypeLisd * CoordinateSystemIn);
  ~CoordinateSystemListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  CoordinateSystemTypeLisd * getCoordinateSystem();
  void setCoordinateSystem(CoordinateSystemTypeLisd *);

protected:
  NaturalType * n;
  CoordinateSystemTypeLisd * CoordinateSystem;
};

/* ***************************************************************** */

class CoordinateSystemType :
  public XmlTypeBase
{
public:
  CoordinateSystemType();
  CoordinateSystemType(
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    TransformMatrixType * NominalTransformIn,
    QIFReferenceFullType * InternalCADCoordinateSystemIdIn,
    QIFReferenceFullType * ExternalCADCoordinateSystemIdIn,
    AlignmentOperationsType * AlignmentOperationsIn,
    NaturalType * SequenceNumberIn);
  CoordinateSystemType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn,
    TransformMatrixType * NominalTransformIn,
    QIFReferenceFullType * InternalCADCoordinateSystemIdIn,
    QIFReferenceFullType * ExternalCADCoordinateSystemIdIn,
    AlignmentOperationsType * AlignmentOperationsIn,
    NaturalType * SequenceNumberIn);
  ~CoordinateSystemType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);
  TransformMatrixType * getNominalTransform();
  void setNominalTransform(TransformMatrixType * NominalTransformIn);
  QIFReferenceFullType * getInternalCADCoordinateSystemId();
  void setInternalCADCoordinateSystemId(QIFReferenceFullType * InternalCADCoordinateSystemIdIn);
  QIFReferenceFullType * getExternalCADCoordinateSystemId();
  void setExternalCADCoordinateSystemId(QIFReferenceFullType * ExternalCADCoordinateSystemIdIn);
  AlignmentOperationsType * getAlignmentOperations();
  void setAlignmentOperations(AlignmentOperationsType * AlignmentOperationsIn);
  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlToken * Name;
  TransformMatrixType * NominalTransform;
  QIFReferenceFullType * InternalCADCoordinateSystemId;
  QIFReferenceFullType * ExternalCADCoordinateSystemId;
  AlignmentOperationsType * AlignmentOperations;
  NaturalType * SequenceNumber;
};

/* ***************************************************************** */

class CoordinateSystemTypeLisd :
  public std::list<CoordinateSystemType *>,
  public XmlSchemaInstanceBase
{
public:
  CoordinateSystemTypeLisd();
  CoordinateSystemTypeLisd(
    CoordinateSystemType * aCoordinateSystemType);
  ~CoordinateSystemTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class CoordinateSystemsType :
  public XmlTypeBase
{
public:
  CoordinateSystemsType();
  CoordinateSystemsType(
    CoordinateSystemListType * CoordinateSystemDefinitionsIn,
    QIFReferenceFullType * CommonCoordinateSystemIdIn,
    MachineCoordinateSystemTypeLisd * MachineCoordinateSystemIn);
  ~CoordinateSystemsType();
  void printSelf(FILE * outFile);

  CoordinateSystemListType * getCoordinateSystemDefinitions();
  void setCoordinateSystemDefinitions(CoordinateSystemListType * CoordinateSystemDefinitionsIn);
  QIFReferenceFullType * getCommonCoordinateSystemId();
  void setCommonCoordinateSystemId(QIFReferenceFullType * CommonCoordinateSystemIdIn);
  MachineCoordinateSystemTypeLisd * getMachineCoordinateSystem();
  void setMachineCoordinateSystem(MachineCoordinateSystemTypeLisd *);

protected:
  CoordinateSystemListType * CoordinateSystemDefinitions;
  QIFReferenceFullType * CommonCoordinateSystemId;
  MachineCoordinateSystemTypeLisd * MachineCoordinateSystem;
};

/* ***************************************************************** */

class DatumDefinitionType :
  public XmlTypeBase
{
public:
  DatumDefinitionType();
  DatumDefinitionType(
    AttributesType * AttributesIn,
    XmlNMTOKEN * DatumLabelIn,
    ArrayReferenceFullType * DatumTargetIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn);
  DatumDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlNMTOKEN * DatumLabelIn,
    ArrayReferenceFullType * DatumTargetIdsIn,
    ArrayReferenceFullType * FeatureNominalIdsIn);
  ~DatumDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlNMTOKEN * getDatumLabel();
  void setDatumLabel(XmlNMTOKEN * DatumLabelIn);
  ArrayReferenceFullType * getDatumTargetIds();
  void setDatumTargetIds(ArrayReferenceFullType * DatumTargetIdsIn);
  ArrayReferenceFullType * getFeatureNominalIds();
  void setFeatureNominalIds(ArrayReferenceFullType * FeatureNominalIdsIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlNMTOKEN * DatumLabel;
  ArrayReferenceFullType * DatumTargetIds;
  ArrayReferenceFullType * FeatureNominalIds;
};

/* ***************************************************************** */

class DatumDefinitionTypeLisd :
  public std::list<DatumDefinitionType *>,
  public XmlSchemaInstanceBase
{
public:
  DatumDefinitionTypeLisd();
  DatumDefinitionTypeLisd(
    DatumDefinitionType * aDatumDefinitionType);
  ~DatumDefinitionTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DatumDefinitionsType :
  public XmlTypeBase
{
public:
  DatumDefinitionsType();
  DatumDefinitionsType(
    DatumDefinitionTypeLisd * DatumDefinitionIn);
  DatumDefinitionsType(
    NaturalType * nIn,
    DatumDefinitionTypeLisd * DatumDefinitionIn);
  ~DatumDefinitionsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DatumDefinitionTypeLisd * getDatumDefinition();
  void setDatumDefinition(DatumDefinitionTypeLisd *);

protected:
  NaturalType * n;
  DatumDefinitionTypeLisd * DatumDefinition;
};

/* ***************************************************************** */

class DatumFeatureBaseType :
  public XmlTypeBase
{
public:
  DatumFeatureBaseType();
  DatumFeatureBaseType(
    QIFReferenceFullType * FeatureNominalIdIn);
  virtual ~DatumFeatureBaseType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getFeatureNominalId();
  void setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn);

protected:
  QIFReferenceFullType * FeatureNominalId;
};

/* ***************************************************************** */

class DatumFeatureSimulatorModifierType :
  public XmlTypeBase
{
public:
  DatumFeatureSimulatorModifierType();
  DatumFeatureSimulatorModifierType(
    DatumFeatureSimulatorModifierTypeChoicePair * DatumFeatureSimulatorModifierTypePairIn);
  ~DatumFeatureSimulatorModifierType();
  void printSelf(FILE * outFile);

  DatumFeatureSimulatorModifierTypeChoicePair * getDatumFeatureSimulatorModifierTypePair();
  void setDatumFeatureSimulatorModifierTypePair(DatumFeatureSimulatorModifierTypeChoicePair * DatumFeatureSimulatorModifierTypePairIn);

protected:
  DatumFeatureSimulatorModifierTypeChoicePair * DatumFeatureSimulatorModifierTypePair;
};

/* ***************************************************************** */

union DatumFeatureSimulatorModifierTypeVal
{
  LinearValueType * LinearSize;
  LinearValueType * DiametricalSize;
  XmlToken * BasicSize;
};

/* ***************************************************************** */

class DatumFeatureSimulatorModifierTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearSizeE,
    DiametricalSizeE,
    BasicSizeE };
  DatumFeatureSimulatorModifierTypeChoicePair();
  DatumFeatureSimulatorModifierTypeChoicePair(
    whichOne DatumFeatureSimulatorModifierTypeTypeIn,
    DatumFeatureSimulatorModifierTypeVal * DatumFeatureSimulatorModifierTypeValueIn);
  ~DatumFeatureSimulatorModifierTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DatumFeatureSimulatorModifierTypeType;
  DatumFeatureSimulatorModifierTypeVal * DatumFeatureSimulatorModifierTypeValue;
};

/* ***************************************************************** */

class DatumPrecedenceAlignmentOperationType :
  public AlignmentOperationBaseType
{
public:
  DatumPrecedenceAlignmentOperationType();
  DatumPrecedenceAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    QIFReferenceFullType * DatumReferenceFrameIdIn,
    UnitVectorType * PrimaryAxisIn,
    UnitVectorType * SecondaryAxisIn);
  ~DatumPrecedenceAlignmentOperationType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getDatumReferenceFrameId();
  void setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn);
  UnitVectorType * getPrimaryAxis();
  void setPrimaryAxis(UnitVectorType * PrimaryAxisIn);
  UnitVectorType * getSecondaryAxis();
  void setSecondaryAxis(UnitVectorType * SecondaryAxisIn);

protected:
  QIFReferenceFullType * DatumReferenceFrameId;
  UnitVectorType * PrimaryAxis;
  UnitVectorType * SecondaryAxis;
};

/* ***************************************************************** */

class DatumReferenceFrameType :
  public XmlTypeBase
{
public:
  DatumReferenceFrameType();
  DatumReferenceFrameType(
    AttributesType * AttributesIn,
    DatumsType * DatumsIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  DatumReferenceFrameType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    DatumsType * DatumsIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn,
    QIFReferenceFullType * CoordinateSystemIdIn);
  ~DatumReferenceFrameType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  DatumsType * getDatums();
  void setDatums(DatumsType * DatumsIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  DatumsType * Datums;
  XmlToken * Name;
  XmlString * Description;
  QIFReferenceFullType * CoordinateSystemId;
};

/* ***************************************************************** */

class DatumReferenceFrameTypeLisd :
  public std::list<DatumReferenceFrameType *>,
  public XmlSchemaInstanceBase
{
public:
  DatumReferenceFrameTypeLisd();
  DatumReferenceFrameTypeLisd(
    DatumReferenceFrameType * aDatumReferenceFrameType);
  ~DatumReferenceFrameTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DatumReferenceFramesType :
  public XmlTypeBase
{
public:
  DatumReferenceFramesType();
  DatumReferenceFramesType(
    DatumReferenceFrameTypeLisd * DatumReferenceFrameIn);
  DatumReferenceFramesType(
    NaturalType * nIn,
    DatumReferenceFrameTypeLisd * DatumReferenceFrameIn);
  ~DatumReferenceFramesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DatumReferenceFrameTypeLisd * getDatumReferenceFrame();
  void setDatumReferenceFrame(DatumReferenceFrameTypeLisd *);

protected:
  NaturalType * n;
  DatumReferenceFrameTypeLisd * DatumReferenceFrame;
};

/* ***************************************************************** */

class DatumTargetDefinitionsType :
  public XmlTypeBase
{
public:
  DatumTargetDefinitionsType();
  DatumTargetDefinitionsType(
    DatumTargetTypeLisd * DatumTargetIn);
  DatumTargetDefinitionsType(
    NaturalType * nIn,
    DatumTargetTypeLisd * DatumTargetIn);
  ~DatumTargetDefinitionsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DatumTargetTypeLisd * getDatumTarget();
  void setDatumTarget(DatumTargetTypeLisd *);

protected:
  NaturalType * n;
  DatumTargetTypeLisd * DatumTarget;
};

/* ***************************************************************** */

class DatumTargetType :
  public XmlTypeBase
{
public:
  DatumTargetType();
  DatumTargetType(
    AttributesType * AttributesIn,
    XmlToken * DatumTargetLabelIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceFullType * TargetZoneIdIn,
    MovableDatumTargetDirectionType * MovableDatumTargetIn);
  DatumTargetType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * DatumTargetLabelIn,
    QIFReferenceFullType * FeatureNominalIdIn,
    QIFReferenceFullType * TargetZoneIdIn,
    MovableDatumTargetDirectionType * MovableDatumTargetIn);
  ~DatumTargetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlToken * getDatumTargetLabel();
  void setDatumTargetLabel(XmlToken * DatumTargetLabelIn);
  QIFReferenceFullType * getFeatureNominalId();
  void setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn);
  QIFReferenceFullType * getTargetZoneId();
  void setTargetZoneId(QIFReferenceFullType * TargetZoneIdIn);
  MovableDatumTargetDirectionType * getMovableDatumTarget();
  void setMovableDatumTarget(MovableDatumTargetDirectionType * MovableDatumTargetIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlToken * DatumTargetLabel;
  QIFReferenceFullType * FeatureNominalId;
  QIFReferenceFullType * TargetZoneId;
  MovableDatumTargetDirectionType * MovableDatumTarget;
};

/* ***************************************************************** */

class DatumTargetTypeLisd :
  public std::list<DatumTargetType *>,
  public XmlSchemaInstanceBase
{
public:
  DatumTargetTypeLisd();
  DatumTargetTypeLisd(
    DatumTargetType * aDatumTargetType);
  ~DatumTargetTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DatumTranslationType :
  public XmlTypeBase
{
public:
  DatumTranslationType();
  DatumTranslationType(
    XmlBoolean * DatumTranslationAllowedIn);
  ~DatumTranslationType();
  void printSelf(FILE * outFile);

  XmlBoolean * getDatumTranslationAllowed();
  void setDatumTranslationAllowed(XmlBoolean * DatumTranslationAllowedIn);

protected:
  XmlBoolean * DatumTranslationAllowed;
};

/* ***************************************************************** */

class DatumType :
  public XmlTypeBase
{
public:
  DatumType();
  DatumType(
    QIFReferenceFullType * DatumDefinitionIdIn,
    MaterialModifierEnumType * MaterialModifierIn,
    QIFReferenceType * SizeCharacteristicDefinitionIdIn,
    ReferencedComponentEnumType * ReferencedComponentIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn,
    DatumFeatureSimulatorModifierType * DatumFeatureSimulatorModifierIn,
    DatumTranslationType * DatumTranslationIn,
    DegreesOfFreedomType * DegreesOfFreedomIn,
    LinearValueType * ProjectedDatumIn,
    DiameterModifierEnumType * DiameterModifierIn,
    SectionModifierEnumType * SectionModifierIn,
    XmlBoolean * ContactingFeatureIn,
    XmlBoolean * DistanceVariableIn,
    XmlBoolean * DatumFixedIn,
    ReducedDatumEnumType * ReducedDatumIn,
    XmlBoolean * ConstrainOrientationIn,
    XmlBoolean * ConstrainSubsequentIn,
    AttributesType * AttributesIn);
  ~DatumType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getDatumDefinitionId();
  void setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn);
  MaterialModifierEnumType * getMaterialModifier();
  void setMaterialModifier(MaterialModifierEnumType * MaterialModifierIn);
  QIFReferenceType * getSizeCharacteristicDefinitionId();
  void setSizeCharacteristicDefinitionId(QIFReferenceType * SizeCharacteristicDefinitionIdIn);
  ReferencedComponentEnumType * getReferencedComponent();
  void setReferencedComponent(ReferencedComponentEnumType * ReferencedComponentIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  DatumFeatureSimulatorModifierType * getDatumFeatureSimulatorModifier();
  void setDatumFeatureSimulatorModifier(DatumFeatureSimulatorModifierType * DatumFeatureSimulatorModifierIn);
  DatumTranslationType * getDatumTranslation();
  void setDatumTranslation(DatumTranslationType * DatumTranslationIn);
  DegreesOfFreedomType * getDegreesOfFreedom();
  void setDegreesOfFreedom(DegreesOfFreedomType * DegreesOfFreedomIn);
  LinearValueType * getProjectedDatum();
  void setProjectedDatum(LinearValueType * ProjectedDatumIn);
  DiameterModifierEnumType * getDiameterModifier();
  void setDiameterModifier(DiameterModifierEnumType * DiameterModifierIn);
  SectionModifierEnumType * getSectionModifier();
  void setSectionModifier(SectionModifierEnumType * SectionModifierIn);
  XmlBoolean * getContactingFeature();
  void setContactingFeature(XmlBoolean * ContactingFeatureIn);
  XmlBoolean * getDistanceVariable();
  void setDistanceVariable(XmlBoolean * DistanceVariableIn);
  XmlBoolean * getDatumFixed();
  void setDatumFixed(XmlBoolean * DatumFixedIn);
  ReducedDatumEnumType * getReducedDatum();
  void setReducedDatum(ReducedDatumEnumType * ReducedDatumIn);
  XmlBoolean * getConstrainOrientation();
  void setConstrainOrientation(XmlBoolean * ConstrainOrientationIn);
  XmlBoolean * getConstrainSubsequent();
  void setConstrainSubsequent(XmlBoolean * ConstrainSubsequentIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFReferenceFullType * DatumDefinitionId;
  MaterialModifierEnumType * MaterialModifier;
  QIFReferenceType * SizeCharacteristicDefinitionId;
  ReferencedComponentEnumType * ReferencedComponent;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
  DatumFeatureSimulatorModifierType * DatumFeatureSimulatorModifier;
  DatumTranslationType * DatumTranslation;
  DegreesOfFreedomType * DegreesOfFreedom;
  LinearValueType * ProjectedDatum;
  DiameterModifierEnumType * DiameterModifier;
  SectionModifierEnumType * SectionModifier;
  XmlBoolean * ContactingFeature;
  XmlBoolean * DistanceVariable;
  XmlBoolean * DatumFixed;
  ReducedDatumEnumType * ReducedDatum;
  XmlBoolean * ConstrainOrientation;
  XmlBoolean * ConstrainSubsequent;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class DatumWithPrecedenceType :
  public XmlTypeBase
{
public:
  DatumWithPrecedenceType();
  DatumWithPrecedenceType(
    DatumWithPreced_1010_Type * DatumWithPreced_1010In,
    PrecedenceType * PrecedenceIn);
  ~DatumWithPrecedenceType();
  void printSelf(FILE * outFile);

  DatumWithPreced_1010_Type * getDatumWithPreced_1010();
  void setDatumWithPreced_1010(DatumWithPreced_1010_Type * DatumWithPreced_1010In);
  PrecedenceType * getPrecedence();
  void setPrecedence(PrecedenceType * PrecedenceIn);

protected:
  DatumWithPreced_1010_Type * DatumWithPreced_1010;
  PrecedenceType * Precedence;
};

/* ***************************************************************** */

class DatumWithPrecedenceTypeLisd :
  public std::list<DatumWithPrecedenceType *>,
  public XmlSchemaInstanceBase
{
public:
  DatumWithPrecedenceTypeLisd();
  DatumWithPrecedenceTypeLisd(
    DatumWithPrecedenceType * aDatumWithPrecedenceType);
  ~DatumWithPrecedenceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DatumsType :
  public XmlTypeBase
{
public:
  DatumsType();
  DatumsType(
    DatumWithPrecedenceTypeLisd * DatumIn);
  DatumsType(
    NaturalType * nIn,
    DatumWithPrecedenceTypeLisd * DatumIn);
  ~DatumsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DatumWithPrecedenceTypeLisd * getDatum();
  void setDatum(DatumWithPrecedenceTypeLisd *);

protected:
  NaturalType * n;
  DatumWithPrecedenceTypeLisd * Datum;
};

/* ***************************************************************** */

class DegreeOfFreedomEnumType :
  public XmlNMTOKEN
{
public:
  DegreeOfFreedomEnumType();
  DegreeOfFreedomEnumType(
    const char * valIn);
  ~DegreeOfFreedomEnumType();
  bool DegreeOfFreedomEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DegreeOfFreedomEnumTypeLisd :
  public std::list<DegreeOfFreedomEnumType *>,
  public XmlTypeBase
{
public:
  DegreeOfFreedomEnumTypeLisd();
  DegreeOfFreedomEnumTypeLisd(
    DegreeOfFreedomEnumType * aDegreeOfFreedomEnumType);
  DegreeOfFreedomEnumTypeLisd(
    DegreeOfFreedomEnumTypeLisd * aDegreeOfFreedomEnumTypeLisd);
  ~DegreeOfFreedomEnumTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DegreesOfFreedomType :
  public XmlTypeBase
{
public:
  DegreesOfFreedomType();
  DegreesOfFreedomType(
    DegreesOfFreedomTypeChoicePair * DegreesOfFreedomTypePairIn);
  DegreesOfFreedomType(
    NaturalType * nIn,
    DegreesOfFreedomTypeChoicePair * DegreesOfFreedomTypePairIn);
  ~DegreesOfFreedomType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DegreesOfFreedomTypeChoicePair * getDegreesOfFreedomTypePair();
  void setDegreesOfFreedomTypePair(DegreesOfFreedomTypeChoicePair * DegreesOfFreedomTypePairIn);

protected:
  NaturalType * n;
  DegreesOfFreedomTypeChoicePair * DegreesOfFreedomTypePair;
};

/* ***************************************************************** */

union DegreesOfFreedomTypeVal
{
  DegreeOfFreedomEnumTypeLisd * DegreeOfFreedom;
  ISODegreeOfFreedomEnumTypeLisd * ISODegreeOfFreedom;
};

/* ***************************************************************** */

class DegreesOfFreedomTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DegreeOfFreedomE,
    ISODegreeOfFreedomE };
  DegreesOfFreedomTypeChoicePair();
  DegreesOfFreedomTypeChoicePair(
    whichOne DegreesOfFreedomTypeTypeIn,
    DegreesOfFreedomTypeVal * DegreesOfFreedomTypeValueIn);
  ~DegreesOfFreedomTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DegreesOfFreedomTypeType;
  DegreesOfFreedomTypeVal * DegreesOfFreedomTypeValue;
};

/* ***************************************************************** */

class DiameterModifierEnumType :
  public XmlNMTOKEN
{
public:
  DiameterModifierEnumType();
  DiameterModifierEnumType(
    const char * valIn);
  ~DiameterModifierEnumType();
  bool DiameterModifierEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DimensionDeterminationEnumType :
  public XmlNMTOKEN
{
public:
  DimensionDeterminationEnumType();
  DimensionDeterminationEnumType(
    const char * valIn);
  ~DimensionDeterminationEnumType();
  bool DimensionDeterminationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DimensionModifierEnumType :
  public XmlNMTOKEN
{
public:
  DimensionModifierEnumType();
  DimensionModifierEnumType(
    const char * valIn);
  ~DimensionModifierEnumType();
  bool DimensionModifierEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class DimensionModifiersType :
  public XmlTypeBase
{
public:
  DimensionModifiersType();
  DimensionModifiersType(
    DimensionDeterminationEnumType * DeterminationModifierIn,
    SignificantDimensionEnumType * SignificanceModifierIn,
    SectionModifierEnumType * SectionModifierIn);
  ~DimensionModifiersType();
  void printSelf(FILE * outFile);

  DimensionDeterminationEnumType * getDeterminationModifier();
  void setDeterminationModifier(DimensionDeterminationEnumType * DeterminationModifierIn);
  SignificantDimensionEnumType * getSignificanceModifier();
  void setSignificanceModifier(SignificantDimensionEnumType * SignificanceModifierIn);
  SectionModifierEnumType * getSectionModifier();
  void setSectionModifier(SectionModifierEnumType * SectionModifierIn);

protected:
  DimensionDeterminationEnumType * DeterminationModifier;
  SignificantDimensionEnumType * SignificanceModifier;
  SectionModifierEnumType * SectionModifier;
};

/* ***************************************************************** */

class DirectionFeatureType :
  public XmlTypeBase
{
public:
  DirectionFeatureType();
  DirectionFeatureType(
    ModifyingPlaneEnumType * DirectionFeatureEnumIn,
    QIFReferenceFullType * DatumDefinitionIdIn);
  ~DirectionFeatureType();
  void printSelf(FILE * outFile);

  ModifyingPlaneEnumType * getDirectionFeatureEnum();
  void setDirectionFeatureEnum(ModifyingPlaneEnumType * DirectionFeatureEnumIn);
  QIFReferenceFullType * getDatumDefinitionId();
  void setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn);

protected:
  ModifyingPlaneEnumType * DirectionFeatureEnum;
  QIFReferenceFullType * DatumDefinitionId;
};

/* ***************************************************************** */

class DirectionalOffsetType :
  public XmlTypeBase
{
public:
  DirectionalOffsetType();
  DirectionalOffsetType(
    LinearValueType * OffsetIn,
    DirectionalOffs_1011_Type * DirectionalOffs_1011In);
  ~DirectionalOffsetType();
  void printSelf(FILE * outFile);

  LinearValueType * getOffset();
  void setOffset(LinearValueType * OffsetIn);
  DirectionalOffs_1011_Type * getDirectionalOffs_1011();
  void setDirectionalOffs_1011(DirectionalOffs_1011_Type * DirectionalOffs_1011In);

protected:
  LinearValueType * Offset;
  DirectionalOffs_1011_Type * DirectionalOffs_1011;
};

/* ***************************************************************** */

class DistanceBetweenAnalysisModeEnumType :
  public XmlNMTOKEN
{
public:
  DistanceBetweenAnalysisModeEnumType();
  DistanceBetweenAnalysisModeEnumType(
    const char * valIn);
  ~DistanceBetweenAnalysisModeEnumType();
  bool DistanceBetweenAnalysisModeEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class EmployeeType :
  public XmlTypeBase
{
public:
  EmployeeType();
  EmployeeType(
    XmlToken * NameIn,
    XmlToken * EmployeeIdIn,
    XmlToken * ShiftIn);
  ~EmployeeType();
  void printSelf(FILE * outFile);

  XmlToken * getName();
  void setName(XmlToken * NameIn);
  XmlToken * getEmployeeId();
  void setEmployeeId(XmlToken * EmployeeIdIn);
  XmlToken * getShift();
  void setShift(XmlToken * ShiftIn);

protected:
  XmlToken * Name;
  XmlToken * EmployeeId;
  XmlToken * Shift;
};

/* ***************************************************************** */

class EmployeeTypeLisd :
  public std::list<EmployeeType *>,
  public XmlSchemaInstanceBase
{
public:
  EmployeeTypeLisd();
  EmployeeTypeLisd(
    EmployeeType * aEmployeeType);
  ~EmployeeTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class EntitiesExternalType :
  public XmlTypeBase
{
public:
  EntitiesExternalType();
  EntitiesExternalType(
    EntityExternalTypeLisd * EntityIn);
  EntitiesExternalType(
    NaturalType * nIn,
    EntityExternalTypeLisd * EntityIn);
  ~EntitiesExternalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  EntityExternalTypeLisd * getEntity();
  void setEntity(EntityExternalTypeLisd *);

protected:
  NaturalType * n;
  EntityExternalTypeLisd * Entity;
};

/* ***************************************************************** */

class EntityExternalType :
  public XmlTypeBase
{
public:
  EntityExternalType();
  EntityExternalType(
    XmlToken * EntityIdIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn);
  EntityExternalType(
    QIFIdType * idIn,
    XmlToken * EntityIdIn,
    XmlToken * NameIn,
    XmlString * DescriptionIn);
  ~EntityExternalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlToken * getEntityId();
  void setEntityId(XmlToken * EntityIdIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  QIFIdType * id;
  XmlToken * EntityId;
  XmlToken * Name;
  XmlString * Description;
};

/* ***************************************************************** */

class EntityExternalTypeLisd :
  public std::list<EntityExternalType *>,
  public XmlSchemaInstanceBase
{
public:
  EntityExternalTypeLisd();
  EntityExternalTypeLisd(
    EntityExternalType * aEntityExternalType);
  ~EntityExternalTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class EventBaseType :
  public XmlTypeBase
{
public:
  EventBaseType();
  EventBaseType(
    XmlString * DescriptionIn);
  EventBaseType(
    QIFIdType * idIn,
    XmlString * DescriptionIn);
  virtual ~EventBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  QIFIdType * id;
  XmlString * Description;
};

/* ***************************************************************** */

class ExternalFileReferenceType :
  public XmlTypeBase
{
public:
  ExternalFileReferenceType();
  ExternalFileReferenceType(
    XmlAnyURI * URIIn,
    FileSpecType * FileSpecIn,
    XmlString * DescriptionIn);
  ~ExternalFileReferenceType();
  void printSelf(FILE * outFile);

  XmlAnyURI * getURI();
  void setURI(XmlAnyURI * URIIn);
  FileSpecType * getFileSpec();
  void setFileSpec(FileSpecType * FileSpecIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  XmlAnyURI * URI;
  FileSpecType * FileSpec;
  XmlString * Description;
};

/* ***************************************************************** */

class ExternalFileReferenceTypeLisd :
  public std::list<ExternalFileReferenceType *>,
  public XmlSchemaInstanceBase
{
public:
  ExternalFileReferenceTypeLisd();
  ExternalFileReferenceTypeLisd(
    ExternalFileReferenceType * aExternalFileReferenceType);
  ~ExternalFileReferenceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ExternalFileReferencesType :
  public XmlTypeBase
{
public:
  ExternalFileReferencesType();
  ExternalFileReferencesType(
    ExternalFileReferenceTypeLisd * ExternalFileReferenceIn);
  ExternalFileReferencesType(
    NaturalType * nIn,
    ExternalFileReferenceTypeLisd * ExternalFileReferenceIn);
  ~ExternalFileReferencesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ExternalFileReferenceTypeLisd * getExternalFileReference();
  void setExternalFileReference(ExternalFileReferenceTypeLisd *);

protected:
  NaturalType * n;
  ExternalFileReferenceTypeLisd * ExternalFileReference;
};

/* ***************************************************************** */

class FileSpecType :
  public XmlTypeBase
{
public:
  FileSpecType();
  FileSpecType(
    FileSpecTypeChoicePair * FileSpecTypePairIn);
  ~FileSpecType();
  void printSelf(FILE * outFile);

  FileSpecTypeChoicePair * getFileSpecTypePair();
  void setFileSpecTypePair(FileSpecTypeChoicePair * FileSpecTypePairIn);

protected:
  FileSpecTypeChoicePair * FileSpecTypePair;
};

/* ***************************************************************** */

union FileSpecTypeVal
{
  CommonFileSpecEnumType * CommonFileSpecEnum;
  XmlString * OtherFileSpec;
};

/* ***************************************************************** */

class FileSpecTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    CommonFileSpecEnumE,
    OtherFileSpecE };
  FileSpecTypeChoicePair();
  FileSpecTypeChoicePair(
    whichOne FileSpecTypeTypeIn,
    FileSpecTypeVal * FileSpecTypeValueIn);
  ~FileSpecTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FileSpecTypeType;
  FileSpecTypeVal * FileSpecTypeValue;
};

/* ***************************************************************** */

class FileType :
  public XmlTypeBase
{
public:
  FileType();
  FileType(
    XmlToken * NameIn,
    XmlToken * VersionIn,
    DigitalModelFormatType * FormatIn);
  ~FileType();
  void printSelf(FILE * outFile);

  XmlToken * getName();
  void setName(XmlToken * NameIn);
  XmlToken * getVersion();
  void setVersion(XmlToken * VersionIn);
  DigitalModelFormatType * getFormat();
  void setFormat(DigitalModelFormatType * FormatIn);

protected:
  XmlToken * Name;
  XmlToken * Version;
  DigitalModelFormatType * Format;
};

/* ***************************************************************** */

class ForceToleranceType :
  public XmlTypeBase
{
public:
  ForceToleranceType();
  ForceToleranceType(
    ForceToleranceT_1012_Type * ForceToleranceT_1012In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~ForceToleranceType();
  void printSelf(FILE * outFile);

  ForceToleranceT_1012_Type * getForceToleranceT_1012();
  void setForceToleranceT_1012(ForceToleranceT_1012_Type * ForceToleranceT_1012In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  ForceToleranceT_1012_Type * ForceToleranceT_1012;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class ISODegreeOfFreedomEnumType :
  public XmlNMTOKEN
{
public:
  ISODegreeOfFreedomEnumType();
  ISODegreeOfFreedomEnumType(
    const char * valIn);
  ~ISODegreeOfFreedomEnumType();
  bool ISODegreeOfFreedomEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ISODegreeOfFreedomEnumTypeLisd :
  public std::list<ISODegreeOfFreedomEnumType *>,
  public XmlTypeBase
{
public:
  ISODegreeOfFreedomEnumTypeLisd();
  ISODegreeOfFreedomEnumTypeLisd(
    ISODegreeOfFreedomEnumType * aISODegreeOfFreedomEnumType);
  ISODegreeOfFreedomEnumTypeLisd(
    ISODegreeOfFreedomEnumTypeLisd * aISODegreeOfFreedomEnumTypeLisd);
  ~ISODegreeOfFreedomEnumTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class InspectionStatusEnumType :
  public XmlNMTOKEN
{
public:
  InspectionStatusEnumType();
  InspectionStatusEnumType(
    const char * valIn);
  ~InspectionStatusEnumType();
  bool InspectionStatusEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class InspectionStatusType :
  public XmlTypeBase
{
public:
  InspectionStatusType();
  InspectionStatusType(
    InspectionStatusTypeChoicePair * InspectionStatusTypePairIn);
  ~InspectionStatusType();
  void printSelf(FILE * outFile);

  InspectionStatusTypeChoicePair * getInspectionStatusTypePair();
  void setInspectionStatusTypePair(InspectionStatusTypeChoicePair * InspectionStatusTypePairIn);

protected:
  InspectionStatusTypeChoicePair * InspectionStatusTypePair;
};

/* ***************************************************************** */

union InspectionStatusTypeVal
{
  InspectionStatusEnumType * InspectionStatusEnum;
  XmlString * OtherInspectionStatus;
};

/* ***************************************************************** */

class InspectionStatusTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    InspectionStatusEnumE,
    OtherInspectionStatusE };
  InspectionStatusTypeChoicePair();
  InspectionStatusTypeChoicePair(
    whichOne InspectionStatusTypeTypeIn,
    InspectionStatusTypeVal * InspectionStatusTypeValueIn);
  ~InspectionStatusTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne InspectionStatusTypeType;
  InspectionStatusTypeVal * InspectionStatusTypeValue;
};

/* ***************************************************************** */

class IntersectionPlaneEnumType :
  public XmlNMTOKEN
{
public:
  IntersectionPlaneEnumType();
  IntersectionPlaneEnumType(
    const char * valIn);
  ~IntersectionPlaneEnumType();
  bool IntersectionPlaneEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class IntersectionPlaneType :
  public XmlTypeBase
{
public:
  IntersectionPlaneType();
  IntersectionPlaneType(
    IntersectionPlaneEnumType * IntersectionPlaneEnumIn,
    QIFReferenceFullType * DatumDefinitionIdIn);
  ~IntersectionPlaneType();
  void printSelf(FILE * outFile);

  IntersectionPlaneEnumType * getIntersectionPlaneEnum();
  void setIntersectionPlaneEnum(IntersectionPlaneEnumType * IntersectionPlaneEnumIn);
  QIFReferenceFullType * getDatumDefinitionId();
  void setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn);

protected:
  IntersectionPlaneEnumType * IntersectionPlaneEnum;
  QIFReferenceFullType * DatumDefinitionId;
};

/* ***************************************************************** */

class LimitsAndFitsSpecificationType :
  public XmlTypeBase
{
public:
  LimitsAndFitsSpecificationType();
  LimitsAndFitsSpecificationType(
    XmlToken * FormVarianceIn,
    XmlToken * GradeIn);
  LimitsAndFitsSpecificationType(
    LimitsAndFitsZoneVarianceType * zoneVarianceIn,
    XmlToken * FormVarianceIn,
    XmlToken * GradeIn);
  ~LimitsAndFitsSpecificationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LimitsAndFitsZoneVarianceType * getzoneVariance();
  void setzoneVariance(LimitsAndFitsZoneVarianceType * zoneVarianceIn);

  XmlToken * getFormVariance();
  void setFormVariance(XmlToken * FormVarianceIn);
  XmlToken * getGrade();
  void setGrade(XmlToken * GradeIn);

protected:
  LimitsAndFitsZoneVarianceType * zoneVariance;
  XmlToken * FormVariance;
  XmlToken * Grade;
};

/* ***************************************************************** */

class LimitsAndFitsZoneVarianceType :
  public XmlNMTOKEN
{
public:
  LimitsAndFitsZoneVarianceType();
  LimitsAndFitsZoneVarianceType(
    const char * valIn);
  ~LimitsAndFitsZoneVarianceType();
  bool LimitsAndFitsZoneVarianceTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LinearCoordinateDirectionEnumType :
  public XmlNMTOKEN
{
public:
  LinearCoordinateDirectionEnumType();
  LinearCoordinateDirectionEnumType(
    const char * valIn);
  ~LinearCoordinateDirectionEnumType();
  bool LinearCoordinateDirectionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class LinearToleranceDefinitionType :
  public XmlTypeBase
{
public:
  LinearToleranceDefinitionType();
  LinearToleranceDefinitionType(
    AttributesType * AttributesIn,
    LinearTolerance_1013_Type * LinearTolerance_1013In);
  LinearToleranceDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    LinearTolerance_1013_Type * LinearTolerance_1013In);
  ~LinearToleranceDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  LinearTolerance_1013_Type * getLinearTolerance_1013();
  void setLinearTolerance_1013(LinearTolerance_1013_Type * LinearTolerance_1013In);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  LinearTolerance_1013_Type * LinearTolerance_1013;
};

/* ***************************************************************** */

class LinearToleranceType :
  public XmlTypeBase
{
public:
  LinearToleranceType();
  LinearToleranceType(
    LinearTolerance_1014_Type * LinearTolerance_1014In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~LinearToleranceType();
  void printSelf(FILE * outFile);

  LinearTolerance_1014_Type * getLinearTolerance_1014();
  void setLinearTolerance_1014(LinearTolerance_1014_Type * LinearTolerance_1014In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  LinearTolerance_1014_Type * LinearTolerance_1014;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class LocationType :
  public XmlTypeBase
{
public:
  LocationType();
  LocationType(
    XmlString * LocationDescriptionIn,
    PhysicalAddressType * AddressIn);
  LocationType(
    QIFIdType * idIn,
    XmlString * LocationDescriptionIn,
    PhysicalAddressType * AddressIn);
  ~LocationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlString * getLocationDescription();
  void setLocationDescription(XmlString * LocationDescriptionIn);
  PhysicalAddressType * getAddress();
  void setAddress(PhysicalAddressType * AddressIn);

protected:
  QIFIdType * id;
  XmlString * LocationDescription;
  PhysicalAddressType * Address;
};

/* ***************************************************************** */

class MachineCoordinateSystemOperationType :
  public AlignmentOperationBaseType
{
public:
  MachineCoordinateSystemOperationType();
  MachineCoordinateSystemOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn);
  ~MachineCoordinateSystemOperationType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MachineCoordinateSystemType :
  public XmlTypeBase
{
public:
  MachineCoordinateSystemType();
  MachineCoordinateSystemType(
    QIFReferenceFullType * CoordinateSystemIdIn,
    QIFReferenceType * MeasurementDeviceIdIn);
  ~MachineCoordinateSystemType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getCoordinateSystemId();
  void setCoordinateSystemId(QIFReferenceFullType * CoordinateSystemIdIn);
  QIFReferenceType * getMeasurementDeviceId();
  void setMeasurementDeviceId(QIFReferenceType * MeasurementDeviceIdIn);

protected:
  QIFReferenceFullType * CoordinateSystemId;
  QIFReferenceType * MeasurementDeviceId;
};

/* ***************************************************************** */

class MachineCoordinateSystemTypeLisd :
  public std::list<MachineCoordinateSystemType *>,
  public XmlSchemaInstanceBase
{
public:
  MachineCoordinateSystemTypeLisd();
  MachineCoordinateSystemTypeLisd(
    MachineCoordinateSystemType * aMachineCoordinateSystemType);
  ~MachineCoordinateSystemTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MassToleranceType :
  public XmlTypeBase
{
public:
  MassToleranceType();
  MassToleranceType(
    MassToleranceTy_1015_Type * MassToleranceTy_1015In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~MassToleranceType();
  void printSelf(FILE * outFile);

  MassToleranceTy_1015_Type * getMassToleranceTy_1015();
  void setMassToleranceTy_1015(MassToleranceTy_1015_Type * MassToleranceTy_1015In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  MassToleranceTy_1015_Type * MassToleranceTy_1015;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class MaterialClassEnumType :
  public XmlNMTOKEN
{
public:
  MaterialClassEnumType();
  MaterialClassEnumType(
    const char * valIn);
  ~MaterialClassEnumType();
  bool MaterialClassEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class MaterialModifierEnumType :
  public XmlNMTOKEN
{
public:
  MaterialModifierEnumType();
  MaterialModifierEnumType(
    const char * valIn);
  ~MaterialModifierEnumType();
  bool MaterialModifierEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class MaterialType :
  public XmlTypeBase
{
public:
  MaterialType();
  MaterialType(
    AttributesType * AttributesIn,
    MaterialType_1016_Type * MaterialType_1016In,
    XmlString * DescriptionIn,
    XmlDouble * MassDensityIn,
    XmlDouble * PoissonsRatioIn,
    XmlDouble * YoungsModulusIn,
    XmlDouble * UltimateTensileStressIn,
    XmlDouble * CompressiveYieldStressIn,
    XmlDouble * TensileYieldStressIn,
    XmlDouble * ThermalExpansionIn,
    XmlDouble * SpecificHeatCapacityIn,
    XmlDouble * ThermalConductivityIn);
  MaterialType(
    NaturalType * IndexIn,
    XmlToken * MaterialNameIn,
    AttributesType * AttributesIn,
    MaterialType_1016_Type * MaterialType_1016In,
    XmlString * DescriptionIn,
    XmlDouble * MassDensityIn,
    XmlDouble * PoissonsRatioIn,
    XmlDouble * YoungsModulusIn,
    XmlDouble * UltimateTensileStressIn,
    XmlDouble * CompressiveYieldStressIn,
    XmlDouble * TensileYieldStressIn,
    XmlDouble * ThermalExpansionIn,
    XmlDouble * SpecificHeatCapacityIn,
    XmlDouble * ThermalConductivityIn);
  ~MaterialType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getIndex();
  void setIndex(NaturalType * IndexIn);
  XmlToken * getMaterialName();
  void setMaterialName(XmlToken * MaterialNameIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  MaterialType_1016_Type * getMaterialType_1016();
  void setMaterialType_1016(MaterialType_1016_Type * MaterialType_1016In);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlDouble * getMassDensity();
  void setMassDensity(XmlDouble * MassDensityIn);
  XmlDouble * getPoissonsRatio();
  void setPoissonsRatio(XmlDouble * PoissonsRatioIn);
  XmlDouble * getYoungsModulus();
  void setYoungsModulus(XmlDouble * YoungsModulusIn);
  XmlDouble * getUltimateTensileStress();
  void setUltimateTensileStress(XmlDouble * UltimateTensileStressIn);
  XmlDouble * getCompressiveYieldStress();
  void setCompressiveYieldStress(XmlDouble * CompressiveYieldStressIn);
  XmlDouble * getTensileYieldStress();
  void setTensileYieldStress(XmlDouble * TensileYieldStressIn);
  XmlDouble * getThermalExpansion();
  void setThermalExpansion(XmlDouble * ThermalExpansionIn);
  XmlDouble * getSpecificHeatCapacity();
  void setSpecificHeatCapacity(XmlDouble * SpecificHeatCapacityIn);
  XmlDouble * getThermalConductivity();
  void setThermalConductivity(XmlDouble * ThermalConductivityIn);

protected:
  NaturalType * Index;
  XmlToken * MaterialName;
  AttributesType * Attributes;
  MaterialType_1016_Type * MaterialType_1016;
  XmlString * Description;
  XmlDouble * MassDensity;
  XmlDouble * PoissonsRatio;
  XmlDouble * YoungsModulus;
  XmlDouble * UltimateTensileStress;
  XmlDouble * CompressiveYieldStress;
  XmlDouble * TensileYieldStress;
  XmlDouble * ThermalExpansion;
  XmlDouble * SpecificHeatCapacity;
  XmlDouble * ThermalConductivity;
};

/* ***************************************************************** */

class MaterialTypeLisd :
  public std::list<MaterialType *>,
  public XmlSchemaInstanceBase
{
public:
  MaterialTypeLisd();
  MaterialTypeLisd(
    MaterialType * aMaterialType);
  ~MaterialTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MaterialsType :
  public XmlTypeBase
{
public:
  MaterialsType();
  MaterialsType(
    MaterialTypeLisd * MaterialIn);
  MaterialsType(
    NaturalType * nIn,
    MaterialTypeLisd * MaterialIn);
  ~MaterialsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MaterialTypeLisd * getMaterial();
  void setMaterial(MaterialTypeLisd *);

protected:
  NaturalType * n;
  MaterialTypeLisd * Material;
};

/* ***************************************************************** */

class MeasuredDatumFeatureType :
  public DatumFeatureBaseType
{
public:
  MeasuredDatumFeatureType();
  MeasuredDatumFeatureType(
    QIFReferenceFullType * FeatureNominalIdIn,
    MaterialModifierEnumType * MaterialModifierIn,
    SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);
  ~MeasuredDatumFeatureType();
  void printSelf(FILE * outFile);

  MaterialModifierEnumType * getMaterialModifier();
  void setMaterialModifier(MaterialModifierEnumType * MaterialModifierIn);
  SubstituteFeatureAlgorithmType * getSubstituteFeatureAlgorithm();
  void setSubstituteFeatureAlgorithm(SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithmIn);

protected:
  MaterialModifierEnumType * MaterialModifier;
  SubstituteFeatureAlgorithmType * SubstituteFeatureAlgorithm;
};

/* ***************************************************************** */

class MeasuredPointWithNormalBaseType :
  public XmlTypeBase
{
public:
  MeasuredPointWithNormalBaseType();
  MeasuredPointWithNormalBaseType(
    MeasuredPointType * PointIn,
    MeasuredUnitVectorType * NormalIn);
  MeasuredPointWithNormalBaseType(
    QIFIdType * idIn,
    MeasuredPointType * PointIn,
    MeasuredUnitVectorType * NormalIn);
  virtual ~MeasuredPointWithNormalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  MeasuredPointType * getPoint();
  void setPoint(MeasuredPointType * PointIn);
  MeasuredUnitVectorType * getNormal();
  void setNormal(MeasuredUnitVectorType * NormalIn);

protected:
  QIFIdType * id;
  MeasuredPointType * Point;
  MeasuredUnitVectorType * Normal;
};

/* ***************************************************************** */

class MeasurementDirectiveEnumType :
  public XmlNMTOKEN
{
public:
  MeasurementDirectiveEnumType();
  MeasurementDirectiveEnumType(
    const char * valIn);
  ~MeasurementDirectiveEnumType();
  bool MeasurementDirectiveEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class MeasurementDirectiveType :
  public XmlTypeBase
{
public:
  MeasurementDirectiveType();
  MeasurementDirectiveType(
    MeasurementDirectiveTypeChoicePair * MeasurementDirectiveTypePairIn);
  ~MeasurementDirectiveType();
  void printSelf(FILE * outFile);

  MeasurementDirectiveTypeChoicePair * getMeasurementDirectiveTypePair();
  void setMeasurementDirectiveTypePair(MeasurementDirectiveTypeChoicePair * MeasurementDirectiveTypePairIn);

protected:
  MeasurementDirectiveTypeChoicePair * MeasurementDirectiveTypePair;
};

/* ***************************************************************** */

union MeasurementDirectiveTypeVal
{
  MeasurementDirectiveEnumType * MeasurementDirectiveEnum;
  XmlString * OtherMeasurementDirective;
};

/* ***************************************************************** */

class MeasurementDirectiveTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MeasurementDirectiveEnumE,
    OtherMeasurementDirectiveE };
  MeasurementDirectiveTypeChoicePair();
  MeasurementDirectiveTypeChoicePair(
    whichOne MeasurementDirectiveTypeTypeIn,
    MeasurementDirectiveTypeVal * MeasurementDirectiveTypeValueIn);
  ~MeasurementDirectiveTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasurementDirectiveTypeType;
  MeasurementDirectiveTypeVal * MeasurementDirectiveTypeValue;
};

/* ***************************************************************** */

class MeasurementOffsetAlignmentOperationType :
  public AlignmentOperationBaseType
{
public:
  MeasurementOffsetAlignmentOperationType();
  MeasurementOffsetAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    MeasurementOriginOffsetTypeLisd * OriginIn);
  MeasurementOffsetAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    NaturalType * nIn,
    MeasurementOriginOffsetTypeLisd * OriginIn);
  ~MeasurementOffsetAlignmentOperationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  MeasurementOriginOffsetTypeLisd * getOrigin();
  void setOrigin(MeasurementOriginOffsetTypeLisd *);

protected:
  NaturalType * n;
  MeasurementOriginOffsetTypeLisd * Origin;
};

/* ***************************************************************** */

class MeasurementOriginOffsetType :
  public XmlTypeBase
{
public:
  MeasurementOriginOffsetType();
  MeasurementOriginOffsetType(
    AlignmentFeatureType * OriginEntityIn,
    UnitVectorType * OriginDirectionIn);
  ~MeasurementOriginOffsetType();
  void printSelf(FILE * outFile);

  AlignmentFeatureType * getOriginEntity();
  void setOriginEntity(AlignmentFeatureType * OriginEntityIn);
  UnitVectorType * getOriginDirection();
  void setOriginDirection(UnitVectorType * OriginDirectionIn);

protected:
  AlignmentFeatureType * OriginEntity;
  UnitVectorType * OriginDirection;
};

/* ***************************************************************** */

class MeasurementOriginOffsetTypeLisd :
  public std::list<MeasurementOriginOffsetType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasurementOriginOffsetTypeLisd();
  MeasurementOriginOffsetTypeLisd(
    MeasurementOriginOffsetType * aMeasurementOriginOffsetType);
  ~MeasurementOriginOffsetTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ModifyingPlaneEnumType :
  public XmlNMTOKEN
{
public:
  ModifyingPlaneEnumType();
  ModifyingPlaneEnumType(
    const char * valIn);
  ~ModifyingPlaneEnumType();
  bool ModifyingPlaneEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class MovableDatumTargetDirectionType :
  public XmlTypeBase
{
public:
  MovableDatumTargetDirectionType();
  MovableDatumTargetDirectionType(
    UnitVectorType * DatumTargetTranslationDirectionIn);
  ~MovableDatumTargetDirectionType();
  void printSelf(FILE * outFile);

  UnitVectorType * getDatumTargetTranslationDirection();
  void setDatumTargetTranslationDirection(UnitVectorType * DatumTargetTranslationDirectionIn);

protected:
  UnitVectorType * DatumTargetTranslationDirection;
};

/* ***************************************************************** */

class NominalDatumFeatureType :
  public DatumFeatureBaseType
{
public:
  NominalDatumFeatureType();
  NominalDatumFeatureType(
    QIFReferenceFullType * FeatureNominalIdIn);
  ~NominalDatumFeatureType();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NominalOffsetAlignmentOperationType :
  public AlignmentOperationBaseType
{
public:
  NominalOffsetAlignmentOperationType();
  NominalOffsetAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    VectorType * OffsetIn);
  ~NominalOffsetAlignmentOperationType();
  void printSelf(FILE * outFile);

  VectorType * getOffset();
  void setOffset(VectorType * OffsetIn);

protected:
  VectorType * Offset;
};

/* ***************************************************************** */

class NominalRotationAlignmentOperationType :
  public AlignmentOperationBaseType
{
public:
  NominalRotationAlignmentOperationType();
  NominalRotationAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    UnitVectorType * RotationAxisIn,
    AngularValueType * AngleIn);
  ~NominalRotationAlignmentOperationType();
  void printSelf(FILE * outFile);

  UnitVectorType * getRotationAxis();
  void setRotationAxis(UnitVectorType * RotationAxisIn);
  AngularValueType * getAngle();
  void setAngle(AngularValueType * AngleIn);

protected:
  UnitVectorType * RotationAxis;
  AngularValueType * Angle;
};

/* ***************************************************************** */

class NonToleranceEnumType :
  public XmlNMTOKEN
{
public:
  NonToleranceEnumType();
  NonToleranceEnumType(
    const char * valIn);
  ~NonToleranceEnumType();
  bool NonToleranceEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class NotableEventType :
  public EventBaseType
{
public:
  NotableEventType();
  NotableEventType(
    XmlString * DescriptionIn,
    XmlBoolean * ActiveIn);
  NotableEventType(
    QIFIdType * idIn,
    XmlString * DescriptionIn,
    XmlBoolean * ActiveIn);
  ~NotableEventType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  XmlBoolean * getActive();
  void setActive(XmlBoolean * ActiveIn);

protected:
  XmlBoolean * Active;
};

/* ***************************************************************** */

class NotableEventTypeLisd :
  public std::list<NotableEventType *>,
  public XmlSchemaInstanceBase
{
public:
  NotableEventTypeLisd();
  NotableEventTypeLisd(
    NotableEventType * aNotableEventType);
  ~NotableEventTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NotableEventsType :
  public XmlTypeBase
{
public:
  NotableEventsType();
  NotableEventsType(
    NotableEventTypeLisd * NotableEventIn);
  NotableEventsType(
    NaturalType * nIn,
    NotableEventTypeLisd * NotableEventIn);
  ~NotableEventsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  NotableEventTypeLisd * getNotableEvent();
  void setNotableEvent(NotableEventTypeLisd *);

protected:
  NaturalType * n;
  NotableEventTypeLisd * NotableEvent;
};

/* ***************************************************************** */

class NotedEventType :
  public EventBaseType
{
public:
  NotedEventType();
  NotedEventType(
    XmlString * DescriptionIn,
    NaturalType * SequenceNumberIn,
    XmlDateTime * TimeOccurredIn,
    QIFReferenceType * NotableEventIdIn);
  NotedEventType(
    QIFIdType * idIn,
    XmlString * DescriptionIn,
    NaturalType * SequenceNumberIn,
    XmlDateTime * TimeOccurredIn,
    QIFReferenceType * NotableEventIdIn);
  ~NotedEventType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);
  XmlDateTime * getTimeOccurred();
  void setTimeOccurred(XmlDateTime * TimeOccurredIn);
  QIFReferenceType * getNotableEventId();
  void setNotableEventId(QIFReferenceType * NotableEventIdIn);

protected:
  NaturalType * SequenceNumber;
  XmlDateTime * TimeOccurred;
  QIFReferenceType * NotableEventId;
};

/* ***************************************************************** */

class NotedEventTypeLisd :
  public std::list<NotedEventType *>,
  public XmlSchemaInstanceBase
{
public:
  NotedEventTypeLisd();
  NotedEventTypeLisd(
    NotedEventType * aNotedEventType);
  ~NotedEventTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class NotedEventsType :
  public XmlTypeBase
{
public:
  NotedEventsType();
  NotedEventsType(
    NotedEventTypeLisd * NotedEventIn);
  NotedEventsType(
    NaturalType * nIn,
    NotedEventTypeLisd * NotedEventIn);
  ~NotedEventsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  NotedEventTypeLisd * getNotedEvent();
  void setNotedEvent(NotedEventTypeLisd *);

protected:
  NaturalType * n;
  NotedEventTypeLisd * NotedEvent;
};

/* ***************************************************************** */

class OrganizationType :
  public XmlTypeBase
{
public:
  OrganizationType();
  OrganizationType(
    XmlToken * NameIn,
    PhysicalAddressType * AddressIn,
    AttributesType * AttributesIn);
  ~OrganizationType();
  void printSelf(FILE * outFile);

  XmlToken * getName();
  void setName(XmlToken * NameIn);
  PhysicalAddressType * getAddress();
  void setAddress(PhysicalAddressType * AddressIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  XmlToken * Name;
  PhysicalAddressType * Address;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class OrientationPlaneType :
  public XmlTypeBase
{
public:
  OrientationPlaneType();
  OrientationPlaneType(
    ModifyingPlaneEnumType * OrientationPlaneEnumIn,
    QIFReferenceFullType * DatumDefinitionIdIn);
  ~OrientationPlaneType();
  void printSelf(FILE * outFile);

  ModifyingPlaneEnumType * getOrientationPlaneEnum();
  void setOrientationPlaneEnum(ModifyingPlaneEnumType * OrientationPlaneEnumIn);
  QIFReferenceFullType * getDatumDefinitionId();
  void setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn);

protected:
  ModifyingPlaneEnumType * OrientationPlaneEnum;
  QIFReferenceFullType * DatumDefinitionId;
};

/* ***************************************************************** */

class PhysicalAddressType :
  public XmlTypeBase
{
public:
  PhysicalAddressType();
  PhysicalAddressType(
    AddressDescriptionType * DescriptionIn,
    XmlToken * InternalLocationIn,
    XmlToken * StreetNumberIn,
    XmlToken * StreetIn,
    XmlToken * PostalBoxIn,
    XmlToken * TownIn,
    XmlToken * RegionIn,
    XmlToken * PostalCodeIn,
    XmlToken * CountryIn,
    XmlToken * FacsimileNumberIn,
    XmlToken * TelephoneNumberIn,
    XmlToken * ElectronicMailAddressIn,
    XmlToken * TelexNumberIn);
  ~PhysicalAddressType();
  void printSelf(FILE * outFile);

  AddressDescriptionType * getDescription();
  void setDescription(AddressDescriptionType * DescriptionIn);
  XmlToken * getInternalLocation();
  void setInternalLocation(XmlToken * InternalLocationIn);
  XmlToken * getStreetNumber();
  void setStreetNumber(XmlToken * StreetNumberIn);
  XmlToken * getStreet();
  void setStreet(XmlToken * StreetIn);
  XmlToken * getPostalBox();
  void setPostalBox(XmlToken * PostalBoxIn);
  XmlToken * getTown();
  void setTown(XmlToken * TownIn);
  XmlToken * getRegion();
  void setRegion(XmlToken * RegionIn);
  XmlToken * getPostalCode();
  void setPostalCode(XmlToken * PostalCodeIn);
  XmlToken * getCountry();
  void setCountry(XmlToken * CountryIn);
  XmlToken * getFacsimileNumber();
  void setFacsimileNumber(XmlToken * FacsimileNumberIn);
  XmlToken * getTelephoneNumber();
  void setTelephoneNumber(XmlToken * TelephoneNumberIn);
  XmlToken * getElectronicMailAddress();
  void setElectronicMailAddress(XmlToken * ElectronicMailAddressIn);
  XmlToken * getTelexNumber();
  void setTelexNumber(XmlToken * TelexNumberIn);

protected:
  AddressDescriptionType * Description;
  XmlToken * InternalLocation;
  XmlToken * StreetNumber;
  XmlToken * Street;
  XmlToken * PostalBox;
  XmlToken * Town;
  XmlToken * Region;
  XmlToken * PostalCode;
  XmlToken * Country;
  XmlToken * FacsimileNumber;
  XmlToken * TelephoneNumber;
  XmlToken * ElectronicMailAddress;
  XmlToken * TelexNumber;
};

/* ***************************************************************** */

class PointSetReferenceBaseType :
  public QIFReferenceType
{
public:
  PointSetReferenceBaseType();
  PointSetReferenceBaseType(
    const char * valStringIn);
  PointSetReferenceBaseType(
    QIFReferenceSimpleType * xIdIn,
    const char * valStringIn);
  ~PointSetReferenceBaseType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool PointSetReferenceBaseTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointSetReferenceBaseTypeLisd :
  public std::list<PointSetReferenceBaseType *>,
  public XmlSchemaInstanceBase
{
public:
  PointSetReferenceBaseTypeLisd();
  PointSetReferenceBaseTypeLisd(
    PointSetReferenceBaseType * aPointSetReferenceBaseType);
  ~PointSetReferenceBaseTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PointSetReferenceRangeType :
  public PointSetReferenceBaseType
{
public:
  PointSetReferenceRangeType();
  PointSetReferenceRangeType(
    const char * valStringIn);
  PointSetReferenceRangeType(
    Natural2Type * rangeIn,
    QIFReferenceSimpleType * xIdIn,
    const char * valStringIn);
  ~PointSetReferenceRangeType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool PointSetReferenceRangeTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);

  Natural2Type * getrange();
  void setrange(Natural2Type * rangeIn);

protected:
  Natural2Type * range;
};

/* ***************************************************************** */

class PointSetReferenceSingleType :
  public PointSetReferenceBaseType
{
public:
  PointSetReferenceSingleType();
  PointSetReferenceSingleType(
    const char * valStringIn);
  PointSetReferenceSingleType(
    NaturalType * indexIn,
    QIFReferenceSimpleType * xIdIn,
    const char * valStringIn);
  ~PointSetReferenceSingleType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool PointSetReferenceSingleTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getindex();
  void setindex(NaturalType * indexIn);

protected:
  NaturalType * index;
};

/* ***************************************************************** */

class PointSetReferenceWholeType :
  public PointSetReferenceBaseType
{
public:
  PointSetReferenceWholeType();
  PointSetReferenceWholeType(
    const char * valStringIn);
  PointSetReferenceWholeType(
    QIFReferenceSimpleType * xIdIn,
    const char * valStringIn);
  ~PointSetReferenceWholeType();
  void printSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
  bool PointSetReferenceWholeTypeIsBad();
  bool badAttributes(AttributePairLisd * attributes);
};

/* ***************************************************************** */

class PointWithNormalBaseType :
  public XmlTypeBase
{
public:
  PointWithNormalBaseType();
  PointWithNormalBaseType(
    PointType * PointIn,
    UnitVectorType * NormalIn);
  PointWithNormalBaseType(
    QIFIdType * idIn,
    PointType * PointIn,
    UnitVectorType * NormalIn);
  virtual ~PointWithNormalBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  PointType * getPoint();
  void setPoint(PointType * PointIn);
  UnitVectorType * getNormal();
  void setNormal(UnitVectorType * NormalIn);

protected:
  QIFIdType * id;
  PointType * Point;
  UnitVectorType * Normal;
};

/* ***************************************************************** */

class PrecedenceEnumType :
  public XmlNMTOKEN
{
public:
  PrecedenceEnumType();
  PrecedenceEnumType(
    const char * valIn);
  ~PrecedenceEnumType();
  bool PrecedenceEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class PrecedenceType :
  public XmlTypeBase
{
public:
  PrecedenceType();
  PrecedenceType(
    PrecedenceTypeChoicePair * PrecedenceTypePairIn);
  ~PrecedenceType();
  void printSelf(FILE * outFile);

  PrecedenceTypeChoicePair * getPrecedenceTypePair();
  void setPrecedenceTypePair(PrecedenceTypeChoicePair * PrecedenceTypePairIn);

protected:
  PrecedenceTypeChoicePair * PrecedenceTypePair;
};

/* ***************************************************************** */

union PrecedenceTypeVal
{
  PrecedenceEnumType * PrecedenceEnum;
  XmlString * OtherPrecedence;
};

/* ***************************************************************** */

class PrecedenceTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PrecedenceEnumE,
    OtherPrecedenceE };
  PrecedenceTypeChoicePair();
  PrecedenceTypeChoicePair(
    whichOne PrecedenceTypeTypeIn,
    PrecedenceTypeVal * PrecedenceTypeValueIn);
  ~PrecedenceTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PrecedenceTypeType;
  PrecedenceTypeVal * PrecedenceTypeValue;
};

/* ***************************************************************** */

class PressureToleranceType :
  public XmlTypeBase
{
public:
  PressureToleranceType();
  PressureToleranceType(
    PressureToleran_1017_Type * PressureToleran_1017In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~PressureToleranceType();
  void printSelf(FILE * outFile);

  PressureToleran_1017_Type * getPressureToleran_1017();
  void setPressureToleran_1017(PressureToleran_1017_Type * PressureToleran_1017In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  PressureToleran_1017_Type * PressureToleran_1017;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class PrimaryAlignmentOperationType :
  public AlignmentOperationBaseType
{
public:
  PrimaryAlignmentOperationType();
  PrimaryAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    AlignmentFeatureType * PrimaryEntityIn,
    UnitVectorType * PrimaryAxisIn);
  ~PrimaryAlignmentOperationType();
  void printSelf(FILE * outFile);

  AlignmentFeatureType * getPrimaryEntity();
  void setPrimaryEntity(AlignmentFeatureType * PrimaryEntityIn);
  UnitVectorType * getPrimaryAxis();
  void setPrimaryAxis(UnitVectorType * PrimaryAxisIn);

protected:
  AlignmentFeatureType * PrimaryEntity;
  UnitVectorType * PrimaryAxis;
};

/* ***************************************************************** */

class ReducedDatumEnumType :
  public XmlNMTOKEN
{
public:
  ReducedDatumEnumType();
  ReducedDatumEnumType(
    const char * valIn);
  ~ReducedDatumEnumType();
  bool ReducedDatumEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ReferencedComponentEnumType :
  public XmlNMTOKEN
{
public:
  ReferencedComponentEnumType();
  ReferencedComponentEnumType(
    const char * valIn);
  ~ReferencedComponentEnumType();
  bool ReferencedComponentEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class RetrievalMethodEnumType :
  public XmlNMTOKEN
{
public:
  RetrievalMethodEnumType();
  RetrievalMethodEnumType(
    const char * valIn);
  ~RetrievalMethodEnumType();
  bool RetrievalMethodEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SecondaryAlignmentOperationType :
  public AlignmentOperationBaseType
{
public:
  SecondaryAlignmentOperationType();
  SecondaryAlignmentOperationType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn,
    AlignmentFeatureType * SecondaryEntityIn,
    UnitVectorType * SecondaryAxisIn,
    UnitVectorType * RotationAxisIn);
  ~SecondaryAlignmentOperationType();
  void printSelf(FILE * outFile);

  AlignmentFeatureType * getSecondaryEntity();
  void setSecondaryEntity(AlignmentFeatureType * SecondaryEntityIn);
  UnitVectorType * getSecondaryAxis();
  void setSecondaryAxis(UnitVectorType * SecondaryAxisIn);
  UnitVectorType * getRotationAxis();
  void setRotationAxis(UnitVectorType * RotationAxisIn);

protected:
  AlignmentFeatureType * SecondaryEntity;
  UnitVectorType * SecondaryAxis;
  UnitVectorType * RotationAxis;
};

/* ***************************************************************** */

class SectionModifierEnumType :
  public XmlNMTOKEN
{
public:
  SectionModifierEnumType();
  SectionModifierEnumType(
    const char * valIn);
  ~SectionModifierEnumType();
  bool SectionModifierEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SequencedBaseFeatureType :
  public BaseFeatureType
{
public:
  SequencedBaseFeatureType();
  SequencedBaseFeatureType(
    ReferencedComponentEnumType * ReferencedComponentIn,
    QIFReferenceFullType * FeatureIdIn,
    NaturalType * SequenceNumberIn);
  ~SequencedBaseFeatureType();
  void printSelf(FILE * outFile);

  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  NaturalType * SequenceNumber;
};

/* ***************************************************************** */

class SequencedBaseFeatureTypeLisd :
  public std::list<SequencedBaseFeatureType *>,
  public XmlSchemaInstanceBase
{
public:
  SequencedBaseFeatureTypeLisd();
  SequencedBaseFeatureTypeLisd(
    SequencedBaseFeatureType * aSequencedBaseFeatureType);
  ~SequencedBaseFeatureTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SequencedDatumType :
  public XmlTypeBase
{
public:
  SequencedDatumType();
  SequencedDatumType(
    SequencedDatumT_1018_Type * SequencedDatumT_1018In,
    NaturalType * SequenceNumberIn);
  ~SequencedDatumType();
  void printSelf(FILE * outFile);

  SequencedDatumT_1018_Type * getSequencedDatumT_1018();
  void setSequencedDatumT_1018(SequencedDatumT_1018_Type * SequencedDatumT_1018In);
  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  SequencedDatumT_1018_Type * SequencedDatumT_1018;
  NaturalType * SequenceNumber;
};

/* ***************************************************************** */

class SequencedDatumTypeLisd :
  public std::list<SequencedDatumType *>,
  public XmlSchemaInstanceBase
{
public:
  SequencedDatumTypeLisd();
  SequencedDatumTypeLisd(
    SequencedDatumType * aSequencedDatumType);
  ~SequencedDatumTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SignOffsType :
  public XmlTypeBase
{
public:
  SignOffsType();
  SignOffsType(
    EmployeeTypeLisd * EmployeeIn);
  SignOffsType(
    NaturalType * nIn,
    EmployeeTypeLisd * EmployeeIn);
  ~SignOffsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  EmployeeTypeLisd * getEmployee();
  void setEmployee(EmployeeTypeLisd *);

protected:
  NaturalType * n;
  EmployeeTypeLisd * Employee;
};

/* ***************************************************************** */

class SignificantDimensionEnumType :
  public XmlNMTOKEN
{
public:
  SignificantDimensionEnumType();
  SignificantDimensionEnumType(
    const char * valIn);
  ~SignificantDimensionEnumType();
  bool SignificantDimensionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SoftwareType :
  public XmlTypeBase
{
public:
  SoftwareType();
  SoftwareType(
    AttributesType * AttributesIn,
    XmlToken * VendorNameIn,
    XmlToken * ApplicationNameIn,
    XmlToken * VersionIn,
    XmlString * DescriptionIn,
    XmlAnyURI * URIIn,
    ArrayReferenceType * ReferencedStandardIdsIn);
  SoftwareType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * VendorNameIn,
    XmlToken * ApplicationNameIn,
    XmlToken * VersionIn,
    XmlString * DescriptionIn,
    XmlAnyURI * URIIn,
    ArrayReferenceType * ReferencedStandardIdsIn);
  ~SoftwareType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlToken * getVendorName();
  void setVendorName(XmlToken * VendorNameIn);
  XmlToken * getApplicationName();
  void setApplicationName(XmlToken * ApplicationNameIn);
  XmlToken * getVersion();
  void setVersion(XmlToken * VersionIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlAnyURI * getURI();
  void setURI(XmlAnyURI * URIIn);
  ArrayReferenceType * getReferencedStandardIds();
  void setReferencedStandardIds(ArrayReferenceType * ReferencedStandardIdsIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlToken * VendorName;
  XmlToken * ApplicationName;
  XmlToken * Version;
  XmlString * Description;
  XmlAnyURI * URI;
  ArrayReferenceType * ReferencedStandardIds;
};

/* ***************************************************************** */

class SoftwareTypeLisd :
  public std::list<SoftwareType *>,
  public XmlSchemaInstanceBase
{
public:
  SoftwareTypeLisd();
  SoftwareTypeLisd(
    SoftwareType * aSoftwareType);
  ~SoftwareTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class SoftwaresType :
  public XmlTypeBase
{
public:
  SoftwaresType();
  SoftwaresType(
    SoftwareTypeLisd * SoftwareIn);
  SoftwaresType(
    NaturalType * nIn,
    SoftwareTypeLisd * SoftwareIn);
  ~SoftwaresType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  SoftwareTypeLisd * getSoftware();
  void setSoftware(SoftwareTypeLisd *);

protected:
  NaturalType * n;
  SoftwareTypeLisd * Software;
};

/* ***************************************************************** */

class SpeedToleranceType :
  public XmlTypeBase
{
public:
  SpeedToleranceType();
  SpeedToleranceType(
    SpeedToleranceT_1019_Type * SpeedToleranceT_1019In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~SpeedToleranceType();
  void printSelf(FILE * outFile);

  SpeedToleranceT_1019_Type * getSpeedToleranceT_1019();
  void setSpeedToleranceT_1019(SpeedToleranceT_1019_Type * SpeedToleranceT_1019In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  SpeedToleranceT_1019_Type * SpeedToleranceT_1019;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class StandardType :
  public XmlTypeBase
{
public:
  StandardType();
  StandardType(
    AttributesType * AttributesIn,
    StandardsOrganizationType * OrganizationIn,
    XmlToken * DesignatorIn,
    XmlString * YearIn,
    XmlString * TitleIn,
    XmlString * DescriptionIn,
    XmlAnyURI * URIIn,
    XmlNMTOKEN * ISBNIn,
    ArrayReferenceType * ReferencedStandardIdsIn);
  StandardType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    StandardsOrganizationType * OrganizationIn,
    XmlToken * DesignatorIn,
    XmlString * YearIn,
    XmlString * TitleIn,
    XmlString * DescriptionIn,
    XmlAnyURI * URIIn,
    XmlNMTOKEN * ISBNIn,
    ArrayReferenceType * ReferencedStandardIdsIn);
  ~StandardType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  StandardsOrganizationType * getOrganization();
  void setOrganization(StandardsOrganizationType * OrganizationIn);
  XmlToken * getDesignator();
  void setDesignator(XmlToken * DesignatorIn);
  XmlString * getYear();
  void setYear(XmlString * YearIn);
  XmlString * getTitle();
  void setTitle(XmlString * TitleIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlAnyURI * getURI();
  void setURI(XmlAnyURI * URIIn);
  XmlNMTOKEN * getISBN();
  void setISBN(XmlNMTOKEN * ISBNIn);
  ArrayReferenceType * getReferencedStandardIds();
  void setReferencedStandardIds(ArrayReferenceType * ReferencedStandardIdsIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  StandardsOrganizationType * Organization;
  XmlToken * Designator;
  XmlString * Year;
  XmlString * Title;
  XmlString * Description;
  XmlAnyURI * URI;
  XmlNMTOKEN * ISBN;
  ArrayReferenceType * ReferencedStandardIds;
};

/* ***************************************************************** */

class StandardTypeLisd :
  public std::list<StandardType *>,
  public XmlSchemaInstanceBase
{
public:
  StandardTypeLisd();
  StandardTypeLisd(
    StandardType * aStandardType);
  ~StandardTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class StandardsOrganizationEnumType :
  public XmlNMTOKEN
{
public:
  StandardsOrganizationEnumType();
  StandardsOrganizationEnumType(
    const char * valIn);
  ~StandardsOrganizationEnumType();
  bool StandardsOrganizationEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class StandardsOrganizationType :
  public XmlTypeBase
{
public:
  StandardsOrganizationType();
  StandardsOrganizationType(
    StandardsOrganizationTypeChoicePair * StandardsOrganizationTypePairIn);
  ~StandardsOrganizationType();
  void printSelf(FILE * outFile);

  StandardsOrganizationTypeChoicePair * getStandardsOrganizationTypePair();
  void setStandardsOrganizationTypePair(StandardsOrganizationTypeChoicePair * StandardsOrganizationTypePairIn);

protected:
  StandardsOrganizationTypeChoicePair * StandardsOrganizationTypePair;
};

/* ***************************************************************** */

union StandardsOrganizationTypeVal
{
  StandardsOrganizationEnumType * StandardsOrganizationEnum;
  XmlString * OtherStandardsOrganization;
};

/* ***************************************************************** */

class StandardsOrganizationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    StandardsOrganizationEnumE,
    OtherStandardsOrganizationE };
  StandardsOrganizationTypeChoicePair();
  StandardsOrganizationTypeChoicePair(
    whichOne StandardsOrganizationTypeTypeIn,
    StandardsOrganizationTypeVal * StandardsOrganizationTypeValueIn);
  ~StandardsOrganizationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StandardsOrganizationTypeType;
  StandardsOrganizationTypeVal * StandardsOrganizationTypeValue;
};

/* ***************************************************************** */

class StandardsType :
  public XmlTypeBase
{
public:
  StandardsType();
  StandardsType(
    StandardTypeLisd * StandardIn);
  StandardsType(
    NaturalType * nIn,
    StandardTypeLisd * StandardIn);
  ~StandardsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  StandardTypeLisd * getStandard();
  void setStandard(StandardTypeLisd *);

protected:
  NaturalType * n;
  StandardTypeLisd * Standard;
};

/* ***************************************************************** */

class SubstituteFeatureAlgorithmEnumType :
  public XmlNMTOKEN
{
public:
  SubstituteFeatureAlgorithmEnumType();
  SubstituteFeatureAlgorithmEnumType(
    const char * valIn);
  ~SubstituteFeatureAlgorithmEnumType();
  bool SubstituteFeatureAlgorithmEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class SubstituteFeatureAlgorithmType :
  public XmlTypeBase
{
public:
  SubstituteFeatureAlgorithmType();
  SubstituteFeatureAlgorithmType(
    AttributesType * AttributesIn,
    SubstituteFeatu_1020_Type * SubstituteFeatu_1020In);
  ~SubstituteFeatureAlgorithmType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  SubstituteFeatu_1020_Type * getSubstituteFeatu_1020();
  void setSubstituteFeatu_1020(SubstituteFeatu_1020_Type * SubstituteFeatu_1020In);

protected:
  AttributesType * Attributes;
  SubstituteFeatu_1020_Type * SubstituteFeatu_1020;
};

/* ***************************************************************** */

class TemperatureToleranceType :
  public XmlTypeBase
{
public:
  TemperatureToleranceType();
  TemperatureToleranceType(
    TemperatureTole_1021_Type * TemperatureTole_1021In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~TemperatureToleranceType();
  void printSelf(FILE * outFile);

  TemperatureTole_1021_Type * getTemperatureTole_1021();
  void setTemperatureTole_1021(TemperatureTole_1021_Type * TemperatureTole_1021In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  TemperatureTole_1021_Type * TemperatureTole_1021;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class TextThreadSpecificationType :
  public XmlTypeBase
{
public:
  TextThreadSpecificationType();
  TextThreadSpecificationType(
    XmlString * TextSpecificationIn);
  TextThreadSpecificationType(
    QIFIdType * idIn,
    XmlString * TextSpecificationIn);
  ~TextThreadSpecificationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  XmlString * getTextSpecification();
  void setTextSpecification(XmlString * TextSpecificationIn);

protected:
  QIFIdType * id;
  XmlString * TextSpecification;
};

/* ***************************************************************** */

class ThreadSpecificationDetailedBaseType :
  public XmlTypeBase
{
public:
  ThreadSpecificationDetailedBaseType();
  ThreadSpecificationDetailedBaseType(
    LinearValueType * DiameterIn,
    ThreadSeriesType * ThreadSeriesIn,
    ThreadClassType * ThreadToleranceClassIn,
    ThreadClassType * CrestDiameterToleranceClassIn,
    XmlBoolean * LeftHandedIn,
    XmlBoolean * ModifiedThreadIn,
    LinearValueType * ThreadLengthEngagementIn,
    AttributesType * AttributesIn);
  ThreadSpecificationDetailedBaseType(
    QIFIdType * idIn,
    LinearValueType * DiameterIn,
    ThreadSeriesType * ThreadSeriesIn,
    ThreadClassType * ThreadToleranceClassIn,
    ThreadClassType * CrestDiameterToleranceClassIn,
    XmlBoolean * LeftHandedIn,
    XmlBoolean * ModifiedThreadIn,
    LinearValueType * ThreadLengthEngagementIn,
    AttributesType * AttributesIn);
  virtual ~ThreadSpecificationDetailedBaseType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  LinearValueType * getDiameter();
  void setDiameter(LinearValueType * DiameterIn);
  ThreadSeriesType * getThreadSeries();
  void setThreadSeries(ThreadSeriesType * ThreadSeriesIn);
  ThreadClassType * getThreadToleranceClass();
  void setThreadToleranceClass(ThreadClassType * ThreadToleranceClassIn);
  ThreadClassType * getCrestDiameterToleranceClass();
  void setCrestDiameterToleranceClass(ThreadClassType * CrestDiameterToleranceClassIn);
  XmlBoolean * getLeftHanded();
  void setLeftHanded(XmlBoolean * LeftHandedIn);
  XmlBoolean * getModifiedThread();
  void setModifiedThread(XmlBoolean * ModifiedThreadIn);
  LinearValueType * getThreadLengthEngagement();
  void setThreadLengthEngagement(LinearValueType * ThreadLengthEngagementIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  QIFIdType * id;
  LinearValueType * Diameter;
  ThreadSeriesType * ThreadSeries;
  ThreadClassType * ThreadToleranceClass;
  ThreadClassType * CrestDiameterToleranceClass;
  XmlBoolean * LeftHanded;
  XmlBoolean * ModifiedThread;
  LinearValueType * ThreadLengthEngagement;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class ThreadSpecificationType :
  public XmlTypeBase
{
public:
  ThreadSpecificationType();
  ThreadSpecificationType(
    ThreadSpecificationTypeChoicePair * ThreadSpecificationTypePairIn);
  ~ThreadSpecificationType();
  void printSelf(FILE * outFile);

  ThreadSpecificationTypeChoicePair * getThreadSpecificationTypePair();
  void setThreadSpecificationTypePair(ThreadSpecificationTypeChoicePair * ThreadSpecificationTypePairIn);

protected:
  ThreadSpecificationTypeChoicePair * ThreadSpecificationTypePair;
};

/* ***************************************************************** */

union ThreadSpecificationTypeVal
{
  SingleLeadThreadSpecificationType * SingleLeadSpecification;
  MultiLeadThreadSpecificationType * MultiLeadSpecification;
  TextThreadSpecificationType * TextThreadSpecification;
};

/* ***************************************************************** */

class ThreadSpecificationTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SingleLeadSpecificationE,
    MultiLeadSpecificationE,
    TextThreadSpecificationE };
  ThreadSpecificationTypeChoicePair();
  ThreadSpecificationTypeChoicePair(
    whichOne ThreadSpecificationTypeTypeIn,
    ThreadSpecificationTypeVal * ThreadSpecificationTypeValueIn);
  ~ThreadSpecificationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThreadSpecificationTypeType;
  ThreadSpecificationTypeVal * ThreadSpecificationTypeValue;
};

/* ***************************************************************** */

class ThreadSpecificationTypeLisd :
  public std::list<ThreadSpecificationType *>,
  public XmlSchemaInstanceBase
{
public:
  ThreadSpecificationTypeLisd();
  ThreadSpecificationTypeLisd(
    ThreadSpecificationType * aThreadSpecificationType);
  ~ThreadSpecificationTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ThreadSpecificationsType :
  public XmlTypeBase
{
public:
  ThreadSpecificationsType();
  ThreadSpecificationsType(
    ThreadSpecificationTypeLisd * ThreadSpecificationIn);
  ThreadSpecificationsType(
    NaturalType * nIn,
    ThreadSpecificationTypeLisd * ThreadSpecificationIn);
  ~ThreadSpecificationsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ThreadSpecificationTypeLisd * getThreadSpecification();
  void setThreadSpecification(ThreadSpecificationTypeLisd *);

protected:
  NaturalType * n;
  ThreadSpecificationTypeLisd * ThreadSpecification;
};

/* ***************************************************************** */

class TimeToleranceType :
  public XmlTypeBase
{
public:
  TimeToleranceType();
  TimeToleranceType(
    TimeToleranceTy_1022_Type * TimeToleranceTy_1022In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~TimeToleranceType();
  void printSelf(FILE * outFile);

  TimeToleranceTy_1022_Type * getTimeToleranceTy_1022();
  void setTimeToleranceTy_1022(TimeToleranceTy_1022_Type * TimeToleranceTy_1022In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  TimeToleranceTy_1022_Type * TimeToleranceTy_1022;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class ToleranceZonePerUnitAngleType :
  public XmlTypeBase
{
public:
  ToleranceZonePerUnitAngleType();
  ToleranceZonePerUnitAngleType(
    LinearValueType * ToleranceValuePerUnitIn,
    AngularValueType * UnitAngleIn);
  ~ToleranceZonePerUnitAngleType();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValuePerUnit();
  void setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn);
  AngularValueType * getUnitAngle();
  void setUnitAngle(AngularValueType * UnitAngleIn);

protected:
  LinearValueType * ToleranceValuePerUnit;
  AngularValueType * UnitAngle;
};

/* ***************************************************************** */

class ToleranceZonePerUnitAreaType :
  public XmlTypeBase
{
public:
  ToleranceZonePerUnitAreaType();
  ToleranceZonePerUnitAreaType(
    LinearValueType * ToleranceValuePerUnitIn,
    ToleranceZonePe_1023_Type * ToleranceZonePe_1023In);
  ~ToleranceZonePerUnitAreaType();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValuePerUnit();
  void setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn);
  ToleranceZonePe_1023_Type * getToleranceZonePe_1023();
  void setToleranceZonePe_1023(ToleranceZonePe_1023_Type * ToleranceZonePe_1023In);

protected:
  LinearValueType * ToleranceValuePerUnit;
  ToleranceZonePe_1023_Type * ToleranceZonePe_1023;
};

/* ***************************************************************** */

class ToleranceZonePerUnitLengthType :
  public XmlTypeBase
{
public:
  ToleranceZonePerUnitLengthType();
  ToleranceZonePerUnitLengthType(
    LinearValueType * ToleranceValuePerUnitIn,
    LinearValueType * UnitLengthIn);
  ~ToleranceZonePerUnitLengthType();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValuePerUnit();
  void setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn);
  LinearValueType * getUnitLength();
  void setUnitLength(LinearValueType * UnitLengthIn);

protected:
  LinearValueType * ToleranceValuePerUnit;
  LinearValueType * UnitLength;
};

/* ***************************************************************** */

class ToleranceZonePerUnitPolarAreaType :
  public XmlTypeBase
{
public:
  ToleranceZonePerUnitPolarAreaType();
  ToleranceZonePerUnitPolarAreaType(
    LinearValueType * ToleranceValuePerUnitIn,
    AngularValueType * UnitAngleIn,
    LinearValueType * UnitLengthIn);
  ~ToleranceZonePerUnitPolarAreaType();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValuePerUnit();
  void setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn);
  AngularValueType * getUnitAngle();
  void setUnitAngle(AngularValueType * UnitAngleIn);
  LinearValueType * getUnitLength();
  void setUnitLength(LinearValueType * UnitLengthIn);

protected:
  LinearValueType * ToleranceValuePerUnit;
  AngularValueType * UnitAngle;
  LinearValueType * UnitLength;
};

/* ***************************************************************** */

class TransformInstanceType :
  public TransformMatrixType
{
public:
  TransformInstanceType();
  TransformInstanceType(
    TransformRotationType * RotationIn,
    PointSimpleType * OriginIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn);
  TransformInstanceType(
    TransformRotationType * RotationIn,
    PointSimpleType * OriginIn,
    XmlNonNegativeInteger * decimalPlacesIn,
    XmlToken * linearUnitIn,
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
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlToken * NameIn);
  ~TransformInstanceType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlToken * getName();
  void setName(XmlToken * NameIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlToken * Name;
};

/* ***************************************************************** */

class TransformInstanceTypeLisd :
  public std::list<TransformInstanceType *>,
  public XmlSchemaInstanceBase
{
public:
  TransformInstanceTypeLisd();
  TransformInstanceTypeLisd(
    TransformInstanceType * aTransformInstanceType);
  ~TransformInstanceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class TransformListType :
  public XmlTypeBase
{
public:
  TransformListType();
  TransformListType(
    TransformInstanceTypeLisd * TransformIn);
  TransformListType(
    NaturalType * nIn,
    TransformInstanceTypeLisd * TransformIn);
  ~TransformListType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  TransformInstanceTypeLisd * getTransform();
  void setTransform(TransformInstanceTypeLisd *);

protected:
  NaturalType * n;
  TransformInstanceTypeLisd * Transform;
};

/* ***************************************************************** */

class VersionBaseType :
  public XmlTypeBase
{
public:
  VersionBaseType();
  VersionBaseType(
    XmlDateTime * TimeCreatedIn,
    SignOffsType * SignOffsIn);
  ~VersionBaseType();
  void printSelf(FILE * outFile);

  XmlDateTime * getTimeCreated();
  void setTimeCreated(XmlDateTime * TimeCreatedIn);
  SignOffsType * getSignOffs();
  void setSignOffs(SignOffsType * SignOffsIn);

protected:
  XmlDateTime * TimeCreated;
  SignOffsType * SignOffs;
};

/* ***************************************************************** */

class VersionHistoryType :
  public XmlTypeBase
{
public:
  VersionHistoryType();
  VersionHistoryType(
    VersionReferenceTypeLisd * EarlierVersionIn);
  VersionHistoryType(
    NaturalType * nIn,
    VersionReferenceTypeLisd * EarlierVersionIn);
  ~VersionHistoryType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  VersionReferenceTypeLisd * getEarlierVersion();
  void setEarlierVersion(VersionReferenceTypeLisd *);

protected:
  NaturalType * n;
  VersionReferenceTypeLisd * EarlierVersion;
};

/* ***************************************************************** */

class VersionReferenceType :
  public VersionBaseType
{
public:
  VersionReferenceType();
  VersionReferenceType(
    XmlDateTime * TimeCreatedIn,
    SignOffsType * SignOffsIn,
    QPIdReferenceType * QPIdReferenceIn);
  ~VersionReferenceType();
  void printSelf(FILE * outFile);

  QPIdReferenceType * getQPIdReference();
  void setQPIdReference(QPIdReferenceType * QPIdReferenceIn);

protected:
  QPIdReferenceType * QPIdReference;
};

/* ***************************************************************** */

class VersionReferenceTypeLisd :
  public std::list<VersionReferenceType *>,
  public XmlSchemaInstanceBase
{
public:
  VersionReferenceTypeLisd();
  VersionReferenceTypeLisd(
    VersionReferenceType * aVersionReferenceType);
  ~VersionReferenceTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class VersionType :
  public VersionBaseType
{
public:
  VersionType();
  VersionType(
    XmlDateTime * TimeCreatedIn,
    SignOffsType * SignOffsIn,
    QPIdType * ThisInstanceQPIdIn);
  ~VersionType();
  void printSelf(FILE * outFile);

  QPIdType * getThisInstanceQPId();
  void setThisInstanceQPId(QPIdType * ThisInstanceQPIdIn);

protected:
  QPIdType * ThisInstanceQPId;
};

/* ***************************************************************** */

class VirtualMeasurementType :
  public XmlTypeBase
{
public:
  VirtualMeasurementType();
  VirtualMeasurementType(
    QIFIdType * idIn);
  ~VirtualMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

protected:
  QIFIdType * id;
};

/* ***************************************************************** */

class ZoneDataSetType :
  public XmlTypeBase
{
public:
  ZoneDataSetType();
  ZoneDataSetType(
    ZoneDataTypeLisd * ZoneDataIn);
  ZoneDataSetType(
    NaturalType * nIn,
    ZoneDataTypeLisd * ZoneDataIn);
  ~ZoneDataSetType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ZoneDataTypeLisd * getZoneData();
  void setZoneData(ZoneDataTypeLisd *);

protected:
  NaturalType * n;
  ZoneDataTypeLisd * ZoneData;
};

/* ***************************************************************** */

class ZoneDataType :
  public XmlTypeBase
{
public:
  ZoneDataType();
  ZoneDataType(
    QIFReferenceType * FeatureItemIdIn,
    LinearValueType * BonusIn,
    LinearValueType * ReferenceLengthIn);
  ~ZoneDataType();
  void printSelf(FILE * outFile);

  QIFReferenceType * getFeatureItemId();
  void setFeatureItemId(QIFReferenceType * FeatureItemIdIn);
  LinearValueType * getBonus();
  void setBonus(LinearValueType * BonusIn);
  LinearValueType * getReferenceLength();
  void setReferenceLength(LinearValueType * ReferenceLengthIn);

protected:
  QIFReferenceType * FeatureItemId;
  LinearValueType * Bonus;
  LinearValueType * ReferenceLength;
};

/* ***************************************************************** */

class ZoneDataTypeLisd :
  public std::list<ZoneDataType *>,
  public XmlSchemaInstanceBase
{
public:
  ZoneDataTypeLisd();
  ZoneDataTypeLisd(
    ZoneDataType * aZoneDataType);
  ~ZoneDataTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class AlgorithmType_1006_Type :
  public XmlTypeBase
{
public:
  AlgorithmType_1006_Type();
  AlgorithmType_1006_Type(
    AlgorithmType_1006_TypeChoicePair * AlgorithmType_1006_TypePairIn);
  ~AlgorithmType_1006_Type();
  void printSelf(FILE * outFile);

  AlgorithmType_1006_TypeChoicePair * getAlgorithmType_1006_TypePair();
  void setAlgorithmType_1006_TypePair(AlgorithmType_1006_TypeChoicePair * AlgorithmType_1006_TypePairIn);

protected:
  AlgorithmType_1006_TypeChoicePair * AlgorithmType_1006_TypePair;
};

/* ***************************************************************** */

union AlgorithmType_1006_TypeVal
{
  AlgorithmType_1_1024_Type * AlgorithmType_1_1024;
  AlgorithmType_1_1025_Type * AlgorithmType_1_1025;
};

/* ***************************************************************** */

class AlgorithmType_1006_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AlgorithmType_1_1024E,
    AlgorithmType_1_1025E };
  AlgorithmType_1006_TypeChoicePair();
  AlgorithmType_1006_TypeChoicePair(
    whichOne AlgorithmType_1006_TypeTypeIn,
    AlgorithmType_1006_TypeVal * AlgorithmType_1006_TypeValueIn);
  ~AlgorithmType_1006_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AlgorithmType_1006_TypeType;
  AlgorithmType_1006_TypeVal * AlgorithmType_1006_TypeValue;
};

/* ***************************************************************** */

class AngularToleranc_1007_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1007_Type();
  AngularToleranc_1007_Type(
    AngularToleranc_1007_TypeChoicePair * AngularToleranc_1007_TypePairIn);
  ~AngularToleranc_1007_Type();
  void printSelf(FILE * outFile);

  AngularToleranc_1007_TypeChoicePair * getAngularToleranc_1007_TypePair();
  void setAngularToleranc_1007_TypePair(AngularToleranc_1007_TypeChoicePair * AngularToleranc_1007_TypePairIn);

protected:
  AngularToleranc_1007_TypeChoicePair * AngularToleranc_1007_TypePair;
};

/* ***************************************************************** */

union AngularToleranc_1007_TypeVal
{
  AngularToleranc_1026_Type * AngularToleranc_1026;
  AngularValueType * MinValue;
};

/* ***************************************************************** */

class AngularToleranc_1007_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AngularToleranc_1026E,
    MinValueE };
  AngularToleranc_1007_TypeChoicePair();
  AngularToleranc_1007_TypeChoicePair(
    whichOne AngularToleranc_1007_TypeTypeIn,
    AngularToleranc_1007_TypeVal * AngularToleranc_1007_TypeValueIn);
  ~AngularToleranc_1007_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularToleranc_1007_TypeType;
  AngularToleranc_1007_TypeVal * AngularToleranc_1007_TypeValue;
};

/* ***************************************************************** */

class AngularToleranc_1008_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1008_Type();
  AngularToleranc_1008_Type(
    AngularToleranc_1008_TypeChoicePair * AngularToleranc_1008_TypePairIn);
  ~AngularToleranc_1008_Type();
  void printSelf(FILE * outFile);

  AngularToleranc_1008_TypeChoicePair * getAngularToleranc_1008_TypePair();
  void setAngularToleranc_1008_TypePair(AngularToleranc_1008_TypeChoicePair * AngularToleranc_1008_TypePairIn);

protected:
  AngularToleranc_1008_TypeChoicePair * AngularToleranc_1008_TypePair;
};

/* ***************************************************************** */

union AngularToleranc_1008_TypeVal
{
  AngularToleranc_1027_Type * AngularToleranc_1027;
  AngularValueType * MinValue;
  QIFReferenceFullType * DefinitionId;
};

/* ***************************************************************** */

class AngularToleranc_1008_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AngularToleranc_1027E,
    MinValueE,
    DefinitionIdE };
  AngularToleranc_1008_TypeChoicePair();
  AngularToleranc_1008_TypeChoicePair(
    whichOne AngularToleranc_1008_TypeTypeIn,
    AngularToleranc_1008_TypeVal * AngularToleranc_1008_TypeValueIn);
  ~AngularToleranc_1008_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularToleranc_1008_TypeType;
  AngularToleranc_1008_TypeVal * AngularToleranc_1008_TypeValue;
};

/* ***************************************************************** */

class AreaToleranceTy_1009_Type :
  public XmlTypeBase
{
public:
  AreaToleranceTy_1009_Type();
  AreaToleranceTy_1009_Type(
    AreaToleranceTy_1009_TypeChoicePair * AreaToleranceTy_1009_TypePairIn);
  ~AreaToleranceTy_1009_Type();
  void printSelf(FILE * outFile);

  AreaToleranceTy_1009_TypeChoicePair * getAreaToleranceTy_1009_TypePair();
  void setAreaToleranceTy_1009_TypePair(AreaToleranceTy_1009_TypeChoicePair * AreaToleranceTy_1009_TypePairIn);

protected:
  AreaToleranceTy_1009_TypeChoicePair * AreaToleranceTy_1009_TypePair;
};

/* ***************************************************************** */

union AreaToleranceTy_1009_TypeVal
{
  AreaToleranceTy_1028_Type * AreaToleranceTy_1028;
  AreaValueType * MinValue;
};

/* ***************************************************************** */

class AreaToleranceTy_1009_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AreaToleranceTy_1028E,
    MinValueE };
  AreaToleranceTy_1009_TypeChoicePair();
  AreaToleranceTy_1009_TypeChoicePair(
    whichOne AreaToleranceTy_1009_TypeTypeIn,
    AreaToleranceTy_1009_TypeVal * AreaToleranceTy_1009_TypeValueIn);
  ~AreaToleranceTy_1009_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AreaToleranceTy_1009_TypeType;
  AreaToleranceTy_1009_TypeVal * AreaToleranceTy_1009_TypeValue;
};

/* ***************************************************************** */

class DatumWithPreced_1010_Type :
  public XmlTypeBase
{
public:
  DatumWithPreced_1010_Type();
  DatumWithPreced_1010_Type(
    DatumWithPreced_1010_TypeChoicePair * DatumWithPreced_1010_TypePairIn);
  ~DatumWithPreced_1010_Type();
  void printSelf(FILE * outFile);

  DatumWithPreced_1010_TypeChoicePair * getDatumWithPreced_1010_TypePair();
  void setDatumWithPreced_1010_TypePair(DatumWithPreced_1010_TypeChoicePair * DatumWithPreced_1010_TypePairIn);

protected:
  DatumWithPreced_1010_TypeChoicePair * DatumWithPreced_1010_TypePair;
};

/* ***************************************************************** */

union DatumWithPreced_1010_TypeVal
{
  DatumType * SimpleDatum;
  NominalDatumFeatureType * NominalDatumFeature;
  MeasuredDatumFeatureType * MeasuredDatumFeature;
  CompoundDatumType * CompoundDatum;
};

/* ***************************************************************** */

class DatumWithPreced_1010_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SimpleDatumE,
    NominalDatumFeatureE,
    MeasuredDatumFeatureE,
    CompoundDatumE };
  DatumWithPreced_1010_TypeChoicePair();
  DatumWithPreced_1010_TypeChoicePair(
    whichOne DatumWithPreced_1010_TypeTypeIn,
    DatumWithPreced_1010_TypeVal * DatumWithPreced_1010_TypeValueIn);
  ~DatumWithPreced_1010_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DatumWithPreced_1010_TypeType;
  DatumWithPreced_1010_TypeVal * DatumWithPreced_1010_TypeValue;
};

/* ***************************************************************** */

class DirectionalOffs_1011_Type :
  public XmlTypeBase
{
public:
  DirectionalOffs_1011_Type();
  DirectionalOffs_1011_Type(
    DirectionalOffs_1011_TypeChoicePair * DirectionalOffs_1011_TypePairIn);
  ~DirectionalOffs_1011_Type();
  void printSelf(FILE * outFile);

  DirectionalOffs_1011_TypeChoicePair * getDirectionalOffs_1011_TypePair();
  void setDirectionalOffs_1011_TypePair(DirectionalOffs_1011_TypeChoicePair * DirectionalOffs_1011_TypePairIn);

protected:
  DirectionalOffs_1011_TypeChoicePair * DirectionalOffs_1011_TypePair;
};

/* ***************************************************************** */

union DirectionalOffs_1011_TypeVal
{
  UnitVectorType * NominalDirection;
  BaseFeatureType * FeatureDirection;
};

/* ***************************************************************** */

class DirectionalOffs_1011_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NominalDirectionE,
    FeatureDirectionE };
  DirectionalOffs_1011_TypeChoicePair();
  DirectionalOffs_1011_TypeChoicePair(
    whichOne DirectionalOffs_1011_TypeTypeIn,
    DirectionalOffs_1011_TypeVal * DirectionalOffs_1011_TypeValueIn);
  ~DirectionalOffs_1011_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DirectionalOffs_1011_TypeType;
  DirectionalOffs_1011_TypeVal * DirectionalOffs_1011_TypeValue;
};

/* ***************************************************************** */

class ForceToleranceT_1012_Type :
  public XmlTypeBase
{
public:
  ForceToleranceT_1012_Type();
  ForceToleranceT_1012_Type(
    ForceToleranceT_1012_TypeChoicePair * ForceToleranceT_1012_TypePairIn);
  ~ForceToleranceT_1012_Type();
  void printSelf(FILE * outFile);

  ForceToleranceT_1012_TypeChoicePair * getForceToleranceT_1012_TypePair();
  void setForceToleranceT_1012_TypePair(ForceToleranceT_1012_TypeChoicePair * ForceToleranceT_1012_TypePairIn);

protected:
  ForceToleranceT_1012_TypeChoicePair * ForceToleranceT_1012_TypePair;
};

/* ***************************************************************** */

union ForceToleranceT_1012_TypeVal
{
  ForceToleranceT_1029_Type * ForceToleranceT_1029;
  ForceValueType * MinValue;
};

/* ***************************************************************** */

class ForceToleranceT_1012_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ForceToleranceT_1029E,
    MinValueE };
  ForceToleranceT_1012_TypeChoicePair();
  ForceToleranceT_1012_TypeChoicePair(
    whichOne ForceToleranceT_1012_TypeTypeIn,
    ForceToleranceT_1012_TypeVal * ForceToleranceT_1012_TypeValueIn);
  ~ForceToleranceT_1012_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ForceToleranceT_1012_TypeType;
  ForceToleranceT_1012_TypeVal * ForceToleranceT_1012_TypeValue;
};

/* ***************************************************************** */

class LinearTolerance_1013_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1013_Type();
  LinearTolerance_1013_Type(
    LinearTolerance_1013_TypeChoicePair * LinearTolerance_1013_TypePairIn);
  ~LinearTolerance_1013_Type();
  void printSelf(FILE * outFile);

  LinearTolerance_1013_TypeChoicePair * getLinearTolerance_1013_TypePair();
  void setLinearTolerance_1013_TypePair(LinearTolerance_1013_TypeChoicePair * LinearTolerance_1013_TypePairIn);

protected:
  LinearTolerance_1013_TypeChoicePair * LinearTolerance_1013_TypePair;
};

/* ***************************************************************** */

union LinearTolerance_1013_TypeVal
{
  LinearTolerance_1030_Type * LinearTolerance_1030;
  LinearValueType * MinValue;
};

/* ***************************************************************** */

class LinearTolerance_1013_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearTolerance_1030E,
    MinValueE };
  LinearTolerance_1013_TypeChoicePair();
  LinearTolerance_1013_TypeChoicePair(
    whichOne LinearTolerance_1013_TypeTypeIn,
    LinearTolerance_1013_TypeVal * LinearTolerance_1013_TypeValueIn);
  ~LinearTolerance_1013_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearTolerance_1013_TypeType;
  LinearTolerance_1013_TypeVal * LinearTolerance_1013_TypeValue;
};

/* ***************************************************************** */

class LinearTolerance_1014_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1014_Type();
  LinearTolerance_1014_Type(
    LinearTolerance_1014_TypeChoicePair * LinearTolerance_1014_TypePairIn);
  ~LinearTolerance_1014_Type();
  void printSelf(FILE * outFile);

  LinearTolerance_1014_TypeChoicePair * getLinearTolerance_1014_TypePair();
  void setLinearTolerance_1014_TypePair(LinearTolerance_1014_TypeChoicePair * LinearTolerance_1014_TypePairIn);

protected:
  LinearTolerance_1014_TypeChoicePair * LinearTolerance_1014_TypePair;
};

/* ***************************************************************** */

union LinearTolerance_1014_TypeVal
{
  LinearTolerance_1031_Type * LinearTolerance_1031;
  LinearTolerance_1032_Type * LinearTolerance_1032;
  QIFReferenceFullType * DefinitionId;
};

/* ***************************************************************** */

class LinearTolerance_1014_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearTolerance_1031E,
    LinearTolerance_1032E,
    DefinitionIdE };
  LinearTolerance_1014_TypeChoicePair();
  LinearTolerance_1014_TypeChoicePair(
    whichOne LinearTolerance_1014_TypeTypeIn,
    LinearTolerance_1014_TypeVal * LinearTolerance_1014_TypeValueIn);
  ~LinearTolerance_1014_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearTolerance_1014_TypeType;
  LinearTolerance_1014_TypeVal * LinearTolerance_1014_TypeValue;
};

/* ***************************************************************** */

class MassToleranceTy_1015_Type :
  public XmlTypeBase
{
public:
  MassToleranceTy_1015_Type();
  MassToleranceTy_1015_Type(
    MassToleranceTy_1015_TypeChoicePair * MassToleranceTy_1015_TypePairIn);
  ~MassToleranceTy_1015_Type();
  void printSelf(FILE * outFile);

  MassToleranceTy_1015_TypeChoicePair * getMassToleranceTy_1015_TypePair();
  void setMassToleranceTy_1015_TypePair(MassToleranceTy_1015_TypeChoicePair * MassToleranceTy_1015_TypePairIn);

protected:
  MassToleranceTy_1015_TypeChoicePair * MassToleranceTy_1015_TypePair;
};

/* ***************************************************************** */

union MassToleranceTy_1015_TypeVal
{
  MassToleranceTy_1033_Type * MassToleranceTy_1033;
  MassValueType * MinValue;
};

/* ***************************************************************** */

class MassToleranceTy_1015_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MassToleranceTy_1033E,
    MinValueE };
  MassToleranceTy_1015_TypeChoicePair();
  MassToleranceTy_1015_TypeChoicePair(
    whichOne MassToleranceTy_1015_TypeTypeIn,
    MassToleranceTy_1015_TypeVal * MassToleranceTy_1015_TypeValueIn);
  ~MassToleranceTy_1015_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MassToleranceTy_1015_TypeType;
  MassToleranceTy_1015_TypeVal * MassToleranceTy_1015_TypeValue;
};

/* ***************************************************************** */

class MaterialType_1016_Type :
  public XmlTypeBase
{
public:
  MaterialType_1016_Type();
  MaterialType_1016_Type(
    MaterialType_1016_TypeChoicePair * MaterialType_1016_TypePairIn);
  ~MaterialType_1016_Type();
  void printSelf(FILE * outFile);

  MaterialType_1016_TypeChoicePair * getMaterialType_1016_TypePair();
  void setMaterialType_1016_TypePair(MaterialType_1016_TypeChoicePair * MaterialType_1016_TypePairIn);

protected:
  MaterialType_1016_TypeChoicePair * MaterialType_1016_TypePair;
};

/* ***************************************************************** */

union MaterialType_1016_TypeVal
{
  MaterialClassEnumType * MaterialClassEnum;
  XmlString * OtherMaterialClass;
};

/* ***************************************************************** */

class MaterialType_1016_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaterialClassEnumE,
    OtherMaterialClassE };
  MaterialType_1016_TypeChoicePair();
  MaterialType_1016_TypeChoicePair(
    whichOne MaterialType_1016_TypeTypeIn,
    MaterialType_1016_TypeVal * MaterialType_1016_TypeValueIn);
  ~MaterialType_1016_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MaterialType_1016_TypeType;
  MaterialType_1016_TypeVal * MaterialType_1016_TypeValue;
};

/* ***************************************************************** */

class PressureToleran_1017_Type :
  public XmlTypeBase
{
public:
  PressureToleran_1017_Type();
  PressureToleran_1017_Type(
    PressureToleran_1017_TypeChoicePair * PressureToleran_1017_TypePairIn);
  ~PressureToleran_1017_Type();
  void printSelf(FILE * outFile);

  PressureToleran_1017_TypeChoicePair * getPressureToleran_1017_TypePair();
  void setPressureToleran_1017_TypePair(PressureToleran_1017_TypeChoicePair * PressureToleran_1017_TypePairIn);

protected:
  PressureToleran_1017_TypeChoicePair * PressureToleran_1017_TypePair;
};

/* ***************************************************************** */

union PressureToleran_1017_TypeVal
{
  PressureToleran_1034_Type * PressureToleran_1034;
  PressureValueType * MinValue;
};

/* ***************************************************************** */

class PressureToleran_1017_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PressureToleran_1034E,
    MinValueE };
  PressureToleran_1017_TypeChoicePair();
  PressureToleran_1017_TypeChoicePair(
    whichOne PressureToleran_1017_TypeTypeIn,
    PressureToleran_1017_TypeVal * PressureToleran_1017_TypeValueIn);
  ~PressureToleran_1017_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PressureToleran_1017_TypeType;
  PressureToleran_1017_TypeVal * PressureToleran_1017_TypeValue;
};

/* ***************************************************************** */

class SequencedDatumT_1018_Type :
  public XmlTypeBase
{
public:
  SequencedDatumT_1018_Type();
  SequencedDatumT_1018_Type(
    SequencedDatumT_1018_TypeChoicePair * SequencedDatumT_1018_TypePairIn);
  ~SequencedDatumT_1018_Type();
  void printSelf(FILE * outFile);

  SequencedDatumT_1018_TypeChoicePair * getSequencedDatumT_1018_TypePair();
  void setSequencedDatumT_1018_TypePair(SequencedDatumT_1018_TypeChoicePair * SequencedDatumT_1018_TypePairIn);

protected:
  SequencedDatumT_1018_TypeChoicePair * SequencedDatumT_1018_TypePair;
};

/* ***************************************************************** */

union SequencedDatumT_1018_TypeVal
{
  DatumType * SimpleDatum;
  CompoundDatumType * CompoundDatum;
};

/* ***************************************************************** */

class SequencedDatumT_1018_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SimpleDatumE,
    CompoundDatumE };
  SequencedDatumT_1018_TypeChoicePair();
  SequencedDatumT_1018_TypeChoicePair(
    whichOne SequencedDatumT_1018_TypeTypeIn,
    SequencedDatumT_1018_TypeVal * SequencedDatumT_1018_TypeValueIn);
  ~SequencedDatumT_1018_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SequencedDatumT_1018_TypeType;
  SequencedDatumT_1018_TypeVal * SequencedDatumT_1018_TypeValue;
};

/* ***************************************************************** */

class SpeedToleranceT_1019_Type :
  public XmlTypeBase
{
public:
  SpeedToleranceT_1019_Type();
  SpeedToleranceT_1019_Type(
    SpeedToleranceT_1019_TypeChoicePair * SpeedToleranceT_1019_TypePairIn);
  ~SpeedToleranceT_1019_Type();
  void printSelf(FILE * outFile);

  SpeedToleranceT_1019_TypeChoicePair * getSpeedToleranceT_1019_TypePair();
  void setSpeedToleranceT_1019_TypePair(SpeedToleranceT_1019_TypeChoicePair * SpeedToleranceT_1019_TypePairIn);

protected:
  SpeedToleranceT_1019_TypeChoicePair * SpeedToleranceT_1019_TypePair;
};

/* ***************************************************************** */

union SpeedToleranceT_1019_TypeVal
{
  SpeedToleranceT_1035_Type * SpeedToleranceT_1035;
  SpeedValueType * MinValue;
};

/* ***************************************************************** */

class SpeedToleranceT_1019_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SpeedToleranceT_1035E,
    MinValueE };
  SpeedToleranceT_1019_TypeChoicePair();
  SpeedToleranceT_1019_TypeChoicePair(
    whichOne SpeedToleranceT_1019_TypeTypeIn,
    SpeedToleranceT_1019_TypeVal * SpeedToleranceT_1019_TypeValueIn);
  ~SpeedToleranceT_1019_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SpeedToleranceT_1019_TypeType;
  SpeedToleranceT_1019_TypeVal * SpeedToleranceT_1019_TypeValue;
};

/* ***************************************************************** */

class SubstituteFeatu_1020_Type :
  public XmlTypeBase
{
public:
  SubstituteFeatu_1020_Type();
  SubstituteFeatu_1020_Type(
    SubstituteFeatu_1020_TypeChoicePair * SubstituteFeatu_1020_TypePairIn);
  ~SubstituteFeatu_1020_Type();
  void printSelf(FILE * outFile);

  SubstituteFeatu_1020_TypeChoicePair * getSubstituteFeatu_1020_TypePair();
  void setSubstituteFeatu_1020_TypePair(SubstituteFeatu_1020_TypeChoicePair * SubstituteFeatu_1020_TypePairIn);

protected:
  SubstituteFeatu_1020_TypeChoicePair * SubstituteFeatu_1020_TypePair;
};

/* ***************************************************************** */

union SubstituteFeatu_1020_TypeVal
{
  SubstituteFeatureAlgorithmEnumType * SubstituteFeatureAlgorithmEnum;
  QIFReferenceType * SubstituteFeatureAlgorithmId;
  XmlString * OtherSubstituteFeatureAlgorithm;
};

/* ***************************************************************** */

class SubstituteFeatu_1020_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SubstituteFeatureAlgorithmEnumE,
    SubstituteFeatureAlgorithmIdE,
    OtherSubstituteFeatureAlgorithmE };
  SubstituteFeatu_1020_TypeChoicePair();
  SubstituteFeatu_1020_TypeChoicePair(
    whichOne SubstituteFeatu_1020_TypeTypeIn,
    SubstituteFeatu_1020_TypeVal * SubstituteFeatu_1020_TypeValueIn);
  ~SubstituteFeatu_1020_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SubstituteFeatu_1020_TypeType;
  SubstituteFeatu_1020_TypeVal * SubstituteFeatu_1020_TypeValue;
};

/* ***************************************************************** */

class TemperatureTole_1021_Type :
  public XmlTypeBase
{
public:
  TemperatureTole_1021_Type();
  TemperatureTole_1021_Type(
    TemperatureTole_1021_TypeChoicePair * TemperatureTole_1021_TypePairIn);
  ~TemperatureTole_1021_Type();
  void printSelf(FILE * outFile);

  TemperatureTole_1021_TypeChoicePair * getTemperatureTole_1021_TypePair();
  void setTemperatureTole_1021_TypePair(TemperatureTole_1021_TypeChoicePair * TemperatureTole_1021_TypePairIn);

protected:
  TemperatureTole_1021_TypeChoicePair * TemperatureTole_1021_TypePair;
};

/* ***************************************************************** */

union TemperatureTole_1021_TypeVal
{
  TemperatureTole_1036_Type * TemperatureTole_1036;
  TemperatureValueType * MinValue;
};

/* ***************************************************************** */

class TemperatureTole_1021_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TemperatureTole_1036E,
    MinValueE };
  TemperatureTole_1021_TypeChoicePair();
  TemperatureTole_1021_TypeChoicePair(
    whichOne TemperatureTole_1021_TypeTypeIn,
    TemperatureTole_1021_TypeVal * TemperatureTole_1021_TypeValueIn);
  ~TemperatureTole_1021_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TemperatureTole_1021_TypeType;
  TemperatureTole_1021_TypeVal * TemperatureTole_1021_TypeValue;
};

/* ***************************************************************** */

class TimeToleranceTy_1022_Type :
  public XmlTypeBase
{
public:
  TimeToleranceTy_1022_Type();
  TimeToleranceTy_1022_Type(
    TimeToleranceTy_1022_TypeChoicePair * TimeToleranceTy_1022_TypePairIn);
  ~TimeToleranceTy_1022_Type();
  void printSelf(FILE * outFile);

  TimeToleranceTy_1022_TypeChoicePair * getTimeToleranceTy_1022_TypePair();
  void setTimeToleranceTy_1022_TypePair(TimeToleranceTy_1022_TypeChoicePair * TimeToleranceTy_1022_TypePairIn);

protected:
  TimeToleranceTy_1022_TypeChoicePair * TimeToleranceTy_1022_TypePair;
};

/* ***************************************************************** */

union TimeToleranceTy_1022_TypeVal
{
  TimeToleranceTy_1037_Type * TimeToleranceTy_1037;
  TimeValueType * MinValue;
};

/* ***************************************************************** */

class TimeToleranceTy_1022_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TimeToleranceTy_1037E,
    MinValueE };
  TimeToleranceTy_1022_TypeChoicePair();
  TimeToleranceTy_1022_TypeChoicePair(
    whichOne TimeToleranceTy_1022_TypeTypeIn,
    TimeToleranceTy_1022_TypeVal * TimeToleranceTy_1022_TypeValueIn);
  ~TimeToleranceTy_1022_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TimeToleranceTy_1022_TypeType;
  TimeToleranceTy_1022_TypeVal * TimeToleranceTy_1022_TypeValue;
};

/* ***************************************************************** */

class ToleranceZonePe_1023_Type :
  public XmlTypeBase
{
public:
  ToleranceZonePe_1023_Type();
  ToleranceZonePe_1023_Type(
    ToleranceZonePe_1023_TypeChoicePair * ToleranceZonePe_1023_TypePairIn);
  ~ToleranceZonePe_1023_Type();
  void printSelf(FILE * outFile);

  ToleranceZonePe_1023_TypeChoicePair * getToleranceZonePe_1023_TypePair();
  void setToleranceZonePe_1023_TypePair(ToleranceZonePe_1023_TypeChoicePair * ToleranceZonePe_1023_TypePairIn);

protected:
  ToleranceZonePe_1023_TypeChoicePair * ToleranceZonePe_1023_TypePair;
};

/* ***************************************************************** */

union ToleranceZonePe_1023_TypeVal
{
  RectangularUnitAreaType * RectangularUnitArea;
  CircularUnitAreaType * CircularUnitArea;
};

/* ***************************************************************** */

class ToleranceZonePe_1023_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    RectangularUnitAreaE,
    CircularUnitAreaE };
  ToleranceZonePe_1023_TypeChoicePair();
  ToleranceZonePe_1023_TypeChoicePair(
    whichOne ToleranceZonePe_1023_TypeTypeIn,
    ToleranceZonePe_1023_TypeVal * ToleranceZonePe_1023_TypeValueIn);
  ~ToleranceZonePe_1023_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToleranceZonePe_1023_TypeType;
  ToleranceZonePe_1023_TypeVal * ToleranceZonePe_1023_TypeValue;
};

/* ***************************************************************** */

class AlgorithmType_1_1024_Type :
  public XmlTypeBase
{
public:
  AlgorithmType_1_1024_Type();
  AlgorithmType_1_1024_Type(
    QIFReferenceType * SoftwareIdIn,
    XmlString * ParametersIn);
  ~AlgorithmType_1_1024_Type();
  void printSelf(FILE * outFile);

  QIFReferenceType * getSoftwareId();
  void setSoftwareId(QIFReferenceType * SoftwareIdIn);
  XmlString * getParameters();
  void setParameters(XmlString * ParametersIn);

protected:
  QIFReferenceType * SoftwareId;
  XmlString * Parameters;
};

/* ***************************************************************** */

class AlgorithmType_1_1025_Type :
  public XmlTypeBase
{
public:
  AlgorithmType_1_1025_Type();
  AlgorithmType_1_1025_Type(
    QIFReferenceType * StandardIdIn,
    XmlString * SectionIn);
  ~AlgorithmType_1_1025_Type();
  void printSelf(FILE * outFile);

  QIFReferenceType * getStandardId();
  void setStandardId(QIFReferenceType * StandardIdIn);
  XmlString * getSection();
  void setSection(XmlString * SectionIn);

protected:
  QIFReferenceType * StandardId;
  XmlString * Section;
};

/* ***************************************************************** */

class AngularToleranc_1026_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1026_Type();
  AngularToleranc_1026_Type(
    AngularValueType * MaxValueIn,
    AngularValueType * MinValueIn);
  ~AngularToleranc_1026_Type();
  void printSelf(FILE * outFile);

  AngularValueType * getMaxValue();
  void setMaxValue(AngularValueType * MaxValueIn);
  AngularValueType * getMinValue();
  void setMinValue(AngularValueType * MinValueIn);

protected:
  AngularValueType * MaxValue;
  AngularValueType * MinValue;
};

/* ***************************************************************** */

class AngularToleranc_1027_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1027_Type();
  AngularToleranc_1027_Type(
    AngularValueType * MaxValueIn,
    AngularValueType * MinValueIn);
  ~AngularToleranc_1027_Type();
  void printSelf(FILE * outFile);

  AngularValueType * getMaxValue();
  void setMaxValue(AngularValueType * MaxValueIn);
  AngularValueType * getMinValue();
  void setMinValue(AngularValueType * MinValueIn);

protected:
  AngularValueType * MaxValue;
  AngularValueType * MinValue;
};

/* ***************************************************************** */

class AreaToleranceTy_1028_Type :
  public XmlTypeBase
{
public:
  AreaToleranceTy_1028_Type();
  AreaToleranceTy_1028_Type(
    AreaValueType * MaxValueIn,
    AreaValueType * MinValueIn);
  ~AreaToleranceTy_1028_Type();
  void printSelf(FILE * outFile);

  AreaValueType * getMaxValue();
  void setMaxValue(AreaValueType * MaxValueIn);
  AreaValueType * getMinValue();
  void setMinValue(AreaValueType * MinValueIn);

protected:
  AreaValueType * MaxValue;
  AreaValueType * MinValue;
};

/* ***************************************************************** */

class ForceToleranceT_1029_Type :
  public XmlTypeBase
{
public:
  ForceToleranceT_1029_Type();
  ForceToleranceT_1029_Type(
    ForceValueType * MaxValueIn,
    ForceValueType * MinValueIn);
  ~ForceToleranceT_1029_Type();
  void printSelf(FILE * outFile);

  ForceValueType * getMaxValue();
  void setMaxValue(ForceValueType * MaxValueIn);
  ForceValueType * getMinValue();
  void setMinValue(ForceValueType * MinValueIn);

protected:
  ForceValueType * MaxValue;
  ForceValueType * MinValue;
};

/* ***************************************************************** */

class LinearTolerance_1030_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1030_Type();
  LinearTolerance_1030_Type(
    LinearValueType * MaxValueIn,
    LinearValueType * MinValueIn);
  ~LinearTolerance_1030_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMaxValue();
  void setMaxValue(LinearValueType * MaxValueIn);
  LinearValueType * getMinValue();
  void setMinValue(LinearValueType * MinValueIn);

protected:
  LinearValueType * MaxValue;
  LinearValueType * MinValue;
};

/* ***************************************************************** */

class LinearTolerance_1031_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1031_Type();
  LinearTolerance_1031_Type(
    LinearValueType * MaxValueIn,
    LinearDualValueType * MaxDualValueIn,
    LinearTolerance_1038_Type * LinearTolerance_1038In);
  ~LinearTolerance_1031_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMaxValue();
  void setMaxValue(LinearValueType * MaxValueIn);
  LinearDualValueType * getMaxDualValue();
  void setMaxDualValue(LinearDualValueType * MaxDualValueIn);
  LinearTolerance_1038_Type * getLinearTolerance_1038();
  void setLinearTolerance_1038(LinearTolerance_1038_Type * LinearTolerance_1038In);

protected:
  LinearValueType * MaxValue;
  LinearDualValueType * MaxDualValue;
  LinearTolerance_1038_Type * LinearTolerance_1038;
};

/* ***************************************************************** */

class LinearTolerance_1032_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1032_Type();
  LinearTolerance_1032_Type(
    LinearValueType * MinValueIn,
    LinearDualValueType * MinDualValueIn);
  ~LinearTolerance_1032_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMinValue();
  void setMinValue(LinearValueType * MinValueIn);
  LinearDualValueType * getMinDualValue();
  void setMinDualValue(LinearDualValueType * MinDualValueIn);

protected:
  LinearValueType * MinValue;
  LinearDualValueType * MinDualValue;
};

/* ***************************************************************** */

class MassToleranceTy_1033_Type :
  public XmlTypeBase
{
public:
  MassToleranceTy_1033_Type();
  MassToleranceTy_1033_Type(
    MassValueType * MaxValueIn,
    MassValueType * MinValueIn);
  ~MassToleranceTy_1033_Type();
  void printSelf(FILE * outFile);

  MassValueType * getMaxValue();
  void setMaxValue(MassValueType * MaxValueIn);
  MassValueType * getMinValue();
  void setMinValue(MassValueType * MinValueIn);

protected:
  MassValueType * MaxValue;
  MassValueType * MinValue;
};

/* ***************************************************************** */

class PressureToleran_1034_Type :
  public XmlTypeBase
{
public:
  PressureToleran_1034_Type();
  PressureToleran_1034_Type(
    PressureValueType * MaxValueIn,
    PressureValueType * MinValueIn);
  ~PressureToleran_1034_Type();
  void printSelf(FILE * outFile);

  PressureValueType * getMaxValue();
  void setMaxValue(PressureValueType * MaxValueIn);
  PressureValueType * getMinValue();
  void setMinValue(PressureValueType * MinValueIn);

protected:
  PressureValueType * MaxValue;
  PressureValueType * MinValue;
};

/* ***************************************************************** */

class SpeedToleranceT_1035_Type :
  public XmlTypeBase
{
public:
  SpeedToleranceT_1035_Type();
  SpeedToleranceT_1035_Type(
    SpeedValueType * MaxValueIn,
    SpeedValueType * MinValueIn);
  ~SpeedToleranceT_1035_Type();
  void printSelf(FILE * outFile);

  SpeedValueType * getMaxValue();
  void setMaxValue(SpeedValueType * MaxValueIn);
  SpeedValueType * getMinValue();
  void setMinValue(SpeedValueType * MinValueIn);

protected:
  SpeedValueType * MaxValue;
  SpeedValueType * MinValue;
};

/* ***************************************************************** */

class TemperatureTole_1036_Type :
  public XmlTypeBase
{
public:
  TemperatureTole_1036_Type();
  TemperatureTole_1036_Type(
    TemperatureValueType * MaxValueIn,
    TemperatureValueType * MinValueIn);
  ~TemperatureTole_1036_Type();
  void printSelf(FILE * outFile);

  TemperatureValueType * getMaxValue();
  void setMaxValue(TemperatureValueType * MaxValueIn);
  TemperatureValueType * getMinValue();
  void setMinValue(TemperatureValueType * MinValueIn);

protected:
  TemperatureValueType * MaxValue;
  TemperatureValueType * MinValue;
};

/* ***************************************************************** */

class TimeToleranceTy_1037_Type :
  public XmlTypeBase
{
public:
  TimeToleranceTy_1037_Type();
  TimeToleranceTy_1037_Type(
    TimeValueType * MaxValueIn,
    TimeValueType * MinValueIn);
  ~TimeToleranceTy_1037_Type();
  void printSelf(FILE * outFile);

  TimeValueType * getMaxValue();
  void setMaxValue(TimeValueType * MaxValueIn);
  TimeValueType * getMinValue();
  void setMinValue(TimeValueType * MinValueIn);

protected:
  TimeValueType * MaxValue;
  TimeValueType * MinValue;
};

/* ***************************************************************** */

class LinearTolerance_1038_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1038_Type();
  LinearTolerance_1038_Type(
    LinearValueType * MinValueIn,
    LinearDualValueType * MinDualValueIn);
  ~LinearTolerance_1038_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMinValue();
  void setMinValue(LinearValueType * MinValueIn);
  LinearDualValueType * getMinDualValue();
  void setMinDualValue(LinearDualValueType * MinDualValueIn);

protected:
  LinearValueType * MinValue;
  LinearDualValueType * MinDualValue;
};

/* ***************************************************************** */

class CustomerOrganizationType :
  public OrganizationType
{
public:
  CustomerOrganizationType();
  CustomerOrganizationType(
    XmlToken * NameIn,
    PhysicalAddressType * AddressIn,
    AttributesType * AttributesIn,
    XmlToken * CustomerNumberIn);
  ~CustomerOrganizationType();
  void printSelf(FILE * outFile);

  XmlToken * getCustomerNumber();
  void setCustomerNumber(XmlToken * CustomerNumberIn);

protected:
  XmlToken * CustomerNumber;
};

/* ***************************************************************** */

class DefiningPointMeasurementType :
  public MeasuredPointWithNormalBaseType
{
public:
  DefiningPointMeasurementType();
  DefiningPointMeasurementType(
    MeasuredPointType * PointIn,
    MeasuredUnitVectorType * NormalIn,
    NaturalType * SequenceNumberIn);
  DefiningPointMeasurementType(
    QIFIdType * idIn,
    MeasuredPointType * PointIn,
    MeasuredUnitVectorType * NormalIn,
    NaturalType * SequenceNumberIn);
  ~DefiningPointMeasurementType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  NaturalType * SequenceNumber;
};

/* ***************************************************************** */

class DefiningPointMeasurementTypeLisd :
  public std::list<DefiningPointMeasurementType *>,
  public XmlSchemaInstanceBase
{
public:
  DefiningPointMeasurementTypeLisd();
  DefiningPointMeasurementTypeLisd(
    DefiningPointMeasurementType * aDefiningPointMeasurementType);
  ~DefiningPointMeasurementTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class DefiningPointNominalType :
  public PointWithNormalBaseType
{
public:
  DefiningPointNominalType();
  DefiningPointNominalType(
    PointType * PointIn,
    UnitVectorType * NormalIn,
    NaturalType * SequenceNumberIn);
  DefiningPointNominalType(
    QIFIdType * idIn,
    PointType * PointIn,
    UnitVectorType * NormalIn,
    NaturalType * SequenceNumberIn);
  ~DefiningPointNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  NaturalType * SequenceNumber;
};

/* ***************************************************************** */

class DefiningPointNominalTypeLisd :
  public std::list<DefiningPointNominalType *>,
  public XmlSchemaInstanceBase
{
public:
  DefiningPointNominalTypeLisd();
  DefiningPointNominalTypeLisd(
    DefiningPointNominalType * aDefiningPointNominalType);
  ~DefiningPointNominalTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MeasurePointNominalType :
  public PointWithNormalBaseType
{
public:
  MeasurePointNominalType();
  MeasurePointNominalType(
    PointType * PointIn,
    UnitVectorType * NormalIn,
    QIFReferenceType * MeasurementDeviceIdIn,
    QIFReferenceType * SensorIdIn,
    QIFReferenceType * TipIdIn);
  MeasurePointNominalType(
    QIFIdType * idIn,
    PointType * PointIn,
    UnitVectorType * NormalIn,
    QIFReferenceType * MeasurementDeviceIdIn,
    QIFReferenceType * SensorIdIn,
    QIFReferenceType * TipIdIn);
  ~MeasurePointNominalType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFReferenceType * getMeasurementDeviceId();
  void setMeasurementDeviceId(QIFReferenceType * MeasurementDeviceIdIn);
  QIFReferenceType * getSensorId();
  void setSensorId(QIFReferenceType * SensorIdIn);
  QIFReferenceType * getTipId();
  void setTipId(QIFReferenceType * TipIdIn);

protected:
  QIFReferenceType * MeasurementDeviceId;
  QIFReferenceType * SensorId;
  QIFReferenceType * TipId;
};

/* ***************************************************************** */

class MeasurePointNominalTypeLisd :
  public std::list<MeasurePointNominalType *>,
  public XmlSchemaInstanceBase
{
public:
  MeasurePointNominalTypeLisd();
  MeasurePointNominalTypeLisd(
    MeasurePointNominalType * aMeasurePointNominalType);
  ~MeasurePointNominalTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class MultiLeadThreadSpecificationType :
  public ThreadSpecificationDetailedBaseType
{
public:
  MultiLeadThreadSpecificationType();
  MultiLeadThreadSpecificationType(
    LinearValueType * DiameterIn,
    ThreadSeriesType * ThreadSeriesIn,
    ThreadClassType * ThreadToleranceClassIn,
    ThreadClassType * CrestDiameterToleranceClassIn,
    XmlBoolean * LeftHandedIn,
    XmlBoolean * ModifiedThreadIn,
    LinearValueType * ThreadLengthEngagementIn,
    AttributesType * AttributesIn,
    LinearValueType * ThreadPitchIn,
    LinearValueType * ThreadLeadDistanceIn,
    NaturalType * ThreadLeadStartsIn);
  MultiLeadThreadSpecificationType(
    QIFIdType * idIn,
    LinearValueType * DiameterIn,
    ThreadSeriesType * ThreadSeriesIn,
    ThreadClassType * ThreadToleranceClassIn,
    ThreadClassType * CrestDiameterToleranceClassIn,
    XmlBoolean * LeftHandedIn,
    XmlBoolean * ModifiedThreadIn,
    LinearValueType * ThreadLengthEngagementIn,
    AttributesType * AttributesIn,
    LinearValueType * ThreadPitchIn,
    LinearValueType * ThreadLeadDistanceIn,
    NaturalType * ThreadLeadStartsIn);
  ~MultiLeadThreadSpecificationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  LinearValueType * getThreadPitch();
  void setThreadPitch(LinearValueType * ThreadPitchIn);
  LinearValueType * getThreadLeadDistance();
  void setThreadLeadDistance(LinearValueType * ThreadLeadDistanceIn);
  NaturalType * getThreadLeadStarts();
  void setThreadLeadStarts(NaturalType * ThreadLeadStartsIn);

protected:
  LinearValueType * ThreadPitch;
  LinearValueType * ThreadLeadDistance;
  NaturalType * ThreadLeadStarts;
};

/* ***************************************************************** */

class SingleLeadThreadSpecificationType :
  public ThreadSpecificationDetailedBaseType
{
public:
  SingleLeadThreadSpecificationType();
  SingleLeadThreadSpecificationType(
    LinearValueType * DiameterIn,
    ThreadSeriesType * ThreadSeriesIn,
    ThreadClassType * ThreadToleranceClassIn,
    ThreadClassType * CrestDiameterToleranceClassIn,
    XmlBoolean * LeftHandedIn,
    XmlBoolean * ModifiedThreadIn,
    LinearValueType * ThreadLengthEngagementIn,
    AttributesType * AttributesIn,
    SpecifiedDecimalType * ThreadDensityIn);
  SingleLeadThreadSpecificationType(
    QIFIdType * idIn,
    LinearValueType * DiameterIn,
    ThreadSeriesType * ThreadSeriesIn,
    ThreadClassType * ThreadToleranceClassIn,
    ThreadClassType * CrestDiameterToleranceClassIn,
    XmlBoolean * LeftHandedIn,
    XmlBoolean * ModifiedThreadIn,
    LinearValueType * ThreadLengthEngagementIn,
    AttributesType * AttributesIn,
    SpecifiedDecimalType * ThreadDensityIn);
  ~SingleLeadThreadSpecificationType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  SpecifiedDecimalType * getThreadDensity();
  void setThreadDensity(SpecifiedDecimalType * ThreadDensityIn);

protected:
  SpecifiedDecimalType * ThreadDensity;
};

/* ***************************************************************** */

#endif // INTERMEDIATESPMI_HH
