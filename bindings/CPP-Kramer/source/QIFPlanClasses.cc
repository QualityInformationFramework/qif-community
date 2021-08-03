/*********************************************************************/

#include <stdio.h>             // for printf, etc.
#include <string.h>            // for strdup
#include <stdlib.h>            // for exit
#include <list>
#include <boost/regex.hpp>
#include <xmlSchemaInstance.hh>
#include "QIFPlanClasses.hh"

#define INDENT 2

/*********************************************************************/
/*********************************************************************/

/* class ActionBaseType

*/

ActionBaseType::ActionBaseType() :
  PlanElementBaseType()
{
  PreferredActionMethodId = 0;
  AlternativeActionMethodIds = 0;
  PreferredResourceIds = 0;
}

ActionBaseType::ActionBaseType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 QIFReferenceType * PreferredActionMethodIdIn,
 ArrayReferenceType * AlternativeActionMethodIdsIn,
 ArrayReferenceType * PreferredResourceIdsIn) :
  PlanElementBaseType(
    WorkInstructionIdsIn,
    AttributesIn)
{
  PreferredActionMethodId = PreferredActionMethodIdIn;
  AlternativeActionMethodIds = AlternativeActionMethodIdsIn;
  PreferredResourceIds = PreferredResourceIdsIn;
}

ActionBaseType::~ActionBaseType()
{
  #ifndef NODESTRUCT
  delete PreferredActionMethodId;
  delete AlternativeActionMethodIds;
  delete PreferredResourceIds;
  #endif
}

void ActionBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (PreferredActionMethodId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredActionMethodId");
      PreferredActionMethodId->printSelf(outFile);
      fprintf(outFile, "</PreferredActionMethodId>\n");
    }
  if (AlternativeActionMethodIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlternativeActionMethodIds");
      AlternativeActionMethodIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlternativeActionMethodIds>\n");
    }
  if (PreferredResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredResourceIds");
      PreferredResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreferredResourceIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

QIFReferenceType * ActionBaseType::getPreferredActionMethodId()
{return PreferredActionMethodId;}

void ActionBaseType::setPreferredActionMethodId(QIFReferenceType * PreferredActionMethodIdIn)
{PreferredActionMethodId = PreferredActionMethodIdIn;}

ArrayReferenceType * ActionBaseType::getAlternativeActionMethodIds()
{return AlternativeActionMethodIds;}

void ActionBaseType::setAlternativeActionMethodIds(ArrayReferenceType * AlternativeActionMethodIdsIn)
{AlternativeActionMethodIds = AlternativeActionMethodIdsIn;}

ArrayReferenceType * ActionBaseType::getPreferredResourceIds()
{return PreferredResourceIds;}

void ActionBaseType::setPreferredResourceIds(ArrayReferenceType * PreferredResourceIdsIn)
{PreferredResourceIds = PreferredResourceIdsIn;}

/*********************************************************************/

/* class ActionGroupBaseType

*/

ActionGroupBaseType::ActionGroupBaseType() :
  PlanElementBaseType()
{
  MeasureActionGroupFunction = 0;
}

ActionGroupBaseType::ActionGroupBaseType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn) :
  PlanElementBaseType(
    WorkInstructionIdsIn,
    AttributesIn)
{
  MeasureActionGroupFunction = MeasureActionGroupFunctionIn;
}

ActionGroupBaseType::~ActionGroupBaseType()
{
  #ifndef NODESTRUCT
  delete MeasureActionGroupFunction;
  #endif
}

void ActionGroupBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  doSpaces(-INDENT, outFile);
}

MeasureActionGroupFunctionType * ActionGroupBaseType::getMeasureActionGroupFunction()
{return MeasureActionGroupFunction;}

void ActionGroupBaseType::setMeasureActionGroupFunction(MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn)
{MeasureActionGroupFunction = MeasureActionGroupFunctionIn;}

/*********************************************************************/

/* class ActionMethodBaseType

*/

ActionMethodBaseType::ActionMethodBaseType()
{
  id = 0;
  ChosenResourceIds = 0;
  WorkInstructionIds = 0;
  Attributes = 0;
}

ActionMethodBaseType::ActionMethodBaseType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn)
{
  id = 0;
  ChosenResourceIds = ChosenResourceIdsIn;
  WorkInstructionIds = WorkInstructionIdsIn;
  Attributes = AttributesIn;
}

ActionMethodBaseType::ActionMethodBaseType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn)
{
  id = idIn;
  ChosenResourceIds = ChosenResourceIdsIn;
  WorkInstructionIds = WorkInstructionIdsIn;
  Attributes = AttributesIn;
}

ActionMethodBaseType::~ActionMethodBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete ChosenResourceIds;
  delete WorkInstructionIds;
  delete Attributes;
  #endif
}

void ActionMethodBaseType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool ActionMethodBaseType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in ActionMethodBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ActionMethodBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ActionMethodBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ActionMethodBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

QIFIdType * ActionMethodBaseType::getid()
{return id;}

void ActionMethodBaseType::setid(QIFIdType * idIn)
{id = idIn;}

ArrayReferenceType * ActionMethodBaseType::getChosenResourceIds()
{return ChosenResourceIds;}

void ActionMethodBaseType::setChosenResourceIds(ArrayReferenceType * ChosenResourceIdsIn)
{ChosenResourceIds = ChosenResourceIdsIn;}

ArrayReferenceType * ActionMethodBaseType::getWorkInstructionIds()
{return WorkInstructionIds;}

void ActionMethodBaseType::setWorkInstructionIds(ArrayReferenceType * WorkInstructionIdsIn)
{WorkInstructionIds = WorkInstructionIdsIn;}

AttributesType * ActionMethodBaseType::getAttributes()
{return Attributes;}

void ActionMethodBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/*********************************************************************/

/* class ActionMethodBaseTypeLisd

*/

ActionMethodBaseTypeLisd::ActionMethodBaseTypeLisd() {}

ActionMethodBaseTypeLisd::ActionMethodBaseTypeLisd(ActionMethodBaseType * aActionMethodBaseType)
{
  push_back(aActionMethodBaseType);
}

ActionMethodBaseTypeLisd::~ActionMethodBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<ActionMethodBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void ActionMethodBaseTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class ActionMethodsType

*/

ActionMethodsType::ActionMethodsType()
{
  n = 0;
  ActionMethod = 0;
}

ActionMethodsType::ActionMethodsType(
 ActionMethodBaseTypeLisd * ActionMethodIn)
{
  n = 0;
  ActionMethod = ActionMethodIn;
}

ActionMethodsType::ActionMethodsType(
 NaturalType * nIn,
 ActionMethodBaseTypeLisd * ActionMethodIn)
{
  n = nIn;
  ActionMethod = ActionMethodIn;
}

ActionMethodsType::~ActionMethodsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete ActionMethod;
  #endif
}

void ActionMethodsType::printSelf(FILE * outFile)
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
    if (!ActionMethod)
      {
        fprintf(stderr, "ActionMethod list is missing\n");
        exit(1);
      }
    if (ActionMethod->size() == 0)
      {
        fprintf(stderr, "ActionMethod list is empty\n");
        exit(1);
      }
    std::list<ActionMethodBaseType *>::iterator iter;
    for (iter = ActionMethod->begin();
         iter != ActionMethod->end(); iter++)
      {
        ActionMethodBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "AutocollimatorMeasureFeatureMethod") == 0)
          {
            AutocollimatorMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<AutocollimatorMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<AutocollimatorMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</AutocollimatorMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad AutocollimatorMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CalibratedComparatorMeasureFeatureMethod") == 0)
          {
            CalibratedComparatorMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<CalibratedComparatorMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<CalibratedComparatorMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</CalibratedComparatorMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad CalibratedComparatorMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "CoordinateMeasureFeatureMethod") == 0)
          {
            CoordinateMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<CoordinateMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<CoordinateMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</CoordinateMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad CoordinateMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ComputedTomographyMeasureFeatureMethod") == 0)
          {
            ComputedTomographyMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<ComputedTomographyMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<ComputedTomographyMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ComputedTomographyMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad ComputedTomographyMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ExternalReferenceMeasureFeatureMethod") == 0)
          {
            ExternalReferenceMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<ExternalReferenceMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<ExternalReferenceMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ExternalReferenceMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad ExternalReferenceMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "GageMeasureFeatureMethod") == 0)
          {
            GageMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<GageMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<GageMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</GageMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad GageMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LaserRadarMeasureFeatureMethod") == 0)
          {
            LaserRadarMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<LaserRadarMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<LaserRadarMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LaserRadarMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad LaserRadarMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "LaserTrackerMeasureFeatureMethod") == 0)
          {
            LaserTrackerMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<LaserTrackerMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<LaserTrackerMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</LaserTrackerMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad LaserTrackerMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ManualMeasureFeatureMethod") == 0)
          {
            ManualMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<ManualMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<ManualMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ManualMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad ManualMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "MicroscopeMeasureFeatureMethod") == 0)
          {
            MicroscopeMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<MicroscopeMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<MicroscopeMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</MicroscopeMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad MicroscopeMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ProfileProjectorMeasureFeatureMethod") == 0)
          {
            ProfileProjectorMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<ProfileProjectorMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<ProfileProjectorMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ProfileProjectorMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad ProfileProjectorMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "TheodoliteMeasureFeatureMethod") == 0)
          {
            TheodoliteMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<TheodoliteMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<TheodoliteMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</TheodoliteMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad TheodoliteMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "UniversalLengthMeasureFeatureMethod") == 0)
          {
            UniversalLengthMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<UniversalLengthMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<UniversalLengthMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</UniversalLengthMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad UniversalLengthMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "OtherMeasureFeatureMethod") == 0)
          {
            OtherMeasureFeatureMethodType * typ;
            if ((typ = dynamic_cast<OtherMeasureFeatureMethodType *>(basie)))
              {
                fprintf(outFile, "<OtherMeasureFeatureMethod");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</OtherMeasureFeatureMethod>\n");
              }
            else
              {
                fprintf(stderr, "bad OtherMeasureFeatureMethod element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad ActionMethod type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool ActionMethodsType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in ActionMethodsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in ActionMethodsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ActionMethodsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in ActionMethodsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * ActionMethodsType::getn()
{return n;}

void ActionMethodsType::setn(NaturalType * nIn)
{n = nIn;}

ActionMethodBaseTypeLisd * ActionMethodsType::getActionMethod()
{return ActionMethod;}

void ActionMethodsType::setActionMethod(ActionMethodBaseTypeLisd * ActionMethodIn)
{ActionMethod = ActionMethodIn;}

/*********************************************************************/

/* class AutocollimatorMeasureFeatureMethodType

*/

AutocollimatorMeasureFeatureMethodType::AutocollimatorMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

AutocollimatorMeasureFeatureMethodType::AutocollimatorMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

AutocollimatorMeasureFeatureMethodType::AutocollimatorMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

AutocollimatorMeasureFeatureMethodType::~AutocollimatorMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void AutocollimatorMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool AutocollimatorMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in AutocollimatorMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in AutocollimatorMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in AutocollimatorMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in AutocollimatorMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class CalibratedComparatorMeasureFeatureMethodType

*/

CalibratedComparatorMeasureFeatureMethodType::CalibratedComparatorMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

CalibratedComparatorMeasureFeatureMethodType::CalibratedComparatorMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

CalibratedComparatorMeasureFeatureMethodType::CalibratedComparatorMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

CalibratedComparatorMeasureFeatureMethodType::~CalibratedComparatorMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void CalibratedComparatorMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool CalibratedComparatorMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in CalibratedComparatorMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CalibratedComparatorMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CalibratedComparatorMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in CalibratedComparatorMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class ComputedTomographyMeasureFeatureMethodType

*/

ComputedTomographyMeasureFeatureMethodType::ComputedTomographyMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

ComputedTomographyMeasureFeatureMethodType::ComputedTomographyMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

ComputedTomographyMeasureFeatureMethodType::ComputedTomographyMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

ComputedTomographyMeasureFeatureMethodType::~ComputedTomographyMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void ComputedTomographyMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool ComputedTomographyMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in ComputedTomographyMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ComputedTomographyMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ComputedTomographyMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ComputedTomographyMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class CoordinateMeasureFeatureMethodType

*/

CoordinateMeasureFeatureMethodType::CoordinateMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
  NumberOfMeasurementPoints = 0;
}

CoordinateMeasureFeatureMethodType::CoordinateMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 XmlPositiveInteger * NumberOfMeasurementPointsIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
  NumberOfMeasurementPoints = NumberOfMeasurementPointsIn;
}

CoordinateMeasureFeatureMethodType::CoordinateMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 XmlPositiveInteger * NumberOfMeasurementPointsIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
  NumberOfMeasurementPoints = NumberOfMeasurementPointsIn;
}

CoordinateMeasureFeatureMethodType::~CoordinateMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  delete NumberOfMeasurementPoints;
  #endif
}

void CoordinateMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (NumberOfMeasurementPoints)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<NumberOfMeasurementPoints");
      NumberOfMeasurementPoints->printSelf(outFile);
      fprintf(outFile, "</NumberOfMeasurementPoints>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool CoordinateMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in CoordinateMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in CoordinateMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in CoordinateMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in CoordinateMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

XmlPositiveInteger * CoordinateMeasureFeatureMethodType::getNumberOfMeasurementPoints()
{return NumberOfMeasurementPoints;}

void CoordinateMeasureFeatureMethodType::setNumberOfMeasurementPoints(XmlPositiveInteger * NumberOfMeasurementPointsIn)
{NumberOfMeasurementPoints = NumberOfMeasurementPointsIn;}

/*********************************************************************/

/* class DocumentFileInstructionType

*/

DocumentFileInstructionType::DocumentFileInstructionType() :
  WorkInstructionBaseType()
{
  ExternalFile = 0;
}

DocumentFileInstructionType::DocumentFileInstructionType(
 AttributesType * AttributesIn,
 ExternalFileReferenceType * ExternalFileIn) :
  WorkInstructionBaseType(
    AttributesIn)
{
  ExternalFile = ExternalFileIn;
}

DocumentFileInstructionType::DocumentFileInstructionType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ExternalFileReferenceType * ExternalFileIn) :
  WorkInstructionBaseType(
    idIn,
    AttributesIn)
{
  ExternalFile = ExternalFileIn;
}

DocumentFileInstructionType::~DocumentFileInstructionType()
{
  #ifndef NODESTRUCT
  delete ExternalFile;
  #endif
}

void DocumentFileInstructionType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<ExternalFile");
  ExternalFile->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ExternalFile>\n");
  doSpaces(-INDENT, outFile);
}

bool DocumentFileInstructionType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in DocumentFileInstructionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in DocumentFileInstructionType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in DocumentFileInstructionType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in DocumentFileInstructionType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

ExternalFileReferenceType * DocumentFileInstructionType::getExternalFile()
{return ExternalFile;}

void DocumentFileInstructionType::setExternalFile(ExternalFileReferenceType * ExternalFileIn)
{ExternalFile = ExternalFileIn;}

/*********************************************************************/

/* class ElseDoType

*/

ElseDoType::ElseDoType()
{
  PlanElement = 0;
}

ElseDoType::ElseDoType(
 PlanElementBaseType * PlanElementIn)
{
  PlanElement = PlanElementIn;
}

ElseDoType::~ElseDoType()
{
  #ifndef NODESTRUCT
  delete PlanElement;
  #endif
}

void ElseDoType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (PlanElement->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(PlanElement->printElement, "OrderedActionGroup") == 0)
      {
        OrderedActionGroupType * typ;
        if ((typ = dynamic_cast<OrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "UnorderedActionGroup") == 0)
      {
        UnorderedActionGroupType * typ;
        if ((typ = dynamic_cast<UnorderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<UnorderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</UnorderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad UnorderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PartiallyOrderedActionGroup") == 0)
      {
        PartiallyOrderedActionGroupType * typ;
        if ((typ = dynamic_cast<PartiallyOrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PartiallyOrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PartiallyOrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PartiallyOrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "OneOfActionGroup") == 0)
      {
        OneOfActionGroupType * typ;
        if ((typ = dynamic_cast<OneOfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OneOfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OneOfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OneOfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PickSomeActionGroup") == 0)
      {
        PickSomeActionGroupType * typ;
        if ((typ = dynamic_cast<PickSomeActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PickSomeActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PickSomeActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PickSomeActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateAll") == 0)
      {
        MeasureEvaluateAllActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateAllActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateAll");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateAll>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateAll element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateSpecified") == 0)
      {
        MeasureEvaluateSpecifiedActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateSpecifiedActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateSpecified");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateSpecified>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateSpecified element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "EvaluateSpecifiedCharacteristics") == 0)
      {
        EvaluateSpecifiedCharacteristicsActionType * typ;
        if ((typ = dynamic_cast<EvaluateSpecifiedCharacteristicsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<EvaluateSpecifiedCharacteristics");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</EvaluateSpecifiedCharacteristics>\n");
          }
        else
          {
            fprintf(stderr, "bad EvaluateSpecifiedCharacteristics element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "Halt") == 0)
      {
        HaltActionType * typ;
        if ((typ = dynamic_cast<HaltActionType *>(PlanElement)))
          {
            fprintf(outFile, "<Halt");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Halt>\n");
          }
        else
          {
            fprintf(stderr, "bad Halt element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedFeatures") == 0)
      {
        MeasureSpecifiedFeaturesActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedFeaturesActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedFeatures");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedFeatures>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedFeatures element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedMeasurands") == 0)
      {
        MeasureSpecifiedMeasurandsActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedMeasurandsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedMeasurands");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedMeasurands>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedMeasurands element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "IfActionGroup") == 0)
      {
        IfActionGroupType * typ;
        if ((typ = dynamic_cast<IfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<IfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</IfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad IfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "WhileActionGroup") == 0)
      {
        WhileActionGroupType * typ;
        if ((typ = dynamic_cast<WhileActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<WhileActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</WhileActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad WhileActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "VariableSet") == 0)
      {
        VariableSetType * typ;
        if ((typ = dynamic_cast<VariableSetType *>(PlanElement)))
          {
            fprintf(outFile, "<VariableSet");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</VariableSet>\n");
          }
        else
          {
            fprintf(stderr, "bad VariableSet element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad PlanElement type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

PlanElementBaseType * ElseDoType::getPlanElement()
{return PlanElement;}

void ElseDoType::setPlanElement(PlanElementBaseType * PlanElementIn)
{PlanElement = PlanElementIn;}

/*********************************************************************/

/* class EstablishDatumMeasurandType

*/

EstablishDatumMeasurandType::EstablishDatumMeasurandType() :
  MeasurandBaseType()
{
  DatumDefinitionId = 0;
  DatumReferenceFrameId = 0;
}

EstablishDatumMeasurandType::EstablishDatumMeasurandType(
 AttributesType * AttributesIn,
 QIFReferenceFullType * DatumDefinitionIdIn,
 QIFReferenceFullType * DatumReferenceFrameIdIn) :
  MeasurandBaseType(
    AttributesIn)
{
  DatumDefinitionId = DatumDefinitionIdIn;
  DatumReferenceFrameId = DatumReferenceFrameIdIn;
}

EstablishDatumMeasurandType::EstablishDatumMeasurandType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 QIFReferenceFullType * DatumDefinitionIdIn,
 QIFReferenceFullType * DatumReferenceFrameIdIn) :
  MeasurandBaseType(
    idIn,
    AttributesIn)
{
  DatumDefinitionId = DatumDefinitionIdIn;
  DatumReferenceFrameId = DatumReferenceFrameIdIn;
}

EstablishDatumMeasurandType::~EstablishDatumMeasurandType()
{
  #ifndef NODESTRUCT
  delete DatumDefinitionId;
  delete DatumReferenceFrameId;
  #endif
}

void EstablishDatumMeasurandType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumDefinitionId");
  DatumDefinitionId->printSelf(outFile);
  fprintf(outFile, "</DatumDefinitionId>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<DatumReferenceFrameId");
  DatumReferenceFrameId->printSelf(outFile);
  fprintf(outFile, "</DatumReferenceFrameId>\n");
  doSpaces(-INDENT, outFile);
}

bool EstablishDatumMeasurandType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in EstablishDatumMeasurandType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in EstablishDatumMeasurandType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EstablishDatumMeasurandType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in EstablishDatumMeasurandType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

QIFReferenceFullType * EstablishDatumMeasurandType::getDatumDefinitionId()
{return DatumDefinitionId;}

void EstablishDatumMeasurandType::setDatumDefinitionId(QIFReferenceFullType * DatumDefinitionIdIn)
{DatumDefinitionId = DatumDefinitionIdIn;}

QIFReferenceFullType * EstablishDatumMeasurandType::getDatumReferenceFrameId()
{return DatumReferenceFrameId;}

void EstablishDatumMeasurandType::setDatumReferenceFrameId(QIFReferenceFullType * DatumReferenceFrameIdIn)
{DatumReferenceFrameId = DatumReferenceFrameIdIn;}

/*********************************************************************/

/* class EvaluateCharacteristicMeasurandType

*/

EvaluateCharacteristicMeasurandType::EvaluateCharacteristicMeasurandType() :
  MeasurandBaseType()
{
  CharacteristicItemId = 0;
}

EvaluateCharacteristicMeasurandType::EvaluateCharacteristicMeasurandType(
 AttributesType * AttributesIn,
 QIFReferenceType * CharacteristicItemIdIn) :
  MeasurandBaseType(
    AttributesIn)
{
  CharacteristicItemId = CharacteristicItemIdIn;
}

EvaluateCharacteristicMeasurandType::EvaluateCharacteristicMeasurandType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 QIFReferenceType * CharacteristicItemIdIn) :
  MeasurandBaseType(
    idIn,
    AttributesIn)
{
  CharacteristicItemId = CharacteristicItemIdIn;
}

EvaluateCharacteristicMeasurandType::~EvaluateCharacteristicMeasurandType()
{
  #ifndef NODESTRUCT
  delete CharacteristicItemId;
  #endif
}

void EvaluateCharacteristicMeasurandType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<CharacteristicItemId");
  CharacteristicItemId->printSelf(outFile);
  fprintf(outFile, "</CharacteristicItemId>\n");
  doSpaces(-INDENT, outFile);
}

bool EvaluateCharacteristicMeasurandType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in EvaluateCharacteristicMeasurandType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in EvaluateCharacteristicMeasurandType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in EvaluateCharacteristicMeasurandType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in EvaluateCharacteristicMeasurandType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

QIFReferenceType * EvaluateCharacteristicMeasurandType::getCharacteristicItemId()
{return CharacteristicItemId;}

void EvaluateCharacteristicMeasurandType::setCharacteristicItemId(QIFReferenceType * CharacteristicItemIdIn)
{CharacteristicItemId = CharacteristicItemIdIn;}

/*********************************************************************/

/* class EvaluateSpecifiedCharacteristicsActionType

*/

EvaluateSpecifiedCharacteristicsActionType::EvaluateSpecifiedCharacteristicsActionType() :
  ActionBaseType()
{
  CharacteristicItemIds = 0;
}

EvaluateSpecifiedCharacteristicsActionType::EvaluateSpecifiedCharacteristicsActionType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 QIFReferenceType * PreferredActionMethodIdIn,
 ArrayReferenceType * AlternativeActionMethodIdsIn,
 ArrayReferenceType * PreferredResourceIdsIn,
 ArrayReferenceType * CharacteristicItemIdsIn) :
  ActionBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    PreferredActionMethodIdIn,
    AlternativeActionMethodIdsIn,
    PreferredResourceIdsIn)
{
  CharacteristicItemIds = CharacteristicItemIdsIn;
}

EvaluateSpecifiedCharacteristicsActionType::~EvaluateSpecifiedCharacteristicsActionType()
{
  #ifndef NODESTRUCT
  delete CharacteristicItemIds;
  #endif
}

void EvaluateSpecifiedCharacteristicsActionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (PreferredActionMethodId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredActionMethodId");
      PreferredActionMethodId->printSelf(outFile);
      fprintf(outFile, "</PreferredActionMethodId>\n");
    }
  if (AlternativeActionMethodIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlternativeActionMethodIds");
      AlternativeActionMethodIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlternativeActionMethodIds>\n");
    }
  if (PreferredResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredResourceIds");
      PreferredResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreferredResourceIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<CharacteristicItemIds");
  CharacteristicItemIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CharacteristicItemIds>\n");
  doSpaces(-INDENT, outFile);
}

ArrayReferenceType * EvaluateSpecifiedCharacteristicsActionType::getCharacteristicItemIds()
{return CharacteristicItemIds;}

void EvaluateSpecifiedCharacteristicsActionType::setCharacteristicItemIds(ArrayReferenceType * CharacteristicItemIdsIn)
{CharacteristicItemIds = CharacteristicItemIdsIn;}

/*********************************************************************/

/* class ExternalReferenceMeasureFeatureMethodType

*/

ExternalReferenceMeasureFeatureMethodType::ExternalReferenceMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
  ExternalFileReferences = 0;
}

ExternalReferenceMeasureFeatureMethodType::ExternalReferenceMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 ExternalFileReferencesType * ExternalFileReferencesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
  ExternalFileReferences = ExternalFileReferencesIn;
}

ExternalReferenceMeasureFeatureMethodType::ExternalReferenceMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 ExternalFileReferencesType * ExternalFileReferencesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
  ExternalFileReferences = ExternalFileReferencesIn;
}

ExternalReferenceMeasureFeatureMethodType::~ExternalReferenceMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  delete ExternalFileReferences;
  #endif
}

void ExternalReferenceMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (ExternalFileReferences)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ExternalFileReferences");
      ExternalFileReferences->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ExternalFileReferences>\n");
    }
  doSpaces(-INDENT, outFile);
}

bool ExternalReferenceMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in ExternalReferenceMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ExternalReferenceMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ExternalReferenceMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ExternalReferenceMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

ExternalFileReferencesType * ExternalReferenceMeasureFeatureMethodType::getExternalFileReferences()
{return ExternalFileReferences;}

void ExternalReferenceMeasureFeatureMethodType::setExternalFileReferences(ExternalFileReferencesType * ExternalFileReferencesIn)
{ExternalFileReferences = ExternalFileReferencesIn;}

/*********************************************************************/

/* class GageMeasureFeatureMethodType

*/

GageMeasureFeatureMethodType::GageMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

GageMeasureFeatureMethodType::GageMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

GageMeasureFeatureMethodType::GageMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

GageMeasureFeatureMethodType::~GageMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void GageMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool GageMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in GageMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in GageMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in GageMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in GageMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class HaltActionType

*/

HaltActionType::HaltActionType() :
  ActionBaseType() {}

HaltActionType::HaltActionType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 QIFReferenceType * PreferredActionMethodIdIn,
 ArrayReferenceType * AlternativeActionMethodIdsIn,
 ArrayReferenceType * PreferredResourceIdsIn) :
  ActionBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    PreferredActionMethodIdIn,
    AlternativeActionMethodIdsIn,
    PreferredResourceIdsIn)
{
}

HaltActionType::~HaltActionType() {}

void HaltActionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (PreferredActionMethodId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredActionMethodId");
      PreferredActionMethodId->printSelf(outFile);
      fprintf(outFile, "</PreferredActionMethodId>\n");
    }
  if (AlternativeActionMethodIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlternativeActionMethodIds");
      AlternativeActionMethodIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlternativeActionMethodIds>\n");
    }
  if (PreferredResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredResourceIds");
      PreferredResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreferredResourceIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class IfActionGroupType

*/

IfActionGroupType::IfActionGroupType() :
  ActionGroupBaseType()
{
  If = 0;
  ElseIf = 0;
  ElseDo = 0;
}

IfActionGroupType::IfActionGroupType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
 TestAndPlanElementType * IfIn,
 TestAndPlanElementTypeLisd * ElseIfIn,
 ElseDoType * ElseDoIn) :
  ActionGroupBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    MeasureActionGroupFunctionIn)
{
  If = IfIn;
  ElseIf = ElseIfIn;
  ElseDo = ElseDoIn;
}

IfActionGroupType::~IfActionGroupType()
{
  #ifndef NODESTRUCT
  delete If;
  delete ElseIf;
  delete ElseDo;
  #endif
}

void IfActionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<If");
  If->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</If>\n");
  {
    if (!ElseIf)
      {
        ElseIf = new TestAndPlanElementTypeLisd;
      }
    std::list<TestAndPlanElementType *>::iterator iter;
    for (iter = ElseIf->begin();
         iter != ElseIf->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<ElseIf");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</ElseIf>\n");
      }
  }
  if (ElseDo)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ElseDo");
      ElseDo->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ElseDo>\n");
    }
  doSpaces(-INDENT, outFile);
}

TestAndPlanElementType * IfActionGroupType::getIf()
{return If;}

void IfActionGroupType::setIf(TestAndPlanElementType * IfIn)
{If = IfIn;}

TestAndPlanElementTypeLisd * IfActionGroupType::getElseIf()
{return ElseIf;}

void IfActionGroupType::setElseIf(TestAndPlanElementTypeLisd * ElseIfIn)
{ElseIf = ElseIfIn;}

ElseDoType * IfActionGroupType::getElseDo()
{return ElseDo;}

void IfActionGroupType::setElseDo(ElseDoType * ElseDoIn)
{ElseDo = ElseDoIn;}

/*********************************************************************/

/* class ImageInstructionType

*/

ImageInstructionType::ImageInstructionType() :
  WorkInstructionBaseType()
{
  ExternalFile = 0;
}

ImageInstructionType::ImageInstructionType(
 AttributesType * AttributesIn,
 ExternalFileReferenceType * ExternalFileIn) :
  WorkInstructionBaseType(
    AttributesIn)
{
  ExternalFile = ExternalFileIn;
}

ImageInstructionType::ImageInstructionType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ExternalFileReferenceType * ExternalFileIn) :
  WorkInstructionBaseType(
    idIn,
    AttributesIn)
{
  ExternalFile = ExternalFileIn;
}

ImageInstructionType::~ImageInstructionType()
{
  #ifndef NODESTRUCT
  delete ExternalFile;
  #endif
}

void ImageInstructionType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<ExternalFile");
  ExternalFile->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ExternalFile>\n");
  doSpaces(-INDENT, outFile);
}

bool ImageInstructionType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in ImageInstructionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ImageInstructionType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ImageInstructionType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ImageInstructionType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

ExternalFileReferenceType * ImageInstructionType::getExternalFile()
{return ExternalFile;}

void ImageInstructionType::setExternalFile(ExternalFileReferenceType * ExternalFileIn)
{ExternalFile = ExternalFileIn;}

/*********************************************************************/

/* class LaserRadarMeasureFeatureMethodType

*/

LaserRadarMeasureFeatureMethodType::LaserRadarMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

LaserRadarMeasureFeatureMethodType::LaserRadarMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

LaserRadarMeasureFeatureMethodType::LaserRadarMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

LaserRadarMeasureFeatureMethodType::~LaserRadarMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void LaserRadarMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool LaserRadarMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in LaserRadarMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LaserRadarMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LaserRadarMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in LaserRadarMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class LaserTrackerMeasureFeatureMethodType

*/

LaserTrackerMeasureFeatureMethodType::LaserTrackerMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

LaserTrackerMeasureFeatureMethodType::LaserTrackerMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

LaserTrackerMeasureFeatureMethodType::LaserTrackerMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

LaserTrackerMeasureFeatureMethodType::~LaserTrackerMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void LaserTrackerMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool LaserTrackerMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in LaserTrackerMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in LaserTrackerMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LaserTrackerMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in LaserTrackerMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class LocalVariablesType

*/

LocalVariablesType::LocalVariablesType()
{
  n = 0;
  Variable = 0;
}

LocalVariablesType::LocalVariablesType(
 VariableDeclarationTypeLisd * VariableIn)
{
  n = 0;
  Variable = VariableIn;
}

LocalVariablesType::LocalVariablesType(
 NaturalType * nIn,
 VariableDeclarationTypeLisd * VariableIn)
{
  n = nIn;
  Variable = VariableIn;
}

LocalVariablesType::~LocalVariablesType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Variable;
  #endif
}

void LocalVariablesType::printSelf(FILE * outFile)
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
    if (!Variable)
      {
        fprintf(stderr, "Variable list is missing\n");
        exit(1);
      }
    if (Variable->size() == 0)
      {
        fprintf(stderr, "Variable list is empty\n");
        exit(1);
      }
    std::list<VariableDeclarationType *>::iterator iter;
    for (iter = Variable->begin();
         iter != Variable->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Variable");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</Variable>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool LocalVariablesType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in LocalVariablesType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in LocalVariablesType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in LocalVariablesType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in LocalVariablesType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * LocalVariablesType::getn()
{return n;}

void LocalVariablesType::setn(NaturalType * nIn)
{n = nIn;}

VariableDeclarationTypeLisd * LocalVariablesType::getVariable()
{return Variable;}

void LocalVariablesType::setVariable(VariableDeclarationTypeLisd * VariableIn)
{Variable = VariableIn;}

/*********************************************************************/

/* class ManualMeasureFeatureMethodType

*/

ManualMeasureFeatureMethodType::ManualMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

ManualMeasureFeatureMethodType::ManualMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

ManualMeasureFeatureMethodType::ManualMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

ManualMeasureFeatureMethodType::~ManualMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void ManualMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool ManualMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in ManualMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ManualMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ManualMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ManualMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class MeasurandBaseType

*/

MeasurandBaseType::MeasurandBaseType()
{
  id = 0;
  Attributes = 0;
}

MeasurandBaseType::MeasurandBaseType(
 AttributesType * AttributesIn)
{
  id = 0;
  Attributes = AttributesIn;
}

MeasurandBaseType::MeasurandBaseType(
 QIFIdType * idIn,
 AttributesType * AttributesIn)
{
  id = idIn;
  Attributes = AttributesIn;
}

MeasurandBaseType::~MeasurandBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  #endif
}

void MeasurandBaseType::printSelf(FILE * outFile)
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
  doSpaces(-INDENT, outFile);
}

bool MeasurandBaseType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in MeasurandBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MeasurandBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasurandBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in MeasurandBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

QIFIdType * MeasurandBaseType::getid()
{return id;}

void MeasurandBaseType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * MeasurandBaseType::getAttributes()
{return Attributes;}

void MeasurandBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/*********************************************************************/

/* class MeasurandBaseTypeLisd

*/

MeasurandBaseTypeLisd::MeasurandBaseTypeLisd() {}

MeasurandBaseTypeLisd::MeasurandBaseTypeLisd(MeasurandBaseType * aMeasurandBaseType)
{
  push_back(aMeasurandBaseType);
}

MeasurandBaseTypeLisd::~MeasurandBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<MeasurandBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void MeasurandBaseTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class MeasurandsType

*/

MeasurandsType::MeasurandsType()
{
  n = 0;
  Measurand = 0;
}

MeasurandsType::MeasurandsType(
 MeasurandBaseTypeLisd * MeasurandIn)
{
  n = 0;
  Measurand = MeasurandIn;
}

MeasurandsType::MeasurandsType(
 NaturalType * nIn,
 MeasurandBaseTypeLisd * MeasurandIn)
{
  n = nIn;
  Measurand = MeasurandIn;
}

MeasurandsType::~MeasurandsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Measurand;
  #endif
}

void MeasurandsType::printSelf(FILE * outFile)
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
    if (!Measurand)
      {
        fprintf(stderr, "Measurand list is missing\n");
        exit(1);
      }
    if (Measurand->size() == 0)
      {
        fprintf(stderr, "Measurand list is empty\n");
        exit(1);
      }
    std::list<MeasurandBaseType *>::iterator iter;
    for (iter = Measurand->begin();
         iter != Measurand->end(); iter++)
      {
        MeasurandBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "EvaluateCharacteristicMeasurand") == 0)
          {
            EvaluateCharacteristicMeasurandType * typ;
            if ((typ = dynamic_cast<EvaluateCharacteristicMeasurandType *>(basie)))
              {
                fprintf(outFile, "<EvaluateCharacteristicMeasurand");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</EvaluateCharacteristicMeasurand>\n");
              }
            else
              {
                fprintf(stderr, "bad EvaluateCharacteristicMeasurand element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "EstablishDatumMeasurand") == 0)
          {
            EstablishDatumMeasurandType * typ;
            if ((typ = dynamic_cast<EstablishDatumMeasurandType *>(basie)))
              {
                fprintf(outFile, "<EstablishDatumMeasurand");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</EstablishDatumMeasurand>\n");
              }
            else
              {
                fprintf(stderr, "bad EstablishDatumMeasurand element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad Measurand type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool MeasurandsType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in MeasurandsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in MeasurandsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasurandsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in MeasurandsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * MeasurandsType::getn()
{return n;}

void MeasurandsType::setn(NaturalType * nIn)
{n = nIn;}

MeasurandBaseTypeLisd * MeasurandsType::getMeasurand()
{return Measurand;}

void MeasurandsType::setMeasurand(MeasurandBaseTypeLisd * MeasurandIn)
{Measurand = MeasurandIn;}

/*********************************************************************/

/* class MeasureActionGroupFunctionEnumType

*/

MeasureActionGroupFunctionEnumType::MeasureActionGroupFunctionEnumType() :
  XmlNMTOKEN()
{
}

MeasureActionGroupFunctionEnumType::MeasureActionGroupFunctionEnumType(
 const char * valIn) :
  XmlNMTOKEN(
    valIn)
{
  if (!bad)
    bad = (strcmp(val.c_str(), "ROUTING_PLAN") &&
           strcmp(val.c_str(), "OPERATION_SEQUENCE") &&
           strcmp(val.c_str(), "SETUP_USAGE_GROUP") &&
           strcmp(val.c_str(), "SENSOR_USAGE_GROUP") &&
           strcmp(val.c_str(), "CARRIAGE_USAGE_GROUP") &&
           strcmp(val.c_str(), "PCS_USAGE_GROUP") &&
           strcmp(val.c_str(), "EVALUATE_CHAR_ACTIONS") &&
           strcmp(val.c_str(), "ESTABLISH_DATUM_ACTIONS") &&
           strcmp(val.c_str(), "UNDEFINED"));
}

MeasureActionGroupFunctionEnumType::~MeasureActionGroupFunctionEnumType() {}

bool MeasureActionGroupFunctionEnumType::MeasureActionGroupFunctionEnumTypeIsBad()
{
  return (strcmp(val.c_str(), "ROUTING_PLAN") &&
          strcmp(val.c_str(), "OPERATION_SEQUENCE") &&
          strcmp(val.c_str(), "SETUP_USAGE_GROUP") &&
          strcmp(val.c_str(), "SENSOR_USAGE_GROUP") &&
          strcmp(val.c_str(), "CARRIAGE_USAGE_GROUP") &&
          strcmp(val.c_str(), "PCS_USAGE_GROUP") &&
          strcmp(val.c_str(), "EVALUATE_CHAR_ACTIONS") &&
          strcmp(val.c_str(), "ESTABLISH_DATUM_ACTIONS") &&
          strcmp(val.c_str(), "UNDEFINED"));
}

void MeasureActionGroupFunctionEnumType::printName(FILE * outFile)
{
  fprintf(outFile, "MeasureActionGroupFunctionEnumType");
}

void MeasureActionGroupFunctionEnumType::printSelf(FILE * outFile)
{
  if (MeasureActionGroupFunctionEnumTypeIsBad())
    {
      fprintf(stderr, "bad MeasureActionGroupFunctionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::printSelf(outFile);
}

void MeasureActionGroupFunctionEnumType::oPrintSelf(FILE * outFile)
{
  if (MeasureActionGroupFunctionEnumTypeIsBad())
    {
      fprintf(stderr, "bad MeasureActionGroupFunctionEnumType value, ");
      XmlNMTOKEN::printBad(stderr);
      fprintf(stderr, " exiting\n");
      exit(1);
    }
  XmlNMTOKEN::oPrintSelf(outFile);
}

/*********************************************************************/

/* class MeasureActionGroupFunctionType

*/

MeasureActionGroupFunctionType::MeasureActionGroupFunctionType()
{
  MeasureActionGroupFunctionTypePair = 0;
}

MeasureActionGroupFunctionType::MeasureActionGroupFunctionType(
 MeasureActionGroupFunctionTypeChoicePair * MeasureActionGroupFunctionTypePairIn)
{
  MeasureActionGroupFunctionTypePair = MeasureActionGroupFunctionTypePairIn;
}

MeasureActionGroupFunctionType::~MeasureActionGroupFunctionType()
{
  #ifndef NODESTRUCT
  delete MeasureActionGroupFunctionTypePair;
  #endif
}

void MeasureActionGroupFunctionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  MeasureActionGroupFunctionTypePair->printSelf(outFile);
  doSpaces(-INDENT, outFile);
}

MeasureActionGroupFunctionTypeChoicePair * MeasureActionGroupFunctionType::getMeasureActionGroupFunctionTypePair()
{return MeasureActionGroupFunctionTypePair;}

void MeasureActionGroupFunctionType::setMeasureActionGroupFunctionTypePair(MeasureActionGroupFunctionTypeChoicePair * MeasureActionGroupFunctionTypePairIn)
{MeasureActionGroupFunctionTypePair = MeasureActionGroupFunctionTypePairIn;}

/*********************************************************************/

/* class MeasureActionGroupFunctionTypeChoicePair

*/

MeasureActionGroupFunctionTypeChoicePair::MeasureActionGroupFunctionTypeChoicePair() {}

MeasureActionGroupFunctionTypeChoicePair::MeasureActionGroupFunctionTypeChoicePair(
 whichOne MeasureActionGroupFunctionTypeTypeIn,
 MeasureActionGroupFunctionTypeVal MeasureActionGroupFunctionTypeValueIn)
{
  MeasureActionGroupFunctionTypeType = MeasureActionGroupFunctionTypeTypeIn;
  MeasureActionGroupFunctionTypeValue = MeasureActionGroupFunctionTypeValueIn;
}

MeasureActionGroupFunctionTypeChoicePair::~MeasureActionGroupFunctionTypeChoicePair()
{
  #ifndef NODESTRUCT
  if (MeasureActionGroupFunctionTypeType == MeasureActionGroupFunctionEnumE)
    delete MeasureActionGroupFunctionTypeValue.MeasureActionGroupFunctionEnum;
  else if (MeasureActionGroupFunctionTypeType == OtherMeasureActionGroupFunctionE)
    delete MeasureActionGroupFunctionTypeValue.OtherMeasureActionGroupFunction;
  #endif
}

void MeasureActionGroupFunctionTypeChoicePair::printSelf(FILE * outFile)
{
  if (MeasureActionGroupFunctionTypeType == MeasureActionGroupFunctionEnumE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunctionEnum");
      MeasureActionGroupFunctionTypeValue.MeasureActionGroupFunctionEnum->printSelf(outFile);
      fprintf(outFile, "</MeasureActionGroupFunctionEnum>\n");
    }
  else if (MeasureActionGroupFunctionTypeType == OtherMeasureActionGroupFunctionE)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<OtherMeasureActionGroupFunction");
      MeasureActionGroupFunctionTypeValue.OtherMeasureActionGroupFunction->printSelf(outFile);
      fprintf(outFile, "</OtherMeasureActionGroupFunction>\n");
    }
}

/*********************************************************************/

/* class MeasureEvaluateAllActionType

*/

MeasureEvaluateAllActionType::MeasureEvaluateAllActionType() :
  ActionBaseType() {}

MeasureEvaluateAllActionType::MeasureEvaluateAllActionType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 QIFReferenceType * PreferredActionMethodIdIn,
 ArrayReferenceType * AlternativeActionMethodIdsIn,
 ArrayReferenceType * PreferredResourceIdsIn) :
  ActionBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    PreferredActionMethodIdIn,
    AlternativeActionMethodIdsIn,
    PreferredResourceIdsIn)
{
}

MeasureEvaluateAllActionType::~MeasureEvaluateAllActionType() {}

void MeasureEvaluateAllActionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (PreferredActionMethodId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredActionMethodId");
      PreferredActionMethodId->printSelf(outFile);
      fprintf(outFile, "</PreferredActionMethodId>\n");
    }
  if (AlternativeActionMethodIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlternativeActionMethodIds");
      AlternativeActionMethodIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlternativeActionMethodIds>\n");
    }
  if (PreferredResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredResourceIds");
      PreferredResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreferredResourceIds>\n");
    }
  doSpaces(-INDENT, outFile);
}

/*********************************************************************/

/* class MeasureEvaluateSpecifiedActionType

*/

MeasureEvaluateSpecifiedActionType::MeasureEvaluateSpecifiedActionType() :
  ActionBaseType()
{
  CharacteristicItemIds = 0;
}

MeasureEvaluateSpecifiedActionType::MeasureEvaluateSpecifiedActionType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 QIFReferenceType * PreferredActionMethodIdIn,
 ArrayReferenceType * AlternativeActionMethodIdsIn,
 ArrayReferenceType * PreferredResourceIdsIn,
 ArrayReferenceType * CharacteristicItemIdsIn) :
  ActionBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    PreferredActionMethodIdIn,
    AlternativeActionMethodIdsIn,
    PreferredResourceIdsIn)
{
  CharacteristicItemIds = CharacteristicItemIdsIn;
}

MeasureEvaluateSpecifiedActionType::~MeasureEvaluateSpecifiedActionType()
{
  #ifndef NODESTRUCT
  delete CharacteristicItemIds;
  #endif
}

void MeasureEvaluateSpecifiedActionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (PreferredActionMethodId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredActionMethodId");
      PreferredActionMethodId->printSelf(outFile);
      fprintf(outFile, "</PreferredActionMethodId>\n");
    }
  if (AlternativeActionMethodIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlternativeActionMethodIds");
      AlternativeActionMethodIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlternativeActionMethodIds>\n");
    }
  if (PreferredResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredResourceIds");
      PreferredResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreferredResourceIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<CharacteristicItemIds");
  CharacteristicItemIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</CharacteristicItemIds>\n");
  doSpaces(-INDENT, outFile);
}

ArrayReferenceType * MeasureEvaluateSpecifiedActionType::getCharacteristicItemIds()
{return CharacteristicItemIds;}

void MeasureEvaluateSpecifiedActionType::setCharacteristicItemIds(ArrayReferenceType * CharacteristicItemIdsIn)
{CharacteristicItemIds = CharacteristicItemIdsIn;}

/*********************************************************************/

/* class MeasureFeatureMethodBaseType

*/

MeasureFeatureMethodBaseType::MeasureFeatureMethodBaseType() :
  ActionMethodBaseType()
{
}

MeasureFeatureMethodBaseType::MeasureFeatureMethodBaseType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  ActionMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

MeasureFeatureMethodBaseType::MeasureFeatureMethodBaseType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  ActionMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

MeasureFeatureMethodBaseType::~MeasureFeatureMethodBaseType()
{
  #ifndef NODESTRUCT
  #endif
}

void MeasureFeatureMethodBaseType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool MeasureFeatureMethodBaseType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in MeasureFeatureMethodBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MeasureFeatureMethodBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MeasureFeatureMethodBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in MeasureFeatureMethodBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class MeasureSpecifiedFeaturesActionType

*/

MeasureSpecifiedFeaturesActionType::MeasureSpecifiedFeaturesActionType() :
  ActionBaseType()
{
  FeatureItemIds = 0;
}

MeasureSpecifiedFeaturesActionType::MeasureSpecifiedFeaturesActionType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 QIFReferenceType * PreferredActionMethodIdIn,
 ArrayReferenceType * AlternativeActionMethodIdsIn,
 ArrayReferenceType * PreferredResourceIdsIn,
 ArrayReferenceType * FeatureItemIdsIn) :
  ActionBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    PreferredActionMethodIdIn,
    AlternativeActionMethodIdsIn,
    PreferredResourceIdsIn)
{
  FeatureItemIds = FeatureItemIdsIn;
}

MeasureSpecifiedFeaturesActionType::~MeasureSpecifiedFeaturesActionType()
{
  #ifndef NODESTRUCT
  delete FeatureItemIds;
  #endif
}

void MeasureSpecifiedFeaturesActionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (PreferredActionMethodId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredActionMethodId");
      PreferredActionMethodId->printSelf(outFile);
      fprintf(outFile, "</PreferredActionMethodId>\n");
    }
  if (AlternativeActionMethodIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlternativeActionMethodIds");
      AlternativeActionMethodIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlternativeActionMethodIds>\n");
    }
  if (PreferredResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredResourceIds");
      PreferredResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreferredResourceIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<FeatureItemIds");
  FeatureItemIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</FeatureItemIds>\n");
  doSpaces(-INDENT, outFile);
}

ArrayReferenceType * MeasureSpecifiedFeaturesActionType::getFeatureItemIds()
{return FeatureItemIds;}

void MeasureSpecifiedFeaturesActionType::setFeatureItemIds(ArrayReferenceType * FeatureItemIdsIn)
{FeatureItemIds = FeatureItemIdsIn;}

/*********************************************************************/

/* class MeasureSpecifiedMeasurandsActionType

*/

MeasureSpecifiedMeasurandsActionType::MeasureSpecifiedMeasurandsActionType() :
  ActionBaseType()
{
  MeasurandIds = 0;
}

MeasureSpecifiedMeasurandsActionType::MeasureSpecifiedMeasurandsActionType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 QIFReferenceType * PreferredActionMethodIdIn,
 ArrayReferenceType * AlternativeActionMethodIdsIn,
 ArrayReferenceType * PreferredResourceIdsIn,
 ArrayReferenceType * MeasurandIdsIn) :
  ActionBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    PreferredActionMethodIdIn,
    AlternativeActionMethodIdsIn,
    PreferredResourceIdsIn)
{
  MeasurandIds = MeasurandIdsIn;
}

MeasureSpecifiedMeasurandsActionType::~MeasureSpecifiedMeasurandsActionType()
{
  #ifndef NODESTRUCT
  delete MeasurandIds;
  #endif
}

void MeasureSpecifiedMeasurandsActionType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (PreferredActionMethodId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredActionMethodId");
      PreferredActionMethodId->printSelf(outFile);
      fprintf(outFile, "</PreferredActionMethodId>\n");
    }
  if (AlternativeActionMethodIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<AlternativeActionMethodIds");
      AlternativeActionMethodIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</AlternativeActionMethodIds>\n");
    }
  if (PreferredResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<PreferredResourceIds");
      PreferredResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</PreferredResourceIds>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<MeasurandIds");
  MeasurandIds->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</MeasurandIds>\n");
  doSpaces(-INDENT, outFile);
}

ArrayReferenceType * MeasureSpecifiedMeasurandsActionType::getMeasurandIds()
{return MeasurandIds;}

void MeasureSpecifiedMeasurandsActionType::setMeasurandIds(ArrayReferenceType * MeasurandIdsIn)
{MeasurandIds = MeasurandIdsIn;}

/*********************************************************************/

/* class MicroscopeMeasureFeatureMethodType

*/

MicroscopeMeasureFeatureMethodType::MicroscopeMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

MicroscopeMeasureFeatureMethodType::MicroscopeMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

MicroscopeMeasureFeatureMethodType::MicroscopeMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

MicroscopeMeasureFeatureMethodType::~MicroscopeMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void MicroscopeMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool MicroscopeMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in MicroscopeMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in MicroscopeMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in MicroscopeMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in MicroscopeMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class NumberedPlanElementType

*/

NumberedPlanElementType::NumberedPlanElementType()
{
  SequenceNumber = 0;
  PlanElement = 0;
}

NumberedPlanElementType::NumberedPlanElementType(
 XmlPositiveInteger * SequenceNumberIn,
 PlanElementBaseType * PlanElementIn)
{
  SequenceNumber = SequenceNumberIn;
  PlanElement = PlanElementIn;
}

NumberedPlanElementType::~NumberedPlanElementType()
{
  #ifndef NODESTRUCT
  delete SequenceNumber;
  delete PlanElement;
  #endif
}

void NumberedPlanElementType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<SequenceNumber");
  SequenceNumber->printSelf(outFile);
  fprintf(outFile, "</SequenceNumber>\n");
  {
    doSpaces(0, outFile);
    if (PlanElement->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(PlanElement->printElement, "OrderedActionGroup") == 0)
      {
        OrderedActionGroupType * typ;
        if ((typ = dynamic_cast<OrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "UnorderedActionGroup") == 0)
      {
        UnorderedActionGroupType * typ;
        if ((typ = dynamic_cast<UnorderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<UnorderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</UnorderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad UnorderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PartiallyOrderedActionGroup") == 0)
      {
        PartiallyOrderedActionGroupType * typ;
        if ((typ = dynamic_cast<PartiallyOrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PartiallyOrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PartiallyOrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PartiallyOrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "OneOfActionGroup") == 0)
      {
        OneOfActionGroupType * typ;
        if ((typ = dynamic_cast<OneOfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OneOfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OneOfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OneOfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PickSomeActionGroup") == 0)
      {
        PickSomeActionGroupType * typ;
        if ((typ = dynamic_cast<PickSomeActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PickSomeActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PickSomeActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PickSomeActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateAll") == 0)
      {
        MeasureEvaluateAllActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateAllActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateAll");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateAll>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateAll element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateSpecified") == 0)
      {
        MeasureEvaluateSpecifiedActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateSpecifiedActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateSpecified");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateSpecified>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateSpecified element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "EvaluateSpecifiedCharacteristics") == 0)
      {
        EvaluateSpecifiedCharacteristicsActionType * typ;
        if ((typ = dynamic_cast<EvaluateSpecifiedCharacteristicsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<EvaluateSpecifiedCharacteristics");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</EvaluateSpecifiedCharacteristics>\n");
          }
        else
          {
            fprintf(stderr, "bad EvaluateSpecifiedCharacteristics element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "Halt") == 0)
      {
        HaltActionType * typ;
        if ((typ = dynamic_cast<HaltActionType *>(PlanElement)))
          {
            fprintf(outFile, "<Halt");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Halt>\n");
          }
        else
          {
            fprintf(stderr, "bad Halt element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedFeatures") == 0)
      {
        MeasureSpecifiedFeaturesActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedFeaturesActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedFeatures");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedFeatures>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedFeatures element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedMeasurands") == 0)
      {
        MeasureSpecifiedMeasurandsActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedMeasurandsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedMeasurands");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedMeasurands>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedMeasurands element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "IfActionGroup") == 0)
      {
        IfActionGroupType * typ;
        if ((typ = dynamic_cast<IfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<IfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</IfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad IfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "WhileActionGroup") == 0)
      {
        WhileActionGroupType * typ;
        if ((typ = dynamic_cast<WhileActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<WhileActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</WhileActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad WhileActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "VariableSet") == 0)
      {
        VariableSetType * typ;
        if ((typ = dynamic_cast<VariableSetType *>(PlanElement)))
          {
            fprintf(outFile, "<VariableSet");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</VariableSet>\n");
          }
        else
          {
            fprintf(stderr, "bad VariableSet element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad PlanElement type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

XmlPositiveInteger * NumberedPlanElementType::getSequenceNumber()
{return SequenceNumber;}

void NumberedPlanElementType::setSequenceNumber(XmlPositiveInteger * SequenceNumberIn)
{SequenceNumber = SequenceNumberIn;}

PlanElementBaseType * NumberedPlanElementType::getPlanElement()
{return PlanElement;}

void NumberedPlanElementType::setPlanElement(PlanElementBaseType * PlanElementIn)
{PlanElement = PlanElementIn;}

/*********************************************************************/

/* class NumberedPlanElementTypeLisd

*/

NumberedPlanElementTypeLisd::NumberedPlanElementTypeLisd() {}

NumberedPlanElementTypeLisd::NumberedPlanElementTypeLisd(NumberedPlanElementType * aNumberedPlanElementType)
{
  push_back(aNumberedPlanElementType);
}

NumberedPlanElementTypeLisd::~NumberedPlanElementTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<NumberedPlanElementType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void NumberedPlanElementTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class NumberedPlanElementsType

*/

NumberedPlanElementsType::NumberedPlanElementsType()
{
  n = 0;
  NumberedPlanElement = 0;
}

NumberedPlanElementsType::NumberedPlanElementsType(
 NumberedPlanElementTypeLisd * NumberedPlanElementIn)
{
  n = 0;
  NumberedPlanElement = NumberedPlanElementIn;
}

NumberedPlanElementsType::NumberedPlanElementsType(
 NaturalType * nIn,
 NumberedPlanElementTypeLisd * NumberedPlanElementIn)
{
  n = nIn;
  NumberedPlanElement = NumberedPlanElementIn;
}

NumberedPlanElementsType::~NumberedPlanElementsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete NumberedPlanElement;
  #endif
}

void NumberedPlanElementsType::printSelf(FILE * outFile)
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
    if (!NumberedPlanElement)
      {
        fprintf(stderr, "NumberedPlanElement list is missing\n");
        exit(1);
      }
    if (NumberedPlanElement->size() == 0)
      {
        fprintf(stderr, "NumberedPlanElement list is empty\n");
        exit(1);
      }
    std::list<NumberedPlanElementType *>::iterator iter;
    for (iter = NumberedPlanElement->begin();
         iter != NumberedPlanElement->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<NumberedPlanElement");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</NumberedPlanElement>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool NumberedPlanElementsType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in NumberedPlanElementsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in NumberedPlanElementsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in NumberedPlanElementsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in NumberedPlanElementsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * NumberedPlanElementsType::getn()
{return n;}

void NumberedPlanElementsType::setn(NaturalType * nIn)
{n = nIn;}

NumberedPlanElementTypeLisd * NumberedPlanElementsType::getNumberedPlanElement()
{return NumberedPlanElement;}

void NumberedPlanElementsType::setNumberedPlanElement(NumberedPlanElementTypeLisd * NumberedPlanElementIn)
{NumberedPlanElement = NumberedPlanElementIn;}

/*********************************************************************/

/* class OneOfActionGroupType

*/

OneOfActionGroupType::OneOfActionGroupType() :
  ActionGroupBaseType()
{
  Steps = 0;
}

OneOfActionGroupType::OneOfActionGroupType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
 NumberedPlanElementsType * StepsIn) :
  ActionGroupBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    MeasureActionGroupFunctionIn)
{
  Steps = StepsIn;
}

OneOfActionGroupType::~OneOfActionGroupType()
{
  #ifndef NODESTRUCT
  delete Steps;
  #endif
}

void OneOfActionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Steps");
  Steps->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Steps>\n");
  doSpaces(-INDENT, outFile);
}

NumberedPlanElementsType * OneOfActionGroupType::getSteps()
{return Steps;}

void OneOfActionGroupType::setSteps(NumberedPlanElementsType * StepsIn)
{Steps = StepsIn;}

/*********************************************************************/

/* class OrderedActionGroupType

*/

OrderedActionGroupType::OrderedActionGroupType() :
  ActionGroupBaseType()
{
  Steps = 0;
}

OrderedActionGroupType::OrderedActionGroupType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
 NumberedPlanElementsType * StepsIn) :
  ActionGroupBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    MeasureActionGroupFunctionIn)
{
  Steps = StepsIn;
}

OrderedActionGroupType::~OrderedActionGroupType()
{
  #ifndef NODESTRUCT
  delete Steps;
  #endif
}

void OrderedActionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Steps");
  Steps->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Steps>\n");
  doSpaces(-INDENT, outFile);
}

NumberedPlanElementsType * OrderedActionGroupType::getSteps()
{return Steps;}

void OrderedActionGroupType::setSteps(NumberedPlanElementsType * StepsIn)
{Steps = StepsIn;}

/*********************************************************************/

/* class OtherMeasureFeatureMethodType

*/

OtherMeasureFeatureMethodType::OtherMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

OtherMeasureFeatureMethodType::OtherMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

OtherMeasureFeatureMethodType::OtherMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

OtherMeasureFeatureMethodType::~OtherMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void OtherMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool OtherMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in OtherMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in OtherMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in OtherMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in OtherMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class PartiallyOrderedActionGroupType

*/

PartiallyOrderedActionGroupType::PartiallyOrderedActionGroupType() :
  ActionGroupBaseType()
{
  StepsWithPredecessors = 0;
}

PartiallyOrderedActionGroupType::PartiallyOrderedActionGroupType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
 StepsWithPredecessorsType * StepsWithPredecessorsIn) :
  ActionGroupBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    MeasureActionGroupFunctionIn)
{
  StepsWithPredecessors = StepsWithPredecessorsIn;
}

PartiallyOrderedActionGroupType::~PartiallyOrderedActionGroupType()
{
  #ifndef NODESTRUCT
  delete StepsWithPredecessors;
  #endif
}

void PartiallyOrderedActionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<StepsWithPredecessors");
  StepsWithPredecessors->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</StepsWithPredecessors>\n");
  doSpaces(-INDENT, outFile);
}

StepsWithPredecessorsType * PartiallyOrderedActionGroupType::getStepsWithPredecessors()
{return StepsWithPredecessors;}

void PartiallyOrderedActionGroupType::setStepsWithPredecessors(StepsWithPredecessorsType * StepsWithPredecessorsIn)
{StepsWithPredecessors = StepsWithPredecessorsIn;}

/*********************************************************************/

/* class PickSomeActionGroupType

*/

PickSomeActionGroupType::PickSomeActionGroupType() :
  ActionGroupBaseType()
{
  Steps = 0;
  NumberOfSteps = 0;
}

PickSomeActionGroupType::PickSomeActionGroupType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
 UnnumberedPlanElementsType * StepsIn,
 XmlPositiveInteger * NumberOfStepsIn) :
  ActionGroupBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    MeasureActionGroupFunctionIn)
{
  Steps = StepsIn;
  NumberOfSteps = NumberOfStepsIn;
}

PickSomeActionGroupType::~PickSomeActionGroupType()
{
  #ifndef NODESTRUCT
  delete Steps;
  delete NumberOfSteps;
  #endif
}

void PickSomeActionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Steps");
  Steps->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Steps>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<NumberOfSteps");
  NumberOfSteps->printSelf(outFile);
  fprintf(outFile, "</NumberOfSteps>\n");
  doSpaces(-INDENT, outFile);
}

UnnumberedPlanElementsType * PickSomeActionGroupType::getSteps()
{return Steps;}

void PickSomeActionGroupType::setSteps(UnnumberedPlanElementsType * StepsIn)
{Steps = StepsIn;}

XmlPositiveInteger * PickSomeActionGroupType::getNumberOfSteps()
{return NumberOfSteps;}

void PickSomeActionGroupType::setNumberOfSteps(XmlPositiveInteger * NumberOfStepsIn)
{NumberOfSteps = NumberOfStepsIn;}

/*********************************************************************/

/* class PlanElementBaseType

*/

PlanElementBaseType::PlanElementBaseType()
{
  WorkInstructionIds = 0;
  Attributes = 0;
}

PlanElementBaseType::PlanElementBaseType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn)
{
  WorkInstructionIds = WorkInstructionIdsIn;
  Attributes = AttributesIn;
}

PlanElementBaseType::~PlanElementBaseType()
{
  #ifndef NODESTRUCT
  delete WorkInstructionIds;
  delete Attributes;
  #endif
}

void PlanElementBaseType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

ArrayReferenceType * PlanElementBaseType::getWorkInstructionIds()
{return WorkInstructionIds;}

void PlanElementBaseType::setWorkInstructionIds(ArrayReferenceType * WorkInstructionIdsIn)
{WorkInstructionIds = WorkInstructionIdsIn;}

AttributesType * PlanElementBaseType::getAttributes()
{return Attributes;}

void PlanElementBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/*********************************************************************/

/* class PlanElementBaseTypeLisd

*/

PlanElementBaseTypeLisd::PlanElementBaseTypeLisd() {}

PlanElementBaseTypeLisd::PlanElementBaseTypeLisd(PlanElementBaseType * aPlanElementBaseType)
{
  push_back(aPlanElementBaseType);
}

PlanElementBaseTypeLisd::~PlanElementBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<PlanElementBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void PlanElementBaseTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class PlanType

*/

PlanType::PlanType()
{
  Version = 0;
  RulesUsedQPId = 0;
  RulesToUseQPId = 0;
  WorkInstructions = 0;
  ActionMethods = 0;
  Measurands = 0;
  LocalVariables = 0;
  PlanRoot = 0;
}

PlanType::PlanType(
 VersionType * VersionIn,
 QPIdFullReferenceType * RulesUsedQPIdIn,
 QPIdFullReferenceType * RulesToUseQPIdIn,
 WorkInstructionsType * WorkInstructionsIn,
 ActionMethodsType * ActionMethodsIn,
 MeasurandsType * MeasurandsIn,
 LocalVariablesType * LocalVariablesIn,
 ActionGroupBaseType * PlanRootIn)
{
  Version = VersionIn;
  RulesUsedQPId = RulesUsedQPIdIn;
  RulesToUseQPId = RulesToUseQPIdIn;
  WorkInstructions = WorkInstructionsIn;
  ActionMethods = ActionMethodsIn;
  Measurands = MeasurandsIn;
  LocalVariables = LocalVariablesIn;
  PlanRoot = PlanRootIn;
}

PlanType::~PlanType()
{
  #ifndef NODESTRUCT
  delete Version;
  delete RulesUsedQPId;
  delete RulesToUseQPId;
  delete WorkInstructions;
  delete ActionMethods;
  delete Measurands;
  delete LocalVariables;
  delete PlanRoot;
  #endif
}

void PlanType::printSelf(FILE * outFile)
{
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
  if (RulesUsedQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RulesUsedQPId");
      RulesUsedQPId->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RulesUsedQPId>\n");
    }
  if (RulesToUseQPId)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<RulesToUseQPId");
      RulesToUseQPId->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</RulesToUseQPId>\n");
    }
  if (WorkInstructions)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructions");
      WorkInstructions->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructions>\n");
    }
  if (ActionMethods)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ActionMethods");
      ActionMethods->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ActionMethods>\n");
    }
  if (Measurands)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Measurands");
      Measurands->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Measurands>\n");
    }
  if (LocalVariables)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<LocalVariables");
      LocalVariables->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</LocalVariables>\n");
    }
  {
    doSpaces(0, outFile);
    if (PlanRoot->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(PlanRoot->printElement, "OrderedPlanRoot") == 0)
      {
        OrderedActionGroupType * typ;
        if ((typ = dynamic_cast<OrderedActionGroupType *>(PlanRoot)))
          {
            fprintf(outFile, "<OrderedPlanRoot");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OrderedPlanRoot>\n");
          }
        else
          {
            fprintf(stderr, "bad OrderedPlanRoot element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanRoot->printElement, "UnorderedPlanRoot") == 0)
      {
        UnorderedActionGroupType * typ;
        if ((typ = dynamic_cast<UnorderedActionGroupType *>(PlanRoot)))
          {
            fprintf(outFile, "<UnorderedPlanRoot");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</UnorderedPlanRoot>\n");
          }
        else
          {
            fprintf(stderr, "bad UnorderedPlanRoot element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanRoot->printElement, "PartiallyOrderedPlanRoot") == 0)
      {
        PartiallyOrderedActionGroupType * typ;
        if ((typ = dynamic_cast<PartiallyOrderedActionGroupType *>(PlanRoot)))
          {
            fprintf(outFile, "<PartiallyOrderedPlanRoot");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PartiallyOrderedPlanRoot>\n");
          }
        else
          {
            fprintf(stderr, "bad PartiallyOrderedPlanRoot element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanRoot->printElement, "OneOfPlanRoot") == 0)
      {
        OneOfActionGroupType * typ;
        if ((typ = dynamic_cast<OneOfActionGroupType *>(PlanRoot)))
          {
            fprintf(outFile, "<OneOfPlanRoot");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OneOfPlanRoot>\n");
          }
        else
          {
            fprintf(stderr, "bad OneOfPlanRoot element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanRoot->printElement, "PickSomePlanRoot") == 0)
      {
        PickSomeActionGroupType * typ;
        if ((typ = dynamic_cast<PickSomeActionGroupType *>(PlanRoot)))
          {
            fprintf(outFile, "<PickSomePlanRoot");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PickSomePlanRoot>\n");
          }
        else
          {
            fprintf(stderr, "bad PickSomePlanRoot element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad PlanRoot type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

VersionType * PlanType::getVersion()
{return Version;}

void PlanType::setVersion(VersionType * VersionIn)
{Version = VersionIn;}

QPIdFullReferenceType * PlanType::getRulesUsedQPId()
{return RulesUsedQPId;}

void PlanType::setRulesUsedQPId(QPIdFullReferenceType * RulesUsedQPIdIn)
{RulesUsedQPId = RulesUsedQPIdIn;}

QPIdFullReferenceType * PlanType::getRulesToUseQPId()
{return RulesToUseQPId;}

void PlanType::setRulesToUseQPId(QPIdFullReferenceType * RulesToUseQPIdIn)
{RulesToUseQPId = RulesToUseQPIdIn;}

WorkInstructionsType * PlanType::getWorkInstructions()
{return WorkInstructions;}

void PlanType::setWorkInstructions(WorkInstructionsType * WorkInstructionsIn)
{WorkInstructions = WorkInstructionsIn;}

ActionMethodsType * PlanType::getActionMethods()
{return ActionMethods;}

void PlanType::setActionMethods(ActionMethodsType * ActionMethodsIn)
{ActionMethods = ActionMethodsIn;}

MeasurandsType * PlanType::getMeasurands()
{return Measurands;}

void PlanType::setMeasurands(MeasurandsType * MeasurandsIn)
{Measurands = MeasurandsIn;}

LocalVariablesType * PlanType::getLocalVariables()
{return LocalVariables;}

void PlanType::setLocalVariables(LocalVariablesType * LocalVariablesIn)
{LocalVariables = LocalVariablesIn;}

ActionGroupBaseType * PlanType::getPlanRoot()
{return PlanRoot;}

void PlanType::setPlanRoot(ActionGroupBaseType * PlanRootIn)
{PlanRoot = PlanRootIn;}

/*********************************************************************/

/* class PredecessorsType

*/

PredecessorsType::PredecessorsType()
{
  n = 0;
  Predecessor = 0;
}

PredecessorsType::PredecessorsType(
 XmlPositiveIntegerLisd * PredecessorIn)
{
  n = 0;
  Predecessor = PredecessorIn;
}

PredecessorsType::PredecessorsType(
 NaturalType * nIn,
 XmlPositiveIntegerLisd * PredecessorIn)
{
  n = nIn;
  Predecessor = PredecessorIn;
}

PredecessorsType::~PredecessorsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete Predecessor;
  #endif
}

void PredecessorsType::printSelf(FILE * outFile)
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
    if (!Predecessor)
      {
        fprintf(stderr, "Predecessor list is missing\n");
        exit(1);
      }
    if (Predecessor->size() == 0)
      {
        fprintf(stderr, "Predecessor list is empty\n");
        exit(1);
      }
    std::list<XmlPositiveInteger *>::iterator iter;
    for (iter = Predecessor->begin();
         iter != Predecessor->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<Predecessor");
        (*iter)->printSelf(outFile);
        fprintf(outFile, "</Predecessor>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool PredecessorsType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in PredecessorsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in PredecessorsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in PredecessorsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in PredecessorsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * PredecessorsType::getn()
{return n;}

void PredecessorsType::setn(NaturalType * nIn)
{n = nIn;}

XmlPositiveIntegerLisd * PredecessorsType::getPredecessor()
{return Predecessor;}

void PredecessorsType::setPredecessor(XmlPositiveIntegerLisd * PredecessorIn)
{Predecessor = PredecessorIn;}

/*********************************************************************/

/* class ProfileProjectorMeasureFeatureMethodType

*/

ProfileProjectorMeasureFeatureMethodType::ProfileProjectorMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

ProfileProjectorMeasureFeatureMethodType::ProfileProjectorMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

ProfileProjectorMeasureFeatureMethodType::ProfileProjectorMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

ProfileProjectorMeasureFeatureMethodType::~ProfileProjectorMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void ProfileProjectorMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool ProfileProjectorMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in ProfileProjectorMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in ProfileProjectorMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in ProfileProjectorMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in ProfileProjectorMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class StepWithPredecessorsType

*/

StepWithPredecessorsType::StepWithPredecessorsType()
{
  Predecessors = 0;
  Step = 0;
}

StepWithPredecessorsType::StepWithPredecessorsType(
 PredecessorsType * PredecessorsIn,
 NumberedPlanElementType * StepIn)
{
  Predecessors = PredecessorsIn;
  Step = StepIn;
}

StepWithPredecessorsType::~StepWithPredecessorsType()
{
  #ifndef NODESTRUCT
  delete Predecessors;
  delete Step;
  #endif
}

void StepWithPredecessorsType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (Predecessors)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Predecessors");
      Predecessors->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Predecessors>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Step");
  Step->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Step>\n");
  doSpaces(-INDENT, outFile);
}

PredecessorsType * StepWithPredecessorsType::getPredecessors()
{return Predecessors;}

void StepWithPredecessorsType::setPredecessors(PredecessorsType * PredecessorsIn)
{Predecessors = PredecessorsIn;}

NumberedPlanElementType * StepWithPredecessorsType::getStep()
{return Step;}

void StepWithPredecessorsType::setStep(NumberedPlanElementType * StepIn)
{Step = StepIn;}

/*********************************************************************/

/* class StepWithPredecessorsTypeLisd

*/

StepWithPredecessorsTypeLisd::StepWithPredecessorsTypeLisd() {}

StepWithPredecessorsTypeLisd::StepWithPredecessorsTypeLisd(StepWithPredecessorsType * aStepWithPredecessorsType)
{
  push_back(aStepWithPredecessorsType);
}

StepWithPredecessorsTypeLisd::~StepWithPredecessorsTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<StepWithPredecessorsType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void StepWithPredecessorsTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class StepsWithPredecessorsType

*/

StepsWithPredecessorsType::StepsWithPredecessorsType()
{
  n = 0;
  StepWithPredecessors = 0;
}

StepsWithPredecessorsType::StepsWithPredecessorsType(
 StepWithPredecessorsTypeLisd * StepWithPredecessorsIn)
{
  n = 0;
  StepWithPredecessors = StepWithPredecessorsIn;
}

StepsWithPredecessorsType::StepsWithPredecessorsType(
 NaturalType * nIn,
 StepWithPredecessorsTypeLisd * StepWithPredecessorsIn)
{
  n = nIn;
  StepWithPredecessors = StepWithPredecessorsIn;
}

StepsWithPredecessorsType::~StepsWithPredecessorsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete StepWithPredecessors;
  #endif
}

void StepsWithPredecessorsType::printSelf(FILE * outFile)
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
    if (!StepWithPredecessors)
      {
        fprintf(stderr, "StepWithPredecessors list is missing\n");
        exit(1);
      }
    if (StepWithPredecessors->size() == 0)
      {
        fprintf(stderr, "StepWithPredecessors list is empty\n");
        exit(1);
      }
    std::list<StepWithPredecessorsType *>::iterator iter;
    for (iter = StepWithPredecessors->begin();
         iter != StepWithPredecessors->end(); iter++)
      {
        doSpaces(0, outFile);
        fprintf(outFile, "<StepWithPredecessors");
        (*iter)->printSelf(outFile);
        doSpaces(0, outFile);
        fprintf(outFile, "</StepWithPredecessors>\n");
      }
  }
  doSpaces(-INDENT, outFile);
}

bool StepsWithPredecessorsType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in StepsWithPredecessorsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in StepsWithPredecessorsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in StepsWithPredecessorsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in StepsWithPredecessorsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * StepsWithPredecessorsType::getn()
{return n;}

void StepsWithPredecessorsType::setn(NaturalType * nIn)
{n = nIn;}

StepWithPredecessorsTypeLisd * StepsWithPredecessorsType::getStepWithPredecessors()
{return StepWithPredecessors;}

void StepsWithPredecessorsType::setStepWithPredecessors(StepWithPredecessorsTypeLisd * StepWithPredecessorsIn)
{StepWithPredecessors = StepWithPredecessorsIn;}

/*********************************************************************/

/* class TestAndPlanElementType

*/

TestAndPlanElementType::TestAndPlanElementType()
{
  BooleanExpression = 0;
  PlanElement = 0;
}

TestAndPlanElementType::TestAndPlanElementType(
 BooleanExpressionBaseType * BooleanExpressionIn,
 PlanElementBaseType * PlanElementIn)
{
  BooleanExpression = BooleanExpressionIn;
  PlanElement = PlanElementIn;
}

TestAndPlanElementType::~TestAndPlanElementType()
{
  #ifndef NODESTRUCT
  delete BooleanExpression;
  delete PlanElement;
  #endif
}

void TestAndPlanElementType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  {
    doSpaces(0, outFile);
    if (BooleanExpression->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(BooleanExpression->printElement, "Not") == 0)
      {
        NotType * typ;
        if ((typ = dynamic_cast<NotType *>(BooleanExpression)))
          {
            fprintf(outFile, "<Not");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Not>\n");
          }
        else
          {
            fprintf(stderr, "bad Not element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ConstantIs") == 0)
      {
        ConstantIsType * typ;
        if ((typ = dynamic_cast<ConstantIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ConstantIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ConstantIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "And") == 0)
      {
        AndType * typ;
        if ((typ = dynamic_cast<AndType *>(BooleanExpression)))
          {
            fprintf(outFile, "<And");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</And>\n");
          }
        else
          {
            fprintf(stderr, "bad And element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "Or") == 0)
      {
        OrType * typ;
        if ((typ = dynamic_cast<OrType *>(BooleanExpression)))
          {
            fprintf(outFile, "<Or");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Or>\n");
          }
        else
          {
            fprintf(stderr, "bad Or element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "BooleanEqual") == 0)
      {
        BooleanEqualType * typ;
        if ((typ = dynamic_cast<BooleanEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<BooleanEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</BooleanEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad BooleanEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ArithmeticEqual") == 0)
      {
        ArithmeticEqualType * typ;
        if ((typ = dynamic_cast<ArithmeticEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ArithmeticEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "GreaterThan") == 0)
      {
        GreaterThanType * typ;
        if ((typ = dynamic_cast<GreaterThanType *>(BooleanExpression)))
          {
            fprintf(outFile, "<GreaterThan");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</GreaterThan>\n");
          }
        else
          {
            fprintf(stderr, "bad GreaterThan element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "GreaterOrEqual") == 0)
      {
        GreaterOrEqualType * typ;
        if ((typ = dynamic_cast<GreaterOrEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<GreaterOrEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</GreaterOrEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad GreaterOrEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "LessThan") == 0)
      {
        LessThanType * typ;
        if ((typ = dynamic_cast<LessThanType *>(BooleanExpression)))
          {
            fprintf(outFile, "<LessThan");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</LessThan>\n");
          }
        else
          {
            fprintf(stderr, "bad LessThan element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "LessOrEqual") == 0)
      {
        LessOrEqualType * typ;
        if ((typ = dynamic_cast<LessOrEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<LessOrEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</LessOrEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad LessOrEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "TokenEqual") == 0)
      {
        TokenEqualType * typ;
        if ((typ = dynamic_cast<TokenEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<TokenEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</TokenEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad TokenEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "CharacteristicIs") == 0)
      {
        CharacteristicIsType * typ;
        if ((typ = dynamic_cast<CharacteristicIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<CharacteristicIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad CharacteristicIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureIsDatum") == 0)
      {
        FeatureIsDatumType * typ;
        if ((typ = dynamic_cast<FeatureIsDatumType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureIsDatum");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureIsDatum element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureIsInternal") == 0)
      {
        FeatureIsInternalType * typ;
        if ((typ = dynamic_cast<FeatureIsInternalType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureIsInternal");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureIsInternal element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureTypeIs") == 0)
      {
        FeatureTypeIsType * typ;
        if ((typ = dynamic_cast<FeatureTypeIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureTypeIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureTypeIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "SamplingCategoryIs") == 0)
      {
        SamplingCategoryIsType * typ;
        if ((typ = dynamic_cast<SamplingCategoryIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<SamplingCategoryIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad SamplingCategoryIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ShapeClassIs") == 0)
      {
        ShapeClassIsType * typ;
        if ((typ = dynamic_cast<ShapeClassIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ShapeClassIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ShapeClassIs element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad BooleanExpression type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  {
    doSpaces(0, outFile);
    if (PlanElement->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(PlanElement->printElement, "OrderedActionGroup") == 0)
      {
        OrderedActionGroupType * typ;
        if ((typ = dynamic_cast<OrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "UnorderedActionGroup") == 0)
      {
        UnorderedActionGroupType * typ;
        if ((typ = dynamic_cast<UnorderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<UnorderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</UnorderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad UnorderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PartiallyOrderedActionGroup") == 0)
      {
        PartiallyOrderedActionGroupType * typ;
        if ((typ = dynamic_cast<PartiallyOrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PartiallyOrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PartiallyOrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PartiallyOrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "OneOfActionGroup") == 0)
      {
        OneOfActionGroupType * typ;
        if ((typ = dynamic_cast<OneOfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OneOfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OneOfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OneOfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PickSomeActionGroup") == 0)
      {
        PickSomeActionGroupType * typ;
        if ((typ = dynamic_cast<PickSomeActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PickSomeActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PickSomeActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PickSomeActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateAll") == 0)
      {
        MeasureEvaluateAllActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateAllActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateAll");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateAll>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateAll element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateSpecified") == 0)
      {
        MeasureEvaluateSpecifiedActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateSpecifiedActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateSpecified");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateSpecified>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateSpecified element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "EvaluateSpecifiedCharacteristics") == 0)
      {
        EvaluateSpecifiedCharacteristicsActionType * typ;
        if ((typ = dynamic_cast<EvaluateSpecifiedCharacteristicsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<EvaluateSpecifiedCharacteristics");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</EvaluateSpecifiedCharacteristics>\n");
          }
        else
          {
            fprintf(stderr, "bad EvaluateSpecifiedCharacteristics element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "Halt") == 0)
      {
        HaltActionType * typ;
        if ((typ = dynamic_cast<HaltActionType *>(PlanElement)))
          {
            fprintf(outFile, "<Halt");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Halt>\n");
          }
        else
          {
            fprintf(stderr, "bad Halt element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedFeatures") == 0)
      {
        MeasureSpecifiedFeaturesActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedFeaturesActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedFeatures");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedFeatures>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedFeatures element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedMeasurands") == 0)
      {
        MeasureSpecifiedMeasurandsActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedMeasurandsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedMeasurands");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedMeasurands>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedMeasurands element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "IfActionGroup") == 0)
      {
        IfActionGroupType * typ;
        if ((typ = dynamic_cast<IfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<IfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</IfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad IfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "WhileActionGroup") == 0)
      {
        WhileActionGroupType * typ;
        if ((typ = dynamic_cast<WhileActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<WhileActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</WhileActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad WhileActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "VariableSet") == 0)
      {
        VariableSetType * typ;
        if ((typ = dynamic_cast<VariableSetType *>(PlanElement)))
          {
            fprintf(outFile, "<VariableSet");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</VariableSet>\n");
          }
        else
          {
            fprintf(stderr, "bad VariableSet element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad PlanElement type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

BooleanExpressionBaseType * TestAndPlanElementType::getBooleanExpression()
{return BooleanExpression;}

void TestAndPlanElementType::setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

PlanElementBaseType * TestAndPlanElementType::getPlanElement()
{return PlanElement;}

void TestAndPlanElementType::setPlanElement(PlanElementBaseType * PlanElementIn)
{PlanElement = PlanElementIn;}

/*********************************************************************/

/* class TestAndPlanElementTypeLisd

*/

TestAndPlanElementTypeLisd::TestAndPlanElementTypeLisd() {}

TestAndPlanElementTypeLisd::TestAndPlanElementTypeLisd(TestAndPlanElementType * aTestAndPlanElementType)
{
  push_back(aTestAndPlanElementType);
}

TestAndPlanElementTypeLisd::~TestAndPlanElementTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<TestAndPlanElementType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void TestAndPlanElementTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class TextInstructionType

*/

TextInstructionType::TextInstructionType() :
  WorkInstructionBaseType()
{
  TextInstruction = 0;
}

TextInstructionType::TextInstructionType(
 AttributesType * AttributesIn,
 XmlString * TextInstructionIn) :
  WorkInstructionBaseType(
    AttributesIn)
{
  TextInstruction = TextInstructionIn;
}

TextInstructionType::TextInstructionType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 XmlString * TextInstructionIn) :
  WorkInstructionBaseType(
    idIn,
    AttributesIn)
{
  TextInstruction = TextInstructionIn;
}

TextInstructionType::~TextInstructionType()
{
  #ifndef NODESTRUCT
  delete TextInstruction;
  #endif
}

void TextInstructionType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<TextInstruction");
  TextInstruction->printSelf(outFile);
  fprintf(outFile, "</TextInstruction>\n");
  doSpaces(-INDENT, outFile);
}

bool TextInstructionType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in TextInstructionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in TextInstructionType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TextInstructionType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in TextInstructionType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

XmlString * TextInstructionType::getTextInstruction()
{return TextInstruction;}

void TextInstructionType::setTextInstruction(XmlString * TextInstructionIn)
{TextInstruction = TextInstructionIn;}

/*********************************************************************/

/* class TheodoliteMeasureFeatureMethodType

*/

TheodoliteMeasureFeatureMethodType::TheodoliteMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

TheodoliteMeasureFeatureMethodType::TheodoliteMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

TheodoliteMeasureFeatureMethodType::TheodoliteMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

TheodoliteMeasureFeatureMethodType::~TheodoliteMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void TheodoliteMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool TheodoliteMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in TheodoliteMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in TheodoliteMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in TheodoliteMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in TheodoliteMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class UniversalLengthMeasureFeatureMethodType

*/

UniversalLengthMeasureFeatureMethodType::UniversalLengthMeasureFeatureMethodType() :
  MeasureFeatureMethodBaseType()
{
}

UniversalLengthMeasureFeatureMethodType::UniversalLengthMeasureFeatureMethodType(
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

UniversalLengthMeasureFeatureMethodType::UniversalLengthMeasureFeatureMethodType(
 QIFIdType * idIn,
 ArrayReferenceType * ChosenResourceIdsIn,
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn) :
  MeasureFeatureMethodBaseType(
    idIn,
    ChosenResourceIdsIn,
    WorkInstructionIdsIn,
    AttributesIn)
{
}

UniversalLengthMeasureFeatureMethodType::~UniversalLengthMeasureFeatureMethodType()
{
  #ifndef NODESTRUCT
  #endif
}

void UniversalLengthMeasureFeatureMethodType::printSelf(FILE * outFile)
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
  if (ChosenResourceIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<ChosenResourceIds");
      ChosenResourceIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</ChosenResourceIds>\n");
    }
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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

bool UniversalLengthMeasureFeatureMethodType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in UniversalLengthMeasureFeatureMethodType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in UniversalLengthMeasureFeatureMethodType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in UniversalLengthMeasureFeatureMethodType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in UniversalLengthMeasureFeatureMethodType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

/*********************************************************************/

/* class UnnumberedPlanElementsType

*/

UnnumberedPlanElementsType::UnnumberedPlanElementsType()
{
  n = 0;
  PlanElement = 0;
}

UnnumberedPlanElementsType::UnnumberedPlanElementsType(
 PlanElementBaseTypeLisd * PlanElementIn)
{
  n = 0;
  PlanElement = PlanElementIn;
}

UnnumberedPlanElementsType::UnnumberedPlanElementsType(
 NaturalType * nIn,
 PlanElementBaseTypeLisd * PlanElementIn)
{
  n = nIn;
  PlanElement = PlanElementIn;
}

UnnumberedPlanElementsType::~UnnumberedPlanElementsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete PlanElement;
  #endif
}

void UnnumberedPlanElementsType::printSelf(FILE * outFile)
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
    if (!PlanElement)
      {
        fprintf(stderr, "PlanElement list is missing\n");
        exit(1);
      }
    if (PlanElement->size() == 0)
      {
        fprintf(stderr, "PlanElement list is empty\n");
        exit(1);
      }
    std::list<PlanElementBaseType *>::iterator iter;
    for (iter = PlanElement->begin();
         iter != PlanElement->end(); iter++)
      {
        PlanElementBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "OrderedActionGroup") == 0)
          {
            OrderedActionGroupType * typ;
            if ((typ = dynamic_cast<OrderedActionGroupType *>(basie)))
              {
                fprintf(outFile, "<OrderedActionGroup");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</OrderedActionGroup>\n");
              }
            else
              {
                fprintf(stderr, "bad OrderedActionGroup element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "UnorderedActionGroup") == 0)
          {
            UnorderedActionGroupType * typ;
            if ((typ = dynamic_cast<UnorderedActionGroupType *>(basie)))
              {
                fprintf(outFile, "<UnorderedActionGroup");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</UnorderedActionGroup>\n");
              }
            else
              {
                fprintf(stderr, "bad UnorderedActionGroup element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "PartiallyOrderedActionGroup") == 0)
          {
            PartiallyOrderedActionGroupType * typ;
            if ((typ = dynamic_cast<PartiallyOrderedActionGroupType *>(basie)))
              {
                fprintf(outFile, "<PartiallyOrderedActionGroup");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</PartiallyOrderedActionGroup>\n");
              }
            else
              {
                fprintf(stderr, "bad PartiallyOrderedActionGroup element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "OneOfActionGroup") == 0)
          {
            OneOfActionGroupType * typ;
            if ((typ = dynamic_cast<OneOfActionGroupType *>(basie)))
              {
                fprintf(outFile, "<OneOfActionGroup");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</OneOfActionGroup>\n");
              }
            else
              {
                fprintf(stderr, "bad OneOfActionGroup element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "PickSomeActionGroup") == 0)
          {
            PickSomeActionGroupType * typ;
            if ((typ = dynamic_cast<PickSomeActionGroupType *>(basie)))
              {
                fprintf(outFile, "<PickSomeActionGroup");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</PickSomeActionGroup>\n");
              }
            else
              {
                fprintf(stderr, "bad PickSomeActionGroup element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "MeasureEvaluateAll") == 0)
          {
            MeasureEvaluateAllActionType * typ;
            if ((typ = dynamic_cast<MeasureEvaluateAllActionType *>(basie)))
              {
                fprintf(outFile, "<MeasureEvaluateAll");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</MeasureEvaluateAll>\n");
              }
            else
              {
                fprintf(stderr, "bad MeasureEvaluateAll element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "MeasureEvaluateSpecified") == 0)
          {
            MeasureEvaluateSpecifiedActionType * typ;
            if ((typ = dynamic_cast<MeasureEvaluateSpecifiedActionType *>(basie)))
              {
                fprintf(outFile, "<MeasureEvaluateSpecified");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</MeasureEvaluateSpecified>\n");
              }
            else
              {
                fprintf(stderr, "bad MeasureEvaluateSpecified element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "EvaluateSpecifiedCharacteristics") == 0)
          {
            EvaluateSpecifiedCharacteristicsActionType * typ;
            if ((typ = dynamic_cast<EvaluateSpecifiedCharacteristicsActionType *>(basie)))
              {
                fprintf(outFile, "<EvaluateSpecifiedCharacteristics");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</EvaluateSpecifiedCharacteristics>\n");
              }
            else
              {
                fprintf(stderr, "bad EvaluateSpecifiedCharacteristics element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "Halt") == 0)
          {
            HaltActionType * typ;
            if ((typ = dynamic_cast<HaltActionType *>(basie)))
              {
                fprintf(outFile, "<Halt");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</Halt>\n");
              }
            else
              {
                fprintf(stderr, "bad Halt element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "MeasureSpecifiedFeatures") == 0)
          {
            MeasureSpecifiedFeaturesActionType * typ;
            if ((typ = dynamic_cast<MeasureSpecifiedFeaturesActionType *>(basie)))
              {
                fprintf(outFile, "<MeasureSpecifiedFeatures");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</MeasureSpecifiedFeatures>\n");
              }
            else
              {
                fprintf(stderr, "bad MeasureSpecifiedFeatures element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "MeasureSpecifiedMeasurands") == 0)
          {
            MeasureSpecifiedMeasurandsActionType * typ;
            if ((typ = dynamic_cast<MeasureSpecifiedMeasurandsActionType *>(basie)))
              {
                fprintf(outFile, "<MeasureSpecifiedMeasurands");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</MeasureSpecifiedMeasurands>\n");
              }
            else
              {
                fprintf(stderr, "bad MeasureSpecifiedMeasurands element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "IfActionGroup") == 0)
          {
            IfActionGroupType * typ;
            if ((typ = dynamic_cast<IfActionGroupType *>(basie)))
              {
                fprintf(outFile, "<IfActionGroup");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</IfActionGroup>\n");
              }
            else
              {
                fprintf(stderr, "bad IfActionGroup element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "WhileActionGroup") == 0)
          {
            WhileActionGroupType * typ;
            if ((typ = dynamic_cast<WhileActionGroupType *>(basie)))
              {
                fprintf(outFile, "<WhileActionGroup");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</WhileActionGroup>\n");
              }
            else
              {
                fprintf(stderr, "bad WhileActionGroup element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VariableSet") == 0)
          {
            VariableSetType * typ;
            if ((typ = dynamic_cast<VariableSetType *>(basie)))
              {
                fprintf(outFile, "<VariableSet");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VariableSet>\n");
              }
            else
              {
                fprintf(stderr, "bad VariableSet element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad PlanElement type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool UnnumberedPlanElementsType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in UnnumberedPlanElementsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in UnnumberedPlanElementsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in UnnumberedPlanElementsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in UnnumberedPlanElementsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * UnnumberedPlanElementsType::getn()
{return n;}

void UnnumberedPlanElementsType::setn(NaturalType * nIn)
{n = nIn;}

PlanElementBaseTypeLisd * UnnumberedPlanElementsType::getPlanElement()
{return PlanElement;}

void UnnumberedPlanElementsType::setPlanElement(PlanElementBaseTypeLisd * PlanElementIn)
{PlanElement = PlanElementIn;}

/*********************************************************************/

/* class UnorderedActionGroupType

*/

UnorderedActionGroupType::UnorderedActionGroupType() :
  ActionGroupBaseType()
{
  Steps = 0;
}

UnorderedActionGroupType::UnorderedActionGroupType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
 UnnumberedPlanElementsType * StepsIn) :
  ActionGroupBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    MeasureActionGroupFunctionIn)
{
  Steps = StepsIn;
}

UnorderedActionGroupType::~UnorderedActionGroupType()
{
  #ifndef NODESTRUCT
  delete Steps;
  #endif
}

void UnorderedActionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  doSpaces(0, outFile);
  fprintf(outFile, "<Steps");
  Steps->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</Steps>\n");
  doSpaces(-INDENT, outFile);
}

UnnumberedPlanElementsType * UnorderedActionGroupType::getSteps()
{return Steps;}

void UnorderedActionGroupType::setSteps(UnnumberedPlanElementsType * StepsIn)
{Steps = StepsIn;}

/*********************************************************************/

/* class VariableDeclarationType

*/

VariableDeclarationType::VariableDeclarationType()
{
  Name = 0;
  Val = 0;
}

VariableDeclarationType::VariableDeclarationType(
 XmlID * NameIn,
 XmlDecimal * ValIn)
{
  Name = NameIn;
  Val = ValIn;
}

VariableDeclarationType::~VariableDeclarationType()
{
  #ifndef NODESTRUCT
  delete Name;
  delete Val;
  #endif
}

void VariableDeclarationType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "<Name");
  Name->printSelf(outFile);
  fprintf(outFile, "</Name>\n");
  doSpaces(0, outFile);
  fprintf(outFile, "<Val");
  Val->printSelf(outFile);
  fprintf(outFile, "</Val>\n");
  doSpaces(-INDENT, outFile);
}

XmlID * VariableDeclarationType::getName()
{return Name;}

void VariableDeclarationType::setName(XmlID * NameIn)
{Name = NameIn;}

XmlDecimal * VariableDeclarationType::getVal()
{return Val;}

void VariableDeclarationType::setVal(XmlDecimal * ValIn)
{Val = ValIn;}

/*********************************************************************/

/* class VariableDeclarationTypeLisd

*/

VariableDeclarationTypeLisd::VariableDeclarationTypeLisd() {}

VariableDeclarationTypeLisd::VariableDeclarationTypeLisd(VariableDeclarationType * aVariableDeclarationType)
{
  push_back(aVariableDeclarationType);
}

VariableDeclarationTypeLisd::~VariableDeclarationTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<VariableDeclarationType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void VariableDeclarationTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class VariableSetType

*/

VariableSetType::VariableSetType() :
  PlanElementBaseType()
{
  VariableName = 0;
  ArithmeticExpression = 0;
}

VariableSetType::VariableSetType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 XmlIDREF * VariableNameIn,
 ArithmeticExpressionBaseType * ArithmeticExpressionIn) :
  PlanElementBaseType(
    WorkInstructionIdsIn,
    AttributesIn)
{
  VariableName = VariableNameIn;
  ArithmeticExpression = ArithmeticExpressionIn;
}

VariableSetType::~VariableSetType()
{
  #ifndef NODESTRUCT
  delete VariableName;
  delete ArithmeticExpression;
  #endif
}

void VariableSetType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
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
  fprintf(outFile, "<VariableName");
  VariableName->printSelf(outFile);
  fprintf(outFile, "</VariableName>\n");
  {
    doSpaces(0, outFile);
    if (ArithmeticExpression->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticConstant") == 0)
      {
        ArithmeticConstantType * typ;
        if ((typ = dynamic_cast<ArithmeticConstantType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticConstant");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ArithmeticConstant element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Plus") == 0)
      {
        PlusType * typ;
        if ((typ = dynamic_cast<PlusType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Plus");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Plus>\n");
          }
        else
          {
            fprintf(stderr, "bad Plus element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Max") == 0)
      {
        MaxType * typ;
        if ((typ = dynamic_cast<MaxType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Max");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Max>\n");
          }
        else
          {
            fprintf(stderr, "bad Max element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Min") == 0)
      {
        MinType * typ;
        if ((typ = dynamic_cast<MinType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Min");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Min>\n");
          }
        else
          {
            fprintf(stderr, "bad Min element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Minus") == 0)
      {
        MinusType * typ;
        if ((typ = dynamic_cast<MinusType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Minus");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Minus>\n");
          }
        else
          {
            fprintf(stderr, "bad Minus element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Negate") == 0)
      {
        NegateType * typ;
        if ((typ = dynamic_cast<NegateType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Negate");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Negate>\n");
          }
        else
          {
            fprintf(stderr, "bad Negate element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "Times") == 0)
      {
        TimesType * typ;
        if ((typ = dynamic_cast<TimesType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<Times");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Times>\n");
          }
        else
          {
            fprintf(stderr, "bad Times element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "DividedBy") == 0)
      {
        DividedByType * typ;
        if ((typ = dynamic_cast<DividedByType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<DividedBy");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</DividedBy>\n");
          }
        else
          {
            fprintf(stderr, "bad DividedBy element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticFeatureParameter") == 0)
      {
        ArithmeticFeatureParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticFeatureParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticFeatureParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticFeatureParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticFeatureParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticCharacteristicParameter") == 0)
      {
        ArithmeticCharacteristicParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticCharacteristicParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticCharacteristicParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticCharacteristicParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticCharacteristicParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticDMEParameter") == 0)
      {
        ArithmeticDMEParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticDMEParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticDMEParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticDMEParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticDMEParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticParameterValue") == 0)
      {
        ArithmeticParameterValueType * typ;
        if ((typ = dynamic_cast<ArithmeticParameterValueType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticParameterValue");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticParameterValue>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticParameterValue element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "ArithmeticPartParameter") == 0)
      {
        ArithmeticPartParameterType * typ;
        if ((typ = dynamic_cast<ArithmeticPartParameterType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<ArithmeticPartParameter");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticPartParameter>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticPartParameter element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "CharacteristicTolerance") == 0)
      {
        CharacteristicToleranceType * typ;
        if ((typ = dynamic_cast<CharacteristicToleranceType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<CharacteristicTolerance");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad CharacteristicTolerance element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "FeatureLength") == 0)
      {
        FeatureLengthType * typ;
        if ((typ = dynamic_cast<FeatureLengthType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<FeatureLength");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureLength element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "FeatureArea") == 0)
      {
        FeatureAreaType * typ;
        if ((typ = dynamic_cast<FeatureAreaType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<FeatureArea");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureArea element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "FeatureSize") == 0)
      {
        FeatureSizeType * typ;
        if ((typ = dynamic_cast<FeatureSizeType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<FeatureSize");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureSize element\n");
            exit(1);
          }
      }
    else if (strcmp(ArithmeticExpression->printElement, "VariableValue") == 0)
      {
        VariableValueType * typ;
        if ((typ = dynamic_cast<VariableValueType *>(ArithmeticExpression)))
          {
            fprintf(outFile, "<VariableValue");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</VariableValue>\n");
          }
        else
          {
            fprintf(stderr, "bad VariableValue element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad ArithmeticExpression type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

XmlIDREF * VariableSetType::getVariableName()
{return VariableName;}

void VariableSetType::setVariableName(XmlIDREF * VariableNameIn)
{VariableName = VariableNameIn;}

ArithmeticExpressionBaseType * VariableSetType::getArithmeticExpression()
{return ArithmeticExpression;}

void VariableSetType::setArithmeticExpression(ArithmeticExpressionBaseType * ArithmeticExpressionIn)
{ArithmeticExpression = ArithmeticExpressionIn;}

/*********************************************************************/

/* class VideoInstructionType

*/

VideoInstructionType::VideoInstructionType() :
  WorkInstructionBaseType()
{
  ExternalFile = 0;
}

VideoInstructionType::VideoInstructionType(
 AttributesType * AttributesIn,
 ExternalFileReferenceType * ExternalFileIn) :
  WorkInstructionBaseType(
    AttributesIn)
{
  ExternalFile = ExternalFileIn;
}

VideoInstructionType::VideoInstructionType(
 QIFIdType * idIn,
 AttributesType * AttributesIn,
 ExternalFileReferenceType * ExternalFileIn) :
  WorkInstructionBaseType(
    idIn,
    AttributesIn)
{
  ExternalFile = ExternalFileIn;
}

VideoInstructionType::~VideoInstructionType()
{
  #ifndef NODESTRUCT
  delete ExternalFile;
  #endif
}

void VideoInstructionType::printSelf(FILE * outFile)
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
  doSpaces(0, outFile);
  fprintf(outFile, "<ExternalFile");
  ExternalFile->printSelf(outFile);
  doSpaces(0, outFile);
  fprintf(outFile, "</ExternalFile>\n");
  doSpaces(-INDENT, outFile);
}

bool VideoInstructionType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in VideoInstructionType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in VideoInstructionType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in VideoInstructionType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in VideoInstructionType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

ExternalFileReferenceType * VideoInstructionType::getExternalFile()
{return ExternalFile;}

void VideoInstructionType::setExternalFile(ExternalFileReferenceType * ExternalFileIn)
{ExternalFile = ExternalFileIn;}

/*********************************************************************/

/* class WhileActionGroupType

*/

WhileActionGroupType::WhileActionGroupType() :
  ActionGroupBaseType()
{
  BooleanExpression = 0;
  PlanElement = 0;
}

WhileActionGroupType::WhileActionGroupType(
 ArrayReferenceType * WorkInstructionIdsIn,
 AttributesType * AttributesIn,
 MeasureActionGroupFunctionType * MeasureActionGroupFunctionIn,
 BooleanExpressionBaseType * BooleanExpressionIn,
 PlanElementBaseType * PlanElementIn) :
  ActionGroupBaseType(
    WorkInstructionIdsIn,
    AttributesIn,
    MeasureActionGroupFunctionIn)
{
  BooleanExpression = BooleanExpressionIn;
  PlanElement = PlanElementIn;
}

WhileActionGroupType::~WhileActionGroupType()
{
  #ifndef NODESTRUCT
  delete BooleanExpression;
  delete PlanElement;
  #endif
}

void WhileActionGroupType::printSelf(FILE * outFile)
{
  fprintf(outFile, ">\n");
  doSpaces(+INDENT, outFile);
  if (WorkInstructionIds)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<WorkInstructionIds");
      WorkInstructionIds->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</WorkInstructionIds>\n");
    }
  if (Attributes)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<Attributes");
      Attributes->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</Attributes>\n");
    }
  if (MeasureActionGroupFunction)
    {
      doSpaces(0, outFile);
      fprintf(outFile, "<MeasureActionGroupFunction");
      MeasureActionGroupFunction->printSelf(outFile);
      doSpaces(0, outFile);
      fprintf(outFile, "</MeasureActionGroupFunction>\n");
    }
  {
    doSpaces(0, outFile);
    if (BooleanExpression->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(BooleanExpression->printElement, "Not") == 0)
      {
        NotType * typ;
        if ((typ = dynamic_cast<NotType *>(BooleanExpression)))
          {
            fprintf(outFile, "<Not");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Not>\n");
          }
        else
          {
            fprintf(stderr, "bad Not element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ConstantIs") == 0)
      {
        ConstantIsType * typ;
        if ((typ = dynamic_cast<ConstantIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ConstantIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ConstantIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "And") == 0)
      {
        AndType * typ;
        if ((typ = dynamic_cast<AndType *>(BooleanExpression)))
          {
            fprintf(outFile, "<And");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</And>\n");
          }
        else
          {
            fprintf(stderr, "bad And element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "Or") == 0)
      {
        OrType * typ;
        if ((typ = dynamic_cast<OrType *>(BooleanExpression)))
          {
            fprintf(outFile, "<Or");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Or>\n");
          }
        else
          {
            fprintf(stderr, "bad Or element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "BooleanEqual") == 0)
      {
        BooleanEqualType * typ;
        if ((typ = dynamic_cast<BooleanEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<BooleanEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</BooleanEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad BooleanEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ArithmeticEqual") == 0)
      {
        ArithmeticEqualType * typ;
        if ((typ = dynamic_cast<ArithmeticEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ArithmeticEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</ArithmeticEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad ArithmeticEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "GreaterThan") == 0)
      {
        GreaterThanType * typ;
        if ((typ = dynamic_cast<GreaterThanType *>(BooleanExpression)))
          {
            fprintf(outFile, "<GreaterThan");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</GreaterThan>\n");
          }
        else
          {
            fprintf(stderr, "bad GreaterThan element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "GreaterOrEqual") == 0)
      {
        GreaterOrEqualType * typ;
        if ((typ = dynamic_cast<GreaterOrEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<GreaterOrEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</GreaterOrEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad GreaterOrEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "LessThan") == 0)
      {
        LessThanType * typ;
        if ((typ = dynamic_cast<LessThanType *>(BooleanExpression)))
          {
            fprintf(outFile, "<LessThan");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</LessThan>\n");
          }
        else
          {
            fprintf(stderr, "bad LessThan element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "LessOrEqual") == 0)
      {
        LessOrEqualType * typ;
        if ((typ = dynamic_cast<LessOrEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<LessOrEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</LessOrEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad LessOrEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "TokenEqual") == 0)
      {
        TokenEqualType * typ;
        if ((typ = dynamic_cast<TokenEqualType *>(BooleanExpression)))
          {
            fprintf(outFile, "<TokenEqual");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</TokenEqual>\n");
          }
        else
          {
            fprintf(stderr, "bad TokenEqual element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "CharacteristicIs") == 0)
      {
        CharacteristicIsType * typ;
        if ((typ = dynamic_cast<CharacteristicIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<CharacteristicIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad CharacteristicIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureIsDatum") == 0)
      {
        FeatureIsDatumType * typ;
        if ((typ = dynamic_cast<FeatureIsDatumType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureIsDatum");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureIsDatum element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureIsInternal") == 0)
      {
        FeatureIsInternalType * typ;
        if ((typ = dynamic_cast<FeatureIsInternalType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureIsInternal");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureIsInternal element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "FeatureTypeIs") == 0)
      {
        FeatureTypeIsType * typ;
        if ((typ = dynamic_cast<FeatureTypeIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<FeatureTypeIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad FeatureTypeIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "SamplingCategoryIs") == 0)
      {
        SamplingCategoryIsType * typ;
        if ((typ = dynamic_cast<SamplingCategoryIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<SamplingCategoryIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad SamplingCategoryIs element\n");
            exit(1);
          }
      }
    else if (strcmp(BooleanExpression->printElement, "ShapeClassIs") == 0)
      {
        ShapeClassIsType * typ;
        if ((typ = dynamic_cast<ShapeClassIsType *>(BooleanExpression)))
          {
            fprintf(outFile, "<ShapeClassIs");
            typ->printSelf(outFile);
          }
        else
          {
            fprintf(stderr, "bad ShapeClassIs element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad BooleanExpression type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  {
    doSpaces(0, outFile);
    if (PlanElement->printElement == 0)
      {
        fprintf(stderr, "element name missing\n");
        exit(1);
      }
    else if (strcmp(PlanElement->printElement, "OrderedActionGroup") == 0)
      {
        OrderedActionGroupType * typ;
        if ((typ = dynamic_cast<OrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "UnorderedActionGroup") == 0)
      {
        UnorderedActionGroupType * typ;
        if ((typ = dynamic_cast<UnorderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<UnorderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</UnorderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad UnorderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PartiallyOrderedActionGroup") == 0)
      {
        PartiallyOrderedActionGroupType * typ;
        if ((typ = dynamic_cast<PartiallyOrderedActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PartiallyOrderedActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PartiallyOrderedActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PartiallyOrderedActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "OneOfActionGroup") == 0)
      {
        OneOfActionGroupType * typ;
        if ((typ = dynamic_cast<OneOfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<OneOfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</OneOfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad OneOfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "PickSomeActionGroup") == 0)
      {
        PickSomeActionGroupType * typ;
        if ((typ = dynamic_cast<PickSomeActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<PickSomeActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</PickSomeActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad PickSomeActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateAll") == 0)
      {
        MeasureEvaluateAllActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateAllActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateAll");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateAll>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateAll element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureEvaluateSpecified") == 0)
      {
        MeasureEvaluateSpecifiedActionType * typ;
        if ((typ = dynamic_cast<MeasureEvaluateSpecifiedActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureEvaluateSpecified");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureEvaluateSpecified>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureEvaluateSpecified element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "EvaluateSpecifiedCharacteristics") == 0)
      {
        EvaluateSpecifiedCharacteristicsActionType * typ;
        if ((typ = dynamic_cast<EvaluateSpecifiedCharacteristicsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<EvaluateSpecifiedCharacteristics");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</EvaluateSpecifiedCharacteristics>\n");
          }
        else
          {
            fprintf(stderr, "bad EvaluateSpecifiedCharacteristics element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "Halt") == 0)
      {
        HaltActionType * typ;
        if ((typ = dynamic_cast<HaltActionType *>(PlanElement)))
          {
            fprintf(outFile, "<Halt");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</Halt>\n");
          }
        else
          {
            fprintf(stderr, "bad Halt element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedFeatures") == 0)
      {
        MeasureSpecifiedFeaturesActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedFeaturesActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedFeatures");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedFeatures>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedFeatures element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "MeasureSpecifiedMeasurands") == 0)
      {
        MeasureSpecifiedMeasurandsActionType * typ;
        if ((typ = dynamic_cast<MeasureSpecifiedMeasurandsActionType *>(PlanElement)))
          {
            fprintf(outFile, "<MeasureSpecifiedMeasurands");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</MeasureSpecifiedMeasurands>\n");
          }
        else
          {
            fprintf(stderr, "bad MeasureSpecifiedMeasurands element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "IfActionGroup") == 0)
      {
        IfActionGroupType * typ;
        if ((typ = dynamic_cast<IfActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<IfActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</IfActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad IfActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "WhileActionGroup") == 0)
      {
        WhileActionGroupType * typ;
        if ((typ = dynamic_cast<WhileActionGroupType *>(PlanElement)))
          {
            fprintf(outFile, "<WhileActionGroup");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</WhileActionGroup>\n");
          }
        else
          {
            fprintf(stderr, "bad WhileActionGroup element\n");
            exit(1);
          }
      }
    else if (strcmp(PlanElement->printElement, "VariableSet") == 0)
      {
        VariableSetType * typ;
        if ((typ = dynamic_cast<VariableSetType *>(PlanElement)))
          {
            fprintf(outFile, "<VariableSet");
            typ->printSelf(outFile);
            doSpaces(0, outFile);
            fprintf(outFile, "</VariableSet>\n");
          }
        else
          {
            fprintf(stderr, "bad VariableSet element\n");
            exit(1);
          }
      }
    else
      {
        fprintf(stderr, "bad PlanElement type\n");
        fprintf(stderr, " exiting\n");
        exit(1);
      }
  }
  doSpaces(-INDENT, outFile);
}

BooleanExpressionBaseType * WhileActionGroupType::getBooleanExpression()
{return BooleanExpression;}

void WhileActionGroupType::setBooleanExpression(BooleanExpressionBaseType * BooleanExpressionIn)
{BooleanExpression = BooleanExpressionIn;}

PlanElementBaseType * WhileActionGroupType::getPlanElement()
{return PlanElement;}

void WhileActionGroupType::setPlanElement(PlanElementBaseType * PlanElementIn)
{PlanElement = PlanElementIn;}

/*********************************************************************/

/* class WorkInstructionBaseType

*/

WorkInstructionBaseType::WorkInstructionBaseType()
{
  id = 0;
  Attributes = 0;
}

WorkInstructionBaseType::WorkInstructionBaseType(
 AttributesType * AttributesIn)
{
  id = 0;
  Attributes = AttributesIn;
}

WorkInstructionBaseType::WorkInstructionBaseType(
 QIFIdType * idIn,
 AttributesType * AttributesIn)
{
  id = idIn;
  Attributes = AttributesIn;
}

WorkInstructionBaseType::~WorkInstructionBaseType()
{
  #ifndef NODESTRUCT
  delete id;
  delete Attributes;
  #endif
}

void WorkInstructionBaseType::printSelf(FILE * outFile)
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
  doSpaces(-INDENT, outFile);
}

bool WorkInstructionBaseType::badAttributes(
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
          if (id)
            {
              fprintf(stderr, "two values for id in WorkInstructionBaseType\n");
              returnValue = true;
              break;
            }
          idVal = new QIFIdType(decl->val.c_str());
          if (idVal->bad)
            {
              delete idVal;
              fprintf(stderr, "bad value %s for id in WorkInstructionBaseType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            id = idVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in WorkInstructionBaseType\n");
          returnValue = true;
          break;
        }
    }
  if (id == 0)
    {
      fprintf(stderr, "required attribute \"id\" missing in WorkInstructionBaseType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete id;
      id = 0;
    }
  return returnValue;
}

QIFIdType * WorkInstructionBaseType::getid()
{return id;}

void WorkInstructionBaseType::setid(QIFIdType * idIn)
{id = idIn;}

AttributesType * WorkInstructionBaseType::getAttributes()
{return Attributes;}

void WorkInstructionBaseType::setAttributes(AttributesType * AttributesIn)
{Attributes = AttributesIn;}

/*********************************************************************/

/* class WorkInstructionBaseTypeLisd

*/

WorkInstructionBaseTypeLisd::WorkInstructionBaseTypeLisd() {}

WorkInstructionBaseTypeLisd::WorkInstructionBaseTypeLisd(WorkInstructionBaseType * aWorkInstructionBaseType)
{
  push_back(aWorkInstructionBaseType);
}

WorkInstructionBaseTypeLisd::~WorkInstructionBaseTypeLisd()
{
  #ifndef NODESTRUCT
  std::list<WorkInstructionBaseType *>::iterator iter;

  for (iter = begin(); iter != end(); iter++)
    {
      delete *iter;
    }
  #endif
}

void WorkInstructionBaseTypeLisd::printSelf(FILE * outFile){}

/*********************************************************************/

/* class WorkInstructionsType

*/

WorkInstructionsType::WorkInstructionsType()
{
  n = 0;
  WorkInstruction = 0;
}

WorkInstructionsType::WorkInstructionsType(
 WorkInstructionBaseTypeLisd * WorkInstructionIn)
{
  n = 0;
  WorkInstruction = WorkInstructionIn;
}

WorkInstructionsType::WorkInstructionsType(
 NaturalType * nIn,
 WorkInstructionBaseTypeLisd * WorkInstructionIn)
{
  n = nIn;
  WorkInstruction = WorkInstructionIn;
}

WorkInstructionsType::~WorkInstructionsType()
{
  #ifndef NODESTRUCT
  delete n;
  delete WorkInstruction;
  #endif
}

void WorkInstructionsType::printSelf(FILE * outFile)
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
    if (!WorkInstruction)
      {
        fprintf(stderr, "WorkInstruction list is missing\n");
        exit(1);
      }
    if (WorkInstruction->size() == 0)
      {
        fprintf(stderr, "WorkInstruction list is empty\n");
        exit(1);
      }
    std::list<WorkInstructionBaseType *>::iterator iter;
    for (iter = WorkInstruction->begin();
         iter != WorkInstruction->end(); iter++)
      {
        WorkInstructionBaseType * basie;
        basie = *iter;
        doSpaces(0, outFile);
        if (basie->printElement == 0)
          {
            fprintf(stderr, "element name missing\n");
            exit(1);
          }
        else if (strcmp(basie->printElement, "TextInstruction") == 0)
          {
            TextInstructionType * typ;
            if ((typ = dynamic_cast<TextInstructionType *>(basie)))
              {
                fprintf(outFile, "<TextInstruction");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</TextInstruction>\n");
              }
            else
              {
                fprintf(stderr, "bad TextInstruction element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "DocumentFileInstruction") == 0)
          {
            DocumentFileInstructionType * typ;
            if ((typ = dynamic_cast<DocumentFileInstructionType *>(basie)))
              {
                fprintf(outFile, "<DocumentFileInstruction");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</DocumentFileInstruction>\n");
              }
            else
              {
                fprintf(stderr, "bad DocumentFileInstruction element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "ImageInstruction") == 0)
          {
            ImageInstructionType * typ;
            if ((typ = dynamic_cast<ImageInstructionType *>(basie)))
              {
                fprintf(outFile, "<ImageInstruction");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</ImageInstruction>\n");
              }
            else
              {
                fprintf(stderr, "bad ImageInstruction element\n");
                exit(1);
              }
          }
        else if (strcmp(basie->printElement, "VideoInstruction") == 0)
          {
            VideoInstructionType * typ;
            if ((typ = dynamic_cast<VideoInstructionType *>(basie)))
              {
                fprintf(outFile, "<VideoInstruction");
                typ->printSelf(outFile);
                doSpaces(0, outFile);
                fprintf(outFile, "</VideoInstruction>\n");
              }
            else
              {
                fprintf(stderr, "bad VideoInstruction element\n");
                exit(1);
              }
          }
        else
          {
            fprintf(stderr, "bad WorkInstruction type\n");
            fprintf(stderr, " exiting\n");
            exit(1);
          }
      }
  }
  doSpaces(-INDENT, outFile);
}

bool WorkInstructionsType::badAttributes(
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
          if (n)
            {
              fprintf(stderr, "two values for n in WorkInstructionsType\n");
              returnValue = true;
              break;
            }
          nVal = new NaturalType(decl->val.c_str());
          if (nVal->bad)
            {
              delete nVal;
              fprintf(stderr, "bad value %s for n in WorkInstructionsType\n",
                      decl->val.c_str());
              returnValue = true;
              break;
            }
          else
            n = nVal;
        }
      else
        {
          fprintf(stderr, "bad attribute in WorkInstructionsType\n");
          returnValue = true;
          break;
        }
    }
  if (n == 0)
    {
      fprintf(stderr, "required attribute \"n\" missing in WorkInstructionsType\n");
      returnValue = true;
    }
  for (iter = attributes->begin(); iter != attributes->end(); iter++)
    {
      delete *iter;
    }
  attributes->clear();
  if (returnValue == true)
    {
      delete n;
      n = 0;
    }
  return returnValue;
}

NaturalType * WorkInstructionsType::getn()
{return n;}

void WorkInstructionsType::setn(NaturalType * nIn)
{n = nIn;}

WorkInstructionBaseTypeLisd * WorkInstructionsType::getWorkInstruction()
{return WorkInstruction;}

void WorkInstructionsType::setWorkInstruction(WorkInstructionBaseTypeLisd * WorkInstructionIn)
{WorkInstruction = WorkInstructionIn;}

/*********************************************************************/

