/* ***************************************************************** */

#ifndef TRACEABILITY_HH
#define TRACEABILITY_HH
#include <stdio.h>
#include <list>
#include <xmlSchemaInstance.hh>
#include "IntermediatesPMIClasses.hh"

/* ***************************************************************** */

class ActualProductTraceabilityType;
class CheckStatusEnumType;
class EnvironmentType;
class EnvironmentTypeLisd;
class EnvironmentsType;
class ErrorsType;
class InspectionModeEnumType;
class InspectionProgramType;
class InspectionScopeEnumType;
class InspectionSoftwareItemsType;
class InspectionTraceabilityType;
class ManufacturingProcessTraceabilitiesType;
class ManufacturingProcessTraceabilityType;
class ManufacturingProcessTraceabilityTypeLisd;
class PartialInspectionType;
class PreInspectionTraceabilityType;
class ProcessParameterType;
class ProcessParameterTypeLisd;
class ProcessParametersType;
class ProductDataQualityAreaEnumType;
class ProductDataQualityAreaType;
class ProductDataQualityAreaTypeChoicePair;
class ProductDataQualityCheckType;
class ProductDataQualityCheckTypeLisd;
class ProductDataQualityChecksType;
class ProductDataQualityType;
class ProductTraceabilityType;
class TimeDescriptionEnumType;
class TimeDescriptionType;
class TimeDescriptionTypeChoicePair;
class ValidationCountsType;
class InspectionTrace_1039_Type;
class InspectionTrace_1039_TypeChoicePair;
class PreInspectionTr_1040_Type;
class PreInspectionTr_1040_TypeChoicePair;

/* ***************************************************************** */
/* ***************************************************************** */

class ActualProductTraceabilityType :
  public XmlTypeBase
{
public:
  ActualProductTraceabilityType();
  ActualProductTraceabilityType(
    XmlString * SampleNumberIn,
    XmlString * LotNumberIn,
    XmlString * ReportNumberIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    QIFReferenceType * FixtureIdIn,
    ArrayReferenceType * NotableEventIdsIn,
    ArrayReferenceType * NotedEventIdsIn,
    XmlDateTime * InspectionStartIn,
    XmlDateTime * InspectionEndIn,
    InspectionSoftwareItemsType * InspectionSoftwareItemsIn,
    InspectionProgramType * InspectionProgramIn,
    EmployeeType * InspectionOperatorIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    EnvironmentsType * ProductEnvironmentsIn,
    ErrorsType * ErrorsIn,
    AttributesType * AttributesIn);
  ~ActualProductTraceabilityType();
  void printSelf(FILE * outFile);

  XmlString * getSampleNumber();
  void setSampleNumber(XmlString * SampleNumberIn);
  XmlString * getLotNumber();
  void setLotNumber(XmlString * LotNumberIn);
  XmlString * getReportNumber();
  void setReportNumber(XmlString * ReportNumberIn);
  QIFReferenceType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn);
  QIFReferenceType * getFixtureId();
  void setFixtureId(QIFReferenceType * FixtureIdIn);
  ArrayReferenceType * getNotableEventIds();
  void setNotableEventIds(ArrayReferenceType * NotableEventIdsIn);
  ArrayReferenceType * getNotedEventIds();
  void setNotedEventIds(ArrayReferenceType * NotedEventIdsIn);
  XmlDateTime * getInspectionStart();
  void setInspectionStart(XmlDateTime * InspectionStartIn);
  XmlDateTime * getInspectionEnd();
  void setInspectionEnd(XmlDateTime * InspectionEndIn);
  InspectionSoftwareItemsType * getInspectionSoftwareItems();
  void setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn);
  InspectionProgramType * getInspectionProgram();
  void setInspectionProgram(InspectionProgramType * InspectionProgramIn);
  EmployeeType * getInspectionOperator();
  void setInspectionOperator(EmployeeType * InspectionOperatorIn);
  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  EnvironmentsType * getProductEnvironments();
  void setProductEnvironments(EnvironmentsType * ProductEnvironmentsIn);
  ErrorsType * getErrors();
  void setErrors(ErrorsType * ErrorsIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  XmlString * SampleNumber;
  XmlString * LotNumber;
  XmlString * ReportNumber;
  QIFReferenceType * ManufacturingProcessId;
  QIFReferenceType * FixtureId;
  ArrayReferenceType * NotableEventIds;
  ArrayReferenceType * NotedEventIds;
  XmlDateTime * InspectionStart;
  XmlDateTime * InspectionEnd;
  InspectionSoftwareItemsType * InspectionSoftwareItems;
  InspectionProgramType * InspectionProgram;
  EmployeeType * InspectionOperator;
  ArrayReferenceType * MeasurementDeviceIds;
  EnvironmentsType * ProductEnvironments;
  ErrorsType * Errors;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class CheckStatusEnumType :
  public XmlNMTOKEN
{
public:
  CheckStatusEnumType();
  CheckStatusEnumType(
    const char * valIn);
  ~CheckStatusEnumType();
  bool CheckStatusEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class EnvironmentType :
  public XmlTypeBase
{
public:
  EnvironmentType();
  EnvironmentType(
    AttributesType * AttributesIn,
    MeasuredTemperatureValueType * ObjectTemperatureIn,
    MeasuredTemperatureValueType * AmbientTemperatureIn,
    MeasuredDecimalType * RelativeHumidityIn,
    XmlDateTime * DateAndTimeIn,
    TimeDescriptionType * TimeDescriptionIn);
  ~EnvironmentType();
  void printSelf(FILE * outFile);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  MeasuredTemperatureValueType * getObjectTemperature();
  void setObjectTemperature(MeasuredTemperatureValueType * ObjectTemperatureIn);
  MeasuredTemperatureValueType * getAmbientTemperature();
  void setAmbientTemperature(MeasuredTemperatureValueType * AmbientTemperatureIn);
  MeasuredDecimalType * getRelativeHumidity();
  void setRelativeHumidity(MeasuredDecimalType * RelativeHumidityIn);
  XmlDateTime * getDateAndTime();
  void setDateAndTime(XmlDateTime * DateAndTimeIn);
  TimeDescriptionType * getTimeDescription();
  void setTimeDescription(TimeDescriptionType * TimeDescriptionIn);

protected:
  AttributesType * Attributes;
  MeasuredTemperatureValueType * ObjectTemperature;
  MeasuredTemperatureValueType * AmbientTemperature;
  MeasuredDecimalType * RelativeHumidity;
  XmlDateTime * DateAndTime;
  TimeDescriptionType * TimeDescription;
};

/* ***************************************************************** */

class EnvironmentTypeLisd :
  public std::list<EnvironmentType *>,
  public XmlSchemaInstanceBase
{
public:
  EnvironmentTypeLisd();
  EnvironmentTypeLisd(
    EnvironmentType * aEnvironmentType);
  ~EnvironmentTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class EnvironmentsType :
  public XmlTypeBase
{
public:
  EnvironmentsType();
  EnvironmentsType(
    EnvironmentTypeLisd * EnvironmentIn);
  EnvironmentsType(
    NaturalType * nIn,
    EnvironmentTypeLisd * EnvironmentIn);
  ~EnvironmentsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  EnvironmentTypeLisd * getEnvironment();
  void setEnvironment(EnvironmentTypeLisd *);

protected:
  NaturalType * n;
  EnvironmentTypeLisd * Environment;
};

/* ***************************************************************** */

class ErrorsType :
  public XmlTypeBase
{
public:
  ErrorsType();
  ErrorsType(
    XmlStringLisd * ErrorIn);
  ErrorsType(
    NaturalType * nIn,
    XmlStringLisd * ErrorIn);
  ~ErrorsType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  XmlStringLisd * getError();
  void setError(XmlStringLisd *);

protected:
  NaturalType * n;
  XmlStringLisd * Error;
};

/* ***************************************************************** */

class InspectionModeEnumType :
  public XmlString
{
public:
  InspectionModeEnumType();
  InspectionModeEnumType(
    const char * valIn);
  ~InspectionModeEnumType();
  bool InspectionModeEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class InspectionProgramType :
  public XmlTypeBase
{
public:
  InspectionProgramType();
  InspectionProgramType(
    FileType * FileIn,
    XmlString * DescriptionIn,
    QIFReferenceType * FormalStandardIdIn,
    EmployeeType * AuthorIn);
  ~InspectionProgramType();
  void printSelf(FILE * outFile);

  FileType * getFile();
  void setFile(FileType * FileIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  QIFReferenceType * getFormalStandardId();
  void setFormalStandardId(QIFReferenceType * FormalStandardIdIn);
  EmployeeType * getAuthor();
  void setAuthor(EmployeeType * AuthorIn);

protected:
  FileType * File;
  XmlString * Description;
  QIFReferenceType * FormalStandardId;
  EmployeeType * Author;
};

/* ***************************************************************** */

class InspectionScopeEnumType :
  public XmlNMTOKEN
{
public:
  InspectionScopeEnumType();
  InspectionScopeEnumType(
    const char * valIn);
  ~InspectionScopeEnumType();
  bool InspectionScopeEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class InspectionSoftwareItemsType :
  public XmlTypeBase
{
public:
  InspectionSoftwareItemsType();
  InspectionSoftwareItemsType(
    ArrayReferenceType * InspectionProgramGenerationSoftwareIn,
    ArrayReferenceType * InspectionProgramExecutionSoftwareIn,
    ArrayReferenceType * AnalysisSoftwareIn,
    ArrayReferenceType * CADSoftwareIn,
    ArrayReferenceType * DMESoftwareIn);
  ~InspectionSoftwareItemsType();
  void printSelf(FILE * outFile);

  ArrayReferenceType * getInspectionProgramGenerationSoftware();
  void setInspectionProgramGenerationSoftware(ArrayReferenceType * InspectionProgramGenerationSoftwareIn);
  ArrayReferenceType * getInspectionProgramExecutionSoftware();
  void setInspectionProgramExecutionSoftware(ArrayReferenceType * InspectionProgramExecutionSoftwareIn);
  ArrayReferenceType * getAnalysisSoftware();
  void setAnalysisSoftware(ArrayReferenceType * AnalysisSoftwareIn);
  ArrayReferenceType * getCADSoftware();
  void setCADSoftware(ArrayReferenceType * CADSoftwareIn);
  ArrayReferenceType * getDMESoftware();
  void setDMESoftware(ArrayReferenceType * DMESoftwareIn);

protected:
  ArrayReferenceType * InspectionProgramGenerationSoftware;
  ArrayReferenceType * InspectionProgramExecutionSoftware;
  ArrayReferenceType * AnalysisSoftware;
  ArrayReferenceType * CADSoftware;
  ArrayReferenceType * DMESoftware;
};

/* ***************************************************************** */

class InspectionTraceabilityType :
  public XmlTypeBase
{
public:
  InspectionTraceabilityType();
  InspectionTraceabilityType(
    OrganizationType * InspectingOrganizationIn,
    CustomerOrganizationType * CustomerOrganizationIn,
    XmlString * SupplierCodeIn,
    XmlString * PurchaseOrderNumberIn,
    XmlString * OrderNumberIn,
    XmlString * ReportNumberIn,
    InspectionScopeEnumType * InspectionScopeIn,
    InspectionModeEnumType * InspectionModeIn,
    PartialInspectionType * PartialInspectionIn,
    NotableEventsType * NotableEventsIn,
    NotedEventsType * NotedEventsIn,
    XmlDateTime * InspectionStartIn,
    XmlDateTime * InspectionEndIn,
    InspectionSoftwareItemsType * InspectionSoftwareItemsIn,
    InspectionProgramType * InspectionProgramIn,
    EmployeeType * InspectionOperatorIn,
    EmployeeType * ReportPreparerIn,
    XmlDateTime * ReportPreparationDateIn,
    XmlToken * ReportTypeIn,
    SecurityClassificationType * SecurityClassificationIn,
    LocationType * PlantLocationIn,
    InspectionTrace_1039_Type * InspectionTrace_1039In,
    ErrorsType * ErrorsIn,
    AttributesType * AttributesIn);
  ~InspectionTraceabilityType();
  void printSelf(FILE * outFile);

  OrganizationType * getInspectingOrganization();
  void setInspectingOrganization(OrganizationType * InspectingOrganizationIn);
  CustomerOrganizationType * getCustomerOrganization();
  void setCustomerOrganization(CustomerOrganizationType * CustomerOrganizationIn);
  XmlString * getSupplierCode();
  void setSupplierCode(XmlString * SupplierCodeIn);
  XmlString * getPurchaseOrderNumber();
  void setPurchaseOrderNumber(XmlString * PurchaseOrderNumberIn);
  XmlString * getOrderNumber();
  void setOrderNumber(XmlString * OrderNumberIn);
  XmlString * getReportNumber();
  void setReportNumber(XmlString * ReportNumberIn);
  InspectionScopeEnumType * getInspectionScope();
  void setInspectionScope(InspectionScopeEnumType * InspectionScopeIn);
  InspectionModeEnumType * getInspectionMode();
  void setInspectionMode(InspectionModeEnumType * InspectionModeIn);
  PartialInspectionType * getPartialInspection();
  void setPartialInspection(PartialInspectionType * PartialInspectionIn);
  NotableEventsType * getNotableEvents();
  void setNotableEvents(NotableEventsType * NotableEventsIn);
  NotedEventsType * getNotedEvents();
  void setNotedEvents(NotedEventsType * NotedEventsIn);
  XmlDateTime * getInspectionStart();
  void setInspectionStart(XmlDateTime * InspectionStartIn);
  XmlDateTime * getInspectionEnd();
  void setInspectionEnd(XmlDateTime * InspectionEndIn);
  InspectionSoftwareItemsType * getInspectionSoftwareItems();
  void setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn);
  InspectionProgramType * getInspectionProgram();
  void setInspectionProgram(InspectionProgramType * InspectionProgramIn);
  EmployeeType * getInspectionOperator();
  void setInspectionOperator(EmployeeType * InspectionOperatorIn);
  EmployeeType * getReportPreparer();
  void setReportPreparer(EmployeeType * ReportPreparerIn);
  XmlDateTime * getReportPreparationDate();
  void setReportPreparationDate(XmlDateTime * ReportPreparationDateIn);
  XmlToken * getReportType();
  void setReportType(XmlToken * ReportTypeIn);
  SecurityClassificationType * getSecurityClassification();
  void setSecurityClassification(SecurityClassificationType * SecurityClassificationIn);
  LocationType * getPlantLocation();
  void setPlantLocation(LocationType * PlantLocationIn);
  InspectionTrace_1039_Type * getInspectionTrace_1039();
  void setInspectionTrace_1039(InspectionTrace_1039_Type * InspectionTrace_1039In);
  ErrorsType * getErrors();
  void setErrors(ErrorsType * ErrorsIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  OrganizationType * InspectingOrganization;
  CustomerOrganizationType * CustomerOrganization;
  XmlString * SupplierCode;
  XmlString * PurchaseOrderNumber;
  XmlString * OrderNumber;
  XmlString * ReportNumber;
  InspectionScopeEnumType * InspectionScope;
  InspectionModeEnumType * InspectionMode;
  PartialInspectionType * PartialInspection;
  NotableEventsType * NotableEvents;
  NotedEventsType * NotedEvents;
  XmlDateTime * InspectionStart;
  XmlDateTime * InspectionEnd;
  InspectionSoftwareItemsType * InspectionSoftwareItems;
  InspectionProgramType * InspectionProgram;
  EmployeeType * InspectionOperator;
  EmployeeType * ReportPreparer;
  XmlDateTime * ReportPreparationDate;
  XmlToken * ReportType;
  SecurityClassificationType * SecurityClassification;
  LocationType * PlantLocation;
  InspectionTrace_1039_Type * InspectionTrace_1039;
  ErrorsType * Errors;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class ManufacturingProcessTraceabilitiesType :
  public XmlTypeBase
{
public:
  ManufacturingProcessTraceabilitiesType();
  ManufacturingProcessTraceabilitiesType(
    ManufacturingProcessTraceabilityTypeLisd * ManufacturingProcessTraceabilityIn);
  ManufacturingProcessTraceabilitiesType(
    NaturalType * nIn,
    ManufacturingProcessTraceabilityTypeLisd * ManufacturingProcessTraceabilityIn);
  ~ManufacturingProcessTraceabilitiesType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ManufacturingProcessTraceabilityTypeLisd * getManufacturingProcessTraceability();
  void setManufacturingProcessTraceability(ManufacturingProcessTraceabilityTypeLisd *);

protected:
  NaturalType * n;
  ManufacturingProcessTraceabilityTypeLisd * ManufacturingProcessTraceability;
};

/* ***************************************************************** */

class ManufacturingProcessTraceabilityType :
  public XmlTypeBase
{
public:
  ManufacturingProcessTraceabilityType();
  ManufacturingProcessTraceabilityType(
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlString * JobIn,
    XmlString * RevisionIn,
    QIFReferenceType * PreviousOperationIdIn,
    XmlString * PathIn,
    XmlString * MachineManufacturerNameIn,
    XmlString * MachineIdentifierIn,
    XmlString * OperatorIdentifierIn,
    XmlString * ShiftIn,
    XmlString * DepartmentIn,
    XmlString * ResponsibilityIdentifierIn,
    XmlString * PlantSectorIn,
    ProcessParametersType * ProcessParametersIn,
    QIFReferenceType * AssociatedTraceabilityIdIn);
  ManufacturingProcessTraceabilityType(
    QIFIdType * idIn,
    AttributesType * AttributesIn,
    XmlString * DescriptionIn,
    XmlString * JobIn,
    XmlString * RevisionIn,
    QIFReferenceType * PreviousOperationIdIn,
    XmlString * PathIn,
    XmlString * MachineManufacturerNameIn,
    XmlString * MachineIdentifierIn,
    XmlString * OperatorIdentifierIn,
    XmlString * ShiftIn,
    XmlString * DepartmentIn,
    XmlString * ResponsibilityIdentifierIn,
    XmlString * PlantSectorIn,
    ProcessParametersType * ProcessParametersIn,
    QIFReferenceType * AssociatedTraceabilityIdIn);
  ~ManufacturingProcessTraceabilityType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  QIFIdType * getid();
  void setid(QIFIdType * idIn);

  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlString * getJob();
  void setJob(XmlString * JobIn);
  XmlString * getRevision();
  void setRevision(XmlString * RevisionIn);
  QIFReferenceType * getPreviousOperationId();
  void setPreviousOperationId(QIFReferenceType * PreviousOperationIdIn);
  XmlString * getPath();
  void setPath(XmlString * PathIn);
  XmlString * getMachineManufacturerName();
  void setMachineManufacturerName(XmlString * MachineManufacturerNameIn);
  XmlString * getMachineIdentifier();
  void setMachineIdentifier(XmlString * MachineIdentifierIn);
  XmlString * getOperatorIdentifier();
  void setOperatorIdentifier(XmlString * OperatorIdentifierIn);
  XmlString * getShift();
  void setShift(XmlString * ShiftIn);
  XmlString * getDepartment();
  void setDepartment(XmlString * DepartmentIn);
  XmlString * getResponsibilityIdentifier();
  void setResponsibilityIdentifier(XmlString * ResponsibilityIdentifierIn);
  XmlString * getPlantSector();
  void setPlantSector(XmlString * PlantSectorIn);
  ProcessParametersType * getProcessParameters();
  void setProcessParameters(ProcessParametersType * ProcessParametersIn);
  QIFReferenceType * getAssociatedTraceabilityId();
  void setAssociatedTraceabilityId(QIFReferenceType * AssociatedTraceabilityIdIn);

protected:
  QIFIdType * id;
  AttributesType * Attributes;
  XmlString * Description;
  XmlString * Job;
  XmlString * Revision;
  QIFReferenceType * PreviousOperationId;
  XmlString * Path;
  XmlString * MachineManufacturerName;
  XmlString * MachineIdentifier;
  XmlString * OperatorIdentifier;
  XmlString * Shift;
  XmlString * Department;
  XmlString * ResponsibilityIdentifier;
  XmlString * PlantSector;
  ProcessParametersType * ProcessParameters;
  QIFReferenceType * AssociatedTraceabilityId;
};

/* ***************************************************************** */

class ManufacturingProcessTraceabilityTypeLisd :
  public std::list<ManufacturingProcessTraceabilityType *>,
  public XmlSchemaInstanceBase
{
public:
  ManufacturingProcessTraceabilityTypeLisd();
  ManufacturingProcessTraceabilityTypeLisd(
    ManufacturingProcessTraceabilityType * aManufacturingProcessTraceabilityType);
  ~ManufacturingProcessTraceabilityTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class PartialInspectionType :
  public XmlTypeBase
{
public:
  PartialInspectionType();
  PartialInspectionType(
    XmlString * BaselineProductNumberIn,
    XmlString * BaselineProductVersionIn,
    XmlString * ReasonForPartialInspectionIn);
  ~PartialInspectionType();
  void printSelf(FILE * outFile);

  XmlString * getBaselineProductNumber();
  void setBaselineProductNumber(XmlString * BaselineProductNumberIn);
  XmlString * getBaselineProductVersion();
  void setBaselineProductVersion(XmlString * BaselineProductVersionIn);
  XmlString * getReasonForPartialInspection();
  void setReasonForPartialInspection(XmlString * ReasonForPartialInspectionIn);

protected:
  XmlString * BaselineProductNumber;
  XmlString * BaselineProductVersion;
  XmlString * ReasonForPartialInspection;
};

/* ***************************************************************** */

class PreInspectionTraceabilityType :
  public XmlTypeBase
{
public:
  PreInspectionTraceabilityType();
  PreInspectionTraceabilityType(
    OrganizationType * InspectingOrganizationIn,
    CustomerOrganizationType * CustomerOrganizationIn,
    XmlString * SupplierCodeIn,
    XmlString * PurchaseOrderNumberIn,
    XmlString * OrderNumberIn,
    ArrayReferenceType * AsmPathIdsIn,
    XmlString * ReportNumberIn,
    InspectionScopeEnumType * InspectionScopeIn,
    InspectionModeEnumType * InspectionModeIn,
    PartialInspectionType * PartialInspectionIn,
    NotableEventsType * NotableEventsIn,
    InspectionSoftwareItemsType * InspectionSoftwareItemsIn,
    InspectionProgramType * InspectionProgramIn,
    SecurityClassificationType * SecurityClassificationIn,
    LocationType * PlantLocationIn,
    PreInspectionTr_1040_Type * PreInspectionTr_1040In,
    QIFReferenceType * FormalStandardIdIn,
    AttributesType * AttributesIn);
  ~PreInspectionTraceabilityType();
  void printSelf(FILE * outFile);

  OrganizationType * getInspectingOrganization();
  void setInspectingOrganization(OrganizationType * InspectingOrganizationIn);
  CustomerOrganizationType * getCustomerOrganization();
  void setCustomerOrganization(CustomerOrganizationType * CustomerOrganizationIn);
  XmlString * getSupplierCode();
  void setSupplierCode(XmlString * SupplierCodeIn);
  XmlString * getPurchaseOrderNumber();
  void setPurchaseOrderNumber(XmlString * PurchaseOrderNumberIn);
  XmlString * getOrderNumber();
  void setOrderNumber(XmlString * OrderNumberIn);
  ArrayReferenceType * getAsmPathIds();
  void setAsmPathIds(ArrayReferenceType * AsmPathIdsIn);
  XmlString * getReportNumber();
  void setReportNumber(XmlString * ReportNumberIn);
  InspectionScopeEnumType * getInspectionScope();
  void setInspectionScope(InspectionScopeEnumType * InspectionScopeIn);
  InspectionModeEnumType * getInspectionMode();
  void setInspectionMode(InspectionModeEnumType * InspectionModeIn);
  PartialInspectionType * getPartialInspection();
  void setPartialInspection(PartialInspectionType * PartialInspectionIn);
  NotableEventsType * getNotableEvents();
  void setNotableEvents(NotableEventsType * NotableEventsIn);
  InspectionSoftwareItemsType * getInspectionSoftwareItems();
  void setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn);
  InspectionProgramType * getInspectionProgram();
  void setInspectionProgram(InspectionProgramType * InspectionProgramIn);
  SecurityClassificationType * getSecurityClassification();
  void setSecurityClassification(SecurityClassificationType * SecurityClassificationIn);
  LocationType * getPlantLocation();
  void setPlantLocation(LocationType * PlantLocationIn);
  PreInspectionTr_1040_Type * getPreInspectionTr_1040();
  void setPreInspectionTr_1040(PreInspectionTr_1040_Type * PreInspectionTr_1040In);
  QIFReferenceType * getFormalStandardId();
  void setFormalStandardId(QIFReferenceType * FormalStandardIdIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  OrganizationType * InspectingOrganization;
  CustomerOrganizationType * CustomerOrganization;
  XmlString * SupplierCode;
  XmlString * PurchaseOrderNumber;
  XmlString * OrderNumber;
  ArrayReferenceType * AsmPathIds;
  XmlString * ReportNumber;
  InspectionScopeEnumType * InspectionScope;
  InspectionModeEnumType * InspectionMode;
  PartialInspectionType * PartialInspection;
  NotableEventsType * NotableEvents;
  InspectionSoftwareItemsType * InspectionSoftwareItems;
  InspectionProgramType * InspectionProgram;
  SecurityClassificationType * SecurityClassification;
  LocationType * PlantLocation;
  PreInspectionTr_1040_Type * PreInspectionTr_1040;
  QIFReferenceType * FormalStandardId;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class ProcessParameterType :
  public XmlTypeBase
{
public:
  ProcessParameterType();
  ProcessParameterType(
    XmlString * ParameterTypeIn,
    XmlString * ParameterValueIn);
  ~ProcessParameterType();
  void printSelf(FILE * outFile);

  XmlString * getParameterType();
  void setParameterType(XmlString * ParameterTypeIn);
  XmlString * getParameterValue();
  void setParameterValue(XmlString * ParameterValueIn);

protected:
  XmlString * ParameterType;
  XmlString * ParameterValue;
};

/* ***************************************************************** */

class ProcessParameterTypeLisd :
  public std::list<ProcessParameterType *>,
  public XmlSchemaInstanceBase
{
public:
  ProcessParameterTypeLisd();
  ProcessParameterTypeLisd(
    ProcessParameterType * aProcessParameterType);
  ~ProcessParameterTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ProcessParametersType :
  public XmlTypeBase
{
public:
  ProcessParametersType();
  ProcessParametersType(
    ProcessParameterTypeLisd * ParameterIn);
  ProcessParametersType(
    NaturalType * nIn,
    ProcessParameterTypeLisd * ParameterIn);
  ~ProcessParametersType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ProcessParameterTypeLisd * getParameter();
  void setParameter(ProcessParameterTypeLisd *);

protected:
  NaturalType * n;
  ProcessParameterTypeLisd * Parameter;
};

/* ***************************************************************** */

class ProductDataQualityAreaEnumType :
  public XmlNMTOKEN
{
public:
  ProductDataQualityAreaEnumType();
  ProductDataQualityAreaEnumType(
    const char * valIn);
  ~ProductDataQualityAreaEnumType();
  bool ProductDataQualityAreaEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class ProductDataQualityAreaType :
  public XmlTypeBase
{
public:
  ProductDataQualityAreaType();
  ProductDataQualityAreaType(
    ProductDataQualityAreaTypeChoicePair * ProductDataQualityAreaTypePairIn);
  ~ProductDataQualityAreaType();
  void printSelf(FILE * outFile);

  ProductDataQualityAreaTypeChoicePair * getProductDataQualityAreaTypePair();
  void setProductDataQualityAreaTypePair(ProductDataQualityAreaTypeChoicePair * ProductDataQualityAreaTypePairIn);

protected:
  ProductDataQualityAreaTypeChoicePair * ProductDataQualityAreaTypePair;
};

/* ***************************************************************** */

union ProductDataQualityAreaTypeVal
{
  ProductDataQualityAreaEnumType * AreaEnum;
  XmlString * OtherArea;
};

/* ***************************************************************** */

class ProductDataQualityAreaTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    AreaEnumE,
    OtherAreaE };
  ProductDataQualityAreaTypeChoicePair();
  ProductDataQualityAreaTypeChoicePair(
    whichOne ProductDataQualityAreaTypeTypeIn,
    ProductDataQualityAreaTypeVal * ProductDataQualityAreaTypeValueIn);
  ~ProductDataQualityAreaTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne ProductDataQualityAreaTypeType;
  ProductDataQualityAreaTypeVal * ProductDataQualityAreaTypeValue;
};

/* ***************************************************************** */

class ProductDataQualityCheckType :
  public XmlTypeBase
{
public:
  ProductDataQualityCheckType();
  ProductDataQualityCheckType(
    ProductDataQualityAreaType * TypeIn,
    XmlString * DescriptionIn,
    XmlString * RequirementsIn,
    XmlString * SourceOfRequirednessIn,
    SoftwareType * ApplicationToolIn,
    XmlAnyURI * XsltFileIn,
    XmlString * ResultStatementIn,
    CheckStatusEnumType * ResultStatusIn);
  ~ProductDataQualityCheckType();
  void printSelf(FILE * outFile);

  ProductDataQualityAreaType * getType();
  void setType(ProductDataQualityAreaType * TypeIn);
  XmlString * getDescription();
  void setDescription(XmlString * DescriptionIn);
  XmlString * getRequirements();
  void setRequirements(XmlString * RequirementsIn);
  XmlString * getSourceOfRequiredness();
  void setSourceOfRequiredness(XmlString * SourceOfRequirednessIn);
  SoftwareType * getApplicationTool();
  void setApplicationTool(SoftwareType * ApplicationToolIn);
  XmlAnyURI * getXsltFile();
  void setXsltFile(XmlAnyURI * XsltFileIn);
  XmlString * getResultStatement();
  void setResultStatement(XmlString * ResultStatementIn);
  CheckStatusEnumType * getResultStatus();
  void setResultStatus(CheckStatusEnumType * ResultStatusIn);

protected:
  ProductDataQualityAreaType * Type;
  XmlString * Description;
  XmlString * Requirements;
  XmlString * SourceOfRequiredness;
  SoftwareType * ApplicationTool;
  XmlAnyURI * XsltFile;
  XmlString * ResultStatement;
  CheckStatusEnumType * ResultStatus;
};

/* ***************************************************************** */

class ProductDataQualityCheckTypeLisd :
  public std::list<ProductDataQualityCheckType *>,
  public XmlSchemaInstanceBase
{
public:
  ProductDataQualityCheckTypeLisd();
  ProductDataQualityCheckTypeLisd(
    ProductDataQualityCheckType * aProductDataQualityCheckType);
  ~ProductDataQualityCheckTypeLisd();
  void printSelf(FILE * outFile);
};

/* ***************************************************************** */

class ProductDataQualityChecksType :
  public XmlTypeBase
{
public:
  ProductDataQualityChecksType();
  ProductDataQualityChecksType(
    ProductDataQualityCheckTypeLisd * ProductDataQualityCheckIn);
  ProductDataQualityChecksType(
    NaturalType * nIn,
    ProductDataQualityCheckTypeLisd * ProductDataQualityCheckIn);
  ~ProductDataQualityChecksType();
  void printSelf(FILE * outFile);
  bool badAttributes(AttributePairLisd * attributes);

  NaturalType * getn();
  void setn(NaturalType * nIn);

  ProductDataQualityCheckTypeLisd * getProductDataQualityCheck();
  void setProductDataQualityCheck(ProductDataQualityCheckTypeLisd *);

protected:
  NaturalType * n;
  ProductDataQualityCheckTypeLisd * ProductDataQualityCheck;
};

/* ***************************************************************** */

class ProductDataQualityType :
  public XmlTypeBase
{
public:
  ProductDataQualityType();
  ProductDataQualityType(
    XmlBoolean * ChecksPerformedIn,
    XmlBoolean * ChecksApprovedIn,
    XmlString * DeclarationIn,
    ProductDataQualityChecksType * ProductDataQualityChecksIn);
  ~ProductDataQualityType();
  void printSelf(FILE * outFile);

  XmlBoolean * getChecksPerformed();
  void setChecksPerformed(XmlBoolean * ChecksPerformedIn);
  XmlBoolean * getChecksApproved();
  void setChecksApproved(XmlBoolean * ChecksApprovedIn);
  XmlString * getDeclaration();
  void setDeclaration(XmlString * DeclarationIn);
  ProductDataQualityChecksType * getProductDataQualityChecks();
  void setProductDataQualityChecks(ProductDataQualityChecksType * ProductDataQualityChecksIn);

protected:
  XmlBoolean * ChecksPerformed;
  XmlBoolean * ChecksApproved;
  XmlString * Declaration;
  ProductDataQualityChecksType * ProductDataQualityChecks;
};

/* ***************************************************************** */

class ProductTraceabilityType :
  public XmlTypeBase
{
public:
  ProductTraceabilityType();
  ProductTraceabilityType(
    XmlString * ReportNumberIn,
    QIFReferenceType * ManufacturingProcessIdIn,
    QIFReferenceType * FixtureIdIn,
    ArrayReferenceType * NotableEventIdsIn,
    InspectionSoftwareItemsType * InspectionSoftwareItemsIn,
    InspectionProgramType * InspectionProgramIn,
    ArrayReferenceType * MeasurementDeviceIdsIn,
    AttributesType * AttributesIn);
  ~ProductTraceabilityType();
  void printSelf(FILE * outFile);

  XmlString * getReportNumber();
  void setReportNumber(XmlString * ReportNumberIn);
  QIFReferenceType * getManufacturingProcessId();
  void setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn);
  QIFReferenceType * getFixtureId();
  void setFixtureId(QIFReferenceType * FixtureIdIn);
  ArrayReferenceType * getNotableEventIds();
  void setNotableEventIds(ArrayReferenceType * NotableEventIdsIn);
  InspectionSoftwareItemsType * getInspectionSoftwareItems();
  void setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn);
  InspectionProgramType * getInspectionProgram();
  void setInspectionProgram(InspectionProgramType * InspectionProgramIn);
  ArrayReferenceType * getMeasurementDeviceIds();
  void setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn);
  AttributesType * getAttributes();
  void setAttributes(AttributesType * AttributesIn);

protected:
  XmlString * ReportNumber;
  QIFReferenceType * ManufacturingProcessId;
  QIFReferenceType * FixtureId;
  ArrayReferenceType * NotableEventIds;
  InspectionSoftwareItemsType * InspectionSoftwareItems;
  InspectionProgramType * InspectionProgram;
  ArrayReferenceType * MeasurementDeviceIds;
  AttributesType * Attributes;
};

/* ***************************************************************** */

class TimeDescriptionEnumType :
  public XmlNMTOKEN
{
public:
  TimeDescriptionEnumType();
  TimeDescriptionEnumType(
    const char * valIn);
  ~TimeDescriptionEnumType();
  bool TimeDescriptionEnumTypeIsBad();
  void printSelf(FILE * outFile);
  void oPrintSelf(FILE * outFile);
  virtual void printName(FILE * outFile);
};

/* ***************************************************************** */

class TimeDescriptionType :
  public XmlTypeBase
{
public:
  TimeDescriptionType();
  TimeDescriptionType(
    TimeDescriptionTypeChoicePair * TimeDescriptionTypePairIn);
  ~TimeDescriptionType();
  void printSelf(FILE * outFile);

  TimeDescriptionTypeChoicePair * getTimeDescriptionTypePair();
  void setTimeDescriptionTypePair(TimeDescriptionTypeChoicePair * TimeDescriptionTypePairIn);

protected:
  TimeDescriptionTypeChoicePair * TimeDescriptionTypePair;
};

/* ***************************************************************** */

union TimeDescriptionTypeVal
{
  TimeDescriptionEnumType * TimeDescriptionEnum;
  XmlString * OtherTimeDescription;
};

/* ***************************************************************** */

class TimeDescriptionTypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    TimeDescriptionEnumE,
    OtherTimeDescriptionE };
  TimeDescriptionTypeChoicePair();
  TimeDescriptionTypeChoicePair(
    whichOne TimeDescriptionTypeTypeIn,
    TimeDescriptionTypeVal * TimeDescriptionTypeValueIn);
  ~TimeDescriptionTypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne TimeDescriptionTypeType;
  TimeDescriptionTypeVal * TimeDescriptionTypeValue;
};

/* ***************************************************************** */

class ValidationCountsType :
  public XmlTypeBase
{
public:
  ValidationCountsType();
  ValidationCountsType(
    XmlUnsignedInt * ExternalQIFReferencesCountIn,
    XmlUnsignedInt * DatumDefinitionsCountIn,
    XmlUnsignedInt * DatumTargetDefinitionsCountIn,
    XmlUnsignedInt * TransformsCountIn,
    XmlUnsignedInt * CoordinateSystemsCountIn,
    XmlUnsignedInt * DatumReferenceFramesCountIn,
    XmlUnsignedInt * MeasurementResourcesCountIn,
    XmlUnsignedInt * ThreadSpecificationsCountIn,
    XmlUnsignedInt * ProductGeometrySetCountIn,
    XmlUnsignedInt * ProductTopologySetCountIn,
    XmlUnsignedInt * ProductNoteSetCountIn,
    XmlUnsignedInt * ProductNoteFlagSetCountIn,
    XmlUnsignedInt * ProductPartNoteSetCountIn,
    XmlUnsignedInt * ProductViewSetCountIn,
    XmlUnsignedInt * ProductLayerSetCountIn,
    XmlUnsignedInt * ProductCoordinateSystemSetCountIn,
    XmlUnsignedInt * ProductVisualizationSetCountIn,
    XmlUnsignedInt * ProductAuxiliarySetCountIn,
    XmlUnsignedInt * ProductPartSetCountIn,
    XmlUnsignedInt * ProductAssemblySetCountIn,
    XmlUnsignedInt * ProductComponentSetCountIn,
    XmlUnsignedInt * ProductAsmPathsCountIn,
    XmlUnsignedInt * FeatureDefinitionsCountIn,
    XmlUnsignedInt * FeatureNominalsCountIn,
    XmlUnsignedInt * FeatureItemsCountIn,
    XmlUnsignedInt * CharacteristicDefinitionsCountIn,
    XmlUnsignedInt * DefaultCharacteristicDefinitionsCountIn,
    XmlUnsignedInt * DefaultToleranceDefinitionsCountIn,
    XmlUnsignedInt * CharacteristicNominalsCountIn,
    XmlUnsignedInt * CharacteristicItemsCountIn,
    XmlUnsignedInt * CharacteristicGroupsCountIn,
    XmlUnsignedInt * WeldSymbolSetCountIn,
    XmlBoolean * MeasurementsPlanPresentIn,
    XmlUnsignedInt * MeasurementsResultsCountIn,
    XmlUnsignedInt * StatisticalStudyPlansCountIn,
    XmlUnsignedInt * StatisticalStudiesResultsCountIn,
    XmlUnsignedInt * CorrectiveActionPlansCountIn,
    XmlUnsignedInt * ManufacturingProcessTraceabilitiesCountIn,
    XmlUnsignedInt * FeatureRulesCountIn,
    XmlUnsignedInt * DMESelectionRulesCountIn,
    XmlBoolean * SignaturePresentIn);
  ~ValidationCountsType();
  void printSelf(FILE * outFile);

  XmlUnsignedInt * getExternalQIFReferencesCount();
  void setExternalQIFReferencesCount(XmlUnsignedInt * ExternalQIFReferencesCountIn);
  XmlUnsignedInt * getDatumDefinitionsCount();
  void setDatumDefinitionsCount(XmlUnsignedInt * DatumDefinitionsCountIn);
  XmlUnsignedInt * getDatumTargetDefinitionsCount();
  void setDatumTargetDefinitionsCount(XmlUnsignedInt * DatumTargetDefinitionsCountIn);
  XmlUnsignedInt * getTransformsCount();
  void setTransformsCount(XmlUnsignedInt * TransformsCountIn);
  XmlUnsignedInt * getCoordinateSystemsCount();
  void setCoordinateSystemsCount(XmlUnsignedInt * CoordinateSystemsCountIn);
  XmlUnsignedInt * getDatumReferenceFramesCount();
  void setDatumReferenceFramesCount(XmlUnsignedInt * DatumReferenceFramesCountIn);
  XmlUnsignedInt * getMeasurementResourcesCount();
  void setMeasurementResourcesCount(XmlUnsignedInt * MeasurementResourcesCountIn);
  XmlUnsignedInt * getThreadSpecificationsCount();
  void setThreadSpecificationsCount(XmlUnsignedInt * ThreadSpecificationsCountIn);
  XmlUnsignedInt * getProductGeometrySetCount();
  void setProductGeometrySetCount(XmlUnsignedInt * ProductGeometrySetCountIn);
  XmlUnsignedInt * getProductTopologySetCount();
  void setProductTopologySetCount(XmlUnsignedInt * ProductTopologySetCountIn);
  XmlUnsignedInt * getProductNoteSetCount();
  void setProductNoteSetCount(XmlUnsignedInt * ProductNoteSetCountIn);
  XmlUnsignedInt * getProductNoteFlagSetCount();
  void setProductNoteFlagSetCount(XmlUnsignedInt * ProductNoteFlagSetCountIn);
  XmlUnsignedInt * getProductPartNoteSetCount();
  void setProductPartNoteSetCount(XmlUnsignedInt * ProductPartNoteSetCountIn);
  XmlUnsignedInt * getProductViewSetCount();
  void setProductViewSetCount(XmlUnsignedInt * ProductViewSetCountIn);
  XmlUnsignedInt * getProductLayerSetCount();
  void setProductLayerSetCount(XmlUnsignedInt * ProductLayerSetCountIn);
  XmlUnsignedInt * getProductCoordinateSystemSetCount();
  void setProductCoordinateSystemSetCount(XmlUnsignedInt * ProductCoordinateSystemSetCountIn);
  XmlUnsignedInt * getProductVisualizationSetCount();
  void setProductVisualizationSetCount(XmlUnsignedInt * ProductVisualizationSetCountIn);
  XmlUnsignedInt * getProductAuxiliarySetCount();
  void setProductAuxiliarySetCount(XmlUnsignedInt * ProductAuxiliarySetCountIn);
  XmlUnsignedInt * getProductPartSetCount();
  void setProductPartSetCount(XmlUnsignedInt * ProductPartSetCountIn);
  XmlUnsignedInt * getProductAssemblySetCount();
  void setProductAssemblySetCount(XmlUnsignedInt * ProductAssemblySetCountIn);
  XmlUnsignedInt * getProductComponentSetCount();
  void setProductComponentSetCount(XmlUnsignedInt * ProductComponentSetCountIn);
  XmlUnsignedInt * getProductAsmPathsCount();
  void setProductAsmPathsCount(XmlUnsignedInt * ProductAsmPathsCountIn);
  XmlUnsignedInt * getFeatureDefinitionsCount();
  void setFeatureDefinitionsCount(XmlUnsignedInt * FeatureDefinitionsCountIn);
  XmlUnsignedInt * getFeatureNominalsCount();
  void setFeatureNominalsCount(XmlUnsignedInt * FeatureNominalsCountIn);
  XmlUnsignedInt * getFeatureItemsCount();
  void setFeatureItemsCount(XmlUnsignedInt * FeatureItemsCountIn);
  XmlUnsignedInt * getCharacteristicDefinitionsCount();
  void setCharacteristicDefinitionsCount(XmlUnsignedInt * CharacteristicDefinitionsCountIn);
  XmlUnsignedInt * getDefaultCharacteristicDefinitionsCount();
  void setDefaultCharacteristicDefinitionsCount(XmlUnsignedInt * DefaultCharacteristicDefinitionsCountIn);
  XmlUnsignedInt * getDefaultToleranceDefinitionsCount();
  void setDefaultToleranceDefinitionsCount(XmlUnsignedInt * DefaultToleranceDefinitionsCountIn);
  XmlUnsignedInt * getCharacteristicNominalsCount();
  void setCharacteristicNominalsCount(XmlUnsignedInt * CharacteristicNominalsCountIn);
  XmlUnsignedInt * getCharacteristicItemsCount();
  void setCharacteristicItemsCount(XmlUnsignedInt * CharacteristicItemsCountIn);
  XmlUnsignedInt * getCharacteristicGroupsCount();
  void setCharacteristicGroupsCount(XmlUnsignedInt * CharacteristicGroupsCountIn);
  XmlUnsignedInt * getWeldSymbolSetCount();
  void setWeldSymbolSetCount(XmlUnsignedInt * WeldSymbolSetCountIn);
  XmlBoolean * getMeasurementsPlanPresent();
  void setMeasurementsPlanPresent(XmlBoolean * MeasurementsPlanPresentIn);
  XmlUnsignedInt * getMeasurementsResultsCount();
  void setMeasurementsResultsCount(XmlUnsignedInt * MeasurementsResultsCountIn);
  XmlUnsignedInt * getStatisticalStudyPlansCount();
  void setStatisticalStudyPlansCount(XmlUnsignedInt * StatisticalStudyPlansCountIn);
  XmlUnsignedInt * getStatisticalStudiesResultsCount();
  void setStatisticalStudiesResultsCount(XmlUnsignedInt * StatisticalStudiesResultsCountIn);
  XmlUnsignedInt * getCorrectiveActionPlansCount();
  void setCorrectiveActionPlansCount(XmlUnsignedInt * CorrectiveActionPlansCountIn);
  XmlUnsignedInt * getManufacturingProcessTraceabilitiesCount();
  void setManufacturingProcessTraceabilitiesCount(XmlUnsignedInt * ManufacturingProcessTraceabilitiesCountIn);
  XmlUnsignedInt * getFeatureRulesCount();
  void setFeatureRulesCount(XmlUnsignedInt * FeatureRulesCountIn);
  XmlUnsignedInt * getDMESelectionRulesCount();
  void setDMESelectionRulesCount(XmlUnsignedInt * DMESelectionRulesCountIn);
  XmlBoolean * getSignaturePresent();
  void setSignaturePresent(XmlBoolean * SignaturePresentIn);

protected:
  XmlUnsignedInt * ExternalQIFReferencesCount;
  XmlUnsignedInt * DatumDefinitionsCount;
  XmlUnsignedInt * DatumTargetDefinitionsCount;
  XmlUnsignedInt * TransformsCount;
  XmlUnsignedInt * CoordinateSystemsCount;
  XmlUnsignedInt * DatumReferenceFramesCount;
  XmlUnsignedInt * MeasurementResourcesCount;
  XmlUnsignedInt * ThreadSpecificationsCount;
  XmlUnsignedInt * ProductGeometrySetCount;
  XmlUnsignedInt * ProductTopologySetCount;
  XmlUnsignedInt * ProductNoteSetCount;
  XmlUnsignedInt * ProductNoteFlagSetCount;
  XmlUnsignedInt * ProductPartNoteSetCount;
  XmlUnsignedInt * ProductViewSetCount;
  XmlUnsignedInt * ProductLayerSetCount;
  XmlUnsignedInt * ProductCoordinateSystemSetCount;
  XmlUnsignedInt * ProductVisualizationSetCount;
  XmlUnsignedInt * ProductAuxiliarySetCount;
  XmlUnsignedInt * ProductPartSetCount;
  XmlUnsignedInt * ProductAssemblySetCount;
  XmlUnsignedInt * ProductComponentSetCount;
  XmlUnsignedInt * ProductAsmPathsCount;
  XmlUnsignedInt * FeatureDefinitionsCount;
  XmlUnsignedInt * FeatureNominalsCount;
  XmlUnsignedInt * FeatureItemsCount;
  XmlUnsignedInt * CharacteristicDefinitionsCount;
  XmlUnsignedInt * DefaultCharacteristicDefinitionsCount;
  XmlUnsignedInt * DefaultToleranceDefinitionsCount;
  XmlUnsignedInt * CharacteristicNominalsCount;
  XmlUnsignedInt * CharacteristicItemsCount;
  XmlUnsignedInt * CharacteristicGroupsCount;
  XmlUnsignedInt * WeldSymbolSetCount;
  XmlBoolean * MeasurementsPlanPresent;
  XmlUnsignedInt * MeasurementsResultsCount;
  XmlUnsignedInt * StatisticalStudyPlansCount;
  XmlUnsignedInt * StatisticalStudiesResultsCount;
  XmlUnsignedInt * CorrectiveActionPlansCount;
  XmlUnsignedInt * ManufacturingProcessTraceabilitiesCount;
  XmlUnsignedInt * FeatureRulesCount;
  XmlUnsignedInt * DMESelectionRulesCount;
  XmlBoolean * SignaturePresent;
};

/* ***************************************************************** */

class InspectionTrace_1039_Type :
  public XmlTypeBase
{
public:
  InspectionTrace_1039_Type();
  InspectionTrace_1039_Type(
    InspectionTrace_1039_TypeChoicePair * InspectionTrace_1039_TypePairIn);
  ~InspectionTrace_1039_Type();
  void printSelf(FILE * outFile);

  InspectionTrace_1039_TypeChoicePair * getInspectionTrace_1039_TypePair();
  void setInspectionTrace_1039_TypePair(InspectionTrace_1039_TypeChoicePair * InspectionTrace_1039_TypePairIn);

protected:
  InspectionTrace_1039_TypeChoicePair * InspectionTrace_1039_TypePair;
};

/* ***************************************************************** */

union InspectionTrace_1039_TypeVal
{
  QPIdFullReferenceType * ReferencedQIFPlanInstance;
  XmlNMTOKEN * ReferencedQIFPlan;
};

/* ***************************************************************** */

class InspectionTrace_1039_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ReferencedQIFPlanInstanceE,
    ReferencedQIFPlanE };
  InspectionTrace_1039_TypeChoicePair();
  InspectionTrace_1039_TypeChoicePair(
    whichOne InspectionTrace_1039_TypeTypeIn,
    InspectionTrace_1039_TypeVal * InspectionTrace_1039_TypeValueIn);
  ~InspectionTrace_1039_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne InspectionTrace_1039_TypeType;
  InspectionTrace_1039_TypeVal * InspectionTrace_1039_TypeValue;
};

/* ***************************************************************** */

class PreInspectionTr_1040_Type :
  public XmlTypeBase
{
public:
  PreInspectionTr_1040_Type();
  PreInspectionTr_1040_Type(
    PreInspectionTr_1040_TypeChoicePair * PreInspectionTr_1040_TypePairIn);
  ~PreInspectionTr_1040_Type();
  void printSelf(FILE * outFile);

  PreInspectionTr_1040_TypeChoicePair * getPreInspectionTr_1040_TypePair();
  void setPreInspectionTr_1040_TypePair(PreInspectionTr_1040_TypeChoicePair * PreInspectionTr_1040_TypePairIn);

protected:
  PreInspectionTr_1040_TypeChoicePair * PreInspectionTr_1040_TypePair;
};

/* ***************************************************************** */

union PreInspectionTr_1040_TypeVal
{
  QPIdFullReferenceType * ReferencedQIFPlanInstance;
  XmlNMTOKEN * ReferencedQIFPlan;
};

/* ***************************************************************** */

class PreInspectionTr_1040_TypeChoicePair :
  public XmlTypeBase
{
public:
  enum whichOne {
    ReferencedQIFPlanInstanceE,
    ReferencedQIFPlanE };
  PreInspectionTr_1040_TypeChoicePair();
  PreInspectionTr_1040_TypeChoicePair(
    whichOne PreInspectionTr_1040_TypeTypeIn,
    PreInspectionTr_1040_TypeVal * PreInspectionTr_1040_TypeValueIn);
  ~PreInspectionTr_1040_TypeChoicePair();
  void printSelf(FILE * outFile);

  whichOne PreInspectionTr_1040_TypeType;
  PreInspectionTr_1040_TypeVal * PreInspectionTr_1040_TypeValue;
};

/* ***************************************************************** */

#endif // TRACEABILITY_HH
