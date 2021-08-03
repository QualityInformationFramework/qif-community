/*********************************************************************/

#ifndef INTERMEDIATESPMI_HH
#define INTERMEDIATESPMI_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "PrimitivesPMIClasses.hh"

/*********************************************************************/

class AddressDescriptionEnumType;
class AddressDescriptionType;
class AddressDescriptionTypeChoicePair;
class AlgorithmType;
class AlgorithmTypeLisd;
class AlgorithmsType;
class AlignmentFeatureType;
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
class AlgorithmType_1007_Type;
class AlgorithmType_1007_TypeChoicePair;
class AlignmentFeatur_1008_Type;
class AlignmentFeatur_1008_TypeChoicePair;
class AngularToleranc_1009_Type;
class AngularToleranc_1009_TypeChoicePair;
class AngularToleranc_1010_Type;
class AngularToleranc_1010_TypeChoicePair;
class AreaToleranceTy_1011_Type;
class AreaToleranceTy_1011_TypeChoicePair;
class DatumWithPreced_1012_Type;
class DatumWithPreced_1012_TypeChoicePair;
class DegreesOfFreedo_1013_Type;
class DegreesOfFreedo_1013_TypeChoicePair;
class DirectionalOffs_1014_Type;
class DirectionalOffs_1014_TypeChoicePair;
class ForceToleranceT_1015_Type;
class ForceToleranceT_1015_TypeChoicePair;
class LinearTolerance_1016_Type;
class LinearTolerance_1016_TypeChoicePair;
class LinearTolerance_1017_Type;
class LinearTolerance_1017_TypeChoicePair;
class MassToleranceTy_1018_Type;
class MassToleranceTy_1018_TypeChoicePair;
class MaterialType_1019_Type;
class MaterialType_1019_TypeChoicePair;
class PressureToleran_1020_Type;
class PressureToleran_1020_TypeChoicePair;
class SequencedDatumT_1021_Type;
class SequencedDatumT_1021_TypeChoicePair;
class SpeedToleranceT_1022_Type;
class SpeedToleranceT_1022_TypeChoicePair;
class SubstituteFeatu_1023_Type;
class SubstituteFeatu_1023_TypeChoicePair;
class TemperatureTole_1024_Type;
class TemperatureTole_1024_TypeChoicePair;
class TimeToleranceTy_1025_Type;
class TimeToleranceTy_1025_TypeChoicePair;
class ToleranceZonePe_1026_Type;
class ToleranceZonePe_1026_TypeChoicePair;
class AlgorithmType_1_1027_Type;
class AlgorithmType_1_1028_Type;
class AngularToleranc_1029_Type;
class AngularToleranc_1030_Type;
class AreaToleranceTy_1031_Type;
class ForceToleranceT_1032_Type;
class LinearTolerance_1033_Type;
class LinearTolerance_1034_Type;
class LinearTolerance_1035_Type;
class MassToleranceTy_1036_Type;
class PressureToleran_1037_Type;
class SpeedToleranceT_1038_Type;
class TemperatureTole_1039_Type;
class TimeToleranceTy_1040_Type;
class LinearTolerance_1041_Type;

/*********************************************************************/
/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

union AddressDescriptionTypeVal
{
  AddressDescriptionEnumType * AddressDescriptionEnum;
  XmlString * OtherAddressDescription;
};

/*********************************************************************/

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
    AddressDescriptionTypeVal AddressDescriptionTypeValueIn);
  ~AddressDescriptionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AddressDescriptionTypeType;
  AddressDescriptionTypeVal AddressDescriptionTypeValue;
};

/*********************************************************************/

class AlgorithmType :
  public XmlTypeBase
{
public:
  AlgorithmType();
  AlgorithmType(
    AttributesType * AttributesIn,
    AlgorithmType_1007_Type * AlgorithmType_1007In,
    XmlString * NameIn,
    XmlString * DescriptionIn);
  AlgorithmType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    AlgorithmType_1007_Type * AlgorithmType_1007In,
    XmlString * NameIn,
    XmlString * DescriptionIn);
  ~AlgorithmType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  AlgorithmType_1007_Type * getAlgorithmType_1007();
  void setAlgorithmType_1007(AlgorithmType_1007_Type * AlgorithmType_1007In);
  XmlString * getName();
  void setName(XmlString * NameIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  AlgorithmType_1007_Type * AlgorithmType_1007;
  XmlString * Name;
  XmlString * Description;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class AlignmentFeatureType :
  public XmlTypeBase
{
public:
  AlignmentFeatureType();
  AlignmentFeatureType(
    AlignmentFeatur_1008_Type * AlignmentFeatur_1008In);
  ~AlignmentFeatureType();
  void printSelf(FILE * outFile);

  AlignmentFeatur_1008_Type * getAlignmentFeatur_1008();
  void setAlignmentFeatur_1008(AlignmentFeatur_1008_Type * AlignmentFeatur_1008In);

protected:
  AlignmentFeatur_1008_Type * AlignmentFeatur_1008;
};

/*********************************************************************/

class AlignmentOperationBaseType :
  public XmlTypeBase
{
public:
  AlignmentOperationBaseType();
  AlignmentOperationBaseType(
    NaturalType * SequenceNumberIn,
    AttributesType * AttributesIn);
  ~AlignmentOperationBaseType();
  void printSelf(FILE * outFile);

  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  NaturalType * SequenceNumber;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class AngularToleranceDefinitionType :
  public XmlTypeBase
{
public:
  AngularToleranceDefinitionType();
  AngularToleranceDefinitionType(
    AttributesType * AttributesIn,
    AngularToleranc_1009_Type * AngularToleranc_1009In);
  AngularToleranceDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    AngularToleranc_1009_Type * AngularToleranc_1009In);
  ~AngularToleranceDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  AngularToleranc_1009_Type * getAngularToleranc_1009();
  void setAngularToleranc_1009(AngularToleranc_1009_Type * AngularToleranc_1009In);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  AngularToleranc_1009_Type * AngularToleranc_1009;
};

/*********************************************************************/

class AngularToleranceType :
  public XmlTypeBase
{
public:
  AngularToleranceType();
  AngularToleranceType(
    AngularToleranc_1010_Type * AngularToleranc_1010In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~AngularToleranceType();
  void printSelf(FILE * outFile);

  AngularToleranc_1010_Type * getAngularToleranc_1010();
  void setAngularToleranc_1010(AngularToleranc_1010_Type * AngularToleranc_1010In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  AngularToleranc_1010_Type * AngularToleranc_1010;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

class AreaToleranceType :
  public XmlTypeBase
{
public:
  AreaToleranceType();
  AreaToleranceType(
    AreaToleranceTy_1011_Type * AreaToleranceTy_1011In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~AreaToleranceType();
  void printSelf(FILE * outFile);

  AreaToleranceTy_1011_Type * getAreaToleranceTy_1011();
  void setAreaToleranceTy_1011(AreaToleranceTy_1011_Type * AreaToleranceTy_1011In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  AreaToleranceTy_1011_Type * AreaToleranceTy_1011;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class DatumFeatureBaseType :
  public XmlTypeBase
{
public:
  DatumFeatureBaseType();
  DatumFeatureBaseType(
    QIFReferenceFullType * FeatureNominalIdIn);
  ~DatumFeatureBaseType();
  void printSelf(FILE * outFile);

  QIFReferenceFullType * getFeatureNominalId();
  void setFeatureNominalId(QIFReferenceFullType * FeatureNominalIdIn);

protected:
  QIFReferenceFullType * FeatureNominalId;
};

/*********************************************************************/

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

/*********************************************************************/

union DatumFeatureSimulatorModifierTypeVal
{
  LinearValueType * LinearSize;
  LinearValueType * DiametricalSize;
  XmlToken * BasicSize;
};

/*********************************************************************/

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
    DatumFeatureSimulatorModifierTypeVal DatumFeatureSimulatorModifierTypeValueIn);
  ~DatumFeatureSimulatorModifierTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DatumFeatureSimulatorModifierTypeType;
  DatumFeatureSimulatorModifierTypeVal DatumFeatureSimulatorModifierTypeValue;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class DatumWithPrecedenceType :
  public XmlTypeBase
{
public:
  DatumWithPrecedenceType();
  DatumWithPrecedenceType(
    DatumWithPreced_1012_Type * DatumWithPreced_1012In,
    PrecedenceType * PrecedenceIn);
  ~DatumWithPrecedenceType();
  void printSelf(FILE * outFile);

  DatumWithPreced_1012_Type * getDatumWithPreced_1012();
  void setDatumWithPreced_1012(DatumWithPreced_1012_Type * DatumWithPreced_1012In);
  PrecedenceType * getPrecedence();
  void setPrecedence(PrecedenceType * PrecedenceIn);

protected:
  DatumWithPreced_1012_Type * DatumWithPreced_1012;
  PrecedenceType * Precedence;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class DegreesOfFreedomType :
  public XmlTypeBase
{
public:
  DegreesOfFreedomType();
  DegreesOfFreedomType(
    DegreesOfFreedo_1013_Type * DegreesOfFreedo_1013In);
  DegreesOfFreedomType(
    NaturalType * nIn,
    DegreesOfFreedo_1013_Type * DegreesOfFreedo_1013In);
  ~DegreesOfFreedomType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  DegreesOfFreedo_1013_Type * getDegreesOfFreedo_1013();
  void setDegreesOfFreedo_1013(DegreesOfFreedo_1013_Type * DegreesOfFreedo_1013In);

protected:
  NaturalType * n;
  DegreesOfFreedo_1013_Type * DegreesOfFreedo_1013;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class DirectionalOffsetType :
  public XmlTypeBase
{
public:
  DirectionalOffsetType();
  DirectionalOffsetType(
    LinearValueType * OffsetIn,
    DirectionalOffs_1014_Type * DirectionalOffs_1014In);
  ~DirectionalOffsetType();
  void printSelf(FILE * outFile);

  LinearValueType * getOffset();
  void setOffset(LinearValueType * OffsetIn);
  DirectionalOffs_1014_Type * getDirectionalOffs_1014();
  void setDirectionalOffs_1014(DirectionalOffs_1014_Type * DirectionalOffs_1014In);

protected:
  LinearValueType * Offset;
  DirectionalOffs_1014_Type * DirectionalOffs_1014;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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
  ~EventBaseType();
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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

union FileSpecTypeVal
{
  CommonFileSpecEnumType * CommonFileSpecEnum;
  XmlString * OtherFileSpec;
};

/*********************************************************************/

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
    FileSpecTypeVal FileSpecTypeValueIn);
  ~FileSpecTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne FileSpecTypeType;
  FileSpecTypeVal FileSpecTypeValue;
};

/*********************************************************************/

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

/*********************************************************************/

class ForceToleranceType :
  public XmlTypeBase
{
public:
  ForceToleranceType();
  ForceToleranceType(
    ForceToleranceT_1015_Type * ForceToleranceT_1015In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~ForceToleranceType();
  void printSelf(FILE * outFile);

  ForceToleranceT_1015_Type * getForceToleranceT_1015();
  void setForceToleranceT_1015(ForceToleranceT_1015_Type * ForceToleranceT_1015In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  ForceToleranceT_1015_Type * ForceToleranceT_1015;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

union InspectionStatusTypeVal
{
  InspectionStatusEnumType * InspectionStatusEnum;
  XmlString * OtherInspectionStatus;
};

/*********************************************************************/

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
    InspectionStatusTypeVal InspectionStatusTypeValueIn);
  ~InspectionStatusTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne InspectionStatusTypeType;
  InspectionStatusTypeVal InspectionStatusTypeValue;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class LinearToleranceDefinitionType :
  public XmlTypeBase
{
public:
  LinearToleranceDefinitionType();
  LinearToleranceDefinitionType(
    AttributesType * AttributesIn,
    LinearTolerance_1016_Type * LinearTolerance_1016In);
  LinearToleranceDefinitionType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    LinearTolerance_1016_Type * LinearTolerance_1016In);
  ~LinearToleranceDefinitionType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  LinearTolerance_1016_Type * getLinearTolerance_1016();
  void setLinearTolerance_1016(LinearTolerance_1016_Type * LinearTolerance_1016In);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  LinearTolerance_1016_Type * LinearTolerance_1016;
};

/*********************************************************************/

class LinearToleranceType :
  public XmlTypeBase
{
public:
  LinearToleranceType();
  LinearToleranceType(
    LinearTolerance_1017_Type * LinearTolerance_1017In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~LinearToleranceType();
  void printSelf(FILE * outFile);

  LinearTolerance_1017_Type * getLinearTolerance_1017();
  void setLinearTolerance_1017(LinearTolerance_1017_Type * LinearTolerance_1017In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  LinearTolerance_1017_Type * LinearTolerance_1017;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class MassToleranceType :
  public XmlTypeBase
{
public:
  MassToleranceType();
  MassToleranceType(
    MassToleranceTy_1018_Type * MassToleranceTy_1018In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~MassToleranceType();
  void printSelf(FILE * outFile);

  MassToleranceTy_1018_Type * getMassToleranceTy_1018();
  void setMassToleranceTy_1018(MassToleranceTy_1018_Type * MassToleranceTy_1018In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  MassToleranceTy_1018_Type * MassToleranceTy_1018;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class MaterialType :
  public XmlTypeBase
{
public:
  MaterialType();
  MaterialType(
    AttributesType * AttributesIn,
    MaterialType_1019_Type * MaterialType_1019In,
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
    MaterialType_1019_Type * MaterialType_1019In,
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
  MaterialType_1019_Type * getMaterialType_1019();
  void setMaterialType_1019(MaterialType_1019_Type * MaterialType_1019In);
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
  MaterialType_1019_Type * MaterialType_1019;
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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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
  ~MeasuredPointWithNormalBaseType();
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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

union MeasurementDirectiveTypeVal
{
  MeasurementDirectiveEnumType * MeasurementDirectiveEnum;
  XmlString * OtherMeasurementDirective;
};

/*********************************************************************/

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
    MeasurementDirectiveTypeVal MeasurementDirectiveTypeValueIn);
  ~MeasurementDirectiveTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MeasurementDirectiveTypeType;
  MeasurementDirectiveTypeVal MeasurementDirectiveTypeValue;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

protected:
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

protected:
};

/*********************************************************************/

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
  ~PointWithNormalBaseType();
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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

union PrecedenceTypeVal
{
  PrecedenceEnumType * PrecedenceEnum;
  XmlString * OtherPrecedence;
};

/*********************************************************************/

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
    PrecedenceTypeVal PrecedenceTypeValueIn);
  ~PrecedenceTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PrecedenceTypeType;
  PrecedenceTypeVal PrecedenceTypeValue;
};

/*********************************************************************/

class PressureToleranceType :
  public XmlTypeBase
{
public:
  PressureToleranceType();
  PressureToleranceType(
    PressureToleran_1020_Type * PressureToleran_1020In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~PressureToleranceType();
  void printSelf(FILE * outFile);

  PressureToleran_1020_Type * getPressureToleran_1020();
  void setPressureToleran_1020(PressureToleran_1020_Type * PressureToleran_1020In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  PressureToleran_1020_Type * PressureToleran_1020;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class SequencedDatumType :
  public XmlTypeBase
{
public:
  SequencedDatumType();
  SequencedDatumType(
    SequencedDatumT_1021_Type * SequencedDatumT_1021In,
    NaturalType * SequenceNumberIn);
  ~SequencedDatumType();
  void printSelf(FILE * outFile);

  SequencedDatumT_1021_Type * getSequencedDatumT_1021();
  void setSequencedDatumT_1021(SequencedDatumT_1021_Type * SequencedDatumT_1021In);
  NaturalType * getSequenceNumber();
  void setSequenceNumber(NaturalType * SequenceNumberIn);

protected:
  SequencedDatumT_1021_Type * SequencedDatumT_1021;
  NaturalType * SequenceNumber;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class SpeedToleranceType :
  public XmlTypeBase
{
public:
  SpeedToleranceType();
  SpeedToleranceType(
    SpeedToleranceT_1022_Type * SpeedToleranceT_1022In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~SpeedToleranceType();
  void printSelf(FILE * outFile);

  SpeedToleranceT_1022_Type * getSpeedToleranceT_1022();
  void setSpeedToleranceT_1022(SpeedToleranceT_1022_Type * SpeedToleranceT_1022In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  SpeedToleranceT_1022_Type * SpeedToleranceT_1022;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

union StandardsOrganizationTypeVal
{
  StandardsOrganizationEnumType * StandardsOrganizationEnum;
  XmlString * OtherStandardsOrganization;
};

/*********************************************************************/

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
    StandardsOrganizationTypeVal StandardsOrganizationTypeValueIn);
  ~StandardsOrganizationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne StandardsOrganizationTypeType;
  StandardsOrganizationTypeVal StandardsOrganizationTypeValue;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class SubstituteFeatureAlgorithmType :
  public XmlTypeBase
{
public:
  SubstituteFeatureAlgorithmType();
  SubstituteFeatureAlgorithmType(
    AttributesType * AttributesIn,
    SubstituteFeatu_1023_Type * SubstituteFeatu_1023In);
  ~SubstituteFeatureAlgorithmType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  SubstituteFeatu_1023_Type * getSubstituteFeatu_1023();
  void setSubstituteFeatu_1023(SubstituteFeatu_1023_Type * SubstituteFeatu_1023In);

protected:
  AttributesType * Attributes;
  SubstituteFeatu_1023_Type * SubstituteFeatu_1023;
};

/*********************************************************************/

class TemperatureToleranceType :
  public XmlTypeBase
{
public:
  TemperatureToleranceType();
  TemperatureToleranceType(
    TemperatureTole_1024_Type * TemperatureTole_1024In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~TemperatureToleranceType();
  void printSelf(FILE * outFile);

  TemperatureTole_1024_Type * getTemperatureTole_1024();
  void setTemperatureTole_1024(TemperatureTole_1024_Type * TemperatureTole_1024In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  TemperatureTole_1024_Type * TemperatureTole_1024;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

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
  ~ThreadSpecificationDetailedBaseType();
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

/*********************************************************************/

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

/*********************************************************************/

union ThreadSpecificationTypeVal
{
  SingleLeadThreadSpecificationType * SingleLeadSpecification;
  MultiLeadThreadSpecificationType * MultiLeadSpecification;
  TextThreadSpecificationType * TextThreadSpecification;
};

/*********************************************************************/

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
    ThreadSpecificationTypeVal ThreadSpecificationTypeValueIn);
  ~ThreadSpecificationTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ThreadSpecificationTypeType;
  ThreadSpecificationTypeVal ThreadSpecificationTypeValue;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class TimeToleranceType :
  public XmlTypeBase
{
public:
  TimeToleranceType();
  TimeToleranceType(
    TimeToleranceTy_1025_Type * TimeToleranceTy_1025In,
    XmlBoolean * DefinedAsLimitIn,
    AttributesType * AttributesIn);
  ~TimeToleranceType();
  void printSelf(FILE * outFile);

  TimeToleranceTy_1025_Type * getTimeToleranceTy_1025();
  void setTimeToleranceTy_1025(TimeToleranceTy_1025_Type * TimeToleranceTy_1025In);
  XmlBoolean * getDefinedAsLimit();
  void setDefinedAsLimit(XmlBoolean * DefinedAsLimitIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  TimeToleranceTy_1025_Type * TimeToleranceTy_1025;
  XmlBoolean * DefinedAsLimit;
  AttributesType * Attributes;
};

/*********************************************************************/

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

/*********************************************************************/

class ToleranceZonePerUnitAreaType :
  public XmlTypeBase
{
public:
  ToleranceZonePerUnitAreaType();
  ToleranceZonePerUnitAreaType(
    LinearValueType * ToleranceValuePerUnitIn,
    ToleranceZonePe_1026_Type * ToleranceZonePe_1026In);
  ~ToleranceZonePerUnitAreaType();
  void printSelf(FILE * outFile);

  LinearValueType * getToleranceValuePerUnit();
  void setToleranceValuePerUnit(LinearValueType * ToleranceValuePerUnitIn);
  ToleranceZonePe_1026_Type * getToleranceZonePe_1026();
  void setToleranceZonePe_1026(ToleranceZonePe_1026_Type * ToleranceZonePe_1026In);

protected:
  LinearValueType * ToleranceValuePerUnit;
  ToleranceZonePe_1026_Type * ToleranceZonePe_1026;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

class AlgorithmType_1007_Type :
  public XmlTypeBase
{
public:
  AlgorithmType_1007_Type();
  AlgorithmType_1007_Type(
    AlgorithmType_1007_TypeChoicePair * AlgorithmType_1007_TypePairIn);
  ~AlgorithmType_1007_Type();
  void printSelf(FILE * outFile);

  AlgorithmType_1007_TypeChoicePair * getAlgorithmType_1007_TypePair();
  void setAlgorithmType_1007_TypePair(AlgorithmType_1007_TypeChoicePair * AlgorithmType_1007_TypePairIn);

protected:
  AlgorithmType_1007_TypeChoicePair * AlgorithmType_1007_TypePair;
};

/*********************************************************************/

union AlgorithmType_1007_TypeVal
{
  AlgorithmType_1_1027_Type * AlgorithmType_1_1027;
  AlgorithmType_1_1028_Type * AlgorithmType_1_1028;
};

/*********************************************************************/

class AlgorithmType_1007_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AlgorithmType_1_1027E,
    AlgorithmType_1_1028E };
  AlgorithmType_1007_TypeChoicePair();
  AlgorithmType_1007_TypeChoicePair(
    whichOne AlgorithmType_1007_TypeTypeIn,
    AlgorithmType_1007_TypeVal AlgorithmType_1007_TypeValueIn);
  ~AlgorithmType_1007_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AlgorithmType_1007_TypeType;
  AlgorithmType_1007_TypeVal AlgorithmType_1007_TypeValue;
};

/*********************************************************************/

class AlignmentFeatur_1008_Type :
  public XmlTypeBase
{
public:
  AlignmentFeatur_1008_Type();
  AlignmentFeatur_1008_Type(
    AlignmentFeatur_1008_TypeChoicePair * AlignmentFeatur_1008_TypePairIn);
  ~AlignmentFeatur_1008_Type();
  void printSelf(FILE * outFile);

  AlignmentFeatur_1008_TypeChoicePair * getAlignmentFeatur_1008_TypePair();
  void setAlignmentFeatur_1008_TypePair(AlignmentFeatur_1008_TypeChoicePair * AlignmentFeatur_1008_TypePairIn);

protected:
  AlignmentFeatur_1008_TypeChoicePair * AlignmentFeatur_1008_TypePair;
};

/*********************************************************************/

union AlignmentFeatur_1008_TypeVal
{
  QIFReferenceFullType * DatumDefinitionId;
  BaseFeatureType * BaseFeature;
};

/*********************************************************************/

class AlignmentFeatur_1008_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DatumDefinitionIdE,
    BaseFeatureE };
  AlignmentFeatur_1008_TypeChoicePair();
  AlignmentFeatur_1008_TypeChoicePair(
    whichOne AlignmentFeatur_1008_TypeTypeIn,
    AlignmentFeatur_1008_TypeVal AlignmentFeatur_1008_TypeValueIn);
  ~AlignmentFeatur_1008_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AlignmentFeatur_1008_TypeType;
  AlignmentFeatur_1008_TypeVal AlignmentFeatur_1008_TypeValue;
};

/*********************************************************************/

class AngularToleranc_1009_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1009_Type();
  AngularToleranc_1009_Type(
    AngularToleranc_1009_TypeChoicePair * AngularToleranc_1009_TypePairIn);
  ~AngularToleranc_1009_Type();
  void printSelf(FILE * outFile);

  AngularToleranc_1009_TypeChoicePair * getAngularToleranc_1009_TypePair();
  void setAngularToleranc_1009_TypePair(AngularToleranc_1009_TypeChoicePair * AngularToleranc_1009_TypePairIn);

protected:
  AngularToleranc_1009_TypeChoicePair * AngularToleranc_1009_TypePair;
};

/*********************************************************************/

union AngularToleranc_1009_TypeVal
{
  AngularToleranc_1029_Type * AngularToleranc_1029;
  AngularValueType * MinValue;
};

/*********************************************************************/

class AngularToleranc_1009_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AngularToleranc_1029E,
    MinValueE };
  AngularToleranc_1009_TypeChoicePair();
  AngularToleranc_1009_TypeChoicePair(
    whichOne AngularToleranc_1009_TypeTypeIn,
    AngularToleranc_1009_TypeVal AngularToleranc_1009_TypeValueIn);
  ~AngularToleranc_1009_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularToleranc_1009_TypeType;
  AngularToleranc_1009_TypeVal AngularToleranc_1009_TypeValue;
};

/*********************************************************************/

class AngularToleranc_1010_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1010_Type();
  AngularToleranc_1010_Type(
    AngularToleranc_1010_TypeChoicePair * AngularToleranc_1010_TypePairIn);
  ~AngularToleranc_1010_Type();
  void printSelf(FILE * outFile);

  AngularToleranc_1010_TypeChoicePair * getAngularToleranc_1010_TypePair();
  void setAngularToleranc_1010_TypePair(AngularToleranc_1010_TypeChoicePair * AngularToleranc_1010_TypePairIn);

protected:
  AngularToleranc_1010_TypeChoicePair * AngularToleranc_1010_TypePair;
};

/*********************************************************************/

union AngularToleranc_1010_TypeVal
{
  AngularToleranc_1030_Type * AngularToleranc_1030;
  AngularValueType * MinValue;
  QIFReferenceFullType * DefinitionId;
};

/*********************************************************************/

class AngularToleranc_1010_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AngularToleranc_1030E,
    MinValueE,
    DefinitionIdE };
  AngularToleranc_1010_TypeChoicePair();
  AngularToleranc_1010_TypeChoicePair(
    whichOne AngularToleranc_1010_TypeTypeIn,
    AngularToleranc_1010_TypeVal AngularToleranc_1010_TypeValueIn);
  ~AngularToleranc_1010_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AngularToleranc_1010_TypeType;
  AngularToleranc_1010_TypeVal AngularToleranc_1010_TypeValue;
};

/*********************************************************************/

class AreaToleranceTy_1011_Type :
  public XmlTypeBase
{
public:
  AreaToleranceTy_1011_Type();
  AreaToleranceTy_1011_Type(
    AreaToleranceTy_1011_TypeChoicePair * AreaToleranceTy_1011_TypePairIn);
  ~AreaToleranceTy_1011_Type();
  void printSelf(FILE * outFile);

  AreaToleranceTy_1011_TypeChoicePair * getAreaToleranceTy_1011_TypePair();
  void setAreaToleranceTy_1011_TypePair(AreaToleranceTy_1011_TypeChoicePair * AreaToleranceTy_1011_TypePairIn);

protected:
  AreaToleranceTy_1011_TypeChoicePair * AreaToleranceTy_1011_TypePair;
};

/*********************************************************************/

union AreaToleranceTy_1011_TypeVal
{
  AreaToleranceTy_1031_Type * AreaToleranceTy_1031;
  AreaValueType * MinValue;
};

/*********************************************************************/

class AreaToleranceTy_1011_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AreaToleranceTy_1031E,
    MinValueE };
  AreaToleranceTy_1011_TypeChoicePair();
  AreaToleranceTy_1011_TypeChoicePair(
    whichOne AreaToleranceTy_1011_TypeTypeIn,
    AreaToleranceTy_1011_TypeVal AreaToleranceTy_1011_TypeValueIn);
  ~AreaToleranceTy_1011_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne AreaToleranceTy_1011_TypeType;
  AreaToleranceTy_1011_TypeVal AreaToleranceTy_1011_TypeValue;
};

/*********************************************************************/

class DatumWithPreced_1012_Type :
  public XmlTypeBase
{
public:
  DatumWithPreced_1012_Type();
  DatumWithPreced_1012_Type(
    DatumWithPreced_1012_TypeChoicePair * DatumWithPreced_1012_TypePairIn);
  ~DatumWithPreced_1012_Type();
  void printSelf(FILE * outFile);

  DatumWithPreced_1012_TypeChoicePair * getDatumWithPreced_1012_TypePair();
  void setDatumWithPreced_1012_TypePair(DatumWithPreced_1012_TypeChoicePair * DatumWithPreced_1012_TypePairIn);

protected:
  DatumWithPreced_1012_TypeChoicePair * DatumWithPreced_1012_TypePair;
};

/*********************************************************************/

union DatumWithPreced_1012_TypeVal
{
  DatumType * SimpleDatum;
  NominalDatumFeatureType * NominalDatumFeature;
  MeasuredDatumFeatureType * MeasuredDatumFeature;
  CompoundDatumType * CompoundDatum;
};

/*********************************************************************/

class DatumWithPreced_1012_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SimpleDatumE,
    NominalDatumFeatureE,
    MeasuredDatumFeatureE,
    CompoundDatumE };
  DatumWithPreced_1012_TypeChoicePair();
  DatumWithPreced_1012_TypeChoicePair(
    whichOne DatumWithPreced_1012_TypeTypeIn,
    DatumWithPreced_1012_TypeVal DatumWithPreced_1012_TypeValueIn);
  ~DatumWithPreced_1012_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DatumWithPreced_1012_TypeType;
  DatumWithPreced_1012_TypeVal DatumWithPreced_1012_TypeValue;
};

/*********************************************************************/

class DegreesOfFreedo_1013_Type :
  public XmlTypeBase
{
public:
  DegreesOfFreedo_1013_Type();
  DegreesOfFreedo_1013_Type(
    DegreesOfFreedo_1013_TypeChoicePair * DegreesOfFreedo_1013_TypePairIn);
  ~DegreesOfFreedo_1013_Type();
  void printSelf(FILE * outFile);

  DegreesOfFreedo_1013_TypeChoicePair * getDegreesOfFreedo_1013_TypePair();
  void setDegreesOfFreedo_1013_TypePair(DegreesOfFreedo_1013_TypeChoicePair * DegreesOfFreedo_1013_TypePairIn);

protected:
  DegreesOfFreedo_1013_TypeChoicePair * DegreesOfFreedo_1013_TypePair;
};

/*********************************************************************/

union DegreesOfFreedo_1013_TypeVal
{
  DegreeOfFreedomEnumTypeLisd * DegreeOfFreedom;
  ISODegreeOfFreedomEnumTypeLisd * ISODegreeOfFreedom;
};

/*********************************************************************/

class DegreesOfFreedo_1013_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    DegreeOfFreedomE,
    ISODegreeOfFreedomE };
  DegreesOfFreedo_1013_TypeChoicePair();
  DegreesOfFreedo_1013_TypeChoicePair(
    whichOne DegreesOfFreedo_1013_TypeTypeIn,
    DegreesOfFreedo_1013_TypeVal DegreesOfFreedo_1013_TypeValueIn);
  ~DegreesOfFreedo_1013_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DegreesOfFreedo_1013_TypeType;
  DegreesOfFreedo_1013_TypeVal DegreesOfFreedo_1013_TypeValue;
};

/*********************************************************************/

class DirectionalOffs_1014_Type :
  public XmlTypeBase
{
public:
  DirectionalOffs_1014_Type();
  DirectionalOffs_1014_Type(
    DirectionalOffs_1014_TypeChoicePair * DirectionalOffs_1014_TypePairIn);
  ~DirectionalOffs_1014_Type();
  void printSelf(FILE * outFile);

  DirectionalOffs_1014_TypeChoicePair * getDirectionalOffs_1014_TypePair();
  void setDirectionalOffs_1014_TypePair(DirectionalOffs_1014_TypeChoicePair * DirectionalOffs_1014_TypePairIn);

protected:
  DirectionalOffs_1014_TypeChoicePair * DirectionalOffs_1014_TypePair;
};

/*********************************************************************/

union DirectionalOffs_1014_TypeVal
{
  UnitVectorType * NominalDirection;
  BaseFeatureType * FeatureDirection;
};

/*********************************************************************/

class DirectionalOffs_1014_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    NominalDirectionE,
    FeatureDirectionE };
  DirectionalOffs_1014_TypeChoicePair();
  DirectionalOffs_1014_TypeChoicePair(
    whichOne DirectionalOffs_1014_TypeTypeIn,
    DirectionalOffs_1014_TypeVal DirectionalOffs_1014_TypeValueIn);
  ~DirectionalOffs_1014_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne DirectionalOffs_1014_TypeType;
  DirectionalOffs_1014_TypeVal DirectionalOffs_1014_TypeValue;
};

/*********************************************************************/

class ForceToleranceT_1015_Type :
  public XmlTypeBase
{
public:
  ForceToleranceT_1015_Type();
  ForceToleranceT_1015_Type(
    ForceToleranceT_1015_TypeChoicePair * ForceToleranceT_1015_TypePairIn);
  ~ForceToleranceT_1015_Type();
  void printSelf(FILE * outFile);

  ForceToleranceT_1015_TypeChoicePair * getForceToleranceT_1015_TypePair();
  void setForceToleranceT_1015_TypePair(ForceToleranceT_1015_TypeChoicePair * ForceToleranceT_1015_TypePairIn);

protected:
  ForceToleranceT_1015_TypeChoicePair * ForceToleranceT_1015_TypePair;
};

/*********************************************************************/

union ForceToleranceT_1015_TypeVal
{
  ForceToleranceT_1032_Type * ForceToleranceT_1032;
  ForceValueType * MinValue;
};

/*********************************************************************/

class ForceToleranceT_1015_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ForceToleranceT_1032E,
    MinValueE };
  ForceToleranceT_1015_TypeChoicePair();
  ForceToleranceT_1015_TypeChoicePair(
    whichOne ForceToleranceT_1015_TypeTypeIn,
    ForceToleranceT_1015_TypeVal ForceToleranceT_1015_TypeValueIn);
  ~ForceToleranceT_1015_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ForceToleranceT_1015_TypeType;
  ForceToleranceT_1015_TypeVal ForceToleranceT_1015_TypeValue;
};

/*********************************************************************/

class LinearTolerance_1016_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1016_Type();
  LinearTolerance_1016_Type(
    LinearTolerance_1016_TypeChoicePair * LinearTolerance_1016_TypePairIn);
  ~LinearTolerance_1016_Type();
  void printSelf(FILE * outFile);

  LinearTolerance_1016_TypeChoicePair * getLinearTolerance_1016_TypePair();
  void setLinearTolerance_1016_TypePair(LinearTolerance_1016_TypeChoicePair * LinearTolerance_1016_TypePairIn);

protected:
  LinearTolerance_1016_TypeChoicePair * LinearTolerance_1016_TypePair;
};

/*********************************************************************/

union LinearTolerance_1016_TypeVal
{
  LinearTolerance_1033_Type * LinearTolerance_1033;
  LinearValueType * MinValue;
};

/*********************************************************************/

class LinearTolerance_1016_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearTolerance_1033E,
    MinValueE };
  LinearTolerance_1016_TypeChoicePair();
  LinearTolerance_1016_TypeChoicePair(
    whichOne LinearTolerance_1016_TypeTypeIn,
    LinearTolerance_1016_TypeVal LinearTolerance_1016_TypeValueIn);
  ~LinearTolerance_1016_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearTolerance_1016_TypeType;
  LinearTolerance_1016_TypeVal LinearTolerance_1016_TypeValue;
};

/*********************************************************************/

class LinearTolerance_1017_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1017_Type();
  LinearTolerance_1017_Type(
    LinearTolerance_1017_TypeChoicePair * LinearTolerance_1017_TypePairIn);
  ~LinearTolerance_1017_Type();
  void printSelf(FILE * outFile);

  LinearTolerance_1017_TypeChoicePair * getLinearTolerance_1017_TypePair();
  void setLinearTolerance_1017_TypePair(LinearTolerance_1017_TypeChoicePair * LinearTolerance_1017_TypePairIn);

protected:
  LinearTolerance_1017_TypeChoicePair * LinearTolerance_1017_TypePair;
};

/*********************************************************************/

union LinearTolerance_1017_TypeVal
{
  LinearTolerance_1034_Type * LinearTolerance_1034;
  LinearTolerance_1035_Type * LinearTolerance_1035;
  QIFReferenceFullType * DefinitionId;
};

/*********************************************************************/

class LinearTolerance_1017_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    LinearTolerance_1034E,
    LinearTolerance_1035E,
    DefinitionIdE };
  LinearTolerance_1017_TypeChoicePair();
  LinearTolerance_1017_TypeChoicePair(
    whichOne LinearTolerance_1017_TypeTypeIn,
    LinearTolerance_1017_TypeVal LinearTolerance_1017_TypeValueIn);
  ~LinearTolerance_1017_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne LinearTolerance_1017_TypeType;
  LinearTolerance_1017_TypeVal LinearTolerance_1017_TypeValue;
};

/*********************************************************************/

class MassToleranceTy_1018_Type :
  public XmlTypeBase
{
public:
  MassToleranceTy_1018_Type();
  MassToleranceTy_1018_Type(
    MassToleranceTy_1018_TypeChoicePair * MassToleranceTy_1018_TypePairIn);
  ~MassToleranceTy_1018_Type();
  void printSelf(FILE * outFile);

  MassToleranceTy_1018_TypeChoicePair * getMassToleranceTy_1018_TypePair();
  void setMassToleranceTy_1018_TypePair(MassToleranceTy_1018_TypeChoicePair * MassToleranceTy_1018_TypePairIn);

protected:
  MassToleranceTy_1018_TypeChoicePair * MassToleranceTy_1018_TypePair;
};

/*********************************************************************/

union MassToleranceTy_1018_TypeVal
{
  MassToleranceTy_1036_Type * MassToleranceTy_1036;
  MassValueType * MinValue;
};

/*********************************************************************/

class MassToleranceTy_1018_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MassToleranceTy_1036E,
    MinValueE };
  MassToleranceTy_1018_TypeChoicePair();
  MassToleranceTy_1018_TypeChoicePair(
    whichOne MassToleranceTy_1018_TypeTypeIn,
    MassToleranceTy_1018_TypeVal MassToleranceTy_1018_TypeValueIn);
  ~MassToleranceTy_1018_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MassToleranceTy_1018_TypeType;
  MassToleranceTy_1018_TypeVal MassToleranceTy_1018_TypeValue;
};

/*********************************************************************/

class MaterialType_1019_Type :
  public XmlTypeBase
{
public:
  MaterialType_1019_Type();
  MaterialType_1019_Type(
    MaterialType_1019_TypeChoicePair * MaterialType_1019_TypePairIn);
  ~MaterialType_1019_Type();
  void printSelf(FILE * outFile);

  MaterialType_1019_TypeChoicePair * getMaterialType_1019_TypePair();
  void setMaterialType_1019_TypePair(MaterialType_1019_TypeChoicePair * MaterialType_1019_TypePairIn);

protected:
  MaterialType_1019_TypeChoicePair * MaterialType_1019_TypePair;
};

/*********************************************************************/

union MaterialType_1019_TypeVal
{
  MaterialClassEnumType * MaterialClassEnum;
  XmlString * OtherMaterialClass;
};

/*********************************************************************/

class MaterialType_1019_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    MaterialClassEnumE,
    OtherMaterialClassE };
  MaterialType_1019_TypeChoicePair();
  MaterialType_1019_TypeChoicePair(
    whichOne MaterialType_1019_TypeTypeIn,
    MaterialType_1019_TypeVal MaterialType_1019_TypeValueIn);
  ~MaterialType_1019_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne MaterialType_1019_TypeType;
  MaterialType_1019_TypeVal MaterialType_1019_TypeValue;
};

/*********************************************************************/

class PressureToleran_1020_Type :
  public XmlTypeBase
{
public:
  PressureToleran_1020_Type();
  PressureToleran_1020_Type(
    PressureToleran_1020_TypeChoicePair * PressureToleran_1020_TypePairIn);
  ~PressureToleran_1020_Type();
  void printSelf(FILE * outFile);

  PressureToleran_1020_TypeChoicePair * getPressureToleran_1020_TypePair();
  void setPressureToleran_1020_TypePair(PressureToleran_1020_TypeChoicePair * PressureToleran_1020_TypePairIn);

protected:
  PressureToleran_1020_TypeChoicePair * PressureToleran_1020_TypePair;
};

/*********************************************************************/

union PressureToleran_1020_TypeVal
{
  PressureToleran_1037_Type * PressureToleran_1037;
  PressureValueType * MinValue;
};

/*********************************************************************/

class PressureToleran_1020_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    PressureToleran_1037E,
    MinValueE };
  PressureToleran_1020_TypeChoicePair();
  PressureToleran_1020_TypeChoicePair(
    whichOne PressureToleran_1020_TypeTypeIn,
    PressureToleran_1020_TypeVal PressureToleran_1020_TypeValueIn);
  ~PressureToleran_1020_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PressureToleran_1020_TypeType;
  PressureToleran_1020_TypeVal PressureToleran_1020_TypeValue;
};

/*********************************************************************/

class SequencedDatumT_1021_Type :
  public XmlTypeBase
{
public:
  SequencedDatumT_1021_Type();
  SequencedDatumT_1021_Type(
    SequencedDatumT_1021_TypeChoicePair * SequencedDatumT_1021_TypePairIn);
  ~SequencedDatumT_1021_Type();
  void printSelf(FILE * outFile);

  SequencedDatumT_1021_TypeChoicePair * getSequencedDatumT_1021_TypePair();
  void setSequencedDatumT_1021_TypePair(SequencedDatumT_1021_TypeChoicePair * SequencedDatumT_1021_TypePairIn);

protected:
  SequencedDatumT_1021_TypeChoicePair * SequencedDatumT_1021_TypePair;
};

/*********************************************************************/

union SequencedDatumT_1021_TypeVal
{
  DatumType * SimpleDatum;
  CompoundDatumType * CompoundDatum;
};

/*********************************************************************/

class SequencedDatumT_1021_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SimpleDatumE,
    CompoundDatumE };
  SequencedDatumT_1021_TypeChoicePair();
  SequencedDatumT_1021_TypeChoicePair(
    whichOne SequencedDatumT_1021_TypeTypeIn,
    SequencedDatumT_1021_TypeVal SequencedDatumT_1021_TypeValueIn);
  ~SequencedDatumT_1021_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SequencedDatumT_1021_TypeType;
  SequencedDatumT_1021_TypeVal SequencedDatumT_1021_TypeValue;
};

/*********************************************************************/

class SpeedToleranceT_1022_Type :
  public XmlTypeBase
{
public:
  SpeedToleranceT_1022_Type();
  SpeedToleranceT_1022_Type(
    SpeedToleranceT_1022_TypeChoicePair * SpeedToleranceT_1022_TypePairIn);
  ~SpeedToleranceT_1022_Type();
  void printSelf(FILE * outFile);

  SpeedToleranceT_1022_TypeChoicePair * getSpeedToleranceT_1022_TypePair();
  void setSpeedToleranceT_1022_TypePair(SpeedToleranceT_1022_TypeChoicePair * SpeedToleranceT_1022_TypePairIn);

protected:
  SpeedToleranceT_1022_TypeChoicePair * SpeedToleranceT_1022_TypePair;
};

/*********************************************************************/

union SpeedToleranceT_1022_TypeVal
{
  SpeedToleranceT_1038_Type * SpeedToleranceT_1038;
  SpeedValueType * MinValue;
};

/*********************************************************************/

class SpeedToleranceT_1022_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SpeedToleranceT_1038E,
    MinValueE };
  SpeedToleranceT_1022_TypeChoicePair();
  SpeedToleranceT_1022_TypeChoicePair(
    whichOne SpeedToleranceT_1022_TypeTypeIn,
    SpeedToleranceT_1022_TypeVal SpeedToleranceT_1022_TypeValueIn);
  ~SpeedToleranceT_1022_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SpeedToleranceT_1022_TypeType;
  SpeedToleranceT_1022_TypeVal SpeedToleranceT_1022_TypeValue;
};

/*********************************************************************/

class SubstituteFeatu_1023_Type :
  public XmlTypeBase
{
public:
  SubstituteFeatu_1023_Type();
  SubstituteFeatu_1023_Type(
    SubstituteFeatu_1023_TypeChoicePair * SubstituteFeatu_1023_TypePairIn);
  ~SubstituteFeatu_1023_Type();
  void printSelf(FILE * outFile);

  SubstituteFeatu_1023_TypeChoicePair * getSubstituteFeatu_1023_TypePair();
  void setSubstituteFeatu_1023_TypePair(SubstituteFeatu_1023_TypeChoicePair * SubstituteFeatu_1023_TypePairIn);

protected:
  SubstituteFeatu_1023_TypeChoicePair * SubstituteFeatu_1023_TypePair;
};

/*********************************************************************/

union SubstituteFeatu_1023_TypeVal
{
  SubstituteFeatureAlgorithmEnumType * SubstituteFeatureAlgorithmEnum;
  QIFReferenceType * SubstituteFeatureAlgorithmId;
  XmlString * OtherSubstituteFeatureAlgorithm;
};

/*********************************************************************/

class SubstituteFeatu_1023_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    SubstituteFeatureAlgorithmEnumE,
    SubstituteFeatureAlgorithmIdE,
    OtherSubstituteFeatureAlgorithmE };
  SubstituteFeatu_1023_TypeChoicePair();
  SubstituteFeatu_1023_TypeChoicePair(
    whichOne SubstituteFeatu_1023_TypeTypeIn,
    SubstituteFeatu_1023_TypeVal SubstituteFeatu_1023_TypeValueIn);
  ~SubstituteFeatu_1023_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne SubstituteFeatu_1023_TypeType;
  SubstituteFeatu_1023_TypeVal SubstituteFeatu_1023_TypeValue;
};

/*********************************************************************/

class TemperatureTole_1024_Type :
  public XmlTypeBase
{
public:
  TemperatureTole_1024_Type();
  TemperatureTole_1024_Type(
    TemperatureTole_1024_TypeChoicePair * TemperatureTole_1024_TypePairIn);
  ~TemperatureTole_1024_Type();
  void printSelf(FILE * outFile);

  TemperatureTole_1024_TypeChoicePair * getTemperatureTole_1024_TypePair();
  void setTemperatureTole_1024_TypePair(TemperatureTole_1024_TypeChoicePair * TemperatureTole_1024_TypePairIn);

protected:
  TemperatureTole_1024_TypeChoicePair * TemperatureTole_1024_TypePair;
};

/*********************************************************************/

union TemperatureTole_1024_TypeVal
{
  TemperatureTole_1039_Type * TemperatureTole_1039;
  TemperatureValueType * MinValue;
};

/*********************************************************************/

class TemperatureTole_1024_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TemperatureTole_1039E,
    MinValueE };
  TemperatureTole_1024_TypeChoicePair();
  TemperatureTole_1024_TypeChoicePair(
    whichOne TemperatureTole_1024_TypeTypeIn,
    TemperatureTole_1024_TypeVal TemperatureTole_1024_TypeValueIn);
  ~TemperatureTole_1024_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TemperatureTole_1024_TypeType;
  TemperatureTole_1024_TypeVal TemperatureTole_1024_TypeValue;
};

/*********************************************************************/

class TimeToleranceTy_1025_Type :
  public XmlTypeBase
{
public:
  TimeToleranceTy_1025_Type();
  TimeToleranceTy_1025_Type(
    TimeToleranceTy_1025_TypeChoicePair * TimeToleranceTy_1025_TypePairIn);
  ~TimeToleranceTy_1025_Type();
  void printSelf(FILE * outFile);

  TimeToleranceTy_1025_TypeChoicePair * getTimeToleranceTy_1025_TypePair();
  void setTimeToleranceTy_1025_TypePair(TimeToleranceTy_1025_TypeChoicePair * TimeToleranceTy_1025_TypePairIn);

protected:
  TimeToleranceTy_1025_TypeChoicePair * TimeToleranceTy_1025_TypePair;
};

/*********************************************************************/

union TimeToleranceTy_1025_TypeVal
{
  TimeToleranceTy_1040_Type * TimeToleranceTy_1040;
  TimeValueType * MinValue;
};

/*********************************************************************/

class TimeToleranceTy_1025_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TimeToleranceTy_1040E,
    MinValueE };
  TimeToleranceTy_1025_TypeChoicePair();
  TimeToleranceTy_1025_TypeChoicePair(
    whichOne TimeToleranceTy_1025_TypeTypeIn,
    TimeToleranceTy_1025_TypeVal TimeToleranceTy_1025_TypeValueIn);
  ~TimeToleranceTy_1025_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TimeToleranceTy_1025_TypeType;
  TimeToleranceTy_1025_TypeVal TimeToleranceTy_1025_TypeValue;
};

/*********************************************************************/

class ToleranceZonePe_1026_Type :
  public XmlTypeBase
{
public:
  ToleranceZonePe_1026_Type();
  ToleranceZonePe_1026_Type(
    ToleranceZonePe_1026_TypeChoicePair * ToleranceZonePe_1026_TypePairIn);
  ~ToleranceZonePe_1026_Type();
  void printSelf(FILE * outFile);

  ToleranceZonePe_1026_TypeChoicePair * getToleranceZonePe_1026_TypePair();
  void setToleranceZonePe_1026_TypePair(ToleranceZonePe_1026_TypeChoicePair * ToleranceZonePe_1026_TypePairIn);

protected:
  ToleranceZonePe_1026_TypeChoicePair * ToleranceZonePe_1026_TypePair;
};

/*********************************************************************/

union ToleranceZonePe_1026_TypeVal
{
  RectangularUnitAreaType * RectangularUnitArea;
  CircularUnitAreaType * CircularUnitArea;
};

/*********************************************************************/

class ToleranceZonePe_1026_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    RectangularUnitAreaE,
    CircularUnitAreaE };
  ToleranceZonePe_1026_TypeChoicePair();
  ToleranceZonePe_1026_TypeChoicePair(
    whichOne ToleranceZonePe_1026_TypeTypeIn,
    ToleranceZonePe_1026_TypeVal ToleranceZonePe_1026_TypeValueIn);
  ~ToleranceZonePe_1026_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ToleranceZonePe_1026_TypeType;
  ToleranceZonePe_1026_TypeVal ToleranceZonePe_1026_TypeValue;
};

/*********************************************************************/

class AlgorithmType_1_1027_Type :
  public XmlTypeBase
{
public:
  AlgorithmType_1_1027_Type();
  AlgorithmType_1_1027_Type(
    QIFReferenceType * SoftwareIdIn,
    XmlString * ParametersIn);
  ~AlgorithmType_1_1027_Type();
  void printSelf(FILE * outFile);

  QIFReferenceType * getSoftwareId();
  void setSoftwareId(QIFReferenceType * SoftwareIdIn);
  XmlString * getParameters();
  void setParameters(XmlString * ParametersIn);

protected:
  QIFReferenceType * SoftwareId;
  XmlString * Parameters;
};

/*********************************************************************/

class AlgorithmType_1_1028_Type :
  public XmlTypeBase
{
public:
  AlgorithmType_1_1028_Type();
  AlgorithmType_1_1028_Type(
    QIFReferenceType * StandardIdIn,
    XmlString * SectionIn);
  ~AlgorithmType_1_1028_Type();
  void printSelf(FILE * outFile);

  QIFReferenceType * getStandardId();
  void setStandardId(QIFReferenceType * StandardIdIn);
  XmlString * getSection();
  void setSection(XmlString * SectionIn);

protected:
  QIFReferenceType * StandardId;
  XmlString * Section;
};

/*********************************************************************/

class AngularToleranc_1029_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1029_Type();
  AngularToleranc_1029_Type(
    AngularValueType * MaxValueIn,
    AngularValueType * MinValueIn);
  ~AngularToleranc_1029_Type();
  void printSelf(FILE * outFile);

  AngularValueType * getMaxValue();
  void setMaxValue(AngularValueType * MaxValueIn);
  AngularValueType * getMinValue();
  void setMinValue(AngularValueType * MinValueIn);

protected:
  AngularValueType * MaxValue;
  AngularValueType * MinValue;
};

/*********************************************************************/

class AngularToleranc_1030_Type :
  public XmlTypeBase
{
public:
  AngularToleranc_1030_Type();
  AngularToleranc_1030_Type(
    AngularValueType * MaxValueIn,
    AngularValueType * MinValueIn);
  ~AngularToleranc_1030_Type();
  void printSelf(FILE * outFile);

  AngularValueType * getMaxValue();
  void setMaxValue(AngularValueType * MaxValueIn);
  AngularValueType * getMinValue();
  void setMinValue(AngularValueType * MinValueIn);

protected:
  AngularValueType * MaxValue;
  AngularValueType * MinValue;
};

/*********************************************************************/

class AreaToleranceTy_1031_Type :
  public XmlTypeBase
{
public:
  AreaToleranceTy_1031_Type();
  AreaToleranceTy_1031_Type(
    AreaValueType * MaxValueIn,
    AreaValueType * MinValueIn);
  ~AreaToleranceTy_1031_Type();
  void printSelf(FILE * outFile);

  AreaValueType * getMaxValue();
  void setMaxValue(AreaValueType * MaxValueIn);
  AreaValueType * getMinValue();
  void setMinValue(AreaValueType * MinValueIn);

protected:
  AreaValueType * MaxValue;
  AreaValueType * MinValue;
};

/*********************************************************************/

class ForceToleranceT_1032_Type :
  public XmlTypeBase
{
public:
  ForceToleranceT_1032_Type();
  ForceToleranceT_1032_Type(
    ForceValueType * MaxValueIn,
    ForceValueType * MinValueIn);
  ~ForceToleranceT_1032_Type();
  void printSelf(FILE * outFile);

  ForceValueType * getMaxValue();
  void setMaxValue(ForceValueType * MaxValueIn);
  ForceValueType * getMinValue();
  void setMinValue(ForceValueType * MinValueIn);

protected:
  ForceValueType * MaxValue;
  ForceValueType * MinValue;
};

/*********************************************************************/

class LinearTolerance_1033_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1033_Type();
  LinearTolerance_1033_Type(
    LinearValueType * MaxValueIn,
    LinearValueType * MinValueIn);
  ~LinearTolerance_1033_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMaxValue();
  void setMaxValue(LinearValueType * MaxValueIn);
  LinearValueType * getMinValue();
  void setMinValue(LinearValueType * MinValueIn);

protected:
  LinearValueType * MaxValue;
  LinearValueType * MinValue;
};

/*********************************************************************/

class LinearTolerance_1034_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1034_Type();
  LinearTolerance_1034_Type(
    LinearValueType * MaxValueIn,
    LinearDualValueType * MaxDualValueIn,
    LinearTolerance_1041_Type * LinearTolerance_1041In);
  ~LinearTolerance_1034_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMaxValue();
  void setMaxValue(LinearValueType * MaxValueIn);
  LinearDualValueType * getMaxDualValue();
  void setMaxDualValue(LinearDualValueType * MaxDualValueIn);
  LinearTolerance_1041_Type * getLinearTolerance_1041();
  void setLinearTolerance_1041(LinearTolerance_1041_Type * LinearTolerance_1041In);

protected:
  LinearValueType * MaxValue;
  LinearDualValueType * MaxDualValue;
  LinearTolerance_1041_Type * LinearTolerance_1041;
};

/*********************************************************************/

class LinearTolerance_1035_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1035_Type();
  LinearTolerance_1035_Type(
    LinearValueType * MinValueIn,
    LinearDualValueType * MinDualValueIn);
  ~LinearTolerance_1035_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMinValue();
  void setMinValue(LinearValueType * MinValueIn);
  LinearDualValueType * getMinDualValue();
  void setMinDualValue(LinearDualValueType * MinDualValueIn);

protected:
  LinearValueType * MinValue;
  LinearDualValueType * MinDualValue;
};

/*********************************************************************/

class MassToleranceTy_1036_Type :
  public XmlTypeBase
{
public:
  MassToleranceTy_1036_Type();
  MassToleranceTy_1036_Type(
    MassValueType * MaxValueIn,
    MassValueType * MinValueIn);
  ~MassToleranceTy_1036_Type();
  void printSelf(FILE * outFile);

  MassValueType * getMaxValue();
  void setMaxValue(MassValueType * MaxValueIn);
  MassValueType * getMinValue();
  void setMinValue(MassValueType * MinValueIn);

protected:
  MassValueType * MaxValue;
  MassValueType * MinValue;
};

/*********************************************************************/

class PressureToleran_1037_Type :
  public XmlTypeBase
{
public:
  PressureToleran_1037_Type();
  PressureToleran_1037_Type(
    PressureValueType * MaxValueIn,
    PressureValueType * MinValueIn);
  ~PressureToleran_1037_Type();
  void printSelf(FILE * outFile);

  PressureValueType * getMaxValue();
  void setMaxValue(PressureValueType * MaxValueIn);
  PressureValueType * getMinValue();
  void setMinValue(PressureValueType * MinValueIn);

protected:
  PressureValueType * MaxValue;
  PressureValueType * MinValue;
};

/*********************************************************************/

class SpeedToleranceT_1038_Type :
  public XmlTypeBase
{
public:
  SpeedToleranceT_1038_Type();
  SpeedToleranceT_1038_Type(
    SpeedValueType * MaxValueIn,
    SpeedValueType * MinValueIn);
  ~SpeedToleranceT_1038_Type();
  void printSelf(FILE * outFile);

  SpeedValueType * getMaxValue();
  void setMaxValue(SpeedValueType * MaxValueIn);
  SpeedValueType * getMinValue();
  void setMinValue(SpeedValueType * MinValueIn);

protected:
  SpeedValueType * MaxValue;
  SpeedValueType * MinValue;
};

/*********************************************************************/

class TemperatureTole_1039_Type :
  public XmlTypeBase
{
public:
  TemperatureTole_1039_Type();
  TemperatureTole_1039_Type(
    TemperatureValueType * MaxValueIn,
    TemperatureValueType * MinValueIn);
  ~TemperatureTole_1039_Type();
  void printSelf(FILE * outFile);

  TemperatureValueType * getMaxValue();
  void setMaxValue(TemperatureValueType * MaxValueIn);
  TemperatureValueType * getMinValue();
  void setMinValue(TemperatureValueType * MinValueIn);

protected:
  TemperatureValueType * MaxValue;
  TemperatureValueType * MinValue;
};

/*********************************************************************/

class TimeToleranceTy_1040_Type :
  public XmlTypeBase
{
public:
  TimeToleranceTy_1040_Type();
  TimeToleranceTy_1040_Type(
    TimeValueType * MaxValueIn,
    TimeValueType * MinValueIn);
  ~TimeToleranceTy_1040_Type();
  void printSelf(FILE * outFile);

  TimeValueType * getMaxValue();
  void setMaxValue(TimeValueType * MaxValueIn);
  TimeValueType * getMinValue();
  void setMinValue(TimeValueType * MinValueIn);

protected:
  TimeValueType * MaxValue;
  TimeValueType * MinValue;
};

/*********************************************************************/

class LinearTolerance_1041_Type :
  public XmlTypeBase
{
public:
  LinearTolerance_1041_Type();
  LinearTolerance_1041_Type(
    LinearValueType * MinValueIn,
    LinearDualValueType * MinDualValueIn);
  ~LinearTolerance_1041_Type();
  void printSelf(FILE * outFile);

  LinearValueType * getMinValue();
  void setMinValue(LinearValueType * MinValueIn);
  LinearDualValueType * getMinDualValue();
  void setMinDualValue(LinearDualValueType * MinDualValueIn);

protected:
  LinearValueType * MinValue;
  LinearDualValueType * MinDualValue;
};

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

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

/*********************************************************************/

#endif // INTERMEDIATESPMI_HH
