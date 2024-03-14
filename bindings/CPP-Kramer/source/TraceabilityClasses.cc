/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <xmlSchemaInstance.hh>
#include "TraceabilityClasses.hh"

#define INDENT 2

/* ***************************************************************** */
/* ***************************************************************** */

/* class ActualProductTraceabilityType

*/

ActualProductTraceabilityType::ActualProductTraceabilityType()
{
  SampleNumber = 0;
  LotNumber = 0;
  ReportNumber = 0;
  ManufacturingProcessId = 0;
  FixtureId = 0;
  NotableEventIds = 0;
  NotedEventIds = 0;
  InspectionStart = 0;
  InspectionEnd = 0;
  InspectionSoftwareItems = 0;
  InspectionProgram = 0;
  InspectionOperator = 0;
  MeasurementDeviceIds = 0;
  ProductEnvironments = 0;
  Errors = 0;
  Attributes = 0;
}

ActualProductTraceabilityType::ActualProductTraceabilityType(
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
 AttributesType * AttributesIn)
{
  SampleNumber = SampleNumberIn;
  LotNumber = LotNumberIn;
  ReportNumber = ReportNumberIn;
  ManufacturingProcessId = ManufacturingProcessIdIn;
  FixtureId = FixtureIdIn;
  NotableEventIds = NotableEventIdsIn;
  NotedEventIds = NotedEventIdsIn;
  InspectionStart = InspectionStartIn;
  InspectionEnd = InspectionEndIn;
  InspectionSoftwareItems = InspectionSoftwareItemsIn;
  InspectionProgram = InspectionProgramIn;
  InspectionOperator = InspectionOperatorIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  ProductEnvironments = ProductEnvironmentsIn;
  Errors = ErrorsIn;
  Attributes = AttributesIn;
}

ActualProductTraceabilityType::~ActualProductTraceabilityType()
{
  #ifndef NODESTRUCT
  delete SampleNumber;
  delete LotNumber;
  delete ReportNumber;
  delete ManufacturingProcessId;
  delete FixtureId;
  delete NotableEventIds;
  delete NotedEventIds;
  delete InspectionStart;
  delete InspectionEnd;
  delete InspectionSoftwareItems;
  delete InspectionProgram;
  delete InspectionOperator;
  delete MeasurementDeviceIds;
  delete ProductEnvironments;
  delete Errors;
  delete Attributes;
  #endif
}

void ActualProductTraceabilityType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (SampleNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SampleNumber");
      SampleNumber->printSelf(outFile);
      fprintf(outFile, "</SampleNumber>\n");
    }
  if (LotNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LotNumber");
      LotNumber->printSelf(outFile);
      fprintf(outFile, "</LotNumber>\n");
    }
  if (ReportNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReportNumber");
      ReportNumber->printSelf(outFile);
      fprintf(outFile, "</ReportNumber>\n");
    }
  if (ManufacturingProcessId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ManufacturingProcessId");
      ManufacturingProcessId->printSelf(outFile);
      fprintf(outFile, "</ManufacturingProcessId>\n");
    }
  if (FixtureId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FixtureId");
      FixtureId->printSelf(outFile);
      fprintf(outFile, "</FixtureId>\n");
    }
  if (NotableEventIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NotableEventIds");
      NotableEventIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NotableEventIds>\n");
    }
  if (NotedEventIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NotedEventIds");
      NotedEventIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NotedEventIds>\n");
    }
  if (InspectionStart)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionStart");
      InspectionStart->printSelf(outFile);
      fprintf(outFile, "</InspectionStart>\n");
    }
  if (InspectionEnd)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionEnd");
      InspectionEnd->printSelf(outFile);
      fprintf(outFile, "</InspectionEnd>\n");
    }
  if (InspectionSoftwareItems)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionSoftwareItems");
      InspectionSoftwareItems->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionSoftwareItems>\n");
    }
  if (InspectionProgram)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionProgram");
      InspectionProgram->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionProgram>\n");
    }
  if (InspectionOperator)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionOperator");
      InspectionOperator->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionOperator>\n");
    }
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  if (ProductEnvironments)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductEnvironments");
      ProductEnvironments->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ProductEnvironments>\n");
    }
  if (Errors)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Errors");
      Errors->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Errors>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlString * ActualProductTraceabilityType::getSampleNumber()
{return SampleNumber;}

void ActualProductTraceabilityType::setSampleNumber(XmlString * SampleNumberIn)
{SampleNumber = SampleNumberIn;}

XmlString * ActualProductTraceabilityType::getLotNumber()
{return LotNumber;}

void ActualProductTraceabilityType::setLotNumber(XmlString * LotNumberIn)
{LotNumber = LotNumberIn;}

XmlString * ActualProductTraceabilityType::getReportNumber()
{return ReportNumber;}

void ActualProductTraceabilityType::setReportNumber(XmlString * ReportNumberIn)
{ReportNumber = ReportNumberIn;}

QIFReferenceType * ActualProductTraceabilityType::getManufacturingProcessId()
{return ManufacturingProcessId;}

void ActualProductTraceabilityType::setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn)
{ManufacturingProcessId = ManufacturingProcessIdIn;}

QIFReferenceType * ActualProductTraceabilityType::getFixtureId()
{return FixtureId;}

void ActualProductTraceabilityType::setFixtureId(QIFReferenceType * FixtureIdIn)
{FixtureId = FixtureIdIn;}

ArrayReferenceType * ActualProductTraceabilityType::getNotableEventIds()
{return NotableEventIds;}

void ActualProductTraceabilityType::setNotableEventIds(ArrayReferenceType * NotableEventIdsIn)
{NotableEventIds = NotableEventIdsIn;}

ArrayReferenceType * ActualProductTraceabilityType::getNotedEventIds()
{return NotedEventIds;}

void ActualProductTraceabilityType::setNotedEventIds(ArrayReferenceType * NotedEventIdsIn)
{NotedEventIds = NotedEventIdsIn;}

XmlDateTime * ActualProductTraceabilityType::getInspectionStart()
{return InspectionStart;}

void ActualProductTraceabilityType::setInspectionStart(XmlDateTime * InspectionStartIn)
{InspectionStart = InspectionStartIn;}

XmlDateTime * ActualProductTraceabilityType::getInspectionEnd()
{return InspectionEnd;}

void ActualProductTraceabilityType::setInspectionEnd(XmlDateTime * InspectionEndIn)
{InspectionEnd = InspectionEndIn;}

InspectionSoftwareItemsType * ActualProductTraceabilityType::getInspectionSoftwareItems()
{return InspectionSoftwareItems;}

void ActualProductTraceabilityType::setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn)
{InspectionSoftwareItems = InspectionSoftwareItemsIn;}

InspectionProgramType * ActualProductTraceabilityType::getInspectionProgram()
{return InspectionProgram;}

void ActualProductTraceabilityType::setInspectionProgram(InspectionProgramType * InspectionProgramIn)
{InspectionProgram = InspectionProgramIn;}

EmployeeType * ActualProductTraceabilityType::getInspectionOperator()
{return InspectionOperator;}

void ActualProductTraceabilityType::setInspectionOperator(EmployeeType * InspectionOperatorIn)
{InspectionOperator = InspectionOperatorIn;}

ArrayReferenceType * ActualProductTraceabilityType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void ActualProductTraceabilityType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

EnvironmentsType * ActualProductTraceabilityType::getProductEnvironments()
{return ProductEnvironments;}

void ActualProductTraceabilityType::setProductEnvironments(EnvironmentsType * ProductEnvironmentsIn)
{ProductEnvironments = ProductEnvironmentsIn;}

ErrorsType * ActualProductTraceabilityType::getErrors()
{return Errors;}

void ActualProductTraceabilityType::setErrors(ErrorsType * ErrorsIn)
{Errors = ErrorsIn;}

AttributesType * ActualProductTraceabilityType::getAttributes()
{return Attributes;}

void ActualProductTraceabilityType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class CheckStatusEnumType

*/

CheckStatusEnumType::CheckStatusEnumType() :
  XmlNMTOKEN()
{
}

CheckStatusEnumType::CheckStatusEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "PASS") &&
           strcmp(val.c_str(), "FAIL") &&
           strcmp(val.c_str(), "PENDING"));
}

CheckStatusEnumType::~CheckStatusEnumType() {}

bool CheckStatusEnumType::CheckStatusEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "PASS") &&
          strcmp(val.c_str(), "FAIL") &&
          strcmp(val.c_str(), "PENDING"));
}

void CheckStatusEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "CheckStatusEnumType");
}

void CheckStatusEnumType::printSelf(FILE * outFile)
{
  if (CheckStatusEnumTypeIsBad())
    {
      fprintf(stderr, "bad CheckStatusEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void CheckStatusEnumType::oPrintSelf(FILE * outFile)
{
  if (CheckStatusEnumTypeIsBad())
    {
      fprintf(stderr, "bad CheckStatusEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class EnvironmentType

*/

EnvironmentType::EnvironmentType()
{
  Attributes = 0;
  ObjectTemperature = 0;
  AmbientTemperature = 0;
  RelativeHumidity = 0;
  DateAndTime = 0;
  TimeDescription = 0;
}

EnvironmentType::EnvironmentType(
 AttributesType * AttributesIn,
 MeasuredTemperatureValueType * ObjectTemperatureIn,
 MeasuredTemperatureValueType * AmbientTemperatureIn,
 MeasuredDecimalType * RelativeHumidityIn,
 XmlDateTime * DateAndTimeIn,
 TimeDescriptionType * TimeDescriptionIn)
{
  Attributes = AttributesIn;
  ObjectTemperature = ObjectTemperatureIn;
  AmbientTemperature = AmbientTemperatureIn;
  RelativeHumidity = RelativeHumidityIn;
  DateAndTime = DateAndTimeIn;
  TimeDescription = TimeDescriptionIn;
}

EnvironmentType::~EnvironmentType()
{
  #ifndef NODESTRUCT
  delete Attributes;
  delete ObjectTemperature;
  delete AmbientTemperature;
  delete RelativeHumidity;
  delete DateAndTime;
  delete TimeDescription;
  #endif
}

void EnvironmentType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (ObjectTemperature)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ObjectTemperature");
      ObjectTemperature->printSelf(outFile);
      fprintf(outFile, "</ObjectTemperature>\n");
    }
  if (AmbientTemperature)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AmbientTemperature");
      AmbientTemperature->printSelf(outFile);
      fprintf(outFile, "</AmbientTemperature>\n");
    }
  if (RelativeHumidity)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RelativeHumidity");
      RelativeHumidity->printSelf(outFile);
      fprintf(outFile, "</RelativeHumidity>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<DateAndTime");
  DateAndTime->printSelf(outFile);
  fprintf(outFile, "</DateAndTime>\n");
  if (TimeDescription)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeDescription");
      TimeDescription->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeDescription>\n");
    }
  doSpaces(-INDENT, outFile);
}

AttributesType * EnvironmentType::getAttributes()
{return Attributes;}

void EnvironmentType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

MeasuredTemperatureValueType * EnvironmentType::getObjectTemperature()
{return ObjectTemperature;}

void EnvironmentType::setObjectTemperature(MeasuredTemperatureValueType * ObjectTemperatureIn)
{ObjectTemperature = ObjectTemperatureIn;}

MeasuredTemperatureValueType * EnvironmentType::getAmbientTemperature()
{return AmbientTemperature;}

void EnvironmentType::setAmbientTemperature(MeasuredTemperatureValueType * AmbientTemperatureIn)
{AmbientTemperature = AmbientTemperatureIn;}

MeasuredDecimalType * EnvironmentType::getRelativeHumidity()
{return RelativeHumidity;}

void EnvironmentType::setRelativeHumidity(MeasuredDecimalType * RelativeHumidityIn)
{RelativeHumidity = RelativeHumidityIn;}

XmlDateTime * EnvironmentType::getDateAndTime()
{return DateAndTime;}

void EnvironmentType::setDateAndTime(XmlDateTime * DateAndTimeIn)
{DateAndTime = DateAndTimeIn;}

TimeDescriptionType * EnvironmentType::getTimeDescription()
{return TimeDescription;}

void EnvironmentType::setTimeDescription(TimeDescriptionType * TimeDescriptionIn)
{TimeDescription = TimeDescriptionIn;}

/* ***************************************************************** */

/* class EnvironmentTypeLisd

*/

EnvironmentTypeLisd::EnvironmentTypeLisd() {}

EnvironmentTypeLisd::EnvironmentTypeLisd(EnvironmentType * aEnvironmentType)
{
  push_back(aEnvironmentType);
}

EnvironmentTypeLisd::~EnvironmentTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<EnvironmentType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void EnvironmentTypeLisd::printSelf(FILE * outFile)
{
  std::list<EnvironmentType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class EnvironmentsType

*/

EnvironmentsType::EnvironmentsType()
{
  n = 0;
  Environment = 0;
}

EnvironmentsType::EnvironmentsType(
 EnvironmentTypeLisd * EnvironmentIn)
{
  n = 0;
  Environment = EnvironmentIn;
}

EnvironmentsType::EnvironmentsType(
 NaturalType * nIn,
 EnvironmentTypeLisd * EnvironmentIn)
{
  n = nIn;
  Environment = EnvironmentIn;
}

EnvironmentsType::~EnvironmentsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Environment;
  #endif
}

void EnvironmentsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (n)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "n=\"");
      n->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"n\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!Environment)
      {
        fprintf(stderr, "Environment list is missing\n");
        exit(1);
      }
    if (Environment->size() == 0)
      {
        fprintf(stderr, "Environment list is empty\n");
        exit(1);
      }
    if (Environment->size() < 1)
      {
        fprintf(stderr,
                "size of Environment list (%d) less than minimum required (1)\n",
                (int)Environment->size());
        exit(1);
      }
    std::list<EnvironmentType *>::iterator iter;
    for (iter = Environment->begin();
         iter != Environment->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Environment");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Environment>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool EnvironmentsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in EnvironmentsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in EnvironmentsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EnvironmentsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in EnvironmentsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * EnvironmentsType::getn()
{return n;}

void EnvironmentsType::setn(NaturalType * nIn)
{n = nIn;}

EnvironmentTypeLisd * EnvironmentsType::getEnvironment()
{return Environment;}

void EnvironmentsType::setEnvironment(EnvironmentTypeLisd * EnvironmentIn)
{Environment = EnvironmentIn;}

/* ***************************************************************** */

/* class ErrorsType

*/

ErrorsType::ErrorsType()
{
  n = 0;
  Error = 0;
}

ErrorsType::ErrorsType(
 XmlStringLisd * ErrorIn)
{
  n = 0;
  Error = ErrorIn;
}

ErrorsType::ErrorsType(
 NaturalType * nIn,
 XmlStringLisd * ErrorIn)
{
  n = nIn;
  Error = ErrorIn;
}

ErrorsType::~ErrorsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Error;
  #endif
}

void ErrorsType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (n)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "n=\"");
      n->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"n\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!Error)
      {
        fprintf(stderr, "Error list is missing\n");
        exit(1);
      }
    if (Error->size() == 0)
      {
        fprintf(stderr, "Error list is empty\n");
        exit(1);
      }
    if (Error->size() < 1)
      {
        fprintf(stderr,
                "size of Error list (%d) less than minimum required (1)\n",
                (int)Error->size());
        exit(1);
      }
    std::list<XmlString *>::iterator iter;
    for (iter = Error->begin();
         iter != Error->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Error");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Error>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ErrorsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ErrorsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ErrorsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ErrorsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ErrorsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * ErrorsType::getn()
{return n;}

void ErrorsType::setn(NaturalType * nIn)
{n = nIn;}

XmlStringLisd * ErrorsType::getError()
{return Error;}

void ErrorsType::setError(XmlStringLisd * ErrorIn)
{Error = ErrorIn;}

/* ***************************************************************** */

/* class InspectionModeEnumType

*/

InspectionModeEnumType::InspectionModeEnumType() :
  XmlString()
{
}

InspectionModeEnumType::InspectionModeEnumType(
 const char * valIn) :
  XmlString(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "FAI_Full") &&
           strcmp(val.c_str(), "FAI_Partial") &&
           strcmp(val.c_str(), "100Percent") &&
           strcmp(val.c_str(), "APQP") &&
           strcmp(val.c_str(), "KPC") &&
           strcmp(val.c_str(), "PPAP"));
}

InspectionModeEnumType::~InspectionModeEnumType() {}

bool InspectionModeEnumType::InspectionModeEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "FAI_Full") &&
          strcmp(val.c_str(), "FAI_Partial") &&
          strcmp(val.c_str(), "100Percent") &&
          strcmp(val.c_str(), "APQP") &&
          strcmp(val.c_str(), "KPC") &&
          strcmp(val.c_str(), "PPAP"));
}

void InspectionModeEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "InspectionModeEnumType");
}

void InspectionModeEnumType::printSelf(FILE * outFile)
{
  if (InspectionModeEnumTypeIsBad())
    {
      fprintf(stderr, "bad InspectionModeEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::printSelf(outFile);
}

void InspectionModeEnumType::oPrintSelf(FILE * outFile)
{
  if (InspectionModeEnumTypeIsBad())
    {
      fprintf(stderr, "bad InspectionModeEnumType value, ");
      XmlString::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlString::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class InspectionProgramType

*/

InspectionProgramType::InspectionProgramType()
{
  File = 0;
  Description = 0;
  FormalStandardId = 0;
  Author = 0;
}

InspectionProgramType::InspectionProgramType(
 FileType * FileIn,
 XmlString * DescriptionIn,
 QIFReferenceType * FormalStandardIdIn,
 EmployeeType * AuthorIn)
{
  File = FileIn;
  Description = DescriptionIn;
  FormalStandardId = FormalStandardIdIn;
  Author = AuthorIn;
}

InspectionProgramType::~InspectionProgramType()
{
  #ifndef NODESTRUCT
  delete File;
  delete Description;
  delete FormalStandardId;
  delete Author;
  #endif
}

void InspectionProgramType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<File");
  File->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</File>\n");
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<FormalStandardId");
  FormalStandardId->printSelf(outFile);
  fprintf(outFile, "</FormalStandardId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Author");
  Author->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Author>\n");
  doSpaces(-INDENT, outFile);
}

FileType * InspectionProgramType::getFile()
{return File;}

void InspectionProgramType::setFile(FileType * FileIn)
{File = FileIn;}

XmlString * InspectionProgramType::getDescription()
{return Description;}

void InspectionProgramType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

QIFReferenceType * InspectionProgramType::getFormalStandardId()
{return FormalStandardId;}

void InspectionProgramType::setFormalStandardId(QIFReferenceType * FormalStandardIdIn)
{FormalStandardId = FormalStandardIdIn;}

EmployeeType * InspectionProgramType::getAuthor()
{return Author;}

void InspectionProgramType::setAuthor(EmployeeType * AuthorIn)
{Author = AuthorIn;}

/* ***************************************************************** */

/* class InspectionScopeEnumType

*/

InspectionScopeEnumType::InspectionScopeEnumType() :
  XmlNMTOKEN()
{
}

InspectionScopeEnumType::InspectionScopeEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "DETAIL") &&
           strcmp(val.c_str(), "ASSEMBLY"));
}

InspectionScopeEnumType::~InspectionScopeEnumType() {}

bool InspectionScopeEnumType::InspectionScopeEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "DETAIL") &&
          strcmp(val.c_str(), "ASSEMBLY"));
}

void InspectionScopeEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "InspectionScopeEnumType");
}

void InspectionScopeEnumType::printSelf(FILE * outFile)
{
  if (InspectionScopeEnumTypeIsBad())
    {
      fprintf(stderr, "bad InspectionScopeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void InspectionScopeEnumType::oPrintSelf(FILE * outFile)
{
  if (InspectionScopeEnumTypeIsBad())
    {
      fprintf(stderr, "bad InspectionScopeEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class InspectionSoftwareItemsType

*/

InspectionSoftwareItemsType::InspectionSoftwareItemsType()
{
  InspectionProgramGenerationSoftware = 0;
  InspectionProgramExecutionSoftware = 0;
  AnalysisSoftware = 0;
  CADSoftware = 0;
  DMESoftware = 0;
}

InspectionSoftwareItemsType::InspectionSoftwareItemsType(
 ArrayReferenceType * InspectionProgramGenerationSoftwareIn,
 ArrayReferenceType * InspectionProgramExecutionSoftwareIn,
 ArrayReferenceType * AnalysisSoftwareIn,
 ArrayReferenceType * CADSoftwareIn,
 ArrayReferenceType * DMESoftwareIn)
{
  InspectionProgramGenerationSoftware = InspectionProgramGenerationSoftwareIn;
  InspectionProgramExecutionSoftware = InspectionProgramExecutionSoftwareIn;
  AnalysisSoftware = AnalysisSoftwareIn;
  CADSoftware = CADSoftwareIn;
  DMESoftware = DMESoftwareIn;
}

InspectionSoftwareItemsType::~InspectionSoftwareItemsType()
{
  #ifndef NODESTRUCT
  delete InspectionProgramGenerationSoftware;
  delete InspectionProgramExecutionSoftware;
  delete AnalysisSoftware;
  delete CADSoftware;
  delete DMESoftware;
  #endif
}

void InspectionSoftwareItemsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (InspectionProgramGenerationSoftware)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionProgramGenerationSoftware");
      InspectionProgramGenerationSoftware->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionProgramGenerationSoftware>\n");
    }
  if (InspectionProgramExecutionSoftware)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionProgramExecutionSoftware");
      InspectionProgramExecutionSoftware->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionProgramExecutionSoftware>\n");
    }
  if (AnalysisSoftware)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AnalysisSoftware");
      AnalysisSoftware->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AnalysisSoftware>\n");
    }
  if (CADSoftware)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CADSoftware");
      CADSoftware->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CADSoftware>\n");
    }
  if (DMESoftware)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DMESoftware");
      DMESoftware->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</DMESoftware>\n");
    }
  doSpaces(-INDENT, outFile);
}

ArrayReferenceType * InspectionSoftwareItemsType::getInspectionProgramGenerationSoftware()
{return InspectionProgramGenerationSoftware;}

void InspectionSoftwareItemsType::setInspectionProgramGenerationSoftware(ArrayReferenceType * InspectionProgramGenerationSoftwareIn)
{InspectionProgramGenerationSoftware = InspectionProgramGenerationSoftwareIn;}

ArrayReferenceType * InspectionSoftwareItemsType::getInspectionProgramExecutionSoftware()
{return InspectionProgramExecutionSoftware;}

void InspectionSoftwareItemsType::setInspectionProgramExecutionSoftware(ArrayReferenceType * InspectionProgramExecutionSoftwareIn)
{InspectionProgramExecutionSoftware = InspectionProgramExecutionSoftwareIn;}

ArrayReferenceType * InspectionSoftwareItemsType::getAnalysisSoftware()
{return AnalysisSoftware;}

void InspectionSoftwareItemsType::setAnalysisSoftware(ArrayReferenceType * AnalysisSoftwareIn)
{AnalysisSoftware = AnalysisSoftwareIn;}

ArrayReferenceType * InspectionSoftwareItemsType::getCADSoftware()
{return CADSoftware;}

void InspectionSoftwareItemsType::setCADSoftware(ArrayReferenceType * CADSoftwareIn)
{CADSoftware = CADSoftwareIn;}

ArrayReferenceType * InspectionSoftwareItemsType::getDMESoftware()
{return DMESoftware;}

void InspectionSoftwareItemsType::setDMESoftware(ArrayReferenceType * DMESoftwareIn)
{DMESoftware = DMESoftwareIn;}

/* ***************************************************************** */

/* class InspectionTraceabilityType

*/

InspectionTraceabilityType::InspectionTraceabilityType()
{
  InspectingOrganization = 0;
  CustomerOrganization = 0;
  SupplierCode = 0;
  PurchaseOrderNumber = 0;
  OrderNumber = 0;
  ReportNumber = 0;
  InspectionScope = 0;
  InspectionMode = 0;
  PartialInspection = 0;
  NotableEvents = 0;
  NotedEvents = 0;
  InspectionStart = 0;
  InspectionEnd = 0;
  InspectionSoftwareItems = 0;
  InspectionProgram = 0;
  InspectionOperator = 0;
  ReportPreparer = 0;
  ReportPreparationDate = 0;
  ReportType = 0;
  SecurityClassification = 0;
  PlantLocation = 0;
  InspectionTrace_1039 = 0;
  Errors = 0;
  Attributes = 0;
}

InspectionTraceabilityType::InspectionTraceabilityType(
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
 AttributesType * AttributesIn)
{
  InspectingOrganization = InspectingOrganizationIn;
  CustomerOrganization = CustomerOrganizationIn;
  SupplierCode = SupplierCodeIn;
  PurchaseOrderNumber = PurchaseOrderNumberIn;
  OrderNumber = OrderNumberIn;
  ReportNumber = ReportNumberIn;
  InspectionScope = InspectionScopeIn;
  InspectionMode = InspectionModeIn;
  PartialInspection = PartialInspectionIn;
  NotableEvents = NotableEventsIn;
  NotedEvents = NotedEventsIn;
  InspectionStart = InspectionStartIn;
  InspectionEnd = InspectionEndIn;
  InspectionSoftwareItems = InspectionSoftwareItemsIn;
  InspectionProgram = InspectionProgramIn;
  InspectionOperator = InspectionOperatorIn;
  ReportPreparer = ReportPreparerIn;
  ReportPreparationDate = ReportPreparationDateIn;
  ReportType = ReportTypeIn;
  SecurityClassification = SecurityClassificationIn;
  PlantLocation = PlantLocationIn;
  InspectionTrace_1039 = InspectionTrace_1039In;
  Errors = ErrorsIn;
  Attributes = AttributesIn;
}

InspectionTraceabilityType::~InspectionTraceabilityType()
{
  #ifndef NODESTRUCT
  delete InspectingOrganization;
  delete CustomerOrganization;
  delete SupplierCode;
  delete PurchaseOrderNumber;
  delete OrderNumber;
  delete ReportNumber;
  delete InspectionScope;
  delete InspectionMode;
  delete PartialInspection;
  delete NotableEvents;
  delete NotedEvents;
  delete InspectionStart;
  delete InspectionEnd;
  delete InspectionSoftwareItems;
  delete InspectionProgram;
  delete InspectionOperator;
  delete ReportPreparer;
  delete ReportPreparationDate;
  delete ReportType;
  delete SecurityClassification;
  delete PlantLocation;
  delete InspectionTrace_1039;
  delete Errors;
  delete Attributes;
  #endif
}

void InspectionTraceabilityType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (InspectingOrganization)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectingOrganization");
      InspectingOrganization->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectingOrganization>\n");
    }
  if (CustomerOrganization)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CustomerOrganization");
      CustomerOrganization->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CustomerOrganization>\n");
    }
  if (SupplierCode)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SupplierCode");
      SupplierCode->printSelf(outFile);
      fprintf(outFile, "</SupplierCode>\n");
    }
  if (PurchaseOrderNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PurchaseOrderNumber");
      PurchaseOrderNumber->printSelf(outFile);
      fprintf(outFile, "</PurchaseOrderNumber>\n");
    }
  if (OrderNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OrderNumber");
      OrderNumber->printSelf(outFile);
      fprintf(outFile, "</OrderNumber>\n");
    }
  if (ReportNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReportNumber");
      ReportNumber->printSelf(outFile);
      fprintf(outFile, "</ReportNumber>\n");
    }
  if (InspectionScope)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionScope");
      InspectionScope->printSelf(outFile);
      fprintf(outFile, "</InspectionScope>\n");
    }
  if (InspectionMode)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionMode");
      InspectionMode->printSelf(outFile);
      fprintf(outFile, "</InspectionMode>\n");
    }
  if (PartialInspection)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartialInspection");
      PartialInspection->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartialInspection>\n");
    }
  if (NotableEvents)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NotableEvents");
      NotableEvents->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NotableEvents>\n");
    }
  if (NotedEvents)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NotedEvents");
      NotedEvents->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NotedEvents>\n");
    }
  if (InspectionStart)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionStart");
      InspectionStart->printSelf(outFile);
      fprintf(outFile, "</InspectionStart>\n");
    }
  if (InspectionEnd)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionEnd");
      InspectionEnd->printSelf(outFile);
      fprintf(outFile, "</InspectionEnd>\n");
    }
  if (InspectionSoftwareItems)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionSoftwareItems");
      InspectionSoftwareItems->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionSoftwareItems>\n");
    }
  if (InspectionProgram)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionProgram");
      InspectionProgram->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionProgram>\n");
    }
  if (InspectionOperator)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionOperator");
      InspectionOperator->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionOperator>\n");
    }
  if (ReportPreparer)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReportPreparer");
      ReportPreparer->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ReportPreparer>\n");
    }
  if (ReportPreparationDate)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReportPreparationDate");
      ReportPreparationDate->printSelf(outFile);
      fprintf(outFile, "</ReportPreparationDate>\n");
    }
  if (ReportType)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReportType");
      ReportType->printSelf(outFile);
      fprintf(outFile, "</ReportType>\n");
    }
  if (SecurityClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecurityClassification");
      SecurityClassification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SecurityClassification>\n");
    }
  if (PlantLocation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlantLocation");
      PlantLocation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PlantLocation>\n");
    }
  if (InspectionTrace_1039)
    {
  InspectionTrace_1039->printSelf(outFile);
    }
  if (Errors)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Errors");
      Errors->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Errors>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

OrganizationType * InspectionTraceabilityType::getInspectingOrganization()
{return InspectingOrganization;}

void InspectionTraceabilityType::setInspectingOrganization(OrganizationType * InspectingOrganizationIn)
{InspectingOrganization = InspectingOrganizationIn;}

CustomerOrganizationType * InspectionTraceabilityType::getCustomerOrganization()
{return CustomerOrganization;}

void InspectionTraceabilityType::setCustomerOrganization(CustomerOrganizationType * CustomerOrganizationIn)
{CustomerOrganization = CustomerOrganizationIn;}

XmlString * InspectionTraceabilityType::getSupplierCode()
{return SupplierCode;}

void InspectionTraceabilityType::setSupplierCode(XmlString * SupplierCodeIn)
{SupplierCode = SupplierCodeIn;}

XmlString * InspectionTraceabilityType::getPurchaseOrderNumber()
{return PurchaseOrderNumber;}

void InspectionTraceabilityType::setPurchaseOrderNumber(XmlString * PurchaseOrderNumberIn)
{PurchaseOrderNumber = PurchaseOrderNumberIn;}

XmlString * InspectionTraceabilityType::getOrderNumber()
{return OrderNumber;}

void InspectionTraceabilityType::setOrderNumber(XmlString * OrderNumberIn)
{OrderNumber = OrderNumberIn;}

XmlString * InspectionTraceabilityType::getReportNumber()
{return ReportNumber;}

void InspectionTraceabilityType::setReportNumber(XmlString * ReportNumberIn)
{ReportNumber = ReportNumberIn;}

InspectionScopeEnumType * InspectionTraceabilityType::getInspectionScope()
{return InspectionScope;}

void InspectionTraceabilityType::setInspectionScope(InspectionScopeEnumType * InspectionScopeIn)
{InspectionScope = InspectionScopeIn;}

InspectionModeEnumType * InspectionTraceabilityType::getInspectionMode()
{return InspectionMode;}

void InspectionTraceabilityType::setInspectionMode(InspectionModeEnumType * InspectionModeIn)
{InspectionMode = InspectionModeIn;}

PartialInspectionType * InspectionTraceabilityType::getPartialInspection()
{return PartialInspection;}

void InspectionTraceabilityType::setPartialInspection(PartialInspectionType * PartialInspectionIn)
{PartialInspection = PartialInspectionIn;}

NotableEventsType * InspectionTraceabilityType::getNotableEvents()
{return NotableEvents;}

void InspectionTraceabilityType::setNotableEvents(NotableEventsType * NotableEventsIn)
{NotableEvents = NotableEventsIn;}

NotedEventsType * InspectionTraceabilityType::getNotedEvents()
{return NotedEvents;}

void InspectionTraceabilityType::setNotedEvents(NotedEventsType * NotedEventsIn)
{NotedEvents = NotedEventsIn;}

XmlDateTime * InspectionTraceabilityType::getInspectionStart()
{return InspectionStart;}

void InspectionTraceabilityType::setInspectionStart(XmlDateTime * InspectionStartIn)
{InspectionStart = InspectionStartIn;}

XmlDateTime * InspectionTraceabilityType::getInspectionEnd()
{return InspectionEnd;}

void InspectionTraceabilityType::setInspectionEnd(XmlDateTime * InspectionEndIn)
{InspectionEnd = InspectionEndIn;}

InspectionSoftwareItemsType * InspectionTraceabilityType::getInspectionSoftwareItems()
{return InspectionSoftwareItems;}

void InspectionTraceabilityType::setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn)
{InspectionSoftwareItems = InspectionSoftwareItemsIn;}

InspectionProgramType * InspectionTraceabilityType::getInspectionProgram()
{return InspectionProgram;}

void InspectionTraceabilityType::setInspectionProgram(InspectionProgramType * InspectionProgramIn)
{InspectionProgram = InspectionProgramIn;}

EmployeeType * InspectionTraceabilityType::getInspectionOperator()
{return InspectionOperator;}

void InspectionTraceabilityType::setInspectionOperator(EmployeeType * InspectionOperatorIn)
{InspectionOperator = InspectionOperatorIn;}

EmployeeType * InspectionTraceabilityType::getReportPreparer()
{return ReportPreparer;}

void InspectionTraceabilityType::setReportPreparer(EmployeeType * ReportPreparerIn)
{ReportPreparer = ReportPreparerIn;}

XmlDateTime * InspectionTraceabilityType::getReportPreparationDate()
{return ReportPreparationDate;}

void InspectionTraceabilityType::setReportPreparationDate(XmlDateTime * ReportPreparationDateIn)
{ReportPreparationDate = ReportPreparationDateIn;}

XmlToken * InspectionTraceabilityType::getReportType()
{return ReportType;}

void InspectionTraceabilityType::setReportType(XmlToken * ReportTypeIn)
{ReportType = ReportTypeIn;}

SecurityClassificationType * InspectionTraceabilityType::getSecurityClassification()
{return SecurityClassification;}

void InspectionTraceabilityType::setSecurityClassification(SecurityClassificationType * SecurityClassificationIn)
{SecurityClassification = SecurityClassificationIn;}

LocationType * InspectionTraceabilityType::getPlantLocation()
{return PlantLocation;}

void InspectionTraceabilityType::setPlantLocation(LocationType * PlantLocationIn)
{PlantLocation = PlantLocationIn;}

InspectionTrace_1039_Type * InspectionTraceabilityType::getInspectionTrace_1039()
{return InspectionTrace_1039;}

void InspectionTraceabilityType::setInspectionTrace_1039(InspectionTrace_1039_Type * InspectionTrace_1039In)
{InspectionTrace_1039 = InspectionTrace_1039In;}

ErrorsType * InspectionTraceabilityType::getErrors()
{return Errors;}

void InspectionTraceabilityType::setErrors(ErrorsType * ErrorsIn)
{Errors = ErrorsIn;}

AttributesType * InspectionTraceabilityType::getAttributes()
{return Attributes;}

void InspectionTraceabilityType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class ManufacturingProcessTraceabilitiesType

*/

ManufacturingProcessTraceabilitiesType::ManufacturingProcessTraceabilitiesType()
{
  n = 0;
  ManufacturingProcessTraceability = 0;
}

ManufacturingProcessTraceabilitiesType::ManufacturingProcessTraceabilitiesType(
 ManufacturingProcessTraceabilityTypeLisd * ManufacturingProcessTraceabilityIn)
{
  n = 0;
  ManufacturingProcessTraceability = ManufacturingProcessTraceabilityIn;
}

ManufacturingProcessTraceabilitiesType::ManufacturingProcessTraceabilitiesType(
 NaturalType * nIn,
 ManufacturingProcessTraceabilityTypeLisd * ManufacturingProcessTraceabilityIn)
{
  n = nIn;
  ManufacturingProcessTraceability = ManufacturingProcessTraceabilityIn;
}

ManufacturingProcessTraceabilitiesType::~ManufacturingProcessTraceabilitiesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ManufacturingProcessTraceability;
  #endif
}

void ManufacturingProcessTraceabilitiesType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (n)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "n=\"");
      n->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"n\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ManufacturingProcessTraceability)
      {
        fprintf(stderr, "ManufacturingProcessTraceability list is missing\n");
        exit(1);
      }
    if (ManufacturingProcessTraceability->size() == 0)
      {
        fprintf(stderr, "ManufacturingProcessTraceability list is empty\n");
        exit(1);
      }
    if (ManufacturingProcessTraceability->size() < 1)
      {
        fprintf(stderr,
                "size of ManufacturingProcessTraceability list (%d) less than minimum required (1)\n",
                (int)ManufacturingProcessTraceability->size());
        exit(1);
      }
    std::list<ManufacturingProcessTraceabilityType *>::iterator iter;
    for (iter = ManufacturingProcessTraceability->begin();
         iter != ManufacturingProcessTraceability->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ManufacturingProcessTraceability");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ManufacturingProcessTraceability>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ManufacturingProcessTraceabilitiesType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ManufacturingProcessTraceabilitiesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ManufacturingProcessTraceabilitiesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ManufacturingProcessTraceabilitiesType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ManufacturingProcessTraceabilitiesType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * ManufacturingProcessTraceabilitiesType::getn()
{return n;}

void ManufacturingProcessTraceabilitiesType::setn(NaturalType * nIn)
{n = nIn;}

ManufacturingProcessTraceabilityTypeLisd * ManufacturingProcessTraceabilitiesType::getManufacturingProcessTraceability()
{return ManufacturingProcessTraceability;}

void ManufacturingProcessTraceabilitiesType::setManufacturingProcessTraceability(ManufacturingProcessTraceabilityTypeLisd * ManufacturingProcessTraceabilityIn)
{ManufacturingProcessTraceability = ManufacturingProcessTraceabilityIn;}

/* ***************************************************************** */

/* class ManufacturingProcessTraceabilityType

*/

ManufacturingProcessTraceabilityType::ManufacturingProcessTraceabilityType()
{
  id = 0;
  Attributes = 0;
  Description = 0;
  Job = 0;
  Revision = 0;
  PreviousOperationId = 0;
  Path = 0;
  MachineManufacturerName = 0;
  MachineIdentifier = 0;
  OperatorIdentifier = 0;
  Shift = 0;
  Department = 0;
  ResponsibilityIdentifier = 0;
  PlantSector = 0;
  ProcessParameters = 0;
  AssociatedTraceabilityId = 0;
}

ManufacturingProcessTraceabilityType::ManufacturingProcessTraceabilityType(
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
 QIFReferenceType * AssociatedTraceabilityIdIn)
{
  id = 0;
  Attributes = AttributesIn;
  Description = DescriptionIn;
  Job = JobIn;
  Revision = RevisionIn;
  PreviousOperationId = PreviousOperationIdIn;
  Path = PathIn;
  MachineManufacturerName = MachineManufacturerNameIn;
  MachineIdentifier = MachineIdentifierIn;
  OperatorIdentifier = OperatorIdentifierIn;
  Shift = ShiftIn;
  Department = DepartmentIn;
  ResponsibilityIdentifier = ResponsibilityIdentifierIn;
  PlantSector = PlantSectorIn;
  ProcessParameters = ProcessParametersIn;
  AssociatedTraceabilityId = AssociatedTraceabilityIdIn;
}

ManufacturingProcessTraceabilityType::ManufacturingProcessTraceabilityType(
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
 QIFReferenceType * AssociatedTraceabilityIdIn)
{
  id = idIn;
  Attributes = AttributesIn;
  Description = DescriptionIn;
  Job = JobIn;
  Revision = RevisionIn;
  PreviousOperationId = PreviousOperationIdIn;
  Path = PathIn;
  MachineManufacturerName = MachineManufacturerNameIn;
  MachineIdentifier = MachineIdentifierIn;
  OperatorIdentifier = OperatorIdentifierIn;
  Shift = ShiftIn;
  Department = DepartmentIn;
  ResponsibilityIdentifier = ResponsibilityIdentifierIn;
  PlantSector = PlantSectorIn;
  ProcessParameters = ProcessParametersIn;
  AssociatedTraceabilityId = AssociatedTraceabilityIdIn;
}

ManufacturingProcessTraceabilityType::~ManufacturingProcessTraceabilityType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  delete Description;
  delete Job;
  delete Revision;
  delete PreviousOperationId;
  delete Path;
  delete MachineManufacturerName;
  delete MachineIdentifier;
  delete OperatorIdentifier;
  delete Shift;
  delete Department;
  delete ResponsibilityIdentifier;
  delete PlantSector;
  delete ProcessParameters;
  delete AssociatedTraceabilityId;
  #endif
}

void ManufacturingProcessTraceabilityType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (id)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "id=\"");
      id->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (Job)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Job");
      Job->printSelf(outFile);
      fprintf(outFile, "</Job>\n");
    }
  if (Revision)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Revision");
      Revision->printSelf(outFile);
      fprintf(outFile, "</Revision>\n");
    }
  if (PreviousOperationId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreviousOperationId");
      PreviousOperationId->printSelf(outFile);
      fprintf(outFile, "</PreviousOperationId>\n");
    }
  if (Path)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Path");
      Path->printSelf(outFile);
      fprintf(outFile, "</Path>\n");
    }
  if (MachineManufacturerName)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MachineManufacturerName");
      MachineManufacturerName->printSelf(outFile);
      fprintf(outFile, "</MachineManufacturerName>\n");
    }
  if (MachineIdentifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MachineIdentifier");
      MachineIdentifier->printSelf(outFile);
      fprintf(outFile, "</MachineIdentifier>\n");
    }
  if (OperatorIdentifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OperatorIdentifier");
      OperatorIdentifier->printSelf(outFile);
      fprintf(outFile, "</OperatorIdentifier>\n");
    }
  if (Shift)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Shift");
      Shift->printSelf(outFile);
      fprintf(outFile, "</Shift>\n");
    }
  if (Department)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Department");
      Department->printSelf(outFile);
      fprintf(outFile, "</Department>\n");
    }
  if (ResponsibilityIdentifier)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ResponsibilityIdentifier");
      ResponsibilityIdentifier->printSelf(outFile);
      fprintf(outFile, "</ResponsibilityIdentifier>\n");
    }
  if (PlantSector)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlantSector");
      PlantSector->printSelf(outFile);
      fprintf(outFile, "</PlantSector>\n");
    }
  if (ProcessParameters)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProcessParameters");
      ProcessParameters->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ProcessParameters>\n");
    }
  if (AssociatedTraceabilityId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AssociatedTraceabilityId");
      AssociatedTraceabilityId->printSelf(outFile);
      fprintf(outFile, "</AssociatedTraceabilityId>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ManufacturingProcessTraceabilityType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ManufacturingProcessTraceabilityType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ManufacturingProcessTraceabilityType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ManufacturingProcessTraceabilityType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ManufacturingProcessTraceabilityType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->id;
      this->id = 0;
    }
  return returnValue;
}

QIFIdType * ManufacturingProcessTraceabilityType::getid()
{return id;}

void ManufacturingProcessTraceabilityType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * ManufacturingProcessTraceabilityType::getAttributes()
{return Attributes;}

void ManufacturingProcessTraceabilityType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

XmlString * ManufacturingProcessTraceabilityType::getDescription()
{return Description;}

void ManufacturingProcessTraceabilityType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

XmlString * ManufacturingProcessTraceabilityType::getJob()
{return Job;}

void ManufacturingProcessTraceabilityType::setJob(XmlString * JobIn)
{Job = JobIn;}

XmlString * ManufacturingProcessTraceabilityType::getRevision()
{return Revision;}

void ManufacturingProcessTraceabilityType::setRevision(XmlString * RevisionIn)
{Revision = RevisionIn;}

QIFReferenceType * ManufacturingProcessTraceabilityType::getPreviousOperationId()
{return PreviousOperationId;}

void ManufacturingProcessTraceabilityType::setPreviousOperationId(QIFReferenceType * PreviousOperationIdIn)
{PreviousOperationId = PreviousOperationIdIn;}

XmlString * ManufacturingProcessTraceabilityType::getPath()
{return Path;}

void ManufacturingProcessTraceabilityType::setPath(XmlString * PathIn)
{Path = PathIn;}

XmlString * ManufacturingProcessTraceabilityType::getMachineManufacturerName()
{return MachineManufacturerName;}

void ManufacturingProcessTraceabilityType::setMachineManufacturerName(XmlString * MachineManufacturerNameIn)
{MachineManufacturerName = MachineManufacturerNameIn;}

XmlString * ManufacturingProcessTraceabilityType::getMachineIdentifier()
{return MachineIdentifier;}

void ManufacturingProcessTraceabilityType::setMachineIdentifier(XmlString * MachineIdentifierIn)
{MachineIdentifier = MachineIdentifierIn;}

XmlString * ManufacturingProcessTraceabilityType::getOperatorIdentifier()
{return OperatorIdentifier;}

void ManufacturingProcessTraceabilityType::setOperatorIdentifier(XmlString * OperatorIdentifierIn)
{OperatorIdentifier = OperatorIdentifierIn;}

XmlString * ManufacturingProcessTraceabilityType::getShift()
{return Shift;}

void ManufacturingProcessTraceabilityType::setShift(XmlString * ShiftIn)
{Shift = ShiftIn;}

XmlString * ManufacturingProcessTraceabilityType::getDepartment()
{return Department;}

void ManufacturingProcessTraceabilityType::setDepartment(XmlString * DepartmentIn)
{Department = DepartmentIn;}

XmlString * ManufacturingProcessTraceabilityType::getResponsibilityIdentifier()
{return ResponsibilityIdentifier;}

void ManufacturingProcessTraceabilityType::setResponsibilityIdentifier(XmlString * ResponsibilityIdentifierIn)
{ResponsibilityIdentifier = ResponsibilityIdentifierIn;}

XmlString * ManufacturingProcessTraceabilityType::getPlantSector()
{return PlantSector;}

void ManufacturingProcessTraceabilityType::setPlantSector(XmlString * PlantSectorIn)
{PlantSector = PlantSectorIn;}

ProcessParametersType * ManufacturingProcessTraceabilityType::getProcessParameters()
{return ProcessParameters;}

void ManufacturingProcessTraceabilityType::setProcessParameters(ProcessParametersType * ProcessParametersIn)
{ProcessParameters = ProcessParametersIn;}

QIFReferenceType * ManufacturingProcessTraceabilityType::getAssociatedTraceabilityId()
{return AssociatedTraceabilityId;}

void ManufacturingProcessTraceabilityType::setAssociatedTraceabilityId(QIFReferenceType * AssociatedTraceabilityIdIn)
{AssociatedTraceabilityId = AssociatedTraceabilityIdIn;}

/* ***************************************************************** */

/* class ManufacturingProcessTraceabilityTypeLisd

*/

ManufacturingProcessTraceabilityTypeLisd::ManufacturingProcessTraceabilityTypeLisd() {}

ManufacturingProcessTraceabilityTypeLisd::ManufacturingProcessTraceabilityTypeLisd(ManufacturingProcessTraceabilityType * aManufacturingProcessTraceabilityType)
{
  push_back(aManufacturingProcessTraceabilityType);
}

ManufacturingProcessTraceabilityTypeLisd::~ManufacturingProcessTraceabilityTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ManufacturingProcessTraceabilityType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ManufacturingProcessTraceabilityTypeLisd::printSelf(FILE * outFile)
{
  std::list<ManufacturingProcessTraceabilityType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class PartialInspectionType

*/

PartialInspectionType::PartialInspectionType()
{
  BaselineProductNumber = 0;
  BaselineProductVersion = 0;
  ReasonForPartialInspection = 0;
}

PartialInspectionType::PartialInspectionType(
 XmlString * BaselineProductNumberIn,
 XmlString * BaselineProductVersionIn,
 XmlString * ReasonForPartialInspectionIn)
{
  BaselineProductNumber = BaselineProductNumberIn;
  BaselineProductVersion = BaselineProductVersionIn;
  ReasonForPartialInspection = ReasonForPartialInspectionIn;
}

PartialInspectionType::~PartialInspectionType()
{
  #ifndef NODESTRUCT
  delete BaselineProductNumber;
  delete BaselineProductVersion;
  delete ReasonForPartialInspection;
  #endif
}

void PartialInspectionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<BaselineProductNumber");
  BaselineProductNumber->printSelf(outFile);
  fprintf(outFile, "</BaselineProductNumber>\n");
  if (BaselineProductVersion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<BaselineProductVersion");
      BaselineProductVersion->printSelf(outFile);
      fprintf(outFile, "</BaselineProductVersion>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ReasonForPartialInspection");
  ReasonForPartialInspection->printSelf(outFile);
  fprintf(outFile, "</ReasonForPartialInspection>\n");
  doSpaces(-INDENT, outFile);
}

XmlString * PartialInspectionType::getBaselineProductNumber()
{return BaselineProductNumber;}

void PartialInspectionType::setBaselineProductNumber(XmlString * BaselineProductNumberIn)
{BaselineProductNumber = BaselineProductNumberIn;}

XmlString * PartialInspectionType::getBaselineProductVersion()
{return BaselineProductVersion;}

void PartialInspectionType::setBaselineProductVersion(XmlString * BaselineProductVersionIn)
{BaselineProductVersion = BaselineProductVersionIn;}

XmlString * PartialInspectionType::getReasonForPartialInspection()
{return ReasonForPartialInspection;}

void PartialInspectionType::setReasonForPartialInspection(XmlString * ReasonForPartialInspectionIn)
{ReasonForPartialInspection = ReasonForPartialInspectionIn;}

/* ***************************************************************** */

/* class PreInspectionTraceabilityType

*/

PreInspectionTraceabilityType::PreInspectionTraceabilityType()
{
  InspectingOrganization = 0;
  CustomerOrganization = 0;
  SupplierCode = 0;
  PurchaseOrderNumber = 0;
  OrderNumber = 0;
  AsmPathIds = 0;
  ReportNumber = 0;
  InspectionScope = 0;
  InspectionMode = 0;
  PartialInspection = 0;
  NotableEvents = 0;
  InspectionSoftwareItems = 0;
  InspectionProgram = 0;
  SecurityClassification = 0;
  PlantLocation = 0;
  PreInspectionTr_1040 = 0;
  FormalStandardId = 0;
  Attributes = 0;
}

PreInspectionTraceabilityType::PreInspectionTraceabilityType(
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
 AttributesType * AttributesIn)
{
  InspectingOrganization = InspectingOrganizationIn;
  CustomerOrganization = CustomerOrganizationIn;
  SupplierCode = SupplierCodeIn;
  PurchaseOrderNumber = PurchaseOrderNumberIn;
  OrderNumber = OrderNumberIn;
  AsmPathIds = AsmPathIdsIn;
  ReportNumber = ReportNumberIn;
  InspectionScope = InspectionScopeIn;
  InspectionMode = InspectionModeIn;
  PartialInspection = PartialInspectionIn;
  NotableEvents = NotableEventsIn;
  InspectionSoftwareItems = InspectionSoftwareItemsIn;
  InspectionProgram = InspectionProgramIn;
  SecurityClassification = SecurityClassificationIn;
  PlantLocation = PlantLocationIn;
  PreInspectionTr_1040 = PreInspectionTr_1040In;
  FormalStandardId = FormalStandardIdIn;
  Attributes = AttributesIn;
}

PreInspectionTraceabilityType::~PreInspectionTraceabilityType()
{
  #ifndef NODESTRUCT
  delete InspectingOrganization;
  delete CustomerOrganization;
  delete SupplierCode;
  delete PurchaseOrderNumber;
  delete OrderNumber;
  delete AsmPathIds;
  delete ReportNumber;
  delete InspectionScope;
  delete InspectionMode;
  delete PartialInspection;
  delete NotableEvents;
  delete InspectionSoftwareItems;
  delete InspectionProgram;
  delete SecurityClassification;
  delete PlantLocation;
  delete PreInspectionTr_1040;
  delete FormalStandardId;
  delete Attributes;
  #endif
}

void PreInspectionTraceabilityType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (InspectingOrganization)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectingOrganization");
      InspectingOrganization->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectingOrganization>\n");
    }
  if (CustomerOrganization)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CustomerOrganization");
      CustomerOrganization->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CustomerOrganization>\n");
    }
  if (SupplierCode)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SupplierCode");
      SupplierCode->printSelf(outFile);
      fprintf(outFile, "</SupplierCode>\n");
    }
  if (PurchaseOrderNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PurchaseOrderNumber");
      PurchaseOrderNumber->printSelf(outFile);
      fprintf(outFile, "</PurchaseOrderNumber>\n");
    }
  if (OrderNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OrderNumber");
      OrderNumber->printSelf(outFile);
      fprintf(outFile, "</OrderNumber>\n");
    }
  if (AsmPathIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AsmPathIds");
      AsmPathIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AsmPathIds>\n");
    }
  if (ReportNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReportNumber");
      ReportNumber->printSelf(outFile);
      fprintf(outFile, "</ReportNumber>\n");
    }
  if (InspectionScope)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionScope");
      InspectionScope->printSelf(outFile);
      fprintf(outFile, "</InspectionScope>\n");
    }
  if (InspectionMode)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionMode");
      InspectionMode->printSelf(outFile);
      fprintf(outFile, "</InspectionMode>\n");
    }
  if (PartialInspection)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PartialInspection");
      PartialInspection->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PartialInspection>\n");
    }
  if (NotableEvents)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NotableEvents");
      NotableEvents->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NotableEvents>\n");
    }
  if (InspectionSoftwareItems)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionSoftwareItems");
      InspectionSoftwareItems->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionSoftwareItems>\n");
    }
  if (InspectionProgram)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionProgram");
      InspectionProgram->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionProgram>\n");
    }
  if (SecurityClassification)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SecurityClassification");
      SecurityClassification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SecurityClassification>\n");
    }
  if (PlantLocation)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlantLocation");
      PlantLocation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PlantLocation>\n");
    }
  if (PreInspectionTr_1040)
    {
  PreInspectionTr_1040->printSelf(outFile);
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<FormalStandardId");
  FormalStandardId->printSelf(outFile);
  fprintf(outFile, "</FormalStandardId>\n");
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

OrganizationType * PreInspectionTraceabilityType::getInspectingOrganization()
{return InspectingOrganization;}

void PreInspectionTraceabilityType::setInspectingOrganization(OrganizationType * InspectingOrganizationIn)
{InspectingOrganization = InspectingOrganizationIn;}

CustomerOrganizationType * PreInspectionTraceabilityType::getCustomerOrganization()
{return CustomerOrganization;}

void PreInspectionTraceabilityType::setCustomerOrganization(CustomerOrganizationType * CustomerOrganizationIn)
{CustomerOrganization = CustomerOrganizationIn;}

XmlString * PreInspectionTraceabilityType::getSupplierCode()
{return SupplierCode;}

void PreInspectionTraceabilityType::setSupplierCode(XmlString * SupplierCodeIn)
{SupplierCode = SupplierCodeIn;}

XmlString * PreInspectionTraceabilityType::getPurchaseOrderNumber()
{return PurchaseOrderNumber;}

void PreInspectionTraceabilityType::setPurchaseOrderNumber(XmlString * PurchaseOrderNumberIn)
{PurchaseOrderNumber = PurchaseOrderNumberIn;}

XmlString * PreInspectionTraceabilityType::getOrderNumber()
{return OrderNumber;}

void PreInspectionTraceabilityType::setOrderNumber(XmlString * OrderNumberIn)
{OrderNumber = OrderNumberIn;}

ArrayReferenceType * PreInspectionTraceabilityType::getAsmPathIds()
{return AsmPathIds;}

void PreInspectionTraceabilityType::setAsmPathIds(ArrayReferenceType * AsmPathIdsIn)
{AsmPathIds = AsmPathIdsIn;}

XmlString * PreInspectionTraceabilityType::getReportNumber()
{return ReportNumber;}

void PreInspectionTraceabilityType::setReportNumber(XmlString * ReportNumberIn)
{ReportNumber = ReportNumberIn;}

InspectionScopeEnumType * PreInspectionTraceabilityType::getInspectionScope()
{return InspectionScope;}

void PreInspectionTraceabilityType::setInspectionScope(InspectionScopeEnumType * InspectionScopeIn)
{InspectionScope = InspectionScopeIn;}

InspectionModeEnumType * PreInspectionTraceabilityType::getInspectionMode()
{return InspectionMode;}

void PreInspectionTraceabilityType::setInspectionMode(InspectionModeEnumType * InspectionModeIn)
{InspectionMode = InspectionModeIn;}

PartialInspectionType * PreInspectionTraceabilityType::getPartialInspection()
{return PartialInspection;}

void PreInspectionTraceabilityType::setPartialInspection(PartialInspectionType * PartialInspectionIn)
{PartialInspection = PartialInspectionIn;}

NotableEventsType * PreInspectionTraceabilityType::getNotableEvents()
{return NotableEvents;}

void PreInspectionTraceabilityType::setNotableEvents(NotableEventsType * NotableEventsIn)
{NotableEvents = NotableEventsIn;}

InspectionSoftwareItemsType * PreInspectionTraceabilityType::getInspectionSoftwareItems()
{return InspectionSoftwareItems;}

void PreInspectionTraceabilityType::setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn)
{InspectionSoftwareItems = InspectionSoftwareItemsIn;}

InspectionProgramType * PreInspectionTraceabilityType::getInspectionProgram()
{return InspectionProgram;}

void PreInspectionTraceabilityType::setInspectionProgram(InspectionProgramType * InspectionProgramIn)
{InspectionProgram = InspectionProgramIn;}

SecurityClassificationType * PreInspectionTraceabilityType::getSecurityClassification()
{return SecurityClassification;}

void PreInspectionTraceabilityType::setSecurityClassification(SecurityClassificationType * SecurityClassificationIn)
{SecurityClassification = SecurityClassificationIn;}

LocationType * PreInspectionTraceabilityType::getPlantLocation()
{return PlantLocation;}

void PreInspectionTraceabilityType::setPlantLocation(LocationType * PlantLocationIn)
{PlantLocation = PlantLocationIn;}

PreInspectionTr_1040_Type * PreInspectionTraceabilityType::getPreInspectionTr_1040()
{return PreInspectionTr_1040;}

void PreInspectionTraceabilityType::setPreInspectionTr_1040(PreInspectionTr_1040_Type * PreInspectionTr_1040In)
{PreInspectionTr_1040 = PreInspectionTr_1040In;}

QIFReferenceType * PreInspectionTraceabilityType::getFormalStandardId()
{return FormalStandardId;}

void PreInspectionTraceabilityType::setFormalStandardId(QIFReferenceType * FormalStandardIdIn)
{FormalStandardId = FormalStandardIdIn;}

AttributesType * PreInspectionTraceabilityType::getAttributes()
{return Attributes;}

void PreInspectionTraceabilityType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class ProcessParameterType

*/

ProcessParameterType::ProcessParameterType()
{
  ParameterType = 0;
  ParameterValue = 0;
}

ProcessParameterType::ProcessParameterType(
 XmlString * ParameterTypeIn,
 XmlString * ParameterValueIn)
{
  ParameterType = ParameterTypeIn;
  ParameterValue = ParameterValueIn;
}

ProcessParameterType::~ProcessParameterType()
{
  #ifndef NODESTRUCT
  delete ParameterType;
  delete ParameterValue;
  #endif
}

void ProcessParameterType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ParameterType");
  ParameterType->printSelf(outFile);
  fprintf(outFile, "</ParameterType>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ParameterValue");
  ParameterValue->printSelf(outFile);
  fprintf(outFile, "</ParameterValue>\n");
  doSpaces(-INDENT, outFile);
}

XmlString * ProcessParameterType::getParameterType()
{return ParameterType;}

void ProcessParameterType::setParameterType(XmlString * ParameterTypeIn)
{ParameterType = ParameterTypeIn;}

XmlString * ProcessParameterType::getParameterValue()
{return ParameterValue;}

void ProcessParameterType::setParameterValue(XmlString * ParameterValueIn)
{ParameterValue = ParameterValueIn;}

/* ***************************************************************** */

/* class ProcessParameterTypeLisd

*/

ProcessParameterTypeLisd::ProcessParameterTypeLisd() {}

ProcessParameterTypeLisd::ProcessParameterTypeLisd(ProcessParameterType * aProcessParameterType)
{
  push_back(aProcessParameterType);
}

ProcessParameterTypeLisd::~ProcessParameterTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ProcessParameterType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ProcessParameterTypeLisd::printSelf(FILE * outFile)
{
  std::list<ProcessParameterType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ProcessParametersType

*/

ProcessParametersType::ProcessParametersType()
{
  n = 0;
  Parameter = 0;
}

ProcessParametersType::ProcessParametersType(
 ProcessParameterTypeLisd * ParameterIn)
{
  n = 0;
  Parameter = ParameterIn;
}

ProcessParametersType::ProcessParametersType(
 NaturalType * nIn,
 ProcessParameterTypeLisd * ParameterIn)
{
  n = nIn;
  Parameter = ParameterIn;
}

ProcessParametersType::~ProcessParametersType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Parameter;
  #endif
}

void ProcessParametersType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (n)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "n=\"");
      n->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"n\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!Parameter)
      {
        fprintf(stderr, "Parameter list is missing\n");
        exit(1);
      }
    if (Parameter->size() == 0)
      {
        fprintf(stderr, "Parameter list is empty\n");
        exit(1);
      }
    if (Parameter->size() < 1)
      {
        fprintf(stderr,
                "size of Parameter list (%d) less than minimum required (1)\n",
                (int)Parameter->size());
        exit(1);
      }
    std::list<ProcessParameterType *>::iterator iter;
    for (iter = Parameter->begin();
         iter != Parameter->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Parameter");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Parameter>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ProcessParametersType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ProcessParametersType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ProcessParametersType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ProcessParametersType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ProcessParametersType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * ProcessParametersType::getn()
{return n;}

void ProcessParametersType::setn(NaturalType * nIn)
{n = nIn;}

ProcessParameterTypeLisd * ProcessParametersType::getParameter()
{return Parameter;}

void ProcessParametersType::setParameter(ProcessParameterTypeLisd * ParameterIn)
{Parameter = ParameterIn;}

/* ***************************************************************** */

/* class ProductDataQualityAreaEnumType

*/

ProductDataQualityAreaEnumType::ProductDataQualityAreaEnumType() :
  XmlNMTOKEN()
{
}

ProductDataQualityAreaEnumType::ProductDataQualityAreaEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "OVERALL") &&
           strcmp(val.c_str(), "PRODUCT_GEOMETRIC_DATA") &&
           strcmp(val.c_str(), "PRODUCT_MANUFACTURING_INFORMATION") &&
           strcmp(val.c_str(), "BUSINESS_PRACTICE") &&
           strcmp(val.c_str(), "DESIGN_PRACTICE") &&
           strcmp(val.c_str(), "DERIVATIVE_COMPARE") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

ProductDataQualityAreaEnumType::~ProductDataQualityAreaEnumType() {}

bool ProductDataQualityAreaEnumType::ProductDataQualityAreaEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "OVERALL") &&
          strcmp(val.c_str(), "PRODUCT_GEOMETRIC_DATA") &&
          strcmp(val.c_str(), "PRODUCT_MANUFACTURING_INFORMATION") &&
          strcmp(val.c_str(), "BUSINESS_PRACTICE") &&
          strcmp(val.c_str(), "DESIGN_PRACTICE") &&
          strcmp(val.c_str(), "DERIVATIVE_COMPARE") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void ProductDataQualityAreaEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "ProductDataQualityAreaEnumType");
}

void ProductDataQualityAreaEnumType::printSelf(FILE * outFile)
{
  if (ProductDataQualityAreaEnumTypeIsBad())
    {
      fprintf(stderr, "bad ProductDataQualityAreaEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void ProductDataQualityAreaEnumType::oPrintSelf(FILE * outFile)
{
  if (ProductDataQualityAreaEnumTypeIsBad())
    {
      fprintf(stderr, "bad ProductDataQualityAreaEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class ProductDataQualityAreaType

*/

ProductDataQualityAreaType::ProductDataQualityAreaType()
{
  ProductDataQualityAreaTypePair = 0;
}

ProductDataQualityAreaType::ProductDataQualityAreaType(
 ProductDataQualityAreaTypeChoicePair * ProductDataQualityAreaTypePairIn)
{
  ProductDataQualityAreaTypePair = ProductDataQualityAreaTypePairIn;
}

ProductDataQualityAreaType::~ProductDataQualityAreaType()
{
  #ifndef NODESTRUCT
  delete ProductDataQualityAreaTypePair;
  #endif
}

void ProductDataQualityAreaType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  ProductDataQualityAreaTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

ProductDataQualityAreaTypeChoicePair * ProductDataQualityAreaType::getProductDataQualityAreaTypePair()
{return ProductDataQualityAreaTypePair;}

void ProductDataQualityAreaType::setProductDataQualityAreaTypePair(ProductDataQualityAreaTypeChoicePair * ProductDataQualityAreaTypePairIn)
{ProductDataQualityAreaTypePair = ProductDataQualityAreaTypePairIn;}
ProductDataQualityAreaTypeChoicePair::ProductDataQualityAreaTypeChoicePair() {}

ProductDataQualityAreaTypeChoicePair::ProductDataQualityAreaTypeChoicePair(
 whichOne ProductDataQualityAreaTypeTypeIn,
 ProductDataQualityAreaTypeVal ProductDataQualityAreaTypeValueIn)
{
  ProductDataQualityAreaTypeType = ProductDataQualityAreaTypeTypeIn;
  ProductDataQualityAreaTypeValue = ProductDataQualityAreaTypeValueIn;
}

ProductDataQualityAreaTypeChoicePair::~ProductDataQualityAreaTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ProductDataQualityAreaTypeType == AreaEnumE)
    delete ProductDataQualityAreaTypeValue.AreaEnum;
  else if (ProductDataQualityAreaTypeType == OtherAreaE)
    delete ProductDataQualityAreaTypeValue.OtherArea;
  #endif
}

void ProductDataQualityAreaTypeChoicePair::printSelf(FILE * outFile)
{
  if (ProductDataQualityAreaTypeType == AreaEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaEnum");
      ProductDataQualityAreaTypeValue.AreaEnum->printSelf(outFile);
      fprintf(outFile, "</AreaEnum>\n");
    }
  else if (ProductDataQualityAreaTypeType == OtherAreaE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherArea");
      ProductDataQualityAreaTypeValue.OtherArea->printSelf(outFile);
      fprintf(outFile, "</OtherArea>\n");
    }
}

/* ***************************************************************** */

/* class ProductDataQualityCheckType

*/

ProductDataQualityCheckType::ProductDataQualityCheckType()
{
  Type = 0;
  Description = 0;
  Requirements = 0;
  SourceOfRequiredness = 0;
  ApplicationTool = 0;
  XsltFile = 0;
  ResultStatement = 0;
  ResultStatus = 0;
}

ProductDataQualityCheckType::ProductDataQualityCheckType(
 ProductDataQualityAreaType * TypeIn,
 XmlString * DescriptionIn,
 XmlString * RequirementsIn,
 XmlString * SourceOfRequirednessIn,
 SoftwareType * ApplicationToolIn,
 XmlAnyURI * XsltFileIn,
 XmlString * ResultStatementIn,
 CheckStatusEnumType * ResultStatusIn)
{
  Type = TypeIn;
  Description = DescriptionIn;
  Requirements = RequirementsIn;
  SourceOfRequiredness = SourceOfRequirednessIn;
  ApplicationTool = ApplicationToolIn;
  XsltFile = XsltFileIn;
  ResultStatement = ResultStatementIn;
  ResultStatus = ResultStatusIn;
}

ProductDataQualityCheckType::~ProductDataQualityCheckType()
{
  #ifndef NODESTRUCT
  delete Type;
  delete Description;
  delete Requirements;
  delete SourceOfRequiredness;
  delete ApplicationTool;
  delete XsltFile;
  delete ResultStatement;
  delete ResultStatus;
  #endif
}

void ProductDataQualityCheckType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Type");
  Type->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Type>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Description");
  Description->printSelf(outFile);
  fprintf(outFile, "</Description>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Requirements");
  Requirements->printSelf(outFile);
  fprintf(outFile, "</Requirements>\n");
  if (SourceOfRequiredness)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SourceOfRequiredness");
      SourceOfRequiredness->printSelf(outFile);
      fprintf(outFile, "</SourceOfRequiredness>\n");
    }
  if (ApplicationTool)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ApplicationTool");
      ApplicationTool->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ApplicationTool>\n");
    }
  if (XsltFile)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<XsltFile");
      XsltFile->printSelf(outFile);
      fprintf(outFile, "</XsltFile>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<ResultStatement");
  ResultStatement->printSelf(outFile);
  fprintf(outFile, "</ResultStatement>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ResultStatus");
  ResultStatus->printSelf(outFile);
  fprintf(outFile, "</ResultStatus>\n");
  doSpaces(-INDENT, outFile);
}

ProductDataQualityAreaType * ProductDataQualityCheckType::getType()
{return Type;}

void ProductDataQualityCheckType::setType(ProductDataQualityAreaType * TypeIn)
{Type = TypeIn;}

XmlString * ProductDataQualityCheckType::getDescription()
{return Description;}

void ProductDataQualityCheckType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

XmlString * ProductDataQualityCheckType::getRequirements()
{return Requirements;}

void ProductDataQualityCheckType::setRequirements(XmlString * RequirementsIn)
{Requirements = RequirementsIn;}

XmlString * ProductDataQualityCheckType::getSourceOfRequiredness()
{return SourceOfRequiredness;}

void ProductDataQualityCheckType::setSourceOfRequiredness(XmlString * SourceOfRequirednessIn)
{SourceOfRequiredness = SourceOfRequirednessIn;}

SoftwareType * ProductDataQualityCheckType::getApplicationTool()
{return ApplicationTool;}

void ProductDataQualityCheckType::setApplicationTool(SoftwareType * ApplicationToolIn)
{ApplicationTool = ApplicationToolIn;}

XmlAnyURI * ProductDataQualityCheckType::getXsltFile()
{return XsltFile;}

void ProductDataQualityCheckType::setXsltFile(XmlAnyURI * XsltFileIn)
{XsltFile = XsltFileIn;}

XmlString * ProductDataQualityCheckType::getResultStatement()
{return ResultStatement;}

void ProductDataQualityCheckType::setResultStatement(XmlString * ResultStatementIn)
{ResultStatement = ResultStatementIn;}

CheckStatusEnumType * ProductDataQualityCheckType::getResultStatus()
{return ResultStatus;}

void ProductDataQualityCheckType::setResultStatus(CheckStatusEnumType * ResultStatusIn)
{ResultStatus = ResultStatusIn;}

/* ***************************************************************** */

/* class ProductDataQualityCheckTypeLisd

*/

ProductDataQualityCheckTypeLisd::ProductDataQualityCheckTypeLisd() {}

ProductDataQualityCheckTypeLisd::ProductDataQualityCheckTypeLisd(ProductDataQualityCheckType * aProductDataQualityCheckType)
{
  push_back(aProductDataQualityCheckType);
}

ProductDataQualityCheckTypeLisd::~ProductDataQualityCheckTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ProductDataQualityCheckType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ProductDataQualityCheckTypeLisd::printSelf(FILE * outFile)
{
  std::list<ProductDataQualityCheckType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ProductDataQualityChecksType

*/

ProductDataQualityChecksType::ProductDataQualityChecksType()
{
  n = 0;
  ProductDataQualityCheck = 0;
}

ProductDataQualityChecksType::ProductDataQualityChecksType(
 ProductDataQualityCheckTypeLisd * ProductDataQualityCheckIn)
{
  n = 0;
  ProductDataQualityCheck = ProductDataQualityCheckIn;
}

ProductDataQualityChecksType::ProductDataQualityChecksType(
 NaturalType * nIn,
 ProductDataQualityCheckTypeLisd * ProductDataQualityCheckIn)
{
  n = nIn;
  ProductDataQualityCheck = ProductDataQualityCheckIn;
}

ProductDataQualityChecksType::~ProductDataQualityChecksType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ProductDataQualityCheck;
  #endif
}

void ProductDataQualityChecksType::printSelf(FILE * outFile)
{
  bool printedOne;

  printedOne = false;
  if (n)
    {
      if (printedOne)
        {
          fprintf(outFile, "\n");
          doSpaces(0, outFile);
          fprintf(outFile, "  ");
        }
      else
        {
          fprintf(outFile, " ");
          printedOne = true;
        }
      fprintf(outFile, "n=\"");
      n->oPrintSelf(outFile);
      fprintf(outFile, "\"");
    }
  else
    {
      fprintf(stderr, "required attribute \"n\" missing\n");
      exit(1);
    }
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    if (!ProductDataQualityCheck)
      {
        fprintf(stderr, "ProductDataQualityCheck list is missing\n");
        exit(1);
      }
    if (ProductDataQualityCheck->size() == 0)
      {
        fprintf(stderr, "ProductDataQualityCheck list is empty\n");
        exit(1);
      }
    if (ProductDataQualityCheck->size() < 1)
      {
        fprintf(stderr,
                "size of ProductDataQualityCheck list (%d) less than minimum required (1)\n",
                (int)ProductDataQualityCheck->size());
        exit(1);
      }
    std::list<ProductDataQualityCheckType *>::iterator iter;
    for (iter = ProductDataQualityCheck->begin();
         iter != ProductDataQualityCheck->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ProductDataQualityCheck");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ProductDataQualityCheck>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ProductDataQualityChecksType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->name == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ProductDataQualityChecksType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ProductDataQualityChecksType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ProductDataQualityChecksType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ProductDataQualityChecksType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete this->n;
      this->n = 0;
    }
  return returnValue;
}

NaturalType * ProductDataQualityChecksType::getn()
{return n;}

void ProductDataQualityChecksType::setn(NaturalType * nIn)
{n = nIn;}

ProductDataQualityCheckTypeLisd * ProductDataQualityChecksType::getProductDataQualityCheck()
{return ProductDataQualityCheck;}

void ProductDataQualityChecksType::setProductDataQualityCheck(ProductDataQualityCheckTypeLisd * ProductDataQualityCheckIn)
{ProductDataQualityCheck = ProductDataQualityCheckIn;}

/* ***************************************************************** */

/* class ProductDataQualityType

*/

ProductDataQualityType::ProductDataQualityType()
{
  ChecksPerformed = 0;
  ChecksApproved = 0;
  Declaration = 0;
  ProductDataQualityChecks = 0;
}

ProductDataQualityType::ProductDataQualityType(
 XmlBoolean * ChecksPerformedIn,
 XmlBoolean * ChecksApprovedIn,
 XmlString * DeclarationIn,
 ProductDataQualityChecksType * ProductDataQualityChecksIn)
{
  ChecksPerformed = ChecksPerformedIn;
  ChecksApproved = ChecksApprovedIn;
  Declaration = DeclarationIn;
  ProductDataQualityChecks = ProductDataQualityChecksIn;
}

ProductDataQualityType::~ProductDataQualityType()
{
  #ifndef NODESTRUCT
  delete ChecksPerformed;
  delete ChecksApproved;
  delete Declaration;
  delete ProductDataQualityChecks;
  #endif
}

void ProductDataQualityType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<ChecksPerformed");
  ChecksPerformed->printSelf(outFile);
  fprintf(outFile, "</ChecksPerformed>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ChecksApproved");
  ChecksApproved->printSelf(outFile);
  fprintf(outFile, "</ChecksApproved>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Declaration");
  Declaration->printSelf(outFile);
  fprintf(outFile, "</Declaration>\n");
  if (ProductDataQualityChecks)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductDataQualityChecks");
      ProductDataQualityChecks->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ProductDataQualityChecks>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlBoolean * ProductDataQualityType::getChecksPerformed()
{return ChecksPerformed;}

void ProductDataQualityType::setChecksPerformed(XmlBoolean * ChecksPerformedIn)
{ChecksPerformed = ChecksPerformedIn;}

XmlBoolean * ProductDataQualityType::getChecksApproved()
{return ChecksApproved;}

void ProductDataQualityType::setChecksApproved(XmlBoolean * ChecksApprovedIn)
{ChecksApproved = ChecksApprovedIn;}

XmlString * ProductDataQualityType::getDeclaration()
{return Declaration;}

void ProductDataQualityType::setDeclaration(XmlString * DeclarationIn)
{Declaration = DeclarationIn;}

ProductDataQualityChecksType * ProductDataQualityType::getProductDataQualityChecks()
{return ProductDataQualityChecks;}

void ProductDataQualityType::setProductDataQualityChecks(ProductDataQualityChecksType * ProductDataQualityChecksIn)
{ProductDataQualityChecks = ProductDataQualityChecksIn;}

/* ***************************************************************** */

/* class ProductTraceabilityType

*/

ProductTraceabilityType::ProductTraceabilityType()
{
  ReportNumber = 0;
  ManufacturingProcessId = 0;
  FixtureId = 0;
  NotableEventIds = 0;
  InspectionSoftwareItems = 0;
  InspectionProgram = 0;
  MeasurementDeviceIds = 0;
  Attributes = 0;
}

ProductTraceabilityType::ProductTraceabilityType(
 XmlString * ReportNumberIn,
 QIFReferenceType * ManufacturingProcessIdIn,
 QIFReferenceType * FixtureIdIn,
 ArrayReferenceType * NotableEventIdsIn,
 InspectionSoftwareItemsType * InspectionSoftwareItemsIn,
 InspectionProgramType * InspectionProgramIn,
 ArrayReferenceType * MeasurementDeviceIdsIn,
 AttributesType * AttributesIn)
{
  ReportNumber = ReportNumberIn;
  ManufacturingProcessId = ManufacturingProcessIdIn;
  FixtureId = FixtureIdIn;
  NotableEventIds = NotableEventIdsIn;
  InspectionSoftwareItems = InspectionSoftwareItemsIn;
  InspectionProgram = InspectionProgramIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  Attributes = AttributesIn;
}

ProductTraceabilityType::~ProductTraceabilityType()
{
  #ifndef NODESTRUCT
  delete ReportNumber;
  delete ManufacturingProcessId;
  delete FixtureId;
  delete NotableEventIds;
  delete InspectionSoftwareItems;
  delete InspectionProgram;
  delete MeasurementDeviceIds;
  delete Attributes;
  #endif
}

void ProductTraceabilityType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (ReportNumber)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReportNumber");
      ReportNumber->printSelf(outFile);
      fprintf(outFile, "</ReportNumber>\n");
    }
  if (ManufacturingProcessId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ManufacturingProcessId");
      ManufacturingProcessId->printSelf(outFile);
      fprintf(outFile, "</ManufacturingProcessId>\n");
    }
  if (FixtureId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FixtureId");
      FixtureId->printSelf(outFile);
      fprintf(outFile, "</FixtureId>\n");
    }
  if (NotableEventIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NotableEventIds");
      NotableEventIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NotableEventIds>\n");
    }
  if (InspectionSoftwareItems)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionSoftwareItems");
      InspectionSoftwareItems->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionSoftwareItems>\n");
    }
  if (InspectionProgram)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionProgram");
      InspectionProgram->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionProgram>\n");
    }
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlString * ProductTraceabilityType::getReportNumber()
{return ReportNumber;}

void ProductTraceabilityType::setReportNumber(XmlString * ReportNumberIn)
{ReportNumber = ReportNumberIn;}

QIFReferenceType * ProductTraceabilityType::getManufacturingProcessId()
{return ManufacturingProcessId;}

void ProductTraceabilityType::setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn)
{ManufacturingProcessId = ManufacturingProcessIdIn;}

QIFReferenceType * ProductTraceabilityType::getFixtureId()
{return FixtureId;}

void ProductTraceabilityType::setFixtureId(QIFReferenceType * FixtureIdIn)
{FixtureId = FixtureIdIn;}

ArrayReferenceType * ProductTraceabilityType::getNotableEventIds()
{return NotableEventIds;}

void ProductTraceabilityType::setNotableEventIds(ArrayReferenceType * NotableEventIdsIn)
{NotableEventIds = NotableEventIdsIn;}

InspectionSoftwareItemsType * ProductTraceabilityType::getInspectionSoftwareItems()
{return InspectionSoftwareItems;}

void ProductTraceabilityType::setInspectionSoftwareItems(InspectionSoftwareItemsType * InspectionSoftwareItemsIn)
{InspectionSoftwareItems = InspectionSoftwareItemsIn;}

InspectionProgramType * ProductTraceabilityType::getInspectionProgram()
{return InspectionProgram;}

void ProductTraceabilityType::setInspectionProgram(InspectionProgramType * InspectionProgramIn)
{InspectionProgram = InspectionProgramIn;}

ArrayReferenceType * ProductTraceabilityType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void ProductTraceabilityType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

AttributesType * ProductTraceabilityType::getAttributes()
{return Attributes;}

void ProductTraceabilityType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/* ***************************************************************** */

/* class TimeDescriptionEnumType

*/

TimeDescriptionEnumType::TimeDescriptionEnumType() :
  XmlNMTOKEN()
{
}

TimeDescriptionEnumType::TimeDescriptionEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "INSPECTION_START") &&
           strcmp(val.c_str(), "INSPECTION_END") &&
           strcmp(val.c_str(), "INTERMEDIATE"));
}

TimeDescriptionEnumType::~TimeDescriptionEnumType() {}

bool TimeDescriptionEnumType::TimeDescriptionEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "INSPECTION_START") &&
          strcmp(val.c_str(), "INSPECTION_END") &&
          strcmp(val.c_str(), "INTERMEDIATE"));
}

void TimeDescriptionEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "TimeDescriptionEnumType");
}

void TimeDescriptionEnumType::printSelf(FILE * outFile)
{
  if (TimeDescriptionEnumTypeIsBad())
    {
      fprintf(stderr, "bad TimeDescriptionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void TimeDescriptionEnumType::oPrintSelf(FILE * outFile)
{
  if (TimeDescriptionEnumTypeIsBad())
    {
      fprintf(stderr, "bad TimeDescriptionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class TimeDescriptionType

*/

TimeDescriptionType::TimeDescriptionType()
{
  TimeDescriptionTypePair = 0;
}

TimeDescriptionType::TimeDescriptionType(
 TimeDescriptionTypeChoicePair * TimeDescriptionTypePairIn)
{
  TimeDescriptionTypePair = TimeDescriptionTypePairIn;
}

TimeDescriptionType::~TimeDescriptionType()
{
  #ifndef NODESTRUCT
  delete TimeDescriptionTypePair;
  #endif
}

void TimeDescriptionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  TimeDescriptionTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

TimeDescriptionTypeChoicePair * TimeDescriptionType::getTimeDescriptionTypePair()
{return TimeDescriptionTypePair;}

void TimeDescriptionType::setTimeDescriptionTypePair(TimeDescriptionTypeChoicePair * TimeDescriptionTypePairIn)
{TimeDescriptionTypePair = TimeDescriptionTypePairIn;}
TimeDescriptionTypeChoicePair::TimeDescriptionTypeChoicePair() {}

TimeDescriptionTypeChoicePair::TimeDescriptionTypeChoicePair(
 whichOne TimeDescriptionTypeTypeIn,
 TimeDescriptionTypeVal TimeDescriptionTypeValueIn)
{
  TimeDescriptionTypeType = TimeDescriptionTypeTypeIn;
  TimeDescriptionTypeValue = TimeDescriptionTypeValueIn;
}

TimeDescriptionTypeChoicePair::~TimeDescriptionTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (TimeDescriptionTypeType == TimeDescriptionEnumE)
    delete TimeDescriptionTypeValue.TimeDescriptionEnum;
  else if (TimeDescriptionTypeType == OtherTimeDescriptionE)
    delete TimeDescriptionTypeValue.OtherTimeDescription;
  #endif
}

void TimeDescriptionTypeChoicePair::printSelf(FILE * outFile)
{
  if (TimeDescriptionTypeType == TimeDescriptionEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeDescriptionEnum");
      TimeDescriptionTypeValue.TimeDescriptionEnum->printSelf(outFile);
      fprintf(outFile, "</TimeDescriptionEnum>\n");
    }
  else if (TimeDescriptionTypeType == OtherTimeDescriptionE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherTimeDescription");
      TimeDescriptionTypeValue.OtherTimeDescription->printSelf(outFile);
      fprintf(outFile, "</OtherTimeDescription>\n");
    }
}

/* ***************************************************************** */

/* class ValidationCountsType

*/

ValidationCountsType::ValidationCountsType()
{
  ExternalQIFReferencesCount = 0;
  DatumDefinitionsCount = 0;
  DatumTargetDefinitionsCount = 0;
  TransformsCount = 0;
  CoordinateSystemsCount = 0;
  DatumReferenceFramesCount = 0;
  MeasurementResourcesCount = 0;
  ThreadSpecificationsCount = 0;
  ProductGeometrySetCount = 0;
  ProductTopologySetCount = 0;
  ProductNoteSetCount = 0;
  ProductNoteFlagSetCount = 0;
  ProductPartNoteSetCount = 0;
  ProductViewSetCount = 0;
  ProductLayerSetCount = 0;
  ProductCoordinateSystemSetCount = 0;
  ProductVisualizationSetCount = 0;
  ProductAuxiliarySetCount = 0;
  ProductPartSetCount = 0;
  ProductAssemblySetCount = 0;
  ProductComponentSetCount = 0;
  ProductAsmPathsCount = 0;
  FeatureDefinitionsCount = 0;
  FeatureNominalsCount = 0;
  FeatureItemsCount = 0;
  CharacteristicDefinitionsCount = 0;
  DefaultCharacteristicDefinitionsCount = 0;
  DefaultToleranceDefinitionsCount = 0;
  CharacteristicNominalsCount = 0;
  CharacteristicItemsCount = 0;
  CharacteristicGroupsCount = 0;
  WeldSymbolSetCount = 0;
  MeasurementsPlanPresent = 0;
  MeasurementsResultsCount = 0;
  StatisticalStudyPlansCount = 0;
  StatisticalStudiesResultsCount = 0;
  CorrectiveActionPlansCount = 0;
  ManufacturingProcessTraceabilitiesCount = 0;
  FeatureRulesCount = 0;
  DMESelectionRulesCount = 0;
  SignaturePresent = 0;
}

ValidationCountsType::ValidationCountsType(
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
 XmlBoolean * SignaturePresentIn)
{
  ExternalQIFReferencesCount = ExternalQIFReferencesCountIn;
  DatumDefinitionsCount = DatumDefinitionsCountIn;
  DatumTargetDefinitionsCount = DatumTargetDefinitionsCountIn;
  TransformsCount = TransformsCountIn;
  CoordinateSystemsCount = CoordinateSystemsCountIn;
  DatumReferenceFramesCount = DatumReferenceFramesCountIn;
  MeasurementResourcesCount = MeasurementResourcesCountIn;
  ThreadSpecificationsCount = ThreadSpecificationsCountIn;
  ProductGeometrySetCount = ProductGeometrySetCountIn;
  ProductTopologySetCount = ProductTopologySetCountIn;
  ProductNoteSetCount = ProductNoteSetCountIn;
  ProductNoteFlagSetCount = ProductNoteFlagSetCountIn;
  ProductPartNoteSetCount = ProductPartNoteSetCountIn;
  ProductViewSetCount = ProductViewSetCountIn;
  ProductLayerSetCount = ProductLayerSetCountIn;
  ProductCoordinateSystemSetCount = ProductCoordinateSystemSetCountIn;
  ProductVisualizationSetCount = ProductVisualizationSetCountIn;
  ProductAuxiliarySetCount = ProductAuxiliarySetCountIn;
  ProductPartSetCount = ProductPartSetCountIn;
  ProductAssemblySetCount = ProductAssemblySetCountIn;
  ProductComponentSetCount = ProductComponentSetCountIn;
  ProductAsmPathsCount = ProductAsmPathsCountIn;
  FeatureDefinitionsCount = FeatureDefinitionsCountIn;
  FeatureNominalsCount = FeatureNominalsCountIn;
  FeatureItemsCount = FeatureItemsCountIn;
  CharacteristicDefinitionsCount = CharacteristicDefinitionsCountIn;
  DefaultCharacteristicDefinitionsCount = DefaultCharacteristicDefinitionsCountIn;
  DefaultToleranceDefinitionsCount = DefaultToleranceDefinitionsCountIn;
  CharacteristicNominalsCount = CharacteristicNominalsCountIn;
  CharacteristicItemsCount = CharacteristicItemsCountIn;
  CharacteristicGroupsCount = CharacteristicGroupsCountIn;
  WeldSymbolSetCount = WeldSymbolSetCountIn;
  MeasurementsPlanPresent = MeasurementsPlanPresentIn;
  MeasurementsResultsCount = MeasurementsResultsCountIn;
  StatisticalStudyPlansCount = StatisticalStudyPlansCountIn;
  StatisticalStudiesResultsCount = StatisticalStudiesResultsCountIn;
  CorrectiveActionPlansCount = CorrectiveActionPlansCountIn;
  ManufacturingProcessTraceabilitiesCount = ManufacturingProcessTraceabilitiesCountIn;
  FeatureRulesCount = FeatureRulesCountIn;
  DMESelectionRulesCount = DMESelectionRulesCountIn;
  SignaturePresent = SignaturePresentIn;
}

ValidationCountsType::~ValidationCountsType()
{
  #ifndef NODESTRUCT
  delete ExternalQIFReferencesCount;
  delete DatumDefinitionsCount;
  delete DatumTargetDefinitionsCount;
  delete TransformsCount;
  delete CoordinateSystemsCount;
  delete DatumReferenceFramesCount;
  delete MeasurementResourcesCount;
  delete ThreadSpecificationsCount;
  delete ProductGeometrySetCount;
  delete ProductTopologySetCount;
  delete ProductNoteSetCount;
  delete ProductNoteFlagSetCount;
  delete ProductPartNoteSetCount;
  delete ProductViewSetCount;
  delete ProductLayerSetCount;
  delete ProductCoordinateSystemSetCount;
  delete ProductVisualizationSetCount;
  delete ProductAuxiliarySetCount;
  delete ProductPartSetCount;
  delete ProductAssemblySetCount;
  delete ProductComponentSetCount;
  delete ProductAsmPathsCount;
  delete FeatureDefinitionsCount;
  delete FeatureNominalsCount;
  delete FeatureItemsCount;
  delete CharacteristicDefinitionsCount;
  delete DefaultCharacteristicDefinitionsCount;
  delete DefaultToleranceDefinitionsCount;
  delete CharacteristicNominalsCount;
  delete CharacteristicItemsCount;
  delete CharacteristicGroupsCount;
  delete WeldSymbolSetCount;
  delete MeasurementsPlanPresent;
  delete MeasurementsResultsCount;
  delete StatisticalStudyPlansCount;
  delete StatisticalStudiesResultsCount;
  delete CorrectiveActionPlansCount;
  delete ManufacturingProcessTraceabilitiesCount;
  delete FeatureRulesCount;
  delete DMESelectionRulesCount;
  delete SignaturePresent;
  #endif
}

void ValidationCountsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (ExternalQIFReferencesCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExternalQIFReferencesCount");
      ExternalQIFReferencesCount->printSelf(outFile);
      fprintf(outFile, "</ExternalQIFReferencesCount>\n");
    }
  if (DatumDefinitionsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumDefinitionsCount");
      DatumDefinitionsCount->printSelf(outFile);
      fprintf(outFile, "</DatumDefinitionsCount>\n");
    }
  if (DatumTargetDefinitionsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumTargetDefinitionsCount");
      DatumTargetDefinitionsCount->printSelf(outFile);
      fprintf(outFile, "</DatumTargetDefinitionsCount>\n");
    }
  if (TransformsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TransformsCount");
      TransformsCount->printSelf(outFile);
      fprintf(outFile, "</TransformsCount>\n");
    }
  if (CoordinateSystemsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CoordinateSystemsCount");
      CoordinateSystemsCount->printSelf(outFile);
      fprintf(outFile, "</CoordinateSystemsCount>\n");
    }
  if (DatumReferenceFramesCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DatumReferenceFramesCount");
      DatumReferenceFramesCount->printSelf(outFile);
      fprintf(outFile, "</DatumReferenceFramesCount>\n");
    }
  if (MeasurementResourcesCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementResourcesCount");
      MeasurementResourcesCount->printSelf(outFile);
      fprintf(outFile, "</MeasurementResourcesCount>\n");
    }
  if (ThreadSpecificationsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThreadSpecificationsCount");
      ThreadSpecificationsCount->printSelf(outFile);
      fprintf(outFile, "</ThreadSpecificationsCount>\n");
    }
  if (ProductGeometrySetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductGeometrySetCount");
      ProductGeometrySetCount->printSelf(outFile);
      fprintf(outFile, "</ProductGeometrySetCount>\n");
    }
  if (ProductTopologySetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductTopologySetCount");
      ProductTopologySetCount->printSelf(outFile);
      fprintf(outFile, "</ProductTopologySetCount>\n");
    }
  if (ProductNoteSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductNoteSetCount");
      ProductNoteSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductNoteSetCount>\n");
    }
  if (ProductNoteFlagSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductNoteFlagSetCount");
      ProductNoteFlagSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductNoteFlagSetCount>\n");
    }
  if (ProductPartNoteSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductPartNoteSetCount");
      ProductPartNoteSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductPartNoteSetCount>\n");
    }
  if (ProductViewSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductViewSetCount");
      ProductViewSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductViewSetCount>\n");
    }
  if (ProductLayerSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductLayerSetCount");
      ProductLayerSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductLayerSetCount>\n");
    }
  if (ProductCoordinateSystemSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductCoordinateSystemSetCount");
      ProductCoordinateSystemSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductCoordinateSystemSetCount>\n");
    }
  if (ProductVisualizationSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductVisualizationSetCount");
      ProductVisualizationSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductVisualizationSetCount>\n");
    }
  if (ProductAuxiliarySetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductAuxiliarySetCount");
      ProductAuxiliarySetCount->printSelf(outFile);
      fprintf(outFile, "</ProductAuxiliarySetCount>\n");
    }
  if (ProductPartSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductPartSetCount");
      ProductPartSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductPartSetCount>\n");
    }
  if (ProductAssemblySetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductAssemblySetCount");
      ProductAssemblySetCount->printSelf(outFile);
      fprintf(outFile, "</ProductAssemblySetCount>\n");
    }
  if (ProductComponentSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductComponentSetCount");
      ProductComponentSetCount->printSelf(outFile);
      fprintf(outFile, "</ProductComponentSetCount>\n");
    }
  if (ProductAsmPathsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ProductAsmPathsCount");
      ProductAsmPathsCount->printSelf(outFile);
      fprintf(outFile, "</ProductAsmPathsCount>\n");
    }
  if (FeatureDefinitionsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureDefinitionsCount");
      FeatureDefinitionsCount->printSelf(outFile);
      fprintf(outFile, "</FeatureDefinitionsCount>\n");
    }
  if (FeatureNominalsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureNominalsCount");
      FeatureNominalsCount->printSelf(outFile);
      fprintf(outFile, "</FeatureNominalsCount>\n");
    }
  if (FeatureItemsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureItemsCount");
      FeatureItemsCount->printSelf(outFile);
      fprintf(outFile, "</FeatureItemsCount>\n");
    }
  if (CharacteristicDefinitionsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicDefinitionsCount");
      CharacteristicDefinitionsCount->printSelf(outFile);
      fprintf(outFile, "</CharacteristicDefinitionsCount>\n");
    }
  if (DefaultCharacteristicDefinitionsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DefaultCharacteristicDefinitionsCount");
      DefaultCharacteristicDefinitionsCount->printSelf(outFile);
      fprintf(outFile, "</DefaultCharacteristicDefinitionsCount>\n");
    }
  if (DefaultToleranceDefinitionsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DefaultToleranceDefinitionsCount");
      DefaultToleranceDefinitionsCount->printSelf(outFile);
      fprintf(outFile, "</DefaultToleranceDefinitionsCount>\n");
    }
  if (CharacteristicNominalsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicNominalsCount");
      CharacteristicNominalsCount->printSelf(outFile);
      fprintf(outFile, "</CharacteristicNominalsCount>\n");
    }
  if (CharacteristicItemsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicItemsCount");
      CharacteristicItemsCount->printSelf(outFile);
      fprintf(outFile, "</CharacteristicItemsCount>\n");
    }
  if (CharacteristicGroupsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicGroupsCount");
      CharacteristicGroupsCount->printSelf(outFile);
      fprintf(outFile, "</CharacteristicGroupsCount>\n");
    }
  if (WeldSymbolSetCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WeldSymbolSetCount");
      WeldSymbolSetCount->printSelf(outFile);
      fprintf(outFile, "</WeldSymbolSetCount>\n");
    }
  if (MeasurementsPlanPresent)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementsPlanPresent");
      MeasurementsPlanPresent->printSelf(outFile);
      fprintf(outFile, "</MeasurementsPlanPresent>\n");
    }
  if (MeasurementsResultsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementsResultsCount");
      MeasurementsResultsCount->printSelf(outFile);
      fprintf(outFile, "</MeasurementsResultsCount>\n");
    }
  if (StatisticalStudyPlansCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatisticalStudyPlansCount");
      StatisticalStudyPlansCount->printSelf(outFile);
      fprintf(outFile, "</StatisticalStudyPlansCount>\n");
    }
  if (StatisticalStudiesResultsCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatisticalStudiesResultsCount");
      StatisticalStudiesResultsCount->printSelf(outFile);
      fprintf(outFile, "</StatisticalStudiesResultsCount>\n");
    }
  if (CorrectiveActionPlansCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlansCount");
      CorrectiveActionPlansCount->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlansCount>\n");
    }
  if (ManufacturingProcessTraceabilitiesCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ManufacturingProcessTraceabilitiesCount");
      ManufacturingProcessTraceabilitiesCount->printSelf(outFile);
      fprintf(outFile, "</ManufacturingProcessTraceabilitiesCount>\n");
    }
  if (FeatureRulesCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<FeatureRulesCount");
      FeatureRulesCount->printSelf(outFile);
      fprintf(outFile, "</FeatureRulesCount>\n");
    }
  if (DMESelectionRulesCount)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<DMESelectionRulesCount");
      DMESelectionRulesCount->printSelf(outFile);
      fprintf(outFile, "</DMESelectionRulesCount>\n");
    }
  if (SignaturePresent)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SignaturePresent");
      SignaturePresent->printSelf(outFile);
      fprintf(outFile, "</SignaturePresent>\n");
    }
  doSpaces(-INDENT, outFile);
}

XmlUnsignedInt * ValidationCountsType::getExternalQIFReferencesCount()
{return ExternalQIFReferencesCount;}

void ValidationCountsType::setExternalQIFReferencesCount(XmlUnsignedInt * ExternalQIFReferencesCountIn)
{ExternalQIFReferencesCount = ExternalQIFReferencesCountIn;}

XmlUnsignedInt * ValidationCountsType::getDatumDefinitionsCount()
{return DatumDefinitionsCount;}

void ValidationCountsType::setDatumDefinitionsCount(XmlUnsignedInt * DatumDefinitionsCountIn)
{DatumDefinitionsCount = DatumDefinitionsCountIn;}

XmlUnsignedInt * ValidationCountsType::getDatumTargetDefinitionsCount()
{return DatumTargetDefinitionsCount;}

void ValidationCountsType::setDatumTargetDefinitionsCount(XmlUnsignedInt * DatumTargetDefinitionsCountIn)
{DatumTargetDefinitionsCount = DatumTargetDefinitionsCountIn;}

XmlUnsignedInt * ValidationCountsType::getTransformsCount()
{return TransformsCount;}

void ValidationCountsType::setTransformsCount(XmlUnsignedInt * TransformsCountIn)
{TransformsCount = TransformsCountIn;}

XmlUnsignedInt * ValidationCountsType::getCoordinateSystemsCount()
{return CoordinateSystemsCount;}

void ValidationCountsType::setCoordinateSystemsCount(XmlUnsignedInt * CoordinateSystemsCountIn)
{CoordinateSystemsCount = CoordinateSystemsCountIn;}

XmlUnsignedInt * ValidationCountsType::getDatumReferenceFramesCount()
{return DatumReferenceFramesCount;}

void ValidationCountsType::setDatumReferenceFramesCount(XmlUnsignedInt * DatumReferenceFramesCountIn)
{DatumReferenceFramesCount = DatumReferenceFramesCountIn;}

XmlUnsignedInt * ValidationCountsType::getMeasurementResourcesCount()
{return MeasurementResourcesCount;}

void ValidationCountsType::setMeasurementResourcesCount(XmlUnsignedInt * MeasurementResourcesCountIn)
{MeasurementResourcesCount = MeasurementResourcesCountIn;}

XmlUnsignedInt * ValidationCountsType::getThreadSpecificationsCount()
{return ThreadSpecificationsCount;}

void ValidationCountsType::setThreadSpecificationsCount(XmlUnsignedInt * ThreadSpecificationsCountIn)
{ThreadSpecificationsCount = ThreadSpecificationsCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductGeometrySetCount()
{return ProductGeometrySetCount;}

void ValidationCountsType::setProductGeometrySetCount(XmlUnsignedInt * ProductGeometrySetCountIn)
{ProductGeometrySetCount = ProductGeometrySetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductTopologySetCount()
{return ProductTopologySetCount;}

void ValidationCountsType::setProductTopologySetCount(XmlUnsignedInt * ProductTopologySetCountIn)
{ProductTopologySetCount = ProductTopologySetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductNoteSetCount()
{return ProductNoteSetCount;}

void ValidationCountsType::setProductNoteSetCount(XmlUnsignedInt * ProductNoteSetCountIn)
{ProductNoteSetCount = ProductNoteSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductNoteFlagSetCount()
{return ProductNoteFlagSetCount;}

void ValidationCountsType::setProductNoteFlagSetCount(XmlUnsignedInt * ProductNoteFlagSetCountIn)
{ProductNoteFlagSetCount = ProductNoteFlagSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductPartNoteSetCount()
{return ProductPartNoteSetCount;}

void ValidationCountsType::setProductPartNoteSetCount(XmlUnsignedInt * ProductPartNoteSetCountIn)
{ProductPartNoteSetCount = ProductPartNoteSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductViewSetCount()
{return ProductViewSetCount;}

void ValidationCountsType::setProductViewSetCount(XmlUnsignedInt * ProductViewSetCountIn)
{ProductViewSetCount = ProductViewSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductLayerSetCount()
{return ProductLayerSetCount;}

void ValidationCountsType::setProductLayerSetCount(XmlUnsignedInt * ProductLayerSetCountIn)
{ProductLayerSetCount = ProductLayerSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductCoordinateSystemSetCount()
{return ProductCoordinateSystemSetCount;}

void ValidationCountsType::setProductCoordinateSystemSetCount(XmlUnsignedInt * ProductCoordinateSystemSetCountIn)
{ProductCoordinateSystemSetCount = ProductCoordinateSystemSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductVisualizationSetCount()
{return ProductVisualizationSetCount;}

void ValidationCountsType::setProductVisualizationSetCount(XmlUnsignedInt * ProductVisualizationSetCountIn)
{ProductVisualizationSetCount = ProductVisualizationSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductAuxiliarySetCount()
{return ProductAuxiliarySetCount;}

void ValidationCountsType::setProductAuxiliarySetCount(XmlUnsignedInt * ProductAuxiliarySetCountIn)
{ProductAuxiliarySetCount = ProductAuxiliarySetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductPartSetCount()
{return ProductPartSetCount;}

void ValidationCountsType::setProductPartSetCount(XmlUnsignedInt * ProductPartSetCountIn)
{ProductPartSetCount = ProductPartSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductAssemblySetCount()
{return ProductAssemblySetCount;}

void ValidationCountsType::setProductAssemblySetCount(XmlUnsignedInt * ProductAssemblySetCountIn)
{ProductAssemblySetCount = ProductAssemblySetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductComponentSetCount()
{return ProductComponentSetCount;}

void ValidationCountsType::setProductComponentSetCount(XmlUnsignedInt * ProductComponentSetCountIn)
{ProductComponentSetCount = ProductComponentSetCountIn;}

XmlUnsignedInt * ValidationCountsType::getProductAsmPathsCount()
{return ProductAsmPathsCount;}

void ValidationCountsType::setProductAsmPathsCount(XmlUnsignedInt * ProductAsmPathsCountIn)
{ProductAsmPathsCount = ProductAsmPathsCountIn;}

XmlUnsignedInt * ValidationCountsType::getFeatureDefinitionsCount()
{return FeatureDefinitionsCount;}

void ValidationCountsType::setFeatureDefinitionsCount(XmlUnsignedInt * FeatureDefinitionsCountIn)
{FeatureDefinitionsCount = FeatureDefinitionsCountIn;}

XmlUnsignedInt * ValidationCountsType::getFeatureNominalsCount()
{return FeatureNominalsCount;}

void ValidationCountsType::setFeatureNominalsCount(XmlUnsignedInt * FeatureNominalsCountIn)
{FeatureNominalsCount = FeatureNominalsCountIn;}

XmlUnsignedInt * ValidationCountsType::getFeatureItemsCount()
{return FeatureItemsCount;}

void ValidationCountsType::setFeatureItemsCount(XmlUnsignedInt * FeatureItemsCountIn)
{FeatureItemsCount = FeatureItemsCountIn;}

XmlUnsignedInt * ValidationCountsType::getCharacteristicDefinitionsCount()
{return CharacteristicDefinitionsCount;}

void ValidationCountsType::setCharacteristicDefinitionsCount(XmlUnsignedInt * CharacteristicDefinitionsCountIn)
{CharacteristicDefinitionsCount = CharacteristicDefinitionsCountIn;}

XmlUnsignedInt * ValidationCountsType::getDefaultCharacteristicDefinitionsCount()
{return DefaultCharacteristicDefinitionsCount;}

void ValidationCountsType::setDefaultCharacteristicDefinitionsCount(XmlUnsignedInt * DefaultCharacteristicDefinitionsCountIn)
{DefaultCharacteristicDefinitionsCount = DefaultCharacteristicDefinitionsCountIn;}

XmlUnsignedInt * ValidationCountsType::getDefaultToleranceDefinitionsCount()
{return DefaultToleranceDefinitionsCount;}

void ValidationCountsType::setDefaultToleranceDefinitionsCount(XmlUnsignedInt * DefaultToleranceDefinitionsCountIn)
{DefaultToleranceDefinitionsCount = DefaultToleranceDefinitionsCountIn;}

XmlUnsignedInt * ValidationCountsType::getCharacteristicNominalsCount()
{return CharacteristicNominalsCount;}

void ValidationCountsType::setCharacteristicNominalsCount(XmlUnsignedInt * CharacteristicNominalsCountIn)
{CharacteristicNominalsCount = CharacteristicNominalsCountIn;}

XmlUnsignedInt * ValidationCountsType::getCharacteristicItemsCount()
{return CharacteristicItemsCount;}

void ValidationCountsType::setCharacteristicItemsCount(XmlUnsignedInt * CharacteristicItemsCountIn)
{CharacteristicItemsCount = CharacteristicItemsCountIn;}

XmlUnsignedInt * ValidationCountsType::getCharacteristicGroupsCount()
{return CharacteristicGroupsCount;}

void ValidationCountsType::setCharacteristicGroupsCount(XmlUnsignedInt * CharacteristicGroupsCountIn)
{CharacteristicGroupsCount = CharacteristicGroupsCountIn;}

XmlUnsignedInt * ValidationCountsType::getWeldSymbolSetCount()
{return WeldSymbolSetCount;}

void ValidationCountsType::setWeldSymbolSetCount(XmlUnsignedInt * WeldSymbolSetCountIn)
{WeldSymbolSetCount = WeldSymbolSetCountIn;}

XmlBoolean * ValidationCountsType::getMeasurementsPlanPresent()
{return MeasurementsPlanPresent;}

void ValidationCountsType::setMeasurementsPlanPresent(XmlBoolean * MeasurementsPlanPresentIn)
{MeasurementsPlanPresent = MeasurementsPlanPresentIn;}

XmlUnsignedInt * ValidationCountsType::getMeasurementsResultsCount()
{return MeasurementsResultsCount;}

void ValidationCountsType::setMeasurementsResultsCount(XmlUnsignedInt * MeasurementsResultsCountIn)
{MeasurementsResultsCount = MeasurementsResultsCountIn;}

XmlUnsignedInt * ValidationCountsType::getStatisticalStudyPlansCount()
{return StatisticalStudyPlansCount;}

void ValidationCountsType::setStatisticalStudyPlansCount(XmlUnsignedInt * StatisticalStudyPlansCountIn)
{StatisticalStudyPlansCount = StatisticalStudyPlansCountIn;}

XmlUnsignedInt * ValidationCountsType::getStatisticalStudiesResultsCount()
{return StatisticalStudiesResultsCount;}

void ValidationCountsType::setStatisticalStudiesResultsCount(XmlUnsignedInt * StatisticalStudiesResultsCountIn)
{StatisticalStudiesResultsCount = StatisticalStudiesResultsCountIn;}

XmlUnsignedInt * ValidationCountsType::getCorrectiveActionPlansCount()
{return CorrectiveActionPlansCount;}

void ValidationCountsType::setCorrectiveActionPlansCount(XmlUnsignedInt * CorrectiveActionPlansCountIn)
{CorrectiveActionPlansCount = CorrectiveActionPlansCountIn;}

XmlUnsignedInt * ValidationCountsType::getManufacturingProcessTraceabilitiesCount()
{return ManufacturingProcessTraceabilitiesCount;}

void ValidationCountsType::setManufacturingProcessTraceabilitiesCount(XmlUnsignedInt * ManufacturingProcessTraceabilitiesCountIn)
{ManufacturingProcessTraceabilitiesCount = ManufacturingProcessTraceabilitiesCountIn;}

XmlUnsignedInt * ValidationCountsType::getFeatureRulesCount()
{return FeatureRulesCount;}

void ValidationCountsType::setFeatureRulesCount(XmlUnsignedInt * FeatureRulesCountIn)
{FeatureRulesCount = FeatureRulesCountIn;}

XmlUnsignedInt * ValidationCountsType::getDMESelectionRulesCount()
{return DMESelectionRulesCount;}

void ValidationCountsType::setDMESelectionRulesCount(XmlUnsignedInt * DMESelectionRulesCountIn)
{DMESelectionRulesCount = DMESelectionRulesCountIn;}

XmlBoolean * ValidationCountsType::getSignaturePresent()
{return SignaturePresent;}

void ValidationCountsType::setSignaturePresent(XmlBoolean * SignaturePresentIn)
{SignaturePresent = SignaturePresentIn;}

/* ***************************************************************** */

/* class InspectionTrace_1039_Type

*/

InspectionTrace_1039_Type::InspectionTrace_1039_Type()
{
  InspectionTrace_1039_TypePair = 0;
}

InspectionTrace_1039_Type::InspectionTrace_1039_Type(
 InspectionTrace_1039_TypeChoicePair * InspectionTrace_1039_TypePairIn)
{
  InspectionTrace_1039_TypePair = InspectionTrace_1039_TypePairIn;
}

InspectionTrace_1039_Type::~InspectionTrace_1039_Type()
{
  #ifndef NODESTRUCT
  delete InspectionTrace_1039_TypePair;
  #endif
}

void InspectionTrace_1039_Type::printSelf(FILE * outFile)
{
  if (InspectionTrace_1039_TypePair)
    {
      InspectionTrace_1039_TypePair->printSelf(outFile);
    }
}

InspectionTrace_1039_TypeChoicePair * InspectionTrace_1039_Type::getInspectionTrace_1039_TypePair()
{return InspectionTrace_1039_TypePair;}

void InspectionTrace_1039_Type::setInspectionTrace_1039_TypePair(InspectionTrace_1039_TypeChoicePair * InspectionTrace_1039_TypePairIn)
{InspectionTrace_1039_TypePair = InspectionTrace_1039_TypePairIn;}
InspectionTrace_1039_TypeChoicePair::InspectionTrace_1039_TypeChoicePair() {}

InspectionTrace_1039_TypeChoicePair::InspectionTrace_1039_TypeChoicePair(
 whichOne InspectionTrace_1039_TypeTypeIn,
 InspectionTrace_1039_TypeVal InspectionTrace_1039_TypeValueIn)
{
  InspectionTrace_1039_TypeType = InspectionTrace_1039_TypeTypeIn;
  InspectionTrace_1039_TypeValue = InspectionTrace_1039_TypeValueIn;
}

InspectionTrace_1039_TypeChoicePair::~InspectionTrace_1039_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (InspectionTrace_1039_TypeType == ReferencedQIFPlanInstanceE)
    delete InspectionTrace_1039_TypeValue.ReferencedQIFPlanInstance;
  else if (InspectionTrace_1039_TypeType == ReferencedQIFPlanE)
    delete InspectionTrace_1039_TypeValue.ReferencedQIFPlan;
  #endif
}

void InspectionTrace_1039_TypeChoicePair::printSelf(FILE * outFile)
{
  if (InspectionTrace_1039_TypeType == ReferencedQIFPlanInstanceE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReferencedQIFPlanInstance");
      InspectionTrace_1039_TypeValue.ReferencedQIFPlanInstance->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ReferencedQIFPlanInstance>\n");
    }
  else if (InspectionTrace_1039_TypeType == ReferencedQIFPlanE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReferencedQIFPlan");
      InspectionTrace_1039_TypeValue.ReferencedQIFPlan->printSelf(outFile);
      fprintf(outFile, "</ReferencedQIFPlan>\n");
    }
}

/* ***************************************************************** */

/* class PreInspectionTr_1040_Type

*/

PreInspectionTr_1040_Type::PreInspectionTr_1040_Type()
{
  PreInspectionTr_1040_TypePair = 0;
}

PreInspectionTr_1040_Type::PreInspectionTr_1040_Type(
 PreInspectionTr_1040_TypeChoicePair * PreInspectionTr_1040_TypePairIn)
{
  PreInspectionTr_1040_TypePair = PreInspectionTr_1040_TypePairIn;
}

PreInspectionTr_1040_Type::~PreInspectionTr_1040_Type()
{
  #ifndef NODESTRUCT
  delete PreInspectionTr_1040_TypePair;
  #endif
}

void PreInspectionTr_1040_Type::printSelf(FILE * outFile)
{
  if (PreInspectionTr_1040_TypePair)
    {
      PreInspectionTr_1040_TypePair->printSelf(outFile);
    }
}

PreInspectionTr_1040_TypeChoicePair * PreInspectionTr_1040_Type::getPreInspectionTr_1040_TypePair()
{return PreInspectionTr_1040_TypePair;}

void PreInspectionTr_1040_Type::setPreInspectionTr_1040_TypePair(PreInspectionTr_1040_TypeChoicePair * PreInspectionTr_1040_TypePairIn)
{PreInspectionTr_1040_TypePair = PreInspectionTr_1040_TypePairIn;}
PreInspectionTr_1040_TypeChoicePair::PreInspectionTr_1040_TypeChoicePair() {}

PreInspectionTr_1040_TypeChoicePair::PreInspectionTr_1040_TypeChoicePair(
 whichOne PreInspectionTr_1040_TypeTypeIn,
 PreInspectionTr_1040_TypeVal PreInspectionTr_1040_TypeValueIn)
{
  PreInspectionTr_1040_TypeType = PreInspectionTr_1040_TypeTypeIn;
  PreInspectionTr_1040_TypeValue = PreInspectionTr_1040_TypeValueIn;
}

PreInspectionTr_1040_TypeChoicePair::~PreInspectionTr_1040_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (PreInspectionTr_1040_TypeType == ReferencedQIFPlanInstanceE)
    delete PreInspectionTr_1040_TypeValue.ReferencedQIFPlanInstance;
  else if (PreInspectionTr_1040_TypeType == ReferencedQIFPlanE)
    delete PreInspectionTr_1040_TypeValue.ReferencedQIFPlan;
  #endif
}

void PreInspectionTr_1040_TypeChoicePair::printSelf(FILE * outFile)
{
  if (PreInspectionTr_1040_TypeType == ReferencedQIFPlanInstanceE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReferencedQIFPlanInstance");
      PreInspectionTr_1040_TypeValue.ReferencedQIFPlanInstance->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ReferencedQIFPlanInstance>\n");
    }
  else if (PreInspectionTr_1040_TypeType == ReferencedQIFPlanE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ReferencedQIFPlan");
      PreInspectionTr_1040_TypeValue.ReferencedQIFPlan->printSelf(outFile);
      fprintf(outFile, "</ReferencedQIFPlan>\n");
    }
}

/* ***************************************************************** */

