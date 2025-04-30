/* ***************************************************************** */

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include  <map>
#include <xmlSchemaInstance.hh>
#include "QIFStatisticsClasses.hh"

#define INDENT 2
extern std::map<unsigned int, XmlSchemaInstanceBase *> idMap;

/* ***************************************************************** */
/* ***************************************************************** */

/* class AbsoluteLimitsByUnitType

*/

AbsoluteLimitsByUnitType::AbsoluteLimitsByUnitType()
{
  n = 0;
  LinearLimit = 0;
  AngularLimit = 0;
  AreaLimit = 0;
  ForceLimit = 0;
  MassLimit = 0;
  PressureLimit = 0;
  SpeedLimit = 0;
  TemperatureLimit = 0;
  TimeLimit = 0;
  UserDefinedUnitLimit = 0;
}

AbsoluteLimitsByUnitType::AbsoluteLimitsByUnitType(
 LinearValueType * LinearLimitIn,
 AngularValueType * AngularLimitIn,
 AreaValueType * AreaLimitIn,
 ForceValueType * ForceLimitIn,
 MassValueType * MassLimitIn,
 PressureValueType * PressureLimitIn,
 SpeedValueType * SpeedLimitIn,
 TemperatureValueType * TemperatureLimitIn,
 TimeValueType * TimeLimitIn,
 UserDefinedUnitValueTypeLisd * UserDefinedUnitLimitIn)
{
  n = 0;
  LinearLimit = LinearLimitIn;
  AngularLimit = AngularLimitIn;
  AreaLimit = AreaLimitIn;
  ForceLimit = ForceLimitIn;
  MassLimit = MassLimitIn;
  PressureLimit = PressureLimitIn;
  SpeedLimit = SpeedLimitIn;
  TemperatureLimit = TemperatureLimitIn;
  TimeLimit = TimeLimitIn;
  UserDefinedUnitLimit = UserDefinedUnitLimitIn;
}

AbsoluteLimitsByUnitType::AbsoluteLimitsByUnitType(
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
 UserDefinedUnitValueTypeLisd * UserDefinedUnitLimitIn)
{
  n = nIn;
  LinearLimit = LinearLimitIn;
  AngularLimit = AngularLimitIn;
  AreaLimit = AreaLimitIn;
  ForceLimit = ForceLimitIn;
  MassLimit = MassLimitIn;
  PressureLimit = PressureLimitIn;
  SpeedLimit = SpeedLimitIn;
  TemperatureLimit = TemperatureLimitIn;
  TimeLimit = TimeLimitIn;
  UserDefinedUnitLimit = UserDefinedUnitLimitIn;
}

AbsoluteLimitsByUnitType::~AbsoluteLimitsByUnitType()
{
  #ifndef NODESTRUCT
  delete n;
  delete LinearLimit;
  delete AngularLimit;
  delete AreaLimit;
  delete ForceLimit;
  delete MassLimit;
  delete PressureLimit;
  delete SpeedLimit;
  delete TemperatureLimit;
  delete TimeLimit;
  delete UserDefinedUnitLimit;
  #endif
}

void AbsoluteLimitsByUnitType::printSelf(FILE * outFile)
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
  if (LinearLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearLimit");
      LinearLimit->printSelf(outFile);
      fprintf(outFile, "</LinearLimit>\n");
    }
  if (AngularLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularLimit");
      AngularLimit->printSelf(outFile);
      fprintf(outFile, "</AngularLimit>\n");
    }
  if (AreaLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaLimit");
      AreaLimit->printSelf(outFile);
      fprintf(outFile, "</AreaLimit>\n");
    }
  if (ForceLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceLimit");
      ForceLimit->printSelf(outFile);
      fprintf(outFile, "</ForceLimit>\n");
    }
  if (MassLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassLimit");
      MassLimit->printSelf(outFile);
      fprintf(outFile, "</MassLimit>\n");
    }
  if (PressureLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureLimit");
      PressureLimit->printSelf(outFile);
      fprintf(outFile, "</PressureLimit>\n");
    }
  if (SpeedLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedLimit");
      SpeedLimit->printSelf(outFile);
      fprintf(outFile, "</SpeedLimit>\n");
    }
  if (TemperatureLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureLimit");
      TemperatureLimit->printSelf(outFile);
      fprintf(outFile, "</TemperatureLimit>\n");
    }
  if (TimeLimit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeLimit");
      TimeLimit->printSelf(outFile);
      fprintf(outFile, "</TimeLimit>\n");
    }
  {
    if (!UserDefinedUnitLimit)
      {
        UserDefinedUnitLimit = new UserDefinedUnitValueTypeLisd;
      }
    std::list<UserDefinedUnitValueType *>::iterator iter;
    for (iter = UserDefinedUnitLimit->begin();
         iter != UserDefinedUnitLimit->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<UserDefinedUnitLimit");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</UserDefinedUnitLimit>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AbsoluteLimitsByUnitType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in AbsoluteLimitsByUnitType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AbsoluteLimitsByUnitType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AbsoluteLimitsByUnitType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AbsoluteLimitsByUnitType\n");
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

NaturalType * AbsoluteLimitsByUnitType::getn()
{return n;}

void AbsoluteLimitsByUnitType::setn(NaturalType * nIn)
{n = nIn;}

LinearValueType * AbsoluteLimitsByUnitType::getLinearLimit()
{return LinearLimit;}

void AbsoluteLimitsByUnitType::setLinearLimit(LinearValueType * LinearLimitIn)
{LinearLimit = LinearLimitIn;}

AngularValueType * AbsoluteLimitsByUnitType::getAngularLimit()
{return AngularLimit;}

void AbsoluteLimitsByUnitType::setAngularLimit(AngularValueType * AngularLimitIn)
{AngularLimit = AngularLimitIn;}

AreaValueType * AbsoluteLimitsByUnitType::getAreaLimit()
{return AreaLimit;}

void AbsoluteLimitsByUnitType::setAreaLimit(AreaValueType * AreaLimitIn)
{AreaLimit = AreaLimitIn;}

ForceValueType * AbsoluteLimitsByUnitType::getForceLimit()
{return ForceLimit;}

void AbsoluteLimitsByUnitType::setForceLimit(ForceValueType * ForceLimitIn)
{ForceLimit = ForceLimitIn;}

MassValueType * AbsoluteLimitsByUnitType::getMassLimit()
{return MassLimit;}

void AbsoluteLimitsByUnitType::setMassLimit(MassValueType * MassLimitIn)
{MassLimit = MassLimitIn;}

PressureValueType * AbsoluteLimitsByUnitType::getPressureLimit()
{return PressureLimit;}

void AbsoluteLimitsByUnitType::setPressureLimit(PressureValueType * PressureLimitIn)
{PressureLimit = PressureLimitIn;}

SpeedValueType * AbsoluteLimitsByUnitType::getSpeedLimit()
{return SpeedLimit;}

void AbsoluteLimitsByUnitType::setSpeedLimit(SpeedValueType * SpeedLimitIn)
{SpeedLimit = SpeedLimitIn;}

TemperatureValueType * AbsoluteLimitsByUnitType::getTemperatureLimit()
{return TemperatureLimit;}

void AbsoluteLimitsByUnitType::setTemperatureLimit(TemperatureValueType * TemperatureLimitIn)
{TemperatureLimit = TemperatureLimitIn;}

TimeValueType * AbsoluteLimitsByUnitType::getTimeLimit()
{return TimeLimit;}

void AbsoluteLimitsByUnitType::setTimeLimit(TimeValueType * TimeLimitIn)
{TimeLimit = TimeLimitIn;}

UserDefinedUnitValueTypeLisd * AbsoluteLimitsByUnitType::getUserDefinedUnitLimit()
{return UserDefinedUnitLimit;}

void AbsoluteLimitsByUnitType::setUserDefinedUnitLimit(UserDefinedUnitValueTypeLisd * UserDefinedUnitLimitIn)
{UserDefinedUnitLimit = UserDefinedUnitLimitIn;}

/* ***************************************************************** */

/* class AbsoluteMeasurementsByUnitType

*/

AbsoluteMeasurementsByUnitType::AbsoluteMeasurementsByUnitType()
{
  n = 0;
  LinearMeasurement = 0;
  AngularMeasurement = 0;
  AreaMeasurement = 0;
  ForceMeasurement = 0;
  MassMeasurement = 0;
  PressureMeasurement = 0;
  SpeedMeasurement = 0;
  TemperatureMeasurement = 0;
  TimeMeasurement = 0;
  UserDefinedUnitMeasurement = 0;
}

AbsoluteMeasurementsByUnitType::AbsoluteMeasurementsByUnitType(
 MeasuredLinearValueType * LinearMeasurementIn,
 MeasuredAngularValueType * AngularMeasurementIn,
 MeasuredAreaValueType * AreaMeasurementIn,
 MeasuredForceValueType * ForceMeasurementIn,
 MeasuredMassValueType * MassMeasurementIn,
 MeasuredPressureValueType * PressureMeasurementIn,
 MeasuredSpeedValueType * SpeedMeasurementIn,
 MeasuredTemperatureValueType * TemperatureMeasurementIn,
 MeasuredTimeValueType * TimeMeasurementIn,
 MeasuredUserDefinedUnitValueTypeLisd * UserDefinedUnitMeasurementIn)
{
  n = 0;
  LinearMeasurement = LinearMeasurementIn;
  AngularMeasurement = AngularMeasurementIn;
  AreaMeasurement = AreaMeasurementIn;
  ForceMeasurement = ForceMeasurementIn;
  MassMeasurement = MassMeasurementIn;
  PressureMeasurement = PressureMeasurementIn;
  SpeedMeasurement = SpeedMeasurementIn;
  TemperatureMeasurement = TemperatureMeasurementIn;
  TimeMeasurement = TimeMeasurementIn;
  UserDefinedUnitMeasurement = UserDefinedUnitMeasurementIn;
}

AbsoluteMeasurementsByUnitType::AbsoluteMeasurementsByUnitType(
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
 MeasuredUserDefinedUnitValueTypeLisd * UserDefinedUnitMeasurementIn)
{
  n = nIn;
  LinearMeasurement = LinearMeasurementIn;
  AngularMeasurement = AngularMeasurementIn;
  AreaMeasurement = AreaMeasurementIn;
  ForceMeasurement = ForceMeasurementIn;
  MassMeasurement = MassMeasurementIn;
  PressureMeasurement = PressureMeasurementIn;
  SpeedMeasurement = SpeedMeasurementIn;
  TemperatureMeasurement = TemperatureMeasurementIn;
  TimeMeasurement = TimeMeasurementIn;
  UserDefinedUnitMeasurement = UserDefinedUnitMeasurementIn;
}

AbsoluteMeasurementsByUnitType::~AbsoluteMeasurementsByUnitType()
{
  #ifndef NODESTRUCT
  delete n;
  delete LinearMeasurement;
  delete AngularMeasurement;
  delete AreaMeasurement;
  delete ForceMeasurement;
  delete MassMeasurement;
  delete PressureMeasurement;
  delete SpeedMeasurement;
  delete TemperatureMeasurement;
  delete TimeMeasurement;
  delete UserDefinedUnitMeasurement;
  #endif
}

void AbsoluteMeasurementsByUnitType::printSelf(FILE * outFile)
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
  if (LinearMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearMeasurement");
      LinearMeasurement->printSelf(outFile);
      fprintf(outFile, "</LinearMeasurement>\n");
    }
  if (AngularMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularMeasurement");
      AngularMeasurement->printSelf(outFile);
      fprintf(outFile, "</AngularMeasurement>\n");
    }
  if (AreaMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaMeasurement");
      AreaMeasurement->printSelf(outFile);
      fprintf(outFile, "</AreaMeasurement>\n");
    }
  if (ForceMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceMeasurement");
      ForceMeasurement->printSelf(outFile);
      fprintf(outFile, "</ForceMeasurement>\n");
    }
  if (MassMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassMeasurement");
      MassMeasurement->printSelf(outFile);
      fprintf(outFile, "</MassMeasurement>\n");
    }
  if (PressureMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureMeasurement");
      PressureMeasurement->printSelf(outFile);
      fprintf(outFile, "</PressureMeasurement>\n");
    }
  if (SpeedMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedMeasurement");
      SpeedMeasurement->printSelf(outFile);
      fprintf(outFile, "</SpeedMeasurement>\n");
    }
  if (TemperatureMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureMeasurement");
      TemperatureMeasurement->printSelf(outFile);
      fprintf(outFile, "</TemperatureMeasurement>\n");
    }
  if (TimeMeasurement)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeMeasurement");
      TimeMeasurement->printSelf(outFile);
      fprintf(outFile, "</TimeMeasurement>\n");
    }
  {
    if (!UserDefinedUnitMeasurement)
      {
        UserDefinedUnitMeasurement = new MeasuredUserDefinedUnitValueTypeLisd;
      }
    std::list<MeasuredUserDefinedUnitValueType *>::iterator iter;
    for (iter = UserDefinedUnitMeasurement->begin();
         iter != UserDefinedUnitMeasurement->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<UserDefinedUnitMeasurement");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</UserDefinedUnitMeasurement>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool AbsoluteMeasurementsByUnitType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in AbsoluteMeasurementsByUnitType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in AbsoluteMeasurementsByUnitType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AbsoluteMeasurementsByUnitType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in AbsoluteMeasurementsByUnitType\n");
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

NaturalType * AbsoluteMeasurementsByUnitType::getn()
{return n;}

void AbsoluteMeasurementsByUnitType::setn(NaturalType * nIn)
{n = nIn;}

MeasuredLinearValueType * AbsoluteMeasurementsByUnitType::getLinearMeasurement()
{return LinearMeasurement;}

void AbsoluteMeasurementsByUnitType::setLinearMeasurement(MeasuredLinearValueType * LinearMeasurementIn)
{LinearMeasurement = LinearMeasurementIn;}

MeasuredAngularValueType * AbsoluteMeasurementsByUnitType::getAngularMeasurement()
{return AngularMeasurement;}

void AbsoluteMeasurementsByUnitType::setAngularMeasurement(MeasuredAngularValueType * AngularMeasurementIn)
{AngularMeasurement = AngularMeasurementIn;}

MeasuredAreaValueType * AbsoluteMeasurementsByUnitType::getAreaMeasurement()
{return AreaMeasurement;}

void AbsoluteMeasurementsByUnitType::setAreaMeasurement(MeasuredAreaValueType * AreaMeasurementIn)
{AreaMeasurement = AreaMeasurementIn;}

MeasuredForceValueType * AbsoluteMeasurementsByUnitType::getForceMeasurement()
{return ForceMeasurement;}

void AbsoluteMeasurementsByUnitType::setForceMeasurement(MeasuredForceValueType * ForceMeasurementIn)
{ForceMeasurement = ForceMeasurementIn;}

MeasuredMassValueType * AbsoluteMeasurementsByUnitType::getMassMeasurement()
{return MassMeasurement;}

void AbsoluteMeasurementsByUnitType::setMassMeasurement(MeasuredMassValueType * MassMeasurementIn)
{MassMeasurement = MassMeasurementIn;}

MeasuredPressureValueType * AbsoluteMeasurementsByUnitType::getPressureMeasurement()
{return PressureMeasurement;}

void AbsoluteMeasurementsByUnitType::setPressureMeasurement(MeasuredPressureValueType * PressureMeasurementIn)
{PressureMeasurement = PressureMeasurementIn;}

MeasuredSpeedValueType * AbsoluteMeasurementsByUnitType::getSpeedMeasurement()
{return SpeedMeasurement;}

void AbsoluteMeasurementsByUnitType::setSpeedMeasurement(MeasuredSpeedValueType * SpeedMeasurementIn)
{SpeedMeasurement = SpeedMeasurementIn;}

MeasuredTemperatureValueType * AbsoluteMeasurementsByUnitType::getTemperatureMeasurement()
{return TemperatureMeasurement;}

void AbsoluteMeasurementsByUnitType::setTemperatureMeasurement(MeasuredTemperatureValueType * TemperatureMeasurementIn)
{TemperatureMeasurement = TemperatureMeasurementIn;}

MeasuredTimeValueType * AbsoluteMeasurementsByUnitType::getTimeMeasurement()
{return TimeMeasurement;}

void AbsoluteMeasurementsByUnitType::setTimeMeasurement(MeasuredTimeValueType * TimeMeasurementIn)
{TimeMeasurement = TimeMeasurementIn;}

MeasuredUserDefinedUnitValueTypeLisd * AbsoluteMeasurementsByUnitType::getUserDefinedUnitMeasurement()
{return UserDefinedUnitMeasurement;}

void AbsoluteMeasurementsByUnitType::setUserDefinedUnitMeasurement(MeasuredUserDefinedUnitValueTypeLisd * UserDefinedUnitMeasurementIn)
{UserDefinedUnitMeasurement = UserDefinedUnitMeasurementIn;}

/* ***************************************************************** */

/* class BiasStudyPlanType

*/

BiasStudyPlanType::BiasStudyPlanType() :
  MultipleProductInstanceStudyPlanBaseType()
{
  MeasurementDeviceIds = 0;
}

BiasStudyPlanType::BiasStudyPlanType(
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
 ArrayReferenceType * MeasurementDeviceIdsIn) :
  MultipleProductInstanceStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
}

BiasStudyPlanType::BiasStudyPlanType(
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
 ArrayReferenceType * MeasurementDeviceIdsIn) :
  MultipleProductInstanceStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
}

BiasStudyPlanType::~BiasStudyPlanType()
{
  #ifndef NODESTRUCT
  delete MeasurementDeviceIds;
  #endif
}

void BiasStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool BiasStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in BiasStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in BiasStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in BiasStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in BiasStudyPlanType\n");
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

ArrayReferenceType * BiasStudyPlanType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void BiasStudyPlanType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

/* ***************************************************************** */

/* class BiasStudyResultsType

*/

BiasStudyResultsType::BiasStudyResultsType() :
  StatisticalStudyResultsBaseType()
{
  SampleSize = 0;
  MeasurementDeviceIds = 0;
}

BiasStudyResultsType::BiasStudyResultsType(
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
 ArrayReferenceType * MeasurementDeviceIdsIn) :
  StatisticalStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  SampleSize = SampleSizeIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
}

BiasStudyResultsType::BiasStudyResultsType(
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
 ArrayReferenceType * MeasurementDeviceIdsIn) :
  StatisticalStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  SampleSize = SampleSizeIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
}

BiasStudyResultsType::~BiasStudyResultsType()
{
  #ifndef NODESTRUCT
  delete SampleSize;
  delete MeasurementDeviceIds;
  #endif
}

void BiasStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SampleSize");
  SampleSize->printSelf(outFile);
  fprintf(outFile, "</SampleSize>\n");
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool BiasStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in BiasStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in BiasStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in BiasStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in BiasStudyResultsType\n");
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

XmlPositiveInteger * BiasStudyResultsType::getSampleSize()
{return SampleSize;}

void BiasStudyResultsType::setSampleSize(XmlPositiveInteger * SampleSizeIn)
{SampleSize = SampleSizeIn;}

ArrayReferenceType * BiasStudyResultsType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void BiasStudyResultsType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

/* ***************************************************************** */

/* class CapabilityStudyPlanType

*/

CapabilityStudyPlanType::CapabilityStudyPlanType() :
  MultipleProductInstanceStudyPlanBaseType()
{
  CapabilityStudyPlanTypePair = 0;
}

CapabilityStudyPlanType::CapabilityStudyPlanType(
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
 CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanTypePairIn) :
  MultipleProductInstanceStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  CapabilityStudyPlanTypePair = CapabilityStudyPlanTypePairIn;
}

CapabilityStudyPlanType::CapabilityStudyPlanType(
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
 CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanTypePairIn) :
  MultipleProductInstanceStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  CapabilityStudyPlanTypePair = CapabilityStudyPlanTypePairIn;
}

CapabilityStudyPlanType::~CapabilityStudyPlanType()
{
  #ifndef NODESTRUCT
  delete CapabilityStudyPlanTypePair;
  #endif
}

void CapabilityStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  CapabilityStudyPlanTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}
CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanType::getCapabilityStudyPlanTypeChoicePair()
{return CapabilityStudyPlanTypePair;}

void CapabilityStudyPlanType::setCapabilityStudyPlanTypeChoicePair(CapabilityStudyPlanTypeChoicePair * CapabilityStudyPlanTypePairIn)
{CapabilityStudyPlanTypePair = CapabilityStudyPlanTypePairIn;}

/* ***************************************************************** */

CapabilityStudyPlanTypeChoicePair::CapabilityStudyPlanTypeChoicePair() {}

CapabilityStudyPlanTypeChoicePair::CapabilityStudyPlanTypeChoicePair(
 whichOne CapabilityStudyPlanTypeTypeIn,
 CapabilityStudyPlanTypeVal CapabilityStudyPlanTypeValueIn)
{
  CapabilityStudyPlanTypeType = CapabilityStudyPlanTypeTypeIn;
  CapabilityStudyPlanTypeValue = CapabilityStudyPlanTypeValueIn;
}

CapabilityStudyPlanTypeChoicePair::~CapabilityStudyPlanTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (CapabilityStudyPlanTypeType == CpkThresholdE)
    delete CapabilityStudyPlanTypeValue.CpkThreshold;
  else if (CapabilityStudyPlanTypeType == PpkThresholdE)
    delete CapabilityStudyPlanTypeValue.PpkThreshold;
  #endif
}

void CapabilityStudyPlanTypeChoicePair::printSelf(FILE * outFile)
{
  if (CapabilityStudyPlanTypeType == CpkThresholdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CpkThreshold");
      CapabilityStudyPlanTypeValue.CpkThreshold->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CpkThreshold>\n");
    }
  else if (CapabilityStudyPlanTypeType == PpkThresholdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PpkThreshold");
      CapabilityStudyPlanTypeValue.PpkThreshold->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PpkThreshold>\n");
    }
}

bool CapabilityStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in CapabilityStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CapabilityStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CapabilityStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in CapabilityStudyPlanType\n");
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

/* ***************************************************************** */

/* class CapabilityStudyResultsType

*/

CapabilityStudyResultsType::CapabilityStudyResultsType() :
  MultipleProductInstanceStudyResultsBaseType()
{
}

CapabilityStudyResultsType::CapabilityStudyResultsType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  MultipleProductInstanceStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
}

CapabilityStudyResultsType::CapabilityStudyResultsType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  MultipleProductInstanceStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
}

CapabilityStudyResultsType::~CapabilityStudyResultsType()
{
  #ifndef NODESTRUCT
  #endif
}

void CapabilityStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool CapabilityStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in CapabilityStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CapabilityStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CapabilityStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in CapabilityStudyResultsType\n");
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

/* ***************************************************************** */

/* class ControlMethodType

*/

ControlMethodType::ControlMethodType()
{
  id = 0;
  AssignableCauseIds = 0;
  Attributes = 0;
  ControlMethodTy_1159 = 0;
}

ControlMethodType::ControlMethodType(
 ArrayReferenceType * AssignableCauseIdsIn,
 AttributesType * AttributesIn,
 ControlMethodTy_1159_Type * ControlMethodTy_1159In)
{
  id = 0;
  AssignableCauseIds = AssignableCauseIdsIn;
  Attributes = AttributesIn;
  ControlMethodTy_1159 = ControlMethodTy_1159In;
}

ControlMethodType::ControlMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * AssignableCauseIdsIn,
 AttributesType * AttributesIn,
 ControlMethodTy_1159_Type * ControlMethodTy_1159In)
{
  id = idIn;
  AssignableCauseIds = AssignableCauseIdsIn;
  Attributes = AttributesIn;
  ControlMethodTy_1159 = ControlMethodTy_1159In;
}

ControlMethodType::~ControlMethodType()
{
  #ifndef NODESTRUCT
  delete id;
  delete AssignableCauseIds;
  delete Attributes;
  delete ControlMethodTy_1159;
  #endif
}

void ControlMethodType::printSelf(FILE * outFile)
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
  if (AssignableCauseIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AssignableCauseIds");
      AssignableCauseIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AssignableCauseIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  ControlMethodTy_1159->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool ControlMethodType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ControlMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ControlMethodType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ControlMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in ControlMethodType\n");
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

QIFIdType * ControlMethodType::getid()
{return id;}

void ControlMethodType::setid(QIFIdType * idIn)
{id = idIn;}

ArrayReferenceType * ControlMethodType::getAssignableCauseIds()
{return AssignableCauseIds;}

void ControlMethodType::setAssignableCauseIds(ArrayReferenceType * AssignableCauseIdsIn)
{AssignableCauseIds = AssignableCauseIdsIn;}

AttributesType * ControlMethodType::getAttributes()
{return Attributes;}

void ControlMethodType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

ControlMethodTy_1159_Type * ControlMethodType::getControlMethodTy_1159()
{return ControlMethodTy_1159;}

void ControlMethodType::setControlMethodTy_1159(ControlMethodTy_1159_Type * ControlMethodTy_1159In)
{ControlMethodTy_1159 = ControlMethodTy_1159In;}

/* ***************************************************************** */

/* class ControlMethodTypeLisd

*/

ControlMethodTypeLisd::ControlMethodTypeLisd() {}

ControlMethodTypeLisd::ControlMethodTypeLisd(ControlMethodType * aControlMethodType)
{
  push_back(aControlMethodType);
}

ControlMethodTypeLisd::~ControlMethodTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ControlMethodType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ControlMethodTypeLisd::printSelf(FILE * outFile)
{
  std::list<ControlMethodType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class ControlMethodsType

*/

ControlMethodsType::ControlMethodsType()
{
  n = 0;
  ControlMethod = 0;
}

ControlMethodsType::ControlMethodsType(
 ControlMethodTypeLisd * ControlMethodIn)
{
  n = 0;
  ControlMethod = ControlMethodIn;
}

ControlMethodsType::ControlMethodsType(
 NaturalType * nIn,
 ControlMethodTypeLisd * ControlMethodIn)
{
  n = nIn;
  ControlMethod = ControlMethodIn;
}

ControlMethodsType::~ControlMethodsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ControlMethod;
  #endif
}

void ControlMethodsType::printSelf(FILE * outFile)
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
    if (!ControlMethod)
      {
        fprintf(stderr, "ControlMethod list is missing\n");
        exit(1);
      }
    if (ControlMethod->size() == 0)
      {
        fprintf(stderr, "ControlMethod list is empty\n");
        exit(1);
      }
    if (ControlMethod->size() < 1)
      {
        fprintf(stderr,
                "size of ControlMethod list (%d) less than minimum required (1)\n",
                (int)ControlMethod->size());
        exit(1);
      }
    std::list<ControlMethodType *>::iterator iter;
    for (iter = ControlMethod->begin();
         iter != ControlMethod->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ControlMethod");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ControlMethod>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ControlMethodsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in ControlMethodsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ControlMethodsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ControlMethodsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ControlMethodsType\n");
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

NaturalType * ControlMethodsType::getn()
{return n;}

void ControlMethodsType::setn(NaturalType * nIn)
{n = nIn;}

ControlMethodTypeLisd * ControlMethodsType::getControlMethod()
{return ControlMethod;}

void ControlMethodsType::setControlMethod(ControlMethodTypeLisd * ControlMethodIn)
{ControlMethod = ControlMethodIn;}

/* ***************************************************************** */

/* class CorrectiveActionPlanType

*/

CorrectiveActionPlanType::CorrectiveActionPlanType()
{
  id = 0;
  Version = 0;
  Attributes = 0;
  AssignableCauses = 0;
  CorrectiveActions = 0;
}

CorrectiveActionPlanType::CorrectiveActionPlanType(
 VersionType * VersionIn,
 AttributesType * AttributesIn,
 AssignableCausesType * AssignableCausesIn,
 CorrectiveActionsType * CorrectiveActionsIn)
{
  id = 0;
  Version = VersionIn;
  Attributes = AttributesIn;
  AssignableCauses = AssignableCausesIn;
  CorrectiveActions = CorrectiveActionsIn;
}

CorrectiveActionPlanType::CorrectiveActionPlanType(
 QIFIdType * idIn,
 VersionType * VersionIn,
 AttributesType * AttributesIn,
 AssignableCausesType * AssignableCausesIn,
 CorrectiveActionsType * CorrectiveActionsIn)
{
  id = idIn;
  Version = VersionIn;
  Attributes = AttributesIn;
  AssignableCauses = AssignableCausesIn;
  CorrectiveActions = CorrectiveActionsIn;
}

CorrectiveActionPlanType::~CorrectiveActionPlanType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Version;
  delete Attributes;
  delete AssignableCauses;
  delete CorrectiveActions;
  #endif
}

void CorrectiveActionPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<AssignableCauses");
  AssignableCauses->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</AssignableCauses>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<CorrectiveActions");
  CorrectiveActions->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CorrectiveActions>\n");
  doSpaces(-INDENT, outFile);
}

bool CorrectiveActionPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in CorrectiveActionPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CorrectiveActionPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CorrectiveActionPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in CorrectiveActionPlanType\n");
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

QIFIdType * CorrectiveActionPlanType::getid()
{return id;}

void CorrectiveActionPlanType::setid(QIFIdType * idIn)
{id = idIn;}

VersionType * CorrectiveActionPlanType::getVersion()
{return Version;}

void CorrectiveActionPlanType::setVersion(VersionType * VersionIn)
{Version = VersionIn;}

AttributesType * CorrectiveActionPlanType::getAttributes()
{return Attributes;}

void CorrectiveActionPlanType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

AssignableCausesType * CorrectiveActionPlanType::getAssignableCauses()
{return AssignableCauses;}

void CorrectiveActionPlanType::setAssignableCauses(AssignableCausesType * AssignableCausesIn)
{AssignableCauses = AssignableCausesIn;}

CorrectiveActionsType * CorrectiveActionPlanType::getCorrectiveActions()
{return CorrectiveActions;}

void CorrectiveActionPlanType::setCorrectiveActions(CorrectiveActionsType * CorrectiveActionsIn)
{CorrectiveActions = CorrectiveActionsIn;}

/* ***************************************************************** */

/* class CorrectiveActionPlanTypeLisd

*/

CorrectiveActionPlanTypeLisd::CorrectiveActionPlanTypeLisd() {}

CorrectiveActionPlanTypeLisd::CorrectiveActionPlanTypeLisd(CorrectiveActionPlanType * aCorrectiveActionPlanType)
{
  push_back(aCorrectiveActionPlanType);
}

CorrectiveActionPlanTypeLisd::~CorrectiveActionPlanTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<CorrectiveActionPlanType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void CorrectiveActionPlanTypeLisd::printSelf(FILE * outFile)
{
  std::list<CorrectiveActionPlanType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class CorrectiveActionPlansType

*/

CorrectiveActionPlansType::CorrectiveActionPlansType()
{
  n = 0;
  CorrectiveActionPlan = 0;
}

CorrectiveActionPlansType::CorrectiveActionPlansType(
 CorrectiveActionPlanTypeLisd * CorrectiveActionPlanIn)
{
  n = 0;
  CorrectiveActionPlan = CorrectiveActionPlanIn;
}

CorrectiveActionPlansType::CorrectiveActionPlansType(
 NaturalType * nIn,
 CorrectiveActionPlanTypeLisd * CorrectiveActionPlanIn)
{
  n = nIn;
  CorrectiveActionPlan = CorrectiveActionPlanIn;
}

CorrectiveActionPlansType::~CorrectiveActionPlansType()
{
  #ifndef NODESTRUCT
  delete n;
  delete CorrectiveActionPlan;
  #endif
}

void CorrectiveActionPlansType::printSelf(FILE * outFile)
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
    if (!CorrectiveActionPlan)
      {
        fprintf(stderr, "CorrectiveActionPlan list is missing\n");
        exit(1);
      }
    if (CorrectiveActionPlan->size() == 0)
      {
        fprintf(stderr, "CorrectiveActionPlan list is empty\n");
        exit(1);
      }
    if (CorrectiveActionPlan->size() < 1)
      {
        fprintf(stderr,
                "size of CorrectiveActionPlan list (%d) less than minimum required (1)\n",
                (int)CorrectiveActionPlan->size());
        exit(1);
      }
    std::list<CorrectiveActionPlanType *>::iterator iter;
    for (iter = CorrectiveActionPlan->begin();
         iter != CorrectiveActionPlan->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<CorrectiveActionPlan");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</CorrectiveActionPlan>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CorrectiveActionPlansType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in CorrectiveActionPlansType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CorrectiveActionPlansType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CorrectiveActionPlansType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CorrectiveActionPlansType\n");
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

NaturalType * CorrectiveActionPlansType::getn()
{return n;}

void CorrectiveActionPlansType::setn(NaturalType * nIn)
{n = nIn;}

CorrectiveActionPlanTypeLisd * CorrectiveActionPlansType::getCorrectiveActionPlan()
{return CorrectiveActionPlan;}

void CorrectiveActionPlansType::setCorrectiveActionPlan(CorrectiveActionPlanTypeLisd * CorrectiveActionPlanIn)
{CorrectiveActionPlan = CorrectiveActionPlanIn;}

/* ***************************************************************** */

/* class CriteriaByUnitType

*/

CriteriaByUnitType::CriteriaByUnitType()
{
  n = 0;
  LinearCriterion = 0;
  AngularCriterion = 0;
  AreaCriterion = 0;
  ForceCriterion = 0;
  MassCriterion = 0;
  PressureCriterion = 0;
  SpeedCriterion = 0;
  TemperatureCriterion = 0;
  TimeCriterion = 0;
  UserDefinedUnitCriterion = 0;
}

CriteriaByUnitType::CriteriaByUnitType(
 CriterionLinearType * LinearCriterionIn,
 CriterionAngularType * AngularCriterionIn,
 CriterionAreaType * AreaCriterionIn,
 CriterionForceType * ForceCriterionIn,
 CriterionMassType * MassCriterionIn,
 CriterionPressureType * PressureCriterionIn,
 CriterionSpeedType * SpeedCriterionIn,
 CriterionTemperatureType * TemperatureCriterionIn,
 CriterionTimeType * TimeCriterionIn,
 CriterionUserDefinedUnitTypeLisd * UserDefinedUnitCriterionIn)
{
  n = 0;
  LinearCriterion = LinearCriterionIn;
  AngularCriterion = AngularCriterionIn;
  AreaCriterion = AreaCriterionIn;
  ForceCriterion = ForceCriterionIn;
  MassCriterion = MassCriterionIn;
  PressureCriterion = PressureCriterionIn;
  SpeedCriterion = SpeedCriterionIn;
  TemperatureCriterion = TemperatureCriterionIn;
  TimeCriterion = TimeCriterionIn;
  UserDefinedUnitCriterion = UserDefinedUnitCriterionIn;
}

CriteriaByUnitType::CriteriaByUnitType(
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
 CriterionUserDefinedUnitTypeLisd * UserDefinedUnitCriterionIn)
{
  n = nIn;
  LinearCriterion = LinearCriterionIn;
  AngularCriterion = AngularCriterionIn;
  AreaCriterion = AreaCriterionIn;
  ForceCriterion = ForceCriterionIn;
  MassCriterion = MassCriterionIn;
  PressureCriterion = PressureCriterionIn;
  SpeedCriterion = SpeedCriterionIn;
  TemperatureCriterion = TemperatureCriterionIn;
  TimeCriterion = TimeCriterionIn;
  UserDefinedUnitCriterion = UserDefinedUnitCriterionIn;
}

CriteriaByUnitType::~CriteriaByUnitType()
{
  #ifndef NODESTRUCT
  delete n;
  delete LinearCriterion;
  delete AngularCriterion;
  delete AreaCriterion;
  delete ForceCriterion;
  delete MassCriterion;
  delete PressureCriterion;
  delete SpeedCriterion;
  delete TemperatureCriterion;
  delete TimeCriterion;
  delete UserDefinedUnitCriterion;
  #endif
}

void CriteriaByUnitType::printSelf(FILE * outFile)
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
  if (LinearCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearCriterion");
      LinearCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearCriterion>\n");
    }
  if (AngularCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularCriterion");
      AngularCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularCriterion>\n");
    }
  if (AreaCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaCriterion");
      AreaCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaCriterion>\n");
    }
  if (ForceCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceCriterion");
      ForceCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceCriterion>\n");
    }
  if (MassCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassCriterion");
      MassCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassCriterion>\n");
    }
  if (PressureCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureCriterion");
      PressureCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureCriterion>\n");
    }
  if (SpeedCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedCriterion");
      SpeedCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedCriterion>\n");
    }
  if (TemperatureCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureCriterion");
      TemperatureCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureCriterion>\n");
    }
  if (TimeCriterion)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeCriterion");
      TimeCriterion->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeCriterion>\n");
    }
  {
    if (!UserDefinedUnitCriterion)
      {
        UserDefinedUnitCriterion = new CriterionUserDefinedUnitTypeLisd;
      }
    std::list<CriterionUserDefinedUnitType *>::iterator iter;
    for (iter = UserDefinedUnitCriterion->begin();
         iter != UserDefinedUnitCriterion->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<UserDefinedUnitCriterion");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</UserDefinedUnitCriterion>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool CriteriaByUnitType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in CriteriaByUnitType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in CriteriaByUnitType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CriteriaByUnitType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in CriteriaByUnitType\n");
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

NaturalType * CriteriaByUnitType::getn()
{return n;}

void CriteriaByUnitType::setn(NaturalType * nIn)
{n = nIn;}

CriterionLinearType * CriteriaByUnitType::getLinearCriterion()
{return LinearCriterion;}

void CriteriaByUnitType::setLinearCriterion(CriterionLinearType * LinearCriterionIn)
{LinearCriterion = LinearCriterionIn;}

CriterionAngularType * CriteriaByUnitType::getAngularCriterion()
{return AngularCriterion;}

void CriteriaByUnitType::setAngularCriterion(CriterionAngularType * AngularCriterionIn)
{AngularCriterion = AngularCriterionIn;}

CriterionAreaType * CriteriaByUnitType::getAreaCriterion()
{return AreaCriterion;}

void CriteriaByUnitType::setAreaCriterion(CriterionAreaType * AreaCriterionIn)
{AreaCriterion = AreaCriterionIn;}

CriterionForceType * CriteriaByUnitType::getForceCriterion()
{return ForceCriterion;}

void CriteriaByUnitType::setForceCriterion(CriterionForceType * ForceCriterionIn)
{ForceCriterion = ForceCriterionIn;}

CriterionMassType * CriteriaByUnitType::getMassCriterion()
{return MassCriterion;}

void CriteriaByUnitType::setMassCriterion(CriterionMassType * MassCriterionIn)
{MassCriterion = MassCriterionIn;}

CriterionPressureType * CriteriaByUnitType::getPressureCriterion()
{return PressureCriterion;}

void CriteriaByUnitType::setPressureCriterion(CriterionPressureType * PressureCriterionIn)
{PressureCriterion = PressureCriterionIn;}

CriterionSpeedType * CriteriaByUnitType::getSpeedCriterion()
{return SpeedCriterion;}

void CriteriaByUnitType::setSpeedCriterion(CriterionSpeedType * SpeedCriterionIn)
{SpeedCriterion = SpeedCriterionIn;}

CriterionTemperatureType * CriteriaByUnitType::getTemperatureCriterion()
{return TemperatureCriterion;}

void CriteriaByUnitType::setTemperatureCriterion(CriterionTemperatureType * TemperatureCriterionIn)
{TemperatureCriterion = TemperatureCriterionIn;}

CriterionTimeType * CriteriaByUnitType::getTimeCriterion()
{return TimeCriterion;}

void CriteriaByUnitType::setTimeCriterion(CriterionTimeType * TimeCriterionIn)
{TimeCriterion = TimeCriterionIn;}

CriterionUserDefinedUnitTypeLisd * CriteriaByUnitType::getUserDefinedUnitCriterion()
{return UserDefinedUnitCriterion;}

void CriteriaByUnitType::setUserDefinedUnitCriterion(CriterionUserDefinedUnitTypeLisd * UserDefinedUnitCriterionIn)
{UserDefinedUnitCriterion = UserDefinedUnitCriterionIn;}

/* ***************************************************************** */

/* class FirstArticleStudyPlanType

*/

FirstArticleStudyPlanType::FirstArticleStudyPlanType() :
  StatisticalStudyPlanBaseType()
{
  InSpecRatio = 0;
  FirstArticleStu_1160 = 0;
}

FirstArticleStudyPlanType::FirstArticleStudyPlanType(
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
 FirstArticleStu_1160_Type * FirstArticleStu_1160In) :
  StatisticalStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  InSpecRatio = InSpecRatioIn;
  FirstArticleStu_1160 = FirstArticleStu_1160In;
}

FirstArticleStudyPlanType::FirstArticleStudyPlanType(
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
 FirstArticleStu_1160_Type * FirstArticleStu_1160In) :
  StatisticalStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  InSpecRatio = InSpecRatioIn;
  FirstArticleStu_1160 = FirstArticleStu_1160In;
}

FirstArticleStudyPlanType::~FirstArticleStudyPlanType()
{
  #ifndef NODESTRUCT
  delete InSpecRatio;
  delete FirstArticleStu_1160;
  #endif
}

void FirstArticleStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<InSpecRatio");
  InSpecRatio->printSelf(outFile);
  fprintf(outFile, "</InSpecRatio>\n");
  FirstArticleStu_1160->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool FirstArticleStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in FirstArticleStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FirstArticleStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FirstArticleStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in FirstArticleStudyPlanType\n");
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

XmlDecimal * FirstArticleStudyPlanType::getInSpecRatio()
{return InSpecRatio;}

void FirstArticleStudyPlanType::setInSpecRatio(XmlDecimal * InSpecRatioIn)
{InSpecRatio = InSpecRatioIn;}

FirstArticleStu_1160_Type * FirstArticleStudyPlanType::getFirstArticleStu_1160()
{return FirstArticleStu_1160;}

void FirstArticleStudyPlanType::setFirstArticleStu_1160(FirstArticleStu_1160_Type * FirstArticleStu_1160In)
{FirstArticleStu_1160 = FirstArticleStu_1160In;}

/* ***************************************************************** */

/* class FirstArticleStudyResultsType

*/

FirstArticleStudyResultsType::FirstArticleStudyResultsType() :
  StatisticalStudyResultsBaseType()
{
  InSpecRatio = 0;
  AbsoluteMaximums = 0;
  RelativeMaximum = 0;
}

FirstArticleStudyResultsType::FirstArticleStudyResultsType(
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
 MeasuredDecimalType * RelativeMaximumIn) :
  StatisticalStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  InSpecRatio = InSpecRatioIn;
  AbsoluteMaximums = AbsoluteMaximumsIn;
  RelativeMaximum = RelativeMaximumIn;
}

FirstArticleStudyResultsType::FirstArticleStudyResultsType(
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
 MeasuredDecimalType * RelativeMaximumIn) :
  StatisticalStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  InSpecRatio = InSpecRatioIn;
  AbsoluteMaximums = AbsoluteMaximumsIn;
  RelativeMaximum = RelativeMaximumIn;
}

FirstArticleStudyResultsType::~FirstArticleStudyResultsType()
{
  #ifndef NODESTRUCT
  delete InSpecRatio;
  delete AbsoluteMaximums;
  delete RelativeMaximum;
  #endif
}

void FirstArticleStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  if (InSpecRatio)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InSpecRatio");
      InSpecRatio->printSelf(outFile);
      fprintf(outFile, "</InSpecRatio>\n");
    }
  if (AbsoluteMaximums)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AbsoluteMaximums");
      AbsoluteMaximums->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AbsoluteMaximums>\n");
    }
  if (RelativeMaximum)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RelativeMaximum");
      RelativeMaximum->printSelf(outFile);
      fprintf(outFile, "</RelativeMaximum>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool FirstArticleStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in FirstArticleStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in FirstArticleStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in FirstArticleStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in FirstArticleStudyResultsType\n");
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

XmlDecimal * FirstArticleStudyResultsType::getInSpecRatio()
{return InSpecRatio;}

void FirstArticleStudyResultsType::setInSpecRatio(XmlDecimal * InSpecRatioIn)
{InSpecRatio = InSpecRatioIn;}

AbsoluteMeasurementsByUnitType * FirstArticleStudyResultsType::getAbsoluteMaximums()
{return AbsoluteMaximums;}

void FirstArticleStudyResultsType::setAbsoluteMaximums(AbsoluteMeasurementsByUnitType * AbsoluteMaximumsIn)
{AbsoluteMaximums = AbsoluteMaximumsIn;}

MeasuredDecimalType * FirstArticleStudyResultsType::getRelativeMaximum()
{return RelativeMaximum;}

void FirstArticleStudyResultsType::setRelativeMaximum(MeasuredDecimalType * RelativeMaximumIn)
{RelativeMaximum = RelativeMaximumIn;}

/* ***************************************************************** */

/* class GageRandRStudyEnumType

*/

GageRandRStudyEnumType::GageRandRStudyEnumType() :
  XmlNMTOKEN()
{
}

GageRandRStudyEnumType::GageRandRStudyEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!getbad())
    setbad(strcmp(val.c_str(), "RANGE") &&
           strcmp(val.c_str(), "AVGANDRANGE") &&
           strcmp(val.c_str(), "ANOVA"));
}

GageRandRStudyEnumType::~GageRandRStudyEnumType() {}

bool GageRandRStudyEnumType::GageRandRStudyEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "RANGE") &&
          strcmp(val.c_str(), "AVGANDRANGE") &&
          strcmp(val.c_str(), "ANOVA"));
}

void GageRandRStudyEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "GageRandRStudyEnumType");
}

void GageRandRStudyEnumType::printSelf(FILE * outFile)
{
  if (GageRandRStudyEnumTypeIsBad())
    {
      fprintf(stderr, "bad GageRandRStudyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void GageRandRStudyEnumType::oPrintSelf(FILE * outFile)
{
  if (GageRandRStudyEnumTypeIsBad())
    {
      fprintf(stderr, "bad GageRandRStudyEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/* ***************************************************************** */

/* class GageRandRStudyPlanType

*/

GageRandRStudyPlanType::GageRandRStudyPlanType() :
  StatisticalStudyPlanBaseType()
{
  MeasurementDeviceIds = 0;
  RandRStudyType = 0;
  NumberOfAppraisers = 0;
  NumberOfParts = 0;
  NumberOfTrials = 0;
  GageRandRStudyP_1161 = 0;
  GageRandRStudyP_1162 = 0;
  GageRandRStudyP_1163 = 0;
}

GageRandRStudyPlanType::GageRandRStudyPlanType(
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
 GageRandRStudyP_1163_Type * GageRandRStudyP_1163In) :
  StatisticalStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  RandRStudyType = RandRStudyTypeIn;
  NumberOfAppraisers = NumberOfAppraisersIn;
  NumberOfParts = NumberOfPartsIn;
  NumberOfTrials = NumberOfTrialsIn;
  GageRandRStudyP_1161 = GageRandRStudyP_1161In;
  GageRandRStudyP_1162 = GageRandRStudyP_1162In;
  GageRandRStudyP_1163 = GageRandRStudyP_1163In;
}

GageRandRStudyPlanType::GageRandRStudyPlanType(
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
 GageRandRStudyP_1163_Type * GageRandRStudyP_1163In) :
  StatisticalStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  RandRStudyType = RandRStudyTypeIn;
  NumberOfAppraisers = NumberOfAppraisersIn;
  NumberOfParts = NumberOfPartsIn;
  NumberOfTrials = NumberOfTrialsIn;
  GageRandRStudyP_1161 = GageRandRStudyP_1161In;
  GageRandRStudyP_1162 = GageRandRStudyP_1162In;
  GageRandRStudyP_1163 = GageRandRStudyP_1163In;
}

GageRandRStudyPlanType::~GageRandRStudyPlanType()
{
  #ifndef NODESTRUCT
  delete MeasurementDeviceIds;
  delete RandRStudyType;
  delete NumberOfAppraisers;
  delete NumberOfParts;
  delete NumberOfTrials;
  delete GageRandRStudyP_1161;
  delete GageRandRStudyP_1162;
  delete GageRandRStudyP_1163;
  #endif
}

void GageRandRStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<RandRStudyType");
  RandRStudyType->printSelf(outFile);
  fprintf(outFile, "</RandRStudyType>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfAppraisers");
  NumberOfAppraisers->printSelf(outFile);
  fprintf(outFile, "</NumberOfAppraisers>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfParts");
  NumberOfParts->printSelf(outFile);
  fprintf(outFile, "</NumberOfParts>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfTrials");
  NumberOfTrials->printSelf(outFile);
  fprintf(outFile, "</NumberOfTrials>\n");
  if (GageRandRStudyP_1161)
    {
  GageRandRStudyP_1161->printSelf(outFile);
    }
  if (GageRandRStudyP_1162)
    {
  GageRandRStudyP_1162->printSelf(outFile);
    }
  if (GageRandRStudyP_1163)
    {
  GageRandRStudyP_1163->printSelf(outFile);
    }
  doSpaces(-INDENT, outFile);
}

bool GageRandRStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in GageRandRStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in GageRandRStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in GageRandRStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in GageRandRStudyPlanType\n");
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

ArrayReferenceType * GageRandRStudyPlanType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void GageRandRStudyPlanType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

GageRandRStudyEnumType * GageRandRStudyPlanType::getRandRStudyType()
{return RandRStudyType;}

void GageRandRStudyPlanType::setRandRStudyType(GageRandRStudyEnumType * RandRStudyTypeIn)
{RandRStudyType = RandRStudyTypeIn;}

XmlPositiveInteger * GageRandRStudyPlanType::getNumberOfAppraisers()
{return NumberOfAppraisers;}

void GageRandRStudyPlanType::setNumberOfAppraisers(XmlPositiveInteger * NumberOfAppraisersIn)
{NumberOfAppraisers = NumberOfAppraisersIn;}

XmlPositiveInteger * GageRandRStudyPlanType::getNumberOfParts()
{return NumberOfParts;}

void GageRandRStudyPlanType::setNumberOfParts(XmlPositiveInteger * NumberOfPartsIn)
{NumberOfParts = NumberOfPartsIn;}

XmlPositiveInteger * GageRandRStudyPlanType::getNumberOfTrials()
{return NumberOfTrials;}

void GageRandRStudyPlanType::setNumberOfTrials(XmlPositiveInteger * NumberOfTrialsIn)
{NumberOfTrials = NumberOfTrialsIn;}

GageRandRStudyP_1161_Type * GageRandRStudyPlanType::getGageRandRStudyP_1161()
{return GageRandRStudyP_1161;}

void GageRandRStudyPlanType::setGageRandRStudyP_1161(GageRandRStudyP_1161_Type * GageRandRStudyP_1161In)
{GageRandRStudyP_1161 = GageRandRStudyP_1161In;}

GageRandRStudyP_1162_Type * GageRandRStudyPlanType::getGageRandRStudyP_1162()
{return GageRandRStudyP_1162;}

void GageRandRStudyPlanType::setGageRandRStudyP_1162(GageRandRStudyP_1162_Type * GageRandRStudyP_1162In)
{GageRandRStudyP_1162 = GageRandRStudyP_1162In;}

GageRandRStudyP_1163_Type * GageRandRStudyPlanType::getGageRandRStudyP_1163()
{return GageRandRStudyP_1163;}

void GageRandRStudyPlanType::setGageRandRStudyP_1163(GageRandRStudyP_1163_Type * GageRandRStudyP_1163In)
{GageRandRStudyP_1163 = GageRandRStudyP_1163In;}

/* ***************************************************************** */

/* class GageRandRStudyResultsType

*/

GageRandRStudyResultsType::GageRandRStudyResultsType() :
  StatisticalStudyResultsBaseType()
{
  MeasurementDeviceIds = 0;
  NumberOfAppraisers = 0;
  NumberOfParts = 0;
  NumberOfTrials = 0;
}

GageRandRStudyResultsType::GageRandRStudyResultsType(
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
 XmlPositiveInteger * NumberOfTrialsIn) :
  StatisticalStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  NumberOfAppraisers = NumberOfAppraisersIn;
  NumberOfParts = NumberOfPartsIn;
  NumberOfTrials = NumberOfTrialsIn;
}

GageRandRStudyResultsType::GageRandRStudyResultsType(
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
 XmlPositiveInteger * NumberOfTrialsIn) :
  StatisticalStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  NumberOfAppraisers = NumberOfAppraisersIn;
  NumberOfParts = NumberOfPartsIn;
  NumberOfTrials = NumberOfTrialsIn;
}

GageRandRStudyResultsType::~GageRandRStudyResultsType()
{
  #ifndef NODESTRUCT
  delete MeasurementDeviceIds;
  delete NumberOfAppraisers;
  delete NumberOfParts;
  delete NumberOfTrials;
  #endif
}

void GageRandRStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfAppraisers");
  NumberOfAppraisers->printSelf(outFile);
  fprintf(outFile, "</NumberOfAppraisers>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfParts");
  NumberOfParts->printSelf(outFile);
  fprintf(outFile, "</NumberOfParts>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfTrials");
  NumberOfTrials->printSelf(outFile);
  fprintf(outFile, "</NumberOfTrials>\n");
  doSpaces(-INDENT, outFile);
}

bool GageRandRStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in GageRandRStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in GageRandRStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in GageRandRStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in GageRandRStudyResultsType\n");
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

ArrayReferenceType * GageRandRStudyResultsType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void GageRandRStudyResultsType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

XmlPositiveInteger * GageRandRStudyResultsType::getNumberOfAppraisers()
{return NumberOfAppraisers;}

void GageRandRStudyResultsType::setNumberOfAppraisers(XmlPositiveInteger * NumberOfAppraisersIn)
{NumberOfAppraisers = NumberOfAppraisersIn;}

XmlPositiveInteger * GageRandRStudyResultsType::getNumberOfParts()
{return NumberOfParts;}

void GageRandRStudyResultsType::setNumberOfParts(XmlPositiveInteger * NumberOfPartsIn)
{NumberOfParts = NumberOfPartsIn;}

XmlPositiveInteger * GageRandRStudyResultsType::getNumberOfTrials()
{return NumberOfTrials;}

void GageRandRStudyResultsType::setNumberOfTrials(XmlPositiveInteger * NumberOfTrialsIn)
{NumberOfTrials = NumberOfTrialsIn;}

/* ***************************************************************** */

/* class LinearityStudyPlanType

*/

LinearityStudyPlanType::LinearityStudyPlanType() :
  StatisticalStudyPlanBaseType()
{
  MeasurementDeviceIds = 0;
  GoodnessOfFitThreshold = 0;
  LinearityStudyP_1164 = 0;
}

LinearityStudyPlanType::LinearityStudyPlanType(
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
 LinearityStudyP_1164_Type * LinearityStudyP_1164In) :
  StatisticalStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  GoodnessOfFitThreshold = GoodnessOfFitThresholdIn;
  LinearityStudyP_1164 = LinearityStudyP_1164In;
}

LinearityStudyPlanType::LinearityStudyPlanType(
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
 LinearityStudyP_1164_Type * LinearityStudyP_1164In) :
  StatisticalStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  GoodnessOfFitThreshold = GoodnessOfFitThresholdIn;
  LinearityStudyP_1164 = LinearityStudyP_1164In;
}

LinearityStudyPlanType::~LinearityStudyPlanType()
{
  #ifndef NODESTRUCT
  delete MeasurementDeviceIds;
  delete GoodnessOfFitThreshold;
  delete LinearityStudyP_1164;
  #endif
}

void LinearityStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  if (GoodnessOfFitThreshold)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<GoodnessOfFitThreshold");
      GoodnessOfFitThreshold->printSelf(outFile);
      fprintf(outFile, "</GoodnessOfFitThreshold>\n");
    }
  LinearityStudyP_1164->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool LinearityStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in LinearityStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LinearityStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LinearityStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in LinearityStudyPlanType\n");
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

ArrayReferenceType * LinearityStudyPlanType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void LinearityStudyPlanType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

XmlDecimal * LinearityStudyPlanType::getGoodnessOfFitThreshold()
{return GoodnessOfFitThreshold;}

void LinearityStudyPlanType::setGoodnessOfFitThreshold(XmlDecimal * GoodnessOfFitThresholdIn)
{GoodnessOfFitThreshold = GoodnessOfFitThresholdIn;}

LinearityStudyP_1164_Type * LinearityStudyPlanType::getLinearityStudyP_1164()
{return LinearityStudyP_1164;}

void LinearityStudyPlanType::setLinearityStudyP_1164(LinearityStudyP_1164_Type * LinearityStudyP_1164In)
{LinearityStudyP_1164 = LinearityStudyP_1164In;}

/* ***************************************************************** */

/* class LinearityStudyResultsType

*/

LinearityStudyResultsType::LinearityStudyResultsType() :
  StatisticalStudyResultsBaseType()
{
  SampleSize = 0;
  MeasurementDeviceIds = 0;
  GoodnessOfFit = 0;
  LinearityStudyR_1165 = 0;
  RelativeLinearity = 0;
}

LinearityStudyResultsType::LinearityStudyResultsType(
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
 MeasuredDecimalType * RelativeLinearityIn) :
  StatisticalStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  SampleSize = SampleSizeIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  GoodnessOfFit = GoodnessOfFitIn;
  LinearityStudyR_1165 = LinearityStudyR_1165In;
  RelativeLinearity = RelativeLinearityIn;
}

LinearityStudyResultsType::LinearityStudyResultsType(
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
 MeasuredDecimalType * RelativeLinearityIn) :
  StatisticalStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  SampleSize = SampleSizeIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  GoodnessOfFit = GoodnessOfFitIn;
  LinearityStudyR_1165 = LinearityStudyR_1165In;
  RelativeLinearity = RelativeLinearityIn;
}

LinearityStudyResultsType::~LinearityStudyResultsType()
{
  #ifndef NODESTRUCT
  delete SampleSize;
  delete MeasurementDeviceIds;
  delete GoodnessOfFit;
  delete LinearityStudyR_1165;
  delete RelativeLinearity;
  #endif
}

void LinearityStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SampleSize");
  SampleSize->printSelf(outFile);
  fprintf(outFile, "</SampleSize>\n");
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  if (GoodnessOfFit)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<GoodnessOfFit");
      GoodnessOfFit->printSelf(outFile);
      fprintf(outFile, "</GoodnessOfFit>\n");
    }
  if (LinearityStudyR_1165)
    {
  LinearityStudyR_1165->printSelf(outFile);
    }
  if (RelativeLinearity)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RelativeLinearity");
      RelativeLinearity->printSelf(outFile);
      fprintf(outFile, "</RelativeLinearity>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool LinearityStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in LinearityStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LinearityStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LinearityStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in LinearityStudyResultsType\n");
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

XmlPositiveInteger * LinearityStudyResultsType::getSampleSize()
{return SampleSize;}

void LinearityStudyResultsType::setSampleSize(XmlPositiveInteger * SampleSizeIn)
{SampleSize = SampleSizeIn;}

ArrayReferenceType * LinearityStudyResultsType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void LinearityStudyResultsType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

MeasuredDecimalType * LinearityStudyResultsType::getGoodnessOfFit()
{return GoodnessOfFit;}

void LinearityStudyResultsType::setGoodnessOfFit(MeasuredDecimalType * GoodnessOfFitIn)
{GoodnessOfFit = GoodnessOfFitIn;}

LinearityStudyR_1165_Type * LinearityStudyResultsType::getLinearityStudyR_1165()
{return LinearityStudyR_1165;}

void LinearityStudyResultsType::setLinearityStudyR_1165(LinearityStudyR_1165_Type * LinearityStudyR_1165In)
{LinearityStudyR_1165 = LinearityStudyR_1165In;}

MeasuredDecimalType * LinearityStudyResultsType::getRelativeLinearity()
{return RelativeLinearity;}

void LinearityStudyResultsType::setRelativeLinearity(MeasuredDecimalType * RelativeLinearityIn)
{RelativeLinearity = RelativeLinearityIn;}

/* ***************************************************************** */

/* class MultipleProductInstanceStudyPlanBaseType

*/

MultipleProductInstanceStudyPlanBaseType::MultipleProductInstanceStudyPlanBaseType() :
  StatisticalStudyPlanBaseType()
{
  NumberOfSamples = 0;
  SubgroupSize = 0;
}

MultipleProductInstanceStudyPlanBaseType::MultipleProductInstanceStudyPlanBaseType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  StatisticalStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
}

MultipleProductInstanceStudyPlanBaseType::MultipleProductInstanceStudyPlanBaseType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  StatisticalStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
}

MultipleProductInstanceStudyPlanBaseType::~MultipleProductInstanceStudyPlanBaseType()
{
  #ifndef NODESTRUCT
  delete NumberOfSamples;
  delete SubgroupSize;
  #endif
}

void MultipleProductInstanceStudyPlanBaseType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool MultipleProductInstanceStudyPlanBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in MultipleProductInstanceStudyPlanBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MultipleProductInstanceStudyPlanBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MultipleProductInstanceStudyPlanBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in MultipleProductInstanceStudyPlanBaseType\n");
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

XmlPositiveInteger * MultipleProductInstanceStudyPlanBaseType::getNumberOfSamples()
{return NumberOfSamples;}

void MultipleProductInstanceStudyPlanBaseType::setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn)
{NumberOfSamples = NumberOfSamplesIn;}

XmlPositiveInteger * MultipleProductInstanceStudyPlanBaseType::getSubgroupSize()
{return SubgroupSize;}

void MultipleProductInstanceStudyPlanBaseType::setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn)
{SubgroupSize = SubgroupSizeIn;}

/* ***************************************************************** */

/* class MultipleProductInstanceStudyResultsBaseType

*/

MultipleProductInstanceStudyResultsBaseType::MultipleProductInstanceStudyResultsBaseType() :
  StatisticalStudyResultsBaseType()
{
  NumberOfSamples = 0;
  SubgroupSize = 0;
}

MultipleProductInstanceStudyResultsBaseType::MultipleProductInstanceStudyResultsBaseType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  StatisticalStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
}

MultipleProductInstanceStudyResultsBaseType::MultipleProductInstanceStudyResultsBaseType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  StatisticalStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
}

MultipleProductInstanceStudyResultsBaseType::~MultipleProductInstanceStudyResultsBaseType()
{
  #ifndef NODESTRUCT
  delete NumberOfSamples;
  delete SubgroupSize;
  #endif
}

void MultipleProductInstanceStudyResultsBaseType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool MultipleProductInstanceStudyResultsBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in MultipleProductInstanceStudyResultsBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MultipleProductInstanceStudyResultsBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MultipleProductInstanceStudyResultsBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in MultipleProductInstanceStudyResultsBaseType\n");
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

XmlPositiveInteger * MultipleProductInstanceStudyResultsBaseType::getNumberOfSamples()
{return NumberOfSamples;}

void MultipleProductInstanceStudyResultsBaseType::setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn)
{NumberOfSamples = NumberOfSamplesIn;}

XmlPositiveInteger * MultipleProductInstanceStudyResultsBaseType::getSubgroupSize()
{return SubgroupSize;}

void MultipleProductInstanceStudyResultsBaseType::setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn)
{SubgroupSize = SubgroupSizeIn;}

/* ***************************************************************** */

/* class ProcessDifferenceStudyPlanType

*/

ProcessDifferenceStudyPlanType::ProcessDifferenceStudyPlanType() :
  StatisticalStudyPlanBaseType()
{
  NumberOfSamples = 0;
  SubgroupSize = 0;
  ManufacturingProcessId = 0;
  ProcessDifferen_1166 = 0;
}

ProcessDifferenceStudyPlanType::ProcessDifferenceStudyPlanType(
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
 ProcessDifferen_1166_Type * ProcessDifferen_1166In) :
  StatisticalStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
  ManufacturingProcessId = ManufacturingProcessIdIn;
  ProcessDifferen_1166 = ProcessDifferen_1166In;
}

ProcessDifferenceStudyPlanType::ProcessDifferenceStudyPlanType(
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
 ProcessDifferen_1166_Type * ProcessDifferen_1166In) :
  StatisticalStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
  ManufacturingProcessId = ManufacturingProcessIdIn;
  ProcessDifferen_1166 = ProcessDifferen_1166In;
}

ProcessDifferenceStudyPlanType::~ProcessDifferenceStudyPlanType()
{
  #ifndef NODESTRUCT
  delete NumberOfSamples;
  delete SubgroupSize;
  delete ManufacturingProcessId;
  delete ProcessDifferen_1166;
  #endif
}

void ProcessDifferenceStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SubgroupSize");
  SubgroupSize->printSelf(outFile);
  fprintf(outFile, "</SubgroupSize>\n");
  if (ManufacturingProcessId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ManufacturingProcessId");
      ManufacturingProcessId->printSelf(outFile);
      fprintf(outFile, "</ManufacturingProcessId>\n");
    }
  ProcessDifferen_1166->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

bool ProcessDifferenceStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ProcessDifferenceStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ProcessDifferenceStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ProcessDifferenceStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in ProcessDifferenceStudyPlanType\n");
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

XmlPositiveInteger * ProcessDifferenceStudyPlanType::getNumberOfSamples()
{return NumberOfSamples;}

void ProcessDifferenceStudyPlanType::setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn)
{NumberOfSamples = NumberOfSamplesIn;}

XmlPositiveInteger * ProcessDifferenceStudyPlanType::getSubgroupSize()
{return SubgroupSize;}

void ProcessDifferenceStudyPlanType::setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn)
{SubgroupSize = SubgroupSizeIn;}

QIFReferenceType * ProcessDifferenceStudyPlanType::getManufacturingProcessId()
{return ManufacturingProcessId;}

void ProcessDifferenceStudyPlanType::setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn)
{ManufacturingProcessId = ManufacturingProcessIdIn;}

ProcessDifferen_1166_Type * ProcessDifferenceStudyPlanType::getProcessDifferen_1166()
{return ProcessDifferen_1166;}

void ProcessDifferenceStudyPlanType::setProcessDifferen_1166(ProcessDifferen_1166_Type * ProcessDifferen_1166In)
{ProcessDifferen_1166 = ProcessDifferen_1166In;}

/* ***************************************************************** */

/* class ProcessDifferenceStudyResultsType

*/

ProcessDifferenceStudyResultsType::ProcessDifferenceStudyResultsType() :
  StatisticalStudyResultsBaseType()
{
  NumberOfSamples = 0;
  SubgroupSize = 0;
  ManufacturingProcessId = 0;
  AbsoluteDifferences = 0;
  RelativeDifference = 0;
}

ProcessDifferenceStudyResultsType::ProcessDifferenceStudyResultsType(
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
 MeasuredDecimalType * RelativeDifferenceIn) :
  StatisticalStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
  ManufacturingProcessId = ManufacturingProcessIdIn;
  AbsoluteDifferences = AbsoluteDifferencesIn;
  RelativeDifference = RelativeDifferenceIn;
}

ProcessDifferenceStudyResultsType::ProcessDifferenceStudyResultsType(
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
 MeasuredDecimalType * RelativeDifferenceIn) :
  StatisticalStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  NumberOfSamples = NumberOfSamplesIn;
  SubgroupSize = SubgroupSizeIn;
  ManufacturingProcessId = ManufacturingProcessIdIn;
  AbsoluteDifferences = AbsoluteDifferencesIn;
  RelativeDifference = RelativeDifferenceIn;
}

ProcessDifferenceStudyResultsType::~ProcessDifferenceStudyResultsType()
{
  #ifndef NODESTRUCT
  delete NumberOfSamples;
  delete SubgroupSize;
  delete ManufacturingProcessId;
  delete AbsoluteDifferences;
  delete RelativeDifference;
  #endif
}

void ProcessDifferenceStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SubgroupSize");
  SubgroupSize->printSelf(outFile);
  fprintf(outFile, "</SubgroupSize>\n");
  if (ManufacturingProcessId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ManufacturingProcessId");
      ManufacturingProcessId->printSelf(outFile);
      fprintf(outFile, "</ManufacturingProcessId>\n");
    }
  if (AbsoluteDifferences)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AbsoluteDifferences");
      AbsoluteDifferences->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AbsoluteDifferences>\n");
    }
  if (RelativeDifference)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RelativeDifference");
      RelativeDifference->printSelf(outFile);
      fprintf(outFile, "</RelativeDifference>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ProcessDifferenceStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ProcessDifferenceStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ProcessDifferenceStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ProcessDifferenceStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in ProcessDifferenceStudyResultsType\n");
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

XmlPositiveInteger * ProcessDifferenceStudyResultsType::getNumberOfSamples()
{return NumberOfSamples;}

void ProcessDifferenceStudyResultsType::setNumberOfSamples(XmlPositiveInteger * NumberOfSamplesIn)
{NumberOfSamples = NumberOfSamplesIn;}

XmlPositiveInteger * ProcessDifferenceStudyResultsType::getSubgroupSize()
{return SubgroupSize;}

void ProcessDifferenceStudyResultsType::setSubgroupSize(XmlPositiveInteger * SubgroupSizeIn)
{SubgroupSize = SubgroupSizeIn;}

QIFReferenceType * ProcessDifferenceStudyResultsType::getManufacturingProcessId()
{return ManufacturingProcessId;}

void ProcessDifferenceStudyResultsType::setManufacturingProcessId(QIFReferenceType * ManufacturingProcessIdIn)
{ManufacturingProcessId = ManufacturingProcessIdIn;}

AbsoluteMeasurementsByUnitType * ProcessDifferenceStudyResultsType::getAbsoluteDifferences()
{return AbsoluteDifferences;}

void ProcessDifferenceStudyResultsType::setAbsoluteDifferences(AbsoluteMeasurementsByUnitType * AbsoluteDifferencesIn)
{AbsoluteDifferences = AbsoluteDifferencesIn;}

MeasuredDecimalType * ProcessDifferenceStudyResultsType::getRelativeDifference()
{return RelativeDifference;}

void ProcessDifferenceStudyResultsType::setRelativeDifference(MeasuredDecimalType * RelativeDifferenceIn)
{RelativeDifference = RelativeDifferenceIn;}

/* ***************************************************************** */

/* class ProductionStudyPlanType

*/

ProductionStudyPlanType::ProductionStudyPlanType() :
  MultipleProductInstanceStudyPlanBaseType()
{
  SamplingMethod = 0;
  ControlMethods = 0;
}

ProductionStudyPlanType::ProductionStudyPlanType(
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
 ControlMethodsType * ControlMethodsIn) :
  MultipleProductInstanceStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  SamplingMethod = SamplingMethodIn;
  ControlMethods = ControlMethodsIn;
}

ProductionStudyPlanType::ProductionStudyPlanType(
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
 ControlMethodsType * ControlMethodsIn) :
  MultipleProductInstanceStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  SamplingMethod = SamplingMethodIn;
  ControlMethods = ControlMethodsIn;
}

ProductionStudyPlanType::~ProductionStudyPlanType()
{
  #ifndef NODESTRUCT
  delete SamplingMethod;
  delete ControlMethods;
  #endif
}

void ProductionStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SamplingMethod");
  SamplingMethod->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</SamplingMethod>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<ControlMethods");
  ControlMethods->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ControlMethods>\n");
  doSpaces(-INDENT, outFile);
}

bool ProductionStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ProductionStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ProductionStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ProductionStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in ProductionStudyPlanType\n");
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

SamplingMethodType * ProductionStudyPlanType::getSamplingMethod()
{return SamplingMethod;}

void ProductionStudyPlanType::setSamplingMethod(SamplingMethodType * SamplingMethodIn)
{SamplingMethod = SamplingMethodIn;}

ControlMethodsType * ProductionStudyPlanType::getControlMethods()
{return ControlMethods;}

void ProductionStudyPlanType::setControlMethods(ControlMethodsType * ControlMethodsIn)
{ControlMethods = ControlMethodsIn;}

/* ***************************************************************** */

/* class ProductionStudyResultsType

*/

ProductionStudyResultsType::ProductionStudyResultsType() :
  MultipleProductInstanceStudyResultsBaseType()
{
  ControlIssueDetailsList = 0;
}

ProductionStudyResultsType::ProductionStudyResultsType(
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
 ControlIssueDetailsListTypeLisd * ControlIssueDetailsListIn) :
  MultipleProductInstanceStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  ControlIssueDetailsList = ControlIssueDetailsListIn;
}

ProductionStudyResultsType::ProductionStudyResultsType(
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
 ControlIssueDetailsListTypeLisd * ControlIssueDetailsListIn) :
  MultipleProductInstanceStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
  ControlIssueDetailsList = ControlIssueDetailsListIn;
}

ProductionStudyResultsType::~ProductionStudyResultsType()
{
  #ifndef NODESTRUCT
  delete ControlIssueDetailsList;
  #endif
}

void ProductionStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  {
    if (!ControlIssueDetailsList)
      {
        fprintf(stderr, "ControlIssueDetailsList list is missing\n");
        exit(1);
      }
    if (ControlIssueDetailsList->size() == 0)
      {
        fprintf(stderr, "ControlIssueDetailsList list is empty\n");
        exit(1);
      }
    if (ControlIssueDetailsList->size() < 1)
      {
        fprintf(stderr,
                "size of ControlIssueDetailsList list (%d) less than minimum required (1)\n",
                (int)ControlIssueDetailsList->size());
        exit(1);
      }
    std::list<ControlIssueDetailsListType *>::iterator iter;
    for (iter = ControlIssueDetailsList->begin();
         iter != ControlIssueDetailsList->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ControlIssueDetailsList");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ControlIssueDetailsList>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ProductionStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in ProductionStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ProductionStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ProductionStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in ProductionStudyResultsType\n");
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

ControlIssueDetailsListTypeLisd * ProductionStudyResultsType::getControlIssueDetailsList()
{return ControlIssueDetailsList;}

void ProductionStudyResultsType::setControlIssueDetailsList(ControlIssueDetailsListTypeLisd * ControlIssueDetailsListIn)
{ControlIssueDetailsList = ControlIssueDetailsListIn;}

/* ***************************************************************** */

/* class SimpleStudyPlanType

*/

SimpleStudyPlanType::SimpleStudyPlanType() :
  MultipleProductInstanceStudyPlanBaseType()
{
}

SimpleStudyPlanType::SimpleStudyPlanType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  MultipleProductInstanceStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
}

SimpleStudyPlanType::SimpleStudyPlanType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  MultipleProductInstanceStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
}

SimpleStudyPlanType::~SimpleStudyPlanType()
{
  #ifndef NODESTRUCT
  #endif
}

void SimpleStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool SimpleStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in SimpleStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in SimpleStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SimpleStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in SimpleStudyPlanType\n");
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

/* ***************************************************************** */

/* class SimpleStudyResultsType

*/

SimpleStudyResultsType::SimpleStudyResultsType() :
  MultipleProductInstanceStudyResultsBaseType()
{
}

SimpleStudyResultsType::SimpleStudyResultsType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  MultipleProductInstanceStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
}

SimpleStudyResultsType::SimpleStudyResultsType(
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
 XmlPositiveInteger * SubgroupSizeIn) :
  MultipleProductInstanceStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn,
    NumberOfSamplesIn,
    SubgroupSizeIn)
{
}

SimpleStudyResultsType::~SimpleStudyResultsType()
{
  #ifndef NODESTRUCT
  #endif
}

void SimpleStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSamples");
  NumberOfSamples->printSelf(outFile);
  fprintf(outFile, "</NumberOfSamples>\n");
  if (SubgroupSize)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SubgroupSize");
      SubgroupSize->printSelf(outFile);
      fprintf(outFile, "</SubgroupSize>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool SimpleStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in SimpleStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in SimpleStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in SimpleStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in SimpleStudyResultsType\n");
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

/* ***************************************************************** */

/* class StabilityStudyPlanType

*/

StabilityStudyPlanType::StabilityStudyPlanType() :
  StatisticalStudyPlanBaseType()
{
  MeasurementDeviceIds = 0;
  SampleSize = 0;
  SampleFrequency = 0;
  SamplingInterval = 0;
}

StabilityStudyPlanType::StabilityStudyPlanType(
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
 SamplingIntervalType * SamplingIntervalIn) :
  StatisticalStudyPlanBaseType(
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  SampleSize = SampleSizeIn;
  SampleFrequency = SampleFrequencyIn;
  SamplingInterval = SamplingIntervalIn;
}

StabilityStudyPlanType::StabilityStudyPlanType(
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
 SamplingIntervalType * SamplingIntervalIn) :
  StatisticalStudyPlanBaseType(
    idIn,
    VersionIn,
    AttributesIn,
    StatisticalStud_1167In,
    StatisticalStud_1168In,
    StatsValuesSummarysIn,
    PreInspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    PlanIdIn,
    StatisticalStud_1169In,
    CorrectiveActionPlanIdIn)
{
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
  SampleSize = SampleSizeIn;
  SampleFrequency = SampleFrequencyIn;
  SamplingInterval = SamplingIntervalIn;
}

StabilityStudyPlanType::~StabilityStudyPlanType()
{
  #ifndef NODESTRUCT
  delete MeasurementDeviceIds;
  delete SampleSize;
  delete SampleFrequency;
  delete SamplingInterval;
  #endif
}

void StabilityStudyPlanType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SampleSize");
  SampleSize->printSelf(outFile);
  fprintf(outFile, "</SampleSize>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SampleFrequency");
  SampleFrequency->printSelf(outFile);
  fprintf(outFile, "</SampleFrequency>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<SamplingInterval");
  SamplingInterval->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</SamplingInterval>\n");
  doSpaces(-INDENT, outFile);
}

bool StabilityStudyPlanType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in StabilityStudyPlanType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in StabilityStudyPlanType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StabilityStudyPlanType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in StabilityStudyPlanType\n");
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

ArrayReferenceType * StabilityStudyPlanType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void StabilityStudyPlanType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

XmlPositiveInteger * StabilityStudyPlanType::getSampleSize()
{return SampleSize;}

void StabilityStudyPlanType::setSampleSize(XmlPositiveInteger * SampleSizeIn)
{SampleSize = SampleSizeIn;}

XmlPositiveInteger * StabilityStudyPlanType::getSampleFrequency()
{return SampleFrequency;}

void StabilityStudyPlanType::setSampleFrequency(XmlPositiveInteger * SampleFrequencyIn)
{SampleFrequency = SampleFrequencyIn;}

SamplingIntervalType * StabilityStudyPlanType::getSamplingInterval()
{return SamplingInterval;}

void StabilityStudyPlanType::setSamplingInterval(SamplingIntervalType * SamplingIntervalIn)
{SamplingInterval = SamplingIntervalIn;}

/* ***************************************************************** */

/* class StabilityStudyResultsType

*/

StabilityStudyResultsType::StabilityStudyResultsType() :
  StatisticalStudyResultsBaseType()
{
  SampleSize = 0;
  MeasurementDeviceIds = 0;
}

StabilityStudyResultsType::StabilityStudyResultsType(
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
 ArrayReferenceType * MeasurementDeviceIdsIn) :
  StatisticalStudyResultsBaseType(
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  SampleSize = SampleSizeIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
}

StabilityStudyResultsType::StabilityStudyResultsType(
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
 ArrayReferenceType * MeasurementDeviceIdsIn) :
  StatisticalStudyResultsBaseType(
    idIn,
    ThisStatisticalStudyResultsInstanceQPIdIn,
    AttributesIn,
    StatusIn,
    StatisticalStud_1170In,
    StudyIssuesIn,
    InspectionTraceabilityIn,
    NameIn,
    DescriptionIn,
    StudyIdIn,
    StatisticalStud_1171In,
    AverageFeaturesIn,
    CharacteristicsStatsIn,
    LinearStatsSummariesIn,
    AngularStatsSummariesIn,
    AreaStatsSummariesIn,
    ForceStatsSummariesIn,
    MassStatsSummariesIn,
    PressureStatsSummariesIn,
    SpeedStatsSummariesIn,
    TemperatureStatsSummariesIn,
    TimeStatsSummariesIn,
    UserDefinedUnitStatsSummariesIn,
    StatsSummariesIn)
{
  SampleSize = SampleSizeIn;
  MeasurementDeviceIds = MeasurementDeviceIdsIn;
}

StabilityStudyResultsType::~StabilityStudyResultsType()
{
  #ifndef NODESTRUCT
  delete SampleSize;
  delete MeasurementDeviceIds;
  #endif
}

void StabilityStudyResultsType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<SampleSize");
  SampleSize->printSelf(outFile);
  fprintf(outFile, "</SampleSize>\n");
  if (MeasurementDeviceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasurementDeviceIds");
      MeasurementDeviceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasurementDeviceIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool StabilityStudyResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in StabilityStudyResultsType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in StabilityStudyResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StabilityStudyResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in StabilityStudyResultsType\n");
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

XmlPositiveInteger * StabilityStudyResultsType::getSampleSize()
{return SampleSize;}

void StabilityStudyResultsType::setSampleSize(XmlPositiveInteger * SampleSizeIn)
{SampleSize = SampleSizeIn;}

ArrayReferenceType * StabilityStudyResultsType::getMeasurementDeviceIds()
{return MeasurementDeviceIds;}

void StabilityStudyResultsType::setMeasurementDeviceIds(ArrayReferenceType * MeasurementDeviceIdsIn)
{MeasurementDeviceIds = MeasurementDeviceIdsIn;}

/* ***************************************************************** */

/* class StatisticalStudiesResultsType

*/

StatisticalStudiesResultsType::StatisticalStudiesResultsType()
{
  n = 0;
  StatisticalStudyResults = 0;
}

StatisticalStudiesResultsType::StatisticalStudiesResultsType(
 StatisticalStudyResultsBaseTypeLisd * StatisticalStudyResultsIn)
{
  n = 0;
  StatisticalStudyResults = StatisticalStudyResultsIn;
}

StatisticalStudiesResultsType::StatisticalStudiesResultsType(
 NaturalType * nIn,
 StatisticalStudyResultsBaseTypeLisd * StatisticalStudyResultsIn)
{
  n = nIn;
  StatisticalStudyResults = StatisticalStudyResultsIn;
}

StatisticalStudiesResultsType::~StatisticalStudiesResultsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete StatisticalStudyResults;
  #endif
}

void StatisticalStudiesResultsType::printSelf(FILE * outFile)
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
    if (!StatisticalStudyResults)
      {
        fprintf(stderr, "StatisticalStudyResults list is missing\n");
        exit(1);
      }
    if (StatisticalStudyResults->size() == 0)
      {
        fprintf(stderr, "StatisticalStudyResults list is empty\n");
        exit(1);
      }
    if (StatisticalStudyResults->size() < 1)
      {
        fprintf(stderr,
                "size of StatisticalStudyResults list (%d) less than minimum required (1)\n",
                (int)StatisticalStudyResults->size());
        exit(1);
      }
    std::list<StatisticalStudyResultsBaseType *>::iterator iter;
    for (iter = StatisticalStudyResults->begin();
         iter != StatisticalStudyResults->end(); iter++)
      {
        StatisticalStudyResultsBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->getprintElement() == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->getprintElement(), "FirstArticleStudyResults") == 0)
          {
            FirstArticleStudyResultsType * typ;
            if ((typ = dynamic_cast<FirstArticleStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<FirstArticleStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FirstArticleStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad FirstArticleStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "LinearityStudyResults") == 0)
          {
            LinearityStudyResultsType * typ;
            if ((typ = dynamic_cast<LinearityStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<LinearityStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LinearityStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad LinearityStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "SimpleStudyResults") == 0)
          {
            SimpleStudyResultsType * typ;
            if ((typ = dynamic_cast<SimpleStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<SimpleStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</SimpleStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad SimpleStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "BiasStudyResults") == 0)
          {
            BiasStudyResultsType * typ;
            if ((typ = dynamic_cast<BiasStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<BiasStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</BiasStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad BiasStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "StabilityStudyResults") == 0)
          {
            StabilityStudyResultsType * typ;
            if ((typ = dynamic_cast<StabilityStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<StabilityStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</StabilityStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad StabilityStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "CapabilityStudyResults") == 0)
          {
            CapabilityStudyResultsType * typ;
            if ((typ = dynamic_cast<CapabilityStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<CapabilityStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</CapabilityStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad CapabilityStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "ProcessDifferenceStudyResults") == 0)
          {
            ProcessDifferenceStudyResultsType * typ;
            if ((typ = dynamic_cast<ProcessDifferenceStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<ProcessDifferenceStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ProcessDifferenceStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad ProcessDifferenceStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "GageRandRStudyResults") == 0)
          {
            GageRandRStudyResultsType * typ;
            if ((typ = dynamic_cast<GageRandRStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<GageRandRStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GageRandRStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad GageRandRStudyResults element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "ProductionStudyResults") == 0)
          {
            ProductionStudyResultsType * typ;
            if ((typ = dynamic_cast<ProductionStudyResultsType *>(basie)))
              {
                fprintf(outFile, "<ProductionStudyResults");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ProductionStudyResults>\n");
              }
            else
              {
                fprintf(stderr, "bad ProductionStudyResults element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad StatisticalStudyResults type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool StatisticalStudiesResultsType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in StatisticalStudiesResultsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in StatisticalStudiesResultsType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StatisticalStudiesResultsType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in StatisticalStudiesResultsType\n");
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

NaturalType * StatisticalStudiesResultsType::getn()
{return n;}

void StatisticalStudiesResultsType::setn(NaturalType * nIn)
{n = nIn;}

StatisticalStudyResultsBaseTypeLisd * StatisticalStudiesResultsType::getStatisticalStudyResults()
{return StatisticalStudyResults;}

void StatisticalStudiesResultsType::setStatisticalStudyResults(StatisticalStudyResultsBaseTypeLisd * StatisticalStudyResultsIn)
{StatisticalStudyResults = StatisticalStudyResultsIn;}

/* ***************************************************************** */

/* class StatisticalStudyPlanBaseType

*/

StatisticalStudyPlanBaseType::StatisticalStudyPlanBaseType()
{
  id = 0;
  Version = 0;
  Attributes = 0;
  StatisticalStud_1167 = 0;
  StatisticalStud_1168 = 0;
  StatsValuesSummarys = 0;
  PreInspectionTraceability = 0;
  Name = 0;
  Description = 0;
  PlanId = 0;
  StatisticalStud_1169 = 0;
  CorrectiveActionPlanId = 0;
}

StatisticalStudyPlanBaseType::StatisticalStudyPlanBaseType(
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
 QIFReferenceType * CorrectiveActionPlanIdIn)
{
  id = 0;
  Version = VersionIn;
  Attributes = AttributesIn;
  StatisticalStud_1167 = StatisticalStud_1167In;
  StatisticalStud_1168 = StatisticalStud_1168In;
  StatsValuesSummarys = StatsValuesSummarysIn;
  PreInspectionTraceability = PreInspectionTraceabilityIn;
  Name = NameIn;
  Description = DescriptionIn;
  PlanId = PlanIdIn;
  StatisticalStud_1169 = StatisticalStud_1169In;
  CorrectiveActionPlanId = CorrectiveActionPlanIdIn;
}

StatisticalStudyPlanBaseType::StatisticalStudyPlanBaseType(
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
 QIFReferenceType * CorrectiveActionPlanIdIn)
{
  id = idIn;
  Version = VersionIn;
  Attributes = AttributesIn;
  StatisticalStud_1167 = StatisticalStud_1167In;
  StatisticalStud_1168 = StatisticalStud_1168In;
  StatsValuesSummarys = StatsValuesSummarysIn;
  PreInspectionTraceability = PreInspectionTraceabilityIn;
  Name = NameIn;
  Description = DescriptionIn;
  PlanId = PlanIdIn;
  StatisticalStud_1169 = StatisticalStud_1169In;
  CorrectiveActionPlanId = CorrectiveActionPlanIdIn;
}

StatisticalStudyPlanBaseType::~StatisticalStudyPlanBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Version;
  delete Attributes;
  delete StatisticalStud_1167;
  delete StatisticalStud_1168;
  delete StatsValuesSummarys;
  delete PreInspectionTraceability;
  delete Name;
  delete Description;
  delete PlanId;
  delete StatisticalStud_1169;
  delete CorrectiveActionPlanId;
  #endif
}

void StatisticalStudyPlanBaseType::printSelf(FILE * outFile)
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
  if (Version)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Version");
      Version->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Version>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (StatisticalStud_1167)
    {
      StatisticalStud_1167->printSelf(outFile);
    }
  if (StatisticalStud_1168)
    {
      StatisticalStud_1168->printSelf(outFile);
    }
  {
    if (!StatsValuesSummarys)
      {
        StatsValuesSummarys = new SummaryStatsValuesListTypeLisd;
      }
    std::list<SummaryStatsValuesListType *>::iterator iter;
    for (iter = StatsValuesSummarys->begin();
         iter != StatsValuesSummarys->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesSummarys");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesSummarys>\n");
      }
  }
  if (PreInspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreInspectionTraceability");
      PreInspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreInspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (PlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PlanId");
      PlanId->printSelf(outFile);
      fprintf(outFile, "</PlanId>\n");
    }
  if (StatisticalStud_1169)
    {
  StatisticalStud_1169->printSelf(outFile);
    }
  if (CorrectiveActionPlanId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlanId");
      CorrectiveActionPlanId->printSelf(outFile);
      fprintf(outFile, "</CorrectiveActionPlanId>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool StatisticalStudyPlanBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in StatisticalStudyPlanBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in StatisticalStudyPlanBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StatisticalStudyPlanBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in StatisticalStudyPlanBaseType\n");
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

QIFIdType * StatisticalStudyPlanBaseType::getid()
{return id;}

void StatisticalStudyPlanBaseType::setid(QIFIdType * idIn)
{id = idIn;}

VersionType * StatisticalStudyPlanBaseType::getVersion()
{return Version;}

void StatisticalStudyPlanBaseType::setVersion(VersionType * VersionIn)
{Version = VersionIn;}

AttributesType * StatisticalStudyPlanBaseType::getAttributes()
{return Attributes;}

void StatisticalStudyPlanBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

StatisticalStud_1167_Type * StatisticalStudyPlanBaseType::getStatisticalStud_1167()
{return StatisticalStud_1167;}

void StatisticalStudyPlanBaseType::setStatisticalStud_1167(StatisticalStud_1167_Type * StatisticalStud_1167In)
{StatisticalStud_1167 = StatisticalStud_1167In;}

StatisticalStud_1168_Type * StatisticalStudyPlanBaseType::getStatisticalStud_1168()
{return StatisticalStud_1168;}

void StatisticalStudyPlanBaseType::setStatisticalStud_1168(StatisticalStud_1168_Type * StatisticalStud_1168In)
{StatisticalStud_1168 = StatisticalStud_1168In;}

SummaryStatsValuesListTypeLisd * StatisticalStudyPlanBaseType::getStatsValuesSummarys()
{return StatsValuesSummarys;}

void StatisticalStudyPlanBaseType::setStatsValuesSummarys(SummaryStatsValuesListTypeLisd * StatsValuesSummarysIn)
{StatsValuesSummarys = StatsValuesSummarysIn;}

PreInspectionTraceabilityType * StatisticalStudyPlanBaseType::getPreInspectionTraceability()
{return PreInspectionTraceability;}

void StatisticalStudyPlanBaseType::setPreInspectionTraceability(PreInspectionTraceabilityType * PreInspectionTraceabilityIn)
{PreInspectionTraceability = PreInspectionTraceabilityIn;}

XmlToken * StatisticalStudyPlanBaseType::getName()
{return Name;}

void StatisticalStudyPlanBaseType::setName(XmlToken * NameIn)
{Name = NameIn;}

XmlString * StatisticalStudyPlanBaseType::getDescription()
{return Description;}

void StatisticalStudyPlanBaseType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

QIFReferenceType * StatisticalStudyPlanBaseType::getPlanId()
{return PlanId;}

void StatisticalStudyPlanBaseType::setPlanId(QIFReferenceType * PlanIdIn)
{PlanId = PlanIdIn;}

StatisticalStud_1169_Type * StatisticalStudyPlanBaseType::getStatisticalStud_1169()
{return StatisticalStud_1169;}

void StatisticalStudyPlanBaseType::setStatisticalStud_1169(StatisticalStud_1169_Type * StatisticalStud_1169In)
{StatisticalStud_1169 = StatisticalStud_1169In;}

QIFReferenceType * StatisticalStudyPlanBaseType::getCorrectiveActionPlanId()
{return CorrectiveActionPlanId;}

void StatisticalStudyPlanBaseType::setCorrectiveActionPlanId(QIFReferenceType * CorrectiveActionPlanIdIn)
{CorrectiveActionPlanId = CorrectiveActionPlanIdIn;}

/* ***************************************************************** */

/* class StatisticalStudyPlanBaseTypeLisd

*/

StatisticalStudyPlanBaseTypeLisd::StatisticalStudyPlanBaseTypeLisd() {}

StatisticalStudyPlanBaseTypeLisd::StatisticalStudyPlanBaseTypeLisd(StatisticalStudyPlanBaseType * aStatisticalStudyPlanBaseType)
{
  push_back(aStatisticalStudyPlanBaseType);
}

StatisticalStudyPlanBaseTypeLisd::~StatisticalStudyPlanBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<StatisticalStudyPlanBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void StatisticalStudyPlanBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<StatisticalStudyPlanBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class StatisticalStudyPlansType

*/

StatisticalStudyPlansType::StatisticalStudyPlansType()
{
  n = 0;
  StatisticalStudyPlan = 0;
}

StatisticalStudyPlansType::StatisticalStudyPlansType(
 StatisticalStudyPlanBaseTypeLisd * StatisticalStudyPlanIn)
{
  n = 0;
  StatisticalStudyPlan = StatisticalStudyPlanIn;
}

StatisticalStudyPlansType::StatisticalStudyPlansType(
 NaturalType * nIn,
 StatisticalStudyPlanBaseTypeLisd * StatisticalStudyPlanIn)
{
  n = nIn;
  StatisticalStudyPlan = StatisticalStudyPlanIn;
}

StatisticalStudyPlansType::~StatisticalStudyPlansType()
{
  #ifndef NODESTRUCT
  delete n;
  delete StatisticalStudyPlan;
  #endif
}

void StatisticalStudyPlansType::printSelf(FILE * outFile)
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
    if (!StatisticalStudyPlan)
      {
        fprintf(stderr, "StatisticalStudyPlan list is missing\n");
        exit(1);
      }
    if (StatisticalStudyPlan->size() == 0)
      {
        fprintf(stderr, "StatisticalStudyPlan list is empty\n");
        exit(1);
      }
    if (StatisticalStudyPlan->size() < 1)
      {
        fprintf(stderr,
                "size of StatisticalStudyPlan list (%d) less than minimum required (1)\n",
                (int)StatisticalStudyPlan->size());
        exit(1);
      }
    std::list<StatisticalStudyPlanBaseType *>::iterator iter;
    for (iter = StatisticalStudyPlan->begin();
         iter != StatisticalStudyPlan->end(); iter++)
      {
        StatisticalStudyPlanBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->getprintElement() == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->getprintElement(), "FirstArticleStudyPlan") == 0)
          {
            FirstArticleStudyPlanType * typ;
            if ((typ = dynamic_cast<FirstArticleStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<FirstArticleStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</FirstArticleStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad FirstArticleStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "LinearityStudyPlan") == 0)
          {
            LinearityStudyPlanType * typ;
            if ((typ = dynamic_cast<LinearityStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<LinearityStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LinearityStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad LinearityStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "SimpleStudyPlan") == 0)
          {
            SimpleStudyPlanType * typ;
            if ((typ = dynamic_cast<SimpleStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<SimpleStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</SimpleStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad SimpleStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "BiasStudyPlan") == 0)
          {
            BiasStudyPlanType * typ;
            if ((typ = dynamic_cast<BiasStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<BiasStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</BiasStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad BiasStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "StabilityStudyPlan") == 0)
          {
            StabilityStudyPlanType * typ;
            if ((typ = dynamic_cast<StabilityStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<StabilityStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</StabilityStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad StabilityStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "ProcessDifferenceStudyPlan") == 0)
          {
            ProcessDifferenceStudyPlanType * typ;
            if ((typ = dynamic_cast<ProcessDifferenceStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<ProcessDifferenceStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ProcessDifferenceStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad ProcessDifferenceStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "CapabilityStudyPlan") == 0)
          {
            CapabilityStudyPlanType * typ;
            if ((typ = dynamic_cast<CapabilityStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<CapabilityStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</CapabilityStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad CapabilityStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "GageRandRStudyPlan") == 0)
          {
            GageRandRStudyPlanType * typ;
            if ((typ = dynamic_cast<GageRandRStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<GageRandRStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GageRandRStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad GageRandRStudyPlan element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->getprintElement(), "ProductionStudyPlan") == 0)
          {
            ProductionStudyPlanType * typ;
            if ((typ = dynamic_cast<ProductionStudyPlanType *>(basie)))
              {
                fprintf(outFile, "<ProductionStudyPlan");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ProductionStudyPlan>\n");
              }
            else
              {
                fprintf(stderr, "bad ProductionStudyPlan element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad StatisticalStudyPlan type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool StatisticalStudyPlansType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "n")
        {
          NaturalType * nVal;
          if (this->n)
            {
              fprintf(stderr, "two values for n in StatisticalStudyPlansType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->getval().c_str());
          if (nVal->getbad())
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in StatisticalStudyPlansType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StatisticalStudyPlansType\n");
          returnValue = true;
          break;
        }
    }
  if (this->n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in StatisticalStudyPlansType\n");
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

NaturalType * StatisticalStudyPlansType::getn()
{return n;}

void StatisticalStudyPlansType::setn(NaturalType * nIn)
{n = nIn;}

StatisticalStudyPlanBaseTypeLisd * StatisticalStudyPlansType::getStatisticalStudyPlan()
{return StatisticalStudyPlan;}

void StatisticalStudyPlansType::setStatisticalStudyPlan(StatisticalStudyPlanBaseTypeLisd * StatisticalStudyPlanIn)
{StatisticalStudyPlan = StatisticalStudyPlanIn;}

/* ***************************************************************** */

/* class StatisticalStudyResultsBaseType

*/

StatisticalStudyResultsBaseType::StatisticalStudyResultsBaseType()
{
  id = 0;
  ThisStatisticalStudyResultsInstanceQPId = 0;
  Attributes = 0;
  Status = 0;
  StatisticalStud_1170 = 0;
  StudyIssues = 0;
  InspectionTraceability = 0;
  Name = 0;
  Description = 0;
  StudyId = 0;
  StatisticalStud_1171 = 0;
  AverageFeatures = 0;
  CharacteristicsStats = 0;
  LinearStatsSummaries = 0;
  AngularStatsSummaries = 0;
  AreaStatsSummaries = 0;
  ForceStatsSummaries = 0;
  MassStatsSummaries = 0;
  PressureStatsSummaries = 0;
  SpeedStatsSummaries = 0;
  TemperatureStatsSummaries = 0;
  TimeStatsSummaries = 0;
  UserDefinedUnitStatsSummaries = 0;
  StatsSummaries = 0;
}

StatisticalStudyResultsBaseType::StatisticalStudyResultsBaseType(
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
 SummariesStatisticsType * StatsSummariesIn)
{
  id = 0;
  ThisStatisticalStudyResultsInstanceQPId = ThisStatisticalStudyResultsInstanceQPIdIn;
  Attributes = AttributesIn;
  Status = StatusIn;
  StatisticalStud_1170 = StatisticalStud_1170In;
  StudyIssues = StudyIssuesIn;
  InspectionTraceability = InspectionTraceabilityIn;
  Name = NameIn;
  Description = DescriptionIn;
  StudyId = StudyIdIn;
  StatisticalStud_1171 = StatisticalStud_1171In;
  AverageFeatures = AverageFeaturesIn;
  CharacteristicsStats = CharacteristicsStatsIn;
  LinearStatsSummaries = LinearStatsSummariesIn;
  AngularStatsSummaries = AngularStatsSummariesIn;
  AreaStatsSummaries = AreaStatsSummariesIn;
  ForceStatsSummaries = ForceStatsSummariesIn;
  MassStatsSummaries = MassStatsSummariesIn;
  PressureStatsSummaries = PressureStatsSummariesIn;
  SpeedStatsSummaries = SpeedStatsSummariesIn;
  TemperatureStatsSummaries = TemperatureStatsSummariesIn;
  TimeStatsSummaries = TimeStatsSummariesIn;
  UserDefinedUnitStatsSummaries = UserDefinedUnitStatsSummariesIn;
  StatsSummaries = StatsSummariesIn;
}

StatisticalStudyResultsBaseType::StatisticalStudyResultsBaseType(
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
 SummariesStatisticsType * StatsSummariesIn)
{
  id = idIn;
  ThisStatisticalStudyResultsInstanceQPId = ThisStatisticalStudyResultsInstanceQPIdIn;
  Attributes = AttributesIn;
  Status = StatusIn;
  StatisticalStud_1170 = StatisticalStud_1170In;
  StudyIssues = StudyIssuesIn;
  InspectionTraceability = InspectionTraceabilityIn;
  Name = NameIn;
  Description = DescriptionIn;
  StudyId = StudyIdIn;
  StatisticalStud_1171 = StatisticalStud_1171In;
  AverageFeatures = AverageFeaturesIn;
  CharacteristicsStats = CharacteristicsStatsIn;
  LinearStatsSummaries = LinearStatsSummariesIn;
  AngularStatsSummaries = AngularStatsSummariesIn;
  AreaStatsSummaries = AreaStatsSummariesIn;
  ForceStatsSummaries = ForceStatsSummariesIn;
  MassStatsSummaries = MassStatsSummariesIn;
  PressureStatsSummaries = PressureStatsSummariesIn;
  SpeedStatsSummaries = SpeedStatsSummariesIn;
  TemperatureStatsSummaries = TemperatureStatsSummariesIn;
  TimeStatsSummaries = TimeStatsSummariesIn;
  UserDefinedUnitStatsSummaries = UserDefinedUnitStatsSummariesIn;
  StatsSummaries = StatsSummariesIn;
}

StatisticalStudyResultsBaseType::~StatisticalStudyResultsBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete ThisStatisticalStudyResultsInstanceQPId;
  delete Attributes;
  delete Status;
  delete StatisticalStud_1170;
  delete StudyIssues;
  delete InspectionTraceability;
  delete Name;
  delete Description;
  delete StudyId;
  delete StatisticalStud_1171;
  delete AverageFeatures;
  delete CharacteristicsStats;
  delete LinearStatsSummaries;
  delete AngularStatsSummaries;
  delete AreaStatsSummaries;
  delete ForceStatsSummaries;
  delete MassStatsSummaries;
  delete PressureStatsSummaries;
  delete SpeedStatsSummaries;
  delete TemperatureStatsSummaries;
  delete TimeStatsSummaries;
  delete UserDefinedUnitStatsSummaries;
  delete StatsSummaries;
  #endif
}

void StatisticalStudyResultsBaseType::printSelf(FILE * outFile)
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
  if (ThisStatisticalStudyResultsInstanceQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ThisStatisticalStudyResultsInstanceQPId");
      ThisStatisticalStudyResultsInstanceQPId->printSelf(outFile);
      fprintf(outFile, "</ThisStatisticalStudyResultsInstanceQPId>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Status");
  Status->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Status>\n");
  if (StatisticalStud_1170)
    {
  StatisticalStud_1170->printSelf(outFile);
    }
  if (StudyIssues)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyIssues");
      StudyIssues->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StudyIssues>\n");
    }
  if (InspectionTraceability)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<InspectionTraceability");
      InspectionTraceability->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</InspectionTraceability>\n");
    }
  if (Name)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Name");
      Name->printSelf(outFile);
      fprintf(outFile, "</Name>\n");
    }
  if (Description)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Description");
      Description->printSelf(outFile);
      fprintf(outFile, "</Description>\n");
    }
  if (StudyId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StudyId");
      StudyId->printSelf(outFile);
      fprintf(outFile, "</StudyId>\n");
    }
  if (StatisticalStud_1171)
    {
  StatisticalStud_1171->printSelf(outFile);
    }
  if (AverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AverageFeatures");
      AverageFeatures->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AverageFeatures>\n");
    }
  if (CharacteristicsStats)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CharacteristicsStats");
      CharacteristicsStats->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CharacteristicsStats>\n");
    }
  if (LinearStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearStatsSummaries");
      LinearStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LinearStatsSummaries>\n");
    }
  if (AngularStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularStatsSummaries");
      AngularStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AngularStatsSummaries>\n");
    }
  if (AreaStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaStatsSummaries");
      AreaStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AreaStatsSummaries>\n");
    }
  if (ForceStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceStatsSummaries");
      ForceStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ForceStatsSummaries>\n");
    }
  if (MassStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassStatsSummaries");
      MassStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MassStatsSummaries>\n");
    }
  if (PressureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureStatsSummaries");
      PressureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PressureStatsSummaries>\n");
    }
  if (SpeedStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedStatsSummaries");
      SpeedStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SpeedStatsSummaries>\n");
    }
  if (TemperatureStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureStatsSummaries");
      TemperatureStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TemperatureStatsSummaries>\n");
    }
  if (TimeStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeStatsSummaries");
      TimeStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TimeStatsSummaries>\n");
    }
  if (UserDefinedUnitStatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitStatsSummaries");
      UserDefinedUnitStatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</UserDefinedUnitStatsSummaries>\n");
    }
  if (StatsSummaries)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatsSummaries");
      StatsSummaries->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatsSummaries>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool StatisticalStudyResultsBaseType::badAttributes(
 AttributePairLisd * attributes)
{
  std::list<AttributePair *>::iterator iter;
  AttributePair * decl;
  bool returnValue;

  returnValue = false;
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      decl = *iter;
      if (decl->getname() == "id")
        {
          QIFIdType * idVal;
          if (this->id)
            {
              fprintf(stderr, "two values for id in StatisticalStudyResultsBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->getval().c_str());
          if (idVal->getbad())
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in StatisticalStudyResultsBaseType\n",
                      decl->getval().c_str());
              returnValue = true;
              break;
            }
          else
            this->id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StatisticalStudyResultsBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (this->id)
    {
      idMap[this->id->getval()] = this;
    }
  else
    {
      fprintf(stderr, "required attribute \"id\" missing in StatisticalStudyResultsBaseType\n");
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

QIFIdType * StatisticalStudyResultsBaseType::getid()
{return id;}

void StatisticalStudyResultsBaseType::setid(QIFIdType * idIn)
{id = idIn;}

QPIdType * StatisticalStudyResultsBaseType::getThisStatisticalStudyResultsInstanceQPId()
{return ThisStatisticalStudyResultsInstanceQPId;}

void StatisticalStudyResultsBaseType::setThisStatisticalStudyResultsInstanceQPId(QPIdType * ThisStatisticalStudyResultsInstanceQPIdIn)
{ThisStatisticalStudyResultsInstanceQPId = ThisStatisticalStudyResultsInstanceQPIdIn;}

AttributesType * StatisticalStudyResultsBaseType::getAttributes()
{return Attributes;}

void StatisticalStudyResultsBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

StatsEvalStatusType * StatisticalStudyResultsBaseType::getStatus()
{return Status;}

void StatisticalStudyResultsBaseType::setStatus(StatsEvalStatusType * StatusIn)
{Status = StatusIn;}

StatisticalStud_1170_Type * StatisticalStudyResultsBaseType::getStatisticalStud_1170()
{return StatisticalStud_1170;}

void StatisticalStudyResultsBaseType::setStatisticalStud_1170(StatisticalStud_1170_Type * StatisticalStud_1170In)
{StatisticalStud_1170 = StatisticalStud_1170In;}

StudyIssuesType * StatisticalStudyResultsBaseType::getStudyIssues()
{return StudyIssues;}

void StatisticalStudyResultsBaseType::setStudyIssues(StudyIssuesType * StudyIssuesIn)
{StudyIssues = StudyIssuesIn;}

InspectionTraceabilityType * StatisticalStudyResultsBaseType::getInspectionTraceability()
{return InspectionTraceability;}

void StatisticalStudyResultsBaseType::setInspectionTraceability(InspectionTraceabilityType * InspectionTraceabilityIn)
{InspectionTraceability = InspectionTraceabilityIn;}

XmlToken * StatisticalStudyResultsBaseType::getName()
{return Name;}

void StatisticalStudyResultsBaseType::setName(XmlToken * NameIn)
{Name = NameIn;}

XmlString * StatisticalStudyResultsBaseType::getDescription()
{return Description;}

void StatisticalStudyResultsBaseType::setDescription(XmlString * DescriptionIn)
{Description = DescriptionIn;}

QIFReferenceType * StatisticalStudyResultsBaseType::getStudyId()
{return StudyId;}

void StatisticalStudyResultsBaseType::setStudyId(QIFReferenceType * StudyIdIn)
{StudyId = StudyIdIn;}

StatisticalStud_1171_Type * StatisticalStudyResultsBaseType::getStatisticalStud_1171()
{return StatisticalStud_1171;}

void StatisticalStudyResultsBaseType::setStatisticalStud_1171(StatisticalStud_1171_Type * StatisticalStud_1171In)
{StatisticalStud_1171 = StatisticalStud_1171In;}

AverageFeaturesType * StatisticalStudyResultsBaseType::getAverageFeatures()
{return AverageFeatures;}

void StatisticalStudyResultsBaseType::setAverageFeatures(AverageFeaturesType * AverageFeaturesIn)
{AverageFeatures = AverageFeaturesIn;}

CharacteristicsStatsType * StatisticalStudyResultsBaseType::getCharacteristicsStats()
{return CharacteristicsStats;}

void StatisticalStudyResultsBaseType::setCharacteristicsStats(CharacteristicsStatsType * CharacteristicsStatsIn)
{CharacteristicsStats = CharacteristicsStatsIn;}

SummariesStatisticsLinearType * StatisticalStudyResultsBaseType::getLinearStatsSummaries()
{return LinearStatsSummaries;}

void StatisticalStudyResultsBaseType::setLinearStatsSummaries(SummariesStatisticsLinearType * LinearStatsSummariesIn)
{LinearStatsSummaries = LinearStatsSummariesIn;}

SummariesStatisticsAngularType * StatisticalStudyResultsBaseType::getAngularStatsSummaries()
{return AngularStatsSummaries;}

void StatisticalStudyResultsBaseType::setAngularStatsSummaries(SummariesStatisticsAngularType * AngularStatsSummariesIn)
{AngularStatsSummaries = AngularStatsSummariesIn;}

SummariesStatisticsAreaType * StatisticalStudyResultsBaseType::getAreaStatsSummaries()
{return AreaStatsSummaries;}

void StatisticalStudyResultsBaseType::setAreaStatsSummaries(SummariesStatisticsAreaType * AreaStatsSummariesIn)
{AreaStatsSummaries = AreaStatsSummariesIn;}

SummariesStatisticsForceType * StatisticalStudyResultsBaseType::getForceStatsSummaries()
{return ForceStatsSummaries;}

void StatisticalStudyResultsBaseType::setForceStatsSummaries(SummariesStatisticsForceType * ForceStatsSummariesIn)
{ForceStatsSummaries = ForceStatsSummariesIn;}

SummariesStatisticsMassType * StatisticalStudyResultsBaseType::getMassStatsSummaries()
{return MassStatsSummaries;}

void StatisticalStudyResultsBaseType::setMassStatsSummaries(SummariesStatisticsMassType * MassStatsSummariesIn)
{MassStatsSummaries = MassStatsSummariesIn;}

SummariesStatisticsPressureType * StatisticalStudyResultsBaseType::getPressureStatsSummaries()
{return PressureStatsSummaries;}

void StatisticalStudyResultsBaseType::setPressureStatsSummaries(SummariesStatisticsPressureType * PressureStatsSummariesIn)
{PressureStatsSummaries = PressureStatsSummariesIn;}

SummariesStatisticsSpeedType * StatisticalStudyResultsBaseType::getSpeedStatsSummaries()
{return SpeedStatsSummaries;}

void StatisticalStudyResultsBaseType::setSpeedStatsSummaries(SummariesStatisticsSpeedType * SpeedStatsSummariesIn)
{SpeedStatsSummaries = SpeedStatsSummariesIn;}

SummariesStatisticsTemperatureType * StatisticalStudyResultsBaseType::getTemperatureStatsSummaries()
{return TemperatureStatsSummaries;}

void StatisticalStudyResultsBaseType::setTemperatureStatsSummaries(SummariesStatisticsTemperatureType * TemperatureStatsSummariesIn)
{TemperatureStatsSummaries = TemperatureStatsSummariesIn;}

SummariesStatisticsTimeType * StatisticalStudyResultsBaseType::getTimeStatsSummaries()
{return TimeStatsSummaries;}

void StatisticalStudyResultsBaseType::setTimeStatsSummaries(SummariesStatisticsTimeType * TimeStatsSummariesIn)
{TimeStatsSummaries = TimeStatsSummariesIn;}

SummariesStatisticsUserDefinedUnitType * StatisticalStudyResultsBaseType::getUserDefinedUnitStatsSummaries()
{return UserDefinedUnitStatsSummaries;}

void StatisticalStudyResultsBaseType::setUserDefinedUnitStatsSummaries(SummariesStatisticsUserDefinedUnitType * UserDefinedUnitStatsSummariesIn)
{UserDefinedUnitStatsSummaries = UserDefinedUnitStatsSummariesIn;}

SummariesStatisticsType * StatisticalStudyResultsBaseType::getStatsSummaries()
{return StatsSummaries;}

void StatisticalStudyResultsBaseType::setStatsSummaries(SummariesStatisticsType * StatsSummariesIn)
{StatsSummaries = StatsSummariesIn;}

/* ***************************************************************** */

/* class StatisticalStudyResultsBaseTypeLisd

*/

StatisticalStudyResultsBaseTypeLisd::StatisticalStudyResultsBaseTypeLisd() {}

StatisticalStudyResultsBaseTypeLisd::StatisticalStudyResultsBaseTypeLisd(StatisticalStudyResultsBaseType * aStatisticalStudyResultsBaseType)
{
  push_back(aStatisticalStudyResultsBaseType);
}

StatisticalStudyResultsBaseTypeLisd::~StatisticalStudyResultsBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<StatisticalStudyResultsBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void StatisticalStudyResultsBaseTypeLisd::printSelf(FILE * outFile)
{
  std::list<StatisticalStudyResultsBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      (*iter)->printSelf(outFile);
    }
}

/* ***************************************************************** */

/* class StatisticsType

*/

StatisticsType::StatisticsType()
{
  StatisticalStudyPlans = 0;
  StatisticalStudiesResults = 0;
  CorrectiveActionPlans = 0;
}

StatisticsType::StatisticsType(
 StatisticalStudyPlansType * StatisticalStudyPlansIn,
 StatisticalStudiesResultsType * StatisticalStudiesResultsIn,
 CorrectiveActionPlansType * CorrectiveActionPlansIn)
{
  StatisticalStudyPlans = StatisticalStudyPlansIn;
  StatisticalStudiesResults = StatisticalStudiesResultsIn;
  CorrectiveActionPlans = CorrectiveActionPlansIn;
}

StatisticsType::~StatisticsType()
{
  #ifndef NODESTRUCT
  delete StatisticalStudyPlans;
  delete StatisticalStudiesResults;
  delete CorrectiveActionPlans;
  #endif
}

void StatisticsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (StatisticalStudyPlans)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatisticalStudyPlans");
      StatisticalStudyPlans->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatisticalStudyPlans>\n");
    }
  if (StatisticalStudiesResults)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StatisticalStudiesResults");
      StatisticalStudiesResults->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</StatisticalStudiesResults>\n");
    }
  if (CorrectiveActionPlans)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CorrectiveActionPlans");
      CorrectiveActionPlans->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CorrectiveActionPlans>\n");
    }
  doSpaces(-INDENT, outFile);
}

StatisticalStudyPlansType * StatisticsType::getStatisticalStudyPlans()
{return StatisticalStudyPlans;}

void StatisticsType::setStatisticalStudyPlans(StatisticalStudyPlansType * StatisticalStudyPlansIn)
{StatisticalStudyPlans = StatisticalStudyPlansIn;}

StatisticalStudiesResultsType * StatisticsType::getStatisticalStudiesResults()
{return StatisticalStudiesResults;}

void StatisticsType::setStatisticalStudiesResults(StatisticalStudiesResultsType * StatisticalStudiesResultsIn)
{StatisticalStudiesResults = StatisticalStudiesResultsIn;}

CorrectiveActionPlansType * StatisticsType::getCorrectiveActionPlans()
{return CorrectiveActionPlans;}

void StatisticsType::setCorrectiveActionPlans(CorrectiveActionPlansType * CorrectiveActionPlansIn)
{CorrectiveActionPlans = CorrectiveActionPlansIn;}

/* ***************************************************************** */

/* class ControlMethodTy_1159_Type

*/

ControlMethodTy_1159_Type::ControlMethodTy_1159_Type()
{
  ControlMethodTy_1159_TypePair = 0;
}

ControlMethodTy_1159_Type::ControlMethodTy_1159_Type(
 ControlMethodTy_1159_TypeChoicePair * ControlMethodTy_1159_TypePairIn)
{
  ControlMethodTy_1159_TypePair = ControlMethodTy_1159_TypePairIn;
}

ControlMethodTy_1159_Type::~ControlMethodTy_1159_Type()
{
  #ifndef NODESTRUCT
  delete ControlMethodTy_1159_TypePair;
  #endif
}

void ControlMethodTy_1159_Type::printSelf(FILE * outFile)
{
  ControlMethodTy_1159_TypePair->printSelf(outFile);
}

ControlMethodTy_1159_TypeChoicePair * ControlMethodTy_1159_Type::getControlMethodTy_1159_TypePair()
{return ControlMethodTy_1159_TypePair;}

void ControlMethodTy_1159_Type::setControlMethodTy_1159_TypePair(ControlMethodTy_1159_TypeChoicePair * ControlMethodTy_1159_TypePairIn)
{ControlMethodTy_1159_TypePair = ControlMethodTy_1159_TypePairIn;}
ControlMethodTy_1159_TypeChoicePair::ControlMethodTy_1159_TypeChoicePair() {}

ControlMethodTy_1159_TypeChoicePair::ControlMethodTy_1159_TypeChoicePair(
 whichOne ControlMethodTy_1159_TypeTypeIn,
 ControlMethodTy_1159_TypeVal ControlMethodTy_1159_TypeValueIn)
{
  ControlMethodTy_1159_TypeType = ControlMethodTy_1159_TypeTypeIn;
  ControlMethodTy_1159_TypeValue = ControlMethodTy_1159_TypeValueIn;
}

ControlMethodTy_1159_TypeChoicePair::~ControlMethodTy_1159_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ControlMethodTy_1159_TypeType == NumOutOfToleranceE)
    delete ControlMethodTy_1159_TypeValue.NumOutOfTolerance;
  else if (ControlMethodTy_1159_TypeType == CpThresholdE)
    delete ControlMethodTy_1159_TypeValue.CpThreshold;
  else if (ControlMethodTy_1159_TypeType == CpkThresholdE)
    delete ControlMethodTy_1159_TypeValue.CpkThreshold;
  else if (ControlMethodTy_1159_TypeType == PpThresholdE)
    delete ControlMethodTy_1159_TypeValue.PpThreshold;
  else if (ControlMethodTy_1159_TypeType == PpkThresholdE)
    delete ControlMethodTy_1159_TypeValue.PpkThreshold;
  else if (ControlMethodTy_1159_TypeType == NumOutOfControlE)
    delete ControlMethodTy_1159_TypeValue.NumOutOfControl;
  else if (ControlMethodTy_1159_TypeType == TrendGroupingE)
    delete ControlMethodTy_1159_TypeValue.TrendGrouping;
  else if (ControlMethodTy_1159_TypeType == SkewGroupingE)
    delete ControlMethodTy_1159_TypeValue.SkewGrouping;
  else if (ControlMethodTy_1159_TypeType == OneThirdGroupingE)
    delete ControlMethodTy_1159_TypeValue.OneThirdGrouping;
  else if (ControlMethodTy_1159_TypeType == TwoThirdsGroupingE)
    delete ControlMethodTy_1159_TypeValue.TwoThirdsGrouping;
  else if (ControlMethodTy_1159_TypeType == OscillationE)
    delete ControlMethodTy_1159_TypeValue.Oscillation;
  else if (ControlMethodTy_1159_TypeType == StratificationE)
    delete ControlMethodTy_1159_TypeValue.Stratification;
  else if (ControlMethodTy_1159_TypeType == NumOutOfControlRngE)
    delete ControlMethodTy_1159_TypeValue.NumOutOfControlRng;
  #endif
}

void ControlMethodTy_1159_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ControlMethodTy_1159_TypeType == NumOutOfToleranceE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NumOutOfTolerance");
      ControlMethodTy_1159_TypeValue.NumOutOfTolerance->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NumOutOfTolerance>\n");
    }
  else if (ControlMethodTy_1159_TypeType == CpThresholdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CpThreshold");
      ControlMethodTy_1159_TypeValue.CpThreshold->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CpThreshold>\n");
    }
  else if (ControlMethodTy_1159_TypeType == CpkThresholdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CpkThreshold");
      ControlMethodTy_1159_TypeValue.CpkThreshold->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</CpkThreshold>\n");
    }
  else if (ControlMethodTy_1159_TypeType == PpThresholdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PpThreshold");
      ControlMethodTy_1159_TypeValue.PpThreshold->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PpThreshold>\n");
    }
  else if (ControlMethodTy_1159_TypeType == PpkThresholdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PpkThreshold");
      ControlMethodTy_1159_TypeValue.PpkThreshold->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PpkThreshold>\n");
    }
  else if (ControlMethodTy_1159_TypeType == NumOutOfControlE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NumOutOfControl");
      ControlMethodTy_1159_TypeValue.NumOutOfControl->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NumOutOfControl>\n");
    }
  else if (ControlMethodTy_1159_TypeType == TrendGroupingE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TrendGrouping");
      ControlMethodTy_1159_TypeValue.TrendGrouping->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TrendGrouping>\n");
    }
  else if (ControlMethodTy_1159_TypeType == SkewGroupingE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SkewGrouping");
      ControlMethodTy_1159_TypeValue.SkewGrouping->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</SkewGrouping>\n");
    }
  else if (ControlMethodTy_1159_TypeType == OneThirdGroupingE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OneThirdGrouping");
      ControlMethodTy_1159_TypeValue.OneThirdGrouping->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</OneThirdGrouping>\n");
    }
  else if (ControlMethodTy_1159_TypeType == TwoThirdsGroupingE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TwoThirdsGrouping");
      ControlMethodTy_1159_TypeValue.TwoThirdsGrouping->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</TwoThirdsGrouping>\n");
    }
  else if (ControlMethodTy_1159_TypeType == OscillationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Oscillation");
      ControlMethodTy_1159_TypeValue.Oscillation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Oscillation>\n");
    }
  else if (ControlMethodTy_1159_TypeType == StratificationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Stratification");
      ControlMethodTy_1159_TypeValue.Stratification->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Stratification>\n");
    }
  else if (ControlMethodTy_1159_TypeType == NumOutOfControlRngE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NumOutOfControlRng");
      ControlMethodTy_1159_TypeValue.NumOutOfControlRng->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</NumOutOfControlRng>\n");
    }
}

/* ***************************************************************** */

/* class FirstArticleStu_1160_Type

*/

FirstArticleStu_1160_Type::FirstArticleStu_1160_Type()
{
  FirstArticleStu_1160_TypePair = 0;
}

FirstArticleStu_1160_Type::FirstArticleStu_1160_Type(
 FirstArticleStu_1160_TypeChoicePair * FirstArticleStu_1160_TypePairIn)
{
  FirstArticleStu_1160_TypePair = FirstArticleStu_1160_TypePairIn;
}

FirstArticleStu_1160_Type::~FirstArticleStu_1160_Type()
{
  #ifndef NODESTRUCT
  delete FirstArticleStu_1160_TypePair;
  #endif
}

void FirstArticleStu_1160_Type::printSelf(FILE * outFile)
{
  FirstArticleStu_1160_TypePair->printSelf(outFile);
}

FirstArticleStu_1160_TypeChoicePair * FirstArticleStu_1160_Type::getFirstArticleStu_1160_TypePair()
{return FirstArticleStu_1160_TypePair;}

void FirstArticleStu_1160_Type::setFirstArticleStu_1160_TypePair(FirstArticleStu_1160_TypeChoicePair * FirstArticleStu_1160_TypePairIn)
{FirstArticleStu_1160_TypePair = FirstArticleStu_1160_TypePairIn;}
FirstArticleStu_1160_TypeChoicePair::FirstArticleStu_1160_TypeChoicePair() {}

FirstArticleStu_1160_TypeChoicePair::FirstArticleStu_1160_TypeChoicePair(
 whichOne FirstArticleStu_1160_TypeTypeIn,
 FirstArticleStu_1160_TypeVal FirstArticleStu_1160_TypeValueIn)
{
  FirstArticleStu_1160_TypeType = FirstArticleStu_1160_TypeTypeIn;
  FirstArticleStu_1160_TypeValue = FirstArticleStu_1160_TypeValueIn;
}

FirstArticleStu_1160_TypeChoicePair::~FirstArticleStu_1160_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (FirstArticleStu_1160_TypeType == AbsoluteMaximumsE)
    delete FirstArticleStu_1160_TypeValue.AbsoluteMaximums;
  else if (FirstArticleStu_1160_TypeType == RelativeMaximumE)
    delete FirstArticleStu_1160_TypeValue.RelativeMaximum;
  #endif
}

void FirstArticleStu_1160_TypeChoicePair::printSelf(FILE * outFile)
{
  if (FirstArticleStu_1160_TypeType == AbsoluteMaximumsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AbsoluteMaximums");
      FirstArticleStu_1160_TypeValue.AbsoluteMaximums->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AbsoluteMaximums>\n");
    }
  else if (FirstArticleStu_1160_TypeType == RelativeMaximumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RelativeMaximum");
      FirstArticleStu_1160_TypeValue.RelativeMaximum->printSelf(outFile);
      fprintf(outFile, "</RelativeMaximum>\n");
    }
}

/* ***************************************************************** */

/* class GageRandRStudyP_1161_Type

*/

GageRandRStudyP_1161_Type::GageRandRStudyP_1161_Type()
{
  GageRandRStudyP_1161_TypePair = 0;
}

GageRandRStudyP_1161_Type::GageRandRStudyP_1161_Type(
 GageRandRStudyP_1161_TypeChoicePair * GageRandRStudyP_1161_TypePairIn)
{
  GageRandRStudyP_1161_TypePair = GageRandRStudyP_1161_TypePairIn;
}

GageRandRStudyP_1161_Type::~GageRandRStudyP_1161_Type()
{
  #ifndef NODESTRUCT
  delete GageRandRStudyP_1161_TypePair;
  #endif
}

void GageRandRStudyP_1161_Type::printSelf(FILE * outFile)
{
  if (GageRandRStudyP_1161_TypePair)
    {
      GageRandRStudyP_1161_TypePair->printSelf(outFile);
    }
}

GageRandRStudyP_1161_TypeChoicePair * GageRandRStudyP_1161_Type::getGageRandRStudyP_1161_TypePair()
{return GageRandRStudyP_1161_TypePair;}

void GageRandRStudyP_1161_Type::setGageRandRStudyP_1161_TypePair(GageRandRStudyP_1161_TypeChoicePair * GageRandRStudyP_1161_TypePairIn)
{GageRandRStudyP_1161_TypePair = GageRandRStudyP_1161_TypePairIn;}
GageRandRStudyP_1161_TypeChoicePair::GageRandRStudyP_1161_TypeChoicePair() {}

GageRandRStudyP_1161_TypeChoicePair::GageRandRStudyP_1161_TypeChoicePair(
 whichOne GageRandRStudyP_1161_TypeTypeIn,
 GageRandRStudyP_1161_TypeVal GageRandRStudyP_1161_TypeValueIn)
{
  GageRandRStudyP_1161_TypeType = GageRandRStudyP_1161_TypeTypeIn;
  GageRandRStudyP_1161_TypeValue = GageRandRStudyP_1161_TypeValueIn;
}

GageRandRStudyP_1161_TypeChoicePair::~GageRandRStudyP_1161_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (GageRandRStudyP_1161_TypeType == MaximumRelativeAppraiserVariationE)
    delete GageRandRStudyP_1161_TypeValue.MaximumRelativeAppraiserVariation;
  else if (GageRandRStudyP_1161_TypeType == MaximumAbsoluteAppraiserVariationE)
    delete GageRandRStudyP_1161_TypeValue.MaximumAbsoluteAppraiserVariation;
  #endif
}

void GageRandRStudyP_1161_TypeChoicePair::printSelf(FILE * outFile)
{
  if (GageRandRStudyP_1161_TypeType == MaximumRelativeAppraiserVariationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaximumRelativeAppraiserVariation");
      GageRandRStudyP_1161_TypeValue.MaximumRelativeAppraiserVariation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaximumRelativeAppraiserVariation>\n");
    }
  else if (GageRandRStudyP_1161_TypeType == MaximumAbsoluteAppraiserVariationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaximumAbsoluteAppraiserVariation");
      GageRandRStudyP_1161_TypeValue.MaximumAbsoluteAppraiserVariation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaximumAbsoluteAppraiserVariation>\n");
    }
}

/* ***************************************************************** */

/* class GageRandRStudyP_1162_Type

*/

GageRandRStudyP_1162_Type::GageRandRStudyP_1162_Type()
{
  GageRandRStudyP_1162_TypePair = 0;
}

GageRandRStudyP_1162_Type::GageRandRStudyP_1162_Type(
 GageRandRStudyP_1162_TypeChoicePair * GageRandRStudyP_1162_TypePairIn)
{
  GageRandRStudyP_1162_TypePair = GageRandRStudyP_1162_TypePairIn;
}

GageRandRStudyP_1162_Type::~GageRandRStudyP_1162_Type()
{
  #ifndef NODESTRUCT
  delete GageRandRStudyP_1162_TypePair;
  #endif
}

void GageRandRStudyP_1162_Type::printSelf(FILE * outFile)
{
  if (GageRandRStudyP_1162_TypePair)
    {
      GageRandRStudyP_1162_TypePair->printSelf(outFile);
    }
}

GageRandRStudyP_1162_TypeChoicePair * GageRandRStudyP_1162_Type::getGageRandRStudyP_1162_TypePair()
{return GageRandRStudyP_1162_TypePair;}

void GageRandRStudyP_1162_Type::setGageRandRStudyP_1162_TypePair(GageRandRStudyP_1162_TypeChoicePair * GageRandRStudyP_1162_TypePairIn)
{GageRandRStudyP_1162_TypePair = GageRandRStudyP_1162_TypePairIn;}
GageRandRStudyP_1162_TypeChoicePair::GageRandRStudyP_1162_TypeChoicePair() {}

GageRandRStudyP_1162_TypeChoicePair::GageRandRStudyP_1162_TypeChoicePair(
 whichOne GageRandRStudyP_1162_TypeTypeIn,
 GageRandRStudyP_1162_TypeVal GageRandRStudyP_1162_TypeValueIn)
{
  GageRandRStudyP_1162_TypeType = GageRandRStudyP_1162_TypeTypeIn;
  GageRandRStudyP_1162_TypeValue = GageRandRStudyP_1162_TypeValueIn;
}

GageRandRStudyP_1162_TypeChoicePair::~GageRandRStudyP_1162_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (GageRandRStudyP_1162_TypeType == MaximumRelativeEquipmentVariationE)
    delete GageRandRStudyP_1162_TypeValue.MaximumRelativeEquipmentVariation;
  else if (GageRandRStudyP_1162_TypeType == MaximumAbsoluteEquipmentVariationE)
    delete GageRandRStudyP_1162_TypeValue.MaximumAbsoluteEquipmentVariation;
  #endif
}

void GageRandRStudyP_1162_TypeChoicePair::printSelf(FILE * outFile)
{
  if (GageRandRStudyP_1162_TypeType == MaximumRelativeEquipmentVariationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaximumRelativeEquipmentVariation");
      GageRandRStudyP_1162_TypeValue.MaximumRelativeEquipmentVariation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaximumRelativeEquipmentVariation>\n");
    }
  else if (GageRandRStudyP_1162_TypeType == MaximumAbsoluteEquipmentVariationE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaximumAbsoluteEquipmentVariation");
      GageRandRStudyP_1162_TypeValue.MaximumAbsoluteEquipmentVariation->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaximumAbsoluteEquipmentVariation>\n");
    }
}

/* ***************************************************************** */

/* class GageRandRStudyP_1163_Type

*/

GageRandRStudyP_1163_Type::GageRandRStudyP_1163_Type()
{
  GageRandRStudyP_1163_TypePair = 0;
}

GageRandRStudyP_1163_Type::GageRandRStudyP_1163_Type(
 GageRandRStudyP_1163_TypeChoicePair * GageRandRStudyP_1163_TypePairIn)
{
  GageRandRStudyP_1163_TypePair = GageRandRStudyP_1163_TypePairIn;
}

GageRandRStudyP_1163_Type::~GageRandRStudyP_1163_Type()
{
  #ifndef NODESTRUCT
  delete GageRandRStudyP_1163_TypePair;
  #endif
}

void GageRandRStudyP_1163_Type::printSelf(FILE * outFile)
{
  if (GageRandRStudyP_1163_TypePair)
    {
      GageRandRStudyP_1163_TypePair->printSelf(outFile);
    }
}

GageRandRStudyP_1163_TypeChoicePair * GageRandRStudyP_1163_Type::getGageRandRStudyP_1163_TypePair()
{return GageRandRStudyP_1163_TypePair;}

void GageRandRStudyP_1163_Type::setGageRandRStudyP_1163_TypePair(GageRandRStudyP_1163_TypeChoicePair * GageRandRStudyP_1163_TypePairIn)
{GageRandRStudyP_1163_TypePair = GageRandRStudyP_1163_TypePairIn;}
GageRandRStudyP_1163_TypeChoicePair::GageRandRStudyP_1163_TypeChoicePair() {}

GageRandRStudyP_1163_TypeChoicePair::GageRandRStudyP_1163_TypeChoicePair(
 whichOne GageRandRStudyP_1163_TypeTypeIn,
 GageRandRStudyP_1163_TypeVal GageRandRStudyP_1163_TypeValueIn)
{
  GageRandRStudyP_1163_TypeType = GageRandRStudyP_1163_TypeTypeIn;
  GageRandRStudyP_1163_TypeValue = GageRandRStudyP_1163_TypeValueIn;
}

GageRandRStudyP_1163_TypeChoicePair::~GageRandRStudyP_1163_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (GageRandRStudyP_1163_TypeType == MaximumRelativeTotalRandRE)
    delete GageRandRStudyP_1163_TypeValue.MaximumRelativeTotalRandR;
  else if (GageRandRStudyP_1163_TypeType == MaximumAbsoluteTotalRandRE)
    delete GageRandRStudyP_1163_TypeValue.MaximumAbsoluteTotalRandR;
  #endif
}

void GageRandRStudyP_1163_TypeChoicePair::printSelf(FILE * outFile)
{
  if (GageRandRStudyP_1163_TypeType == MaximumRelativeTotalRandRE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaximumRelativeTotalRandR");
      GageRandRStudyP_1163_TypeValue.MaximumRelativeTotalRandR->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaximumRelativeTotalRandR>\n");
    }
  else if (GageRandRStudyP_1163_TypeType == MaximumAbsoluteTotalRandRE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MaximumAbsoluteTotalRandR");
      GageRandRStudyP_1163_TypeValue.MaximumAbsoluteTotalRandR->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MaximumAbsoluteTotalRandR>\n");
    }
}

/* ***************************************************************** */

/* class LinearityStudyP_1164_Type

*/

LinearityStudyP_1164_Type::LinearityStudyP_1164_Type()
{
  LinearityStudyP_1164_TypePair = 0;
}

LinearityStudyP_1164_Type::LinearityStudyP_1164_Type(
 LinearityStudyP_1164_TypeChoicePair * LinearityStudyP_1164_TypePairIn)
{
  LinearityStudyP_1164_TypePair = LinearityStudyP_1164_TypePairIn;
}

LinearityStudyP_1164_Type::~LinearityStudyP_1164_Type()
{
  #ifndef NODESTRUCT
  delete LinearityStudyP_1164_TypePair;
  #endif
}

void LinearityStudyP_1164_Type::printSelf(FILE * outFile)
{
  LinearityStudyP_1164_TypePair->printSelf(outFile);
}

LinearityStudyP_1164_TypeChoicePair * LinearityStudyP_1164_Type::getLinearityStudyP_1164_TypePair()
{return LinearityStudyP_1164_TypePair;}

void LinearityStudyP_1164_Type::setLinearityStudyP_1164_TypePair(LinearityStudyP_1164_TypeChoicePair * LinearityStudyP_1164_TypePairIn)
{LinearityStudyP_1164_TypePair = LinearityStudyP_1164_TypePairIn;}
LinearityStudyP_1164_TypeChoicePair::LinearityStudyP_1164_TypeChoicePair() {}

LinearityStudyP_1164_TypeChoicePair::LinearityStudyP_1164_TypeChoicePair(
 whichOne LinearityStudyP_1164_TypeTypeIn,
 LinearityStudyP_1164_TypeVal LinearityStudyP_1164_TypeValueIn)
{
  LinearityStudyP_1164_TypeType = LinearityStudyP_1164_TypeTypeIn;
  LinearityStudyP_1164_TypeValue = LinearityStudyP_1164_TypeValueIn;
}

LinearityStudyP_1164_TypeChoicePair::~LinearityStudyP_1164_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (LinearityStudyP_1164_TypeType == AbsoluteMinimumsE)
    delete LinearityStudyP_1164_TypeValue.AbsoluteMinimums;
  else if (LinearityStudyP_1164_TypeType == RelativeLinearityMinimumE)
    delete LinearityStudyP_1164_TypeValue.RelativeLinearityMinimum;
  #endif
}

void LinearityStudyP_1164_TypeChoicePair::printSelf(FILE * outFile)
{
  if (LinearityStudyP_1164_TypeType == AbsoluteMinimumsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AbsoluteMinimums");
      LinearityStudyP_1164_TypeValue.AbsoluteMinimums->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AbsoluteMinimums>\n");
    }
  else if (LinearityStudyP_1164_TypeType == RelativeLinearityMinimumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RelativeLinearityMinimum");
      LinearityStudyP_1164_TypeValue.RelativeLinearityMinimum->printSelf(outFile);
      fprintf(outFile, "</RelativeLinearityMinimum>\n");
    }
}

/* ***************************************************************** */

/* class LinearityStudyR_1165_Type

*/

LinearityStudyR_1165_Type::LinearityStudyR_1165_Type()
{
  LinearityStudyR_1165_TypePair = 0;
}

LinearityStudyR_1165_Type::LinearityStudyR_1165_Type(
 LinearityStudyR_1165_TypeChoicePair * LinearityStudyR_1165_TypePairIn)
{
  LinearityStudyR_1165_TypePair = LinearityStudyR_1165_TypePairIn;
}

LinearityStudyR_1165_Type::~LinearityStudyR_1165_Type()
{
  #ifndef NODESTRUCT
  delete LinearityStudyR_1165_TypePair;
  #endif
}

void LinearityStudyR_1165_Type::printSelf(FILE * outFile)
{
  if (LinearityStudyR_1165_TypePair)
    {
      LinearityStudyR_1165_TypePair->printSelf(outFile);
    }
}

LinearityStudyR_1165_TypeChoicePair * LinearityStudyR_1165_Type::getLinearityStudyR_1165_TypePair()
{return LinearityStudyR_1165_TypePair;}

void LinearityStudyR_1165_Type::setLinearityStudyR_1165_TypePair(LinearityStudyR_1165_TypeChoicePair * LinearityStudyR_1165_TypePairIn)
{LinearityStudyR_1165_TypePair = LinearityStudyR_1165_TypePairIn;}
LinearityStudyR_1165_TypeChoicePair::LinearityStudyR_1165_TypeChoicePair() {}

LinearityStudyR_1165_TypeChoicePair::LinearityStudyR_1165_TypeChoicePair(
 whichOne LinearityStudyR_1165_TypeTypeIn,
 LinearityStudyR_1165_TypeVal LinearityStudyR_1165_TypeValueIn)
{
  LinearityStudyR_1165_TypeType = LinearityStudyR_1165_TypeTypeIn;
  LinearityStudyR_1165_TypeValue = LinearityStudyR_1165_TypeValueIn;
}

LinearityStudyR_1165_TypeChoicePair::~LinearityStudyR_1165_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (LinearityStudyR_1165_TypeType == LinearAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.LinearAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == AngularAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.AngularAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == AreaAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.AreaAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == ForceAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.ForceAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == MassAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.MassAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == PressureAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.PressureAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == SpeedAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.SpeedAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == TemperatureAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.TemperatureAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == TimeAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.TimeAbsoluteLinearity;
  else if (LinearityStudyR_1165_TypeType == UserDefinedUnitAbsoluteLinearityE)
    delete LinearityStudyR_1165_TypeValue.UserDefinedUnitAbsoluteLinearity;
  #endif
}

void LinearityStudyR_1165_TypeChoicePair::printSelf(FILE * outFile)
{
  if (LinearityStudyR_1165_TypeType == LinearAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LinearAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.LinearAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</LinearAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == AngularAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AngularAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.AngularAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</AngularAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == AreaAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AreaAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.AreaAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</AreaAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == ForceAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ForceAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.ForceAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</ForceAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == MassAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MassAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.MassAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</MassAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == PressureAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PressureAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.PressureAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</PressureAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == SpeedAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SpeedAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.SpeedAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</SpeedAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == TemperatureAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TemperatureAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.TemperatureAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</TemperatureAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == TimeAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<TimeAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.TimeAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</TimeAbsoluteLinearity>\n");
    }
  else if (LinearityStudyR_1165_TypeType == UserDefinedUnitAbsoluteLinearityE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<UserDefinedUnitAbsoluteLinearity");
      LinearityStudyR_1165_TypeValue.UserDefinedUnitAbsoluteLinearity->printSelf(outFile);
      fprintf(outFile, "</UserDefinedUnitAbsoluteLinearity>\n");
    }
}

/* ***************************************************************** */

/* class ProcessDifferen_1166_Type

*/

ProcessDifferen_1166_Type::ProcessDifferen_1166_Type()
{
  ProcessDifferen_1166_TypePair = 0;
}

ProcessDifferen_1166_Type::ProcessDifferen_1166_Type(
 ProcessDifferen_1166_TypeChoicePair * ProcessDifferen_1166_TypePairIn)
{
  ProcessDifferen_1166_TypePair = ProcessDifferen_1166_TypePairIn;
}

ProcessDifferen_1166_Type::~ProcessDifferen_1166_Type()
{
  #ifndef NODESTRUCT
  delete ProcessDifferen_1166_TypePair;
  #endif
}

void ProcessDifferen_1166_Type::printSelf(FILE * outFile)
{
  ProcessDifferen_1166_TypePair->printSelf(outFile);
}

ProcessDifferen_1166_TypeChoicePair * ProcessDifferen_1166_Type::getProcessDifferen_1166_TypePair()
{return ProcessDifferen_1166_TypePair;}

void ProcessDifferen_1166_Type::setProcessDifferen_1166_TypePair(ProcessDifferen_1166_TypeChoicePair * ProcessDifferen_1166_TypePairIn)
{ProcessDifferen_1166_TypePair = ProcessDifferen_1166_TypePairIn;}
ProcessDifferen_1166_TypeChoicePair::ProcessDifferen_1166_TypeChoicePair() {}

ProcessDifferen_1166_TypeChoicePair::ProcessDifferen_1166_TypeChoicePair(
 whichOne ProcessDifferen_1166_TypeTypeIn,
 ProcessDifferen_1166_TypeVal ProcessDifferen_1166_TypeValueIn)
{
  ProcessDifferen_1166_TypeType = ProcessDifferen_1166_TypeTypeIn;
  ProcessDifferen_1166_TypeValue = ProcessDifferen_1166_TypeValueIn;
}

ProcessDifferen_1166_TypeChoicePair::~ProcessDifferen_1166_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (ProcessDifferen_1166_TypeType == AbsoluteDifferencesE)
    delete ProcessDifferen_1166_TypeValue.AbsoluteDifferences;
  else if (ProcessDifferen_1166_TypeType == RelativeDifferenceE)
    delete ProcessDifferen_1166_TypeValue.RelativeDifference;
  #endif
}

void ProcessDifferen_1166_TypeChoicePair::printSelf(FILE * outFile)
{
  if (ProcessDifferen_1166_TypeType == AbsoluteDifferencesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AbsoluteDifferences");
      ProcessDifferen_1166_TypeValue.AbsoluteDifferences->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AbsoluteDifferences>\n");
    }
  else if (ProcessDifferen_1166_TypeType == RelativeDifferenceE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RelativeDifference");
      ProcessDifferen_1166_TypeValue.RelativeDifference->printSelf(outFile);
      fprintf(outFile, "</RelativeDifference>\n");
    }
}

/* ***************************************************************** */

/* class StatisticalStud_1167_Type

*/

StatisticalStud_1167_Type::StatisticalStud_1167_Type()
{
  FeatureItemIds = 0;
  CalculateAverageFeatures = 0;
}

StatisticalStud_1167_Type::StatisticalStud_1167_Type(
 ArrayReferenceType * FeatureItemIdsIn,
 XmlBoolean * CalculateAverageFeaturesIn)
{
  FeatureItemIds = FeatureItemIdsIn;
  CalculateAverageFeatures = CalculateAverageFeaturesIn;
}

StatisticalStud_1167_Type::~StatisticalStud_1167_Type()
{
  #ifndef NODESTRUCT
  delete FeatureItemIds;
  delete CalculateAverageFeatures;
  #endif
}

void StatisticalStud_1167_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureItemIds");
  FeatureItemIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</FeatureItemIds>\n");
  if (CalculateAverageFeatures)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<CalculateAverageFeatures");
      CalculateAverageFeatures->printSelf(outFile);
      fprintf(outFile, "</CalculateAverageFeatures>\n");
    }
}

ArrayReferenceType * StatisticalStud_1167_Type::getFeatureItemIds()
{return FeatureItemIds;}

void StatisticalStud_1167_Type::setFeatureItemIds(ArrayReferenceType * FeatureItemIdsIn)
{FeatureItemIds = FeatureItemIdsIn;}

XmlBoolean * StatisticalStud_1167_Type::getCalculateAverageFeatures()
{return CalculateAverageFeatures;}

void StatisticalStud_1167_Type::setCalculateAverageFeatures(XmlBoolean * CalculateAverageFeaturesIn)
{CalculateAverageFeatures = CalculateAverageFeaturesIn;}

/* ***************************************************************** */

/* class StatisticalStud_1168_Type

*/

StatisticalStud_1168_Type::StatisticalStud_1168_Type()
{
  CharacteristicItemIds = 0;
  StatsValuesPerChar = 0;
  StatsValuesPerSubgroup = 0;
}

StatisticalStud_1168_Type::StatisticalStud_1168_Type(
 ArrayReferenceType * CharacteristicItemIdsIn,
 ListAccumulatedStatsValuesTypeLisd * StatsValuesPerCharIn,
 ListSubgroupStatsValuesTypeLisd * StatsValuesPerSubgroupIn)
{
  CharacteristicItemIds = CharacteristicItemIdsIn;
  StatsValuesPerChar = StatsValuesPerCharIn;
  StatsValuesPerSubgroup = StatsValuesPerSubgroupIn;
}

StatisticalStud_1168_Type::~StatisticalStud_1168_Type()
{
  #ifndef NODESTRUCT
  delete CharacteristicItemIds;
  delete StatsValuesPerChar;
  delete StatsValuesPerSubgroup;
  #endif
}

void StatisticalStud_1168_Type::printSelf(FILE * outFile)
{
  doSpaces(0, outFile);
  fprintf(outFile, "<CharacteristicItemIds");
  CharacteristicItemIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CharacteristicItemIds>\n");
  {
    if (!StatsValuesPerChar)
      {
        StatsValuesPerChar = new ListAccumulatedStatsValuesTypeLisd;
      }
    std::list<ListAccumulatedStatsValuesType *>::iterator iter;
    for (iter = StatsValuesPerChar->begin();
         iter != StatsValuesPerChar->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesPerChar");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesPerChar>\n");
      }
  }
  {
    if (!StatsValuesPerSubgroup)
      {
        StatsValuesPerSubgroup = new ListSubgroupStatsValuesTypeLisd;
      }
    std::list<ListSubgroupStatsValuesType *>::iterator iter;
    for (iter = StatsValuesPerSubgroup->begin();
         iter != StatsValuesPerSubgroup->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StatsValuesPerSubgroup");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StatsValuesPerSubgroup>\n");
      }
  }
}

ArrayReferenceType * StatisticalStud_1168_Type::getCharacteristicItemIds()
{return CharacteristicItemIds;}

void StatisticalStud_1168_Type::setCharacteristicItemIds(ArrayReferenceType * CharacteristicItemIdsIn)
{CharacteristicItemIds = CharacteristicItemIdsIn;}

ListAccumulatedStatsValuesTypeLisd * StatisticalStud_1168_Type::getStatsValuesPerChar()
{return StatsValuesPerChar;}

void StatisticalStud_1168_Type::setStatsValuesPerChar(ListAccumulatedStatsValuesTypeLisd * StatsValuesPerCharIn)
{StatsValuesPerChar = StatsValuesPerCharIn;}

ListSubgroupStatsValuesTypeLisd * StatisticalStud_1168_Type::getStatsValuesPerSubgroup()
{return StatsValuesPerSubgroup;}

void StatisticalStud_1168_Type::setStatsValuesPerSubgroup(ListSubgroupStatsValuesTypeLisd * StatsValuesPerSubgroupIn)
{StatsValuesPerSubgroup = StatsValuesPerSubgroupIn;}

/* ***************************************************************** */

/* class StatisticalStud_1169_Type

*/

StatisticalStud_1169_Type::StatisticalStud_1169_Type()
{
  StatisticalStud_1169_TypePair = 0;
}

StatisticalStud_1169_Type::StatisticalStud_1169_Type(
 StatisticalStud_1169_TypeChoicePair * StatisticalStud_1169_TypePairIn)
{
  StatisticalStud_1169_TypePair = StatisticalStud_1169_TypePairIn;
}

StatisticalStud_1169_Type::~StatisticalStud_1169_Type()
{
  #ifndef NODESTRUCT
  delete StatisticalStud_1169_TypePair;
  #endif
}

void StatisticalStud_1169_Type::printSelf(FILE * outFile)
{
  if (StatisticalStud_1169_TypePair)
    {
      StatisticalStud_1169_TypePair->printSelf(outFile);
    }
}

StatisticalStud_1169_TypeChoicePair * StatisticalStud_1169_Type::getStatisticalStud_1169_TypePair()
{return StatisticalStud_1169_TypePair;}

void StatisticalStud_1169_Type::setStatisticalStud_1169_TypePair(StatisticalStud_1169_TypeChoicePair * StatisticalStud_1169_TypePairIn)
{StatisticalStud_1169_TypePair = StatisticalStud_1169_TypePairIn;}
StatisticalStud_1169_TypeChoicePair::StatisticalStud_1169_TypeChoicePair() {}

StatisticalStud_1169_TypeChoicePair::StatisticalStud_1169_TypeChoicePair(
 whichOne StatisticalStud_1169_TypeTypeIn,
 StatisticalStud_1169_TypeVal StatisticalStud_1169_TypeValueIn)
{
  StatisticalStud_1169_TypeType = StatisticalStud_1169_TypeTypeIn;
  StatisticalStud_1169_TypeValue = StatisticalStud_1169_TypeValueIn;
}

StatisticalStud_1169_TypeChoicePair::~StatisticalStud_1169_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (StatisticalStud_1169_TypeType == SoftwareIdE)
    delete StatisticalStud_1169_TypeValue.SoftwareId;
  else if (StatisticalStud_1169_TypeType == StandardIdE)
    delete StatisticalStud_1169_TypeValue.StandardId;
  #endif
}

void StatisticalStud_1169_TypeChoicePair::printSelf(FILE * outFile)
{
  if (StatisticalStud_1169_TypeType == SoftwareIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SoftwareId");
      StatisticalStud_1169_TypeValue.SoftwareId->printSelf(outFile);
      fprintf(outFile, "</SoftwareId>\n");
    }
  else if (StatisticalStud_1169_TypeType == StandardIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StandardId");
      StatisticalStud_1169_TypeValue.StandardId->printSelf(outFile);
      fprintf(outFile, "</StandardId>\n");
    }
}

/* ***************************************************************** */

/* class StatisticalStud_1170_Type

*/

StatisticalStud_1170_Type::StatisticalStud_1170_Type()
{
  StatisticalStud_1170_TypePair = 0;
}

StatisticalStud_1170_Type::StatisticalStud_1170_Type(
 StatisticalStud_1170_TypeChoicePair * StatisticalStud_1170_TypePairIn)
{
  StatisticalStud_1170_TypePair = StatisticalStud_1170_TypePairIn;
}

StatisticalStud_1170_Type::~StatisticalStud_1170_Type()
{
  #ifndef NODESTRUCT
  delete StatisticalStud_1170_TypePair;
  #endif
}

void StatisticalStud_1170_Type::printSelf(FILE * outFile)
{
  if (StatisticalStud_1170_TypePair)
    {
      StatisticalStud_1170_TypePair->printSelf(outFile);
    }
}

StatisticalStud_1170_TypeChoicePair * StatisticalStud_1170_Type::getStatisticalStud_1170_TypePair()
{return StatisticalStud_1170_TypePair;}

void StatisticalStud_1170_Type::setStatisticalStud_1170_TypePair(StatisticalStud_1170_TypeChoicePair * StatisticalStud_1170_TypePairIn)
{StatisticalStud_1170_TypePair = StatisticalStud_1170_TypePairIn;}
StatisticalStud_1170_TypeChoicePair::StatisticalStud_1170_TypeChoicePair() {}

StatisticalStud_1170_TypeChoicePair::StatisticalStud_1170_TypeChoicePair(
 whichOne StatisticalStud_1170_TypeTypeIn,
 StatisticalStud_1170_TypeVal StatisticalStud_1170_TypeValueIn)
{
  StatisticalStud_1170_TypeType = StatisticalStud_1170_TypeTypeIn;
  StatisticalStud_1170_TypeValue = StatisticalStud_1170_TypeValueIn;
}

StatisticalStud_1170_TypeChoicePair::~StatisticalStud_1170_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (StatisticalStud_1170_TypeType == SoftwareIdE)
    delete StatisticalStud_1170_TypeValue.SoftwareId;
  else if (StatisticalStud_1170_TypeType == StandardIdE)
    delete StatisticalStud_1170_TypeValue.StandardId;
  #endif
}

void StatisticalStud_1170_TypeChoicePair::printSelf(FILE * outFile)
{
  if (StatisticalStud_1170_TypeType == SoftwareIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<SoftwareId");
      StatisticalStud_1170_TypeValue.SoftwareId->printSelf(outFile);
      fprintf(outFile, "</SoftwareId>\n");
    }
  else if (StatisticalStud_1170_TypeType == StandardIdE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<StandardId");
      StatisticalStud_1170_TypeValue.StandardId->printSelf(outFile);
      fprintf(outFile, "</StandardId>\n");
    }
}

/* ***************************************************************** */

/* class StatisticalStud_1171_Type

*/

StatisticalStud_1171_Type::StatisticalStud_1171_Type()
{
  StatisticalStud_1171_TypePair = 0;
}

StatisticalStud_1171_Type::StatisticalStud_1171_Type(
 StatisticalStud_1171_TypeChoicePair * StatisticalStud_1171_TypePairIn)
{
  StatisticalStud_1171_TypePair = StatisticalStud_1171_TypePairIn;
}

StatisticalStud_1171_Type::~StatisticalStud_1171_Type()
{
  #ifndef NODESTRUCT
  delete StatisticalStud_1171_TypePair;
  #endif
}

void StatisticalStud_1171_Type::printSelf(FILE * outFile)
{
  if (StatisticalStud_1171_TypePair)
    {
      StatisticalStud_1171_TypePair->printSelf(outFile);
    }
}

StatisticalStud_1171_TypeChoicePair * StatisticalStud_1171_Type::getStatisticalStud_1171_TypePair()
{return StatisticalStud_1171_TypePair;}

void StatisticalStud_1171_Type::setStatisticalStud_1171_TypePair(StatisticalStud_1171_TypeChoicePair * StatisticalStud_1171_TypePairIn)
{StatisticalStud_1171_TypePair = StatisticalStud_1171_TypePairIn;}
StatisticalStud_1171_TypeChoicePair::StatisticalStud_1171_TypeChoicePair() {}

StatisticalStud_1171_TypeChoicePair::StatisticalStud_1171_TypeChoicePair(
 whichOne StatisticalStud_1171_TypeTypeIn,
 StatisticalStud_1171_TypeVal StatisticalStud_1171_TypeValueIn)
{
  StatisticalStud_1171_TypeType = StatisticalStud_1171_TypeTypeIn;
  StatisticalStud_1171_TypeValue = StatisticalStud_1171_TypeValueIn;
}

StatisticalStud_1171_TypeChoicePair::~StatisticalStud_1171_TypeChoicePair()
{
  #ifndef NODESTRUCT
  if (StatisticalStud_1171_TypeType == ResultsIdsE)
    delete StatisticalStud_1171_TypeValue.ResultsIds;
  else if (StatisticalStud_1171_TypeType == ResultsQPIdsE)
    delete StatisticalStud_1171_TypeValue.ResultsQPIds;
  else if (StatisticalStud_1171_TypeType == ResultsFilesE)
    delete StatisticalStud_1171_TypeValue.ResultsFiles;
  #endif
}

void StatisticalStud_1171_TypeChoicePair::printSelf(FILE * outFile)
{
  if (StatisticalStud_1171_TypeType == ResultsIdsE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ResultsIds");
      StatisticalStud_1171_TypeValue.ResultsIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ResultsIds>\n");
    }
  else if (StatisticalStud_1171_TypeType == ResultsQPIdsE)
    {
      std::list<ArrayQPIdFullReferenceType *>::iterator iter;
      for (iter = StatisticalStud_1171_TypeValue.ResultsQPIds->begin();
           iter != StatisticalStud_1171_TypeValue.ResultsQPIds->end();
           iter++)
        {
          doSpaces(0, outFile);
          fprintf(outFile, "<ResultsQPIds");
          (*iter)->printSelf(outFile);
          doSpaces(0, outFile);
          fprintf(outFile, "</ResultsQPIds>\n");
        }
    }
  else if (StatisticalStud_1171_TypeType == ResultsFilesE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ResultsFiles");
      StatisticalStud_1171_TypeValue.ResultsFiles->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ResultsFiles>\n");
    }
}

/* ***************************************************************** */

